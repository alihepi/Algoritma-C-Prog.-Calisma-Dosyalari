#include<stdio.h>

int main() {
	int *ptr;
	int a = 5;
	
	ptr = &a;
	
	printf("a de�i�keninin adresi: %d\n", ptr);
	printf("a de�i�keninin degeri: %d\n", *ptr);
	
	return 0;
}
