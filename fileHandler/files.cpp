#include<iostream>
#include<stdlib.h>
#include<string>
#include<fstream>
using namespace std;

void writeFile(std::string&);
void readFile(std::string,std::string&);

int main() {
   std::string nameOfFile;
   std::string contentOfFile;

   writeFile(nameOfFile);
   readFile(nameOfFile,contentOfFile);
   std::cout << "\nthe written in the file was: \n\n";
   std::cout << contentOfFile << "\n";

   return 0;
}


void writeFile(std::string& nameOfFile) {
   ofstream file;
   string text;
   
   cout << "Write the name of the file: ";
   getline(cin,nameOfFile);

   file.open("/home/erasmoh/Desktop/practicaC++/"+nameOfFile,ios::out);

   if(file.fail()) {
      std::cout << "The file  was corrupted to the time of open\n";
      exit(1);
   }

   std::cout << "Write something for that appears in the file: "; 
   getline(cin,text); 
   
   file << text;

   file.close();
}

void readFile(std::string nameOfFile,std::string& contentOfFile) {
   ifstream file;

   file.open("/home/erasmoh/Desktop/practicaC++/"+nameOfFile,ios::in);

   while(!file.eof()) {
      getline(file,contentOfFile);
   }

   file.close();
}
