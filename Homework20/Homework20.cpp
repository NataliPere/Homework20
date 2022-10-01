#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

//Задача 20.1
template <typename T>
void fill_arr(T arr[], const int length, int begin, int end) {
    srand(time(NULL));
    for (int i = 0; i < length; i++)
        arr[i] = rand() % (end - begin) + begin;
}

template <typename T>
void show_arr(T arr[], const int length) {
    std::cout << '[';
    for (int i = 0; i < length; i++)
        std::cout << arr[i] << ", ";
    std::cout << "\b\b]\n";
}

template <typename T>
int searchIndex(T arr[], int length, T value, int begin = 0) {
    for (int i = begin; i < length; i++)
        if(arr[i] == value)
            return i;
            return -1;
}


template <typename T>
int searchLastIndex(T arr[], int length, T value, int begin = 0) {
    for (int i = length; i >= 0; i--)
        if(arr[i] == value)
            return i;
            return -1;
}

template <typename T>
T maxElement(T arr[], int length) {

    int max = arr[0];
    for (int i = 1; i < length; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
        return max;
    
}

template <typename T>
int minElement(T arr[], const int length) {

    int min = arr[0];
    for (int i = 0; i < length; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
        return min;
}

template <typename T>
int meanValue(T arr[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++)
        sum += arr[i];
    return sum / length;
}

template <typename T>
void range(T arr, int length, int begin, int end) {
    std::cout << '[';

    for (int i = begin; i < end; i++) {
            std::cout << arr[i] << ", ";
    }
    std::cout << "\b\b]\n";
}

int counter(int arr[], int length, int key = 0) {
    int counter = 0;
    std::cout << "Количество вхождений переданного элемента в массив: ";
    for (int i = 0; i <= length; i++) {
        if (key == arr[i])
            counter++;
    }
    return counter;
}


int main() {
    setlocale(LC_ALL, "Russian");
    int n, m;

    std::cout << "Изначальный массив: ";

    int arr[100];
    fill_arr(arr, 100, -100, 100);

    show_arr(arr, 100);
    std::cout << "\n";

    std::cout << "Введите число массива: \n";
    std::cin >> n;
    std::cout << counter(arr, 100, n) << "\n";

    std::cout << "Первая позиция числа " << n << " в массиве = " << searchIndex(arr, 100, n);
    std::cout << "\n";

    std::cout << "Последняя позиция числа " << n << " в массиве = " << searchLastIndex(arr, 100, n);
    std::cout << "\n";

    std::cout << "Максимальное значение массива = " << maxElement(arr, 100);
    std::cout << "\n";

    std::cout << "Минимальное значение массива = " << minElement(arr, 100);
    std::cout << "\n";

    std::cout << "Среднее арифметическое значение массива = " << meanValue(arr, 100);
    std::cout << "\n";

    std::cout << "Введите начало диапазона: ";
    std::cin >> n;
    std::cout << "Введите конец диапазона: ";
    std::cin >> m;
    std::cout << "Итоговый массив в диапазоне от " << n << " до " << m << " = ";
    range(arr, 100, n, m);
    std::cout << "\n";

    std::cout << "\n";

    



    return 0;
}