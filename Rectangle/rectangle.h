class Rectangle {
private:
    float height;
    float width;
public:
    Rectangle();

    Rectangle(float h, float w);

    float get_height();

    void set_height(float h);

    float get_width();

    void set_width(float w);

    float get_area();

    float get_perimeter();
};

