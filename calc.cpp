#include <iostream>
#include <cmath>
#include <string>
using namespace std; 

double add(int num1, int num2);
double subtract(int num1, int num2);
double multiply(int num1, int num2);
double divide(int num1, int num2);
double power(int num1, int num2);

int main()
{
    double num1, num2;
    char op;
    cin>>num1>>op>>num2;

    switch (op)
    {
        case '+':
        {
            cout << add(num1,num2);
            break;
        }
        case '-':
        {
            cout << subtract(num1,num2);
            break;
        }
        case '*':
        {
            cout << multiply(num1,num2);
            break;
        }
        case '/':
        {
            cout << divide(num1,num2);
            break;
        }   
        case '^':
        {
            cout << power(num1,num2);
            break;
        } 
        default:
        {
            cout << "Invalid operator. Please try again!";
            break;
        }
    }


    return 0;
}

double add(int num1, int num2)
{
    return num1+num2;
}

double subtract(int num1, int num2)
{
    return num1-num2;
}

double multiply(int num1, int num2)
{
    return num1*num2;
}

double divide(int num1, int num2)
{
    return num1/num2;
}

double power(int num1, int num2)
{
    return pow(num1,num2);
}