#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>


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

void expPriorityQueue(){
    priority_queue<int> p;
    p.push(10);
    p.push(20);
    p.push(5);
    p.emplace(15);  // Adds 15 to the priority queue
    cout << p.top() << endl;  // Output: 20 (the largest element in the priority queue)
    p.pop();  // Removes the top element (20)
    cout << p.top() << endl;  // Output: 15 (the next largest element in the priority queue) 
    
    priority_queue<int, vector<int>, greater<int>> minHeap;  // This creates a min-heap (priority queue that gives the smallest element)
    minHeap.push(10);
    minHeap.push(20);
    minHeap.push(5);
    cout << minHeap.top() << endl;  // Output: 5 (the smallest element in the min-heap)
    minHeap.pop();  // Removes the top element (5)
    cout << minHeap.top() << endl;  // Output: 10 (the next smallest element in the min-heap)


}

void expSet(){
    // Set is a container in C++ that stores unique elements in a sorted manner. It is implemented as a balanced binary search tree (like a Red-Black Tree) and provides logarithmic time complexity for insertion, deletion, and search operations. 
    // Common operations include insert (to add an element), erase (to remove an element), find (to check if an element exists), and traversal using iterators.

    // Example usage:
    // set<int> mySet;
    // mySet.insert(3);  // Adds 3 to the set
    // mySet.insert(1);  // Adds 1 to the set
    // mySet.insert(2);  // Adds 2 to the set
    // for (auto it = mySet.begin(); it != mySet.end(); ++it) {
    //     cout << *it << " ";  // Output: 1 2 3 (elements are stored in sorted order)
    // }
    set<int> s;
    s.insert(3);
    s.insert(1);
    s.insert(2);
    s.emplace(4);  // Adds 4 to the set
     for (auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";  // Output: 1 2 3 4 (elements are stored in sorted order)
    }
     cout<<endl;

    set<int> s2;
    s2.emplace(5);
    s2.emplace(1);

    auto it = s2.find(1);
    if (it != s2.end()) {
        cout << "Element 1 found in the set." << endl;  // Output: Element 1 found in the set.
    } else {
        cout << "Element 1 not found in the set." << endl; 
    }

    
}

void expMultiset(){
    // Multiset is a container in C++ that stores multiple occurrences of elements in a sorted manner. It is similar to a set, but allows for duplicate elements. 
    // It is implemented as a balanced binary search tree (like a Red-Black Tree) and provides logarithmic time complexity for insertion, deletion, and search operations. 
    // Common operations include insert (to add an element), erase (to remove an element), find (to check if an element exists), and traversal using iterators.

    // Example usage:
    // multiset<int> myMultiset;
    // myMultiset.insert(3);  // Adds 3 to the multiset
    // myMultiset.insert(1);  // Adds 1 to the multiset
    // myMultiset.insert(2);  // Adds 2 to the multiset
    // myMultiset.insert(3);  // Adds another 3 to the multiset
    // for (auto it = myMultiset.begin(); it != myMultiset.end(); ++it) {
    //     cout << *it << " ";  // Output: 1 2 3 3 (elements are stored in sorted order, duplicates allowed)
    // }

    cout<<"this is multiset"<<endl;
    multiset<int> ms;
    ms.insert(3);
    ms.insert(1);
    ms.insert(2);       
    ms.insert(3);  // Adds another 3 to the multiset
     for (auto it = ms.begin(); it != ms.end(); ++it) {
        cout << *it << " ";  // Output: 1 2 3 3 (elements are stored in sorted order, duplicates allowed)
    }
     cout<<endl;

     ms.erase(3);  // Removes all occurrences of 3 from the multiset
     for (auto it = ms.begin(); it != ms.end(); ++it) {
        cout << *it << " ";  // Output: 1 2 (all occurrences of 3 have been removed)
    }
     cout<<endl;


}   

void expUnorder_set(){
    unordered_set<int> ors;
    //same as set but there is no order it will not sort.
}


void expMap(){
    // Map stores KEY-VALUE pairs in sorted order (by KEY)
    // Each KEY is unique, but VALUES can be duplicate
    // Internally implemented as Red-Black Tree (Balanced BST)
    // Time Complexity: O(log n) for insert, find, erase
    
    map<int, int> mpp;
    
    // Method 1: Using insert with pair
    mpp.insert({1, 10});      // Key: 1, Value: 10
    mpp.insert({2, 20});
    
    // Method 2: Using emplace (constructs in-place)
    mpp.emplace(3, 30);       // Key: 3, Value: 30
    
    // Method 3: Using [] operator (most common)
    mpp[4] = 40;              // Key: 4, Value: 40
    mpp[5] = 50;
    
    // Accessing values
    cout << "Value at key 1: " << mpp[1] << endl;  // Output: 10
    
    // Print all key-value pairs (sorted by key)
    cout << "Map contents (key -> value):" << endl;
    for(auto it : mpp){
        cout << it.first << " -> " << it.second << endl;
    }
    cout << endl;
    
    // Using iterator
    cout << "Using iterator:" << endl;
    for(auto it = mpp.begin(); it != mpp.end(); ++it){
        cout << it->first << " -> " << it->second << endl;
    }
    cout << endl;
    
    // Find a key
    auto it = mpp.find(3);
    if(it != mpp.end()){
        cout << "Key 3 found with value: " << it->second << endl;
    } else {
        cout << "Key 3 not found" << endl;
    }
    
    // Check if key exists
    if(mpp.count(5)){
        cout << "Key 5 exists!" << endl;
    }
    
    // Erase a key
    mpp.erase(2);
    cout << "After erasing key 2:" << endl;
    for(auto it : mpp){
        cout << it.first << " -> " << it.second << endl;
    }
    cout << endl;
    
    // Map with string keys
    map<string, int> studentMarks;
    studentMarks["Ankit"] = 95;
    studentMarks["Raj"] = 87;
    studentMarks["Priya"] = 92;
    
    cout << "Student marks:" << endl;
    for(auto it : studentMarks){
        cout << it.first << ": " << it.second << endl;
    }
    cout << endl;
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

    expPriorityQueue();

    cout<<"------------------"<<endl;

    expSet();
    
    cout<<"------------------"<<endl;

    expMultiset();

    cout<<"------------------"<<endl;

    expMap();
    
    cout<<"------------------"<<endl;
    return 0;
}