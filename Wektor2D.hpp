

class Wektor2D
{
private:
    double x;
    double y;

public:
    // Konstruktor domyœlny, inicjalizacja na [0, 0]
    Wektor2D() : x(0), y(0) {}

    // Konstruktor z nadanymi wspó³rzêdnymi
    Wektor2D(double x, double y) : x(x), y(y) {}

    // Setter i getter dla x
    void   setX(double x) { this->x = x; }
    double getX() const { return x; }

    // Setter i getter dla y
    void   setY(double y) { this->y = y; }
    double getY() const { return y; }

    // Operator dodawania wektorów
    Wektor2D operator+(const Wektor2D& other) const { return Wektor2D(x + other.x, y + other.y); }

    // Operator iloczynu skalarnego
    double operator*(const Wektor2D& other) const { return x * other.x + y * other.y; }
};
