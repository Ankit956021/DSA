#include <iostream> 
using namespace std;


void pattern1(int n){
     for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern3(int n){
    for(int i=1 ; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern4(int n){
    for(int i=1 ; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void pattern5(int n){
    for(int i=1; i<=n; i++){
        for(int j=0; j<n-i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}


void pattern6(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


void pattern7(int n){
    for(int i=0 ; i<n ; i++){
        //space
        for(int j=0 ; j<n-i+1 ; j++){
            cout<<"  ";
        }
        //star
        for(int j=0 ; j< 2*i+1 ; j++){
            cout<<"* ";
        }
        //space
        for(int j=0 ; j<n-i+1 ; j++){
            cout<<"  ";
        }
        
        cout<<endl;
    }
}

void pattern8(int n){
    for(int i=0 ; i<n ; i++){
        //space
        for(int j=0 ; j<i ; j++){
            cout<<"  ";
        }
        //star
        for(int j=0 ; j< 2*n -(2*i + 1 ) ; j++){
            cout<<"* ";
        }
        //space
        for(int j=0 ; j<i ; j++){
            cout<<"  ";
        }
        
        cout<<endl;
    }
}

void pattern9(int n){
    for(int i=1 ; i<= 2 * n - 1 ; i++){
        int stars = i;
        if(i > n){
            stars = 2 * n - i;
    }
    for(int j=1 ; j<=stars ; j++){
        cout<<"* ";
    }
    cout<<endl; 
}
}

void pattern10(int n){
    for ( int i = 0; i <= n ; i++){
        int start = 1;
        if ( i % 2 == 0){
            start = 1;
        }
        else{
            start = 0;
        }
        for ( int j = 0; j < i ; j++){
            cout<< start <<" ";
            start = 1 - start;
        }   
        cout<<endl;

    }
}


void pattern11(int n){
    for ( int i = 1 ; i <= n ; i++){

        for ( int j = 1 ; j <= i ; j++){
            cout<< j;
        }

        for ( int j = 1 ; j <= 2*(n-i) ; j++){
            cout<<" ";
        }


        for ( int j = i ; j >= 1 ; j--){
            cout<< j;
        }

        cout<<endl;
    }
    
        
}


void pattern12(int n){
    int num = 1; 
    for ( int i = 1 ; i <= n ; i++){

        for ( int j = 1 ; j <= i ; j++){
            cout<< num <<" ";
            num++;
        }

        cout<<endl;
        
    }
}
    
void pattern13(int n){
    for ( int i = 1 ; i <= n ; i++){
        for ( char j = 'A' ; j < 'A' + i ; j++){
            cout<< j <<" ";
        }
        cout<<endl;
    }
}

void pattern14(int n){
    for ( int i = 0 ; i < n ; i++){
        for ( char j = 'A' ; j < 'A' + (n-i) ; j++){
            cout<< j <<" ";
        }
        cout<<endl;
    }
}


void pattern15(int n){
    for ( int i = 0 ; i < n ; i++){
        char ch = 'A' + i;
        for ( int j = 0 ; j <= i ; j++){
            cout<< ch <<" ";
        }
        cout<<endl;
    }
}

// Prints: E D, E D C, E D C B, E D C B A (descending)
void pattern16(int n){
    for ( int i = 1 ; i <= n ; i++){
        for ( char j = 'E' ; j >= 'E' - i + 1 ; j--){
            cout<< j <<" ";
        }
        cout<<endl;
    }
}

// Prints: E, D E, C D E, B C D E, A B C D E (ascending to E)
void pattern17(int n){
    for ( int i = 0 ; i < n ; i++){
        char start = 'A' + (n - 1) - i;  // Start char: E, D, C, B, A
        for ( char j = start ; j <= 'A' + (n - 1) ; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

// Prints: A, ABA, ABCBA, ABCDCBA (palindrome alphabet triangle)
void pattern18(int n){
    for ( int i = 0 ; i < n ; i++){
        // spaces
        for ( int j = 0 ; j < n - i - 1 ; j++){
            cout << "  ";
        }
        // A to middle char (A, AB, ABC, ABCD)
        char ch = 'A';
        for ( int j = 0 ; j <= i ; j++){
            cout << ch << " ";
            ch++;
        }
        // middle char back to A (BA, CBA, DCBA) - skip the middle
        ch = ch - 2;  // go back one step (skip the peak)
        for ( int j = 0 ; j < i ; j++){
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
}


void pattern19(int n){
    int s = 0;
    for ( int i = 0 ; i < n ; i++){
        //star
        for (int j = 0 ; j < n - i ; j++){
            cout << "* ";
        }
        //space
        for ( int j = 0 ; j < s ; j++){
            cout << "  ";
        }
        //star
        for ( int j = 0 ; j < n - i ; j++){
            cout << "* ";
        }
        s += 2; // increase space by 2 for next row   
        cout << endl;
    }
    int s2 = s;
    for ( int i = 0 ; i < n ; i++){
        //star
        for (int j = 0 ; j <= i ; j++){
            cout << "* ";
        }
        //space
        for ( int j = 0 ; j < s2 ; j++){
            cout << "  ";
        }
        //star
        for ( int j = 0 ; j <= i ; j++){
            cout << "* ";
        }
        s2 -= 2; // decrease space by 2 for next row   
        cout << endl;
    }
}

// Hollow Diamond Pattern
void pattern20(int n){
    int s = 0;
    
    // Top half (decreasing stars, increasing spaces)
    for ( int i = 0 ; i < n ; i++){
        //left stars
        for (int j = 0 ; j < n - i ; j++){
            cout << "* ";
        }
        //middle space
        for ( int j = 0 ; j < s ; j++){
            cout << "  ";
        }
        //right stars
        for ( int j = 0 ; j < n - i ; j++){
            cout << "* ";
        }
        s += 2;
        cout << endl;
    }
    
    // Bottom half (increasing stars, decreasing spaces)
    for ( int i = 0 ; i < n ; i++){
        //left stars
        for (int j = 0 ; j <= i ; j++){
            cout << "* ";
        }
        //middle space - start from s-2 and decrease
        int spaces = s - 2 * (i + 1);
        for ( int j = 0 ; j < spaces ; j++){
            cout << "  ";
        }
        //right stars
        for ( int j = 0 ; j <= i ; j++){
            cout << "* ";
        }
        cout << endl;
    }
}


int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    pattern20(n);
    
    return 0;

}
