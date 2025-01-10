# 🎯 Система за управление на социална мрежа "ConnectBG"

## 📝 Описание на задачата

Да се създаде система за управление на социална мрежа, използвайки структури в C++. Системата трябва да поддържа потребители, публикации, коментари, и приятелства между потребителите.

## 🔍 Изисквания към структурите

### Structure `User`

```cpp
struct User {
    int id;
    char username[50];
    char password[64];  // encrypted password
    char email[100];
    char name[100];
    Date birth_date;
    bool online_status;
    int friend_count;
    int* friend_list;  // array of friend IDs
    int post_count;
};
```

### Structure `Post`

```cpp
struct Post {
    int id;
    int author_id;
    char content[1000];
    Date posting_date;
    int like_count;
    int comment_count;
    Comment* comments;
    bool is_public;
};
```

### Structure `Comment`

```cpp
struct Comment {
    int id;
    int author_id;
    char content[500];
    Date comment_date;
    int like_count;
};
```

### Structure `SocialNetwork`

```cpp
struct SocialNetwork {
    User* users;
    int user_count;
    Post* posts;
    int post_count;
    // Additional helper fields
};
```

## 📋 Задължителни функционалности

1. **Управление на потребители**

   - Регистрация на нов потребител
   - Вход в системата
   - Изход от системата
   - Търсене на потребител по име или имейл
   - Изтриване на профил

2. **Управление на приятелства**

   - Изпращане на заявка за приятелство
   - Приемане/Отхвърляне на заявка
   - Премахване на приятел
   - Извеждане на списък с приятели
   - Извеждане на общи приятели между двама потребители

3. **Управление на публикации**

   - Създаване на публикация
   - Изтриване на публикация
   - Редактиране на публикация
   - Харесване/Премахване на харесване
   - Филтриране на публикации по дата/автор/популярност

4. **Управление на коментари**
   - Добавяне на коментар
   - Изтриване на коментар
   - Харесване на коментар
   - Извеждане на всички коментари към публикация

## 🔧 Технически изисквания

1. **Работа с динамична памет**

   - Правилно заделяне на памет за масиви от приятели и коментари
   - Освобождаване на паметта при изтриване
   - Преоразмеряване на масиви при нужда

2. **Валидация на данните**

   - Проверка за уникалност на потребителски имена и имейли
   - Валидация на входни данни (дължина, формат)
   - Проверка за права за достъп при операции

3. **Ефективност**
   - Използване на подходящи структури от данни за бързо търсене
   - Оптимизация на паметта
   - Ефективни алгоритми за филтриране и сортиране

## 📊 Примерно използване

```cpp
int main() {
    SocialNetwork network;
    initialize_network(&network);

    // User registration
    register_user(&network, "ivan_ivanov", "parola123", "ivan@mail.bg");
    register_user(&network, "maria_p", "pass456", "maria@mail.bg");

    // Create post
    create_post(&network, 0, "Здравейте! Това е моята първа публикация!", true);

    // Add comment
    add_comment(&network, 1, 0, "Привет! Добре дошъл!");

    // Free memory
    free_network(&network);
    return 0;
}
```
