#include<iostream>
using namespace std;

#define N 4

//print the maze with solution path
void solution(int sol[N][N])
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout<<sol[i][j]<<" ";
        }
        cout<<"\n";
    }
}

//check validity of the x,y index
bool valid(int maze[N][N],int x, int y)
{
    //x,y outside maze then invalid
    if(x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1)
        return true;
    
    return false;
}

//recursively find the maze solution
bool maze_backtrack(int maze[N][N], int x, int y, int sol[N][N])
{
    // if x,y is the final point return true
    if(x == N - 1 && y == N - 1)
    {
        sol[x][y] = 1;
        return true;
    }

    //checkif maze[x][y] is valid
    if(valid(maze, x, y) == true)
    {
        //mark x,y as the solution
        sol[x][y] = 1;
        //move in x direction
        if(maze_backtrack(maze, x + 1, y, sol) == true)
            return true;
        //if x does not give the solution
        if(maze_backtrack(maze, x, y + 1, sol) == true)
            return true;
        //if both direction does not give solution backtrack
        //and unmark x,y as part of sol path
        sol[x][y] = 0;
        return false;
    }
    return false;
}

bool solve(int maze[N][N])
{
    int sol[N][N] = {{0, 0, 0, 0},
                    {0, 0, 0, 0},
                    {0, 0, 0, 0}};
    if(maze_backtrack(maze, 0, 0, sol) == false)
    {
        cout<<"Solution does not exist\n";
        return false;
    }

    solution(sol);
    return true;
}

int main()
{
    int maze[N][N]  =  { {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };

    solve(maze);
    return 0;
}