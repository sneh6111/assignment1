#include <iostream>  
#include<conio.h>
using namespace std;  

int main()  
{  
  int n, i,flag=0;  
  cout << "Enter the Number to check Prime: ";  
  cin >> n;    
  for(i = 1; i <= n; i++)  
  {  
      if(n % i == 0)  
      {    
          flag++;   
      }  
  }  
  if (flag==2)  
      cout << "Number is Prime."<<endl;
 else
      cout<<"not prime";
  getch();
  return 0;  
}  
