#include<stdio.h>
#include<conio.h>
int s=0;
void reverse(char a[],int f,int l)
{
   int k;
   for(k=l-1;k>=f;k--)
   {
    printf("%c",a[k]);

   }
   printf(" ");
}
int main()
{
 char a[100];
 int i,j,f=0;
 clrscr();
 gets(a);
 for(i=0;i<strlen(a);i++)
 {
     if(a[i]==' ' || i==strlen(a)-1)
     {
     if(i==strlen(a)-1)
     i++;
       s++;
       if(s%2==1){
       reverse(a,f,i);
       f=i+1;
       }
       else
       {
	for(j=f;j<i;j++)
	 printf("%c",a[j]);
	 printf(" ");
	 f=i+1;
       }
     }

 }
 getch();
 return 0;
}
