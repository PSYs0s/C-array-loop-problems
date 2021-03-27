#include<stdio.h>
void main(){
    int n;//n = size for making square 2d array matrix
    scanf("%d",&n);

    int a[n][n];
    int i,j;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i!=j){
                a[i][j]=0;
            }
            else{
                a[i][j]=1;
            }
        }
    }
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}


