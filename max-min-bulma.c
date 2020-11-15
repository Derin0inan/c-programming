#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,min,max,A[4]={2,8,3,4};
    min=A[0];
    max=A[0];
    for(i=1;i<4;i++){
        if (max<A[i]){
            max=A[i];
        }else if (min>A[i]){
        min=A[i];}
    }
    printf("min: %d\t max: %d",min,max);
return 0;
}
