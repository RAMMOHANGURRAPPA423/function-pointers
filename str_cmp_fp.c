#include <stdio.h>
#include<string.h>
#define SIZE 20
char mystrcmp(const char*,const char*);
int main(){
    char str1[SIZE]="hello";
    char str2[SIZE]="helo";
    int(*fp)(const char*,const char*);
    fp=mystrcmp;
    fp(str1,str2);

    if(mystrcmp(str1,str2)==0)
		printf("strings are equal\n");
	else
		printf("strings are not equal\n");
}
char mystrcmp(const char *str1,const char str2[])
{
    int i;
    while(str1[i]!='\0'&&str2[i]!='\0'){
        if(str1[i]!=str2[i])
        break;
        i++;
    }

}
