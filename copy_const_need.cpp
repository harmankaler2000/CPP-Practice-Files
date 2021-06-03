//when is copy constructor needed
#include<iostream>
#include<cstring>
using namespace std;

class String
{
    char *s;
    int size;
    public:
    String(const char *str = NULL); //constructor
    //destructor
    ~String()
    {
        delete [] s;
    }
    //copy constructor
    //if we don't use copy constructor the changes in str2 will be reflected in str1
    String(const String&);
    //function to print string
    void print()
    {
        cout<<s<<endl;
    }
    //function to change
    void change(const char *);
};

String::String(const char *str)
{
    size = strlen(str);
    s = new char[size + 1];
    strcpy(s, str);
}

void String::change(const char *str)
{
    delete [] s;
    size = strlen(str);
    s = new char[size + 1];
    strcpy(s, str);
}

String::String(const String& old_str)
{
    size = old_str.size;
    s = new char[size + 1];
    strcpy(s, old_str.s);
}

int main()
{
    String str1("ABC");
    String str2 = str1;

    str1.print();
    str2.print();

    str2.change("CDE");

    str1.print();
    str2.print();
}
/*
https://www.geeksforgeeks.org/copy-elision-in-c/
https://www.geeksforgeeks.org/copy-constructor-argument-const/
https://www.geeksforgeeks.org/copy-constructor-in-cpp/
https://www.geeksforgeeks.org/friend-class-function-cpp/
https://www.geeksforgeeks.org/constructors-c/
https://www.geeksforgeeks.org/c-classes-and-objects/
*/