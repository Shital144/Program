#include<stdio.h>
#include<stdbool.h>

int CalculatePower(int iBase,int iPower)
{
    int iCnt = 0;
    int iResult = 1;

    for(iCnt = 1; iCnt <= iPower; iCnt++)
    {
        iResult = iResult * iBase;
    }
    return iResult;   
    
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter base : \n");
    scanf("%d",&iValue1);         //2
    printf("Enter powre : \n");
    scanf("%d",&iValue2);         //5

    iRet = CalculatePower(iValue1,iValue2);
    printf("Result is : %d\n",iRet);

    return 0;
}




/*
Base = 2;
Power = 5;

Result = 2 * 2 * 2 * 2 * 2;

Result = 1;

Result = Result * 2;
Result = Result * 2;
Result = Result * 2;
Result = Result * 2;
Result = Result * 2;
*/


