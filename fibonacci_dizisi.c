#include <stdio.h>
#include <stdlib.h>
int main(){
  int A[10];
  A[0]=0;
  A[1]=1;
  printf("fibonacci dizisi: %d %d",A[0],A[1]);
  for(int i=2;i<10;i++){
    A[i]=A[0]+A[1];
    A[0]=A[1];
    A[1]=A[i];
    printf(" %d",A[i]);
  }
return 0;  
}
