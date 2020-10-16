#include <iostream>
#include <deque>

using namespace std;
//->std::deque is an indexed sequence container
//->It allows fast insertion at both beginning and end
//->unlike vectors elements of deque are not stored contiguous
//->it uses individual allocated fixed size arrays, with additional bookkeeping, meaning index based access to deque must perform two pointer deference, but in vector we get one dereference
//->the storage of a deque is automatically expanded and contracted as needed
//->expansion of deque is cheaper than expansion of vector
//-> a deque holding just one element has to allocate its full internal array
//->methods such as push_front, pop_front which were not available in vectors are available for deque

//TIME COMPLEXITY
//Random access: constant o(1)
//Insertion or removal of elements at the end or beginning - constant O(1)
//Insertion or removal of elements - linear O(n)

static void print(deque<int> &dq) {
  deque<int> :: iterator it;
  for(it = dq.begin(); it != dq.end(); it++) {
    cout<<*it<<endl;
  }
}

int main() {
  deque<int> dq = {1,2};
  dq.push_back(3);
  dq.push_front(0);
  print(dq);
  dq.pop_back();
  dq.pop_front();
  cout<<" . . "<<endl;
  print(dq);
  return 0;
}