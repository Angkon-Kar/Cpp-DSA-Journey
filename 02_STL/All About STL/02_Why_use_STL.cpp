//  02_Generic_Programming_Why_Use_STL.cpp
/*  
    * File: 02_Generic_Programming_Why_Use_STL.cpp
    * -------------------------------------------
    * In C++, generic programming is a powerful paradigm that allows you to write code that works with any data type. The Standard Template Library (STL) is a prime example of this, providing a collection of template classes and functions that can be used with any type that meets certain requirements.

    🌐 Why Generic Programming?
Generic programming is about writing algorithms and data structures that work with any type, without rewriting code for each type. Instead of coding a sorting function for int, double, and string separately, you write one template-based function that works for all.
Reusability: One implementation serves multiple types.
Type Safety: Templates ensure correctness at compile time.
Performance: Unlike dynamic polymorphism (via inheritance), templates are resolved at compile time, so there’s no runtime overhead.
Flexibility: You can adapt algorithms to custom types as long as they support required operations (like < for sorting).



    📚 Why Use STL?
The STL is the practical application of generic programming in C++. It provides ready-made, efficient, and well-tested components.
Key Benefits:

Containers: Prebuilt data structures like vector, list, map, set.
Algorithms: Functions like sort, find, accumulate that work seamlessly with containers.
Iterators: A uniform way to traverse containers, making algorithms container-independent.
Efficiency: STL implementations are highly optimized and tested.
Consistency: Unified design—once you learn one container/algorithm, you can apply the same logic to others.

*/

    
//⚡ Example
// Instead of writing your own sorting function:

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {5, 2, 9, 1, 5, 6};
    sort(nums.begin(), nums.end()); // Generic sort works for any comparable type

    for (int n : nums) cout << n << " ";
}


// This works for int, double, string, or even custom classes (if you define comparison operators).

//🎯 Bottom Line
//Generic programming = write once, use everywhere.
//STL = a treasure chest of generic, efficient, and reliable tools.
//It saves you from reinventing the wheel, ensures performance, and makes your code cleaner and more maintainable.