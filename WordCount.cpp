#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    // Изменение кодировки терминала:
    system("chcp 1251 > nul");
    // Установка цвета фона терминала и цвета текста
    system("color 80");

    cout << endl;

    int count = 0;                                 // Счётчик слов                                             
    string text;                                   // Стринговая переменная для записи строки
    cout << " Введите текст из нескольки слов: ";  // Запрос строки
    getline(cin, text);                            // Запись строки в переменную text

    for (int i = 0; i < text.length(); i++) {      // Цикл проходит по всей строке
        if (text[i] != ' ' && (text[i + 1] == ' '  // Если знак в строке не является пробелом а после него
            || text[i + 1] == '\0')) {             // идёт пробел или конец строки
            count++;                               // счётчик увеличивается на 1
        }
    }

    cout << " Ответ: " << count << endl;           // Выводим кол-во слов в строке


    // Задержка окна консоли:
    system("pause > nul");

    return 0;
}