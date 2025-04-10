#include <stdio.h>

void prt(int n){
	if(n>0){
		prt(n-1);
	}
	printf("%d\n",n);
}

int main(){
	int n=0;
	do{
		scanf("%d",&n);
	}while(n < 0);
	prt(n);
	return 0;
}
