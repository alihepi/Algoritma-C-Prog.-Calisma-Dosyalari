#include<stdio.h>

int main() {
	
	char *ptr;
	char dizi[] = {'A', 'B', 'C', 'D'};
	
	ptr = &dizi[0];
	//ptr = dizi;
	
	//dizimizin uzunluğunu buluyoruz
	int uzunluk = sizeof(dizi);
	int x=0;
	
	//dizimizin elemanlarını ptr ile yazdırıyoruz
	for(x=0; x<uzunluk; x++){
		printf("%c ", *ptr++);
	}
	
	return 0;
}
