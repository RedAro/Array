#include<stdio.h>

int main(){

  int a[2][2]={{1,2},{3,4}};
  int b[2][2]={{5,6},{7,8}};
  int product[2][2];

  int i,j,k,sum=0;

        for(i=0;i<2;i++){

            for(j=0;j<2;j++){

                for(k=0;k<2;k++){

                     sum+=a[i][k]*b[k][j];

                }
                product[i][j]=sum;
                sum=0;

            }

        }
        printf("Resultant Matrix: \n");

             for(i=0;i<2;i++){

                for(j=0;j<2;j++){

                    printf("%d ",product[i][j]);
                }
             }


         return 0;
     }









