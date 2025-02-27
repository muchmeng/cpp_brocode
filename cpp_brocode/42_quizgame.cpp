#include <iostream>

int main(){
    std::string questions[] = {"1. What year was C++ created?: ",
                                "2. Who invented C++?: ",
                                "3. What is the predecessor of C++?: ",
                                "4. Is the Earth flat?: "};

    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                                {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
                                {"A. C", "B. C+", "C. C--", "D. B++"},
                                {"A. Yes", "B. No", "C. Sometimes", "D. What's Earth?"}};

    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;

    for( int i = 0; i < size; i++){
        std::cout << "*****************************\n";
        std::cout << questions[i] << "\n";
        std::cout << "*****************************\n";
        for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout << options[i][j] << "\n";
        }

        std::cin >> guess;

        guess = toupper(guess); //change to all upper case

        if (guess == answerKey[i]){
            std::cout << "Correct!\n";
            score ++;
        }
        else{
            std::cout << "Wrong! The correct answer is " << answerKey[i] <<"\n";
        }

    }
    std::cout << "*****************************\n";
    std::cout << "          Results             ";
    std::cout << "*****************************\n";

    std::cout << "Correct Guesses: " << score << "\n";
    std::cout << "# of Questions: " << size << "\n";
    std::cout << "Score: " << (score/(double)size) * 100 << "%"; //need to keep double other wise show 0

    return 0;
}