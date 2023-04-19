#include<iostream>
using namespace std;

int main () 
{
  
int a, b, result;
  
char op;
  
 
cout << " Enter first number : ";
  
cin >> a;
  
 
cout << "\n Enter the operation [+ , - , / , *] ";
  
cin >> op;
  
 
cout << "\n Enter second number : ";
  
cin >> b;
  
 
if (op == '+')
    
result = a + b;
  
  else if (op == '-')
    
result = a - b;
  
  else if (op == '/')
    
result = a / b;
  
  else if (op == '*')
    
result = a * b;
  
 
cout << "\n Result = " << a << op << b << " = " << result << endl;
  
return 0;

 
}
    








