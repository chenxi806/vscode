#include<stdio.h>
int main()
{
    int i,n,k,tempt,index;
    int a[10]={0};
    printf("Enter n:");
    scanf("%d",&n);
    printf("Please input %d integers:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(k=0;k<n-1;k++)
    {
        index=k;
        for(i=n-1;i>k;i--)
            if(a[i]<a[index])
            index=i;tempt=a[index];a[index]=a[i];
            a[i]=tempt;

        
    }
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    return 0;
}