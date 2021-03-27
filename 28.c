#include<stdio.h>
void main(){
    int m,n;//m,n = size for making 2d array matrix
    scanf("%d %d",&m,&n);

    int a[m][n];
    int i,j,max=0,hold_i,hold_j;

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(max==a[i][j]){
                hold_i=i;
                hold_j=j;
                break;
            }
        }
    }
    printf("\nMax:%d",max);
    printf("\nLocation:[%d][%d]",hold_i,hold_j);
}


