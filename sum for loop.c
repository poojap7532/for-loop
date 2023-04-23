#include<stdio.h>

int main(){

	int i=1;
	int n , sum=0;

	printf("Enter Numbers : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++){

		sum = sum+i;
	}
		printf("%d\n",sum);


	return 0;
}
