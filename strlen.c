#include<stdio.h>
#include<string.h>
int slen(const char*);

int main()
{
 char a[30];
 int i;
 printf("enter the string: \n");
 gets(a);
 i=slen(a);
 printf("string length = %d",i);
}

int slen(const char *p)
{
 int i=0,count=0;
 while(p[i]!='\0')
 {
 count++;
 i++;
 }
 return count;
}
