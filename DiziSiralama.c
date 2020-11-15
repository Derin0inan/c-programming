#include <stdio.h>
#include <stdlib.h>
int main(){
    int A[10]={5,8,1,3,25,11,17,2,7,9};
    int i,pass,move,tmp;
    printf("siralamadan once: \n");
    for (i=0;i<10;i++){
        printf("%d ",A[i]);
    }printf("\n");
    for (pass=1;pass<10;pass++){
        for(move=0;move<9;move++){
            if (A[move]>A[move+1]){
                tmp=A[move];
                A[move]=A[move+1];
                A[move+1]=tmp;
            }
        }
    }
    printf("siraladiktan sonra: \n");
    for (i=0;i<10;i++){
        printf("%d ",A[i]);
    }
 return 0;
 }
