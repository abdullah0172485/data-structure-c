#include<stdio.h>
int main (){
    int arr[5];
    int largest;
    int i;
    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++){
        scanf("%d", & arr[i]);
    }
    printf("You entered:\n");
    for(i=0;i<5;i++){
        printf("%d",arr[i]);
    }
    //Finding the leargest.
    largest=arr[0];
    for(i=0;i<5;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    printf("\nLargest number is = %d\n",largest);
}