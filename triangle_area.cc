/*
 *        File: triangle_area.cc
 *      Author: Jonah Brautigam
 *        Date: 2/10/2021
 * Description: Finds area of a triangle.
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[]){

    string user_cont;
    do
    {
        cout << "\nEnter length of first side: "; // Asks user for first side
        double side_1;
        cin >> side_1;

        cout << "\nEnter length of second side: "; // Asks user for second side
        double side_2;
        cin >> side_2;

        cout << "\nEnter length of third side: "; // Asks user for third side
        double side_3;
        cin >> side_3;

        if ((side_1 + side_2 > side_3) && (side_1 + side_3 > side_2) && (side_3 + side_2 > side_1)) // Checks for valid triangle
        {
            double s; // Calculates for s
            s = (side_1 + side_2 + side_3) / 2;

            double area; // Calculates for area
            area = sqrt(s * (s - side_1) * (s - side_2) * (s - side_3));

            cout << fixed << setprecision(2); // Sets precision to 2 decimal places

            cout << "\nArea of the triangle: " << area << endl; // Output for valid triangle
        }
        else
        {
            cout << "\nError: Invalid triangle." << endl; // Output for invalid triangle
        }

        cout << "\nDo you want to continue(y/n): "; // Asks if the user wants to continue
        cin >> user_cont;

    } while (user_cont != "n");

    cout << "\nDONE!"; // Output for completed program

    return 0;
}//main
