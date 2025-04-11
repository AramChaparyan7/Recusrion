#include <stdio.h>

int sum(int n){
	if(n<10){
		return n;
	}
	return n%10+sum(n/10);
}

int main(){
	int n=0;
	do{
		scanf("%d",&n);
	}while(n < 0);
	printf("%d\n",sum(n));
	return 0;
}
