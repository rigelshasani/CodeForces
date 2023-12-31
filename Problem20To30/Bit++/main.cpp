#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int numberOfOperations;
    cin >> numberOfOperations;
    string command;
    vector<string> operations;
    while (numberOfOperations--)
    {
        cin >> command;
        operations.push_back(command);
    }
    int bit = 0;
    for (int i = 0; i < operations.size(); i++)
    {

        int totalSize = 0;
        for (int j = 0; j < 3; j++)
        {
            totalSize += operations[i][j];
        }

        if (totalSize == 174)
        {
            bit++;
        }
        else
        {
            bit--;
        }
    }
    cout << bit;
}