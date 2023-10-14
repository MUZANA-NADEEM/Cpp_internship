#include<iostream>
using namespace std;

int main()
{
   double num1,num2;
   double result;
   char operation;

   cout<<"Enter first number :";
   cin>>num1;
   cout<<"Enter operator number :";
   cin>> operation;
   cout<<"Enter second number :";
   cin>>num2;
   
 
   switch(operation)
   {
    case '+':
    result= num1 + num2;
    cout<<"The addition of "<<num1<<" and "<<num2<<" is : "<<result;
    break;
   
    case '-':
    result= num1 - num2;
    cout<<"The subtraction of "<<num1<<" and "<<num2<<" is : "<<result;
      break;
     
    case '*':
    result= num1 * num2;
     cout<<"The multiplication of "<<num1<<" and "<<num2<<" is : "<<result;
     break;
     
    case '/':
    result= num1 / num2;
     cout<<"The division of "<<num1<<" and "<<num2<<" is : "<<result;
     break;
 
    default:
    cout<<"INVALID ENTRY.TRY AGAIN !"<<endl;
    break;
   }

    return 0;
}
