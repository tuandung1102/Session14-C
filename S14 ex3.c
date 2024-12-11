#include <stdio.h>
#include <string.h>
int main(){
	char c[]={'d','u','n','g'};
	for (int i=strlen(c)-1;i>=0;i--){
		printf("%c",c[i]);
	}
	return 0;
}
