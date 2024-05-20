#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include <format>

#include "blueberry_muffins.h";
using namespace std;

inline void keep_window_open()
{
    char ch;
    cin >> ch;
}


string letter_form()
{
    string letter;
    cout << "Enter your name:" << endl;
    string your_name;
    cin >> your_name;
    cout << "Enter the name of the person you want to write to:" << endl;
    string first_name;
    cin >> first_name;
    letter += "Dear " + first_name + "\n" + "How are you? I am fine. I miss you.\n";
    cout << "Enter the name of a friend:" << endl;
    string friend_name;
    cin >> friend_name;
    letter += "Have you seen " + friend_name + " lately?\n";
    cout << "Enter the sex of your friend (m/f):" << endl;
    char friend_sex = 0;
    cin >> friend_sex;
    if (friend_sex == 'm')
    {
        letter += "If you see " + friend_name + " please ask him to call me.\n";
    }
    else if (friend_sex == 'f')
    {
        letter += "If you see " + friend_name + " please ask her to call me.\n";
    }
    cout << "Enter the age of the recipient:" << endl;
    int age;
    cin >> age;
    if (age <= 0 || age >= 110)
    {
        return "you're kidding!";
    }
    letter += "I hear you just had a birthday and you are " + std::to_string(age) + " years old.\n";
    if (age < 12)
    {
        letter += "Next year you will be " + std::to_string(age + 1) + "\n";
    }
    else if (age == 17)
    {
        letter += "Next year you will be able to vote.\n";
    }
    else if (age > 70)
    {
        letter += "I hope you are enjoying retirement.\n";
    }
    letter += "Yours sincerely,\n\n\n" + your_name + "\n";
    return letter;
}

float miles_to_km()
{
    cout << "Please enter the amount of miles to convert to km:\n";
    float miles;
    cin >> miles;
    return miles * 1609;
}

void declare_illegal_var()
{
    // int double = 0;
}

void compare_two_ints()
{
    cout << "Enter two integers separated by a space\n";
    int val1, val2;
    cin >> val1 >> val2;

    if (val1 > val2)
    {
        cout << val1 << " is greater than " << val2 << endl;
        cout << val2 << " is smaller than " << val1 << endl;
    }
    else
    {
        cout << val2 << " is greater than " << val1 << endl;
        cout << val1 << " is smaller than " << val2 << endl;
    }
    cout << "The sum of the two is: " << val1 + val2 << endl;
    cout << "The difference of the two is: " << val1 - val2 << endl;
    cout << "The product of the two is: " << val1 * val2 << endl;
    cout << "The ratio of the two is: " << static_cast<float>(val1) / static_cast<float>(val2) << endl;
}

void compare_three_ints()
{
    int val1, val2, val3;
    cin >> val1 >> val2 >> val3;
    int min_val = val1;
    int max_val = val1;

    if (val2 < min_val)
    {
        min_val = val2;
    }
    if (val2 > max_val)
    {
        max_val = val2;
    }

    if (val3 < min_val)
    {
        min_val = val3;
    }
    if (val3 > max_val)
    {
        max_val = val3;
    }

    const int mid_val = val1 + val2 + val3 - min_val - max_val;

    cout << "Min: " << min_val << ", Mid: " << mid_val << ", Max: " << max_val << endl;
}

void compare_three_strings()
{
    string val1, val2, val3, mid_val;
    cin >> val1 >> val2 >> val3;
    auto min_val = val1;
    auto max_val = val1;


    if (val2 < min_val)
    {
        min_val = val2;
    }
    if (val2 > max_val)
    {
        max_val = val2;
    }

    if (val3 < min_val)
    {
        min_val = val3;
    }
    if (val3 > max_val)
    {
        max_val = val3;
    }

    if (max_val != val1)
    {
        if (min_val != val1)
        {
            mid_val = val1;
        }
    }
    else if (max_val != val2)
    {
        if (min_val != val2)
        {
            mid_val = val2;
        }
    }
    else if (max_val != val3)
    {
        if (min_val != val3)
        {
            mid_val = val3;
        }
    }

    cout << "Min: " << min_val << ", Mid: " << mid_val << ", Max: " << max_val << endl;
}

