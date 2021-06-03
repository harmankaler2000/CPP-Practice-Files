//my_class.h

/*
Typically, header files have an include guard or a 
#pragma once directive to ensure that they are not 
inserted multiple times into a single .cpp file.
*/

#ifndef MY_CLASS_H //include guard
#define MY_CLASS_H
namespace N
{
    class my_class
    {
        public:
            void do_something();
    };
}

#endif /*MY_CLASS_H*/