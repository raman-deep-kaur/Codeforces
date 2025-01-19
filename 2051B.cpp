#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int tp;
    cin >> tp;
    
    while(tp--){
        int n, a, b, c;
        if (!(cin >> n >> a >> b >> c)) {
            return 0;  // Exit the program if inputs are not valid
        }
        
        int count = 0;  // Initialize count to 0
        
        // Calculate full cycles of (a + b + c)
        int sum = a + b + c;
        count = 3 * (n / sum);
        n = n % sum;  // Remaining n after full cycles
        
        // Handle the remaining n step by step (subtracting a, b, or c)
        if(n > 0) {
            ++count;
            n -= a;
        }
        if(n > 0) {
            ++count;
            n -= b;
        }
        if(n > 0) {
            ++count;
            n -= c;
        }
        
        // Output the result
        cout << count << endl;
    }
    
    return 0;
}
