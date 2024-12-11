#include <stdio.h>
#include <string.h>
int main(){
	char c[]="dung dep trai";
	int dem=0;
	for (int i=0;i<strlen(c);i++){
		 if ((i == 0 || c[i - 1] == ' ') && c[i] != ' ') {
            dem++;
        }
	}
	printf("So tu trong chuoi la: %d\n",dem);

	return 0;
}
