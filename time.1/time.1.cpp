// time.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <iomanip>
int main()
{   
                // std::cin >> std::setw(5) >> max;   ограничение длины выводимого текста
    setlocale(LC_ALL, "RUS");
    std::cout << "1. Время в пути\n\n";
    std::cout << "Enter departure time (HH:MM): ";
    std::string departure;
    std::cin >> departure;
   

    int h = 0;
    int m = 0;

    while (departure[0] > '2' || departure[0] < '0'
        || departure[1] > '9' || departure[1] < '0'
        || departure[3] > '5' || departure[3] < '0'
        || departure[4] > '9' || departure[4] < '0'
        || departure[2] != ':')

         {
             std::cout << "Incorrect data entered\n";
             std::cout << "Enter departure time (HH:MM): ";
             std::cin >> departure;
         }


        std::cout << "Enter arrival time (HH:MM): ";
        std::string arrival;
        std::cin >> arrival;

        while (arrival[0] > '2' || arrival[0] < '0'
            || arrival[1] > '9' || arrival[1] < '0'
            || arrival[3] > '5' || arrival[3] < '0'
            || arrival[4] > '9' || arrival[4] < '0'
            || arrival[2] != ':')
        
             {
                std::cout << "Incorrect data entered\n";
                 std::cout << "Enter arrival time (HH:MM): ";
                 std::cin >> arrival;
             }

    h = ((arrival[0] - departure[0]) * 10 + (arrival[1] - departure[1])); // часы
    m = ((arrival[3] - departure[3]) * 10 + (arrival[4] - departure[4])); // минуты
        
    
    if (h < 0) h += 23;
    if (m < 0) m += 60;

    std::cout << "The trip was: " << h << "h. " << m << " min.";

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
