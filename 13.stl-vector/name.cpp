#include <iostream>
#include <vector>
using namespace std;

/*
1. initiate
2. length check
3. index wise accessing item
4.


*/

void printVector(const vector<int> &vec)
{
        for (const int &num : vec)
        {
                cout << num << ", ";
        }
        cout << endl;
}

int main()
{
        //  initialization
        vector<int> empty_vector;
        vector<int> vector_with_initial_values = {1, 2, 3};
        vector<int> vector_with_specific_size(5, 0); // 5 elements, each initialized to 0

        // getting size of vector
        cout << "size : empty_vector:  " << empty_vector.size() << "\n";
        cout << "size : vector_with_initial_values:  " << vector_with_initial_values.size() << "\n";
        cout << "size : vector_with_initial_values:  " << vector_with_specific_size.size() << "\n";
        cout << endl;

        // adding elements
        empty_vector.push_back(10); // push_back(value): adds an element at the end
        empty_vector.push_back(20);
        empty_vector.push_back(30);
        cout << "after adding to empty vec: ";
        printVector(empty_vector);
        cout << endl;

        // accessing element by index
        cout << "element at ind:0 " << empty_vector[0] << endl;
        cout << "element at ind: [3] " << empty_vector[3] << endl;      // no bound check for: [index]
        cout << "element at ind: at(3) " << empty_vector.at(2) << endl; // throws - 'std::out_of_range' if index > (size-1)
        cout << endl;

        // get value from end index
        cout << "end ind of: vector_with_initial_values : "  << *(vector_with_initial_values.end() - 1) << endl;

        // adding value at specific position
        empty_vector.insert(empty_vector.begin() + 2, 50); // insert(position, value)    begin gives first index:0
        empty_vector.insert(empty_vector.end() - 1, 150);  // insert(position, value)    end - gives end index
        cout << "after adding to specific position: ";
        printVector(empty_vector);
        cout << endl;

        // deleting an element from a specific position
        empty_vector.erase(empty_vector.begin() + 2); // erase element at position 2 (third element)
        cout << "After deleting element at index 2: ";
        printVector(empty_vector);
        cout << endl;

        // replacing an element at a specific position
        empty_vector[1] = 25; // Replace element at position 1 with 25
        cout << "After replacing element at index 1 with 25: ";
        printVector(empty_vector);

        // clearing the vector
        empty_vector.clear();
        cout << "After clearing the vector, size is: " << empty_vector.size() << endl;

        return 0;
}
