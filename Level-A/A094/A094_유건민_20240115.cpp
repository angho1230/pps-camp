#include <iostream>
#include <string>
using namespace std;

int main(void)
{

    string ary[] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    string str;
    cin >> str;
    int idx;
    for (int i = 0; i < 8; i++)
    {
        while (1)
        {
            idx = str.find(ary[i]);
            if (idx == string::npos)
            {
                break;
            }
            str.replace(idx, ary[i].length(), "@");
        }
    }
    cout << str.length();
    return 0;
}