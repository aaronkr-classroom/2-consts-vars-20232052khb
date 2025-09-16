//calc.c
#define  _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>//M_PI 상수
int Sum(int a, int b) {
	
	return a+b;
}
int Sub(int a, int b) {

	return a - b;
}
int Mul(int a, int b) {

	return a * b;
}
int Div(int a, int b) {//b는 0이면 안됨
	if (b == 0) { 
		printf("Error: Divide by 0\n");
			return 0; 
	}
	return a / b;
}

double circ_area(double r) {

	return M_PI * r * r ;
}//넓이 3.141592
double circ_circ(double r) {
	return M_PI * 2 * r;
}//둘레