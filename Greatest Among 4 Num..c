#include<stdio.h>

int Greatest(int a,int b,int c,int d);

int main(){

    int k,x,y,z,result;

    scanf("%d%d%d%d",&k,&x,&y,&z);

    result=Greatest(k,x,y,z);

    printf("%d\n",result);


    return 0;

}
int Greatest(int a,int b,int c,int d){

    if(a>b && a>c && a>d){

        return a;
    }
    else if(b>a && b>c && b>d){

        return b;
    }
    else if(c>a && c>b && c>d){

        return c;
    }
    else
        return d;

}
