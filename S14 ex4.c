 #include <stdio.h>
#include <string.h>
int main(){
	char chuoi[]="dung dep trai";
    char kytu;
    int dem=0;
    printf("Nhap mot ky tu: ");
    scanf(" %c",&kytu);
    for (int i=0;i<strlen(chuoi);i++){
    	if (chuoi[i]==kytu){
    		dem++;
		}
	}
    printf("Ky tu '%c' xuat hien %d lan trong chuoi\n",kytu,dem);
	return 0;
}
