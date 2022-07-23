// Vectors in c++
// the vector can be of any data type

// push_back() inserts new element at the end
// pop_back() deletes the last element
// insert(iterator,datavalue) inserts element at any position in the array
#include <iostream>
#include <vector>

using namespace std;

template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++) // the size function returns the present size of vector
    {
        // cout<<v[i]<<" ";
        cout << v.at(i) << " "; // same as the above one
    }
    cout << endl;
}

int main()
{
    cout << "Hello World" << endl;
    vector<int> vec1;        // an array vec1 of type int is allocated, zero length integer vector
    vector<char> vec2(4);    // 4-element character vector
    vector<char> vec3(vec2); // 4-element character vector from vect2
    vector<int> vec4(6, 13); // 6-element vector of 3s

    display(vec1);
    display(vec2);
    display(vec3);
    display(vec4);

    int element, size;
    cout << "Enter the size of the vector" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter elements to insert: ";
        cin >> element;
        vec1.push_back(element); // entering data into the array using this defined function
    }
    display(vec1);   // calling display function
    vec1.pop_back(); // popping out the last element only
    display(vec1);

    vector<int>::iterator iter = vec1.begin(); // pointing iterator object iter to the beginning of the list
    vec1.insert(iter, 566);                    // inserting 566 at the location where iter is pointing
    display(vec1);

    vec1.insert(iter + 3, 69); // inserting 69 at the location where iter is pointing
    display(vec1);

    vec1.insert(iter + 3, 5, 699); // inserting 5 copies of 699 at the location where iter is pointing
    display(vec1);

    cout << vec4.size();
    return 0;
}