//  Program 7 letter frequency in a file
//  Created by Minjing Liang on 10/10/20.
//  Copyright © 2020 Minjing Liang. All rights reserved.
#include <iostream>
#include <fstream>
using namespace std;
int main(){
   ifstream inFile;        // create an input file obj
   char ch;
   int frequency[128];     // an int array to hold the frequency of each letter
   inFile.open("Test.txt");  // open the file
   if (!inFile){            // if file open failed return -1
      cout << "Error! File open fail."<<endl;
      return -1;
   }
   for (int i = 0; i < 128; i++){   // initialize array with 0
       frequency[i] = 0;
   }
   ch = inFile.get();  // read the file
   while (ch != EOF){   // keep count the frequency of each letter
      cout << ch;
      ch = tolower(ch);
      frequency[ch]++;
      ch = inFile.get();
   }
    // print out the frequency of each letter
  cout  << "\nEach Letter's frequency in this file is:" << endl;
  for (char ch = 'a'; ch <= 'z'; ch++){
      cout << ch << ": " << frequency[ch] << endl;
  }
  return 0;
}
