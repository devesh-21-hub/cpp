/**
 * @file 4-Array-of-class.cpp
 * @author Devesh Kumar (devesh-21-hub)
 * @brief Program to implement array of class.
 * @version 0.1
 * @date 2022-01-11
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
 * We can create array of objects in the same way as we create array of any other data type.
 * If we have a class "student", then "student studentsOfClass[5]" is an array of type "student".
 * studentsOfClass[0], studentsOfClass[1], ..., studentsOfClass[4] are the five instances of the above class.
 */

#include <iostream>
#include <string>

typedef std::string str;
class student
{
    unsigned int rollNumber;

public:
    str name;
    unsigned int enrollmentNumber;
    float height;
    float weight;

    void set_details(unsigned int rn, str student_name, unsigned int en, float ht, float wt)
    {
        rollNumber = rn;
        name = student_name;
        enrollmentNumber = en;
        height = ht;
        weight = wt;
    }

    void get_details()
    {
        std::cout << "Roll Number: " << rollNumber << "\n";
        std::cout << "Name: " << name << "\n";
        std::cout << "Enrollment Number: " << enrollmentNumber << "\n";
        std::cout << "Height: " << height << "\n";
        std::cout << "Weight: " << weight << "\n";
    }
};

int main()
{

    student studentsOfClass[3];

    studentsOfClass[0].set_details(001, "Robert Downey Jr.", 2201, 1.82, 75.6);
    studentsOfClass[1].set_details(002, "Will Smith", 2202, 1.63, 80);
    studentsOfClass[2].set_details(003, "Vin Diesel", 2203, 1.36, 81.5);

    std::cout << "********************\n";
    for (auto i = 0; i < 3; i++)
    {
        std::cout << "********************\n";
        studentsOfClass[i].get_details();
        
    }
    std::cout << "********************\n";
    std::cout << "********************";

    return 0;
}
