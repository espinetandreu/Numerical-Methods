#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <stdio.h>     
#include <math.h> 
#include <cmath>
#include <bits/stdc++.h>
# define PI           3.14159265358979323846

using namespace std;
/*
	for( i=0;i<X;i++){
		for( j=0;j<Y;j++){
		for( k=0;k<Z;k++){
			}
		}
	}
*/

int L=1;
int i;	int j;	int k;	int t;
float gamma=5;
int  X=6;	int  Y=6; 	int  Z=6;
float v=gamma*0.085;
float tf=60; 	double h=0.05; int  T=(tf/h+1); 

float diff(float r,float ri){
	return (r)-(ri);
}

float fvx(float x, float x1,float x2,float x3, float x4, float x5, float x6,  	float y, float y1, float y2, float y3, float y4, float y5, float y6, float z, float z1, float z2, float z3, float z4, float z5, float z6, float a, float a1, float a2, float a3, float a4, float a5, float a6, float v){

	float l1=sqrt(pow(diff(x+a,x1+a1),2)+pow(diff(y+a,y1+a1),2)+pow(diff(z+a,z1+a1),2));
	float l2=sqrt(pow(diff(x+a,x2+a2),2)+pow(diff(y+a,y2+a2),2)+pow(diff(z+a,z2+a2),2));
	float l3=sqrt(pow(diff(x+a,x3+a3),2)+pow(diff(y+a,y3+a3),2)+pow(diff(z+a,z3+a3),2));
	float l4=sqrt(pow(diff(x+a,x4+a4),2)+pow(diff(y+a,y4+a4),2)+pow(diff(z+a,z4+a4),2));
	float l5=sqrt(pow(diff(x+a,x5+a5),2)+pow(diff(y+a,y5+a5),2)+pow(diff(z+a,z5+a5),2));
	float l6=sqrt(pow(diff(x+a,x6+a6),2)+pow(diff(y+a,y6+a6),2)+pow(diff(z+a,z6+a6),2));
	
    return -0*v +(1-l1/L)*(diff(x+a,x1+a1)/l1)	+(1-l2/L)*(diff(x+a,x2+a2)/l2)	+(1-l3/L)*(diff(x+a,x3+a3)/l3)	+(1-l4/L)*(diff(x+a,x4+a4)/l4)	+(1-l5/L)*(diff(x+a,x5+a5)/l5)	+(1-l6/L)*(diff(x+a,x6+a6)/l6);
}
float fvy(float x, float x1,float x2,float x3, float x4, float x5, float x6,  	float y, float y1, float y2, float y3, float y4, float y5, float y6, float z, float z1, float z2, float z3, float z4, float z5, float z6, float a, float a1, float a2, float a3, float a4, float a5, float a6, float v){
	
	float l1=sqrt(pow(diff(x+a,x1+a1),2)+pow(diff(y+a,y1+a1),2)+pow(diff(z+a,z1+a1),2));
	float l2=sqrt(pow(diff(x+a,x2+a2),2)+pow(diff(y+a,y2+a2),2)+pow(diff(z+a,z2+a2),2));
	float l3=sqrt(pow(diff(x+a,x3+a3),2)+pow(diff(y+a,y3+a3),2)+pow(diff(z+a,z3+a3),2));
	float l4=sqrt(pow(diff(x+a,x4+a4),2)+pow(diff(y+a,y4+a4),2)+pow(diff(z+a,z4+a4),2));
	float l5=sqrt(pow(diff(x+a,x5+a5),2)+pow(diff(y+a,y5+a5),2)+pow(diff(z+a,z5+a5),2));
	float l6=sqrt(pow(diff(x+a,x6+a6),2)+pow(diff(y+a,y6+a6),2)+pow(diff(z+a,z6+a6),2));	
	
    return -gamma*v +(1-l1/L)*(diff(y+a,y1+a1)/l1)	+(1-l2/L)*(diff(y+a,y2+a2)/l2)	+(1-l3/L)*(diff(y+a,y3+a3)/l3)	+(1-l4/L)*(diff(y+a,y4+a4)/l4)	+(1-l5/L)*(diff(y+a,y5+a5)/l5)	+(1-l6/L)*(diff(y+a,y6+a6)/l6);
}
float fvz(float x, float x1,float x2,float x3, float x4, float x5, float x6,  	float y, float y1, float y2, float y3, float y4, float y5, float y6, float z, float z1, float z2, float z3, float z4, float z5, float z6, float a, float a1, float a2, float a3, float a4, float a5, float a6, float v){
	
	float l1=sqrt(pow(diff(x+a,x1+a1),2)+pow(diff(y+a,y1+a1),2)+pow(diff(z+a,z1+a1),2));
	float l2=sqrt(pow(diff(x+a,x2+a2),2)+pow(diff(y+a,y2+a2),2)+pow(diff(z+a,z2+a2),2));
	float l3=sqrt(pow(diff(x+a,x3+a3),2)+pow(diff(y+a,y3+a3),2)+pow(diff(z+a,z3+a3),2));
	float l4=sqrt(pow(diff(x+a,x4+a4),2)+pow(diff(y+a,y4+a4),2)+pow(diff(z+a,z4+a4),2));
	float l5=sqrt(pow(diff(x+a,x5+a5),2)+pow(diff(y+a,y5+a5),2)+pow(diff(z+a,z5+a5),2));
	float l6=sqrt(pow(diff(x+a,x6+a6),2)+pow(diff(y+a,y6+a6),2)+pow(diff(z+a,z6+a6),2));
	
    return -gamma*v +(1-l1/L)*(diff(z+a,z1+a1)/l1)	+(1-l2/L)*(diff(z+a,z2+a2)/l2)	+(1-l3/L)*(diff(z+a,z3+a3)/l3)	+(1-l4/L)*(diff(z+a,z4+a4)/l4)	+(1-l5/L)*(diff(z+a,z5+a5)/l5)	+(1-l6/L)*(diff(z+a,z6+a6)/l6);
}

float fvx_paret(float x, float x1,float x2,float x3, float x4, float x5,   	float y, float y1, float y2, float y3, float y4, float y5,  float z, float z1, float z2, float z3, float z4, float z5,  float a, float a1, float a2, float a3, float a4, float a5, float v){

	float l1=sqrt(pow(diff(x+a,x1+a1),2)+pow(diff(y+a,y1+a1),2)+pow(diff(z+a,z1+a1),2));
	float l2=sqrt(pow(diff(x+a,x2+a2),2)+pow(diff(y+a,y2+a2),2)+pow(diff(z+a,z2+a2),2));
	float l3=sqrt(pow(diff(x+a,x3+a3),2)+pow(diff(y+a,y3+a3),2)+pow(diff(z+a,z3+a3),2));
	float l4=sqrt(pow(diff(x+a,x4+a4),2)+pow(diff(y+a,y4+a4),2)+pow(diff(z+a,z4+a4),2));
	float l5=sqrt(pow(diff(x+a,x5+a5),2)+pow(diff(y+a,y5+a5),2)+pow(diff(z+a,z5+a5),2));
	
	
    return -gamma*v +(1-l1/L)*(diff(x+a,x1+a1)/l1)	+(1-l2/L)*(diff(x+a,x2+a2)/l2)	+(1-l3/L)*(diff(x+a,x3+a3)/l3)	+(1-l4/L)*(diff(x+a,x4+a4)/l4)	+(1-l5/L)*(diff(x+a,x5+a5)/l5);
}
float fvy_paret(float x, float x1,float x2,float x3, float x4, float x5,   	float y, float y1, float y2, float y3, float y4, float y5,  float z, float z1, float z2, float z3, float z4, float z5,  float a, float a1, float a2, float a3, float a4, float a5, float v){
	
	float l1=sqrt(pow(diff(x+a,x1+a1),2)+pow(diff(y+a,y1+a1),2)+pow(diff(z+a,z1+a1),2));
	float l2=sqrt(pow(diff(x+a,x2+a2),2)+pow(diff(y+a,y2+a2),2)+pow(diff(z+a,z2+a2),2));
	float l3=sqrt(pow(diff(x+a,x3+a3),2)+pow(diff(y+a,y3+a3),2)+pow(diff(z+a,z3+a3),2));
	float l4=sqrt(pow(diff(x+a,x4+a4),2)+pow(diff(y+a,y4+a4),2)+pow(diff(z+a,z4+a4),2));
	float l5=sqrt(pow(diff(x+a,x5+a5),2)+pow(diff(y+a,y5+a5),2)+pow(diff(z+a,z5+a5),2));
	
	
    return -gamma*v +(1-l1/L)*(diff(y+a,y1+a1)/l1)	+(1-l2/L)*(diff(y+a,y2+a2)/l2)	+(1-l3/L)*(diff(y+a,y3+a3)/l3)	+(1-l4/L)*(diff(y+a,y4+a4)/l4)	+(1-l5/L)*(diff(y+a,y5+a5)/l5);
}
float fvz_paret(float x, float x1,float x2,float x3, float x4, float x5,   	float y, float y1, float y2, float y3, float y4, float y5, float z, float z1, float z2, float z3, float z4, float z5,  float a, float a1, float a2, float a3, float a4, float a5, float v){
	
	float l1=sqrt(pow(diff(x+a,x1+a1),2)+pow(diff(y+a,y1+a1),2)+pow(diff(z+a,z1+a1),2));
	float l2=sqrt(pow(diff(x+a,x2+a2),2)+pow(diff(y+a,y2+a2),2)+pow(diff(z+a,z2+a2),2));
	float l3=sqrt(pow(diff(x+a,x3+a3),2)+pow(diff(y+a,y3+a3),2)+pow(diff(z+a,z3+a3),2));
	float l4=sqrt(pow(diff(x+a,x4+a4),2)+pow(diff(y+a,y4+a4),2)+pow(diff(z+a,z4+a4),2));
	float l5=sqrt(pow(diff(x+a,x5+a5),2)+pow(diff(y+a,y5+a5),2)+pow(diff(z+a,z5+a5),2));
	
	
    return -gamma*v +(1-l1/L)*(diff(z+a,z1+a1)/l1)	+(1-l2/L)*(diff(z+a,z2+a2)/l2)	+(1-l3/L)*(diff(z+a,z3+a3)/l3)	+(1-l4/L)*(diff(z+a,z4+a4)/l4)	+(1-l5/L)*(diff(z+a,z5+a5)/l5);
}

float fvx_aresta(float x, float x1,float x2,float x3, float x4,    	float y, float y1, float y2, float y3, float y4,   float z, float z1, float z2, float z3, float z4,   float a, float a1, float a2, float a3, float a4, float v){

	float l1=sqrt(pow(diff(x+a,x1+a1),2)+pow(diff(y+a,y1+a1),2)+pow(diff(z+a,z1+a1),2));
	float l2=sqrt(pow(diff(x+a,x2+a2),2)+pow(diff(y+a,y2+a2),2)+pow(diff(z+a,z2+a2),2));
	float l3=sqrt(pow(diff(x+a,x3+a3),2)+pow(diff(y+a,y3+a3),2)+pow(diff(z+a,z3+a3),2));
	float l4=sqrt(pow(diff(x+a,x4+a4),2)+pow(diff(y+a,y4+a4),2)+pow(diff(z+a,z4+a4),2));
	
    return -gamma*v +(1-l1/L)*(diff(x+a,x1+a1)/l1)	+(1-l2/L)*(diff(x+a,x2+a2)/l2)	+(1-l3/L)*(diff(x+a,x3+a3)/l3)	+(1-l4/L)*(diff(x+a,x4+a4)/l4);
}
float fvy_aresta(float x, float x1,float x2,float x3, float x4,    	float y, float y1, float y2, float y3, float y4,   float z, float z1, float z2, float z3, float z4,   float a, float a1, float a2, float a3, float a4, float v){
	
	float l1=sqrt(pow(diff(x+a,x1+a1),2)+pow(diff(y+a,y1+a1),2)+pow(diff(z+a,z1+a1),2));
	float l2=sqrt(pow(diff(x+a,x2+a2),2)+pow(diff(y+a,y2+a2),2)+pow(diff(z+a,z2+a2),2));
	float l3=sqrt(pow(diff(x+a,x3+a3),2)+pow(diff(y+a,y3+a3),2)+pow(diff(z+a,z3+a3),2));
	float l4=sqrt(pow(diff(x+a,x4+a4),2)+pow(diff(y+a,y4+a4),2)+pow(diff(z+a,z4+a4),2));
	
    return -gamma*v +(1-l1/L)*(diff(y+a,y1+a1)/l1)	+(1-l2/L)*(diff(y+a,y2+a2)/l2)	+(1-l3/L)*(diff(y+a,y3+a3)/l3)	+(1-l4/L)*(diff(y+a,y4+a4)/l4);
}
float fvz_aresta(float x, float x1,float x2,float x3, float x4,    	float y, float y1, float y2, float y3, float y4,   float z, float z1, float z2, float z3, float z4,   float a, float a1, float a2, float a3, float a4, float v){
	
	float l1=sqrt(pow(diff(x+a,x1+a1),2)+pow(diff(y+a,y1+a1),2)+pow(diff(z+a,z1+a1),2));
	float l2=sqrt(pow(diff(x+a,x2+a2),2)+pow(diff(y+a,y2+a2),2)+pow(diff(z+a,z2+a2),2));
	float l3=sqrt(pow(diff(x+a,x3+a3),2)+pow(diff(y+a,y3+a3),2)+pow(diff(z+a,z3+a3),2));
	float l4=sqrt(pow(diff(x+a,x4+a4),2)+pow(diff(y+a,y4+a4),2)+pow(diff(z+a,z4+a4),2));
	
    return -gamma*v +(1-l1/L)*(diff(z+a,z1+a1)/l1)	+(1-l2/L)*(diff(z+a,z2+a2)/l2)	+(1-l3/L)*(diff(z+a,z3+a3)/l3)	+(1-l4/L)*(diff(z+a,z4+a4)/l4);
}

float fvx_vertex(float x, float x1,float x2,float x3,     	float y, float y1, float y2, float y3,    float z, float z1, float z2, float z3,    float a, float a1, float a2, float a3,  float v){

	float l1=sqrt(pow(diff(x+a,x1+a1),2)+pow(diff(y+a,y1+a1),2)+pow(diff(z+a,z1+a1),2));
	float l2=sqrt(pow(diff(x+a,x2+a2),2)+pow(diff(y+a,y2+a2),2)+pow(diff(z+a,z2+a2),2));
	float l3=sqrt(pow(diff(x+a,x3+a3),2)+pow(diff(y+a,y3+a3),2)+pow(diff(z+a,z3+a3),2));
	
	
    return -gamma*v +(1-l1/L)*(diff(x+a,x1+a1)/l1)	+(1-l2/L)*(diff(x+a,x2+a2)/l2)	+(1-l3/L)*(diff(x+a,x3+a3)/l3)	;
}
float fvy_vertex(float x, float x1,float x2,float x3,     	float y, float y1, float y2, float y3,    float z, float z1, float z2, float z3,    float a, float a1, float a2, float a3,  float v){

	float l1=sqrt(pow(diff(x+a,x1+a1),2)+pow(diff(y+a,y1+a1),2)+pow(diff(z+a,z1+a1),2));
	float l2=sqrt(pow(diff(x+a,x2+a2),2)+pow(diff(y+a,y2+a2),2)+pow(diff(z+a,z2+a2),2));
	float l3=sqrt(pow(diff(x+a,x3+a3),2)+pow(diff(y+a,y3+a3),2)+pow(diff(z+a,z3+a3),2));
	
    return -gamma*v +(1-l1/L)*(diff(y+a,y1+a1)/l1)	+(1-l2/L)*(diff(y+a,y2+a2)/l2)	+(1-l3/L)*(diff(y+a,y3+a3)/l3)	;
}
float fvz_vertex(float x, float x1,float x2,float x3,     	float y, float y1, float y2, float y3,    float z, float z1, float z2, float z3,    float a, float a1, float a2, float a3,  float v){

	float l1=sqrt(pow(diff(x+a,x1+a1),2)+pow(diff(y+a,y1+a1),2)+pow(diff(z+a,z1+a1),2));
	float l2=sqrt(pow(diff(x+a,x2+a2),2)+pow(diff(y+a,y2+a2),2)+pow(diff(z+a,z2+a2),2));
	float l3=sqrt(pow(diff(x+a,x3+a3),2)+pow(diff(y+a,y3+a3),2)+pow(diff(z+a,z3+a3),2));
	
    return -gamma*v +(1-l1/L)*(diff(z+a,z1+a1)/l1)	+(1-l2/L)*(diff(z+a,z2+a2)/l2)	+(1-l3/L)*(diff(z+a,z3+a3)/l3)	;
}

