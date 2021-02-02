#include<iostream>
using namespace std;

int main()
{
	int a=5; 
	int *x=&a;
	int **z=&x;
	char b='A';
	char &c=b;
	char *y;
	y=&b;
	cout << a << " " << b << " " << c << " " << x << " " << (void*)y << " " << z << "\n"; 
	cout << &a << " " << (void*)&b << " " << (void*)&c << " " << &x << " " << &y << " " << &z << "\n"; 
	c='F';
	cout << a << " " << b << " " << c << " " << x << " " << (void*)y << " " << z << "\n"; 	 
	*y='W';
	cout << a << " " << b << " " << c << " " << x << " " << (void*)y << " " << z << "\n"; 
	*x=6;
	cout << a << " " << b << " " << c << " " << x << " " << (void*)y << " " << z << "\n"; 
	**z=7;
	cout << a << " " << b << " " << c << " " << x << " " << (void*)y << " " << z << "\n"; 	 	 	
}
