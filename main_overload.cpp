#include <iostream>
using namespace std;
//this will give error
int main(int a)
{
    cout << a << "\n";
    return 0;
}
int main(char *a)
{
    cout << a << endl;
    return 0;
}
int main(int a, int b)
{
    cout << a << " " << b;
    return 0;
}
int main()
{
    main(3);
    main("C++");
    main(9, 6);
    return 0;
}

//main can not be overloaded