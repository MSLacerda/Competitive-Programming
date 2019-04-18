#include <bits/stdc++.h>

using namespace std;

void combinator(string str1, string str2)
{
  int size = str1.length() + str2.length();
  string combinated;

  for (int i = 0; i < size; i++)
  {
    if (str1.length() > i) {
      combinated.push_back(str1.at(i));
    }
    if (str2.length() > i) {
      combinated.push_back(str2.at(i));
    }
  }

  cout << combinated << endl;
}

int main()
{
  int counter;
  string word1;
  string word2;

  ios_base::sync_with_stdio(false);

  cin >> counter;

  for (int i = 0; i < counter; i++)
  {
    cin >> word1 >> word2;

    combinator(word1, word2);
  }
}