#include<stdio.h>

int main()
{
    int m = 3, n = 4;
    int array[2][3];
    int value = 1;

    // 正确给数组元素赋值
    for(int i = 0; i < m; i++){
        for( int j = 0; j < n; j++){
            array[i][j] = value++;
        }
    }

    // 正确输出数组元素
    for( int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}