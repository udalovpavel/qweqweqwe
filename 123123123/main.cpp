#include <SFML/Graphics.hpp>

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <cstdlib>
using namespace std;

using namespace sf;

#include <SFML/System.hpp>
#include <cstdlib> 
#include <ctime>   
#include <vector>  

struct ColorComparator { //компоратор для цветов
    bool operator()(const sf::Color& lhs, const sf::Color& rhs) const {
        return lhs.toInteger() < rhs.toInteger();
    }
};

int getIndex(const std::vector<sf::Vector2i>& v, sf::Vector2i K) //метод для вычисления индекса квадрата
{
    auto it = std::find(v.begin(), v.end(), K); //создание итератора it в массиве vector<sf::Vector2i>& с шагом sf::Vector2i 


    if (it != v.end())
    {


        int index = std::distance(v.begin(),it); //вычисление индекса квадрата
        return index;
    }
    else {

        return -1;
    }
}

int main()
{


    sf::RenderWindow window(sf::VideoMode(800, 800), "SFML Board"); // создание окна


    const int squareSize = 100; // размер квадрата
    const int numSquares = 8; // кол-во квадратов в строке
    


    std::vector<sf::Color> colors; // создание массива цветов
    for (int i = 0; i < numSquares * numSquares; ++i) // выбирается рандомный цвет
    {
        int colorIndex = std::rand() % 3;
        switch (colorIndex)
        {
        case 0:
            colors.push_back(sf::Color::Green);
            break;
        case 1:
            colors.push_back(sf::Color::Yellow);
            break;
        case 2:
            colors.push_back(sf::Color::Blue);
            break;
        }
    }


    sf::RectangleShape robot(sf::Vector2f(squareSize, squareSize)); // создание робота
    robot.setFillColor(sf::Color::Red); 
    robot.setPosition(0, 0);
   


    std::map<sf::Color, std::vector<sf::Vector2i>, ColorComparator> squareGroups; // создание массива с квадратами
    for (int i = 0; i < numSquares; ++i)
    {
        for (int j = 0; j < numSquares; ++j)
        {
            sf::Color color = colors[i * numSquares + j];
            squareGroups[color].push_back(sf::Vector2i(i, j));
        }
    }
    

    int squareIndex = 0; 
    int currentX = 0;
    int currentY = 0;

    sf::Clock clock; //таймер

    float moveInterval = 0.3f; //скорость
    while (window.isOpen()) //отрисовка
    {

        sf::Event event;
        while (window.pollEvent(event)) // закрытие окна через крестик
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }


        if (clock.getElapsedTime().asSeconds() >= moveInterval)
        {
            auto it = squareGroups.begin(); // создание итератора для движения по массиву квадратов
            const std::vector<sf::Vector2i>& currentGroup = it->second; //берем y 
            const sf::Vector2i& currentSquare = currentGroup[squareIndex]; // берем конкретный квадрат
            int nextSquareX = currentSquare.x; // x квадрата
            int nextSquareY = currentSquare.y; // у квадрата
            
            sf::Color nextColor = colors[nextSquareX * numSquares + nextSquareY]; //цвет группы, которую мы сортируем
            sf::Color currColor = colors[currentX * numSquares + currentY]; //цвет на котором стоит робот
            if (nextColor != currColor) {
                colors[currentX * numSquares + currentY] = nextColor; // меняем цвета местами
                colors[nextSquareX * numSquares + nextSquareY] = currColor; // меняем цвета местами
                int index = getIndex(squareGroups[currColor], sf::Vector2i(currentX, currentY)); //берем индекса квадрата, при помощи метода GetIndex
                squareGroups[currColor][index] = currentSquare; // меняем значение в главном массиве
            }

            currentY++; 
            if (currentY > 7) {
                currentY = 0;
                currentX++;
            }


            robot.setPosition(nextSquareX * squareSize, nextSquareY * squareSize); // установка позиции робота
            

            ++squareIndex;//счётчик отсортированных квадратов


            if (squareIndex >= currentGroup.size()) // проверка на out of range
            {

                squareGroups.erase(squareGroups.begin()); //очиста векторов в squareGroups
                squareIndex = 0;


                if (squareGroups.empty()) //проверка окончания сортировки
                {

                    moveInterval = 0.0f; // остановка робота
                }
            }

            clock.restart();
        }


        window.clear();


        for (int i = 0; i < numSquares; ++i) // отрисовка квадратов
        {
            for (int j = 0; j < numSquares; ++j)
            {

                sf::RectangleShape square(sf::Vector2f(squareSize, squareSize));


                square.setFillColor(colors[i * numSquares + j]);


                square.setPosition(i * squareSize, j * squareSize);


                window.draw(square);
            }
        }


        window.draw(robot); //отрисовка робота


        window.display();
    }

    return 0;
}