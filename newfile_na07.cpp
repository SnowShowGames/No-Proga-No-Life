#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1 = "1n31j*ksnsk*mdikeik*mxsndm**mxneik";
    string s2;

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == '*')
        {
            s2 += "??";
        }
        else
        {
            s2 += s1[i];
        }
    }

    cout << s2 << endl;

}