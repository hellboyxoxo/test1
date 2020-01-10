#include<stdio.h>
#include<string.h>

int slen(const char*);
int scmp(char*,const char*);
char* scpy(char*,const char*);

int main()
{
 char a[30],b[30];
 int i,j,k;
 printf("enter the string number 1: \n");
 gets(a);
 i=slen(a);
 printf("string length of first string = %d\n",i);
 printf("enter the string number 2: \n");
 gets(b);
 j=slen(b);
 printf("string length of first string = %d\n",j);
 k=scmp(a,b);
 if(k==0)
 {
  printf("equal strings\n");
 }
 else if(k==1)
 {
  printf("first string is larger\n");
 }
 else
 {
  printf("second string is larger\n");
 }
 char c[30];
 scpy(c,a)
 printf("copied string = %s",c);
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

int scmp(char *p,const char *q)
{
 int i=0;
 while(p[i]==q[i]&&p[i]!='\0'&&q[i]!='\0')
 {
  i++;
  if(p[i]==q[i])
  {
   return 0;
  }
  else if(p[i]>q[i])
  {
   return 1;
  }
  else
  {
   return -1;
  }
 }
} 

char* scpy(charc*p,const char *q)
{
 int i=0;
 while(q[i]!='\0')
 {
  p[i]=q[i];
  i++
 }
 p[i]='\0';
 return i;
}
