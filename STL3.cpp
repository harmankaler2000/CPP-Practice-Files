#include<iostream>
#include<vector>
using namespace std;

//find all possible sums in the arrays
void cummulative_sum(int arr1[],int arr2[],int n)
{
    //vectors to record each sum
    vector<int> sum_arr1, sum_arr2;
    //initial sums will be 0
    sum_arr1.push_back(0);
    sum_arr2.push_back(0);
    //values to store temp sum after each element
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        sum1+=arr1[i];
        sum_arr1.push_back(sum1);
        sum2+=arr2[i];
        sum_arr2.push_back(sum2);
    }
    //condition is: sum of elements between i and j is equal
    //to the length between i and j is maximum
    int max_len = 0, i = 0, j = 0;
    for(int x = 0;x < n; ++x)
    {
        for(int y = x; y < n + 1; ++y)
        {
            if((sum_arr2[y] - sum_arr2[x] == sum_arr1[y] - sum_arr1[x]) && ((y - x) > max_len))
            {
                max_len = y - x;
                //reset the value of i and j
                i = x;
                j = y;
            }
        }
    }
    j--;
    if(i < j)
    {
        //i < j to check if it is not the same index
        cout<<"Combination found i is: "<<i<<" j is: "<<j<<endl;
    }   
    else
    {
        cout<<"No such combination possible"<<endl;
    }
}
void print_result(int arr1[],int arr2[],int n)
{
    cout<<"Array 1 elements: \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    cout<<"Array 2 elements: \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    
    //find sum and possible i,j combinations
    cummulative_sum(arr1,arr2,n);
}

int main()
{
    //test cases
    int arr1[] = {0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0}; 
    int arr2[] = {1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 0};

    print_result(arr1, arr2, 11); // 

    int arr3[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; 
    int arr4[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

    print_result(arr3, arr4, 11); // no combination possible

    int arr5[] = {1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0}; 
    int arr6[] = {0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1};

    print_result(arr5, arr6, 11);

    int arr7[] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; 
    int arr8[] = {0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1};

    print_result(arr7, arr8, 11);

    int arr9[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}; 
    int arr10[] = {0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0};

    print_result(arr9, arr10, 11);
    return 0;
}