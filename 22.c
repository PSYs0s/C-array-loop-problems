#include<stdio.h>
void main(){
    int m,n;//m,n = size for making 2d array matrix
    scanf("%d %d",&m,&n);

    int a[m][n];
    int i,j;

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Row-wise: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
    }

    printf("\nColumn-wise: ");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",a[j][i]);
        }
    }
}
