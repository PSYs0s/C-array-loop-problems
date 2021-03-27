#include<stdio.h>
void main(){
    int n=3;//3*3 static according to problem
    int a[n][n],b[n][n],c[n][n];//A,B matrix & C will take result
    int i,j,k;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            c[i][j]=0;
            for(k=0;k<n;k++){
                c[i][j]+=a[i][k]*b[k][j];//in case a: i=row,k=col & case b: k=row,j=col
            }//because col of first matrix=row of second matrix
        }
    }
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}


