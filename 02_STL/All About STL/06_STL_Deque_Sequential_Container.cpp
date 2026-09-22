// 06_STL_Deque_Sequential_Container.cpp
//
// The C++ Standard Template Library
// Douglas C. Schmidt
// Vanderbilt University
// February 12, 2014
//
// STL Deque Sequential Container
// • A std::deque (pronounced "deck") is a double-ended queue
// • It adds efficient insertion & removal at the beginning & end of the sequence via push_front() & pop_front()

#include <deque>
#include <iostream>
#include <iterator> // For std::ostream_iterator
#include <algorithm> // For std::copy

int main() {
    std::deque<int> a_deck;

    // Add elements to the back
    a_deck.push_back(3);

    // Add elements to the front
    a_deck.push_front(1);

    // Insert at a specific position (index 1)
    a_deck.insert(a_deck.begin() + 1, 2);

    // Access and modify an element using index (random access)
    a_deck[2] = 0; // The deque is now {1, 2, 0, 3} -> after [2] = 0; it becomes {1, 2, 0, 3} -> this will make a_deck = {1, 2, 0, 3}
                  // Let's trace:
                  // 1. push_back(3): {3}
                  // 2. push_front(1): {1, 3}
                  // 3. insert(a_deck.begin() + 1, 2): {1, 2, 3}
                  // 4. a_deck[2] = 0: {1, 2, 0} (since 3 is at index 2, it becomes 0) -> this is incorrect. a_deck[2] will modify 3 to 0. So deque will be {1, 2, 0}.
                  // Let's re-evaluate after: a_deck.insert(a_deck.begin() + 1, 2); the deque is {1, 2, 3}.
                  // Then a_deck[2] = 0; changes the element at index 2 (which is 3) to 0.
                  // So the deque becomes {1, 2, 0}.

    // Copy elements to standard output using an ostream_iterator
    // The original slide output had spaces between elements, so using " " as a delimiter.
    std::copy(a_deck.begin(), a_deck.end(),
              std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl; // Add a newline for cleaner output

    return 0;
}

