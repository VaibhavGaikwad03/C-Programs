/////////////////////////////////////////////////////////
//
// Function name :  Table Generator
// Input :          Integer
// Output :         Table of that integer
// Description :    It is used to genrate Table
// Author :         Vaibhav Tukaram Gaikwad
// Date :           08/04/2022
//
////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int iInput = 0;
    int iCnt = 1;

    printf("Enter which number of Table you want :");
    scanf("%d",&iInput);

    do
    {
        printf("%d \n",iInput*iCnt);
        iCnt++;

    }while(iCnt<=10);

    return 0;
}