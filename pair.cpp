#include <iostream>
#include <vector>

using namespace std;
//->std::pair is a structure template that provides a way to store two heterogenous objects as a single unit
//->map, multimap, unordered_map, unordered_multimap can use pair to insert data into their structures
//->it can be used when you want to return two values from a function


int main() {
  //one way to make pair
  pair<string,int> obj("Kusai",25);

  cout<<obj.first<<" "<<obj.second<<endl;

  //second way to make pair
  obj = make_pair("Fatema", 30);
  cout<<obj.first<<" "<<obj.second<<endl;

  //using pairs in vector
  vector<pair<string,int>> myvector;
  vector<pair<string,int>> :: iterator it;

  myvector.push_back(make_pair("Kusai",25));
  myvector.push_back(make_pair("Saifee",67));
  myvector.push_back(make_pair("Zoher",37));
  myvector.push_back(make_pair("Fatema",31));
  myvector.push_back(make_pair("Tasneem",54));

  for(it = myvector.begin(); it != myvector.end(); it++) {
    cout<<it->first<<" . . " <<it->second<<endl;
  }

  return 0;
}