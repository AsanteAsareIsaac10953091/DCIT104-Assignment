#include <iostream> 
#include <iomanip> 
 
using namespace std; 
 
int main() { 
  int i=1, ctr=0, sum=0; 
  while( i++<=10000 ) { 
    if( i%2 == 0 ) { 
      sum += i; 
      ctr++; 
    } 
  } 
 
  cout << "Sum of all even numbers less than 10000 is " 
       << sum << endl; 
 
  cout << "Average is " 
       << fixed << setprecision( 2 ) 
       << ((double) sum / ctr) << endl; 
 
  return 0; 
}  