#include <stdio.h>
#include <stdlib.h>

int main()
{int L = 0;
int C=0;
int i,j;
int n=0;
int cont = 1;
int ref=0, ant=0;
scanf("%d",&n);
L=n;
C=n;
int M[L][C];
for(i=0;i<L;i++){
    for(j=0;j<C;j++){
    M[i][j]=cont;
    cont++;
    }

}
printf("Matriz:\n");
 for(i=0;i<L;i++){
    for(j=0;j<C;j++)
          if(j!=C-1){
            printf("%d   ",M[i][j]);
            }else{
             printf("%d",M[i][j]);
            }
    printf("\n");
}
printf("\n");
printf("Diagonal Principal:\n");
for(i=0;i<L;i++){
    for(j=0;j<C;j++){
 if(i==j){
  printf("%d",M[i][j]);
 }else{
 printf("   ");}


    }
    printf("\n");
    }
    printf("\n");
printf("Diagonal Secundaria:\n");
for(j=0;j<C;j++){
    for(i=0;i<L;i++){
 if(L-1==i+j){
  printf("%d",M[i][j]);
 }else{
 printf("   ");}


    }
    printf("\n");
    }
    return 0;
}
