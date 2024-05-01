#include <iostream>
#include <vector>
#include <cmath>

struct Point {
    double x, y;
};

// Функция для вычисления площади многоугольника по его вершинам
double calculateArea(const std::vector<Point>& vertices) {
    int n = vertices.size();
    double area = 0.0;
    for (int i = 0; i < n; ++i) {
        int j = (i + 1) % n;
        area += (vertices[i].x * vertices[j].y - vertices[j].x * vertices[i].y);
    }
    return std::abs(area) / 2.0;
}

int main() {
    int numVertices;
    std::cout << "Введите количество вершин многоугольника: ";
    std::cin >> numVertices;

    std::vector<Point> vertices(numVertices);
    std::cout << "Введите координаты вершин многоугольника (x y):" << std::endl;
    for (int i = 0; i < numVertices; ++i) {
        std::cout << "Вершина " << i + 1 << ": ";
        std::cin >> vertices[i].x >> vertices[i].y;
    }

    double area = calculateArea(vertices);
    std::cout << "Площадь многоугольника: " << area << std::endl;

    return 0;
}
