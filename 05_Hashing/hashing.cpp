#include <iostream>
#include <unordered_map>  // for std::unordered_map (hash map)
#include <unordered_set>  // for std::unordered_set (hash set)
#include <map>            // for std::map (ordered map, if needed)

using namespace std;


int main(){
    int n;
    cout<<"Enter the number of elements: "<< endl;
    cin>>n; 
     



    int arr[n]; // Declare an array of size n
    for (int i = 0; i < n ; i++){
        cin>>arr[i]; // Input elements into the array

    }

    int hash[13] = {0}; // Initialize hash array with 0
    for (int i = 0; i < n; i++){
        hash[arr[i]] += 1; // Increment the count at the index determined by the hash function
    }

    int q;
    cout<<"Enter the number of queries: ";
    cin>>q; 
    while (q--){    
        int x;
        cout<<"Enter the element to query: ";
        cin>>x; // Input the element to query
        cout<<"Frequency of "<< x <<" is: "<< hash[x] << endl; // Output the frequency of the queried element
    }

    string ch;
    cout<<"Enter the elements: "<< endl;        
    cin>>ch; // Input the string to query

    int hash2[256] = {0}; // Initialize hash array for characters with 0
    for (int i = 0; i < ch.length(); i++){
        hash2[ch[i]] ++; // Increment the count at the index determined by the hash function for characters
    }

    char p;
    cout<<"Enter a character to query: ";
    cin>>p; // Input the character to query
    while(p--){
        char c;
        cout<<"Enter the character to query: ";
        cin>>c; // Input the character to query 
        cout<<"Frequency of "<< c <<" is: "<< hash2[c] << endl; // Output the frequency of the queried character
    }

     return 0;
}