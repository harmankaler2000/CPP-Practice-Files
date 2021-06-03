#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void longest_one(int arr[],int row, int column)
{
      
    int check_row, check_column, max_one = 0;
    for(int i =0; i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            if(i == 0)
            {
                //value at the upper row for same column
                check_row = 0;
            }
            else
            {
                check_row = arr[(i-1) * column + j];
            }

            //same for columns
            if(j==0)
            {
                check_column = 0;
            }
            else
            {
                //check previous column value
                check_column = arr[i* column + j - 1];
            }
            //initialize the max value gotten from up ad left
            //as the one which is max is where the path continues
            //and become right or down movement from them
            //this takes place only if it is 1
            if(arr[i*column + j] == 1)
            {
                arr[i*column + j]=max(check_column,check_row) + 1;
            }
            //else 0 
            else
            {
                arr[i*column + j]= 0;
            }
            //update the count of 1
            max_one = max(max_one,arr[i*column + j]);
        }
    }

    //print the matrix
    cout<<"The matrix was: \n";
    for(int i=0;i<row;i++)
    {
        for(int j =0;j<column;j++)
        {
            cout<<arr[i*column + j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The maximum path of 1 built is: "<<max_one<<endl;
    //print the path
    cout<<"The path taken was the indexes: \n";
    int row1=row,col1=column;
    for(int i = row - 1;i>=0;--i)
    {
        for(int j = column-1;j>=0;--j)
        {
            if(arr[i*column + j]==max_one && i<=row1 && j<=col1)
            {
                cout<<"["<<i<<","<<j<<"]"<<endl;
                //reduce the max_one,col1 and row1 
                //to backtrack the path taken
                max_one--;
                row1--;
                col1--;
            }
        }
    }
    return;
}

int main()
{
    //test cases
    int a1[1][1]={1}; //1
    longest_one(&a1[0][0],1,1);
    int a2[1][1]={0}; //return 0
    longest_one(&a2[0][0],1,1);
    int a3[5][5]={{0,1,0,0,1},
                  {1,1,0,1,0},
                  {0,1,0,1,0},
                  {1,1,0,0,0},
                  {1,1,1,1,1}}; //return 8
    longest_one(&a3[0][0],5,5);
    int a4[5][5] = {{0, 0, 0, 1, 1}, 
                    {1, 1, 1, 0, 1}, 
                    {0, 1, 1, 1, 0}, 
                    {0, 0, 1, 0, 0}, 
                    {1, 1, 1, 1, 1}};//return 8
    longest_one(&a4[0][0],5,5);
    int a6[5][5] = {{1, 1, 1, 1, 1}, 
                    {1, 1, 1, 1, 1}, 
                    {1, 1, 1, 1, 1},
                    {1, 1, 1, 1, 1},
                    {1, 1, 1, 1, 1}}; //return 9
    longest_one(&a6[0][0],5,5);
    int a7[5][5] = {{1, 1, 0, 1, 1}, 
                    {0, 1, 1, 0, 1}, 
                    {1, 0, 0, 0, 0}, 
                    {1, 1, 0, 1, 1}, 
                    {1, 1, 1, 1, 1}};//return 7
    longest_one(&a7[0][0],5,5);
    int a8[5][5] = {{0, 0, 0, 0, 0}, 
                    {0, 0, 0, 0, 0}, 
                    {0, 0, 0, 0, 0}, 
                    {0, 0, 0, 0, 0}, 
                    {0, 0, 0, 0, 0}};//return 0;
    longest_one(&a8[0][0],5,5);
}