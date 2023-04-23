#include<stdio.h>

int main(){

	int i=1;
	int n , fact=1;

	printf("Enter Numbers : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		fact = fact*i;
	}
		printf("%d\n",fact);


	return 0;
}
