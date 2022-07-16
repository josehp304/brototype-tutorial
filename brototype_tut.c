 #include <stdio.h>

int main() {
	int a = 10;
	int *b;
	b = &a;
	printf("%p", b);

	return 0;
}