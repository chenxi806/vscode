#include <stdio.h>
int main( ){
int i,index,k,n,temp;
int a[10] = {0};
printf("Enter n:");
scanf("%d",&n);
printf("Enter %d integers:", n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(k=0;k<n-1;k++)
{
index=k;
for (i=n-1;i>k;i--)
if( a[i] <a[index]) index = i;
temp=a[index];a[index]=a[i];a[i]=temp;
}
printf("After sorted:");
for(i=0;i<n; i++)
printf("%d ",a[i]);
return 0;
}