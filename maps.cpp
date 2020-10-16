#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <functional>
 
using namespace std;

//Pointes to remember
//->Syntax: map<type1,type2> obj; where type1 is key type and type2 is value type
//->std::map is an associative container that stores elements in key value combination where key should be unique, otherwise it overrides the previous value.
//It is implemented using self balancing BST (AVL/Red black tree)
//it stores the key value pait in sorted order based on the key (ascending/descending)
//std::map is generally used in dictionary type problems

int main() {
  //use less<> or greater<> for ascending or descending
  //not mentioning any of it takes ascending by default
  map<string, int, greater<>> mymap;
  //iterator to traverse through the map
  map<string, int> :: iterator it;
  //different ways to insert values in map
  mymap["Kusai"] = 1;
  mymap.insert(make_pair("Mohammed", 2));

  //loop to print the contents of the map
  cout<<"Printing the contents of the map"<<endl;
  for(it = mymap.begin(); it != mymap.end(); it++) {
    cout<<it->first<<" - "<<it->second<<endl;
  }

  //accessing the individual elements
  cout<<mymap["Kusai"]<<endl;
  cout<<mymap["Mohammed"]<<endl;
  return 0;
}