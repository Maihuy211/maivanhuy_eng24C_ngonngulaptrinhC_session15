# include <stdio.h>
# include <string.h>
int main(){
	char str[]="Hello my gmail is test123@gmail.com";
	int count=0;
	int count2=0;
	int i;
	for(i=0;i<strlen(str);i++){
		if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')){
			count++;
		}
		if(str[i]>='0'&&str[i]<='9'){
			count2++;
		}
	}
	printf("so ki tu la chu cai trong chuoi la: %d\n",count);
	printf("so ki tu la chu so trong chuoi la: %d\n",count2);
	int kitu=strlen(str)-count-count2;
	printf("so ki tu la ki tu dac biet trong chuooi la: %d\n",kitu);
}

