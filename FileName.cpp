#include <iostream>
using namespace std;

//розподіл пам`яті
void createArray(int size) 
{
    int* array = new int[size];
}

//ініціалізація динамічного масиву.
void initializeArray(int** arr, int size, int value) 
{
    for (int i = 0; i < size; ++i) 
    {
        *arr[i] = value;
    }
}

//друк масиву
void printArray(int* arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
}

//видалення масиву
void deleteArray(int* arr)
{
    delete[] arr;
}

//додавання елемента в кінець масиву.
void addElement(int** arr, int& size, int newElement) {

    int* newArr = new int[size + 1];

    for (int i = 0; i < size; ++i) 
    {
        newArr[i] = *arr[i];
    }
    newArr[size] = newElement;
    *arr = newArr;
    size++;
}

//вставка елемента за вказаним індексом.
void addElementAtIndex(int** arr, int& size, int index, int newElement) {

    int* newArr = new int[size + 1];

    for (int i = 0; i < index; ++i) 
    {
        newArr[i] = (*arr)[i];
    }
    newArr[index] = newElement;

    for (int i = index; i < size; ++i) {
        newArr[i + 1] = (*arr)[i];
    }
    *arr = newArr;
    ++size;
}

void removeElementAtIndex(int** arr, int& size, int index) {

    int* newArr = new int[size - 1];

    for (int i = 0; i < index; ++i) 
    {
        newArr[i] = (*arr)[i];
    }

    for (int i = index + 1; i < size; ++i) 
    {
        newArr[i - 1] = (*arr)[i];
    }
    *arr = newArr;
    --size;
}

int main()
{

}