int main(){
	
	cout<<"Const. Elastica= "<<pow(0.1/(gamma*0.02),2)*(1/0.0015)<<"\n";
	
	float x[X][Y][Z];	float vx[X][Y][Z];		float x_n[X][Y][Z];	float vx_n[X][Y][Z];
	float y[X][Y][Z];	float vy[X][Y][Z];		float y_n[X][Y][Z];	float vy_n[X][Y][Z];
	float z[X][Y][Z];	float vz[X][Y][Z];		float z_n[X][Y][Z];	float vz_n[X][Y][Z];
	
	float k1vx[X][Y][Z]; float k2vx[X][Y][Z]; float k3vx[X][Y][Z]; float k4vx[X][Y][Z];
	float k1x[X][Y][Z]; float k2x[X][Y][Z]; float k3x[X][Y][Z]; float k4x[X][Y][Z];

	float k1vy[X][Y][Z]; float k2vy[X][Y][Z]; float k3vy[X][Y][Z]; float k4vy[X][Y][Z];
	float k1y[X][Y][Z]; float k2y[X][Y][Z]; float k3y[X][Y][Z]; float k4y[X][Y][Z];
	
	float k1vz[X][Y][Z]; float k2vz[X][Y][Z]; float k3vz[X][Y][Z]; float k4vz[X][Y][Z];
	float k1z[X][Y][Z]; float k2z[X][Y][Z]; float k3z[X][Y][Z]; float k4z[X][Y][Z];
	
	
	//condicions inicials
	for( i=0;i<X;i++){
		for( j=0;j<Y;j++){
			for( k=0;k<Z;k++){
				
				x[i][j][k]=i;
				y[i][j][k]=j;
				z[i][j][k]=k;
				
				vx[i][j][k]=0;
				vy[i][j][k]=0;
				vz[i][j][k]=0;
				
			}
		}
	}
	


//RUNGE-KUTTA
	for(int t=0;t<T+1;t++){
		
		/*//que la base no se mogui
		for( i=0;i<X;i++){
			for( j=0;j<Y;j++){
				for( k=0;k<Z;k++){
				
				x[i][j][0]=i;
				y[i][j][0]=j;
				z[i][j][0]=0;
			
				}
			}
		}*/
		
		//les osties que li fotem
		
		if(t%100==0){
			for(int j=0;j<Y/2;j++){					
				for(int k=0;k<Z/2;k++){
					vx[0][j][k]=v+vx[0][i][k]; 
					vx[X-1][j][k]=-v+vx[X-1][i][k];
				}
			}	
		}
		
		if(t%110==0){
			for(int i=X/2; i<X;i++){
				for(int k=Z/2;k<Z;k++){
					 vy[i][0][k]=+v+vy[i][0][k]; 
					 vy[i][Y-1][k]=-v+vy[i][Y-1][k]; 
				}
			}
		}
		if(t%130==0){
			for(int i=0; i<X/2;i++){
				for(int k=0;k<Z/2;k++){
					vy[i][0][k]=v+vy[i][0][k]; 
					 vy[i][Y-1][k]=-v+vy[i][Y-1][k]; 
				}
			}
		}
		
		
		
		if(t%120==0){
			for(int j=Y/2; j<Y;j++){
				for(int k=Z/2;k<Z;k++){
					vx[0][j][k]=v+vx[0][j][k];
					vx[X-1][j][k]=-v+vx[X-1][j][k]; 
				}
			}
		}
		
		
		if(t%140==0){
			for(int j=0;j<Y/2;j++){					
				for(int k=Z/2;k<Z;k++){
					vx[0][j][k]=v+vx[0][j][k]; 
					vx[X-1][j][k]=-v+vx[X-1][j][k]; 
				}
			}		
		}
		
		
		
		if(t%150==0){		
			for(int i=X/2; i<X;i++){
				for(int k=0;k<Z/2;k++){
					 vy[i][0][k]=+v+vy[i][0][k]; 
					 vy[i][Y-1][k]=-v+vy[i][Y-1][k]; 
				}
			}
		}
			
		if(t%160==0){
			for(int j=Y/2;j<Y;j++){
				for(int k=0;k<Z/2;k++){
					vx[0][j][k]=v+vx[0][i][k]; 
					vx[X-1][j][k]=-v+vx[X-1][i][k]; 
				}
			}
		}
		if(t%170==0){
			for(int i=0; i<X/2;i++){
				for(int k=Z/2;k<Z;k++){
					 vy[i][0][k]=v+vy[i][0][k]; 
					 vy[i][Y-1][k]=-v+vy[i][Y-1][k]; 
				}
			}
		}
		
		if(t%180==0){
			for(int i=0; i<X/2;i++){
				for(int j=Y/2;j<Y;j++){
					 vz[i][j][Z-1]=-v+vz[i][j][Z-1]; 
				}
			}	
			for(int i=X/2; i<X;i++){
				for(int j=0;j<Y/2;j++){
					 vz[i][j][Z-1]=-v+vz[i][j][Z-1]; 
				}
			}
		}
		if(t%190==0){
			for(int i=0; i<X/2;i++){
				for(int j=0;j<Y/2;j++){
					 vz[i][j][Z-1]=-v+vz[i][j][Z-1]; 
				}
			}	
			for(int i=X/2; i<X;i++){
				for(int j=0;j<Y/2;j++){
					 vz[i][j][Z-1]=-v+vz[i][j][Z-1]; 
				}
			}
		}
			
		
	
		//condicions de frontera 
		x[0][0][0]=0;	y[0][0][0]=0;	z[0][0][0]=0;
		x[X-1][0][0]=X-1;	y[X-1][0][0]=0;	z[X-1][0][0]=0;
		x[0][Y-1][0]=0;	y[0][Y-1][0]=Y-1;	z[0][Y-1][0]=0;
		x[X-1][Y-1][0]=X-1;	y[X-1][Y-1][0]=Y-1;	z[X-1][Y-1][0]=0;
	
	//K1
		for(int i=0;i<X;i++){
			for(int j=0; j<Y;j++){
				for(int k=0; k<Z;k++){
					//dins
					if(0<i&&i<X-1 &&  0<j&&j<Y-1 && 0<k&&k<Z-1){
					//	cout<<i<<" "<<j<<" "<<k<<" t="<<t<<"\n";
						k1vx[i][j][k]=fvx(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	0,0,0,0,0,0,0,vx[i][j][k]);
						k1vy[i][j][k]=fvy(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	0,0,0,0,0,0,0,vy[i][j][k]);
						k1vz[i][j][k]=fvz(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	0,0,0,0,0,0,0,vz[i][j][k]);
			
						k1x[i][j][k]=vx[i][j][k];
						k1y[i][j][k]=vy[i][j][k];
						k1z[i][j][k]=vz[i][j][k];
					}	
					//parets
					else if(i==0 && 0<j&& j<Y-1 && 0<k&& k<Z-1){
					//	cout<<"PARET 1  "<<i<<" "<<j<<" "<<k<<" t="<<t<<"\n";
						k1vx[i][j][k]=fvx_paret(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	0,0,0,0,0,0,vx[i][j][k]);
						k1vy[i][j][k]=fvy_paret(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	0,0,0,0,0,0,vy[i][j][k]);
						k1vz[i][j][k]=fvz_paret(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	0,0,0,0,0,0,vz[i][j][k]);
			
						k1x[i][j][k]=vx[i][j][k];
						k1y[i][j][k]=vy[i][j][k];
						k1z[i][j][k]=vz[i][j][k];
					}
					else if(i==X-1 && 0<j&& j<Y-1 && 0<k&& k<Z-1){
					//	cout<<"PARET 2  "<<i<<" "<<j<<" "<<k<<" t="<<t<<"\n";
						k1vx[i][j][k]=fvx_paret(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	0,0,0,0,0,0,vx[i][j][k]);
						k1vy[i][j][k]=fvy_paret(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	0,0,0,0,0,0,vy[i][j][k]);
						k1vz[i][j][k]=fvz_paret(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	0,0,0,0,0,0,vz[i][j][k]);
			
						k1x[i][j][k]=vx[i][j][k];
						k1y[i][j][k]=vy[i][j][k];
						k1z[i][j][k]=vz[i][j][k];
					}
					else if(j==0 && 0<i&&i<X-1 && 0<k&&k<Z-1){
					//	cout<<"PARET 3  "<<i<<" "<<j<<" "<<k<<" t="<<t<<"\n";
						k1vx[i][j][k]=fvx_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	0,0,0,0,0,0,vx[i][j][k]);
						k1vy[i][j][k]=fvy_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	0,0,0,0,0,0,vy[i][j][k]);
						k1vz[i][j][k]=fvz_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	0,0,0,0,0,0,vz[i][j][k]);
			
						k1x[i][j][k]=vx[i][j][k];
						k1y[i][j][k]=vy[i][j][k];
						k1z[i][j][k]=vz[i][j][k];
					}
					else if(j==Y-1 && 0<i&&i<X-1 && 0<k&&k<Z-1){
					//	cout<<"PARET 4  "<<i<<" "<<j<<" "<<k<<" t="<<t<<"\n";
						k1vx[i][j][k]=fvx_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	0,0,0,0,0,0,vx[i][j][k]);
						k1vy[i][j][k]=fvy_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	0,0,0,0,0,0,vy[i][j][k]);
						k1vz[i][j][k]=fvz_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	0,0,0,0,0,0,vz[i][j][k]);
			
						k1x[i][j][k]=vx[i][j][k];
						k1y[i][j][k]=vy[i][j][k];
						k1z[i][j][k]=vz[i][j][k];
					}
					else if(k==0 && 0<i&&i<X-1 && 0<j&&j<Y-1){
					//	cout<<"PARET 5  "<<i<<" "<<j<<" "<<k<<" t="<<t<<"\n";
						k1vx[i][j][k]=fvx_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	0,0,0,0,0,0,vx[i][j][k]);
						k1vy[i][j][k]=fvy_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	0,0,0,0,0,0,vy[i][j][k]);
						k1vz[i][j][k]=fvz_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	0,0,0,0,0,0,vz[i][j][k]);
			
						k1x[i][j][k]=vx[i][j][k];
						k1y[i][j][k]=vy[i][j][k];
						k1z[i][j][k]=vz[i][j][k];
					}
					else if(k==Z-1 && 0<i&&i<X-1 && 0<j&&j<Y-1){
					//	cout<<"PARET 6  "<<i<<" "<<j<<" "<<k<<" "<<t<<"\n";
						k1vx[i][j][k]=fvx_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	0,0,0,0,0,0,vx[i][j][k]);
						k1vy[i][j][k]=fvy_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	0,0,0,0,0,0,vy[i][j][k]);
						k1vz[i][j][k]=fvz_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	0,0,0,0,0,0,vz[i][j][k]);
			
						k1x[i][j][k]=vx[i][j][k];
						k1y[i][j][k]=vy[i][j][k];
						k1z[i][j][k]=vz[i][j][k];
				
					}
					//arestes
					else if(k==0&& i==0 && 0<j&&j<Y-1){
						//treure k-1 i i-1
						k1vx[i][j][k]=fvx_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],		z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	0,0,0,0,0,vx[i][j][k]);
						k1vy[i][j][k]=fvy_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],		z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	0,0,0,0,0,vy[i][j][k]);
						k1vz[i][j][k]=fvz_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],		z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	0,0,0,0,0,vz[i][j][k]);
			
						k1x[i][j][k]=vx[i][j][k];
						k1y[i][j][k]=vy[i][j][k];
						k1z[i][j][k]=vz[i][j][k];
					}
					else if(k==0&&i==X-1&&0<j&&j<Y-1){
						//treure k-1 i i+1
						k1vx[i][j][k]=fvx_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	0,0,0,0,0,vx[i][j][k]);
						k1vy[i][j][k]=fvy_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	0,0,0,0,0,vy[i][j][k]);
						k1vz[i][j][k]=fvz_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	0,0,0,0,0,vz[i][j][k]);
			
						k1x[i][j][k]=vx[i][j][k];
						k1y[i][j][k]=vy[i][j][k];
						k1z[i][j][k]=vz[i][j][k];
					}
					else if(k==0&&j==0&&0<i&&i<X-1){
						//treure k-1 i j-1
						k1vx[i][j][k]=fvx_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],	0,0,0,0,0,vx[i][j][k]);
						k1vy[i][j][k]=fvy_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],	0,0,0,0,0,vy[i][j][k]);
						k1vz[i][j][k]=fvz_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],	0,0,0,0,0,vz[i][j][k]);
			
						k1x[i][j][k]=vx[i][j][k];
						k1y[i][j][k]=vy[i][j][k];
						k1z[i][j][k]=vz[i][j][k];
					}
					else if(k==0&&j==Y-1&&0<i&&i<X-1){
						//treure k-1 i j+1
						k1vx[i][j][k]=fvx_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],	0,0,0,0,0,vx[i][j][k]);
						k1vy[i][j][k]=fvy_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],	0,0,0,0,0,vy[i][j][k]);
						k1vz[i][j][k]=fvz_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],	0,0,0,0,0,vz[i][j][k]);
			
						k1x[i][j][k]=vx[i][j][k];
						k1y[i][j][k]=vy[i][j][k];
						k1z[i][j][k]=vz[i][j][k];
					}
					
					else if(k==Z-1&& i==0 && 0<j&&j<Y-1){
						//treure k+1 i i-1
						k1vx[i][j][k]=fvx_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	0,0,0,0,0,vx[i][j][k]);
						k1vy[i][j][k]=fvy_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	0,0,0,0,0,vy[i][j][k]);
						k1vz[i][j][k]=fvz_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	0,0,0,0,0,vz[i][j][k]);
			
						k1x[i][j][k]=vx[i][j][k];
						k1y[i][j][k]=vy[i][j][k];
						k1z[i][j][k]=vz[i][j][k];
					}
					else if(k==Z-1&&i==X-1&&0<j&&j<Y-1){
						//treure k+1 i i+1
						k1vx[i][j][k]=fvx_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	0,0,0,0,0,vx[i][j][k]);
						k1vy[i][j][k]=fvy_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	0,0,0,0,0,vy[i][j][k]);
						k1vz[i][j][k]=fvz_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	0,0,0,0,0,vz[i][j][k]);
			
						k1x[i][j][k]=vx[i][j][k];
						k1y[i][j][k]=vy[i][j][k];
						k1z[i][j][k]=vz[i][j][k];
					}
					else if(k==Z-1&&j==0&&0<i&&i<X-1){
						//treure k+1 i j-1
						k1vx[i][j][k]=fvx_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k-1],	0,0,0,0,0,vx[i][j][k]);
						k1vy[i][j][k]=fvy_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k-1],	0,0,0,0,0,vy[i][j][k]);
						k1vz[i][j][k]=fvz_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k-1],	0,0,0,0,0,vz[i][j][k]);
			
						k1x[i][j][k]=vx[i][j][k];
						k1y[i][j][k]=vy[i][j][k];
						k1z[i][j][k]=vz[i][j][k];
					}
					else if(k==Z-1&&j==Y-1&&0<i&&i<X-1){
						//treure k+1 i j+1
						k1vx[i][j][k]=fvx_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k-1],	0,0,0,0,0,vx[i][j][k]);
						k1vy[i][j][k]=fvy_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k-1],	0,0,0,0,0,vy[i][j][k]);
						k1vz[i][j][k]=fvz_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k-1],	0,0,0,0,0,vz[i][j][k]);
			
						k1x[i][j][k]=vx[i][j][k];
						k1y[i][j][k]=vy[i][j][k];
						k1z[i][j][k]=vz[i][j][k];
					}
					
					else if(i==0&&j==0&&0<k&&k<Z-1){
						//treure i-1 i j-1
						k1vx[i][j][k]=fvx_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	0,0,0,0,0,vx[i][j][k]);
						k1vy[i][j][k]=fvy_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	0,0,0,0,0,vy[i][j][k]);
						k1vz[i][j][k]=fvz_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	0,0,0,0,0,vz[i][j][k]);
			
						k1x[i][j][k]=vx[i][j][k];
						k1y[i][j][k]=vy[i][j][k];
						k1z[i][j][k]=vz[i][j][k];
					}
					else if(i==0&&j==Y-1&&0<k&&k<Z-1){
						//treure i-1 i j+1 
						k1vx[i][j][k]=fvx_aresta(x[i][j][k],x[i+1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	0,0,0,0,0,vx[i][j][k]);
						k1vy[i][j][k]=fvy_aresta(x[i][j][k],x[i+1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	0,0,0,0,0,vy[i][j][k]);
						k1vz[i][j][k]=fvz_aresta(x[i][j][k],x[i+1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	0,0,0,0,0,vz[i][j][k]);
			
						k1x[i][j][k]=vx[i][j][k];
						k1y[i][j][k]=vy[i][j][k];
						k1z[i][j][k]=vz[i][j][k];
					}
					else if(i==X-1&&j==0&&0<k&&k<Z-1){
						//treure  i+1 i j-1
						k1vx[i][j][k]=fvx_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	0,0,0,0,0,vx[i][j][k]);
						k1vy[i][j][k]=fvy_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	0,0,0,0,0,vy[i][j][k]);
						k1vz[i][j][k]=fvz_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	0,0,0,0,0,vz[i][j][k]);
			
						k1x[i][j][k]=vx[i][j][k];
						k1y[i][j][k]=vy[i][j][k];
						k1z[i][j][k]=vz[i][j][k];
					}
					else if(i==X-1&&j==Y-1&&0<k&&k<Z-1){
						//treure i+1 i j+1
						k1vx[i][j][k]=fvx_aresta(x[i][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	0,0,0,0,0,vx[i][j][k]);
						k1vy[i][j][k]=fvy_aresta(x[i][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	0,0,0,0,0,vy[i][j][k]);
						k1vz[i][j][k]=fvz_aresta(x[i][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	0,0,0,0,0,vz[i][j][k]);
			
						k1x[i][j][k]=vx[i][j][k];
						k1y[i][j][k]=vy[i][j][k];
						k1z[i][j][k]=vz[i][j][k];
					}
					//vertex
					else if(i==0&&j==0&&k==Z-1){
						//treu i-1 j-1 k+1
						k1vx[i][j][k]=fvx_vertex(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j][k-1],	0,0,0,0,vx[i][j][k]);
						k1vy[i][j][k]=fvy_vertex(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j][k-1],	0,0,0,0,vy[i][j][k]);
						k1vz[i][j][k]=fvz_vertex(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j][k-1],	0,0,0,0,vz[i][j][k]);
			
						k1x[i][j][k]=vx[i][j][k];
						k1y[i][j][k]=vy[i][j][k];
						k1z[i][j][k]=vz[i][j][k];
					}
					else if(i==X-1&&j==0&&k==Z-1){
						//treu i+1 j-1 k+1
						k1vx[i][j][k]=fvx_vertex(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k-1],	0,0,0,0,vx[i][j][k]);
						k1vy[i][j][k]=fvy_vertex(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k-1],	0,0,0,0,vy[i][j][k]);
						k1vz[i][j][k]=fvz_vertex(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k-1],	0,0,0,0,vz[i][j][k]);
			
						k1x[i][j][k]=vx[i][j][k];
						k1y[i][j][k]=vy[i][j][k];
						k1z[i][j][k]=vz[i][j][k];
					}
					else if(i==X-1&&j==Y-1&&k==Z-1){
						//treu i+1 j+1 k+1
						k1vx[i][j][k]=fvx_vertex(x[i][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k-1],	0,0,0,0,vx[i][j][k]);
						k1vy[i][j][k]=fvy_vertex(x[i][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k-1],	0,0,0,0,vy[i][j][k]);
						k1vz[i][j][k]=fvz_vertex(x[i][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k-1],	0,0,0,0,vz[i][j][k]);
			
						k1x[i][j][k]=vx[i][j][k];
						k1y[i][j][k]=vy[i][j][k];
						k1z[i][j][k]=vz[i][j][k];
					}
					else if(i==0&&j==Y-1&&k==Z-1){
						//treu  i-1 j+1 k+1
						k1vx[i][j][k]=fvx_vertex(x[i][j][k],x[i+1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j-1][k],z[i][j][k-1],	0,0,0,0,vx[i][j][k]);
						k1vy[i][j][k]=fvy_vertex(x[i][j][k],x[i+1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j-1][k],z[i][j][k-1],	0,0,0,0,vy[i][j][k]);
						k1vz[i][j][k]=fvz_vertex(x[i][j][k],x[i+1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j-1][k],z[i][j][k-1],	0,0,0,0,vz[i][j][k]);
			
						k1x[i][j][k]=vx[i][j][k];
						k1y[i][j][k]=vy[i][j][k];
						k1z[i][j][k]=vz[i][j][k];
					}
										
				}
			}
		}
		//k2
		for( int i=0;i<X;i++){
			for( int j=0;j<Y;j++){
				for( int k=0;k<Z;k++){
					if(0<i&&i<X-1 &&  0<j&&j<Y-1 && 0<k&&k<Z-1){
						
					k2vx[i][j][k]=fvx(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k1x[i][j][k])/2,(h*k1x[i+1][j][k])/2,(h*k1x[i-1][j][k])/2,(h*k1x[i][j+1][k])/2,(h*k1x[i][j-1][k])/2,(h*k1x[i][j][k+1])/2,(h*k1x[i][j][k-1])/2,vx[i][j][k]+(h*k1vx[i][j][k])/2);																				
					k2vy[i][j][k]=fvy(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k1y[i][j][k])/2,(h*k1y[i+1][j][k])/2,(h*k1y[i-1][j][k])/2,(h*k1y[i][j+1][k])/2,(h*k1y[i][j-1][k])/2,(h*k1y[i][j][k+1])/2,(h*k1y[i][j][k-1])/2,vy[i][j][k]+(h*k1vy[i][j][k])/2);
					k2vz[i][j][k]=fvz(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k1z[i][j][k])/2,(h*k1z[i+1][j][k])/2,(h*k1z[i-1][j][k])/2,(h*k1z[i][j+1][k])/2,(h*k1z[i][j-1][k])/2,(h*k1z[i][j][k+1])/2,(h*k1z[i][j][k-1])/2,vz[i][j][k]+(h*k1vz[i][j][k])/2);
			
					k2x[i][j][k]=vx[i][j][k]+(h*k1vx[i][j][k])/2;
					k2y[i][j][k]=vy[i][j][k]+(h*k1vy[i][j][k])/2;
					k2z[i][j][k]=vz[i][j][k]+(h*k1vz[i][j][k])/2;
					}
					
					else if(i==0 && 0<j&& j<Y-1 && 0<k&& k<Z-1){
						
					k2vx[i][j][k]=fvx_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k1x[i][j][k])/2,(h*k1x[i+1][j][k])/2,(h*k1x[i][j+1][k])/2,(h*k1x[i][j-1][k])/2,(h*k1x[i][j][k+1])/2,(h*k1x[i][j][k-1])/2,vx[i][j][k]+(h*k1vx[i][j][k])/2);																				
					k2vy[i][j][k]=fvy_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k1y[i][j][k])/2,(h*k1y[i+1][j][k])/2,(h*k1y[i][j+1][k])/2,(h*k1y[i][j-1][k])/2,(h*k1y[i][j][k+1])/2,(h*k1y[i][j][k-1])/2,vy[i][j][k]+(h*k1vy[i][j][k])/2);
					k2vz[i][j][k]=fvz_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k1z[i][j][k])/2,(h*k1z[i+1][j][k])/2,(h*k1z[i][j+1][k])/2,(h*k1z[i][j-1][k])/2,(h*k1z[i][j][k+1])/2,(h*k1z[i][j][k-1])/2,vz[i][j][k]+(h*k1vz[i][j][k])/2);
			
					k2x[i][j][k]=vx[i][j][k]+(h*k1vx[i][j][k])/2;
					k2y[i][j][k]=vy[i][j][k]+(h*k1vy[i][j][k])/2;
					k2z[i][j][k]=vz[i][j][k]+(h*k1vz[i][j][k])/2;
					
					}
					else if(i==X-1 && 0<j&& j<Y-1 && 0<k&& k<Z-1){
			
					k2vx[i][j][k]=fvx_paret(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k1x[i][j][k])/2,(h*k1x[i-1][j][k])/2,(h*k1x[i][j+1][k])/2,(h*k1x[i][j-1][k])/2,(h*k1x[i][j][k+1])/2,(h*k1x[i][j][k-1])/2,vx[i][j][k]+(h*k1vx[i][j][k])/2);																				
					k2vy[i][j][k]=fvy_paret(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k1y[i][j][k])/2,(h*k1y[i-1][j][k])/2,(h*k1y[i][j+1][k])/2,(h*k1y[i][j-1][k])/2,(h*k1y[i][j][k+1])/2,(h*k1y[i][j][k-1])/2,vy[i][j][k]+(h*k1vy[i][j][k])/2);
					k2vz[i][j][k]=fvz_paret(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k1z[i][j][k])/2,(h*k1z[i-1][j][k])/2,(h*k1z[i][j+1][k])/2,(h*k1z[i][j-1][k])/2,(h*k1z[i][j][k+1])/2,(h*k1z[i][j][k-1])/2,vz[i][j][k]+(h*k1vz[i][j][k])/2);
			
					k2x[i][j][k]=vx[i][j][k]+(h*k1vx[i][j][k])/2;
					k2y[i][j][k]=vy[i][j][k]+(h*k1vy[i][j][k])/2;
					k2z[i][j][k]=vz[i][j][k]+(h*k1vz[i][j][k])/2;
					
					}
					else if(j==0 && 0<i&&i<X-1 && 0<k&&k<Z-1){
					
					k2vx[i][j][k]=fvx_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	(h*k1x[i][j][k])/2,(h*k1x[i+1][j][k])/2,(h*k1x[i-1][j][k])/2,(h*k1x[i][j+1][k])/2,(h*k1x[i][j][k+1])/2,(h*k1x[i][j][k-1])/2,vx[i][j][k]+(h*k1vx[i][j][k])/2);																				
					k2vy[i][j][k]=fvy_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	(h*k1y[i][j][k])/2,(h*k1y[i+1][j][k])/2,(h*k1y[i-1][j][k])/2,(h*k1y[i][j+1][k])/2,(h*k1y[i][j][k+1])/2,(h*k1y[i][j][k-1])/2,vy[i][j][k]+(h*k1vy[i][j][k])/2);
					k2vz[i][j][k]=fvz_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	(h*k1z[i][j][k])/2,(h*k1z[i+1][j][k])/2,(h*k1z[i-1][j][k])/2,(h*k1z[i][j+1][k])/2,(h*k1z[i][j][k+1])/2,(h*k1z[i][j][k-1])/2,vz[i][j][k]+(h*k1vz[i][j][k])/2);
			
					k2x[i][j][k]=vx[i][j][k]+(h*k1vx[i][j][k])/2;
					k2y[i][j][k]=vy[i][j][k]+(h*k1vy[i][j][k])/2;
					k2z[i][j][k]=vz[i][j][k]+(h*k1vz[i][j][k])/2;
					
					}
					else if(j==Y-1 && 0<i&&i<X-1 && 0<k&&k<Z-1){
						
					k2vx[i][j][k]=fvx_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k1x[i][j][k])/2,(h*k1x[i+1][j][k])/2,(h*k1x[i-1][j][k])/2,(h*k1x[i][j-1][k])/2,(h*k1x[i][j][k+1])/2,(h*k1x[i][j][k-1])/2,vx[i][j][k]+(h*k1vx[i][j][k])/2);																				
					k2vy[i][j][k]=fvy_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k1y[i][j][k])/2,(h*k1y[i+1][j][k])/2,(h*k1y[i-1][j][k])/2,(h*k1y[i][j-1][k])/2,(h*k1y[i][j][k+1])/2,(h*k1y[i][j][k-1])/2,vy[i][j][k]+(h*k1vy[i][j][k])/2);
					k2vz[i][j][k]=fvz_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k1z[i][j][k])/2,(h*k1z[i+1][j][k])/2,(h*k1z[i-1][j][k])/2,(h*k1z[i][j-1][k])/2,(h*k1z[i][j][k+1])/2,(h*k1z[i][j][k-1])/2,vz[i][j][k]+(h*k1vz[i][j][k])/2);
			
					k2x[i][j][k]=vx[i][j][k]+(h*k1vx[i][j][k])/2;
					k2y[i][j][k]=vy[i][j][k]+(h*k1vy[i][j][k])/2;
					k2z[i][j][k]=vz[i][j][k]+(h*k1vz[i][j][k])/2;
					
					}
					else if(k==0 && 0<i&&i<X-1 && 0<j&&j<Y-1){
						
					k2vx[i][j][k]=fvx_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	(h*k1x[i][j][k])/2,(h*k1x[i+1][j][k])/2,(h*k1x[i-1][j][k])/2,(h*k1x[i][j+1][k])/2,(h*k1x[i][j-1][k])/2,(h*k1x[i][j][k+1])/2,vx[i][j][k]+(h*k1vx[i][j][k])/2);																				
					k2vy[i][j][k]=fvy_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	(h*k1y[i][j][k])/2,(h*k1y[i+1][j][k])/2,(h*k1y[i-1][j][k])/2,(h*k1y[i][j+1][k])/2,(h*k1y[i][j-1][k])/2,(h*k1y[i][j][k+1])/2,vy[i][j][k]+(h*k1vy[i][j][k])/2);
					k2vz[i][j][k]=fvz_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	(h*k1z[i][j][k])/2,(h*k1z[i+1][j][k])/2,(h*k1z[i-1][j][k])/2,(h*k1z[i][j+1][k])/2,(h*k1z[i][j-1][k])/2,(h*k1z[i][j][k+1])/2,vz[i][j][k]+(h*k1vz[i][j][k])/2);
			
					k2x[i][j][k]=vx[i][j][k]+(h*k1vx[i][j][k])/2;
					k2y[i][j][k]=vy[i][j][k]+(h*k1vy[i][j][k])/2;
					k2z[i][j][k]=vz[i][j][k]+(h*k1vz[i][j][k])/2;
					}
					else if(k==Z-1 && 0<i&&i<X-1 && 0<j&&j<Y-1){
					
					
					k2vx[i][j][k]=fvx_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	(h*k1x[i][j][k])/2,(h*k1x[i+1][j][k])/2,(h*k1x[i-1][j][k])/2,(h*k1x[i][j+1][k])/2,(h*k1x[i][j-1][k])/2,(h*k1x[i][j][k-1])/2,vx[i][j][k]+(h*k1vx[i][j][k])/2);																				
					k2vy[i][j][k]=fvy_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	(h*k1y[i][j][k])/2,(h*k1y[i+1][j][k])/2,(h*k1y[i-1][j][k])/2,(h*k1y[i][j+1][k])/2,(h*k1y[i][j-1][k])/2,(h*k1y[i][j][k-1])/2,vy[i][j][k]+(h*k1vy[i][j][k])/2);
					k2vz[i][j][k]=fvz_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	(h*k1z[i][j][k])/2,(h*k1z[i+1][j][k])/2,(h*k1z[i-1][j][k])/2,(h*k1z[i][j+1][k])/2,(h*k1z[i][j-1][k])/2,(h*k1z[i][j][k-1])/2,vz[i][j][k]+(h*k1vz[i][j][k])/2);
			
					k2x[i][j][k]=vx[i][j][k]+(h*k1vx[i][j][k])/2;
					k2y[i][j][k]=vy[i][j][k]+(h*k1vy[i][j][k])/2;
					k2z[i][j][k]=vz[i][j][k]+(h*k1vz[i][j][k])/2;
						
					}
					
					else if(k==0&& i==0 && 0<j&&j<Y-1){
						//treure k-1 i i-1
						k2vx[i][j][k]=fvx_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	(h*k1x[i][j][k])/2,(h*k1x[i+1][j][k])/2,(h*k1x[i][j+1][k])/2,(h*k1x[i][j-1][k])/2,(h*k1x[i][j][k+1])/2,vx[i][j][k]+(h*k1vx[i][j][k])/2);																				
						k2vy[i][j][k]=fvy_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	(h*k1y[i][j][k])/2,(h*k1y[i+1][j][k])/2,(h*k1y[i][j+1][k])/2,(h*k1y[i][j-1][k])/2,(h*k1y[i][j][k+1])/2,vy[i][j][k]+(h*k1vy[i][j][k])/2);
						k2vz[i][j][k]=fvz_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	(h*k1z[i][j][k])/2,(h*k1z[i+1][j][k])/2,(h*k1z[i][j+1][k])/2,(h*k1z[i][j-1][k])/2,(h*k1z[i][j][k+1])/2,vz[i][j][k]+(h*k1vz[i][j][k])/2);
			
						k2x[i][j][k]=vx[i][j][k]+(h*k1vx[i][j][k])/2;
						k2y[i][j][k]=vy[i][j][k]+(h*k1vy[i][j][k])/2;
						k2z[i][j][k]=vz[i][j][k]+(h*k1vz[i][j][k])/2; 						
					}
					else if(k==0&&i==X-1&&0<j&&j<Y-1){
						//treure k-1 i i+1
						k2vx[i][j][k]=fvx_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	(h*k1x[i][j][k])/2,(h*k1x[i-1][j][k])/2,(h*k1x[i][j+1][k])/2,(h*k1x[i][j-1][k])/2,(h*k1x[i][j][k+1])/2,vx[i][j][k]+(h*k1vx[i][j][k])/2);																				
						k2vy[i][j][k]=fvy_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	(h*k1y[i][j][k])/2,(h*k1y[i-1][j][k])/2,(h*k1y[i][j+1][k])/2,(h*k1y[i][j-1][k])/2,(h*k1y[i][j][k+1])/2,vy[i][j][k]+(h*k1vy[i][j][k])/2);
						k2vz[i][j][k]=fvz_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	(h*k1z[i][j][k])/2,(h*k1z[i-1][j][k])/2,(h*k1z[i][j+1][k])/2,(h*k1z[i][j-1][k])/2,(h*k1z[i][j][k+1])/2,vz[i][j][k]+(h*k1vz[i][j][k])/2);
			
						k2x[i][j][k]=vx[i][j][k]+(h*k1vx[i][j][k])/2;
						k2y[i][j][k]=vy[i][j][k]+(h*k1vy[i][j][k])/2;
						k2z[i][j][k]=vz[i][j][k]+(h*k1vz[i][j][k])/2;
					}
					else if(k==0&&j==0&&0<i&&i<X-1){
						//treure k-1 i j-1
						k2vx[i][j][k]=fvx_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],	(h*k1x[i][j][k])/2,(h*k1x[i+1][j][k])/2,(h*k1x[i-1][j][k])/2,(h*k1x[i][j+1][k])/2,(h*k1x[i][j][k+1])/2,vx[i][j][k]+(h*k1vx[i][j][k])/2);																				
						k2vy[i][j][k]=fvy_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],	(h*k1y[i][j][k])/2,(h*k1y[i+1][j][k])/2,(h*k1y[i-1][j][k])/2,(h*k1y[i][j+1][k])/2,(h*k1y[i][j][k+1])/2,vy[i][j][k]+(h*k1vy[i][j][k])/2);
						k2vz[i][j][k]=fvz_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],	(h*k1z[i][j][k])/2,(h*k1z[i+1][j][k])/2,(h*k1z[i-1][j][k])/2,(h*k1z[i][j+1][k])/2,(h*k1z[i][j][k+1])/2,vz[i][j][k]+(h*k1vz[i][j][k])/2);
			
						k2x[i][j][k]=vx[i][j][k]+(h*k1vx[i][j][k])/2;
						k2y[i][j][k]=vy[i][j][k]+(h*k1vy[i][j][k])/2;
						k2z[i][j][k]=vz[i][j][k]+(h*k1vz[i][j][k])/2;
					}
					else if(k==0&&j==Y-1&&0<i&&i<X-1){
						//treure k-1 i j+1
						k2vx[i][j][k]=fvx_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],	(h*k1x[i][j][k])/2,(h*k1x[i+1][j][k])/2,(h*k1x[i-1][j][k])/2,(h*k1x[i][j-1][k])/2,(h*k1x[i][j][k+1])/2,vx[i][j][k]+(h*k1vx[i][j][k])/2);																				
						k2vy[i][j][k]=fvy_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],	(h*k1y[i][j][k])/2,(h*k1y[i+1][j][k])/2,(h*k1y[i-1][j][k])/2,(h*k1y[i][j-1][k])/2,(h*k1y[i][j][k+1])/2,vy[i][j][k]+(h*k1vy[i][j][k])/2);
						k2vz[i][j][k]=fvz_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],	(h*k1z[i][j][k])/2,(h*k1z[i+1][j][k])/2,(h*k1z[i-1][j][k])/2,(h*k1z[i][j-1][k])/2,(h*k1z[i][j][k+1])/2,vz[i][j][k]+(h*k1vz[i][j][k])/2);
			
						k2x[i][j][k]=vx[i][j][k]+(h*k1vx[i][j][k])/2;
						k2y[i][j][k]=vy[i][j][k]+(h*k1vy[i][j][k])/2;
						k2z[i][j][k]=vz[i][j][k]+(h*k1vz[i][j][k])/2;
					}
												
					else if(k==Z-1&& i==0 && 0<j&&j<Y-1){
						//treure k+1 i i-1
						k2vx[i][j][k]=fvx_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	(h*k1x[i][j][k])/2,(h*k1x[i+1][j][k])/2,(h*k1x[i][j+1][k])/2,(h*k1x[i][j-1][k])/2,(h*k1x[i][j][k-1])/2,vx[i][j][k]+(h*k1vx[i][j][k])/2);																				
						k2vy[i][j][k]=fvy_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	(h*k1y[i][j][k])/2,(h*k1y[i+1][j][k])/2,(h*k1y[i][j+1][k])/2,(h*k1y[i][j-1][k])/2,(h*k1y[i][j][k-1])/2,vy[i][j][k]+(h*k1vy[i][j][k])/2);
						k2vz[i][j][k]=fvz_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	(h*k1z[i][j][k])/2,(h*k1z[i+1][j][k])/2,(h*k1z[i][j+1][k])/2,(h*k1z[i][j-1][k])/2,(h*k1z[i][j][k-1])/2,vz[i][j][k]+(h*k1vz[i][j][k])/2);
			
						k2x[i][j][k]=vx[i][j][k]+(h*k1vx[i][j][k])/2;
						k2y[i][j][k]=vy[i][j][k]+(h*k1vy[i][j][k])/2;
						k2z[i][j][k]=vz[i][j][k]+(h*k1vz[i][j][k])/2;
					}
					else if(k==Z-1&&i==X-1&&0<j&&j<Y-1){
						//treure k+1 i i+1
						k2vx[i][j][k]=fvx_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	(h*k1x[i][j][k])/2,(h*k1x[i-1][j][k])/2,(h*k1x[i][j+1][k])/2,(h*k1x[i][j-1][k])/2,(h*k1x[i][j][k-1])/2,vx[i][j][k]+(h*k1vx[i][j][k])/2);																				
						k2vy[i][j][k]=fvy_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	(h*k1y[i][j][k])/2,(h*k1y[i-1][j][k])/2,(h*k1y[i][j+1][k])/2,(h*k1y[i][j-1][k])/2,(h*k1y[i][j][k-1])/2,vy[i][j][k]+(h*k1vy[i][j][k])/2);
						k2vz[i][j][k]=fvz_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	(h*k1z[i][j][k])/2,(h*k1z[i-1][j][k])/2,(h*k1z[i][j+1][k])/2,(h*k1z[i][j-1][k])/2,(h*k1z[i][j][k-1])/2,vz[i][j][k]+(h*k1vz[i][j][k])/2);
			
						k2x[i][j][k]=vx[i][j][k]+(h*k1vx[i][j][k])/2;
						k2y[i][j][k]=vy[i][j][k]+(h*k1vy[i][j][k])/2;
						k2z[i][j][k]=vz[i][j][k]+(h*k1vz[i][j][k])/2;
					}
					else if(k==Z-1&&j==0&&0<i&&i<X-1){
						//treure k+1 i j-1
						k2vx[i][j][k]=fvx_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k-1],	(h*k1x[i][j][k])/2,(h*k1x[i+1][j][k])/2,(h*k1x[i-1][j][k])/2,(h*k1x[i][j+1][k])/2,(h*k1x[i][j][k-1])/2,vx[i][j][k]+(h*k1vx[i][j][k])/2);																				
						k2vy[i][j][k]=fvy_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k-1],	(h*k1y[i][j][k])/2,(h*k1y[i+1][j][k])/2,(h*k1y[i-1][j][k])/2,(h*k1y[i][j+1][k])/2,(h*k1y[i][j][k-1])/2,vy[i][j][k]+(h*k1vy[i][j][k])/2);
						k2vz[i][j][k]=fvz_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k-1],	(h*k1z[i][j][k])/2,(h*k1z[i+1][j][k])/2,(h*k1z[i-1][j][k])/2,(h*k1z[i][j+1][k])/2,(h*k1z[i][j][k-1])/2,vz[i][j][k]+(h*k1vz[i][j][k])/2);
			
						k2x[i][j][k]=vx[i][j][k]+(h*k1vx[i][j][k])/2;
						k2y[i][j][k]=vy[i][j][k]+(h*k1vy[i][j][k])/2;
						k2z[i][j][k]=vz[i][j][k]+(h*k1vz[i][j][k])/2;
					}
					else if(k==Z-1&&j==Y-1&&0<i&&i<X-1){
						//treure k+1 i j+1
						k2vx[i][j][k]=fvx_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k-1],	(h*k1x[i][j][k])/2,(h*k1x[i+1][j][k])/2,(h*k1x[i-1][j][k])/2,(h*k1x[i][j-1][k])/2,(h*k1x[i][j][k-1])/2,vx[i][j][k]+(h*k1vx[i][j][k])/2);																				
						k2vy[i][j][k]=fvy_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k-1],	(h*k1y[i][j][k])/2,(h*k1y[i+1][j][k])/2,(h*k1y[i-1][j][k])/2,(h*k1y[i][j-1][k])/2,(h*k1y[i][j][k-1])/2,vy[i][j][k]+(h*k1vy[i][j][k])/2);
						k2vz[i][j][k]=fvz_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k-1],	(h*k1z[i][j][k])/2,(h*k1z[i+1][j][k])/2,(h*k1z[i-1][j][k])/2,(h*k1z[i][j-1][k])/2,(h*k1z[i][j][k-1])/2,vz[i][j][k]+(h*k1vz[i][j][k])/2);
			
						k2x[i][j][k]=vx[i][j][k]+(h*k1vx[i][j][k])/2;
						k2y[i][j][k]=vy[i][j][k]+(h*k1vy[i][j][k])/2;
						k2z[i][j][k]=vz[i][j][k]+(h*k1vz[i][j][k])/2;
					}
				
					else if(i==0&&j==0&&0<k&&k<Z-1){
						//treure i-1 i j-1
						k2vx[i][j][k]=fvx_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	(h*k1x[i][j][k])/2,(h*k1x[i+1][j][k])/2,(h*k1x[i][j+1][k])/2,(h*k1x[i][j][k+1])/2,(h*k1x[i][j][k-1])/2,vx[i][j][k]+(h*k1vx[i][j][k])/2);																				
						k2vy[i][j][k]=fvy_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	(h*k1y[i][j][k])/2,(h*k1y[i+1][j][k])/2,(h*k1y[i][j+1][k])/2,(h*k1y[i][j][k+1])/2,(h*k1y[i][j][k-1])/2,vy[i][j][k]+(h*k1vy[i][j][k])/2);
						k2vz[i][j][k]=fvz_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	(h*k1z[i][j][k])/2,(h*k1z[i+1][j][k])/2,(h*k1z[i][j+1][k])/2,(h*k1z[i][j][k+1])/2,(h*k1z[i][j][k-1])/2,vz[i][j][k]+(h*k1vz[i][j][k])/2);
			
						k2x[i][j][k]=vx[i][j][k]+(h*k1vx[i][j][k])/2;
						k2y[i][j][k]=vy[i][j][k]+(h*k1vy[i][j][k])/2;
						k2z[i][j][k]=vz[i][j][k]+(h*k1vz[i][j][k])/2; 
						
					}
					else if(i==0&&j==Y-1&&0<k&&k<Z-1){
						//treure i-1 i j+1 
						k2vx[i][j][k]=fvx_aresta(x[i][j][k],x[i+1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k1x[i][j][k])/2,(h*k1x[i+1][j][k])/2,(h*k1x[i][j-1][k])/2,(h*k1x[i][j][k+1])/2,(h*k1x[i][j][k-1])/2,vx[i][j][k]+(h*k1vx[i][j][k])/2);																				
						k2vy[i][j][k]=fvy_aresta(x[i][j][k],x[i+1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k1y[i][j][k])/2,(h*k1y[i+1][j][k])/2,(h*k1y[i][j-1][k])/2,(h*k1y[i][j][k+1])/2,(h*k1y[i][j][k-1])/2,vy[i][j][k]+(h*k1vy[i][j][k])/2);
						k2vz[i][j][k]=fvz_aresta(x[i][j][k],x[i+1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k1z[i][j][k])/2,(h*k1z[i+1][j][k])/2,(h*k1z[i][j-1][k])/2,(h*k1z[i][j][k+1])/2,(h*k1z[i][j][k-1])/2,vz[i][j][k]+(h*k1vz[i][j][k])/2);
			
						k2x[i][j][k]=vx[i][j][k]+(h*k1vx[i][j][k])/2;
						k2y[i][j][k]=vy[i][j][k]+(h*k1vy[i][j][k])/2;
						k2z[i][j][k]=vz[i][j][k]+(h*k1vz[i][j][k])/2; 
					}
					else if(i==X-1&&j==0&&0<k&&k<Z-1){
						//treure  i+1 i j-1
						k2vx[i][j][k]=fvx_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	(h*k1x[i][j][k])/2,(h*k1x[i-1][j][k])/2,(h*k1x[i][j+1][k])/2,(h*k1x[i][j][k+1])/2,(h*k1x[i][j][k-1])/2,vx[i][j][k]+(h*k1vx[i][j][k])/2);																				
						k2vy[i][j][k]=fvy_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	(h*k1y[i][j][k])/2,(h*k1y[i-1][j][k])/2,(h*k1y[i][j+1][k])/2,(h*k1y[i][j][k+1])/2,(h*k1y[i][j][k-1])/2,vy[i][j][k]+(h*k1vy[i][j][k])/2);
						k2vz[i][j][k]=fvz_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	(h*k1z[i][j][k])/2,(h*k1z[i-1][j][k])/2,(h*k1z[i][j+1][k])/2,(h*k1z[i][j][k+1])/2,(h*k1z[i][j][k-1])/2,vz[i][j][k]+(h*k1vz[i][j][k])/2);
			
						k2x[i][j][k]=vx[i][j][k]+(h*k1vx[i][j][k])/2;
						k2y[i][j][k]=vy[i][j][k]+(h*k1vy[i][j][k])/2;
						k2z[i][j][k]=vz[i][j][k]+(h*k1vz[i][j][k])/2; 
						
					}
					else if(i==X-1&&j==Y-1&&0<k&&k<Z-1){
						//treure i-1 i j-1
						k2vx[i][j][k]=fvx_aresta(x[i][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k1x[i][j][k])/2,(h*k1x[i-1][j][k])/2,(h*k1x[i][j-1][k])/2,(h*k1x[i][j][k+1])/2,(h*k1x[i][j][k-1])/2,vx[i][j][k]+(h*k1vx[i][j][k])/2);																				
						k2vy[i][j][k]=fvy_aresta(x[i][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k1y[i][j][k])/2,(h*k1y[i-1][j][k])/2,(h*k1y[i][j-1][k])/2,(h*k1y[i][j][k+1])/2,(h*k1y[i][j][k-1])/2,vy[i][j][k]+(h*k1vy[i][j][k])/2);
						k2vz[i][j][k]=fvz_aresta(x[i][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k1z[i][j][k])/2,(h*k1z[i-1][j][k])/2,(h*k1z[i][j-1][k])/2,(h*k1z[i][j][k+1])/2,(h*k1z[i][j][k-1])/2,vz[i][j][k]+(h*k1vz[i][j][k])/2);
			
						k2x[i][j][k]=vx[i][j][k]+(h*k1vx[i][j][k])/2;
						k2y[i][j][k]=vy[i][j][k]+(h*k1vy[i][j][k])/2;
						k2z[i][j][k]=vz[i][j][k]+(h*k1vz[i][j][k])/2;
					}			
				
					else if(i==0&&j==0&&k==Z-1){
						//treu i-1 j-1 k+1
						k2vx[i][j][k]=fvx_vertex(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j][k-1],	(h*k1x[i][j][k])/2,(h*k1x[i+1][j][k])/2,(h*k1x[i][j+1][k])/2,(h*k1x[i][j][k-1])/2,vx[i][j][k]+(h*k1vx[i][j][k])/2);																				
						k2vy[i][j][k]=fvy_vertex(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j][k-1],	(h*k1x[i][j][k])/2,(h*k1x[i+1][j][k])/2,(h*k1x[i][j+1][k])/2,(h*k1x[i][j][k-1])/2,vy[i][j][k]+(h*k1vy[i][j][k])/2);
						k2vz[i][j][k]=fvz_vertex(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j][k-1],	(h*k1x[i][j][k])/2,(h*k1x[i+1][j][k])/2,(h*k1x[i][j+1][k])/2,(h*k1x[i][j][k-1])/2,vz[i][j][k]+(h*k1vz[i][j][k])/2);
						
						k2x[i][j][k]=vx[i][j][k]+(h*k1vx[i][j][k])/2;
						k2y[i][j][k]=vy[i][j][k]+(h*k1vy[i][j][k])/2;
						k2z[i][j][k]=vz[i][j][k]+(h*k1vz[i][j][k])/2;
					}
					else if(i==X-1&&j==0&&k==Z-1){
						//treu i+1 j-1 k+1
						k2vx[i][j][k]=fvx_vertex(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k-1],	(h*k1x[i][j][k])/2,(h*k1x[i-1][j][k])/2,(h*k1x[i][j+1][k])/2,(h*k1x[i][j][k-1])/2,vx[i][j][k]+(h*k1vx[i][j][k])/2);																				
						k2vy[i][j][k]=fvy_vertex(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k-1],	(h*k1x[i][j][k])/2,(h*k1x[i-1][j][k])/2,(h*k1x[i][j+1][k])/2,(h*k1x[i][j][k-1])/2,vy[i][j][k]+(h*k1vy[i][j][k])/2);
						k2vz[i][j][k]=fvz_vertex(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k-1],	(h*k1x[i][j][k])/2,(h*k1x[i-1][j][k])/2,(h*k1x[i][j+1][k])/2,(h*k1x[i][j][k-1])/2,vz[i][j][k]+(h*k1vz[i][j][k])/2);
						
						k2x[i][j][k]=vx[i][j][k]+(h*k1vx[i][j][k])/2;
						k2y[i][j][k]=vy[i][j][k]+(h*k1vy[i][j][k])/2;
						k2z[i][j][k]=vz[i][j][k]+(h*k1vz[i][j][k])/2;
					}
					else if(i==X-1&&j==Y-1&&k==Z-1){
						//treu i+1 j+1 k+1
						k2vx[i][j][k]=fvx_vertex(x[i][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k-1],	(h*k1x[i][j][k])/2,(h*k1x[i-1][j][k])/2,(h*k1x[i][j-1][k])/2,(h*k1x[i][j][k-1])/2,vx[i][j][k]+(h*k1vx[i][j][k])/2);																				
						k2vy[i][j][k]=fvy_vertex(x[i][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k-1],	(h*k1x[i][j][k])/2,(h*k1x[i-1][j][k])/2,(h*k1x[i][j-1][k])/2,(h*k1x[i][j][k-1])/2,vy[i][j][k]+(h*k1vy[i][j][k])/2);
						k2vz[i][j][k]=fvz_vertex(x[i][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k-1],	(h*k1x[i][j][k])/2,(h*k1x[i-1][j][k])/2,(h*k1x[i][j-1][k])/2,(h*k1x[i][j][k-1])/2,vz[i][j][k]+(h*k1vz[i][j][k])/2);
						
						k2x[i][j][k]=vx[i][j][k]+(h*k1vx[i][j][k])/2;
						k2y[i][j][k]=vy[i][j][k]+(h*k1vy[i][j][k])/2;
						k2z[i][j][k]=vz[i][j][k]+(h*k1vz[i][j][k])/2;
					}
					else if(i==0&&j==Y-1&&k==Z-1){
						//treu  i-1 j+1 k+1
						k2vx[i][j][k]=fvx_vertex(x[i][j][k],x[i+1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j-1][k],z[i][j][k-1],	(h*k1x[i][j][k])/2,(h*k1x[i+1][j][k])/2,(h*k1x[i][j-1][k])/2,(h*k1x[i][j][k-1])/2,vx[i][j][k]+(h*k1vx[i][j][k])/2);																				
						k2vy[i][j][k]=fvy_vertex(x[i][j][k],x[i+1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j-1][k],z[i][j][k-1],	(h*k1x[i][j][k])/2,(h*k1x[i+1][j][k])/2,(h*k1x[i][j-1][k])/2,(h*k1x[i][j][k-1])/2,vy[i][j][k]+(h*k1vy[i][j][k])/2);	
						k2vz[i][j][k]=fvz_vertex(x[i][j][k],x[i+1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j-1][k],z[i][j][k-1],	(h*k1x[i][j][k])/2,(h*k1x[i+1][j][k])/2,(h*k1x[i][j-1][k])/2,(h*k1x[i][j][k-1])/2,vz[i][j][k]+(h*k1vz[i][j][k])/2);	
						
						k2x[i][j][k]=vx[i][j][k]+(h*k1vx[i][j][k])/2;
						k2y[i][j][k]=vy[i][j][k]+(h*k1vy[i][j][k])/2;
						k2z[i][j][k]=vz[i][j][k]+(h*k1vz[i][j][k])/2;					
					}
				
				}
			}
		}
		//k3
		for( int i=0;i<X;i++){
			for( int j=0;j<Y;j++){
				for( int k=0;k<Z;k++){
					if(0<i&&i<X-1 &&  0<j&&j<Y-1 && 0<k&&k<Z-1){
						
					k3vx[i][j][k]=fvx(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k2x[i][j][k])/2,(h*k2x[i+1][j][k])/2,(h*k2x[i-1][j][k])/2,(h*k2x[i][j+1][k])/2,(h*k2x[i][j-1][k])/2,(h*k2x[i][j][k+1])/2,(h*k2x[i][j][k-1])/2,vx[i][j][k]+(h*k2vx[i][j][k])/2);																				
					k3vy[i][j][k]=fvy(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k2y[i][j][k])/2,(h*k2y[i+1][j][k])/2,(h*k2y[i-1][j][k])/2,(h*k2y[i][j+1][k])/2,(h*k2y[i][j-1][k])/2,(h*k2y[i][j][k+1])/2,(h*k2y[i][j][k-1])/2,vy[i][j][k]+(h*k2vy[i][j][k])/2);
					k3vz[i][j][k]=fvz(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k2z[i][j][k])/2,(h*k2z[i+1][j][k])/2,(h*k2z[i-1][j][k])/2,(h*k2z[i][j+1][k])/2,(h*k2z[i][j-1][k])/2,(h*k2z[i][j][k+1])/2,(h*k2z[i][j][k-1])/2,vz[i][j][k]+(h*k2vz[i][j][k])/2);
			
					k3x[i][j][k]=vx[i][j][k]+(h*k2vx[i][j][k])/2;
					k3y[i][j][k]=vy[i][j][k]+(h*k2vy[i][j][k])/2;
					k3z[i][j][k]=vz[i][j][k]+(h*k2vz[i][j][k])/2;
					}
					else if(i==0 && 0<j&& j<Y-1 && 0<k&& k<Z-1){
						
					k3vx[i][j][k]=fvx_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k2x[i][j][k])/2,(h*k2x[i+1][j][k])/2,(h*k2x[i][j+1][k])/2,(h*k2x[i][j-1][k])/2,(h*k2x[i][j][k+1])/2,(h*k2x[i][j][k-1])/2,vx[i][j][k]+(h*k2vx[i][j][k])/2);																			
					k3vy[i][j][k]=fvy_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k2y[i][j][k])/2,(h*k2y[i+1][j][k])/2,(h*k2y[i][j+1][k])/2,(h*k2y[i][j-1][k])/2,(h*k2y[i][j][k+1])/2,(h*k2y[i][j][k-1])/2,vy[i][j][k]+(h*k2vy[i][j][k])/2);
					k3vz[i][j][k]=fvz_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k2z[i][j][k])/2,(h*k2z[i+1][j][k])/2,(h*k2z[i][j+1][k])/2,(h*k2z[i][j-1][k])/2,(h*k2z[i][j][k+1])/2,(h*k2z[i][j][k-1])/2,vz[i][j][k]+(h*k2vz[i][j][k])/2);
			
					k3x[i][j][k]=vx[i][j][k]+(h*k2vx[i][j][k])/2;
					k3y[i][j][k]=vy[i][j][k]+(h*k2vy[i][j][k])/2;
					k3z[i][j][k]=vz[i][j][k]+(h*k2vz[i][j][k])/2;
					
					}
					else if(i==X-1 && 0<j&& j<Y-1 && 0<k&& k<Z-1){
						
					k3vx[i][j][k]=fvx_paret(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k2x[i][j][k])/2,(h*k2x[i-1][j][k])/2,(h*k2x[i][j+1][k])/2,(h*k2x[i][j-1][k])/2,(h*k2x[i][j][k+1])/2,(h*k2x[i][j][k-1])/2,vx[i][j][k]+(h*k2vx[i][j][k])/2);																			
					k3vy[i][j][k]=fvy_paret(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k2y[i][j][k])/2,(h*k2y[i-1][j][k])/2,(h*k2y[i][j+1][k])/2,(h*k2y[i][j-1][k])/2,(h*k2y[i][j][k+1])/2,(h*k2y[i][j][k-1])/2,vy[i][j][k]+(h*k2vy[i][j][k])/2);
					k3vz[i][j][k]=fvz_paret(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k2z[i][j][k])/2,(h*k2z[i-1][j][k])/2,(h*k2z[i][j+1][k])/2,(h*k2z[i][j-1][k])/2,(h*k2z[i][j][k+1])/2,(h*k2z[i][j][k-1])/2,vz[i][j][k]+(h*k2vz[i][j][k])/2);
			
					k3x[i][j][k]=vx[i][j][k]+(h*k2vx[i][j][k])/2;
					k3y[i][j][k]=vy[i][j][k]+(h*k2vy[i][j][k])/2;
					k3z[i][j][k]=vz[i][j][k]+(h*k2vz[i][j][k])/2;
					
					}
					else if(j==0 && 0<i&&i<X-1 && 0<k&&k<Z-1){
					
					k3vx[i][j][k]=fvx_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	(h*k2x[i][j][k])/2,(h*k2x[i+1][j][k])/2,(h*k2x[i-1][j][k])/2,(h*k2x[i][j+1][k])/2,(h*k2x[i][j][k+1])/2,(h*k2x[i][j][k-1])/2,vx[i][j][k]+(h*k2vx[i][j][k])/2);																				
					k3vy[i][j][k]=fvy_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	(h*k2y[i][j][k])/2,(h*k2y[i+1][j][k])/2,(h*k2y[i-1][j][k])/2,(h*k2y[i][j+1][k])/2,(h*k2y[i][j][k+1])/2,(h*k2y[i][j][k-1])/2,vy[i][j][k]+(h*k2vy[i][j][k])/2);
					k3vz[i][j][k]=fvz_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	(h*k2z[i][j][k])/2,(h*k2z[i+1][j][k])/2,(h*k2z[i-1][j][k])/2,(h*k2z[i][j+1][k])/2,(h*k2z[i][j][k+1])/2,(h*k2z[i][j][k-1])/2,vz[i][j][k]+(h*k2vz[i][j][k])/2);
			
					k3x[i][j][k]=vx[i][j][k]+(h*k2vx[i][j][k])/2;
					k3y[i][j][k]=vy[i][j][k]+(h*k2vy[i][j][k])/2;
					k3z[i][j][k]=vz[i][j][k]+(h*k2vz[i][j][k])/2;
					
					}
					else if(j==Y-1 && 0<i&&i<X-1 && 0<k&&k<Z-1){
						
					k3vx[i][j][k]=fvx_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k2x[i][j][k])/2,(h*k2x[i+1][j][k])/2,(h*k2x[i-1][j][k])/2,(h*k2x[i][j-1][k])/2,(h*k2x[i][j][k+1])/2,(h*k2x[i][j][k-1])/2,vx[i][j][k]+(h*k2vx[i][j][k])/2);																				
					k3vy[i][j][k]=fvy_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k2y[i][j][k])/2,(h*k2y[i+1][j][k])/2,(h*k2y[i-1][j][k])/2,(h*k2y[i][j-1][k])/2,(h*k2y[i][j][k+1])/2,(h*k2y[i][j][k-1])/2,vy[i][j][k]+(h*k2vy[i][j][k])/2);
					k3vz[i][j][k]=fvz_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k2z[i][j][k])/2,(h*k2z[i+1][j][k])/2,(h*k2z[i-1][j][k])/2,(h*k2z[i][j-1][k])/2,(h*k2z[i][j][k+1])/2,(h*k2z[i][j][k-1])/2,vz[i][j][k]+(h*k2vz[i][j][k])/2);
			
					k3x[i][j][k]=vx[i][j][k]+(h*k2vx[i][j][k])/2;
					k3y[i][j][k]=vy[i][j][k]+(h*k2vy[i][j][k])/2;
					k3z[i][j][k]=vz[i][j][k]+(h*k2vz[i][j][k])/2;
					
					}		
					else if(k==0 && 0<i&&i<X-1 && 0<j&&j<Y-1){
						
					k3vx[i][j][k]=fvx_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	(h*k2x[i][j][k])/2,(h*k2x[i+1][j][k])/2,(h*k2x[i-1][j][k])/2,(h*k2x[i][j+1][k])/2,(h*k2x[i][j-1][k])/2,(h*k2x[i][j][k+1])/2,vx[i][j][k]+(h*k2vx[i][j][k])/2);																				
					k3vy[i][j][k]=fvy_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	(h*k2y[i][j][k])/2,(h*k2y[i+1][j][k])/2,(h*k2y[i-1][j][k])/2,(h*k2y[i][j+1][k])/2,(h*k2y[i][j-1][k])/2,(h*k2y[i][j][k+1])/2,vy[i][j][k]+(h*k2vy[i][j][k])/2);
					k3vz[i][j][k]=fvz_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	(h*k2z[i][j][k])/2,(h*k2z[i+1][j][k])/2,(h*k2z[i-1][j][k])/2,(h*k2z[i][j+1][k])/2,(h*k2z[i][j-1][k])/2,(h*k2z[i][j][k+1])/2,vz[i][j][k]+(h*k2vz[i][j][k])/2);
			
					k3x[i][j][k]=vx[i][j][k]+(h*k2vx[i][j][k])/2;
					k3y[i][j][k]=vy[i][j][k]+(h*k2vy[i][j][k])/2;
					k3z[i][j][k]=vz[i][j][k]+(h*k2vz[i][j][k])/2;
					}
					else if(k==Z-1 && 0<i&&i<X-1 && 0<j&&j<Y-1){
					
					k3vx[i][j][k]=fvx_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	(h*k2x[i][j][k])/2,(h*k2x[i+1][j][k])/2,(h*k2x[i-1][j][k])/2,(h*k2x[i][j+1][k])/2,(h*k2x[i][j-1][k])/2,(h*k2x[i][j][k-1])/2,vx[i][j][k]+(h*k2vx[i][j][k])/2);																				
					k3vy[i][j][k]=fvy_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	(h*k2y[i][j][k])/2,(h*k2y[i+1][j][k])/2,(h*k2y[i-1][j][k])/2,(h*k2y[i][j+1][k])/2,(h*k2y[i][j-1][k])/2,(h*k2y[i][j][k-1])/2,vy[i][j][k]+(h*k2vy[i][j][k])/2);
					k3vz[i][j][k]=fvz_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	(h*k2z[i][j][k])/2,(h*k2z[i+1][j][k])/2,(h*k2z[i-1][j][k])/2,(h*k2z[i][j+1][k])/2,(h*k2z[i][j-1][k])/2,(h*k2z[i][j][k-1])/2,vz[i][j][k]+(h*k2vz[i][j][k])/2);
			
					k3x[i][j][k]=vx[i][j][k]+(h*k2vx[i][j][k])/2;
					k3y[i][j][k]=vy[i][j][k]+(h*k2vy[i][j][k])/2;
					k3z[i][j][k]=vz[i][j][k]+(h*k2vz[i][j][k])/2;
						
					}
				
					else if(k==0&& i==0 && 0<j&&j<Y-1){
						//treure k-1 i i-1
						k3vx[i][j][k]=fvx_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	(h*k2x[i][j][k])/2,(h*k2x[i+1][j][k])/2,(h*k2x[i][j+1][k])/2,(h*k2x[i][j-1][k])/2,(h*k2x[i][j][k+1])/2,vx[i][j][k]+(h*k2vx[i][j][k])/2);																				
						k3vy[i][j][k]=fvy_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	(h*k2y[i][j][k])/2,(h*k2y[i+1][j][k])/2,(h*k2y[i][j+1][k])/2,(h*k2y[i][j-1][k])/2,(h*k2y[i][j][k+1])/2,vy[i][j][k]+(h*k2vy[i][j][k])/2);
						k3vz[i][j][k]=fvz_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	(h*k2z[i][j][k])/2,(h*k2z[i+1][j][k])/2,(h*k2z[i][j+1][k])/2,(h*k2z[i][j-1][k])/2,(h*k2z[i][j][k+1])/2,vz[i][j][k]+(h*k2vz[i][j][k])/2);
			
						k3x[i][j][k]=vx[i][j][k]+(h*k2vx[i][j][k])/2;
						k3y[i][j][k]=vy[i][j][k]+(h*k2vy[i][j][k])/2;
						k3z[i][j][k]=vz[i][j][k]+(h*k2vz[i][j][k])/2;
					}
					else if(k==0&&i==X-1&&0<j&&j<Y-1){
						//treure k-1 i i+1
						k3vx[i][j][k]=fvx_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	(h*k2x[i][j][k])/2,(h*k2x[i-1][j][k])/2,(h*k2x[i][j+1][k])/2,(h*k2x[i][j-1][k])/2,(h*k2x[i][j][k+1])/2,vx[i][j][k]+(h*k2vx[i][j][k])/2);																				
						k3vy[i][j][k]=fvy_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	(h*k2y[i][j][k])/2,(h*k2y[i-1][j][k])/2,(h*k2y[i][j+1][k])/2,(h*k2y[i][j-1][k])/2,(h*k2y[i][j][k+1])/2,vy[i][j][k]+(h*k2vy[i][j][k])/2);
						k3vz[i][j][k]=fvz_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	(h*k2z[i][j][k])/2,(h*k2z[i-1][j][k])/2,(h*k2z[i][j+1][k])/2,(h*k2z[i][j-1][k])/2,(h*k2z[i][j][k+1])/2,vz[i][j][k]+(h*k2vz[i][j][k])/2);
			
						k3x[i][j][k]=vx[i][j][k]+(h*k2vx[i][j][k])/2;
						k3y[i][j][k]=vy[i][j][k]+(h*k2vy[i][j][k])/2;
						k3z[i][j][k]=vz[i][j][k]+(h*k2vz[i][j][k])/2;
					}
					else if(k==0&&j==0&&0<i&&i<X-1){
						//treure k-1 i j-1
						k3vx[i][j][k]=fvx_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],	(h*k2x[i][j][k])/2,(h*k2x[i+1][j][k])/2,(h*k2x[i-1][j][k])/2,(h*k2x[i][j+1][k])/2,(h*k2x[i][j][k+1])/2,vx[i][j][k]+(h*k2vx[i][j][k])/2);																				
						k3vy[i][j][k]=fvy_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],	(h*k2y[i][j][k])/2,(h*k2y[i+1][j][k])/2,(h*k2y[i-1][j][k])/2,(h*k2y[i][j+1][k])/2,(h*k2y[i][j][k+1])/2,vy[i][j][k]+(h*k2vy[i][j][k])/2);
						k3vz[i][j][k]=fvz_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],	(h*k2z[i][j][k])/2,(h*k2z[i+1][j][k])/2,(h*k2z[i-1][j][k])/2,(h*k2z[i][j+1][k])/2,(h*k2z[i][j][k+1])/2,vz[i][j][k]+(h*k2vz[i][j][k])/2);
			
						k3x[i][j][k]=vx[i][j][k]+(h*k2vx[i][j][k])/2;
						k3y[i][j][k]=vy[i][j][k]+(h*k2vy[i][j][k])/2;
						k3z[i][j][k]=vz[i][j][k]+(h*k2vz[i][j][k])/2;
					}
					else if(k==0&&j==Y-1&&0<i&&i<X-1){
						//treure k-1 i j+1
						k3vx[i][j][k]=fvx_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],	(h*k2x[i][j][k])/2,(h*k2x[i+1][j][k])/2,(h*k2x[i-1][j][k])/2,(h*k2x[i][j-1][k])/2,(h*k2x[i][j][k+1])/2,vx[i][j][k]+(h*k2vx[i][j][k])/2);																				
						k3vy[i][j][k]=fvy_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],	(h*k2y[i][j][k])/2,(h*k2y[i+1][j][k])/2,(h*k2y[i-1][j][k])/2,(h*k2y[i][j-1][k])/2,(h*k2y[i][j][k+1])/2,vy[i][j][k]+(h*k2vy[i][j][k])/2);
						k3vz[i][j][k]=fvz_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],	(h*k2z[i][j][k])/2,(h*k2z[i+1][j][k])/2,(h*k2z[i-1][j][k])/2,(h*k2z[i][j-1][k])/2,(h*k2z[i][j][k+1])/2,vz[i][j][k]+(h*k2vz[i][j][k])/2);
			
						k3x[i][j][k]=vx[i][j][k]+(h*k2vx[i][j][k])/2;
						k3y[i][j][k]=vy[i][j][k]+(h*k2vy[i][j][k])/2;
						k3z[i][j][k]=vz[i][j][k]+(h*k2vz[i][j][k])/2;
					}
					
					else if(k==Z-1&& i==0 && 0<j&&j<Y-1){
						//treure k+1 i i-1
						k3vx[i][j][k]=fvx_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	(h*k2x[i][j][k])/2,(h*k2x[i+1][j][k])/2,(h*k2x[i][j+1][k])/2,(h*k2x[i][j-1][k])/2,(h*k2x[i][j][k-1])/2,vx[i][j][k]+(h*k2vx[i][j][k])/2);																				
						k3vy[i][j][k]=fvy_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	(h*k2y[i][j][k])/2,(h*k2y[i+1][j][k])/2,(h*k2y[i][j+1][k])/2,(h*k2y[i][j-1][k])/2,(h*k2y[i][j][k-1])/2,vy[i][j][k]+(h*k2vy[i][j][k])/2);
						k3vz[i][j][k]=fvz_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	(h*k2z[i][j][k])/2,(h*k2z[i+1][j][k])/2,(h*k2z[i][j+1][k])/2,(h*k2z[i][j-1][k])/2,(h*k2z[i][j][k-1])/2,vz[i][j][k]+(h*k2vz[i][j][k])/2);
			
						k3x[i][j][k]=vx[i][j][k]+(h*k2vx[i][j][k])/2;
						k3y[i][j][k]=vy[i][j][k]+(h*k2vy[i][j][k])/2;
						k3z[i][j][k]=vz[i][j][k]+(h*k2vz[i][j][k])/2;
					}
					else if(k==Z-1&&i==X-1&&0<j&&j<Y-1){
						//treure k+1 i i+1
						k3vx[i][j][k]=fvx_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	(h*k2x[i][j][k])/2,(h*k2x[i-1][j][k])/2,(h*k2x[i][j+1][k])/2,(h*k2x[i][j-1][k])/2,(h*k2x[i][j][k-1])/2,vx[i][j][k]+(h*k2vx[i][j][k])/2);																				
						k3vy[i][j][k]=fvy_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	(h*k2y[i][j][k])/2,(h*k2y[i-1][j][k])/2,(h*k2y[i][j+1][k])/2,(h*k2y[i][j-1][k])/2,(h*k2y[i][j][k-1])/2,vy[i][j][k]+(h*k2vy[i][j][k])/2);
						k3vz[i][j][k]=fvz_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	(h*k2z[i][j][k])/2,(h*k2z[i-1][j][k])/2,(h*k2z[i][j+1][k])/2,(h*k2z[i][j-1][k])/2,(h*k2z[i][j][k-1])/2,vz[i][j][k]+(h*k2vz[i][j][k])/2);
						
						k3x[i][j][k]=vx[i][j][k]+(h*k2vx[i][j][k])/2;
						k3y[i][j][k]=vy[i][j][k]+(h*k2vy[i][j][k])/2;
						k3z[i][j][k]=vz[i][j][k]+(h*k2vz[i][j][k])/2;
					}
					else if(k==Z-1&&j==0&&0<i&&i<X-1){
						//treure k+1 i j-1
						k3vx[i][j][k]=fvx_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k-1],	(h*k2x[i][j][k])/2,(h*k2x[i+1][j][k])/2,(h*k2x[i-1][j][k])/2,(h*k2x[i][j+1][k])/2,(h*k2x[i][j][k-1])/2,vx[i][j][k]+(h*k2vx[i][j][k])/2);																				
						k3vy[i][j][k]=fvy_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k-1],	(h*k2y[i][j][k])/2,(h*k2y[i+1][j][k])/2,(h*k2y[i-1][j][k])/2,(h*k2y[i][j+1][k])/2,(h*k2y[i][j][k-1])/2,vy[i][j][k]+(h*k2vy[i][j][k])/2);
						k3vz[i][j][k]=fvz_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k-1],	(h*k2z[i][j][k])/2,(h*k2z[i+1][j][k])/2,(h*k2z[i-1][j][k])/2,(h*k2z[i][j+1][k])/2,(h*k2z[i][j][k-1])/2,vz[i][j][k]+(h*k2vz[i][j][k])/2);
						
						k3x[i][j][k]=vx[i][j][k]+(h*k2vx[i][j][k])/2;
						k3y[i][j][k]=vy[i][j][k]+(h*k2vy[i][j][k])/2;
						k3z[i][j][k]=vz[i][j][k]+(h*k2vz[i][j][k])/2;
					}
					else if(k==Z-1&&j==Y-1&&0<i&&i<X-1){
						//treure k+1 i j+1
						k3vx[i][j][k]=fvx_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k-1],	(h*k2x[i][j][k])/2,(h*k2x[i+1][j][k])/2,(h*k2x[i-1][j][k])/2,(h*k2x[i][j-1][k])/2,(h*k2x[i][j][k-1])/2,vx[i][j][k]+(h*k2vx[i][j][k])/2);																				
						k3vy[i][j][k]=fvy_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k-1],	(h*k2y[i][j][k])/2,(h*k2y[i+1][j][k])/2,(h*k2y[i-1][j][k])/2,(h*k2y[i][j-1][k])/2,(h*k2y[i][j][k-1])/2,vy[i][j][k]+(h*k2vy[i][j][k])/2);
						k3vz[i][j][k]=fvz_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k-1],	(h*k2z[i][j][k])/2,(h*k2z[i+1][j][k])/2,(h*k2z[i-1][j][k])/2,(h*k2z[i][j-1][k])/2,(h*k2z[i][j][k-1])/2,vz[i][j][k]+(h*k2vz[i][j][k])/2);
						
						k3x[i][j][k]=vx[i][j][k]+(h*k2vx[i][j][k])/2;
						k3y[i][j][k]=vy[i][j][k]+(h*k2vy[i][j][k])/2;
						k3z[i][j][k]=vz[i][j][k]+(h*k2vz[i][j][k])/2;
					}
					
					else if(i==0&&j==0&&0<k&&k<Z-1){
						//treure i-1 i j-1
						k3vx[i][j][k]=fvx_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	(h*k2x[i][j][k])/2,(h*k2x[i+1][j][k])/2,(h*k2x[i][j+1][k])/2,(h*k2x[i][j][k+1])/2,(h*k2x[i][j][k-1])/2,vx[i][j][k]+(h*k2vx[i][j][k])/2);																				
						k3vy[i][j][k]=fvy_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	(h*k2y[i][j][k])/2,(h*k2y[i+1][j][k])/2,(h*k2y[i][j+1][k])/2,(h*k2y[i][j][k+1])/2,(h*k2y[i][j][k-1])/2,vy[i][j][k]+(h*k2vy[i][j][k])/2);
						k3vz[i][j][k]=fvz_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	(h*k2z[i][j][k])/2,(h*k2z[i+1][j][k])/2,(h*k2z[i][j+1][k])/2,(h*k2z[i][j][k+1])/2,(h*k2z[i][j][k-1])/2,vz[i][j][k]+(h*k2vz[i][j][k])/2);
					
						k3x[i][j][k]=vx[i][j][k]+(h*k2vx[i][j][k])/2;
						k3y[i][j][k]=vy[i][j][k]+(h*k2vy[i][j][k])/2;
						k3z[i][j][k]=vz[i][j][k]+(h*k2vz[i][j][k])/2;
					}
					else if(i==0&&j==Y-1&&0<k&&k<Z-1){
						//treure i-1 i j+1 
						k3vx[i][j][k]=fvx_aresta(x[i][j][k],x[i+1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k2x[i][j][k])/2,(h*k2x[i+1][j][k])/2,(h*k2x[i][j-1][k])/2,(h*k2x[i][j][k+1])/2,(h*k2x[i][j][k-1])/2,vx[i][j][k]+(h*k2vx[i][j][k])/2);																				
						k3vy[i][j][k]=fvy_aresta(x[i][j][k],x[i+1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k2y[i][j][k])/2,(h*k2y[i+1][j][k])/2,(h*k2y[i][j-1][k])/2,(h*k2y[i][j][k+1])/2,(h*k2y[i][j][k-1])/2,vy[i][j][k]+(h*k2vy[i][j][k])/2);
						k3vz[i][j][k]=fvz_aresta(x[i][j][k],x[i+1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k2z[i][j][k])/2,(h*k2z[i+1][j][k])/2,(h*k2z[i][j-1][k])/2,(h*k2z[i][j][k+1])/2,(h*k2z[i][j][k-1])/2,vz[i][j][k]+(h*k2vz[i][j][k])/2);
						
						k3x[i][j][k]=vx[i][j][k]+(h*k2vx[i][j][k])/2;
						k3y[i][j][k]=vy[i][j][k]+(h*k2vy[i][j][k])/2;
						k3z[i][j][k]=vz[i][j][k]+(h*k2vz[i][j][k])/2;
					}
					else if(i==X-1&&j==0&&0<k&&k<Z-1){
						//treure  i+1 i j-1
						k3vx[i][j][k]=fvx_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	(h*k2x[i][j][k])/2,(h*k2x[i-1][j][k])/2,(h*k2x[i][j+1][k])/2,(h*k2x[i][j][k+1])/2,(h*k2x[i][j][k-1])/2,vx[i][j][k]+(h*k2vx[i][j][k])/2);																				
						k3vy[i][j][k]=fvy_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	(h*k2y[i][j][k])/2,(h*k2y[i-1][j][k])/2,(h*k2y[i][j+1][k])/2,(h*k2y[i][j][k+1])/2,(h*k2y[i][j][k-1])/2,vy[i][j][k]+(h*k2vy[i][j][k])/2);
						k3vz[i][j][k]=fvz_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	(h*k2z[i][j][k])/2,(h*k2z[i-1][j][k])/2,(h*k2z[i][j+1][k])/2,(h*k2z[i][j][k+1])/2,(h*k2z[i][j][k-1])/2,vz[i][j][k]+(h*k2vz[i][j][k])/2);
					
						k3x[i][j][k]=vx[i][j][k]+(h*k2vx[i][j][k])/2;
						k3y[i][j][k]=vy[i][j][k]+(h*k2vy[i][j][k])/2;
						k3z[i][j][k]=vz[i][j][k]+(h*k2vz[i][j][k])/2;
					}
					else if(i==X-1&&j==Y-1&&0<k&&k<Z-1){
						//treure i-1 i j-1
						k3vx[i][j][k]=fvx_aresta(x[i][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k2x[i][j][k])/2,(h*k2x[i-1][j][k])/2,(h*k2x[i][j-1][k])/2,(h*k2x[i][j][k+1])/2,(h*k2x[i][j][k-1])/2,vx[i][j][k]+(h*k2vx[i][j][k])/2);																				
						k3vy[i][j][k]=fvy_aresta(x[i][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k2y[i][j][k])/2,(h*k2y[i-1][j][k])/2,(h*k2y[i][j-1][k])/2,(h*k2y[i][j][k+1])/2,(h*k2y[i][j][k-1])/2,vy[i][j][k]+(h*k2vy[i][j][k])/2);
						k3vz[i][j][k]=fvz_aresta(x[i][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k2z[i][j][k])/2,(h*k2z[i-1][j][k])/2,(h*k2z[i][j-1][k])/2,(h*k2z[i][j][k+1])/2,(h*k2z[i][j][k-1])/2,vz[i][j][k]+(h*k2vz[i][j][k])/2);
			
						k3x[i][j][k]=vx[i][j][k]+(h*k2vx[i][j][k])/2;
						k3y[i][j][k]=vy[i][j][k]+(h*k2vy[i][j][k])/2;
						k3z[i][j][k]=vz[i][j][k]+(h*k2vz[i][j][k])/2;
					}
				
					else if(i==0&&j==0&&k==Z-1){
						//treu i-1 j-1 k+1
						k3vx[i][j][k]=fvx_vertex(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j][k-1],	(h*k2x[i][j][k])/2,(h*k2x[i+1][j][k])/2,(h*k2x[i][j+1][k])/2,(h*k2x[i][j][k-1])/2,vx[i][j][k]+(h*k2vx[i][j][k])/2);																				
						k3vy[i][j][k]=fvy_vertex(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j][k-1],	(h*k2x[i][j][k])/2,(h*k2x[i+1][j][k])/2,(h*k2x[i][j+1][k])/2,(h*k2x[i][j][k-1])/2,vy[i][j][k]+(h*k2vy[i][j][k])/2);
						k3vz[i][j][k]=fvz_vertex(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j][k-1],	(h*k2x[i][j][k])/2,(h*k2x[i+1][j][k])/2,(h*k2x[i][j+1][k])/2,(h*k2x[i][j][k-1])/2,vz[i][j][k]+(h*k2vz[i][j][k])/2);
			
						k3x[i][j][k]=vx[i][j][k]+(h*k2vx[i][j][k])/2;
						k3y[i][j][k]=vy[i][j][k]+(h*k2vy[i][j][k])/2;
						k3z[i][j][k]=vz[i][j][k]+(h*k2vz[i][j][k])/2;
					}
					else if(i==X-1&&j==0&&k==Z-1){
						//treu i+1 j-1 k+1
						k3vx[i][j][k]=fvx_vertex(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k-1],	(h*k2x[i][j][k])/2,(h*k2x[i-1][j][k])/2,(h*k2x[i][j+1][k])/2,(h*k2x[i][j][k-1])/2,vx[i][j][k]+(h*k2vx[i][j][k])/2);																				
						k3vy[i][j][k]=fvy_vertex(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k-1],	(h*k2x[i][j][k])/2,(h*k2x[i-1][j][k])/2,(h*k2x[i][j+1][k])/2,(h*k2x[i][j][k-1])/2,vy[i][j][k]+(h*k2vy[i][j][k])/2);	
						k3vz[i][j][k]=fvz_vertex(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k-1],	(h*k2x[i][j][k])/2,(h*k2x[i-1][j][k])/2,(h*k2x[i][j+1][k])/2,(h*k2x[i][j][k-1])/2,vz[i][j][k]+(h*k2vz[i][j][k])/2);	
			
						k3x[i][j][k]=vx[i][j][k]+(h*k2vx[i][j][k])/2;
						k3y[i][j][k]=vy[i][j][k]+(h*k2vy[i][j][k])/2;
						k3z[i][j][k]=vz[i][j][k]+(h*k2vz[i][j][k])/2;
					}
					else if(i==X-1&&j==Y-1&&k==Z-1){
						//treu i+1 j+1 k+1
						k3vx[i][j][k]=fvx_vertex(x[i][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k-1],	(h*k2x[i][j][k])/2,(h*k2x[i-1][j][k])/2,(h*k2x[i][j-1][k])/2,(h*k2x[i][j][k-1])/2,vx[i][j][k]+(h*k2vx[i][j][k])/2);																				
						k3vy[i][j][k]=fvy_vertex(x[i][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k-1],	(h*k2x[i][j][k])/2,(h*k2x[i-1][j][k])/2,(h*k2x[i][j-1][k])/2,(h*k2x[i][j][k-1])/2,vy[i][j][k]+(h*k2vy[i][j][k])/2);	
						k3vz[i][j][k]=fvz_vertex(x[i][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k-1],	(h*k2x[i][j][k])/2,(h*k2x[i-1][j][k])/2,(h*k2x[i][j-1][k])/2,(h*k2x[i][j][k-1])/2,vz[i][j][k]+(h*k2vz[i][j][k])/2);	
			
						k3x[i][j][k]=vx[i][j][k]+(h*k2vx[i][j][k])/2;
						k3y[i][j][k]=vy[i][j][k]+(h*k2vy[i][j][k])/2;
						k3z[i][j][k]=vz[i][j][k]+(h*k2vz[i][j][k])/2;
					}
					else if(i==0&&j==Y-1&&k==Z-1){
						//treu  i-1 j+1 k+1
						k3vx[i][j][k]=fvx_vertex(x[i][j][k],x[i+1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j-1][k],z[i][j][k-1],	(h*k2x[i][j][k])/2,(h*k2x[i+1][j][k])/2,(h*k2x[i][j-1][k])/2,(h*k2x[i][j][k-1])/2,vx[i][j][k]+(h*k2vx[i][j][k])/2);																				
						k3vy[i][j][k]=fvy_vertex(x[i][j][k],x[i+1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j-1][k],z[i][j][k-1],	(h*k2x[i][j][k])/2,(h*k2x[i+1][j][k])/2,(h*k2x[i][j-1][k])/2,(h*k2x[i][j][k-1])/2,vy[i][j][k]+(h*k2vy[i][j][k])/2);	
						k3vz[i][j][k]=fvz_vertex(x[i][j][k],x[i+1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j-1][k],z[i][j][k-1],	(h*k2x[i][j][k])/2,(h*k2x[i+1][j][k])/2,(h*k2x[i][j-1][k])/2,(h*k2x[i][j][k-1])/2,vz[i][j][k]+(h*k2vz[i][j][k])/2);	
			
						k3x[i][j][k]=vx[i][j][k]+(h*k2vx[i][j][k])/2;
						k3y[i][j][k]=vy[i][j][k]+(h*k2vy[i][j][k])/2;
						k3z[i][j][k]=vz[i][j][k]+(h*k2vz[i][j][k])/2;
					}
				}
			}
		}
		//k4
		for(int i=0;i<X;i++){
			for( int j=0;j<Y;j++){
				for( int k=0;k<Z;k++){
					if(0<i&&i<X-1 &&  0<j&&j<Y-1 && 0<k&&k<Z-1){
					k4vx[i][j][k]=fvx(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k3x[i][j][k]),(h*k3x[i+1][j][k]),(h*k3x[i-1][j][k]),(h*k3x[i][j+1][k]),(h*k3x[i][j-1][k]),(h*k3x[i][j][k+1]),(h*k3x[i][j][k-1]),vx[i][j][k]+(h*k3vx[i][j][k]));																				
					k4vy[i][j][k]=fvy(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k3y[i][j][k]),(h*k3y[i+1][j][k]),(h*k3y[i-1][j][k]),(h*k3y[i][j+1][k]),(h*k3y[i][j-1][k]),(h*k3y[i][j][k+1]),(h*k3y[i][j][k-1]),vy[i][j][k]+(h*k3vy[i][j][k]));
					k4vz[i][j][k]=fvz(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k3z[i][j][k]),(h*k3z[i+1][j][k]),(h*k3z[i-1][j][k]),(h*k3z[i][j+1][k]),(h*k3z[i][j-1][k]),(h*k3z[i][j][k+1]),(h*k3z[i][j][k-1]),vz[i][j][k]+(h*k3vz[i][j][k]));

					k4x[i][j][k]=vx[i][j][k]+(h*k3vx[i][j][k]);
					k4y[i][j][k]=vy[i][j][k]+(h*k3vy[i][j][k]);
					k4z[i][j][k]=vz[i][j][k]+(h*k3vz[i][j][k]);
					
					}
					
					else if(i==0 && 0<j&& j<Y-1 && 0<k&& k<Z-1){
					k4vx[i][j][k]=fvx_paret(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k3x[i][j][k]),(h*k3x[i+1][j][k]),(h*k3x[i][j+1][k]),(h*k3x[i][j-1][k]),(h*k3x[i][j][k+1]),(h*k3x[i][j][k-1]),vx[i][j][k]+(h*k3vx[i][j][k]));																				
					k4vy[i][j][k]=fvy_paret(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k3y[i][j][k]),(h*k3y[i+1][j][k]),(h*k3y[i][j+1][k]),(h*k3y[i][j-1][k]),(h*k3y[i][j][k+1]),(h*k3y[i][j][k-1]),vy[i][j][k]+(h*k3vy[i][j][k]));
					k4vz[i][j][k]=fvz_paret(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k3z[i][j][k]),(h*k3z[i+1][j][k]),(h*k3z[i][j+1][k]),(h*k3z[i][j-1][k]),(h*k3z[i][j][k+1]),(h*k3z[i][j][k-1]),vz[i][j][k]+(h*k3vz[i][j][k]));
																																																																															
					k4x[i][j][k]=vx[i][j][k]+(h*k3vx[i][j][k]);
					k4y[i][j][k]=vy[i][j][k]+(h*k3vy[i][j][k]);
					k4z[i][j][k]=vz[i][j][k]+(h*k3vz[i][j][k]);	
					
					}
					else if(i==X-1 && 0<j&& j<Y-1 && 0<k&& k<Z-1){
					k4vx[i][j][k]=fvx_paret(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k3x[i][j][k]),(h*k3x[i-1][j][k]),(h*k3x[i][j+1][k]),(h*k3x[i][j-1][k]),(h*k3x[i][j][k+1]),(h*k3x[i][j][k-1]),vx[i][j][k]+(h*k3vx[i][j][k]));																				
					k4vy[i][j][k]=fvy_paret(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k3y[i][j][k]),(h*k3y[i-1][j][k]),(h*k3y[i][j+1][k]),(h*k3y[i][j-1][k]),(h*k3y[i][j][k+1]),(h*k3y[i][j][k-1]),vy[i][j][k]+(h*k3vy[i][j][k]));
					k4vz[i][j][k]=fvz_paret(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k3z[i][j][k]),(h*k3z[i-1][j][k]),(h*k3z[i][j+1][k]),(h*k3z[i][j-1][k]),(h*k3z[i][j][k+1]),(h*k3z[i][j][k-1]),vz[i][j][k]+(h*k3vz[i][j][k]));
																																																																																			
					k4x[i][j][k]=vx[i][j][k]+(h*k3vx[i][j][k]);
					k4y[i][j][k]=vy[i][j][k]+(h*k3vy[i][j][k]);
					k4z[i][j][k]=vz[i][j][k]+(h*k3vz[i][j][k]);
					
					
					}
					else if(j==0 && 0<i&&i<X-1 && 0<k&&k<Z-1){
					k4vx[i][j][k]=fvx_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	(h*k3x[i][j][k]),(h*k3x[i+1][j][k]),(h*k3x[i-1][j][k]),(h*k3x[i][j+1][k]),(h*k3x[i][j][k+1]),(h*k3x[i][j][k-1]),vx[i][j][k]+(h*k3vx[i][j][k]));																				
					k4vy[i][j][k]=fvy_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	(h*k3y[i][j][k]),(h*k3y[i+1][j][k]),(h*k3y[i-1][j][k]),(h*k3y[i][j+1][k]),(h*k3y[i][j][k+1]),(h*k3y[i][j][k-1]),vy[i][j][k]+(h*k3vy[i][j][k]));
					k4vz[i][j][k]=fvz_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	(h*k3z[i][j][k]),(h*k3z[i+1][j][k]),(h*k3z[i-1][j][k]),(h*k3z[i][j+1][k]),(h*k3z[i][j][k+1]),(h*k3z[i][j][k-1]),vz[i][j][k]+(h*k3vz[i][j][k]));
																																																																																		
					k4x[i][j][k]=vx[i][j][k]+(h*k3vx[i][j][k]);
					k4y[i][j][k]=vy[i][j][k]+(h*k3vy[i][j][k]);
					k4z[i][j][k]=vz[i][j][k]+(h*k3vz[i][j][k]);
					
					
					}
					else if(j==Y-1 && 0<i&&i<X-1 && 0<k&&k<Z-1){
					
					k4vx[i][j][k]=fvx_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k3x[i][j][k]),(h*k3x[i-1][j][k]),(h*k3x[i][j+1][k]),(h*k3x[i][j-1][k]),(h*k3x[i][j][k+1]),(h*k3x[i][j][k-1]),vx[i][j][k]+(h*k3vx[i][j][k]));																				
					k4vy[i][j][k]=fvy_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k3y[i][j][k]),(h*k3y[i-1][j][k]),(h*k3y[i][j+1][k]),(h*k3y[i][j-1][k]),(h*k3y[i][j][k+1]),(h*k3y[i][j][k-1]),vy[i][j][k]+(h*k3vy[i][j][k]));
					k4vz[i][j][k]=fvz_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k3z[i][j][k]),(h*k3z[i-1][j][k]),(h*k3z[i][j+1][k]),(h*k3z[i][j-1][k]),(h*k3z[i][j][k+1]),(h*k3z[i][j][k-1]),vz[i][j][k]+(h*k3vz[i][j][k]));

					k4x[i][j][k]=vx[i][j][k]+(h*k3vx[i][j][k]);
					k4y[i][j][k]=vy[i][j][k]+(h*k3vy[i][j][k]);
					k4z[i][j][k]=vz[i][j][k]+(h*k3vz[i][j][k]);	
					
					
					}
					else if(k==0 && 0<i&&i<X-1 && 0<j&&j<Y-1){
						k4vx[i][j][k]=fvx_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	(h*k3x[i][j][k]),(h*k3x[i+1][j][k]),(h*k3x[i-1][j][k]),(h*k3x[i][j+1][k]),(h*k3x[i][j-1][k]),(h*k3x[i][j][k+1]),vx[i][j][k]+(h*k3vx[i][j][k]));																				
						k4vy[i][j][k]=fvy_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	(h*k3y[i][j][k]),(h*k3y[i+1][j][k]),(h*k3y[i-1][j][k]),(h*k3y[i][j+1][k]),(h*k3y[i][j-1][k]),(h*k3y[i][j][k+1]),vy[i][j][k]+(h*k3vy[i][j][k]));
						k4vz[i][j][k]=fvz_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	(h*k3z[i][j][k]),(h*k3z[i+1][j][k]),(h*k3z[i-1][j][k]),(h*k3z[i][j+1][k]),(h*k3z[i][j-1][k]),(h*k3z[i][j][k+1]),vz[i][j][k]+(h*k3vz[i][j][k]));

						k4x[i][j][k]=vx[i][j][k]+(h*k3vx[i][j][k]);
						k4y[i][j][k]=vy[i][j][k]+(h*k3vy[i][j][k]);
						k4z[i][j][k]=vz[i][j][k]+(h*k3vz[i][j][k]);	
	
					}
					else if(k==Z-1 && 0<i&&i<X-1 && 0<j&&j<Y-1){
						k4vx[i][j][k]=fvx_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	(h*k3x[i][j][k]),(h*k3x[i+1][j][k]),(h*k3x[i-1][j][k]),(h*k3x[i][j+1][k]),(h*k3x[i][j-1][k]),(h*k3x[i][j][k-1]),vx[i][j][k]+(h*k3vx[i][j][k]));																				
						k4vy[i][j][k]=fvy_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	(h*k3y[i][j][k]),(h*k3y[i+1][j][k]),(h*k3y[i-1][j][k]),(h*k3y[i][j+1][k]),(h*k3y[i][j-1][k]),(h*k3y[i][j][k-1]),vy[i][j][k]+(h*k3vy[i][j][k]));
						k4vz[i][j][k]=fvz_paret(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	(h*k3z[i][j][k]),(h*k3z[i+1][j][k]),(h*k3z[i-1][j][k]),(h*k3z[i][j+1][k]),(h*k3z[i][j-1][k]),(h*k3z[i][j][k-1]),vz[i][j][k]+(h*k3vz[i][j][k]));

						k4x[i][j][k]=vx[i][j][k]+(h*k3vx[i][j][k]);
						k4y[i][j][k]=vy[i][j][k]+(h*k3vy[i][j][k]);
						k4z[i][j][k]=vz[i][j][k]+(h*k3vz[i][j][k]);
					}
					
					else if(k==0&& i==0 && 0<j&&j<Y-1){
						//treure k-1 i i-1
						k4vx[i][j][k]=fvx_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	(h*k3x[i][j][k]),(h*k3x[i+1][j][k]),(h*k3x[i][j+1][k]),(h*k3x[i][j-1][k]),(h*k3x[i][j][k+1]),vx[i][j][k]+(h*k3vx[i][j][k]));																				
						k4vy[i][j][k]=fvy_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	(h*k3y[i][j][k]),(h*k3y[i+1][j][k]),(h*k3y[i][j+1][k]),(h*k3y[i][j-1][k]),(h*k3y[i][j][k+1]),vy[i][j][k]+(h*k3vy[i][j][k]));
						k4vz[i][j][k]=fvz_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	(h*k3z[i][j][k]),(h*k3z[i+1][j][k]),(h*k3z[i][j+1][k]),(h*k3z[i][j-1][k]),(h*k3z[i][j][k+1]),vz[i][j][k]+(h*k3vz[i][j][k]));
						
						k4x[i][j][k]=vx[i][j][k]+(h*k3vx[i][j][k]);
						k4y[i][j][k]=vy[i][j][k]+(h*k3vy[i][j][k]);
						k4z[i][j][k]=vz[i][j][k]+(h*k3vz[i][j][k]);			
					}
					else if(k==0&&i==X-1&&0<j&&j<Y-1){
						//treure k-1 i i+1
						k4vx[i][j][k]=fvx_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	(h*k3x[i][j][k]),(h*k3x[i-1][j][k]),(h*k3x[i][j+1][k]),(h*k3x[i][j-1][k]),(h*k3x[i][j][k+1]),vx[i][j][k]+(h*k3vx[i][j][k]));																				
						k4vy[i][j][k]=fvy_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	(h*k3y[i][j][k]),(h*k3y[i-1][j][k]),(h*k3y[i][j+1][k]),(h*k3y[i][j-1][k]),(h*k3y[i][j][k+1]),vy[i][j][k]+(h*k3vy[i][j][k]));
						k4vz[i][j][k]=fvz_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k+1],	(h*k3z[i][j][k]),(h*k3z[i-1][j][k]),(h*k3z[i][j+1][k]),(h*k3z[i][j-1][k]),(h*k3z[i][j][k+1]),vz[i][j][k]+(h*k3vz[i][j][k]));
						
						k4x[i][j][k]=vx[i][j][k]+(h*k3vx[i][j][k]);
						k4y[i][j][k]=vy[i][j][k]+(h*k3vy[i][j][k]);
						k4z[i][j][k]=vz[i][j][k]+(h*k3vz[i][j][k]);	
					}
					else if(k==0&&j==0&&0<i&&i<X-1){
						//treure k-1 i j-1
						k4vx[i][j][k]=fvx_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],	(h*k3x[i][j][k]),(h*k3x[i+1][j][k]),(h*k3x[i-1][j][k]),(h*k3x[i][j+1][k]),(h*k3x[i][j][k+1]),vx[i][j][k]+(h*k3vx[i][j][k]));																				
						k4vy[i][j][k]=fvy_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],	(h*k3y[i][j][k]),(h*k3y[i+1][j][k]),(h*k3y[i-1][j][k]),(h*k3y[i][j+1][k]),(h*k3y[i][j][k+1]),vy[i][j][k]+(h*k3vy[i][j][k]));
						k4vz[i][j][k]=fvz_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],	(h*k3z[i][j][k]),(h*k3z[i+1][j][k]),(h*k3z[i-1][j][k]),(h*k3z[i][j+1][k]),(h*k3z[i][j][k+1]),vz[i][j][k]+(h*k3vz[i][j][k]));
						
						k4x[i][j][k]=vx[i][j][k]+(h*k3vx[i][j][k]);
						k4y[i][j][k]=vy[i][j][k]+(h*k3vy[i][j][k]);
						k4z[i][j][k]=vz[i][j][k]+(h*k3vz[i][j][k]);	
					}
					else if(k==0&&j==Y-1&&0<i&&i<X-1){
						//treure k-1 i j+1
						k4vx[i][j][k]=fvx_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],	(h*k3x[i][j][k]),(h*k3x[i+1][j][k]),(h*k3x[i-1][j][k]),(h*k3x[i][j-1][k]),(h*k3x[i][j][k+1]),vx[i][j][k]+(h*k3vx[i][j][k]));																				
						k4vy[i][j][k]=fvy_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],	(h*k3y[i][j][k]),(h*k3y[i+1][j][k]),(h*k3y[i-1][j][k]),(h*k3y[i][j-1][k]),(h*k3y[i][j][k+1]),vy[i][j][k]+(h*k3vy[i][j][k]));
						k4vz[i][j][k]=fvz_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],	(h*k3z[i][j][k]),(h*k3z[i+1][j][k]),(h*k3z[i-1][j][k]),(h*k3z[i][j-1][k]),(h*k3z[i][j][k+1]),vz[i][j][k]+(h*k3vz[i][j][k]));
						
						k4x[i][j][k]=vx[i][j][k]+(h*k3vx[i][j][k]);
						k4y[i][j][k]=vy[i][j][k]+(h*k3vy[i][j][k]);
						k4z[i][j][k]=vz[i][j][k]+(h*k3vz[i][j][k]);	
					}
					
					else if(k==Z-1&& i==0 && 0<j&&j<Y-1){
						//treure k+1 i i-1
						k4vx[i][j][k]=fvx_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	(h*k3x[i][j][k]),(h*k3x[i+1][j][k]),(h*k3x[i][j+1][k]),(h*k3x[i][j-1][k]),(h*k3x[i][j][k-1]),vx[i][j][k]+(h*k3vx[i][j][k]));																				
						k4vy[i][j][k]=fvy_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	(h*k3y[i][j][k]),(h*k3y[i+1][j][k]),(h*k3y[i][j+1][k]),(h*k3y[i][j-1][k]),(h*k3y[i][j][k-1]),vy[i][j][k]+(h*k3vy[i][j][k]));
						k4vz[i][j][k]=fvz_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	(h*k3z[i][j][k]),(h*k3z[i+1][j][k]),(h*k3z[i][j+1][k]),(h*k3z[i][j-1][k]),(h*k3z[i][j][k-1]),vz[i][j][k]+(h*k3vz[i][j][k]));
						
						k4x[i][j][k]=vx[i][j][k]+(h*k3vx[i][j][k]);
						k4y[i][j][k]=vy[i][j][k]+(h*k3vy[i][j][k]);
						k4z[i][j][k]=vz[i][j][k]+(h*k3vz[i][j][k]);	
					}
					else if(k==Z-1&&i==X-1&&0<j&&j<Y-1){
						//treure k+1 i i+1
						k4vx[i][j][k]=fvx_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	(h*k3x[i][j][k]),(h*k3x[i-1][j][k]),(h*k3x[i][j+1][k]),(h*k3x[i][j-1][k]),(h*k3x[i][j][k-1]),vx[i][j][k]+(h*k3vx[i][j][k]));																				
						k4vy[i][j][k]=fvy_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	(h*k3y[i][j][k]),(h*k3y[i-1][j][k]),(h*k3y[i][j+1][k]),(h*k3y[i][j-1][k]),(h*k3y[i][j][k-1]),vy[i][j][k]+(h*k3vy[i][j][k]));
						k4vz[i][j][k]=fvz_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j-1][k],z[i][j][k-1],	(h*k3z[i][j][k]),(h*k3z[i-1][j][k]),(h*k3z[i][j+1][k]),(h*k3z[i][j-1][k]),(h*k3z[i][j][k-1]),vz[i][j][k]+(h*k3vz[i][j][k]));
						
						k4x[i][j][k]=vx[i][j][k]+(h*k3vx[i][j][k]);
						k4y[i][j][k]=vy[i][j][k]+(h*k3vy[i][j][k]);
						k4z[i][j][k]=vz[i][j][k]+(h*k3vz[i][j][k]);	
					}
					else if(k==Z-1&&j==0&&0<i&&i<X-1){
						//treure k+1 i j-1
						k4vx[i][j][k]=fvx_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k-1],	(h*k3x[i][j][k]),(h*k3x[i+1][j][k]),(h*k3x[i-1][j][k]),(h*k3x[i][j+1][k]),(h*k3x[i][j][k-1]),vx[i][j][k]+(h*k3vx[i][j][k]));																				
						k4vy[i][j][k]=fvy_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k-1],	(h*k3y[i][j][k]),(h*k3y[i+1][j][k]),(h*k3y[i-1][j][k]),(h*k3y[i][j+1][k]),(h*k3y[i][j][k-1]),vy[i][j][k]+(h*k3vy[i][j][k]));
						k4vz[i][j][k]=fvz_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k-1],	(h*k3z[i][j][k]),(h*k3z[i+1][j][k]),(h*k3z[i-1][j][k]),(h*k3z[i][j+1][k]),(h*k3z[i][j][k-1]),vz[i][j][k]+(h*k3vz[i][j][k]));
						
						k4x[i][j][k]=vx[i][j][k]+(h*k3vx[i][j][k]);
						k4y[i][j][k]=vy[i][j][k]+(h*k3vy[i][j][k]);
						k4z[i][j][k]=vz[i][j][k]+(h*k3vz[i][j][k]);	
					}
					else if(k==Z-1&&j==Y-1&&0<i&&i<X-1){
						//treure k+1 i j+1
						k4vx[i][j][k]=fvx_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k-1],	(h*k3x[i][j][k]),(h*k3x[i+1][j][k]),(h*k3x[i-1][j][k]),(h*k3x[i][j-1][k]),(h*k3x[i][j][k-1]),vx[i][j][k]+(h*k3vx[i][j][k]));																				
						k4vy[i][j][k]=fvy_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k-1],	(h*k3y[i][j][k]),(h*k3y[i+1][j][k]),(h*k3y[i-1][j][k]),(h*k3y[i][j-1][k]),(h*k3y[i][j][k-1]),vy[i][j][k]+(h*k3vy[i][j][k]));
						k4vz[i][j][k]=fvz_aresta(x[i][j][k],x[i+1][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k-1],	(h*k3z[i][j][k]),(h*k3z[i+1][j][k]),(h*k3z[i-1][j][k]),(h*k3z[i][j-1][k]),(h*k3z[i][j][k-1]),vz[i][j][k]+(h*k3vz[i][j][k]));
						
						k4x[i][j][k]=vx[i][j][k]+(h*k3vx[i][j][k]);
						k4y[i][j][k]=vy[i][j][k]+(h*k3vy[i][j][k]);
						k4z[i][j][k]=vz[i][j][k]+(h*k3vz[i][j][k]);	
					}
					
					else if(i==0&&j==0&&0<k&&k<Z-1){
						//treure i-1 i j-1
						k4vx[i][j][k]=fvx_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	(h*k3x[i][j][k]),(h*k3x[i+1][j][k]),(h*k3x[i][j+1][k]),(h*k3x[i][j][k+1]),(h*k3x[i][j][k-1]),vx[i][j][k]+(h*k3vx[i][j][k]));																				
						k4vy[i][j][k]=fvy_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	(h*k3y[i][j][k]),(h*k3y[i+1][j][k]),(h*k3y[i][j+1][k]),(h*k3y[i][j][k+1]),(h*k3y[i][j][k-1]),vy[i][j][k]+(h*k3vy[i][j][k]));
						k4vz[i][j][k]=fvz_aresta(x[i][j][k],x[i+1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	(h*k3z[i][j][k]),(h*k3z[i+1][j][k]),(h*k3z[i][j+1][k]),(h*k3z[i][j][k+1]),(h*k3z[i][j][k-1]),vz[i][j][k]+(h*k3vz[i][j][k]));

						k4x[i][j][k]=vx[i][j][k]+(h*k3vx[i][j][k]);
						k4y[i][j][k]=vy[i][j][k]+(h*k3vy[i][j][k]);
						k4z[i][j][k]=vz[i][j][k]+(h*k3vz[i][j][k]);
					}
					else if(i==0&&j==Y-1&&0<k&&k<Z-1){
						//treure i-1 i j+1 
						k4vx[i][j][k]=fvx_aresta(x[i][j][k],x[i+1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k3x[i][j][k]),(h*k3x[i+1][j][k]),(h*k3x[i][j-1][k]),(h*k3x[i][j][k+1]),(h*k3x[i][j][k-1]),vx[i][j][k]+(h*k3vx[i][j][k]));																				
						k4vy[i][j][k]=fvy_aresta(x[i][j][k],x[i+1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k3y[i][j][k]),(h*k3y[i+1][j][k]),(h*k3y[i][j-1][k]),(h*k3y[i][j][k+1]),(h*k3y[i][j][k-1]),vy[i][j][k]+(h*k3vy[i][j][k]));
						k4vz[i][j][k]=fvz_aresta(x[i][j][k],x[i+1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k3z[i][j][k]),(h*k3z[i+1][j][k]),(h*k3z[i][j-1][k]),(h*k3z[i][j][k+1]),(h*k3z[i][j][k-1]),vz[i][j][k]+(h*k3vz[i][j][k]));
						
						k4x[i][j][k]=vx[i][j][k]+(h*k3vx[i][j][k]);
						k4y[i][j][k]=vy[i][j][k]+(h*k3vy[i][j][k]);
						k4z[i][j][k]=vz[i][j][k]+(h*k3vz[i][j][k]);	
					}
					else if(i==X-1&&j==0&&0<k&&k<Z-1){
						//treure  i+1 i j-1
						k4vx[i][j][k]=fvx_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	(h*k3x[i][j][k]),(h*k3x[i-1][j][k]),(h*k3x[i][j+1][k]),(h*k3x[i][j][k+1]),(h*k3x[i][j][k-1]),vx[i][j][k]+(h*k3vx[i][j][k]));																				
						k4vy[i][j][k]=fvy_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	(h*k3y[i][j][k]),(h*k3y[i-1][j][k]),(h*k3y[i][j+1][k]),(h*k3y[i][j][k+1]),(h*k3y[i][j][k-1]),vy[i][j][k]+(h*k3vy[i][j][k]));
						k4vz[i][j][k]=fvz_aresta(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k+1],z[i][j][k-1],	(h*k3z[i][j][k]),(h*k3z[i-1][j][k]),(h*k3z[i][j+1][k]),(h*k3z[i][j][k+1]),(h*k3z[i][j][k-1]),vz[i][j][k]+(h*k3vz[i][j][k]));
						
						k4x[i][j][k]=vx[i][j][k]+(h*k3vx[i][j][k]);
						k4y[i][j][k]=vy[i][j][k]+(h*k3vy[i][j][k]);
						k4z[i][j][k]=vz[i][j][k]+(h*k3vz[i][j][k]);	
					}
					else if(i==X-1&&j==Y-1&&0<k&&k<Z-1){
						//treure i+1 i j+1
						k4vx[i][j][k]=fvx_aresta(x[i][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k3x[i][j][k]),(h*k3x[i-1][j][k]),(h*k3x[i][j-1][k]),(h*k3x[i][j][k+1]),(h*k3x[i][j][k-1]),vx[i][j][k]+(h*k3vx[i][j][k]));																				
						k4vy[i][j][k]=fvy_aresta(x[i][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k3y[i][j][k]),(h*k3y[i-1][j][k]),(h*k3y[i][j-1][k]),(h*k3y[i][j][k+1]),(h*k3y[i][j][k-1]),vy[i][j][k]+(h*k3vy[i][j][k]));
						k4vz[i][j][k]=fvz_aresta(x[i][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k+1],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k+1],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k+1],z[i][j][k-1],	(h*k3z[i][j][k]),(h*k3z[i-1][j][k]),(h*k3z[i][j-1][k]),(h*k3z[i][j][k+1]),(h*k3z[i][j][k-1]),vz[i][j][k]+(h*k3vz[i][j][k]));
						
						k4x[i][j][k]=vx[i][j][k]+(h*k3vx[i][j][k]);
						k4y[i][j][k]=vy[i][j][k]+(h*k3vy[i][j][k]);
						k4z[i][j][k]=vz[i][j][k]+(h*k3vz[i][j][k]);	
					}
				
					else if(i==0&&j==0&&k==Z-1){
						//treu i-1 j-1 k+1
					k4vx[i][j][k]=fvx_vertex(x[i][j][k],x[i+1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j][k-1],	(h*k3x[i][j][k]),(h*k3x[i+1][j][k]),(h*k3x[i][j+1][k]),(h*k3x[i][j][k-1]),vx[i][j][k]+(h*k3vx[i][j][k]));																				
					k4vy[i][j][k]=fvy_vertex(x[i][j][k],x[i+1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j][k-1],	(h*k3x[i][j][k]),(h*k3x[i+1][j][k]),(h*k3x[i][j+1][k]),(h*k3x[i][j][k-1]),vy[i][j][k]+(h*k3vy[i][j][k]));
					k4vz[i][j][k]=fvz_vertex(x[i][j][k],x[i+1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j+1][k],z[i][j][k-1],	(h*k3x[i][j][k]),(h*k3x[i+1][j][k]),(h*k3x[i][j+1][k]),(h*k3x[i][j][k-1]),vz[i][j][k]+(h*k3vz[i][j][k]));

					k4x[i][j][k]=vx[i][j][k]+(h*k3vx[i][j][k]);
					k4y[i][j][k]=vy[i][j][k]+(h*k3vy[i][j][k]);
					k4z[i][j][k]=vz[i][j][k]+(h*k3vz[i][j][k]);
					}
					else if(i==X-1&&j==0&&k==Z-1){
						//treu i+1 j-1 k+1
					k4vx[i][j][k]=fvx_vertex(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k-1],	(h*k3x[i][j][k]),(h*k3x[i-1][j][k]),(h*k3x[i][j+1][k]),(h*k3x[i][j][k-1]),vx[i][j][k]+(h*k3vx[i][j][k]));																				
					k4vy[i][j][k]=fvy_vertex(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k-1],	(h*k3x[i][j][k]),(h*k3x[i-1][j][k]),(h*k3x[i][j+1][k]),(h*k3x[i][j][k-1]),vy[i][j][k]+(h*k3vy[i][j][k]));
					k4vz[i][j][k]=fvz_vertex(x[i][j][k],x[i-1][j][k],x[i][j+1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j+1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j+1][k],z[i][j][k-1],	(h*k3x[i][j][k]),(h*k3x[i-1][j][k]),(h*k3x[i][j+1][k]),(h*k3x[i][j][k-1]),vz[i][j][k]+(h*k3vz[i][j][k]));
					
					k4x[i][j][k]=vx[i][j][k]+(h*k3vx[i][j][k]);
					k4y[i][j][k]=vy[i][j][k]+(h*k3vy[i][j][k]);
					k4z[i][j][k]=vz[i][j][k]+(h*k3vz[i][j][k]);
					
					}
					else if(i==X-1&&j==Y-1&&k==Z-1){
						//treu i+1 j+1 k+1
					k4vx[i][j][k]=fvx_vertex(x[i][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k-1],	(h*k3x[i][j][k]),(h*k3x[i-1][j][k]),(h*k3x[i][j-1][k]),(h*k3x[i][j][k-1]),vx[i][j][k]+(h*k3vx[i][j][k]));																				
					k4vy[i][j][k]=fvy_vertex(x[i][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k-1],	(h*k3x[i][j][k]),(h*k3x[i-1][j][k]),(h*k3x[i][j-1][k]),(h*k3x[i][j][k-1]),vy[i][j][k]+(h*k3vy[i][j][k]));
					k4vz[i][j][k]=fvz_vertex(x[i][j][k],x[i-1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i-1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i-1][j][k],z[i][j-1][k],z[i][j][k-1],	(h*k3x[i][j][k]),(h*k3x[i-1][j][k]),(h*k3x[i][j-1][k]),(h*k3x[i][j][k-1]),vz[i][j][k]+(h*k3vz[i][j][k]));
					
					k4x[i][j][k]=vx[i][j][k]+(h*k3vx[i][j][k]);
					k4y[i][j][k]=vy[i][j][k]+(h*k3vy[i][j][k]);
					k4z[i][j][k]=vz[i][j][k]+(h*k3vz[i][j][k]);
					}
					else if(i==0&&j==Y-1&&k==Z-1){
						//treu  i-1 j+1 k+1
					k4vx[i][j][k]=fvx_vertex(x[i][j][k],x[i+1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j-1][k],z[i][j][k-1],	(h*k3x[i][j][k]),(h*k3x[i+1][j][k]),(h*k3x[i][j-1][k]),(h*k3x[i][j][k-1]),vx[i][j][k]+(h*k3vx[i][j][k]));																				
					k4vy[i][j][k]=fvy_vertex(x[i][j][k],x[i+1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j-1][k],z[i][j][k-1],	(h*k3x[i][j][k]),(h*k3x[i+1][j][k]),(h*k3x[i][j-1][k]),(h*k3x[i][j][k-1]),vy[i][j][k]+(h*k3vy[i][j][k]));
					k4vz[i][j][k]=fvz_vertex(x[i][j][k],x[i+1][j][k],x[i][j-1][k],x[i][j][k-1],		y[i][j][k],y[i+1][j][k],y[i][j-1][k],y[i][j][k-1],	z[i][j][k],z[i+1][j][k],z[i][j-1][k],z[i][j][k-1],	(h*k3x[i][j][k]),(h*k3x[i+1][j][k]),(h*k3x[i][j-1][k]),(h*k3x[i][j][k-1]),vz[i][j][k]+(h*k3vz[i][j][k]));
					
					k4x[i][j][k]=vx[i][j][k]+(h*k3vx[i][j][k]);
					k4y[i][j][k]=vy[i][j][k]+(h*k3vy[i][j][k]);
					k4z[i][j][k]=vz[i][j][k]+(h*k3vz[i][j][k]);
					}
				
				}
			}
		}
		
		//resultat
		for( int i=0;i<X;i++){
			for( int j=0;j<Y;j++){
				for(int k=0;k<Z;k++){
				x_n[i][j][k]=x[i][j][k]+(h/6)*(k1x[i][j][k]+2*k2x[i][j][k]+2*k3x[i][j][k]+k4x[i][j][k]);
				y_n[i][j][k]=y[i][j][k]+(h/6)*(k1y[i][j][k]+2*k2y[i][j][k]+2*k3y[i][j][k]+k4y[i][j][k]);
				z_n[i][j][k]=z[i][j][k]+(h/6)*(k1z[i][j][k]+2*k2z[i][j][k]+2*k3z[i][j][k]+k4z[i][j][k]);
				
				vx_n[i][j][k]=vx[i][j][k]+(h/6)*(k1vx[i][j][k]+2*k2vx[i][j][k]+2*k3vx[i][j][k]+k4vx[i][j][k]);
				vy_n[i][j][k]=vy[i][j][k]+(h/6)*(k1vy[i][j][k]+2*k2vy[i][j][k]+2*k3vy[i][j][k]+k4vy[i][j][k]);
				vz_n[i][j][k]=vz[i][j][k]+(h/6)*(k1vz[i][j][k]+2*k2vz[i][j][k]+2*k3vz[i][j][k]+k4vz[i][j][k]);
				
				//cout<<x[i][j][k]<<" "<<y[i][j][k]<<" "<<z[i][j][k]<<" ("<<i<<","<<j<<","<<k<<") "<<t<<"\n";
				}
			}
		}
		
		char buffer[100];
			FILE* output; 		
			sprintf(buffer,"rungekutta%d.txt",t);
			
			output = fopen( buffer, "w");  
			for(int i=0;i<X;i++){
				for(int j=0;j<Y;j++){
					for(int k=0;k<Z;k++){
					fprintf(output, "%lf" " " "%lf" " " "%lf" "\n", x[i][j][k] ,y[i][j][k],z[i][j][k] );
					}
				}
			}
			fclose(output);	
			
		for( int i=0;i<X;i++){
			for( int j=0;j<Y;j++){
				for( int k=0;k<Z;k++){
					x[i][j][k]=x_n[i][j][k];
					y[i][j][k]=y_n[i][j][k];
					z[i][j][k]=z_n[i][j][k];
					
					vx[i][j][k]=vx_n[i][j][k];
					vy[i][j][k]=vy_n[i][j][k];
					vz[i][j][k]=vz_n[i][j][k];
				}
			}
		}
		
	
		
	}
	
	
}

