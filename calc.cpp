#include <iostream>
#include <cmath>
#include <string>
using namespace std; 

double add(double num1, double num2);
double subtract(double num1, double num2);
double multiply(double num1, double num2);
double divide(double num1, double num2);
double power(double num1, double num2);

void clearScreen() //Clears the screen
{
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main()
{
    double num1, num2;
    int ext=1; //If equal to zero the program will end
    char op;
while (ext==1) //Exit must be 0 to exit the program
{
    clearScreen();
    cout <<"------------------\n|   CALCULATOR   |\n------------------\n";
    cin>>num1>>op>>num2;
    
        switch (op)
        {
            case '+':
            {
                cout <<" = " << add(num1,num2)<<"\n";
                cout << "Press 1 to continue or 0 to exit: "; cin>>ext;
                break;
            }
            case '-':
            {
                cout << "= " << subtract(num1,num2)<<"\n";
                cout << "Press 1 to continue or 0 to exit: "; cin>>ext;
                break;
            }
            case '*':
            {
                cout << "= " << multiply(num1,num2)<<"\n";
                cout << "Press 1 to continue or 0 to exit: "; cin>>ext;
                break;
            }
            case '/':
            {
                cout << "= " << divide(num1,num2)<<"\n";
                cout << "Press 1 to continue or 0 to exit: "; cin>>ext;
                break;
            }   
            case '^':
            {
                cout << "= " << power(num1,num2)<<"\n";
                cout << "Press 1 to continue or 0 to exit: "; cin>>ext;
                break;
            } 
            default:
            {
                cout << "Invalid operator. Please try again!\n";
                cout << "Press 1 to continue or 0 to exit: "; cin>>ext;
                break;
            }
        }
}
clearScreen();
cout << "Exiting Calculator...";

    return 0;
}

double add(double num1, double num2)
{
    return num1+num2;
}

double subtract(double num1, double num2)
{
    return num1-num2;
}

double multiply(double num1, double num2)
{
    return num1*num2;
}

double divide(double num1, double num2)
{
    return num1/num2;
}

double power(double num1, double num2)
{
    return pow(num1,num2);
}
