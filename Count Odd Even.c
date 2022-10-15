#include<stdio.h>

int main(){

   int i,arr[10],count=0;

   for(i=0;i<10;i++){

      scanf("%d",&arr[i]);

   }
   for(i=0;i<10;i++){

       if(arr[i]<0){
          count++;

       }
   }
   printf("%d ",count);

   return 0;
}
