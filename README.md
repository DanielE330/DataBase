# 🗃️ DataBase

> Мой первый серьёзный проект на C++ — десктопное приложение на [Qt](https://www.qt.io/) для чтения `.txt`-файлов и преобразования их в таблицу.

---

## 💡 О проекте

Хоть с виду это просто куча файлов, которые кажутся нелогичными — благодаря Qt и `.pro`-файлу всё в самом приложении выглядит опрятно.

Система чтения и записи разработана самостоятельно — это мой повод для гордости: она писалась целую ночь, и периодически приходилось её переписывать заново.

Все функции распределены по отдельным классам, каждый со своей зоной ответственности.

## 📂 Структура

| Файл | Отвечает за |
|---|---|
| [`databaseio.cpp`](https://github.com/DanielE330/DataBase/blob/main/databaseio.cpp) | Запись и чтение данных |
| [`crud.cpp`](https://github.com/DanielE330/DataBase/blob/main/crud.cpp) | Изменение таблицы (Create / Read / Update / Delete) |
| [`mainwindow.ui`](https://github.com/DanielE330/DataBase/blob/main/mainwindow.ui) | Главное окно приложения |
| [`aboutme.ui`](https://github.com/DanielE330/DataBase/blob/main/aboutme.ui) | Окно "об авторе" |

По умолчанию данные хранятся в [`fileDB.txt`](https://github.com/DanielE330/DataBase/blob/main/release/fileDB.txt), но пользователь может указать свой путь.

## 🎨 Дизайн

Графический интерфейс оформлен в нежно-голубых тонах.

## 🏃 Запуск

```bash
qmake DataBase.pro
make
```

Либо открыть `DataBase.pro` в Qt Creator и запустить оттуда.
