#include<stdio.h>

int main() {
	int *ptr;
	int a = 5;
	
	ptr = &a;
	
	printf("a deðiþkeninin adresi: %d\n", ptr);
	printf("a deðiþkeninin degeri: %d\n", *ptr);
	
	return 0;
}
