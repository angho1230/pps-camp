#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
    string str1;
    string str2;
    array<int, 25> num = {};

    cin >> str1;
    for (int i = 0; i < str1.size(); i++)
    {
        str1[i] = toupper(str1[i]);
        int index = str2.find(str1.substr(i, 1));
        if (index == -1)
        {
            str2.push_back(str1[i]);
            num[str2.size() - 1]++;
        }
        else
        {
            num[index]++;
        }
    }

    int max1 = 0, max2 = 0;
    int maxIndex;
    for (int i = 0; i < str2.size(); i++)
    {
        if (max1 <= num[i])
        {
            max2 = max1;
            max1 = num[i];
            maxIndex = i;
        }
    }
    if (max1 == max2)
    {
        cout << '?';
    }
    else
    {
        cout << str2[maxIndex];
    }

    return 0;
}