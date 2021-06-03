//my_prog.cpp
#include "my_class.h"

using namespace N;

int main()
{
    my_class mc;
    mc.do_something();
    return 0;
}

/*
After the compiler finishes compiling each .cpp 
file into .obj files, it passes the .obj files 
to the linker. When the linker merges the object 
files it finds exactly one definition for my_class; 
it is in the .obj file produced for my_class.cpp, 
and the build succeeds.
*/