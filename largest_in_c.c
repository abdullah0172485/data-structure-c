#include<stdio.h>
#include<conio.h>
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
        printf("%d\n",arr[i]);
    }
    //Finding the leargest.
    largest=arr[0];
    for(i=0;i<5;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    printf("\nLargest number is = %d\n",largest);
    //Finding the smallest number.
    int smallest=arr[0];
    for (i=0;i<5;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    printf("\nThe smallest number is= %d\n",smallest);
    //Finding the some.
    int sum=0;
    for(i=0;i<5;i++){
        sum=sum+arr[i];
    }
    printf("The sum of the array is = %d\n",sum);
   float avg=sum/5.0;
   printf("The avarage is = %.2f\n",avg);
   getch();
   return 0;
}