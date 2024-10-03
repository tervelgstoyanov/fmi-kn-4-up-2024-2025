# Как да си инсталираме VS Code на Windows за C++

## 1) Изтеглете VS Code от [тук](https://code.visualstudio.com/download)

## 2) Изтеглете C/C++ extension за VS Code от [тук](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) за форматиране и помощ с писането  или като натиснете **Ctrl + Shift + x** след това ви се отваря менюто с extension-ите и потърсете C/C++

**Shortcut за форматиране на страницата: Ctrl + Alt + F**

[пожелание]: auto formating  - Отворете настройките (Ctrl + ",") и потърсете `format on type`

## 3) Изтегляне на компилатор за C++ 

1. Изтеглете следният архив:
- за 32 битова ОС ZIP [тук](https://github.com/brechtsanders/winlibs_mingw/releases/download/14.2.0posix-18.1.8-12.0.0-ucrt-r1/winlibs-i686-posix-dwarf-gcc-14.2.0-mingw-w64ucrt-12.0.0-r1.zip)
- за 64 битова ОС ZIP [тук](https://github.com/brechtsanders/winlibs_mingw/releases/download/14.2.0posix-18.1.8-12.0.0-ucrt-r1/winlibs-x86_64-posix-seh-gcc-14.2.0-mingw-w64ucrt-12.0.0-r1.zip)
- за 32 битова ОС 7-ZIP [тук](https://github.com/brechtsanders/winlibs_mingw/releases/download/14.2.0posix-18.1.8-12.0.0-ucrt-r1/winlibs-i686-posix-dwarf-gcc-14.2.0-mingw-w64ucrt-12.0.0-r1.7z)
- за 64 битова ОС 7-ZIP [тук](https://github.com/brechtsanders/winlibs_mingw/releases/download/14.2.0posix-18.1.8-12.0.0-ucrt-r1/winlibs-x86_64-posix-seh-gcc-14.2.0-mingw-w64ucrt-12.0.0-r1.7z)


2. Разархивирайте в папка по ваш избор.

3. Копирайте пълния път до тази папка.

## 4) Настройване на enviroment променливите
1. Потърсете в търсачката на Windows: `среда`/`enviroment`
2. Влезте на `Enviroment Variables` 
3. Натиснете `PATH` в `user variables`/`потребителски променливи` и после `Edit`
![](http://i.imgur.com/gHPOIh5.png)
1. Добавете нов път като натиснете `New`
2. Поставете пътя, който сте копирали
*Забележка: уверете се, че пътя който сте добавили завършва на '\bin'*
3. Компилаторът е нагласен

## 5) *[Пожелание]* Ако не искате да стартирате програмите си през командния прозорец изтеглете Code Runner

[The Code Runner extension](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner).
*Инсталацията е като на C/C++ extension*

Отворете настройките (Ctrl + ",")
Потърсете Code Runner и от някоя от настройките отворете settings.json:
![](https://i.ibb.co/1J1H25p/1.png)
Добавете следните настройки, за да можете да стартирате програмите си от бутона горе вдясно:
```json
"code-runner.executorMap": {
        "cpp": "g++ $fileName -o $fileNameWithoutExt && $fileNameWithoutExt"
    },
"code-runner.saveAllFilesBeforeRun": true
```

![](https://i.ibb.co/xJJdLTH/2.png)

You're ready to go :)

## Компилиране през командния ред

1. Компилация
    - g++ "filename" - компилира кода и създава изпълним файл с име `a.exe`
    - g++ "filename" -o "exefilename" - компилира кода и създава изпълним файл с име `exefilename`
*Забележка: след всяка промяна трябва да компилирате своя код за да се отразят промените в изпълния файл*
2. Пускане на програмата
    - "exefilename" - отваря изпълнимия файл (стартира вашата програма)


### Готови сте да напишете своята първа програма! 