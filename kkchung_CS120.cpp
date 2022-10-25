//Build this list [A,1,B,2,C,3,D,4] and print output
#include <iostream>
using namespace std;

int main {
  ArrayList<char> charlist = new ArrayList<char>(8);
  charlist.pushback('A');
  charlist.pushback('1');
  charlist.pushback('B');
  charlist.pushback('2');
  charlist.pushback('C');
  charlist.pushback('3');
  charlist.pushback('D');
  charlist.pushback('4');
  
  for (char c in charlist) {
    cout << c << endl;
  }
  
  return 0; 
}
