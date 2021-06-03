#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

//program to showcase pair

int main()
{
    pair<int,char> pair1;
    pair1.first = 100;
    pair1.second = 'G';
    cout<<pair1.first<<" ";
    cout<<pair1.second<<endl;
    pair<string,double> pair2("abc",1.23);
    cout<<pair2.first<<" ";
    cout<<pair2.second<<" ";

    pair<int,double> p1;
    pair<string,double> p2;

    //it is initialized to 0
    cout<<p1.first<<endl;
    cout<<p1.second<<endl;
    //prints nothing i.e. NULL
    cout<<p2.first<<endl;
    cout<<p2.second<<endl;

    //using make_pair()
    pair<int,char> pa1;
    pair<string,double> pa2 ("A",1.23);
    pair<string,double> pa3;

    pa1.first = 100;
    pa1.second='G';

    pa3 = make_pair("ABC",4.56);
    
    cout<<pa1.first<<" ";
    cout<<pa1.second<<endl;

    cout<<pa2.first<<" ";
    cout<<pa2.second<<endl;

    cout<<pa3.first<<" ";
    cout<<pa3.second<<endl;

    //operators =,==,!=,>=,<=
    pair<char,int> PAIR1 = make_pair('A',1);
    pair<char,int> PAIR2 = make_pair('B',2);

    cout<<"Before swapping: \n";
    cout<<"Contents of pair1= "<<PAIR1.first<<" "<<PAIR1.second<<endl;
    cout<<"Contents of pair2= "<<PAIR2.first<<" "<<PAIR2.second<<endl;

    //swapping using the swap function
    PAIR1.swap(PAIR2);

    cout<<"After swapping: "<<endl;
    cout<<"Contents of pair1: "<<PAIR1.first<<" "<<PAIR2.second<<endl;
    cout<<"Contents of pair2= "<<PAIR2.first<<" "<<PAIR2.second<<endl;
    
    //using the tie function
    pair<int,int> PA1 = {1,2};
    int a,b;
    tie(a,b) = PA1;
    cout<<a<<" "<<b<<"\n";

    pair<int,int> PA2 = {3,4};
    tie(a,ignore) = PA2;

    //prints old value of b
    cout<<a<<" "<<b<<"\n";

    //pair of pairs
    pair<int,pair<int,char>> PA3 = {3,{4,'a'}};
    int x,y;
    char z;

    //tie(x,y,z) = pair3; gives compilation error
    //tie(x,tie(y,z)) = pair3; gives compilation error
    //each pair needs to be explicitly
    x = PA3.first;
    tie(y,z) = PA3.second;
    cout<<x<<" "<<y<<" "<<z<<"\n";

    //revision of pair
    pair <string, int> g1; 
    pair <string, int> g2("Quiz", 3); 
    pair <string, int> g3(g2); 
    pair <int, int> g4(5, 10); 
  
    g1 = make_pair(string("Geeks"), 1); 
    g2.first = ".com"; 
    g2.second = 2; 
  
    cout << "This is pair g" << g1.second << " with "
        << "value " << g1.first << "." << endl << endl; 
  
    cout << "This is pair g" << g3.second 
        << " with value " << g3.first 
        << "This pair was initialized as a copy of "
        << "pair g2" << endl << endl; 
  
    cout << "This is pair g" << g2.second 
        << " with value " << g2.first 
        << "\nThe values of this pair were"
        << " changed after initialization."
        << endl << endl; 
  
    cout << "This is pair g4 with values "
        << g4.first << " and " << g4.second 
        << " made for showing addition. \nThe "
        << "sum of the values in this pair is "
        << g4.first+g4.second 
        << "." << endl << endl; 
  
    cout << "We can concatenate the values of"
        << " the pairs g1, g2 and g3 : "
        << g1.first + g3.first + g2.first  
        << endl << endl; 
  
    cout << "We can also swap pairs "
        << "(but type of pairs should be same) : " 
        << endl; 
    cout << "Before swapping, " << "g1 has " 
         << g1.first 
        << " and g2 has " << g2.first << endl; 
    swap(g1, g2); 
    cout << "After swapping, "
        << "g1 has " << g1.first << " and g2 has " 
        << g2.first; 
    return 0;
}