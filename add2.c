#include<stdio.h>
int main()
{
	int sum =1;
	int j=0;
	int i, s;
	int p, k=0;
	for(i=0; i<6; i++) {
		for (p=sum-1; p>=0; p--) {
			printf("%d", sum-p);
		}
		k++;
		for( s=6; s>sum; s--) {
			printf("*");
		}
		printf("\n");
		sum=sum+1;
		j=j+1;
		//test pr
	}
}

