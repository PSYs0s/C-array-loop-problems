#include<stdio.h>
void main(){
    int n;//n = size for making square 2d array matrix
    scanf("%d",&n);

    int a[n][n];
    int i,j;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Major diagonal: ");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                printf("%d ",a[i][j]);
            }
        }
    }

    printf("\nMinor-diagonal: ");
    for(i=0;i<n;i++){
        for(j=n-1;j>=0;j--){
            if((i+j)==(n+1)-2){//(row+col)=(size of matrix+1)-2 (rule)
                printf("%d ",a[i][j]);
            }
        }
    }
}

