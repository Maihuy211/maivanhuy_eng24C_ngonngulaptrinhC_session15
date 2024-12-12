# include <stdio.h>
# include <string.h>
int main(){
   char str[100];
   printf("chuoi la: ");
   fgets(str,100,stdin);
   printf("nhap ki tu muon xoa: ");
   char x;
   scanf("%c",&x);
   char str2[100];
   int i,j=0;
    for(i=0;i<strlen(str);i++){
   	    if(str[i]!=x){
   	        str2[j++]=str[i];
   	    }
    }
   	printf("chuoi sau khi bi xoa la: %s",str2);    	
}

