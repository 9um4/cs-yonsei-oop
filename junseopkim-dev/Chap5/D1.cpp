#include <iostream>

using namespace std;

int main()
{
    int i, score[5]; 
    int max = 0;

    cout << "Enter 5 scores: "; 
    cin >> score[0];
    max = score[0];
    for (i = 1; i < 5; i++)
    {
        cin >> score[i];
        if (score[i] > max)
        {
            max = score[i];
        }
    }
    cout << "The highest score is " << max << endl
         << "The scores and their differences from the highest score are as follows:\n";
    for (i = 0; i < 5; i++)
    {
        cout << score[i] << " differs from the highest score by " << max - score[i] << endl;
    }
    return 0;
}