void is_even()
{
    cout << "Enter an integer:\n";
    int val1;
    cin >> val1;
    if (val1 % 2 == 0)
    {
        cout << "The value " << val1 << " is an even number" << endl;
    }
    else
    {
        cout << "The value " << val1 << " is an odd number" << endl;
    }
}

void print_number()
{
    string val;
    int num = 0;
    cout << "Enter a number:\n";
    cin >> val;
    string res = "Not a number I know";
    if (val == "one")
    {
        num = 1;
        res = std::to_string(num);
    }
    else if (val == "two")
    {
        num = 2;
        res = std::to_string(num);
    }
    else if (val == "three")
    {
        num = 3;
        res = std::to_string(num);
    }
    else if (val == "four")
    {
        num = 4;
        res = std::to_string(num);
    }

    cout << "Your number is " << res << endl;
}

void guess_operation()
{
    char input;
    double val1, val2;
    cout << "Enter operation:\n";
    cin >> input >> val1 >> val2;

    if (input == '+')
    {
        cout << val1 + val2 << endl;
    }
    else if (input == '-')
    {
        cout << val1 - val2 << endl;
    }
    else if (input == '/')
    {
        cout << val1 / val2 << endl;
    }
    else if (input == '*')
    {
        cout << val1 * val2 << endl;
    }
}

void how_much_money()
{
    int pennies, nickels, dimes, quarters, half_dollars;
    cout << "How many pennies do you have?\n";
    cin >> pennies;
    cout << "How many nickels do you have?\n";
    cin >> nickels;
    cout << "How many dimes do you have?\n";
    cin >> dimes;
    cout << "How many quarters do you have?\n";
    cin >> quarters;
    cout << "How many half dollars do you have?\n";
    cin >> half_dollars;

    cout << "You have " << (pennies == 1 ? "a penny" : std::format("{} pennies", pennies)) << endl;
    cout << "You have " << (nickels == 1 ? "a nickel" : std::format("{} nickels", nickels)) << endl;
    cout << "You have " << (dimes == 1 ? "a dime" : std::format("{} dimes", dimes)) << endl;
    cout << "You have " << (quarters == 1 ? "a quarter" : std::format("{} quarters", quarters)) << endl;
    cout << "You have " << (half_dollars == 1 ? "half a dollar" : std::format("{} half dollars", half_dollars)) << endl;
    const int sum = pennies + nickels * 5 + dimes * 10 + quarters * 25 + half_dollars * 50;
    cout << "You have $" << sum / 100 << "." << sum % 100 << endl;
}

void print_chars_as_ints()
{
    int start = 0;
    while ('a' + start <= 122)
    {
        cout << static_cast<char>('a' + start) << "\t" << 'a' + start << endl;
        start++;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << static_cast<char>('A' + i) << "\t" << 'A' + i << endl;
    }
}

// void read_numbers()
// {
//     constexpr double INCH_IN_CM = 2.4;
//     constexpr double FEET_IN_INCH = 12;
//     vector<double> values;
//     string unit;
//     double val1, min, max, value;
//     double sum = 0;
//     int line = 0;
//     while (cin >> val1 >> unit)
//     {
//         if (unit != "cm" && unit != "m" && unit != "in" && unit != "ft")
//         {
//             cout << "Unit not valid" << endl;
//             continue;
//         }
//
//         if (unit == "cm")
//         {
//             value = val1 / 100;
//             sum += value;
//             values.push_back(value);
//         }
//         else if (unit == "m")
//         {
//             value = val1;
//             sum += value;
//             values.push_back(value);
//         }
//         else if (unit == "in")
//         {
//             value = val1 / 100 * INCH_IN_CM;
//             sum += value;
//             values.push_back(value);
//         }
//         else if (unit == "ft")
//         {
//
//             value = val1 / 100 * INCH_IN_CM * FEET_IN_INCH;
//             sum += value;
//             values.push_back(value);
//         }
//
//         if (line == 0)
//         {
//             min = val1;
//             max = val1;
//             line++;
//             cout << "The larger value is: " << max << "\n" << "The smaller value is: " << min << endl;
//             cout << "Values so far: " << values.size() << endl;
//             continue;
//         }
//
//         if (max < val1)
//         {
//             max = val1;
//             cout << "The largest value so far!" << endl;
//         }
//
//         if (val1 < min)
//         {
//             min = val1;
//             cout << "The smallest value so far!" << endl;
//         }
//
//         cout << "The larger value is: " << max << "\n" << "The smaller value is: " << min << endl;
//         cout << "Values so far: " << values.size() << endl;
//         line++;
//     }
//
//     ranges::sort(values);
//     for (auto x : values)
//     {
//         cout << std::to_string(x) << endl;
//     }
//     cout << "Total sum: " << sum << " m" << endl;
// }


