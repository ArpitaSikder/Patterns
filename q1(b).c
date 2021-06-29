#include<stdio.h>
int main()
{
/*	  int sum =6;

	int i, s;
	int p;
	for(i=0; i<6; i++) {
		for (p=sum-1; p>0; p--) {
			printf("%d", sum-p);
		}
	
		for( s=sum; s<=6; s++) {
			printf("&");
		}
	
		printf("\n");
		sum=sum-1;
	
	}*/
	
	
	int sum =1;

	int i, s, k;
	int p;
	char o= ' ';
	for(i=0; i<6; i++) {
	
		if(sum>2 && sum<6){
		printf("@");
		for(k=0; k<sum-2; k++){

	
		printf("%c", o);
	
		}
			printf("@");	
		}
		else{
		
	  for (p=sum; p>0; p--) {
			printf("@");
		}
			
		}
	
	
		printf("\n");
		sum=sum+1;
	printf("some change");
	}	   
	
}	 
	
	

