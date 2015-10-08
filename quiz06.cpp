#include <iostream>
using namespace std;

long pow (long a, long b){
  long c = 1;
  while (b > 0){
    c = c *a;
    b = b -1;
  }
  return c;
}

void stars (int d){
  while (d > 0){
    cout << "*";
    d = d -1;
  }
}
int main(){
  long a, b;
  int d;
  cout << "Give a number: ";
  cin >> a;
  cout << "Give another number: ";
  cin >> b;
  long c = pow (a,b);
  cout << a << " times " << b << " equals: "<< c <<endl;
  cout << "Now tell me how many stars you want to see: ";
  cin >> d;
  stars (d);
  return 0;
}
