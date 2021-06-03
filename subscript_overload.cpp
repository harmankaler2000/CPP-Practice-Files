#include<iostream>
using namespace std;

class Array
{
    private:
        int *ptr;
        int size;
    public:
        Array(int* p = NULL, int s = 0)
        {
            size = s;
            ptr = NULL;
            if(s != 0)
            {
                ptr = new int[s];
                for(int i = 0; i < s; i++)
                    ptr[i] = p[i];
            }
        }
        
        int& operator[] (int index)
        {
            if(index >= size)
            {
                cout<<"Array index out of bound, exit\n";
                exit(0);
            }

            return ptr[index];
        }

        void print() const
        {
            for(int i = 0; i < size; i++)
            {
                cout<<ptr[i]<<" ";
            }
            cout<<endl;
        }
};


int main()
{
    int a[] = {1, 2, 3, 4, 5};
    Array arr1(a, 4);
    arr1[2] = 6;
    arr1.print();
    arr1[8] = 6;
    return 0;
}

//negative subscripts
// #include <iostream>
// using namespace std;
  
// // Driver Method
// int main()
// {
//     int intArray[1024];
//     for (int i = 0, j = 0; i < 1024; i++) {
//         intArray[i] = j++;
//     }
  
//     // 512
//     cout << intArray[512] << endl;
  
//     // 257
//     cout << 257 [intArray] << endl;
  
//     // pointer to the middle of the array
//     int* midArray = &intArray[512];
  
//     // 256
//     cout << midArray[-256] << endl;
  
//     // unpredictable, may crash
//     cout << intArray[-256] << endl;
// }