#include<stdio.h>

int main() {
	
	int A[50];
	
	int B[50]; //max 50 olur
	int C[50]; //max 50 olur
	
	int neg=0;
	int poz=0;
	
	int *ptr1, *ptr2, *ptr3;
	
	ptr1 = &A[0];
	ptr2 = &B[0];
	ptr3 = &C[0];

	int i=0;
	
	for(i=0; i<10; i++){
		printf("%d. elemani giriniz:", (i+1));
		scanf("%d", ptr1);
		ptr1++;
	}
	
	ptr1 = &A[0]; //pointer adresini ilk indexa geri atama
	
	for(i=0; i<10; i++){
		//negatif
		if((*ptr1)<0){
			*ptr2 = *ptr1;
			ptr2++;
			neg++;
		}else{ //pozitif
			*ptr3 = *ptr1;
			ptr3++;
			poz++;
		}
		ptr1++;
	}
	
	ptr2 = &B[0]; //pointer adresini ilk indexa geri atama
	ptr3 = &C[0];
	
	printf("Negatif:");
	for(i=0; i<neg; i++){
		printf("%d ", *ptr2);
		ptr2++;
	}
	
		printf("\n");
	
	printf("Pozitif:");
	for(i=0; i<poz; i++){
		printf("%d ", *ptr3);
		ptr3++;
	}
	
	
	
	return 0;
}
