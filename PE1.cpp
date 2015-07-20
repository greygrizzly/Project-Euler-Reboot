/* Problem 1

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <iostream>
using namespace std;

class Series {
    int a, r;
  public:
    void setValues (int,int);
    int sumFilter() ;
};

void Series::setValues (int a, int r) {
  this->a = a;
  this->r = r;
  }

int Series::sumFilter(){
    return r*(a/r)*((a/r)+1)/2;
}

int main () {
  Series mult3, mult5, mult15 ;
  
  mult3.setValues (999,3);  
  mult5.setValues (999,5);     
  mult15.setValues (999,15); 
    
  int result;    
  result=  
  mult3.sumFilter() + 
  mult5.sumFilter() -    
  mult15.sumFilter(); 
    
  cout << result << endl; // 233168
  
  return 0;
}
