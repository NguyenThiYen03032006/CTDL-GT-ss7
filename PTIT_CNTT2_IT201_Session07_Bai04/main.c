#include <stdio.h>
#include <string.h>
int main(void) {
    char str[50];
    fgets(str, 50, stdin);
    str[strcspn(str,"\n")]='\0';
    int len=strlen(str);
    for(int i=0;i<len-1;i++) {
        for(int j=0;j<len-1-i;j++) {
            if (str[j]>str[j+1]) {
                char temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }

    }
    printf("%s",str);
    return 0;
}