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




//int main()
//{
//
//    int blue_counter = 0;
//    int green_counter = 0;
//    int yellow_counter = 0;
//    int pole[8][8];
//    for (int i = 0; i < 8; i++)
//    {
//        for (int j = 0; j < 8; j++)
//        {
//            int temp = rand() % 4;
//
//            switch (temp)
//            {
//            case 0:
//                pole[i][j] = temp;
//                break;
//            case 1:
//                if (blue_counter <= 3)
//                {
//                    pole[i][j] = temp;
//                    blue_counter++;
//                }
//                else
//                {
//                    pole[i][j] = 0;
//                }
//                break;
//            case 2:
//                if (green_counter <= 3)
//                {
//                    pole[i][j] = temp;
//                    green_counter++;
//                }
//                else
//                {
//                    pole[i][j] = 0;
//                }
//                break;
//            case 3:
//                if (yellow_counter <= 3)
//                {
//                    pole[i][j] = temp;
//                    yellow_counter++;
//                }
//                else
//                {
//                    pole[i][j] = 0;
//                }
//                break;
//            }
//        }
//    }
//
//   
//
//    sf::Font font; // установка шрифта в программе
//    if (!font.loadFromFile("arialmt.ttf"))
//    {
//    }
//
//    sf::CircleShape robot(50, 3);
//
//    robot.setFillColor(sf::Color::Red);
//
//    sf::RectangleShape rectangle_1(sf::Vector2f(100, 100));
//    rectangle_1.setFillColor(sf::Color::Blue);
//
//    sf::RectangleShape rectangle_2(sf::Vector2f(100, 100));
//    rectangle_2.setFillColor(sf::Color::Blue);
//
//    sf::RectangleShape rectangle_3(sf::Vector2f(100, 100));
//    rectangle_3.setFillColor(sf::Color::Blue);
//
//    sf::RectangleShape rectangle_11(sf::Vector2f(100, 100));
//    rectangle_11.setFillColor(sf::Color::Yellow);
//    sf::RectangleShape rectangle_22(sf::Vector2f(100, 100));
//    rectangle_22.setFillColor(sf::Color::Yellow);
//    sf::RectangleShape rectangle_33(sf::Vector2f(100, 100));
//    rectangle_33.setFillColor(sf::Color::Yellow);
//
//    sf::RectangleShape rectangle_111(sf::Vector2f(100, 100));
//    rectangle_111.setFillColor(sf::Color::Green);
//    sf::RectangleShape rectangle_222(sf::Vector2f(100, 100));
//    rectangle_222.setFillColor(sf::Color::Green);
//    sf::RectangleShape rectangle_333(sf::Vector2f(100, 100));
//    rectangle_333.setFillColor(sf::Color::Green);
//
//        blue_counter = 0;
//        green_counter = 0;
//        yellow_counter = 0;
//
//    for (int i = 0; i < 8; i++) {
//        for (int j = 0; j < 8; j++) {
//            if (pole[i][j] != 0) {
//                switch (pole[i][j])
//                {
//                case 1:
//                    switch (blue_counter) {
//                    case 0:
//                        rectangle_1.setPosition(i * 100, j * 100);
//                        blue_counter++;
//                        break;
//                    case 1:
//                        rectangle_2.setPosition(i * 100, j * 100);
//                        blue_counter++;
//                        break;
//                    case 2:
//                        rectangle_3.setPosition(i * 100, j * 100);
//                        blue_counter++;
//                        break;
//                    }
//                break;
//                    case 2:
//                        
//                        switch (green_counter) {
//                        case 0:
//                            rectangle_111.setPosition(i * 100, j * 100);
//                            green_counter++;
//                            break;
//                        case 1:
//
//                            rectangle_222.setPosition(i * 100, j * 100);
//                            green_counter++;
//                            break;
//                        case 2:
//                            rectangle_333.setPosition(i * 100, j * 100);
//                            green_counter++;
//                            break;
//                        }
//                    break;
//                    case 3:
//                        switch (yellow_counter) {
//                        case 0:
//                            rectangle_11.setPosition(i * 100, j * 100);
//                            yellow_counter ++;
//                            break;
//                        case 1:
//                            rectangle_22.setPosition(i * 100, j * 100);
//                            yellow_counter++;
//                            break;
//                        case 2:
//                            rectangle_33.setPosition(i * 100, j * 100);
//                            yellow_counter++;
//                            break;
//                        }
//                        break;
//                    
//                }
//            }
//        }
//    }
//
//    sf::RectangleShape line_1(sf::Vector2f(800, 3));
//    sf::RectangleShape line_2(sf::Vector2f(800, 3));
//    sf::RectangleShape line_3(sf::Vector2f(800, 3));
//    sf::RectangleShape line_4(sf::Vector2f(800, 3));
//    sf::RectangleShape line_5(sf::Vector2f(800, 3));
//    sf::RectangleShape line_6(sf::Vector2f(800, 3));
//    sf::RectangleShape line_7(sf::Vector2f(800, 3));
//    sf::RectangleShape line_8(sf::Vector2f(800, 3));
//    sf::RectangleShape line_11(sf::Vector2f(800, 3));
//
//    sf::RectangleShape line_22(sf::Vector2f(800, 3));
//    sf::RectangleShape line_33(sf::Vector2f(800, 3));
//    sf::RectangleShape line_44(sf::Vector2f(800, 3));
//    sf::RectangleShape line_55(sf::Vector2f(800, 3));
//    sf::RectangleShape line_66(sf::Vector2f(800, 3));
//    sf::RectangleShape line_77(sf::Vector2f(800, 3));
//    sf::RectangleShape line_88(sf::Vector2f(800, 3));
//
//    line_11.rotate(90);
//    line_22.rotate(90);
//    line_33.rotate(90);
//    line_44.rotate(90);
//    line_55.rotate(90);
//    line_66.rotate(90);
//    line_77.rotate(90);
//    line_88.rotate(90);
//
//    line_11.setFillColor(sf::Color::Black);
//    line_22.setFillColor(sf::Color::Black);
//    line_33.setFillColor(sf::Color::Black);
//    line_44.setFillColor(sf::Color::Black);
//    line_55.setFillColor(sf::Color::Black);
//    line_66.setFillColor(sf::Color::Black);
//    line_77.setFillColor(sf::Color::Black);
//    line_88.setFillColor(sf::Color::Black);
//
//    line_2.setFillColor(sf::Color::Black);
//    line_1.setFillColor(sf::Color::Black);
//    line_3.setFillColor(sf::Color::Black);
//    line_4.setFillColor(sf::Color::Black);
//    line_5.setFillColor(sf::Color::Black);
//    line_6.setFillColor(sf::Color::Black);
//    line_7.setFillColor(sf::Color::Black);
//    line_8.setFillColor(sf::Color::Black);
//
//    line_22.setPosition(100, 0);
//    line_88.setPosition(200, 0);
//    line_33.setPosition(300, 0);
//    line_44.setPosition(400, 0);
//    line_55.setPosition(500, 0);
//    line_66.setPosition(600, 0);
//    line_77.setPosition(700, 0);
//
//    line_2.setPosition(0, 100);
//    line_3.setPosition(0, 200);
//    line_4.setPosition(0, 300);
//    line_5.setPosition(0, 400);
//    line_6.setPosition(0, 500);
//    line_7.setPosition(0, 600);
//    line_8.setPosition(0, 700);
//    RenderWindow window(VideoMode(800, 800), L"Новый проект", Style::Default); // создание окна
//
//    window.setVerticalSyncEnabled(true); // установка вертикальной синзронизации по умлочанию
//
//
//
//
//    while (window.isOpen())
//    {
//        window.clear(Color::White); // визуализация
//        window.draw(line_1);
//        window.draw(line_2);
//        window.draw(line_3);
//        window.draw(line_4);
//        window.draw(line_5);
//        window.draw(line_6);
//        window.draw(line_7);
//        window.draw(line_8);
//        window.draw(line_11);
//        window.draw(line_22);
//        window.draw(line_33);
//        window.draw(line_44);
//        window.draw(line_55);
//        window.draw(line_66);
//        window.draw(line_77);
//        window.draw(line_88);
//        window.draw(rectangle_1);
//        window.draw(rectangle_2);
//        window.draw(rectangle_3);
//        window.draw(rectangle_11);
//        window.draw(rectangle_22);
//        window.draw(rectangle_33);
//        window.draw(rectangle_111);
//        window.draw(rectangle_222);
//        window.draw(rectangle_333);
//        window.draw(robot);
//        window.display(); // отображение экрана
//        int i = 0;
//        bool vverh = false;
//        while(i<8)
//        {
//            if (!vverh) 
//            {
//                for (int j = 0; j < 8; j++)
//                {
//                    switch (pole[i][j])
//                    {
//                    case 0:
//                        break;
//                    case 1:
//                        bool vstal_na_mesto = false;
//                        if (i > 0 && i < 7)
//                        {
//                            if (j > 0 && j < 7)
//                            {
//                                if (pole[i + 1][j] == 1 || pole[i - 1][j] == 1 || pole[i][j + 1] == 1 || pole[i][j - 1] == 1)
//                                {
//                                    break;
//                                }
//                            }
//                            else if (j == 0)
//                            {
//                                if (pole[i + 1][j] == 1 || pole[i - 1][j] == 1 || pole[i][j + 1] == 1)
//                                {
//                                    break;
//                                }
//                            }
//                            else if (j == 7)
//                            {
//                                if (pole[i + 1][j] == 1 || pole[i - 1][j] == 1 || pole[i][j - 1] == 1)
//                                {
//                                    break;
//                                }
//                            }
//                        }
//                        else if (i == 0)
//                        {
//                            if (j > 0 && j < 7)
//                            {
//                                if (pole[i + 1][j] == 1 || pole[i][j + 1] == 1 || pole[i][j - 1] == 1)
//                                {
//                                    break;
//                                }
//                            }
//                            else if (j == 0)
//                            {
//                                if (pole[i + 1][j] == 1|| pole[i][j + 1] == 1)
//                                {
//                                    break;
//                                }
//                            }
//                            else if (j == 7)
//                            {
//                                if (pole[i + 1][j] == 1 ||pole[i][j - 1] == 1)
//                                {
//                                    break;
//                                }
//                            }
//                        }
//                        else if (i == 7)
//                        {
//                            if (j > 0 && j < 7)
//                            {
//                                if ( pole[i - 1][j] == 1 || pole[i][j + 1] == 1 || pole[i][j - 1] == 1)
//                                {
//                                    break;
//                                }
//                            }
//                            else if (j == 0)
//                            {
//                                if ( pole[i - 1][j] == 1 || pole[i][j + 1] == 1)
//                                {
//                                    break;
//                                }
//                            }
//                            else if (j == 7)
//                            {
//                                if ( pole[i - 1][j] == 1 || pole[i][j - 1] == 1)
//                                {
//                                    break;
//                                }
//                            }
//                        }
//                        else
//                        {
//                            pole[i][j] = 0;
//                            while (!vstal_na_mesto)
//                            {
//                               for (int c=j; c<8; c++) // пятимерный перцептрон
//                               {
//
//                                   robot.setPosition(i * 100, j * 100);
//                                   
//                                   Sleep(100);
//                                   window.clear(Color::White); // визуализация
//                                   window.draw(line_1);
//                                   window.draw(line_2);
//                                   window.draw(line_3);
//                                   window.draw(line_4);
//                                   window.draw(line_5);
//                                   window.draw(line_6);
//                                   window.draw(line_7);
//                                   window.draw(line_8);
//                                   window.draw(line_11);
//                                   window.draw(line_22);
//                                   window.draw(line_33);
//                                   window.draw(line_44);
//                                   window.draw(line_55);
//                                   window.draw(line_66);
//                                   window.draw(line_77);
//                                   window.draw(line_88);
//                                   window.draw(rectangle_1);
//                                   window.draw(rectangle_2);
//                                   window.draw(rectangle_3);
//                                   window.draw(rectangle_11);
//                                   window.draw(rectangle_22);
//                                   window.draw(rectangle_33);
//                                   window.draw(rectangle_111);
//                                   window.draw(rectangle_222);
//                                   window.draw(rectangle_333);
//                                   window.draw(robot);
//                                   window.display(); // отображение экрана
//
//                                   if (pole[i][c] > 0)
//                                   {
//                                       continue;
//                                   }
//                                   if (i > 0 && i < 7)
//                                   {
//                                       if (c > 0 && c < 7)
//                                       {
//                                           if (pole[i + 1][c] == 1 || pole[i - 1][c] == 1 || pole[i][c + 1] == 1 || pole[i][c - 1] == 1)
//                                           {
//                                               vstal_na_mesto = true;
//                                               break;
//                                           }
//                                       }
//                                       else if (c == 0)
//                                       {
//                                           if (pole[i + 1][c] == 1 || pole[i - 1][c] == 1 || pole[i][c + 1] == 1)
//                                           {
//                                               vstal_na_mesto = true;
//                                               break;
//                                           }
//                                       }
//                                       else if (c == 7)
//                                       {
//                                           if (pole[i + 1][c] == 1 || pole[i - 1][c] == 1 || pole[i][c - 1] == 1)
//                                           {
//                                               vstal_na_mesto = true;
//                                               break;
//                                           }
//                                       }
//                                   }
//                                   else if (i == 0)
//                                   {
//                                       if (c > 0 && c < 7)
//                                       {
//                                           if (pole[i + 1][c] == 1 || pole[i][c + 1] == 1 || pole[i][c - 1] == 1)
//                                           {
//                                               vstal_na_mesto = true;
//                                               break;
//                                           }
//                                       }
//                                       else if (c == 0)
//                                       {
//                                           if (pole[i + 1][c] == 1 || pole[i][c + 1] == 1)
//                                           {
//                                               vstal_na_mesto = true;
//                                               break;
//                                           }
//                                       }
//                                       else if (c == 7)
//                                       {
//                                           if (pole[i + 1][c] == 1 || pole[i][c - 1] == 1)
//                                           {
//                                               vstal_na_mesto = true;
//                                               break;
//                                           }
//                                       }
//                                   }
//                                   else if (i == 7)
//                                   {
//                                       if (c > 0 && c < 7)
//                                       {
//                                           if (pole[i - 1][c] == 1 || pole[i][c + 1] == 1 || pole[i][c - 1] == 1)
//                                           {
//                                               vstal_na_mesto = true;
//                                               break;
//                                           }
//                                       }
//                                       else if (c == 0)
//                                       {
//                                           if (pole[i - 1][c] == 1 || pole[i][c + 1] == 1)
//                                           {
//                                               vstal_na_mesto = true;
//                                               break;
//                                           } 
//                                       }
//                                       else if (c == 7)
//                                       {
//                                           if (pole[i - 1][c] == 1 || pole[i][c - 1] == 1)
//                                           {
//                                               vstal_na_mesto = true;
//                                               break;
//                                           }
//                                       }
//                                   }
//                               }
//                            }
//                        }
//
//                        robot.setPosition(i * 100, j * 100);
//                        Sleep(100);
//                        window.clear(Color::White); // визуализация
//                        window.draw(line_1);
//                        window.draw(line_2);
//                        window.draw(line_3);
//                        window.draw(line_4);
//                        window.draw(line_5);
//                        window.draw(line_6);
//                        window.draw(line_7);
//                        window.draw(line_8);
//                        window.draw(line_11);
//                        window.draw(line_22);
//                        window.draw(line_33);
//                        window.draw(line_44);
//                        window.draw(line_55);
//                        window.draw(line_66);
//                        window.draw(line_77);
//                        window.draw(line_88);
//                        window.draw(rectangle_1);
//                        window.draw(rectangle_2);
//                        window.draw(rectangle_3);
//                        window.draw(rectangle_11);
//                        window.draw(rectangle_22);
//                        window.draw(rectangle_33);
//                        window.draw(rectangle_111);
//                        window.draw(rectangle_222);
//                        window.draw(rectangle_333);
//                        window.draw(robot);
//                        window.display(); // отображение экрана
//                    }
//                    robot.setPosition(i * 100, j * 100);
//                    Sleep(100);
//                    window.clear(Color::White); // визуализация
//                    window.draw(line_1);
//                    window.draw(line_2);
//                    window.draw(line_3);
//                    window.draw(line_4);
//                    window.draw(line_5);
//                    window.draw(line_6);
//                    window.draw(line_7);
//                    window.draw(line_8);
//                    window.draw(line_11);
//                    window.draw(line_22);
//                    window.draw(line_33);
//                    window.draw(line_44);
//                    window.draw(line_55);
//                    window.draw(line_66);
//                    window.draw(line_77);
//                    window.draw(line_88);
//                    window.draw(rectangle_1);
//                    window.draw(rectangle_2);
//                    window.draw(rectangle_3);
//                    window.draw(rectangle_11);
//                    window.draw(rectangle_22);
//                    window.draw(rectangle_33);
//                    window.draw(rectangle_111);
//                    window.draw(rectangle_222);
//                    window.draw(rectangle_333);
//                    window.draw(robot);
//                    window.display(); // отображение экрана
//
//
//
//
//                }
//                vverh = true;
//                i++;
//            }
//            else
//            {
//                for (int j = 7; j > -1; j--)
//                {
//                    robot.setPosition(i * 100, j * 100);
//                    Sleep(100);
//                    window.clear(Color::White); // визуализация
//                    window.draw(line_1);
//                    window.draw(line_2);
//                    window.draw(line_3);
//                    window.draw(line_4);
//                    window.draw(line_5);
//                    window.draw(line_6);
//                    window.draw(line_7);
//                    window.draw(line_8);
//                    window.draw(line_11);
//                    window.draw(line_22);
//                    window.draw(line_33);
//                    window.draw(line_44);
//                    window.draw(line_55);
//                    window.draw(line_66);
//                    window.draw(line_77);
//                    window.draw(line_88);
//                    window.draw(rectangle_1);
//                    window.draw(rectangle_2);
//                    window.draw(rectangle_3);
//                    window.draw(rectangle_11);
//                    window.draw(rectangle_22);
//                    window.draw(rectangle_33);
//                    window.draw(rectangle_111);
//                    window.draw(rectangle_222);
//                    window.draw(rectangle_333);
//                    window.draw(robot);
//                    window.display(); // отображение экрана
//                }
//                vverh = false;
//                i++;
//            }
//            
//        }
//
//        Event event; // добавляет возможность закрыть программу
//        while (window.pollEvent(event))
//        {
//            if (event.type == Event::Closed)
//                window.close();
//        }
//
//        window.clear(Color::White); // визуализация
//        window.draw(line_1);
//        window.draw(line_2);
//        window.draw(line_3);
//        window.draw(line_4);
//        window.draw(line_5);
//        window.draw(line_6);
//        window.draw(line_7);
//        window.draw(line_8);
//        window.draw(line_11);
//        window.draw(line_22);
//        window.draw(line_33);
//        window.draw(line_44);
//        window.draw(line_55);
//        window.draw(line_66);
//        window.draw(line_77);
//        window.draw(line_88);
//        window.draw(rectangle_1);
//        window.draw(rectangle_2);
//        window.draw(rectangle_3);
//        window.draw(rectangle_11);
//        window.draw(rectangle_22);
//        window.draw(rectangle_33);
//        window.draw(rectangle_111);
//        window.draw(rectangle_222);
//        window.draw(rectangle_333);
//        window.draw(robot);
//        window.display(); // отображение экрана
//
//
//    }
//    return 0;
//}
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <cstdlib> 
#include <ctime>   
#include <vector>  

