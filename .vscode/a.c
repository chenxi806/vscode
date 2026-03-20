#include<stdio.h>
int main()
{
   int m=3,n=4;
   int array[3][4]
   int value=1;
   for(int i=0;i<m;i++){
    for( int j=0;j<n;j++){
        array[m][n]=value++;
    }
   }
   for( int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("%d",array[i][j]);
    }
    printf("\n");
   }
   return 0;

}