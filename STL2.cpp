#include <iostream>
#include<algorithm>
#include <vector>
#include <iterator>

using namespace std;

bool follow_k(vector<int>& combination, vector<string>& p, int M, int K)
{
    vector<bool> followers;

    for(int i = 0; i < p[combination[0]].size(); ++i){
        followers.push_back(p[combination[0]][i] == '1');
    }
    
    for(int i = 1; i < combination.size(); ++i){
         for(int j = 0; j < p[combination[i]].size(); ++j){
             if(p[combination[i]][j] == '1') followers[j] = true;
         }
    }

    int totalFollowers = 0;
    for(int i = 0; i < followers.size(); ++ i){
        totalFollowers += followers[i];
    }

    return (totalFollowers == K);
}

bool find_min_follow(vector<string>& p, int M, int K)
{
    cout<<"\n layer info: "<<endl;
    for(int i = 0; i < p.size(); ++i){
        cout << p[i] << endl;
    }

    cout << "N = " << p.size();
    cout << " M = " << p[0].size();
    cout << " K = " << K << endl;

    int length = p.size();

    for(int j = 1; j <= length; ++j){
        vector<bool> binary(length);
        fill(binary.begin() + j, binary.end(), true);

        do {
            vector<int> c;
            for (int i = 0; i < length; ++i)
            {
                if (!binary[i]) 
                    c.push_back(i);                  
            }
            if(follow_k(c, p, M, K)){
                cout << "The indices are ";
               copy(c.begin(), c.end(), ostream_iterator<int>(cout, ", "));   
                cout << "\nThe minimum num is " << c.size() << endl;
                return true;
            }

        } while (std::next_permutation(binary.begin(), binary.end()));
    }

    return false;
}

int main()
{
    vector<string> p;
    
    p.push_back("1111000");
    p.push_back("0001000");
    p.push_back("0000100");
    p.push_back("0000010");
    p.push_back("1000000");
    p.push_back("0100000");
    p.push_back("0010000");
    p.push_back("1100000");
    p.push_back("0011000");
    p.push_back("0000110");
    p.push_back("0000110");

    bool res ;
    res = find_min_follow(p, 7, 1);
    if(!res)
        cout<<"no combinations\n";
    res = find_min_follow(p, 7, 2);
    if(!res)
        cout<<"no combinations\n";
    res = find_min_follow(p, 7, 3);
    if(!res)
        cout<<"no combinations\n";
    res = find_min_follow(p, 7, 4);
    if(!res)
        cout<<"no combinations\n";
    res = find_min_follow(p, 7, 5);
    if(!res)
        cout<<"no combinations\n";
    res = find_min_follow(p, 7, 6);
    if(!res)
        cout<<"no combinations\n";
    res = find_min_follow(p, 7, 7);
    if(!res)
        cout<<"no combinations\n";
    return 0;
}