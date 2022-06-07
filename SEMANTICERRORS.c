#include<stdio.h>
int main(){
    int num=2,var=4,c;
    num*var=c;
    printf("%d",c);
}


#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int arraysize=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=arraysize;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
