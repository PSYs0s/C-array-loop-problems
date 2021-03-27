#include<stdio.h>
void main(){
    int i,j,a;
    scanf("%d",&a);

    for(i=0;i<a;i++){
        for(j=1;j<=a-i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    for(i=1;i<a;i++){
        for(j=1;j<=i+1;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}
