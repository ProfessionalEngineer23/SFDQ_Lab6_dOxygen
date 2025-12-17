/** @file Shape.cpp
 *  @brief Lab 6 dOxygen test example (Shape/Triangle).
 */

// @file is for file description
// @brief is for begining of a brief description
// @param is for parameters
// @return is for return value description


#include <iostream>
using namespace std;

/** @brief Abstract base class representing a geometric shape. */
class Shape
{
public:
    /** @brief Calculate the area of the shape.
     *  @return Area as an integer.
     */
    virtual int getArea() = 0;

    /** @brief Set the width.
     *  @param w Width value.
     */
    void setWidth(int w)
    {
        width = w;
    }

    /** @brief Set the height.
     *  @param h Height value.
     */
    void setHeight(int h)
    {
        height = h;
    }

protected:
    /** Width of the shape. */
    int width;
    
    /** Height of the shape. */
    int height;
};

/** @brief Triangle shape implementation. */
class Triangle : public Shape
{
public:
    /** @brief Calculate triangle area.
     *  @return Triangle area as an integer.
     */
    int getArea()
    {
        return (width * height) / 2;
    }
};

/** @brief Program entry point.
 *  @return Exit status code.
 */

int main(void)
{
    Triangle Tri;
    Tri.setWidth(5);
    Tri.setHeight(7);
    cout << "Total Triangle area: " << Tri.getArea() << endl;
    return 0;
}
