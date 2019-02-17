#include <stdio.h>
#include<string.h>
int main(void) {
	char a[50];
	scanf("%s",a);
	strcat(a,".");
	printf("%s",a);
	return 0;
}
