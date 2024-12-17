# **ТЕОРИЯ ДИНАМИЧНА ПАМЕТ**

---

# _КАКВО Е СТЕК?_

## 1) [СТЕК:](<https://bg.wikipedia.org/wiki/Стек_(структура_от_данни)>)

Стекът е линейна структура от данни в информатиката, в която обработката на информация става само от едната страна наречена връх. (LIFO – Last In First Out)

Стекът теоретично може да събере безкраен брой обекти, но на практика само краен брой, ограничен от количеството памет.

|     |     |     |     |     |     |
| --- | --- | --- | --- | --- | --- |
|     |     |     | 3   | 3   |     |
|     |     | 2   | 2   | 2   | 2   |
|     | 1   | 1   | 1   | 1   | 1   |

```
push (добавяне) – поставя нов обект върху стека
pop или pull (изваждане/изтегляне) – вади най-горния (последно добавения) елемент от стека
peek (надникване) – показва най-горния елемент от стека без да го изважда
```

### ПРОГРАМЕН СТЕК:

1. Паметта се заделя в момента на дефиниция
2. Всеки заделен блок памет носи името на променливата
3. Паметта се освобождава при изход от блока (или функцията), в който е дефинирана променливата
4. Последно заделената памет се освобождава първа
5. Програмистът няма контрол над управлението на паметта.
6. Количеството заделена памет до голяма степен е определено по време на компилация
7. Статично заделяне на памет

---

## 2) [ДИНАМИЧНА ПАМЕТ (heap):](https://cplusplus.com/doc/tutorial/dynamic/)

1. Динамичната памет може да бъде заделена и освободена по всяко време на изпълнение на програмата
2. Областта за динамична памет е набор от свободни блокове памет
3. Програмата може да заяви блок с произволна големина

## **Разлика между `stack` и `heap`**

Освен обяснение какво е стек, е важно да разберем разликите между **стек** и **динамичната памет (heap)**, защото те имат различно предназначение и начин на управление.

| **Характеристика**        | **Stack**                           | **Heap**                                            |
| ------------------------- | ----------------------------------- | --------------------------------------------------- |
| **Заделяне на памет**     | Автоматично по време на компилация. | Ръчно по време на изпълнение на програмата с `new`. |
| **Управление на паметта** | Управлява се от компилатора.        | Управлява се от програмиста чрез `new` и `delete`.  |
| **Скорост**               | Много бързо.                        | По-бавно.                                           |
| **Големина**              | Ограничена.                         | Ограничена само от наличната физическа памет.       |
| **Подходящо за**          | Локални променливи и рекурсия.      | Динамични структури като списъци, дървета и графи.  |

### Как заделяме динамична памет:

```c++
int* q= new int(5); // заделя памет в heap-a и я инициализира.
*q = 10; // промяна на стойноста, която се намира на съответния адрес q в heap-a
delete q; // освобождава памет от heap-a, за да предотврати “изтичане на памет” (memory leak).
```

**МОЛИМ ВИ ВНИМАВАЙТЕ ЗА MEMORY LEAK-ОВЕ.**

**Memory leak** (изтичане на памет) възниква, когато заделим памет с `new`, но не я освободим с `delete`.

Изключително важно е да не се допускат поради много на брой причини. Някои от тях са:

1. Непредсказуемо поведение на програмата.
2. Запълване на паметта.
3. Непредсказуемо поведение на самия компютър (може да се изключи, пусне антивирусна и др.)
   > При всяка програма, половината от оправяне на даден проблем или бъг е намиране на източника на проблема. В C++ **МНОГО** често проблемът е грешка при memory managment-а. Тези грешки са трудни за намиране, затова е изключително важно: За всяко new -> да видим дали има delete.

---

**Важно: Проверка за нулев указател**

Преди да освободите памет с `delete`, винаги проверявайте дали указателят не е `nullptr`. Това помага за избягване на грешки, като двойно освобождаване на памет или достъп до невалидна памет.

Пример:

```c++
if (q != nullptr) {
    delete q;
    q = nullptr; // Указателят се нулира, за да не сочи към изтритата памет
}
```

---

### Как работи `delete[]` за масиви?

Начинаещите често забравят да използват правилно `delete[]` за масиви.

Когато заделяте динамичен масив с `new[]`, трябва да го освободите с `delete[]`. Ако използвате само `delete`, резултатът е неопределено поведение.

Пример:

```c++
int* arr = new int[10]; // Заделяне на масив
delete[] arr;          // Коректно освобождаване на памет
```

---

# ПРОБЛЕМИ, КОИТО РЕШАВАМЕ С ДИНАМИЧНА ПАМЕТ:

1. Създаване на масив, чийто размер се определя по време на компилация

```c++
int size = 20;
int* arr = new int[size];
for(int i = 0; i < size; i++){
    arr[i] = i;
}
delete[] arr;
```

2. Създаване на 2D масив, чийто размер се определя по време на компилация

```c++
int rows = 3, cols = 3;
int** arr = new int*[rows];

int n = 0;
for(int i = 0; i < rows; ++i){
    arr[i] = new int[cols];
    for(int j = 0; j < cols; ++j){
        arr[i][j] = ++n;
    }
}

for(int i = 0; i < rows; ++i){
    for(int j = 0; j < cols; ++j)
        std::cout << arr[i][j] << " ";
    std::cout << std::endl;
}

for(int i = 0; i < rows; ++i){
    delete[] arr[i];
}
delete[] arr;
```

3. Подаване към функция:

```c++
int sumArr(int** arr, int rows, int cols){
    int sum = 0;
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
            sum += arr[i][j];
        }
    }
    return sum;
}
```

```c++
int maxArr(int** arr, int rows, int cols){
    int max = arr[0][0];
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
            if(arr[i][j] > max)
                max = arr[i][j];
        }
    }
    return max;
}
```

```c++
int main()
{
    int rows = 3, cols = 3;
    int** arr = new int*[rows];

    for(int i = 0; i < rows; ++i){
        arr[i] = new int[cols];
        for(int j = 0; j < cols; ++j){
            std::cin >> arr[i][j];
        }
    }

    int sum = sumArr(arr, rows, cols);
    std::cout << sum << std::endl;

    int max = maxArr(arr, rows, cols);
    std::cout << max << std::endl;

    for(int i = 0; i < rows; ++i){
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
```