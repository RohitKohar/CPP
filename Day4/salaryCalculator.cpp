#include<iostream>
using namespace std;

int calculateSalary(float basic_salary,float allowance, float bonus)
{
        float afterTax=basic_salary-basic_salary*13/100;
        float afterSocialSecurityFund=afterTax-basic_salary*13/100;
        float finalSalary=afterSocialSecurityFund+allowance+bonus;
        return finalSalary;
}
int main()
{
    int post;
    float basic_salary,allowance,bonus;
    char reply;
    do{
    cout<<"Select the post for salary calculation in number: "<<endl<<"1. Manager"<<endl<<"2. CEO"<<endl<<"3. Labour"<<endl;
    cin>>post;
    switch(post){
    case 1:
        cout<<"Enter the basic salary of Manager: ";
        cin>>basic_salary;
        cout<<"Enter the allowance amount: ";
        cin>>allowance;
        cout<<"Enter the bonus amount: ";
        cin>>bonus;
        cout<<"The total calculated salary of Manager is: "<<calculateSalary(basic_salary,allowance,bonus)<<endl;
        break;
    case 2:
        cout<<"Enter the basic salary CEO: ";
        cin>>basic_salary;
        cout<<"Enter the allowance amount: ";
        cin>>allowance;
        cout<<"Enter the bonus amount: ";
        cin>>bonus;
        cout<<"The total calculated salary of CEO is: "<<calculateSalary(basic_salary,allowance,bonus)<<endl;
        break;
    case 3:
        cout<<"Enter the basic salary labour: ";
        cin>>basic_salary;
        cout<<"Enter the allowance amount: ";
        cin>>allowance;
        cout<<"Enter the bonus amount: ";
        cin>>bonus;
        cout<<"The total calculated salary of labour is: "<<calculateSalary(basic_salary,allowance,bonus)<<endl;
        break;
    default:
        cout<<"Invalid option! Choose a valid option.";
    }
    cout<<"Do you want to proceed the task" <<endl<< "write Y or y for yes and other character for no: "<<endl;
    cin>>reply;
    }while(reply=='Y' || reply=='y');
    return 0;
}

/*

types of function
void functionName()
int functionName()
void functionName(argument)
int functionName(argument)
argument is known as signature.

*/
