#include<iostream>  
using namespace std;    

int cot = 0; // This is a global variable named 'cot' used as a counter.

void cott(int n){
    if (cot == n){
        return;
    }else{
        cout<<cot<< endl;
        cot ++;
        cott(n);

    }
}


void name(int n){
    
    static int i = 0;
    if (i == n)
    {
        return;
    } else {
        cout<<"This is name function"<<endl;
        i++;
        name(n);
    }
    
}


void printNto1(int n){
    if (n == 0)
    {
        return;
    } else {
        cout<<n<<" ";
        printNto1(n-1);
    }
    
}   

void sum(int i, int n, int total){
    if (i > n)
    {
        cout<<"Sum is: "<<total<<endl;
        return;
    } else {
        total += i;
        sum(i+1, n, total);
    }
}

void multiply(int i , int n , int total){
    if (i > n){
        cout<<"Multiplication is: "<<total<<endl;
        return;
    } else {
        total *= i;
        multiply(i+1, n, total);
    }
}

void arrayswap(int l, int r, int arr[]){ 
    if (l >= r){
        return;
    } else {
        swap(arr[l], arr[r]);
        arrayswap(l+1, r-1, arr);
    }
}

void palindrome(string s, int l, int r){
    if (l >= r){
        cout<<"Palindrome"<<endl;
        return ;
    } else {
        if (s[l] != s[r]){
            cout<<"Not Palindrome"<<endl;
            return;
        }
        palindrome(s, l+1, r-1);
    }
}

void fabonacci(int n, int a = 0, int b = 1){
    if (n == 0){
        return;
    } else {
        cout<<a<<" ";
        fabonacci(n-1, b, a+b);
    }
}

int main(){

    cout << "This is recursion" << endl;
    int arr[] = {1, 2, 3, 4, 5};
    
     int n;
     cout<<"Enter a number: ";
     cin>>n;

     string s;
     cout<<"Enter a string: ";
     cin>>s;

     cott(n);
     name(n);
     printNto1(n);
     sum(1, n, 0);
     multiply(1, n, 1);
     arrayswap(0, 4, arr);
     for(int i = 0; i < 5; i++){
         cout << arr[i] << " ";
     }
     cout << endl;

     palindrome(s, 0, s.length() - 1);

     fabonacci(n);

     return 0;


}