#include <stdio.h>

void binary(int n){
    int r=n%2;
	if(n>1){
        binary(n/2);
    }
    printf("%d",r);

}

int main() {
    int n;
    scanf("%d",&n);
    binary(n);
    return 0;
}
