#include <iostream>
using namespace std;

class Fib
{
   public:
      int fibTask001();  
      
};    

int Fib::fibTask001()
    {
        int fib1   = 0;	
        int fib2   = 1;
        int fib3   = 1;
        int fibSum = 0;
    
        

        for( ; fibSum  <= 4000000; fib3=fib1+fib2, fib1=fib2, fib2=fib3){
            if( !(fib3%2) ){ 
                fibSum += fib3;             
            }
         }   
         return fibSum;  

                              

    }


int main()
{
    Fib fib001;
    
    cout << fib001.fibTask001(); 
}
    
