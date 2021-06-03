#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
  
    // Initialized vector 
    vector<int> v(10); 
  
    for (int i = 0; i < 10; i++) 
        v[i] = i; 
  
    // Initial vector 
    cout << "Vector size initially: " << v.size(); 
  
    cout << "\nVector elements are: "; 
    for (int i = 0; i < 10; i++) 
        cout << v[i] << " "; 
  
    // changes the size of the Vector 
    // but does not destroys the elements 
    v.resize(5); 
  
    cout << "\n\nVector size after resize(5): "
    << v.size(); 
  
    cout << "\nVector elements after resize(5) are: "; 
    for (int i = 0; i < 10; i++) 
        cout << v[i] << " "; 
  
    // Shrinks to the size 
    // till which elements are 
    // destroys the elements after 5 
    v.shrink_to_fit(); 
  
    cout << "\n\nVector size after shrink_to_fit(): "
    << v.size(); 
  
    cout << "\nVector elements after shrink_to_fit() are: "; 
    for (int i = 0; i < 10; i++) 
        cout << v[i] << " "; 
  
    return 0; 
} 