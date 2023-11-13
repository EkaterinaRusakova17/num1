/************************************************************
* Русакова Екатерина Алексеевна, ПИ-231                     *
* Share-Link: https://www.onlinegdb.com/online_c++_compiler *
* Дата: 14.11.2023                                          *
*************************************************************/
#include <iostream>
#include <string>

using namespace std;
 
int main() {
    
  string sumbol, str;
  int kol;

  cout << "Введите строку из английских символов:" << endl;
  getline(cin, str);
  
  for (int index = 0; str[index]; ++index) {
    if (isalpha(str[index]) ) {
      sumbol += str[index];
    }
  }
  cout << "Число повторений каждой буквы:" << endl;
  
  for (int ind = 0; sumbol[ind]; ++ind) {
    kol = 0;
    for (int index = ind + 1; sumbol[index]; ++index) {
      if (sumbol[ind] == sumbol[index]) {
        while (sumbol[ind] == sumbol[index]) {
          sumbol.erase(index, 1);
          ++kol;
        }
      }
    }
  ++kol;
  
  cout << sumbol[ind] << ":" << kol << endl;
  }
  
  system("pause");
  return 0;
}
