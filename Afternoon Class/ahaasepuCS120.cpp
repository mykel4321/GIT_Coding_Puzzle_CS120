#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
  vector<string> list = {"A","1","B","2","C","3","D","4"};
  cout << "[";
  for (string s : list) {
    cout << s << ",";
  }
  cout << "]" << endl;
  return 0;
}
