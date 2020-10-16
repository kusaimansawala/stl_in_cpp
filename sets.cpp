
//A simple implementation of STL set for self practice
#include <iostream>
#include <set>
#include <functional>

//switch to indicate what code to compile
#define SET

using namespace std;

#ifdef SET
class students {
  public:
  int age;
  char name[30];

  bool operator < (const students &obj) const {
    return age < obj.age;
  }

  bool operator > (const students &obj) const {
    return age > obj.age;
  }
};

int main() {
  set<students> :: iterator ptr;
  set<int> :: iterator ptr1;

  set<int> myset1 = {1,2,3,4,5,1,2,3,4,5};
  for(ptr1 = myset1.begin(); ptr1 != myset1.end(); ptr1++) {
    cout<<*ptr1<<endl;
  }
  //write greater<> for decending and less for ascending
  //bydefault it is ascending
  set<students, less<>> myset = {{25,"Kusai"},{55,"Saifee"},{30,"Fatema"}};
  
  for(ptr = myset.begin(); ptr != myset.end(); ptr++) {
    cout<<ptr->age<<"  "<<ptr->name<<endl;
  }
  return 0;
}
#else

int main() {
  cout<<"Kusai"<<endl;
  return 0;
}
#endif  