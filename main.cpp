#include "SomeClass.h"

#include <iostream>

using namespace std;

int main()
{
    SomeClass obj1;
    for (size_t i = 0; i < obj1.serialize("some_file.txt").size(); ++i)
        cout << obj1.serialize("some_file.txt").at(i);
    
    return 0;
}