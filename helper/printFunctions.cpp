#include <iostream>
using namespace std;
#include <vector>
#include <queue>

/*
    Use this in the beginning of the problem file you want to
    use it in:
    
    #include "../../helper/printFunctions.cpp"
*/


/*
    Print elements in templated queue(made for ints tbh)
    Changes the queue!!!
*/

template <typename T>

//print pop queue
void print_queue(queue<T>&  queue2){
    queue<T> queue = queue2;
    while(!queue.empty()){
        for(int i=0; i < queue.size();i++){
            cout << queue.front() << " ";
            queue.pop();
        }
    }
}

/*
    When you pass an array to a function, the array decays into a pointer
    So the sizeof operator returns the size of the pointer, not the array.
    To correctly iterate through the array, you need to give it the size from the caller.
*/

template <typename T>

void print_array(T* arr, int size){
    for(int i=0; i< size; i++){
        cout << arr[i] << " ";
    }
}

template <typename T>
void print_vector(const vector<T>& V)
{
   cout << "The numbers in the vector are: " << endl;
  for(int i=0; i < V.size(); i++)
    cout << V[i] << " ";
}
