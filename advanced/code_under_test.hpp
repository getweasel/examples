/**
 * Copyright 2018-2020 Pejman Ghorbanzade. All rights reserved.
 */

#pragma once

#include <string>
#include <vector>

/**
 *
 */
struct Date {
    unsigned short _year;
    unsigned short _month;
    unsigned short _day;
};

/**
 *
 */
struct Wizard {
    Date dob;
    float height;
    double weight;
    std::string username;
    std::string fullname;
    std::vector<std::string> wands;
};

/**
 *
 */
Wizard parse_profile(const std::string& path);

/**
 *
 */

void custom_function_1(const Wizard& wizard);
void custom_function_2(const Wizard& wizard);
void custom_function_3(const Wizard& wizard);
