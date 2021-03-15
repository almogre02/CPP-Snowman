#include <iostream>
#include <string>
#include "doctest.h"
#include <stdexcept>
#include "snowman.hpp"

const int eight = 8;
const int ten = 10;
const int one_hundred = 100;
const int one_thousand = 1000;
const int ten_thousand = 10000;
const int hundred_thousand=100000;
const int one_million = 1000000;
const int ten_million=10000000;
using namespace std;



namespace ariel {

    string snowman(int str) {
        string snow_man;
        if (to_string(str).length() > eight){
            throw out_of_range("Enter 8 digits number between 1 to 4");
        }
        if (to_string(str).length() < eight){
            throw out_of_range("Enter 8 digits number between 1 to 4");
        }
        switch (str / ten_million % ten) {
        case 1:
            snow_man=snow_man+ " \n _===_\n";
            break;
        case 2:
            snow_man = snow_man + "  ___ \n .....\n";
            break;
        case 3:
            snow_man = snow_man + "   _  \n  /_\\ \n";
            break;
        case 4:
            snow_man = snow_man + "  ___ \n (_*_)\n";
            break;
        default:
            throw out_of_range("Enter numbers between 1 to 4");
        }
        switch (str / one_thousand % ten) {
        case 1:case 3:case 4:
            snow_man = snow_man + " ";
            break;
        case 2:
            snow_man = snow_man + "\\";
            break;
        default:
            throw out_of_range("Enter numbers between 1 to 4");
        }
        switch (str / hundred_thousand % ten) {
        case 1:
            snow_man = snow_man + "(.";
            break;
        case 2:
            snow_man = snow_man + "(o";
            break;
        case 3:
            snow_man = snow_man + "(O";
            break;
        case 4:
            snow_man = snow_man + "(-";
            break;
        default:
            throw out_of_range("Enter numbers between 1 to 4");
        }
        switch (str / one_million % ten) {
        case 1:
            snow_man = snow_man + ",";
            break;
        case 2:
            snow_man = snow_man + ".";
            break;
        case 3:
            snow_man = snow_man + "_";
            break;
        case 4:
            snow_man = snow_man + " ";
            break;
        default:
            throw out_of_range("Enter numbers between 1 to 4");
        }
        switch (str / ten_thousand % ten) {
        case 1:
            snow_man = snow_man + ".)";
            break;
        case 2:
            snow_man = snow_man + "o)";
            break;
        case 3:
            snow_man = snow_man + "O)";
            break;
        case 4:
            snow_man = snow_man + "-)";
            break;
        default:
            throw out_of_range("Enter numbers between 1 to 4");
        }
        switch (str / one_hundred % ten) {
        case 1:case 3:case 4:
            snow_man = snow_man + " \n";
            break;
        case 2:
            snow_man = snow_man + "/\n";
            break;
        default:
            throw out_of_range("Enter numbers between 1 to 4");
        }
        switch (str / one_thousand % ten) {
        case 1:
            snow_man = snow_man + "<";
            break;
        case 2:
            snow_man = snow_man + " ";
            break;
        case 3:
            snow_man = snow_man + "/";
            break;
        case 4:
            snow_man = snow_man + " ";
            break;
        default:
            throw out_of_range("Enter numbers between 1 to 4");
        }
        switch (str / ten % ten) {
        case 1:
            snow_man = snow_man + "( : )";
            break;
        case 2:
            snow_man = snow_man + "(] [)";
            break;
        case 3:
            snow_man = snow_man + "(> <)";
            break;
        case 4:
            snow_man = snow_man + "(   )";
            break;
        default:
            throw out_of_range("Enter numbers between 1 to 4");
        }
        switch (str / one_hundred % ten) {
        case 1:
            snow_man = snow_man + ">\n";
            break;
        case 2:
            snow_man = snow_man + " \n";
            break;
        case 3:
            snow_man = snow_man + "\\\n";
            break;
        case 4:
            snow_man = snow_man + " \n";
            break;
        default:
            throw out_of_range("Enter numbers between 1 to 4");
        }
                switch (str % ten) {
        case 1:
            snow_man = snow_man + " ( : )\n";
            break;
        case 2:
            snow_man = snow_man + " (\" \")\n";
            break;
        case 3:
            snow_man = snow_man + " (___)\n";
            break;
        case 4:
            snow_man = snow_man + " (   )\n";
            break;
        default:
            throw out_of_range("Enter numbers between 1 to 4");
        }

       
        cout << snow_man << endl;

        return snow_man;
    
    }
    }
