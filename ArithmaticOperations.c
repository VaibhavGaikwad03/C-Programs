/////////////////////////////////////////////////////////
//
// Function name :  Arithmatic Operations
// Input :          Two integers
// Output :         Addition/Subtraction/Multiplication/Division
// Description :    It is used to perform Arithmatic operations
// Author :         Vaibhav Tukaram Gaikwad
// Date :           08/04/2022
//
////////////////////////////////////////////////////////


#include<stdio.h>

int Addition()
{
    int iA = 0;
    int iB = 0;
    int iRet = 0;

    printf("Enter first number :\n");
    scanf("%d",&iA);

    printf("Enter second number :\n");
    scanf("%d",&iB);

    iRet = iA + iB;

    printf("Addition is : %d \n",iRet);

}

int Subtraction()
{
    int iA = 0;
    int iB = 0;
    int iRet = 0;

    printf("Enter first number :\n");
    scanf("%d",&iA);

    printf("Enter second number :\n");
    scanf("%d",&iB);

    iRet = iA - iB;

    printf("Subtraction is : %d \n",iRet);
    
}

int Multiplication()
{
    int iA = 0;
    int iB = 0;
    int iRet = 0;

    printf("Enter first number :\n");
    scanf("%d",&iA);

    printf("Enter second number :\n");
    scanf("%d",&iB);

    iRet = iA * iB;

    printf("Multiplication is : %d \n",iRet);
    
}

int Division()
{
    int iA = 0;
    int iB = 0;
    int iRet = 0;

    printf("Enter first number :\n");
    scanf("%d",&iA);

    printf("Enter second number :\n");
    scanf("%d",&iB);

    iRet = iA /iB;

    printf("Division is : %d \n",iRet);
    
}
int main()
{
    int iOption = 0;

    printf("Enter 1 for Addition \n");
    printf("Enter 2 for Subtraction\n");
    printf("Enter 3 for Multiplication\n");
    printf("Enter 4 for Division\n");

    scanf("%d",&iOption);

    switch (iOption)
{   case 1 :
        Addition();
    break;

    case 2 :
        Subtraction();
    break;

    case 3 :
        Multiplication();
    break;

    case 4:
        Division();
    break;
    
    default :
        printf("Invalid option selected");
    break;
}
    return 0;
}