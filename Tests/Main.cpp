#include <iostream>

#include "Containers/StringTests.h"
#include "Containers/VectorTests.h"
#include "Containers/ListTests.h"
#include "Containers/HashMapTests.h"
#include "Containers/PairTests.h"

int main(){
    // Running the String tests:
    // testCaveString();    

    std::cout << "\n";
    // Running the Vector tests:
    testCaveVector();
    testCaveVectorBehavior();

    std::cout << "\n";
    // Running the Linked List tests:
    testCaveList();
    testCaveListIterator();

    std::cout << "\n";
    // Running the Pair tests:
    testCavePair();

    std::cout << "\n";
    // Running the Hash Map (unordered_map) tests:
    testCaveHashMap();
    testCaveHashMapBehavior();


    std::cout << "\n";
    std::cout << "------------------------------------\n";
    std::cout << "  TESTING PERFORMANCE AGAINST STD:  \n";
    std::cout << "------------------------------------\n";

    std::cout << "\n";
    testStringPerformance();

    std::cout << "\n";
    testListPerformance();

    std::cout << "\n";
    testVectorPerformance();

    std::cout << "\n";
    testHashMapPerformance();
    
    return 0;
}