//
//  main.cpp
//  proyecto
//
//  Created by Leonardo Gonzalez on 23/05/22.
//

#include <iostream>
#include "Video.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    Video lunes;
    Video martes{"001", "Tequila", 100, "Comedia", 4.9};
    cout << lunes.str() << endl;
    cout << martes.str() << endl;
    std::cout << "Hello, World!\n";
    return 0;
}
