#include<iostream>
using namespace std;

/*
No memory leak. Out of scope automatically calls deconstructor 
afo the unique_pt, freeing resource
void no_mem_leak()
{
    unique_ptr<MyClass> pMc(new MuClass);
    pMc->DoSomeWok();
}
*/

//hiding names with global scopes
int global_var = 7; //it has global scope, outside all blocks

//hiding class names
class Account
{
    public:
    double balance;
        Account(double Initial)
        {
            balance = Initial;
        }
        double GetBalance()
        {
            return balance;
        }
};
double Account = 15.37; //hide class name Account
//hiding variable names
//a is considered to be declared in the outermost block of the function
void func(int *a)
{
    //local scope of function 
    int i = 0;
    cout<<"i = "<<i<<"\n";
    {
        //hiding the previous value of i using {} as a local block
        //hence i has local scope for this {}
        int i = 7, j = 9;
        cout<<"i = "<<i<<" j = "<<j<<"\n";
    }
    cout<<"i= "<<i<<"\n";
}

int main()
{
    //defining variables differently
    int result = 0;              // Declare and initialize an integer.
    double coefficient = 10.8;   // Declare and initialize a floatingpoint value.
    auto name = "Lady G.";       // Declare a variable and let compiler deduce the type.
    //auto address;                // error. Compiler cannot deduce a type without an intializing value.
    //age = 12;                    // error. Variable declaration must specify a type or use auto!
    //result = "Kenny G.";         // error. Can’t assign text to an int.
    string result = "zero";      // error. Can’t redefine a variable with new type.
    int maxValue;                // Not recommended! maxValue contains garbage bits until it is initialized.

    const double PI = 3.1415; //cannot be modified afterwards
    //PI = .75 //error

    //pointers
    //int* pNum;
    //*pnum = 10; //error cannot dereference a pointer that was never initialized.
    int num = 10;
    int* pNum = &num;
    *pNum = 41; //works
    func(pNum);

    /*
    Any place the class name (Account) is called for, the keyword 
    class must be used to differentiate it from the global-scoped 
    variable Account. This rule does not apply when the class name 
    occurs on the left side of the scope-resolution operator (::). 
    Names on the left side of the scope-resolution operator are always 
    considered class names.
    */
    class Account Checking(Account); //qualifies account as class name;
    cout << "Opening account with a balance of: "<< Checking.GetBalance() << "\n";
    //output is 15.37
    //pointer to an object of type account using class keyword
    class Account *Checking1 = new class Account(Account);

    //global has local scope hides global at global scope
    int global_var = 5;
    cout<<"Block-scoped i: "<<global_var<<"\n"; //5
    cout<<"Global-scoped i: "<<::global_var<<"\n"; //7

    //declarations
    /*
    int i;
    int f(int x);
    class C;
    */

    //definitions
    /*
    int i{42};
    int f(int x){return x*i;}
    class C{
        public: void DoSomething();
    }
    */
    return 0;
}