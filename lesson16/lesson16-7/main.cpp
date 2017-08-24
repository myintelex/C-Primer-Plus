#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> lotto(int total, int choosed);
void show(int n);

int main(int argc, char *argv[])
{

    for (int i = 0; i < 10; i++)
    {
        cout << "The " << i+1 << "th winner: ";
         vector<int> winner = lotto(51, 6);
         std::for_each (winner.begin(), winner.end(), show);
         cout << endl;
    }

    return 0;
}


vector<int> lotto(int total, int choosed)
{
    vector<int> nums;
    for (int i = 0; i < total; i++)
        nums.push_back(i+1);

    vector<int> winner;
    for (int i = 0; i < choosed; i++)
    {
        std::random_shuffle(nums.begin(), nums.end());
        winner.push_back(nums.at(0));
    }
    return winner;
}

void show(int n)
{
    cout << " " << n;
}
