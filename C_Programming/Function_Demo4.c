#include<stdio.h>





int main(){

    int value1 = 0, value2 =0, ans = 0;

    printf("Enter first no. \n");
    scanf("%d", &value1);

    printf("Enter second no. \n");
    scanf("%d", &value2);

    ans = value1 + value2; // business logic

    printf("Addition is : %d\n", ans);




    return 0; 
}