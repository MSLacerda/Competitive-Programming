#include <iostream>
#include <string>
#include <stdio.h>


#define br "\n";

#define LLI long long int
#define fr(i, b, c) for (int i = b; i < c; i++)

using namespace std;

int main()
{
    string data;
    int cases;

    scanf("%d", &cases);
    cin.ignore();
    fr(i, 0, cases)
    {
        getline(cin, data);
        fr(i, 0, data.size())
        {

            if ((data.at(i) >= 65 && data.at(i) <= 90) || (data.at(i) >= 97 && data.at(i) <= 122))
            {
                char temp = data.at(i);
                int tempAscii = int(temp);
                tempAscii += 3;
                data.at(i) = char(tempAscii);
            }
        }

        data = string(data.rbegin(), data.rend());

        fr(i, (data.size() / 2), data.size())
        {
            char temp = data.at(i);
            int tempAscii = int(temp);
            tempAscii--;
            data.at(i) = char(tempAscii);
        }

        cout << data << br;
    }
}