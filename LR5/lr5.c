#define _CRT_SECURE_NO_WARNINGS
#include<locale.h>
#include<stdio.h>
#include<math.h>
#define M_PI 3.14159265358979323846
int task1() {
	float gr;
	printf("Введите угол в градусах: ");
	scanf("%f", &gr);
	printf("%.1f градусов = %.6f радиан", gr, sin(gr * M_PI / 180));
	return 0;
}
int task2() {
	float a,res1,res2,b,y,x;
	const float c = 0.4;
	printf("Введите значение переменной х: \n");
	scanf("%f", &x);
	a = log10(x);
	res1 = pow(a, 2);
	b = res1 + sqrt(c * x);
	res2 = exp(2 * x);
	y = res2 + pow(9.7, b);
	printf("Значение функции y= %.2f", y);
	return 0;
}
int task3() {
	float a, b, y,res1,res2,x;
	int A, B, C;
	const float c = 0.4;
	int cond;
	printf("Введите значение переменной х: \n");
	scanf("%f", &x);
	a = log10(x);
	res1 = pow(a, 2);
	b = res1 + sqrt(c * x);
	res2 = exp(2 * x);
	y = res2 + pow(9.7, b);
	A = (int)a ;
	B = (int)b;
	C = (int)y;
	printf("A=%d, B=%d, C=%d", A, B, C);
	cond = ((A % 2 == 0 && B % 2 != 0) ||
		(A % 2 != 0 && B % 2 == 0)) &&
		((A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0));
	printf("Условие выполнено(1-да, 0-нет): %d \n", cond);
	return 0;

}

int main() {
	setlocale(LC_ALL, "RUS");
	task3();
	return 0;
}