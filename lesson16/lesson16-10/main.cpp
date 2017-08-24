#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>

using namespace std;
struct Review {
    std::string title;
    int rating;
    double price;
};

bool operator <(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
bool worseThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
bool betterThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
bool expensiveThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
bool cheepThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
bool FillReview(shared_ptr<Review> rr);
void ShowReview(const shared_ptr<Review> & rr);


int main(int argc, char *argv[])
{
    vector<shared_ptr<Review>> books;
    shared_ptr<Review> ptr_temp(new Review);
    while(FillReview(ptr_temp))
    {
        books.push_back(ptr_temp);
        ptr_temp = shared_ptr<Review>(new Review);
    }



    if (books.size() > 0)
    {
        while(1)
        {
            cout << "Thank you, You entered the following " << books.size()
                 << "Input 'n' for show no short;\n"
                 << "Input 't' for show by title;\n"
                 << "Input 'r' for show by rating raise;\n"
                 << "Input 'f' for show by rating fall;\n"
                 << "Input 'u' for show by rating up;\n"
                 << "Input 'd' for show by rating down;\n"
                 << "Input 'q' for quit\n";
            char temp;
            cin >> temp;
            if (temp == 'q')
                break;
            switch(temp)
            {
            case 'n':
                cout << "Show no short:\nRating\tPrice\t Book\n";
                for_each(books.begin(), books.end(), ShowReview);
                break;
            case 't':
                sort(books.begin(), books.end());
                cout << "Show short by title:\nRating\tPrice\t Book\n";
                for_each(books.begin(), books.end(), ShowReview);
                break;
            case 'r':
                sort(books.begin(), books.end(), worseThan);
                cout << "Show short by rating raise:\nRating\tPrice\t Book\n";
                for_each(books.begin(), books.end(), ShowReview);
                break;
            case 'f':
                sort(books.begin(), books.end(), betterThan);
                cout << "Show short by rating fall:\nRating\tPrice\t Book\n";
                for_each(books.begin(), books.end(), ShowReview);
                break;
            case 'u':
                sort(books.begin(), books.end(), expensiveThan);
                cout << "Show short by price up:\nRating\tPrice\t Book\n";
                for_each(books.begin(), books.end(), ShowReview);
                break;
            case 'd':
                sort(books.begin(), books.end(), cheepThan);
                cout << "Show short by price down:\nRating\tPrice\t Book\n";
                for_each(books.begin(), books.end(), ShowReview);
                break;
            default:
                cout << "Show no short:\nRating\tPrice\t Book\n";
                for_each(books.begin(), books.end(), ShowReview);
                break;
            }
        }

    }
    else
        cout << "No entries. ";

    cout << "Bye.\n";

    return 0;
}

bool operator <(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)
{
    if (r1->title < r2->title)
        return true;
    else if (r1->title == r2->title && r1->rating < r2->rating)
        return true;
    else
        return false;
}
bool worseThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)
{
    if (r1->rating < r2->rating)
        return true;
    else
        return false;
}
bool betterThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)
{
    if (r1->rating > r2->rating)
        return true;
    else
        return false;
}

bool expensiveThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)
{
    if (r1->price < r2->price)
        return true;
    else
        return false;
}
bool cheepThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)
{
    if (r1->price > r2->price)
        return true;
    else
        return false;
}
bool FillReview(shared_ptr<Review> rr)
{
    cout << "Enter Book title (quit for quit): ";
    getline(cin, rr->title);
    if (rr->title == "quit")
        return false;
    cout << "Enter book rating: ";
    cin >> rr->rating;
    if (!std::cin)
        return false;

    cout << "Enter book price: ";
    cin >> rr->price;
    if (!std::cin)
        return false;

    while (cin.get() != '\n')
        continue;
    return true;
}
void ShowReview(const shared_ptr<Review> & rr)
{
    cout << rr->rating <<"\t" << rr->price << "\t" << rr->title << endl;
}
