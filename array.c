#include <stdio.h>
#define size 5

void prt(int *arr,int Size){
	if(Size>1){
		prt(arr,Size-1);
	}
	printf("%d\n",arr[Size-1]);
}

int main(){
	int arr[size]={};
	for(int i=0;i<size;++i){
		scanf("%d",arr+i);
	}
	prt(arr,size);
	return 0;
}
