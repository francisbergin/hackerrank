#include <iostream>
#include <map>
#include <string>

using namespace std;

map<int, string> n = {
    {1, "one"},
    {2, "two"},
    {3, "three"},
    {4, "four"},
    {5, "five"},
    {6, "six"},
    {7, "seven"},
    {8, "eight"},
    {9, "nine"},
    {10, "ten"},
    {11, "eleven"},
    {12, "twelve"},
    {13, "thirteen"},
    {14, "fourteen"},
    {15, "quarter"},
    {16, "sixteen"},
    {17, "seventeen"},
    {18, "eighteen"},
    {19, "nineteen"},
    {20, "twenty"}
    };

string min_in_words(int m) {
    if (n.find(m) != n.end())
        if (m != 15)
            return n[m] + " minutes";
        else
            return n[m];
    else
        return "twenty " + n[m-20] + " minutes";
}

int main(void) {
    int h, m;
    cin >> h >> m;

    if(m == 0)
        cout << n[h] << " o' clock" << endl;
    else if(m == 30)
        cout << "half past " << n[h] << endl;
    else if(m > 30)
        cout << min_in_words(60-m) << " to " << n[h+1] << endl;
    else if(m < 30)
        cout << min_in_words(m) << " past " << n[h] << endl;

    return 0;
}
