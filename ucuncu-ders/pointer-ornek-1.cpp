#include<stdio.h>

int main() {
	int *ptr;
	int a = 5;
	
	ptr = &a;
	
	printf("a değişkeninin adresi: %d\n", ptr);
	printf("a değişkeninin degeri: %d\n", *ptr);
	
	return 0;
}
