#include <vector>
#include <string>
#include <ostream>
using namespace std;

int main () {
  vector<char> list;
  list.push_back('A');
  list.push_back('1');
  list.push_back('B');
  list.push_back('2');
  list.push_back('C');
  list.push_back('3');
  list.push_back('D');
  list.push_back('4');
  string list_string;
  cout << "[";
  for (i = 0; i < list.size(); ++i) {
    cout << list[i];
    if (i != (list.size()-1)){
      cout << ",";
    }
  }
  cout << "]" << endl;
}
