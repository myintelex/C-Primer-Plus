#include <iostream>


using namespace std;

int main()
{
    const int count = 3;
    int score[count] = {0} ;

    cout << "Please input the score of first time: ";
    cin >> score[0];
    cin.get();

    cout << "Please input the score of second time: ";
    cin >> score[1];
    cin.get();

    cout << "Please input the score of third time: ";
    cin >> score[2];
    cin.get();

    cout << "Your have input " << sizeof(score) / sizeof(int) << " times, ";
    cout << "The average of your score is  ";
    cout << (score[0] + score[1] + score[2]) / count << endl;

    return 0;

}
