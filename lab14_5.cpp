#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *const a,int *const b,int *const c,int *const d);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}	
	return 0;
}

void shuffle(int *const a,int *const b,int *const c,int *const d)
{
	int arr[4]={50,100,500,1000};
		int i,j,k,l;
	do{
		i=rand()%4;
		j=rand()%4;
		k=rand()%4;
		l=rand()%4;
	}while(i==j or i==k or i==l or j==k or j==l or k==l);
	*a=arr[i];
	*b=arr[j];
	*c=arr[k];
	*d=arr[l];
}
