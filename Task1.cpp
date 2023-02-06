#include <iostream>
#include "cpp.hpp"
void filling(int row, int col, int** arr) //функция заполнения массива
{
    for (int i = 0; i < row; i++){
        for (int t = 0; t < row; t++){
            arr[i][t] = 1 + rand() % 70;
        }
    }
}

void print(int row, int col, int** arr) //функция выведения массива на консоль пользователю
{
    for (int i = 0; i < row; i++)
    {
        std::cout << std::endl;
        for (int t = 0; t < row; t++)
        {
            std::cout <<  arr[i][t] << "";
        }
    }
}

void sumOfDiagonal (int row, int col, int** arr) //функция выисления суммы побочной диагонали
{
    int  sum = 0;
    
    for (int i = 0; i < row; i++)
    {
        sum += arr[i][row - 1 - i];
    }
    
    std::cout << "Сумма  побочных диагоналей = "<< std::endl; // выводим сумму
}


int main() {
    int row; //строка
    std::cout << "Enter value row"<< std::endl; //пользователь вводит количество строк
    std::cin >> row;
    int col; //столбик
    std::cout << "Enter value col"<< std::endl; //пользователь вводит количество столбцов
    std::cin >> col;
    
   
    
    int **arr = new int*[row];
    for (int k = 0; k < row ; ++k){
        arr[k] = new int[row];
    }
    
    filling(row, col, arr);
    print(row, col, arr);
    sumOfDiagonal(row, col, arr);
    
    ё
    
    
    for (int i = 0; i < row; i++)
    {
        delete[] arr[row];
    }
   
    delete[] arr;
    
}
