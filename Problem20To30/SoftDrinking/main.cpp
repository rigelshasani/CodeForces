//https://codeforces.com/problemset/problem/151/A
#include <iostream>
#include <algorithm>
using namespace std;

/*
    1. 3 friends
    2. 4 bottles
    3. 5 ml/bottle
    4. 10 limes
    5. 8 slices/lime
    6. 100 grams of salt

    Per drink, they need:
    7. 3 ml drink
       1 slice of lime(constant)
    8. 1 gram of salt

    4 bottles x 5 ml/bottle = 20ml
    drinksPossible = totalDrinkAmount / numOfPeople
    toasts = drinksPossible / numOfPeople
*/

int minimum(const int x, const int y, const int z){
    return std::min({x, y, z});
}


int main(){
    int friends, bottles, millilitres, limes, slicesOfLimes, gramsOfSalt, mlPerDrink, saltPerDrink;
    cin >> friends >> bottles >> millilitres >> limes >> slicesOfLimes >> gramsOfSalt >> mlPerDrink >> saltPerDrink;
    int totalDrinkAvailable = bottles * millilitres;

    // cout << "Friends: " << friends << endl;
    // cout << "Bottles: " << bottles << endl;
    // cout << "Millilitres: " << millilitres << endl;
    // cout << "Limes: " << limes << endl;
    // cout << "Slices of lime: " << slicesOfLimes << endl;
    // cout << "Grams of salt: " << gramsOfSalt << endl;
    // cout << "Ml per drink: " << mlPerDrink << endl;
    // cout << "Salt per drink: " << saltPerDrink << endl;

    const int toasts = totalDrinkAvailable / mlPerDrink;
    const int limeDrinksPossible = limes * slicesOfLimes;
    const int saltDrinksPossible = gramsOfSalt / saltPerDrink;

    //cout << toasts << " " << limeDrinksPossible << " "<< saltDrinksPossible<< " ";

    cout << minimum(toasts, limeDrinksPossible, saltDrinksPossible) / friends;
}