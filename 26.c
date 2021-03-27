#include<stdio.h>
void main(){
    int m,n;//m,n = size for making 2d array matrix
    scanf("%d %d",&m,&n);

    int a[m][n],b[m][n],c[m][n];//A,B matrix & C will take result
    int i,j;

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}

