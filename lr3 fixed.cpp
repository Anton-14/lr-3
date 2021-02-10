// lr3 fixed.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <string> 
#include <vector> 
#include <ctime>
using namespace std;
int main()
{
    const int size = 10;
    srand(time(nullptr));
    int qwer[size]; 
    for (int i = 0; i < size; i++) {
        qwer[i] = rand() % 20 - 1 + 10;
        cout << qwer[i] << " ";
    }
    cout << endl;
    cout << qwer[6] - qwer[7] - qwer[9];
    cout << endl;
 ///////////////////////////////
    int m, x;
    cout << "enter m: ";
    cin >> m;
    vector<int> vec1;
    vector<float> vec2;
    for (int i = 0; i <= (m - 1); i++) {
        cout << "x= ";
        cin >> x;
        vec1.push_back(x);
    }
    for (int i : vec1) {
        cout << i << " ";
    }
    cout << endl;
    vec1.push_back(20); 
    for (int i : vec1) {
        cout << i << " ";
    }
    cout << endl;
    float z;
    for (float i : vec1) {
        z = static_cast<float>(i) / vec1.back();
        vec2.push_back(z);
    }
    for (float i : vec2) {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 0; i < vec2.size(); i++)
    {
        if (vec2[i] == 4)
        {
            vec2.erase(vec2.begin() + i);
            break;
        }
        else {
            cout << "";
           
        }
    }
    cout << endl;
    for (float i : vec2)
    {
        cout << i << " " ;
    }





   
   

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
