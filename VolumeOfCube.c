/////////////////////////////////////////////////////////
//
// Function name :  Volume
// Input :          Side of Cube
// Output :         Volume of Cube
// Description :    It is used to calculate Volume of cube
// Author :         Vaibhav Tukaram Gaikwad
// Date :           08/04/2022
//
////////////////////////////////////////////////////////

#include <stdio.h>

int Volume(int iS)      //Function Declaration
{   
    int Ans = 0;

    Ans = iS*iS*iS;     

    return Ans;

}
int main()          //Entry point function
{
    int iSide = 0;      //Assigning variables to 0
    int Ret = 0;

    printf("Enter the side of Cube : \n");
    scanf("%d",&iSide);     //Taking input from user 

    Ret = Volume(iSide);    //Function Calling

    printf("Volume of Cube is : %d",Ret);      //Output

    return 0;
}
