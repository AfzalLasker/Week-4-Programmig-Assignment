#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cassert>

using namespace std;

// Main function
int main()
{
    // Declare variables

    // Total number of questions
    const int total_questions = 4;

    // Correct answer for question 1
    const double ticket_total_cost = 21.98;

    // Range of correct answers for question 2
    const int min_answer_2 = 2;
    const int max_answer_2 = 6;

    // Range of correct answers for question 3
    const int min_answer_3 = 5;
    const int max_answer_3 = 8;

    // Correct answer for question 4
    const int correct_answer_4 = 2;

    // Variables to store user inputs and scores
    string user_name;
    double ticket_cost;
    double answer_2;
    double answer_3;
    double answer_4;
    double total_score;
    total_score = 0;



    // Welcome message
    cout << "Welcome to the Cricket Quiz!" << endl << endl;



    // Get user name
    cout << "What is your name? ";
    getline(cin, user_name);
    cout << endl;

    // Greet the user
    cout << "Hello! " << user_name << ", Let's get started" << endl << endl;

    // for-loop for countdown before starting the quiz
    cout << "Get ready";
    for (int i = 3; i >= 1; i--)
    {
        cout << " " << i;
    }
    cout << " ... Go!" << endl << endl;



    // Question 1
    cout << "Question no. 1\n"
         << "If a cricket match ticket price is $10.99, then for two people how much will it cost?\n"
         << "Enter your answer (must include decimals): ";
    cin >> ticket_cost;
    // while-loop for only validate input, it will keep asking until valid input is given.
    while (cin.fail())
    {
        cin.clear();            // Clear the error state
        cin.ignore(100, '\n');  // Remove the wrong input from memory
        cout << "Invalid input! Please enter a number with a decimal point: ";
        cin >> ticket_cost;     // Prompt user to re-enter the value
    }

    // If statement to check the answer
    if (ticket_cost == ticket_total_cost)
    {
        total_score++;
        cout << endl;
        cout << "Perfect! Now move on to the next question." << endl << endl;
    }
    else
    {
        cout << endl;
        cout << "Wrong! The correct answer is $" << ticket_total_cost << " \n"
             << "Now move on to the next question." << endl << endl;
    }



    // Question 2
    cout << "Question no. 2 \n"
            "If 6 overs are left (1 over = 6 balls) and 40 runs are needed to win, \n"
            "how many overs are at least needed to win if every ball can score up to 6 runs?\n\n"
            "Give your answer in number: ";
    cin >> answer_2;
    // while-loop for only validate input, it will keep asking until valid input is given.
    while (cin.fail())
    {
        cin.clear();            // Clear the error state
        cin.ignore(100, '\n');  // Remove the wrong input from memory
        cout << "Invalid input! Please answer using a number: ";
        cin >> answer_2;        // Prompt user to re-enter the value
    }

    // If statement to check the answer
    if (answer_2 >= min_answer_2 && answer_2 <= max_answer_2)
    {
        total_score++;
        cout << endl;
        cout << "Perfect! Now move on to the next question." << endl << endl;
    }
    else
    {
        cout << endl;
        cout << "Wrong! Good luck with the next question." << endl << endl;
    }



    // Question 3
    cout << "Question no. 3 \n"
            "If 6 overs are left (1 over = 6 balls) and 180 runs are needed to win,\n"
            "how many overs are at least needed to win if every ball can score up to 6 runs?\n\n"
            "Give your answer in number: ";
    cin >> answer_3;
    // while-loop for only validate input, it will keep asking until valid input is given.
    while (cin.fail())
    {
        cin.clear();            // Clear the error state
        cin.ignore(100, '\n');  // Remove the wrong input from memory
        cout << "Invalid input! Please answer using a number: ";
        cin >> answer_3;        // Prompt user to re-enter the value
    }
    // If statement to check the answer
    if (answer_3 >= min_answer_3 && answer_3 <= max_answer_3)
    {
        total_score++;
        cout << endl;
        cout << "Perfect! Now move on to the last question." << endl << endl;
    }
    else
    {
        cout << endl;
        cout << "Wrong! Good luck with the last question." << endl << endl;
    }



    // Question 4
    cout << "Question no. 4 \n"
            "If 2 overs are left (1 over = 6 balls) and 42 runs are needed to win,\n"
            "how many overs are at least needed to win if every ball can score up to 6 runs?\n\n"
            "Give your answer in number: ";
    cin >> answer_4;
    // while-loop for only validate input, it will keep asking until valid input is given.
    while (cin.fail())
    {
        cin.clear();            // Clear the error state
        cin.ignore(100, '\n');  // Remove the wrong input from memory
        cout << "Invalid input! Please answer using a number: ";
        cin >> answer_4;        // Prompt user to re-enter the value
    }
    // If statement to check the answer
    if (answer_4 == correct_answer_4)
    {
        total_score++;
        cout << "Great! \n\n"
                "Game Over" << endl << endl;
    }
    else
    {
        cout << "\nWrong Answer! \n\n"
                "*** Game Over ***" << endl << endl;
    }



    // Calculate percentage
    double percentage = (total_score / total_questions) * 100;


    // Display a simple menu using switch to show different quiz result options
    // Switch statement inside Do-while loop that repeats until the user decides to quit (option 4)
    int choice;
    do
    {
        cout << "Menu:" << endl;
        cout << "1. View correct answer ratio" << endl;
        cout << "2. View Score Only" << endl;
        cout << "3. View How Many Answers Were Wrong" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Your correct answer ratio is " << fixed << setprecision(2) << percentage << "%" << endl << endl;
                break;
            case 2:
                cout << "You answered " << total_score << " questions correctly." << endl << endl;
                break;
            case 3:
                cout << "You got " << (total_questions - total_score) << " questions wrong." << endl << endl;
                break;
            case 4:
                cout << "Exiting the menu." << endl << endl;
                break;
            default:
                cout << "Invalid choice." << endl << endl;
                break;
        }
    }
    while (choice != 4);



    // Create the final output of the program
    cout << "Cricket Quiz Score Report for " << user_name << endl;
    cout << "------------------------------------" << endl << endl;
    cout << left << setw(30) << "Total questions are" << right << setw(6) << total_questions << endl << endl;
    cout << left << setw(30) << "Your total correct answers: " << right << setw(6) << total_score << endl << endl;
    cout << left << setw(30) << "Your correct answer ratio: " << right << setw(6) << fixed << setprecision(2) << percentage << "%" << endl << endl;



    // Save the report to "Report.txt" file
    ofstream report("Report.txt");
    report << "Cricket Quiz Score Report for " << user_name << endl;
    report << "------------------------------------" << endl << endl;
    report << left << setw(30) << "Total questions are" << right << setw(6) << total_questions << endl << endl;
    report << left << setw(30) << "Total correct answers: " << right << setw(6) << total_score << endl << endl;
    report << left << setw(30) << "Correct answer ratio: " << right << setw(6) << fixed << setprecision(2) << percentage << "%" << endl;
    report.close();



    // Show a confirmation that the report was saved
    cout << "\n### Report saved successfully to Report.txt file" << endl << endl;
    return 0;
}