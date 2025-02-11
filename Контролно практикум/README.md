# Контролно практикум 

## Изисквания

 - Файловете да имате следните имена: `<fn>_<zad>.cpp` 
 -  Решенията трябва да могат да се компилират
 -  Решенията трябва правилно да заделят и освобождават динамичната памет
-  Не е позволено използването на библиотеки, различни от `<iostream>`

## Упътвания 
 - Не забравяйте константите, където е нужно
 - Внимавайте с типовете на функциите и аргументите им
 - Внимавайте за течове на памет
 - Проверявайте дали паметта е била заделена правилно  
 - Контролното носи 50т + 10 бонус точки
 - Четете внимателно условията


Ако имате въпроси се обърнете към нас
Успех!

---

## Задача 1 - Скокове

Да се напише програма, която прочита от конзолата числото `n` и масив `arr`, съдържащ `n` **различни цели** числа в интервала [0,n-1]. Нека скок от позиция `i` наричаме прехода от позиция `i` към `arr[i]`.  За тази програма напишете функциите:
 
 10т- а)  **<подходящ тип> GetCycleLength(<подходящ тип> arr,<подходящ тип> size, <подходящ тип> startIndex )** - функцията да връща минималния брой скокове, започвайки от startIndex, необходими за връщане в него. Ако първият скок води до същата позиция, очакваме функцията да върне 1. 

 Вход:
 ```
 6 //n
 5 0 2 4 3 1 //аrr
 ```
 Изход:
 ```
 GetCycleLength(arr,n,0) ->  3 
 GetCycleLength(arr,n,1) ->  3
 GetCycleLength(arr,n,2) ->  1 
 GetCycleLength(arr,n,3) ->  2
 GetCycleLength(arr,n,4) ->  2
 GetCycleLength(arr,n,5) ->  3

 ```

  16т - б) **<подходящ тип> GetCycle(<подходящ тип> arr,<подходящ тип> size, <подходящ тип> startIndex )** - функцията да връща указател към динамично заделен масив с точна дължина, който съдържа поредицата от позиции, започвайки от `startIndex`, през които трябва да преминем, за да достигнем отново до `startIndex`. Ако първият скок води до същата позиция, очакваме функцията да върне указател към масив с единствен елемент `startIndex`. 

   Вход:
 ```
 6 //n
 5 0 2 4 3 1 //аrr
 ```
 Изход:
 ```
 GetCycle(arr,n,0) -> [0,5,1] 
 GetCycle(arr,n,1) -> [1,0,5]
 GetCycle(arr,n,2) -> [2] 
 GetCycle(arr,n,3) -> [3,4]
 GetCycle(arr,n,4) -> [4,3]
 GetCycle(arr,n,5) -> [5,1,0]
 ```

### Bonus - 3т
  в) **<подходящ тип> GetMaxCycle(<подходящ тип> arr,<подходящ тип> size )** - функцията да връща указател към динамично заделен масив с точна дължина, който съдържа най-дългия цикъл в масива. Ако има няколко такива, върнете произволен.

  Вход:
 ```
 6 //n
 5 0 2 4 3 1 //аrr
 ```
 Изход:
 ```
 GetMaxCycle(arr, n) -> [0,5,1]
 ```

---

## Задача 2 - Подмножества
Да се напише програма, която прочита от конзолата числото `n` и масив `arr`, съдържащ `n` **различни цели** числа.  За тази програма напишете функцията:

 24т - а) **<подходящ тип> GenerateSubsets(<подходящ тип> arr,<подходящ тип> size,/\*ваши аргументи\*/)** - функцията да генерира и принтира всички подмножества на масива arr. Редът на принтиране на множествата не е от значение.

 *Упътване: Използвайте bool used[n], за да следите кои елементи са в подмножеството.*

Пример:

Вход:
```
4 
5 0 2 4
```

Изход:
```
{ }
{ 4 }
{ 2 }
{ 2 4 }
{ 0 }
{ 0 4 }
{ 0 2 }
{ 0 2 4 }
{ 5 }
{ 5 4 }
{ 5 2 }
{ 5 2 4 }
{ 5 0 }
{ 5 0 4 }
{ 5 0 2 }
{ 5 0 2 4 }
```


### Bonus - 7т
Генерираните подмножества да бъдат запазени във динамична неправоъгълна "матрица". Искаме тази "матрица" да въде с точен размер, т.е. да няма заделена памет, която да не е използвана.