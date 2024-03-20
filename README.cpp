# MPP-Lab-2

    #include <iostream> 
    #include <algorithm> 
    #include <tuple>
    using namespace std;

    // Include necessary libraries

    // Function to calculate the minimum, average, and maximum values 
    tuple<double, double, double> calculateStatistics(double num1, double num2, double num3) {
    // Calculate the minimum value among three numbers
    double min = std::min({ num1, num2, num3 });
    // Calculate the maximum value among three numbers
    double max = std::max({ num1, num2, num3 });
    // Calculate the average value among three numbers
    double avg = (num1 + num2 + num3) / 3.0;
    // Return a tuple containing the minimum, average, and maximum values
    return make_tuple(min, avg, max);
    }

    int main() {
    double num1, num2, num3;

    // Ask the user to enter the first number
    cout << "Enter the first number: ";
    // Read the first number from standard input
    cin >> num1;

    // Ask the user to enter the second number
    cout << "Enter the second number: ";
    // Read the second number from standard input
    cin >> num2;

    // Ask the user to enter the third number
    cout << "Enter the third number: ";
    // Read the third number from standard input
    cin >> num3;

    // Call the calculateStatistics function and get the results 
    auto result = calculateStatistics(num1, num2, num3);

    // Output the minimum value to the screen
    cout << "Min: " << get<0>(result) << endl;
    // Output the average value to the screen
    cout << "Average: " << get<1>(result) << endl;
    // Output the maximum value to the screen
    cout << "Max: " << get<2>(result) << endl;

    return 0;
    }
