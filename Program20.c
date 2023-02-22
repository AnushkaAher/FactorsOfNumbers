//accept no from the user that calculates a factor

#include<stdio.h>
void DisplayFactors(int iNum)
{
    int iCnt=0;
    printf("the factors are : \n");
    for(iCnt=1;iCnt<iNum;iCnt++)
    {
        if((iNum % iCnt)==0)
        {
            printf("%d \n",iCnt);
        }

    }
}
int main()
{
    int iNo=0;
    printf("enter your number \n");
    scanf("%d",&iNo);
    DisplayFactors(iNo);
    return 0;
}