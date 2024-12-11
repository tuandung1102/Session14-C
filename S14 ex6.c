#include <stdio.h>
#include <string.h>
int main(){
	char c[]="dung dep trai 1102";
	int dem=0;
	for (int i=0;i<strlen(c);i++){
	 if ((c[i] >= 'A' && c[i] <= 'Z') || (c[i] >= 'a' && c[i] <= 'z')) { 
            dem++;
        }
		 
	}
	printf("So ky tu trong chuoi la chu cai la: %d\n",dem);

	return 0;
}
