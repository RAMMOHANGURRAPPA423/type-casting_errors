#include<stdio.h>
int main(){
    int a=20,b=30;
    float sum=(float)(a+b);
    printf("%f",sum);
}

#include<stdio.h>
int main(){
    int a=10;
    char ch='a';
    double sum=(double)(a+ch);
    printf("%lf",sum);


#include<stdio.h>
int main(){
    int num1=10,num2=5;
    char ch=(char)num1/num2;
    printf("%c",ch);
}

#include<stdio.h>
int main(){
    int num=12,var=5;
    float res=num/(float)var;
    printf("%.2f",res);
}
