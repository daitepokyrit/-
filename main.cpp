#include <iostream>
#include <vector>

int main()
{
    std::vector<int> spisok = {1, 2, 3, 4};

    // Удаляем элемент по индексу 1 (аналог pop(1))
    spisok.erase(spisok.begin() + 1);

    // Вывод результатов
    std::cout << "[";
    for (size_t i = 0; i < spisok.size(); ++i)
    {
        std::cout << spisok[i];
        if (i != spisok.size() - 1)
        {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl; // [1, 3, 4]

    return 0;
}