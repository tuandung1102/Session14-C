#include <stdio.h>
#include <string.h>
int main(){
	char c[1000];
	printf("Nhap xau ky tu: ");
	scanf("%s",&c);
	printf("Xau ky tu vua nhap: %s\n",c);
	printf("So luong ky tu: %d\n",strlen(c));
	return 0;
}
