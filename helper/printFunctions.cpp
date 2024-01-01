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
void print_queue(queue<T> queue2){
    queue<T> queue = queue2;
    while(!queue.empty()){
        for(int i=0; i < queue.size();i++){
            cout << queue.front() << " ";
            queue.pop();
        }
    }
}