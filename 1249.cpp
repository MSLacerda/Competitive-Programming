#include <bits/stdc++.h>

using namespace std;

int UPPERCASE_BEGIN = 65;
int UPPERCASE_END = 90;

int LOWERCASE_BEGIN = 97;
int LOWERCASE_END = 122;


void crypt(string line)
{
  int actual_char;
  string crypted;
  char node;
  for(int i = 0; i < line.length(); i++)
  {
    actual_char = line.at(i);
    if (actual_char >= UPPERCASE_BEGIN && actual_char <= UPPERCASE_END) {
      if (actual_char + 13 > UPPERCASE_END) {
        actual_char = UPPERCASE_BEGIN + (12 - (UPPERCASE_END - actual_char));
      } else {
        actual_char += 13;
      }
    } else if (actual_char >= LOWERCASE_BEGIN && actual_char <= LOWERCASE_END) {
      if (actual_char + 13 > LOWERCASE_END) {
        actual_char = LOWERCASE_BEGIN + (12 - (LOWERCASE_END - actual_char)) ;
      } else {
        actual_char += 13;
      }
    } else {
      actual_char = actual_char;
    }

    node = actual_char;
    crypted.push_back(node);
  }
  
  cout << crypted << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  string line;

  while (std::getline(std::cin, line))
  {
    crypt(line);
  }
}