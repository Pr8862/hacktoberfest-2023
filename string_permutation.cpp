#include <iostream> 
using namespace std; 
void permute(string& a, int l, int r) 
{ 
    // Base case 
    if (l == r) 
        cout << a << endl; 
    else { 
        // Permutations made 
        for (int i = l; i <= r; i++) { 
  
            // Swapping done 
            swap(a[l], a[i]); 
  
            // Recursion called 
            permute(a, l + 1, r); 
  
            // backtrack 
            swap(a[l], a[i]); 
        } 
    } 
} 
  
// Driver Code 
int main() 
{   //ENTER THE STRING 
    string str;
    cin>>str; 
    int n = str.size(); 
  
    // Function call 
    permute(str, 0, n - 1); 
    return 0; 
} 
  
