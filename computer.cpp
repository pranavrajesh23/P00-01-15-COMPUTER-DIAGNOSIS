#include<iostream>
using namespace std;


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
        // errorCheck();
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
}