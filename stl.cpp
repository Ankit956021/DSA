#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<queue>
using namespace std;


void vectorexp(){
    vector<int> v ;
    v.push_back(1);
    v.push_back(2);
    v.emplace_back(3);  // emplace_back is more efficient than push_back for constructing in-place

    for ( auto it = v.begin() ; it != v.end() ; it++){
        cout<< *it <<" ";
    }
     cout<<endl;


     vector<int> v2(5, 10);  // Creates a vector of size 5, initialized with 10
     for ( auto it =v2.begin() ; it != v2.end() ; it++){
        cout<< *it <<" ";
     }
     cout<<endl;

     v2.erase(v2.begin() + 2);  // Erase the element at index 2 (the third element)

     v2.insert(v2.begin() + 1, 20);  // Insert 20 at index 1 (the second position)

     for ( auto it =v2.begin() ; it != v2.end() ; it++){
        cout<< *it <<" ";
     }
     cout<<endl;


}


void explainlist(){
    // List is a doubly linked list in C++. It allows for efficient insertion and deletion at any position, but does not support random access like vectors. 
    // It is implemented as a sequence of nodes, where each node contains a data element and pointers to the next and previous nodes in the list.
    // Common operations include push_back, push_front, pop_back, pop_front, insert, erase, and traversal using iterators.

    list<int> myList;
    myList.push_back(1);  // Adds 1 to the end of the list
    myList.push_front(0); // Adds 0 to the front of the list

    for(auto it = myList.begin(); it != myList.end(); ++it) {
        cout << *it << " ";  // Output: 0 1
    }
     cout<<endl;
}


void expStack(){
    // Stack is a container adapter in C++ that follows the Last In First Out (LIFO) principle. It provides a simple interface for adding and removing elements, where the last element added is the first one to be removed. 
    // Common operations include push (to add an element), pop (to remove the top element), top (to access the top element), and empty (to check if the stack is empty).

    // Example usage:
    // stack<int> myStack;
    // myStack.push(1);  // Adds 1 to the top of the stack
    // myStack.push(2);  // Adds 2 to the top of the stack
    // cout << myStack.top();  // Output: 2
    // myStack.pop();  // Removes the top element (2)
    // cout << myStack.top();  // Output: 1


    stack<int> pankaj;
    pankaj.emplace(20);
    pankaj.emplace(30);
    pankaj.emplace(2);
        cout<<pankaj.top()<<endl;  // Output: 2
        pankaj.pop();
        cout<<pankaj.top()<<endl;  // Output: 30
    pankaj.push(40);
        cout<<pankaj.top()<<endl;  // Output: 40

}

void explainQueue(){
    // Queue is a container adapter in C++ that follows the First In First Out (FIFO) principle. It provides a simple interface for adding and removing elements, where the first element added is the first one to be removed. 
    // Common operations include push (to add an element), pop (to remove the front element), front (to access the front element), back (to access the back element), and empty (to check if the queue is empty).

    // Example usage:
    // queue<int> myQueue;
    // myQueue.push(1);  // Adds 1 to the back of the queue
    // myQueue.push(2);  // Adds 2 to the back of the queue
    // cout << myQueue.front();  // Output: 1
    // myQueue.pop();  // Removes the front element (1)
    // cout << myQueue.front();  // Output: 2

    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(20);
    cout << q.front() << endl;  // Output: 1
    cout << q.back() << endl;   // Output: 20
     q.pop();  // Removes the front element (1)
    cout << q.front() << endl;  // Output: 2    
}



int main(){
    vectorexp();

    cout<<"------------------"<<endl;

    explainlist();

    cout<<"------------------"<<endl;

    expStack();

    cout<<"------------------"<<endl;

    explainQueue();

    cout<<"------------------"<<endl;
    return 0;
}