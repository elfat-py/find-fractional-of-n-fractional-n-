#include <iostream>
#include <iomanip>
using namespace std; 



int main()
{
    int counter;
    unsigned long long factorial;

    do
    {
        cout<<"Enter the !n :";
        cin>>counter;
    }while (counter<0);

    factorial=1;
    
    for (int i = 1; i < counter+1; i++)
    {
        factorial*=i;
        cout<<endl;
        
        cout<<"The result of the fractional number is: "<<factorial;
        
    }
    cout<<endl;
    
    
    return 0;
    
}