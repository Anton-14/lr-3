// lrrrr 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string> 
#include <vector> 
using namespace std; 
int main()
{
    const int size = 10;
    int qwer[size]; // задача 1 
    for (int i = 0; i < size; i++) {
        qwer[i] = rand() % 20 - 1 + 10;
        cout << qwer[i] << " ";
    }
    cout << endl;
    cout << qwer[6] - qwer[7] - qwer[9];

    int n = 12; // задача 2 
    int tok[12];

    for (int x = 0; x < n; x++)
    {
        cin >> tok[x];
    }
    for (int x = 0; x < n; x++)
    {
        cout << tok[x] << " ";
    }
    cout << endl;
    for (int x = 0; x < n; x++)
    {
        if (tok[x] % 2 == 0)
        {
            cout << (tok[x] * 6) << " ";
        }
    }
    cout << endl;
    int k1, k2 = 0;
    int a = 0;
    cout << "vvedite ki and k2" << endl;
    cin >> k1 >> k2;
    for (int x = k1; x <= k2; x++)
    {
        a += tok[k1];
        k1++;
    }
    cout << "otvet:" << a << endl;
    int m; // задание 3
    cout << "vvedite dlinnu massiva ";
    cin >> m;
    vector <int> vec1(m);
    for (int i = 0; i < m ; i++) {
       
        cin >> vec1[i];
    }
    vec1.push_back(20);
    for (int i : vec1) {
        cout << i << endl;
    }
    for (double g = 0; g < m; g++) {
        cout << (double)vec1[g] / vec1[m] << endl;
     }
    for (int k = 0; k <= vec1.size(); k++) {
        if (vec1[k] == 4) {
            vec1.erase(vec1.begin() + k);
            break;
        }
    }
    for (int k : vec1) {
        cout << k << endl;
    }
        
    cout << "vvedi stroky" << endl; //задание 4 
    string str1;
    cin.ignore(30, '\n');
    getline(cin, str1);
    cout << str1 << endl;
    int lol = 0;
    for (int i = 0; i < str1.size(); ++i) {
        if (str1[i] == 'q') lol++;
        if (str1[i] == 'w') lol++;
        if (str1[i] == 'r') lol++;
        if (str1[i] == 't') lol++;
        if (str1[i] == 'p') lol++;
        if (str1[i] == 's') lol++;
        if (str1[i] == 'd') lol++;
        if (str1[i] == 'f') lol++;
        if (str1[i] == 'g') lol++;
        if (str1[i] == 'h') lol++;
        if (str1[i] == 'j') lol++;
        if (str1[i] == 'k') lol++;
        if (str1[i] == 'l') lol++;
        if (str1[i] == 'z') lol++;
        if (str1[i] == 'x') lol++;
        if (str1[i] == 'c') lol++;
        if (str1[i] == 'v') lol++;
        if (str1[i] == 'b') lol++;
        if (str1[i] == 'n') lol++;
        if (str1[i] == 'm') lol++;
        cout << endl;
    }
  cout << "dlina stroki ravna " << str1.size() << ", dolya sogl ravna " << lol/ str1.size() << endl;
  cout << "vvedi l1 and l2";
  int l1, l2;
  cin >> l1 >> l2;
  cout << str1.substr(l1, l2 - l1 + 1) <<endl;

 string str2 = "";
 cout << "vvedite slovo";
cin >> str2;
  string str3 = "Can you can a can as a canner can can a can?";
  for (int i = 0; i < str3.size(); i++) {
      if ((str3.substr(i, 3) == "can") || (str3.substr(i, 1) == "Сan")) {
          str3.erase(i, 3);
          str3.insert(i, str2);
      }

  }
    cout << str3 << endl;

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
