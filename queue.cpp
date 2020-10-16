#include <iostream>
#include <queue>

using namespace std;
//->std::queue class is a container adapter that gives the programmer the functionality of a queue
//->queue is FIFO
//->std::queue provides only specific set of functions
//->std::queue allows to push (insert) at the back and pop (remove) from the front
//->std::queue gives front, back, push, pop, empty, size

static void print(queue<string> &dq) {
  deque<int> :: iterator it;
  while(!dq.empty()) {
    cout<<dq.front()<<endl;
    dq.pop();
  }
}

int main() {
  queue<string> q;
  q.push("Fatema");
  q.push("Raj");
  q.push("Zoher");
  print(q);

  return 0;
}