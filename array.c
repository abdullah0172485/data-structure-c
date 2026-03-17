#include <stdio.h>
int main() {
    int arr[5]={10,20,30,40,50};
    arr[5]=60;
    for(int=2;i<4;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<=5++){
        printf("%d ",arr[i]);
    }
}