void read_numbers()
{
    constexpr double INCH_IN_CM = 2.54;
    constexpr double FEET_IN_INCH = 12;
    std::vector<double> values;
    std::string unit;
    double val, sum = 0;

    while (std::cin >> val >> unit)
    {
        if (unit == "cm") val /= 100;
        else if (unit == "in") val *= INCH_IN_CM / 100;
        else if (unit == "ft") val *= FEET_IN_INCH * INCH_IN_CM / 100;
        else if (unit != "m") continue;

        sum += val;
        values.push_back(val);
    }

    std::ranges::sort(values);
    for (auto x : values) std::cout << x << '\n';
    std::cout << "Total sum: " << sum << " m" << '\n';
}

void median()
{
    std::vector<double> temps; // temperatures
    for (double temp; std::cin >> temp;) // read into temp
        temps.push_back(temp); // put temp into vector

    // compute mean temperature:
    double sum = 0;
    for (const double x : temps) sum += x;

    std::cout << "Average temperature: " << sum / temps.size() << '\n';

    // compute median temperature:
    std::ranges::sort(temps); // sort temperatures

    double median;
    if (temps.size() % 2 == 0)
    {
        median = (temps[temps.size() / 2 - 1] + temps[temps.size() / 2]) / 2;
    }
    else
    {
        median = temps[temps.size() / 2];
    }

    std::cout << "Median temperature: " << median << '\n';
}

void distances()
{
    std::vector<double> distances; // temperatures
    for (double temp; std::cin >> temp;) // read into temp
        distances.push_back(temp); // put temp into vector

    // compute mean temperature:
    double sum = 0;
    for (const double x : distances) sum += x;

    std::cout << "Sum of distances: " << sum << '\n';
    std::cout << "Average distance: " << sum / distances.size() << '\n';
    std::cout << "Minumum distance: " << ranges::min(distances) << '\n';
    std::cout << "Maximum distance: " << ranges::max(distances) << '\n';
}

