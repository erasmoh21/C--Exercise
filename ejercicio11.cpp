#include<iostream>
#include<vector>
using namespace std;

/*
The exercise consists in that the user insert three numbers
then, the user should digit a fourth number and the program should to indicate if that number is equal to the previous numbers
*/
void insertElementsInTheVector(int* number,std::vector<int>& numbers) {
    numbers.push_back(*number);
}

bool validateNumber(int& number,const std::vector<int>& vectorNumbers) {
    for(const auto& numberIndividual : vectorNumbers) {
        if(numberIndividual == number) {
	    return true;
        } 
    }
    
    return false;
}

void menu() {
    int i = 1,number=0;
    std::vector<int> numbers;

    while(i <= 3) {
        cout << "Digit a number: "; 
        cin >> number;
        insertElementsInTheVector(&number,numbers);
        i++; 
    }

    std::cout << "Insert a fourth number: ";
    cin >> number;

    bool confirmation = validateNumber(number,numbers); 
 
    if(confirmation) {
        std::cout << "The fourth number match with a of the numbers previous\n"; 
    } 
    else {
	std::cout << "dont match a of the previous numbers\n";
    }
}

/*void insertElementsInTheMap(int* number,const std::map<int,int>& mapNumbers) {
    std::pair<int,int>::first  = *number;
    std::pair<int,int>::first = &number;
    mapNumbers.insert(std::pair<int,int>::first );

}*/



int main() {

    menu();

    return 0;
}
