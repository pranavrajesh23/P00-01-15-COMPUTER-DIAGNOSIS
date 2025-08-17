#include<iostream>
using namespace std;

void computerCheck();

void errorCheck()
{
    cout<<"\n---Error Check Started---\n";
    cout<<"\nAny error messages displayed? (yes/no): \n";
    string error;
    cin >> error;
    if (error == "yes") 
    {
        cout<<"\nPerform diagnosis to the computer\n";
        cout<<"\n....performing diagnosis....\n";
        cout<<"\nDiagnosis complete\n";
        cout<<"\nDo computer check for confirmation\n";
        computerCheck();
    }
    else
    {
        cout<<"\nNo error messages displayed\n";
        cout<<"\nComputer is in good condition\n";
    }
}


void computerCheck()
{
    cout<<"\n---Computer Check Started---\n";
    cout<<"\nIs the computer turned on? (yes/no): \n";
    string on;
    cin >> on;
    if (on == "yes") 
    {
        cout<<"\nComputer is turned on\n";
        cout<<"\nChecking for errors\n";
        errorCheck();
    }
    else
    {
        cout<<"\nComputer is not turned on\n";
        cout<<"\nChecking for power issues\n";
        //powerCheck();
    }
}

int main()
{
    cout<<"------Computer Diagnosis------\n";
    computerCheck();
    cout<<"\n-----Process Completed-----\n";
}