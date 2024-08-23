#include <iostream>
int main()
{
    // Computes the volume of a sphere
    const double PI = 3.14159;
    double radius = 0.0;

    std::cout << "Enter the radius of the sphere: ";
    std::cin >> radius;

    double volume = 4.0 * radius * radius * radius / 3.0;
    std::cout << "The volume of a sphere of radius "
              << radius << " inches is " << volume
              << " cubic inches.\n";

    return 0;
} // end program
