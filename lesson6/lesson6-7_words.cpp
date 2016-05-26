#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
    string buff;
    cout << "Enter the words (q to quit)" << endl;

    int count =0;
    int m_count = 0;
    int n_count = 0;
    while(buff != "q")
    {
        cin >> buff;
        if(isalpha(buff[0]))
        {
            
            if(buff[0]=='a' || buff[0]=='i' || buff[0]=='u' || buff[0]=='e' || buff[0]=='o')
            {
                m_count++;
            }
            else
            {
                n_count++;
                cout << buff<< endl;
            }

        }
        count++;
    }
    cout << m_count << " words beginning with vowels\n";
    cout << --n_count << " words beginning with vowels\n";
    cout << count - m_count -n_count -1 << " others" << endl;

}
