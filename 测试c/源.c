#include <stdio.h>
#include<string.h>
int a = 2;
int f(int* a)
{
    return ++(*a);
}

int main() {
	char ch = 1;
	printf("%d", ch > '43');
	return 0;
}
