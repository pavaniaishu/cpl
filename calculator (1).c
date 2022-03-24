/*
Expt No.1
Question:Simulation of simple calculator
Name:Ms pavani
Roll No:20
Date:30.12.2021
*/
#include <stdio.h>
int main()
{
  char op;
  int num1,num2,result;
  printf("enter the operator");
  scanf("%c",&op);
  printf("enter two integers");
  scanf("%d%d",&num1,&num2);
  if(op == '+')
  {
    result=num1+num2;
  }
  else if(op =='-')
  {
   result=num1-num2;
  } 
  else if(op =='*')
  {
   result=num1*num2;
  }
  else if(op =='/')
   {if(num2== 0)
   
    {printf("divide by zero error\n");
    return 1;
    return 2;
    }
   result=num1/num2;
   }
  else if (op =='%')
  {
   result=num1%num2;
  }
  else
  {
  printf("invalid operator");
  }
  printf("result of %d%c%d=%d\n",num1,op,num2,result);
  return 0;
}


