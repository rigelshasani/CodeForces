#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    int total = 0;
    int finaltotal = 0;
    cin >> n;
    //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // loop thru the input length
    for (auto i = 0; i < n; i++)
    {
        //cout << "---Beginning for each INPUT test: -----------------------" << endl;
        vector<int> choice1;
        //loop through the 3 students
        for (auto i = 0; i < 3; i++)
        {
            //cout << "Beginning for each element test: -----------------------" << endl;
            int input;
            cin >> input;
            choice1.push_back(input);
            //now we have the elements 1 1 0 into the vector
            //cout << "1's found: " << sum << " ";
            //cout << endl;
            // if(sum > 1){
            //     total++;
            // }
            // if(total >= 1){
            //     finaltotal++;
            // }
            // cout << "Total is: " << total << " " << endl;
            //cout << "Ending for each element test: ---------------------------" << endl;
        }//end loop of students  
        for(int& j : choice1){
            if(j==1){
                sum++;
            }
            //cout << total << " ";
        }     
        if(sum > 1){
                total++;
            }
        sum = 0;
        //cout << "---ENDING for each INPUT test: -----------------------" << endl;

    }// end loop of input length
    cout << total << "\n";
}//end main
