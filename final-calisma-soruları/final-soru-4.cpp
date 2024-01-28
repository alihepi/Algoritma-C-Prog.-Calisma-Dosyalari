#include<stdio.h>

int main() {
	
	int dizi[10];
	
	int sayi = 0;
	int i = 0;
	
	printf("10. Eleman: ");
	scanf("%d", &sayi);
	
	dizi[9] = sayi;
	sayi -= 2;
	
	for(i=8; i>=0; i--){
		dizi[i] = sayi;
		sayi -= 2;
	}
	
	for(i=9; i>=0; i--){
		printf("%d\n", dizi[i]);
	}
			
	return 0;
}
