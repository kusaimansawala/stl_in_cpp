#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <functional>

using namespace std;

//Multimap in c++
//-> multimap is an associative container that contains a sorted list of key-value pairs.
//->It stores the key-value pairs in sorted order on the basis of the key (ascending/descending)
//->Syntax std::multimap<char,int,std::greater<>> obj. here std::greater is optional
//->data structure used in multimap is not defined by standard, but red-black tree is assumed by most of the people
//->Lookup: count, find, contains, equal_range, lower_bound, uppderbound
//we dont have at() and [] functions to get element like we had it in std::map

int main() {
  multimap<char,int> obj;
  multimap<char,int> :: iterator it;
  obj.insert(make_pair('a',1));
  obj.insert(make_pair('a',2));
  obj.insert(make_pair('a',3));
  obj.insert(make_pair('a',4));
  obj.insert(make_pair('b',1));
  obj.insert(make_pair('b',2));
  obj.insert(make_pair('b',3));

  for(it = obj.begin(); it != obj.end(); it++) {
    cout<<it->first<<" "<<it->second<<endl;
  }

  cout<<endl;
  //Get all the pairs of the given key
  pair<multimap<char,int>::iterator,multimap<char,int>::iterator> range = obj.equal_range('a');
  for(it = range.first; it != range.second; it++) {
    cout<<it->first<<" "<<it->second<<endl;
  }

  cout<<endl;
  cout<<"Count pairs with key b = "<<obj.count('b')<<endl;

  //contains() gives you true and false if the key exists. It is supported by cpp 20 version

  //find() will return pair based on the key u provide. if u have multiple similar keys then it may return any pair.

  //lower_bound and upper_bound
  cout<<endl;
  it = obj.lower_bound('a');
  cout<<"lower bound for key a = "<<it->first<<" "<<it->second<<endl;
  it = obj.upper_bound('a');
  cout<<"upper bound for key a = "<<it->first<<" "<<it->second<<endl;
  return 0;
}