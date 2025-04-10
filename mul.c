#include <stdio.h>

int mul(int n){
	if(n<10){
		return n;
	}
	return n%10*mul(n/10);
}

int main(){
	int n=0;
	do{
		scanf("%d",&n);
	}while(n < 0);
	printf("%d\n",mul(n));
	return 0;
}
