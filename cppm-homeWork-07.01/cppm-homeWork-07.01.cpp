#include <iostream>
#define MONE 1


int addition(int a, int b) {

    return a + b;
}

int main()
{

#if MONE == 1

    int a, b;

    std::cout << "Работаю в боевом режиме\n";

    std::cout << "Введите 1 число: ";

    std::cin >> a;

    std::cout  << "Введите 2 число: ";

    std::cin >> b;

    std::cout << "Результат сложения: " << addition(a, b);

#elif MONE == 0

    std::cout << "Работаю в режиме тренировки\n";

#else

    std::cout << "Неизвестный режим. Завершение работы\n";


#endif // MONE == 1

}

