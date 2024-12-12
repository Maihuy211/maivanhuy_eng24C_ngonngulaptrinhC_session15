#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("nhap chuoi:");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    int cout[128] = {0};
    int i;
    for (i = 0; i < strlen(str); i++){
        cout[(unsigned char)str[i]]++;
    }
    for(i =0; i<128;i++){
        if (cout[i] > 0){
            printf("%c: %d\n", i, cout[i]);
        }
    }
    return 0;
}
