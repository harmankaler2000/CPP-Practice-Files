#include <iostream>
#include<algorithm>
#include <vector>
#include <iterator>

using namespace std;

bool IsFollowersEqualK(vector<int>& indices, vector<string>& players, int M, int K)
{
    vector<bool> followers;

    for(int i = 0; i < players[indices[0]].size(); ++i){
        followers.push_back(players[indices[0]][i] == '1');
    }
    
    for(int i = 1; i < indices.size(); ++i){
         for(int j = 0; j < players[indices[i]].size(); ++j){
             if(players[indices[i]][j] == '1') followers[j] = true;
         }
    }

    int totalFollowers = 0;
    for(int i = 0; i < followers.size(); ++ i){
        totalFollowers += followers[i];
    }

    return (totalFollowers == K);
}

bool FindMinFollowersEqualK(vector<string>& players, int M, int K)
{
    int N = players.size();

    for(int r = 1; r <= N; ++r){
        vector<bool> v(N);
        fill(v.begin() + r, v.end(), true);

        do {
            vector<int> combs;
            for (int i = 0; i < N; ++i) if (!v[i]) combs.push_back(i);                  

            if(IsFollowersEqualK(combs, players, M, K)){
                cout << "The indices are ";
               copy(combs.begin(), combs.end(), ostream_iterator<int>(cout, ", "));   
                cout << "\nThe minimum num is " << combs.size() << endl;
                return true;
            }

        } while (std::next_permutation(v.begin(), v.end()));
    }

    return false;
}


void DoTest(vector<string>& players, int M, int K)
{
    cout << "The players information are" << endl;
    for(int i = 0; i < players.size(); ++i){
        cout << players[i] << endl;
    }

    cout << "N = " << players.size();
    cout << " M = " << players[0].size();
    cout << " K = " << K << endl;

    if(!FindMinFollowersEqualK(players, M, K)){
        cout << "No combinations found" << endl;
    }

    cout << "-------------------------------" << endl;

}

int main(int argc, char* argv[])
{
    vector<string> players;
    
    players.push_back("1111000");
    players.push_back("0001000");
    players.push_back("0000100");
    players.push_back("0000010");
    players.push_back("1000000");
    players.push_back("0100000");
    players.push_back("0010000");
    players.push_back("1100000");
    players.push_back("0011000");
    players.push_back("0000110");
    players.push_back("0000110");

    DoTest(players, 7, 1);
    DoTest(players, 7, 2);
    DoTest(players, 7, 3);
    DoTest(players, 7, 4);
    DoTest(players, 7, 5);
    DoTest(players, 7, 6);
    DoTest(players, 7, 7);
    return 0;
}