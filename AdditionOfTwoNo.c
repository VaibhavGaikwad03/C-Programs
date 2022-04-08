/////////////////////////////////////////////////////////
//
// Function name :  Addition 
// Input :          Two integers
// Output :         Addition of that two integer
// Description :    It is used to perform Addition
// Author :         Vaibhav Tukaram Gaikwad
// Date :           08/04/2022
//
////////////////////////////////////////////////////////


#include<stdio.h>
int Addition(int iNo1, int iNo2) //function declaration
{
    int iAns = 0;
    iAns = iNo1 + iNo2;
    return iAns;

}

int main()      //Entry point function
{   int iA =0;
    int iB = 0;
    int iRet = 0;


printf("Enter first number :");
scanf("%d",&iA);        //Taking input from user

printf("Enter second number :");
scanf("%d",&iB);        //Taking input from user

iRet = Addition(iA,iB);     //Function calling

printf("Addition is : %d",iRet);    //Output

    return 0;
}