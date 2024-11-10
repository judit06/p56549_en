

#include <iostream>
#include <string>
using namespace std;


// PRE: input is a sequence of integers that contains 1 even number at least

// POST: pos is the position of the first even number.


int main()
{
    int n;

    int pos = 0, i = 0;

    while(pos == 0)
    {
        // fita: n
        // INV: pos is the position of the first even number. if pos == 0, the even number hasn't been read yet.

        ++i;
        cin >> n;
        if (n % 2 == 0) pos = i;
    }

    cout << pos << endl;

    return 0;
}

