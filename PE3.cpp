#include <iostream>
#include <cmath> 
    
using namespace std;

class Fak {
  long long n = 600851475143;
  double nsqrt = sqrt(n);
  long long n1 =  (nsqrt + 1);
    
  public: long long fakTask001();
};

long long Fak::fakTask001() {
  int max = 1;
  while (n % 2 == 0) {
    n /= 2;
    max = 2;
  } 
  int faktor = 3;
  while (faktor <= n1) {
    if (n % faktor == 0) {  n /= faktor;   max = faktor; }
    else {  faktor += 2;  }
  } 
    
  if (n > max) return n;
    
  return max;  
}


int main() {
  
  Fak fak001;
  cout << fak001.fakTask001();
}