struct ColorComparator {
    bool operator()(const sf::Color& lhs, const sf::Color& rhs) const {
        return lhs.toInteger() < rhs.toInteger();
    }
};

int getIndex(const std::vector<sf::Vector2i>& v, sf::Vector2i K)
{
    auto it = std::find(v.begin(), v.end(), K);


    if (it != v.end())
    {


        int index = std::distance(v.begin(),it);
        return index;
    }
    else {

        return -1;
    }
}

int main()
{

    std::srand(static_cast<unsigned int>(std::time(nullptr)));


    sf::RenderWindow window(sf::VideoMode(800, 800), "SFML Board");


    const int squareSize = 100;
    const int numSquares = 8;
    


    std::vector<sf::Color> colors;
    for (int i = 0; i < numSquares * numSquares; ++i)
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


    sf::RectangleShape robot(sf::Vector2f(squareSize, squareSize));
    robot.setFillColor(sf::Color::Red);


    robot.setPosition(0, 0);
   
    std::map<sf::Color, std::vector<sf::Vector2i>, ColorComparator> squareGroups;
    for (int i = 0; i < numSquares; ++i)
    {
        for (int j = 0; j < numSquares; ++j)
        {
            sf::Color color = colors[i * numSquares + j];
            squareGroups[color].push_back(sf::Vector2i(i, j));
        }
    }
    

    int robotIndex = 0;
    int groupIndex = 0;
    int squareIndex = 0;
    int currentX = 0;
    int currentY = 0;
    sf::Clock clock;
    float moveInterval = 0.3f;
    while (window.isOpen())
    {

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }


        if (clock.getElapsedTime().asSeconds() >= moveInterval)
        {
            auto it = squareGroups.begin();
            const std::vector<sf::Vector2i>& currentGroup = it->second;
            //std::sort(currentGroup.begin(), currentGroup.end());
            const sf::Vector2i& currentSquare = currentGroup[squareIndex];
            int nextSquareX = currentSquare.x;
            int nextSquareY = currentSquare.y;
            
            sf::Color nextColor = colors[nextSquareX * numSquares + nextSquareY];
            sf::Color currColor = colors[currentX * numSquares + currentY];
            if (nextColor != currColor) {
                colors[currentX * numSquares + currentY] = nextColor;
                colors[nextSquareX * numSquares + nextSquareY] = currColor;
                int index = getIndex(squareGroups[currColor], sf::Vector2i(currentX, currentY));
                squareGroups[currColor][index] = currentSquare;
            }

            currentY++;
            if (currentY > 7) {
                currentY = 0;
                currentX++;
            }
            robot.setPosition(nextSquareX * squareSize, nextSquareY * squareSize);
            

            ++squareIndex;


            if (squareIndex >= currentGroup.size())
            {

                squareGroups.erase(squareGroups.begin());
                squareIndex = 0;


                if (squareGroups.empty())
                {

                    moveInterval = 0.0f;
                }
            }

            clock.restart();
        }


        window.clear();


        for (int i = 0; i < numSquares; ++i)
        {
            for (int j = 0; j < numSquares; ++j)
            {

                sf::RectangleShape square(sf::Vector2f(squareSize, squareSize));


                square.setFillColor(colors[i * numSquares + j]);


                square.setPosition(i * squareSize, j * squareSize);


                window.draw(square);
            }
        }


        window.draw(robot);


        window.display();
    }

    return 0;
}