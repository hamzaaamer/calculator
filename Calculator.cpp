#include<iostream>
using namespace std;
int main()
{
    int a , b , result ;
    char op;
   
    cout << "Enter first number : "<<endl;
    cin >> a ;
    
    cout<<"Enter the operation [+ , - , / , *]"<<endl;
    cin>>op;
    
    cout << "Enter second number : "<<endl;
    cin >> b ;

    if(op == '+')
        result = a+b;
    else if(op == '-')
        result = a-b;
   else if(op == '/')
        result = a/b;
    else if(op == '*')
        result = a*b;

cout<<a<<op<<b<<"="<<result<<endl;
    return 0;

}
    








