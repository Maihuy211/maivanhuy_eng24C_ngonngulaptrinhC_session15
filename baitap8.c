# include<stdio.h>
# include<ctype.h>
# include<string.h>
int main(){
	char str[]="mai van huy";
	str[0]='M';
	str[4]='V';
	str[8]='H';
	printf("mai van huy\n");
	printf("%s\n",str);
    printf("nhap chuoi: ");
    char str2[100];
	fgets(str2,sizeof(str2),stdin);
	int i;
	int temp=0;
	for(i=0;i<strlen(str2);i++){
		if(!temp && isalpha(str2[i])){ // isalpha kiem tra xem co phai chu cai hay ko
			str2[i]=toupper(str2[i]); // topper chuyen doi chu cai thuong sang chu cai in hoa
			temp=1;
		}else if(str[i]==' '){ 
		    temp=0; 
	    } 
    }
    printf("chuoi sau khi viet hoa chu cai dau la: %s",str2);
	return 0;
}
