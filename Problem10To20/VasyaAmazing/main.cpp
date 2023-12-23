//https://codeforces.com/problemset/problem/155/A
#include <iostream>
#include <vector>
using namespace std;
template <typename T>

void write_vector(const vector<T>& V)
{
   cout << "The numbers in the vector are: " << endl;
  for(int i=0; i < V.size(); i++)
    cout << V[i] << " ";
}

int main(){
    int numContests = 0;
    cin >> numContests;
    if( numContests == 0 || numContests == 1 ){
        cout << 0;
    }
    else{
        vector<int> points;
        for( int i=0 ; i < numContests ; i++ ){
            int contestPoints = 0;
            cin >> contestPoints;
            points.push_back(contestPoints);
        }

        int bestContest = points[0], worstContest = points[0];
        int num = 0;

        //for each contest
        //if its a best score update it
        //if its a new worst score update it
        for( int i = 0 ; i < numContests ; i++ ){
            //cout << "b: " << bestContest << " w: " << worstContest << endl;

            if(points[i] > bestContest && i != 0 ){
                bestContest = points[i];
                num++;
            }
            else if(points[i] < worstContest && i != 0 ){
                worstContest = points[i];
                num++;
            }
        }
        cout << num;
    }
}