# **ТЕОРИЯ ФУНКЦИИ**

---

# КАКВО Е ФУНКЦИЯ?

## 1) Функция:

Програма, която може да се извика от главната програма. Тя извършва определена задача.

---

Изключително полезна при повтарящ се еднотипен код. Този код може да бъде изведен във функция и извикан многократко. Декларира се по същия начин както главната (main) функцията.

```c++
#include <iostream>
void PrintHello()
{
    std::cout << "Hello" << std::endl;
}

int main()
{
     PrintHello();
     PrintHello();
     PrintHello();
     PrintHello();
     return 0;
}
```

---

Функциите имат тип (void, int, bool, ...) и параметри. Типът се записва преди името, а параметрите са между скобите след името на функцията. При повече от един параметър, параметрите се разделят със запетая.

```c++
/*
<тип> <име>(<параметри>){
    <имплементация>
}
*/
int sum(int a, int b)
{
    return a + b;
}
```

## 2) Пример:

```c++
#include <iostream>
double squared(double n){
    return n*n;
}
int main()
{
     double a;
     std::cin >> a;
     std::cout << „a^2 = „ << squared(a);
     return 0;
}
```