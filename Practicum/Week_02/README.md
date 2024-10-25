# Увод в програмирането - практикум
## Седмица 2 - Типове и операции
### Задачи

1. **Часовник**  
Нека имаме стандартен часовник, който сочи 12 часа. Напишете програма, която получава от стандартния вход число - брой изминали часове, и извежда на стандартния изход брой пълни завъртания на малката стрелка и числото, което ще сочи.

Вход:
```
123
```
Изход:
```
10 3
```

2. **Сума от квадратите**  
Напишете програма, която приема цяло четирицифрено число и извежда сумата от квадратите на цифрите им, както и неговото огледално число.  
Вход:
```
4026
```
Изход:
```
56 6204
```

3. **Плочки**  
Стена с дължина **l** и ширина  **h** трябва да се облепи с плочки с размери **а** и **b**. Напишете програма, която прочита от клавиатурата **l**, **h**, **a** и **b** и извежда минималния необходим брой плочки за закупуване. Приемете, че плочките могат да се поставят само така, че страните им да са успоредни на страните на стената, и при необходимост някъде да се постави парче плочка, се закупува цяла такава. 
Вход:
```
110 140 20 30
```
Изход:
```
28
```

4. **Време**  
Напишете програма, която прочита два последователни във времето момента, описани с по три цели числа - час, минути и секунди, и извежда колко време е изтекло между тях в следния формат:

Вход:
```
23 50 0
1 5 0
```
Изход:
```
1h 15m 0s
```

5. **Високосна година**  
Напишете програма, която прочита година и връща 1, ако годината е високосна, и 0 - иначе(*припомнете си пълното условие за високосна година!*). 

Вход:
```
1900
```
Изход:
```
0
```

6. **Една истина**
Прочетете от клавиатурата три булеви стойности и изведете истина само ако точно една от трите стойности е истина и лъжа в противен случай.

Вход:
```
0 1 0
```
Изход:
```
1
```
Вход:
```
1 1 0
```
Изход:
```
0
```

7. **Знак на число**  
Напишете програма, която по въведено число ***n*** извежда 1, ако то е положително, и -1, ако е отрицателно. Желателно е задачата да се реши без използването на тернарен или условен оператор.  
*Предизвикателство:* Нека при положително число програмата отново да извежда 1, но при отрицателно - 0.
Вход:
```
57
```
Изход:
```
1
```

8. **Номер в азбуката**
Напишете програма, която прочита главна буква от латинската азбука и извежда поредния й номер в нея.  
Вход:
```
H
```
Изход:
```
8
```

9. **Едно сравнение**
Отпечатайте на екрана(с 1 или 0) дали числата отговарят на следното условие: min(a, c) < b < max(a, c) , изполвайки точно 1 сравнение.
Вход:
```
1 4 6
```
Изход:
```
1
```
Вход:
```
1 6 4
```
Изход:
```
0
```