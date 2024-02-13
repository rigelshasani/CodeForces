#include <iostream>
using namespace std;

int main()
{
    string word;
    cin >> word;
    string copy = "";
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == 'A' || word[i] == 'O' || word[i] == 'Y' || word[i] == 'E' || word[i] == 'U' || word[i] == 'I' ||
            word[i] == 'a' || word[i] == 'o' || word[i] == 'y' || word[i] == 'e' || word[i] == 'u' || word[i] == 'i')
        {
        }
        else
        {
            copy += '.';
            if (word[i] < 91)
            {
                copy += word[i] + 32;
            }
            else{
                copy += char(word[i]);
            }
        }
    }
    cout << copy;
}