#include <iostream>
using namespace std;
int *p1, *p2;
int a=42;

int main(){
//	*p1 = a;
	p1 = &a;
	*p1 = 41;
	a = 40;
	
	int* dp, dp2;
	int*p = &a;
	int **q = &p;
	double d = 20.0;
	
	double *pi = &d;
	*pi = a;
	cout <<a <<endl << d << endl;
}

