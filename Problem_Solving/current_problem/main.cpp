#include<bits/stdc++.h>
using namespace std;

// Macro to optimize input/output operations
#define egry ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// Macro to define long long as ll for convenience
#define ll long long

// Function to handle input/output file redirection
void io_handler() {
    #ifndef ONLINE_JUDGE
    // Redirect input from "input.txt" and output to "output.txt"
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}


int main() {
    // Call the function to handle I/O redirection
    io_handler();
    
    // Optimize I/O
    egry;

    int t;
    cin >> t;
    while(t--){


        string str;
        cin >> str;
        
        int str_length = str.length();

        int a_count = 0;
        int b_count = 0;
        for (int i = 0; i < str_length; i++){
            if(str[i] == 'A') a_count++;
            else b_count++;
        }

        a_count > b_count? cout << 'A': cout << 'B';
        cout << endl;
        
    }

    return 0;
}