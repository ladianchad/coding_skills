#include <map>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
  int num;
  cin >> num;
  cin.get();
  map<string, int> sell;
  int max_sell = 0;
  string bestseller;
  while(num--){
    string book;
    getline(cin, book);
    sell[book]++;
    if(sell[book] > max_sell){
      max_sell = sell[book];
      bestseller = book;
    }
  }
  cout<< bestseller;
  return 0;
}
