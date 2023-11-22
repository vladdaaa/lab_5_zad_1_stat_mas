// lab_5_zad_1_stat_mas.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//дан массив размера n. сформировать новый массив, в котором элементы исходного массива располагаются в обратном порядке.
//statistichesky
#include <iostream>
#include <clocale>
using namespace std;

int main()
{

    setlocale(LC_ALL, "ru");

    const int N = 10;
    int a[N],b[N], k=0;
   

    cout << "Введите размер массива";
    cin >> k;

    if (k == 0 || k > N) {
        cerr << "Ошибка, вы вышли из диапазона [1, " << k << "]";
        return 1;
    }
  
    for (int i = 0; i < k; i++) {
        cout << "a[" << i << "]";
        cin >> a[i];
    }
    for (int i = 0; i < k; i++) {
        b[k - 1 - i] = a[i];
        
       
    }
    for (int i = 0; i < k; i++) {
        cout << "b[" << i << "]=" << b[i] << endl;

    }
    

}
