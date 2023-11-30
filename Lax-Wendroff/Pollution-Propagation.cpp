#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdio>

#define PI 3.14159265358979323846

const float L = 0.2;      // km street
const float v1 = 0.0139;  // km/s wind
const float v2 = 0.0005;
const float k = 1.35e-11; // km^2/s coef dif co2
const float uo = 1.98e9;   // kg/km^3
const int I = 50;          // street divisions
const int J = 50;
const int n = 7;           // number of days
const int N = n * 86400 / 300; // end time

const float q = (k * 300) / pow(L, 2);
const float w = PI;
const float dx = 0.02;
const float dy = 0.02;
const float dt = 0.0007;
const float g = dt / dx;
const float y = pow(dt / dx, 2);

float u[I][J];
float un[I][J];
float vx[I][J];
float vy[I][J];
float p[I][J];

int main() {
    int t;
    int i;
    int j;

    std::cout << N;

    // Initial Conditions
    for (t = 0; t < N; t++) {
        for (i = 0; i < I; i++) {
            for (j = 0; j < J; j++) {
                u[i][j] = 0;
            }
        }
    }

    for (i = 0; i < I - 1; i++) {
        for (j = 1; j < J - 1; j++) {
            vx[i][j] = -v2;
        }
    }

    for (i = 0; i < I - 1; i++) {
        for (j = 5; j < 15; j++) {
            vx[i][j] = v1;
        }
    }

    for (i = 30; i < 40; i++) {
        for (j = 1; j < J - 1; j++) {
            vy[i][j] = v1;
        }
    }

    p[10][10] = 1;
    p[35][35] = 1;

    // Lax Wendroff + Euler
    FILE* output;
    output = fopen("Escola.txt", "w");

    for (t = 0; t < N - 1; t++) {
        for (i = 1; i < I - 1; i++) {
            for (j = 1; j < J - 1; j++) {
                un[i][j] = u[i][j] - (g * (vx[i][j] * 300 / L) * 0.5) * (u[i + 1][j] - u[i - 1][j]) +
                           (pow(g * (vx[i][j] * 300 / L), 2) / 2) * (u[i + 1][j] - 2 * u[i][j] + u[i - 1][j]) // Conduction in X axis
                           - (g * (vy[i][j] * 300 / L) * 0.5) * (u[i][j + 1] - u[i][j - 1]) +
                           (pow(g * (vy[i][j] * 300 / L), 2) / 2) * (u[i][j + 1] - 2 * u[i][j] + u[i][j - 1]) // Conduction in Y axis
                           //+((g*vx[i][j]*300/L)*(g*vy[i][j]*300/L)/0.25)*(u[i+1][j+1]-u[i-1][j+1]-u[i+1][j-1]+u[i-1][j-1]) // Diagonal Conduction in X and Y axis
                           + y * q * (u[i][j + 1] - 2 * u[i][j] + u[i][j - 1]) + q * y * (u[i + 1][j] - 2 * u[i][j] + u[i - 1][j]) // Convection
                           + p[i][j] * ((dt / 2) * (pow(sin(w * t / 288), 2) + pow(sin(w * (t + 1) / 288), 2)) +
                                        (dt / 2) * g * (vx[i][j] * 300 / L) * pow(sin(w * t / 288), 2)); // Production
            }
        }

        for (i = 1; i < I - 1; i++) {
            for (j = 1; j < J - 1; j++) {
                u[i][j] = un[i][j];
            }
        }

        fprintf(output, "%d %lf %lf %lf \n", t, uo * u[5][45], uo * u[15][32], uo * u[26][19]);

        char buffer[100];
        FILE* output;
        sprintf(buffer, "Densitat_%d.txt", t);

        output = fopen(buffer, "w");

        for (i = 0; i < I + 1; i++) {
            for (j = 0; j < J + 1; j++) {
                if (un[i][j] < 0) {
                    un[i][j] = 0;
                }
                fprintf(output, "%lf %lf %lf \n", i * 0.2, j * 0.2, uo * un[i][j]);
            }
        }

        fclose(output);
    }

    fclose(output);
    return 0;
}
