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

struct ColorComparator { //���������� ��� ������
    bool operator()(const sf::Color& lhs, const sf::Color& rhs) const {
        return lhs.toInteger() < rhs.toInteger();
    }
};

int getIndex(const std::vector<sf::Vector2i>& v, sf::Vector2i K) //����� ��� ���������� ������� ��������
{
    auto it = std::find(v.begin(), v.end(), K); //�������� ��������� it � ������� vector<sf::Vector2i>& � ����� sf::Vector2i 


    if (it != v.end())
    {


        int index = std::distance(v.begin(),it); //���������� ������� ��������
        return index;
    }
    else {

        return -1;
    }
}

int main()
{


    sf::RenderWindow window(sf::VideoMode(800, 800), "SFML Board"); // �������� ����


    const int squareSize = 100; // ������ ��������
    const int numSquares = 8; // ���-�� ��������� � ������
    


    std::vector<sf::Color> colors; // �������� ������� ������
    for (int i = 0; i < numSquares * numSquares; ++i) // ���������� ��������� ����
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


    sf::RectangleShape robot(sf::Vector2f(squareSize, squareSize)); // �������� ������
    robot.setFillColor(sf::Color::Red); 
    robot.setPosition(0, 0);
   


    std::map<sf::Color, std::vector<sf::Vector2i>, ColorComparator> squareGroups; // �������� ������� � ����������
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

    sf::Clock clock; //������

    float moveInterval = 0.3f; //��������
    while (window.isOpen()) //���������
    {

        sf::Event event;
        while (window.pollEvent(event)) // �������� ���� ����� �������
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }


        if (clock.getElapsedTime().asSeconds() >= moveInterval)
        {
            auto it = squareGroups.begin(); // �������� ��������� ��� �������� �� ������� ���������
            const std::vector<sf::Vector2i>& currentGroup = it->second; //����� y 
            const sf::Vector2i& currentSquare = currentGroup[squareIndex]; // ����� ���������� �������
            int nextSquareX = currentSquare.x; // x ��������
            int nextSquareY = currentSquare.y; // � ��������
            
            sf::Color nextColor = colors[nextSquareX * numSquares + nextSquareY]; //���� ������, ������� �� ���������
            sf::Color currColor = colors[currentX * numSquares + currentY]; //���� �� ������� ����� �����
            if (nextColor != currColor) {
                colors[currentX * numSquares + currentY] = nextColor; // ������ ����� �������
                colors[nextSquareX * numSquares + nextSquareY] = currColor; // ������ ����� �������
                int index = getIndex(squareGroups[currColor], sf::Vector2i(currentX, currentY)); //����� ������� ��������, ��� ������ ������ GetIndex
                squareGroups[currColor][index] = currentSquare; // ������ �������� � ������� �������
            }

            currentY++; 
            if (currentY > 7) {
                currentY = 0;
                currentX++;
            }


            robot.setPosition(nextSquareX * squareSize, nextSquareY * squareSize); // ��������� ������� ������
            

            ++squareIndex;//������� ��������������� ���������


            if (squareIndex >= currentGroup.size()) // �������� �� out of range
            {

                squareGroups.erase(squareGroups.begin()); //������ �������� � squareGroups
                squareIndex = 0;


                if (squareGroups.empty()) //�������� ��������� ����������
                {

                    moveInterval = 0.0f; // ��������� ������
                }
            }

            clock.restart();
        }


        window.clear();


        for (int i = 0; i < numSquares; ++i) // ��������� ���������
        {
            for (int j = 0; j < numSquares; ++j)
            {

                sf::RectangleShape square(sf::Vector2f(squareSize, squareSize));


                square.setFillColor(colors[i * numSquares + j]);


                square.setPosition(i * squareSize, j * squareSize);


                window.draw(square);
            }
        }


        window.draw(robot); //��������� ������


        window.display();
    }

    return 0;
}