# Рекурсия

Рекурсията е концепция в програмирането, при която дадена функция се извиква сама себе си.
Това позволява решаването на сложни проблеми чрез тяхното разбиване на по-малки подпроблеми от същия тип.

Основните части на рекурсивната функция са:

1. **Базов случай** (base case): Условие, което спира рекурсията, за да предотврати безкрайно извикване.
2. **Рекурсивно извикване** (recursive call): Функцията извиква сама себе си с променени параметри,
   за да достигне до базовия случай.

## Пример: Изчисляване на факториел

Факториелът на дадено число \( n \), означен като \( n! \), е произведението на всички числа от 1 до \( n \).
Например: \( 5! = 5 \times 4 \times 3 \times 2 \times 1 = 120 \).

Формулата за факториел е:

\[
n! =
\begin{cases}
1, & \text{ако } n = 0 \\
n \times (n - 1)!, & \text{ако } n > 0
\end{cases}
\]

### Примерен код на Python:

```python
def factorial(n):
    # Базов случай
    if n == 0:
        return 1
    # Рекурсивно извикване
    return n * factorial(n - 1)

# Тест
print(factorial(5))  # Резултат: 120
```

### Обяснение:

1. При извикване на `factorial(5)`, функцията проверява дали \( n == 0 \).
   Тъй като това не е вярно, тя извиква `factorial(4)`.
2. Този процес продължава, докато се достигне до базовия случай `factorial(0)`, който връща 1.
3. След това резултатите от всяко извикване започват да се изчисляват обратно нагоре по стека:

   ```
   factorial(0) = 1
   factorial(1) = 1 * factorial(0) = 1
   factorial(2) = 2 * factorial(1) = 2
   factorial(3) = 3 * factorial(2) = 6
   factorial(4) = 4 * factorial(3) = 24
   factorial(5) = 5 * factorial(4) = 120
   ```

## Предимства и недостатъци на рекурсията

### Предимства:

- Подходяща за решаване на проблеми, които могат да бъдат разделени на подпроблеми, като обхождане на дървета, търсене в графи и др.
- Кодът често е по-кратък и по-четим.

### Недостатъци:

- Може да изисква много памет поради натрупване на рекурсивни извиквания в стека.
- Не винаги е най-ефективният подход; някои проблеми могат да бъдат решени по-ефективно с итерация.

## Заключение

Рекурсията е мощен инструмент в програмирането, който позволява елегантно решаване на определени типове проблеми.
Все пак трябва да се използва внимателно, за да се избегнат проблеми като препълване на стека (stack overflow).
