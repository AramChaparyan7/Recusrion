#include <stdio.h>

int fib(int n){
	if(n<2){
		return n;
	}
	return fib(n-1)+fib(n-2);
}

int main(){
	int index=0;
	do{
		scanf("%d",&index);
	}while(index < 0);
	printf("%d\n",fib(index));
	return 0;
}
