/////////////////////////////////////////////////////////
//
// Function name :  Positive Negative
// Input :          Integer
// Output :         your number is positive or negative
// Description :    It is used to check your number is positive or negative
// Author :         Vaibhav Tukaram Gaikwad
// Date :           09/04/2022
//
////////////////////////////////////////////////////////


#include<stdio.h>

int main()      //Entry point function
{   
    int iInput = 0;

    printf("Enter the Number :");
    scanf("%d",&iInput);        //Taking input from user

    if(iInput>0)
    {
        printf("Your entered number is Positive \n");
    }

    else if(iInput<0)
    {
        printf("Your entered number is Negative \n");
    }
    else
    {
        printf("0 is neither Positive nor Negative \n");
    }
    return 0;
}