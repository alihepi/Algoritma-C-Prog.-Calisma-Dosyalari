#include<stdio.h>

int main() {
	
	int matris[3][3];
	int i,j;
	int a=1;
	
	int satir_toplam[] = {0, 0, 0};
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			matris[i][j] = a++;	
		}
	}
	
	for(i=0; i<3; i++){
		printf("| "); //Kozmetik a��dan:)
		for(j=0; j<3; j++){
			printf("%d ", matris[i][j]);
		}
		printf("|\n"); //Kozmetik a��dan:)
	}
	printf("\t3x3"); //Kozmetik a��dan:)
	
	printf("\n");printf("\n");printf("\n"); //Kozmetik a��dan:)
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			satir_toplam[i] += matris[i][j];	
		}
	}
	
	for(i=0; i<3; i++){
		printf("%d.Satir Toplami: %d\n", (i+1), satir_toplam[i]);
	}
	
	return 0;
}
