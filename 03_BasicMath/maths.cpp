#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;

int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

int printAllDivisors(int n) {
    cout << "Divisors of " << n << ": ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}

int Printalldevisors(int n){
    vector<int> divisors;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            divisors.push_back(i);
            if(i != n / i){
                divisors.push_back(n / i);
            }
        }
    }
    sort(divisors.begin(), divisors.end());
    cout << "Divisors of " << n << ": ";
    for(int d : divisors){
        cout << d << " ";
    }
    cout << endl;
    return 0;
}

bool checkPrime(int n) {
    int cnt = 0;  // Initialize a counter variable to count the number of factors.

    // Loop through numbers from 1 to n.
    for (int i = 1; i <= n; i++) {
        // If n is divisible by i without any remainder.
        if (n % i == 0) {
            cnt++;  // Increment the counter.
        }
    }

    // If the number of factors is exactly 2 (1 and the number itself), it's prime.
    if (cnt == 2) {
        return true;
    }
    // If the number of factors is not 2, it's not prime.
    else {
        return false;
    }
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int hcf(int a, int b) {
    return gcd(a, b);
}



int main(){
    cout<<"this is maths"<<endl;

    cout<<"Enter a number: ";
    int a;
    cin>>a;

    int original = a; // Store original input

    int digitCount = 0;
    int reverse = 0;

    int temp = a;
    int armstrong = 0;
    while (temp > 0)
    {
        int lastnum = temp % 10;
        cout << lastnum << " " << endl;
        reverse = (reverse * 10) + lastnum;
        armstrong += pow(lastnum, countDigits(a));
        temp = temp / 10;
    }
    cout << "Number of digits: " << countDigits(a) << endl;
    cout << "Reversed number: " << reverse << endl;

    if (armstrong == original) {
        cout << original << " is an Armstrong number." << endl;
    } else {
        cout << original << " is not an Armstrong number." << endl;
    }

    // Palindrome check: if the reversed number equals the original, it's a palindrome
    if (reverse == original) {
        cout << original << " is a palindrome." << endl;
    } else {
        cout << original << " is not a palindrome." << endl;
    }

    printAllDivisors(a);

    cout<<"------------------"<<endl;

     Printalldevisors(a);

     bool isPrime = checkPrime(a);

     if (isPrime) {
        cout << a << " is a prime number." << endl;
    } else {
        cout << a << " is not a prime number." << endl;
    }


    cout<<"------------------"<<endl;

     int b;
     cout<<"Enter another number: ";
     cin>>b;

     cout<<"GCD of "<<a<<" and "<<b<<" is: "<< gcd(a, b) << endl;

     cout<<"HCF of "<<a<<" and "<<b<<" is: "<< hcf(a, b) << endl;

    return 0;
}