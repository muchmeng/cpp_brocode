#include <iostream>

// int main(){
//     // dynamic memory = Memory that is allocated after the program is already compiled & running.
//     // Use the 'new' operator to allocate memory in the heap rather than the stack
//     // Useful when we don't know how much memory we will need. Makes our programs more flexible, especially when accepting user input.

//     int *pNum = NULL;
//     pNum = new int;
//     *pNum = 21;

//     std::cout << "Address: " << pNum << "\n";
//     std::cout << "Value: " << *pNum << "\n";

//     delete pNum; //if the address is not used, free that memory in the heap (new with delete)

//     return 0;
// }

int main(){
    char *pGrades = NULL;
    int size;

    std::cout << "How many grades to enter in? ";
    std::cin >> size;

    pGrades = new char[size];

    for (int i = 0; i < size; i++){
        std::cout << "Enter grade #" << i+1 << ": ";
        std::cin >> pGrades[i];
    }

    for(int i = 0; i < size; i ++){
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades; //when deleting array, delete[]

    return 0;
}