void guess_number()
{
    int low = 1, high = 100;
    std::string response;

    while (low <= high)
    {
        const int mid = low + (high - low) / 2;
        std::cout << "Is the number you are thinking of less than " << mid << "? (y/n)\n";
        std::cin >> response;

        if (response == "y")
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    std::cout << "The number you're thinking of is " << high << "\n";
}

void grains_of_rice()
{
    int square = 1;
    int sum = 0;
    int grains = 0;

    char answer;
    cout << "a) 1_000 grains b) 1_000_000 c) 1_000_000_000" << endl;
    cin >> answer;
    const int total_min_grains = answer == 'a' ? 1000 : answer == 'b' ? 1000000 : answer == 'c' ? 1000000000 : 0;

    if (total_min_grains == 0)
    {
        cout << "Invalid answer\n";
        return;
    }

    while (total_min_grains > sum)
    {
        const int local = grains * 2;
        grains = local == 0 ? 1 : local;
        sum += grains;
        cout << "Grains in this square: " << square << " are: " << grains << ". Total: " << sum << endl;
        square++;
    }

    cout << "Squares required for " << total_min_grains << " is " << square - 1 << " squares\n";
}

void max_grains_of_rice_int()
{
    int square = 1;
    int sum = 0;
    int grains = 0;
    // With int the number overflows at the 32nd square
    while (square <= 64)
    {
        const int local = grains * 2;
        grains = local == 0 ? 1 : local;
        sum += grains;
        cout << "Grains in this square: " << square << " are: " << grains << ". Total: " << sum << endl;
        square++;
    }
}

void max_grains_of_rice_double()
{
    int square = 1;
    double sum = 0;
    double grains = 0;
    // Scientific notacion used from the 20th square onwards
    while (square <= 64)
    {
        const double local = grains * 2;
        grains = local == 0 ? 1 : local;
        sum += grains;
        cout << "Grains in this square: " << square << " are: " << grains << ". Total: " << sum << endl;
        square++;
    }
}

void rock_paper_scissors()
{
    int index = 0;
    const vector<string> options = {"rock", "paper", "scissors"};
    bool play = true;
    while (play)
    {
        cout << "Enter rock (r), paper (p) or scissors (s):\n";
        char ans;
        cin >> ans;
        switch (ans)
        {
        case 'r':
            cout << "Your opponent chose " << options[index] << endl;
            switch (index)
            {
            case 0:
                cout << "Draw\n";
                break;
            case 1:
                cout << "You lost\n";
                break;
            case 2:
                cout << "You won\n";
                break;
            default:
                break;
            }
            index = (index + 1) % 3;
            break;
        case 'p':
            cout << "Your opponent chose " << options[index] << endl;
            switch (index)
            {
            case 0:
                cout << "You won\n";
                break;
            case 1:
                cout << "Draw\n";
                break;
            case 2:
                cout << "You lost\n";
                break;
            default:
                break;
            }
            index = (index + 1) % 3;
            break;
        case 's':
            cout << "Your opponent chose " << options[index] << endl;
            switch (index)
            {
            case 0:
                cout << "You lost\n";
                break;
            case 1:
                cout << "You won\n";
                break;
            case 2:
                cout << "Draw\n";
                break;
            default:
                break;
            }
            index = (index + 1) % 3;
            break;
        default:
            cout << "Bye\n";
            play = false;
            break;
        }
    }
}

void siege_of_eratosthenes()
{
    int max;
    cout << "Enter max number\n";
    cin >> max;
    auto boolean_vector = vector<bool>(max + 1);
    auto numbers_vector = vector<int>(max + 1); // Adjust the size to max + 1 because we're using 1-based indexing
    for (int i = 2; i <= max; i++)
    {
        numbers_vector[i] = i;
        boolean_vector[i] = true;
    }

    for (int i = 2; i <= max; i++)
    {
        if (boolean_vector[i])
        {
            for (int j = i * i; j <= max; j += i)
            {
                boolean_vector[j] = false;
            }
        }
    }

    for (int i = 2; i <= max; i++)
    {
        if (boolean_vector[i])
        {
            cout << numbers_vector[i] << endl;
        }
    }
}

int find(vector<int> vector, int num)
{
    for (int i = 0; i < vector.size(); i++)
    {
        if (num == vector[i]) return i;
    }
    return -1;
}

void find_mode()
{
    const vector numbers_list = {1, 2, 3, 4, 5, 6, 6, 6, 623, 2, 21, 1, 22, 3, 4, 4, 4, 4, 4, 5};

    vector<int> seen;
    vector<int> counter_seen;

    for (auto x : numbers_list)
    {
        const int index_in_seen = find(seen, x);

        if (index_in_seen == -1)
        {
            seen.push_back(x);
            counter_seen.push_back(1);
        } else
        {
            counter_seen[index_in_seen]++;
        }
    }

    for (int i = 0; i < seen.size(); i++)
    {
        cout << seen[i] << " was seen " << counter_seen[i] << " times\n";
    }

    cout << "Most seen: " << seen[std::distance(counter_seen.begin(), ranges::max_element(counter_seen))] << endl;
}


int main()
{
    // cout << letter_form();
    // cout << miles_to_km();
    // compare_two_ints();
    // compare_three_ints();
    // compare_three_strings();
    // is_even();
    // print_number();
    // guess_operation();
    // how_much_money();
    // print_chars_as_ints();
    // read_numbers();
    // median();
    // distances();
    // guess_number();
    // max_grains_of_rice_int();
    // max_grains_of_rice_double();
    // rock_paper_scissors();
    // siege_of_eratosthenes();
    // find_mode();
}

