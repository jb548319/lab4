/*
 *        File: triangle_area.cc
 *      Author: Jonah Brautigam
 *        Date: 2/10/2021
 * Description: Finds area of a triangle.
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[]){

    string user_cont;
    do
    {
        cout << "Enter length of first side: ";
        double side_1;
        cin >> side_1;

        cout << "Enter length of second side: ";
        double side_2;
        cin >> side_2;

        cout << "Enter length of third side: ";
        double side_3;
        cin >> side_3;

        if ((side_1 + side_2 > side_3) && (side_1 + side_3 > side_2) && (side_3 + side_2 > side_1))
        {
            double s;
            s = (side_1 + side_2 + side_3) / 2;

            double area;
        }
        else
        {
            cout << "Error: Invalid triangle." << endl;
        }

        cout << "Do you want to continue(y/n): ";
        cin >> user_cont;

    } while (user_cont != "n");

    cout << "DONE!";

    return 0;
}//main
