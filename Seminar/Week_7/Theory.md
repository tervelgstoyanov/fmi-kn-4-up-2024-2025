# **ТЕОРИЯ МАТРИЦИ**

---

# _КАКВО Е МАТРИЦА (ДВУМЕРНИ МАСИВИ)?_

## 1) Матрица:

## Двумерни масиви - масив от масиви!

Имат подобна структура на матриците от алгебрата. Визуалната им репрезентация е като таблица пълна с елементи от някакъв тип.

```c++
    int matrix[4][4];
    int filledInMatrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // 1 2 3
    // 4 5 6
    // 7 8 9
```

---

## 2) Достъпване на елемент от матрица:

Ако си представим матрицата като таблица, то първият индекс ще отговаря на реда, а втория на колоната. Следователно за да достъпим елемент на определен ред и колона:

```c++
int main(){
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // 1 2 3
    // 4 5 6
    // 7 8 9
    int x = 1, y = 1;           // x - line, y - column
    std::cout << matrix[x][y]   // print element on line x and column y => 5

    return 0;
}
```

## 3) Създаване и принтиране на матрица в конзола:

```c++
#include <iostream>

int main(){
    const int rows = 3, cols = 3;
    int matrix[rows][cols];

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
```

Идва важният въпрос - Как ние да зададем дължината?

```c++
#include <iostream>
const int MAX_ROWS = 128, MAX_COLS = 128;

int main(){
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;
    std::cin >> rows >> cols;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
```

---

## 4) ТРИМЕРНИ МАСИВИ:

Съществуват и три мерни масиви. Идеята им е идентична на двумерните. Вече не изглежда като двумерна таблица, а е по-скоро множество от еднакви по размер таблици.

---

## 5) ПОДАВАНЕ НА МАСИВ КЪМ ФУНКЦИЯ:

```c++
#include <iostream>
void function(int arr[], int sizeArr){
    // implementation
}

int main(){
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    int sizeArr = 8; // не се прави в този ред просто пример!!!
    function(arr, sizeArr);
    return 0;
}
```

```c++
#include <iostream>
using namespace std;
void function(int a[][3], int sizeArr)
{
    // ...
}

int main(){
    int sizeArr = 3; // не се прави в този ред просто пример!!!
    int arr[][sizeArr] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    function(arr, sizeArr);
    return 0;
}
```
