#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
  vector<string> list = {"A","1","B","2","C","3","D","4"};
  cout << "[";
  for (int i = 0; i < list.size()-1; ++i) {
    cout << list[i] << ",";
  }
  cout << list[list.size()-1];
  cout << "]" << endl;
  return 0;
}
