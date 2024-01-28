#include<stdio.h>

int main() {
	
	int A[2][3];
	int i,j;
	
	for(i=5; i>=0; i--){
		for(j=1; j<=i; j++){
			printf("*");
			if(j>=2) printf("a");
			if(j==2) printf("b");
		}
		printf("\n");
	}
	
	
	return 0;
}


