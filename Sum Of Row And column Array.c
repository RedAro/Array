#include<stdio.h>

int main(){

   int arr[5][5]={{8,3,9,0,10},{3,5,17,1,1},{2,8,6,23,1},{15,7,3,2,9},{6,14,2,6,0}};

   int i,j,sum=0;

   for(i=0;i<5;i++){
      sum=0;
      for(j=0;j<5;j++){

         sum=arr[i][j]+sum;
      }
      printf("%d ",sum);
   }
      printf("\n");

      for(j=0;j<5;j++){

      sum=0;

      for(i=0;i<5;i++){

         sum=arr[i][j]+sum;
      }
      printf("%d ",sum);
   }

   return 0;
}
