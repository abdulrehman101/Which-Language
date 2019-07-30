// prog3WhichLangMacbeth.cpp
//    Use letter frequency counts to determine what language text is in.
//
// Author: ???
// Date: Oct 2, 2018
// Class: CS 141, Fall 2018
// Language: C++
//
// Translations of Macbeth were created online using Google translate, starting with the
// English version at http://shakespeare.mit.edu/macbeth/full.html
// To trigger the translation option, I went to the Chrome browser / Settings / Language
// option and changed the default language, which triggered showing the translation option
// for the English Macbeth page when it was displayed.  The translated text was then
// copy/pasted into a text file and saved.  The texts are stored using the multi-byte
// UTF-8 format, explained at https://en.wikipedia.org/wiki/UTF-8, though here we are
// not attempting to count more than the first 128 alphabetical characters.
//
/* Results of running the final version of the program are shown below.

		Program 3: Which Language

		Letter Frequency Counts:
				 Engl  Finn  Fren  Germ  Hung  Ital  Port  Span
		A:   6018  9416  6544  5068  7541  8935  9939 10052
		B:   1464   448  1081  2060  1746  1221  1173  1387
		C:   2144   636  3028  3126  1014  3865  2855  3222
		D:   3331  1013  2698  4592  2265  2945  3687  3815
		E:   9270  7187 12782 14779  8280  9364 10551 10861
		F:   1701   297  1101  1464   932  1099  1039   653
		G:   1333   187   772  2503  2975  1423   983   936
		H:   5244  2384  1004  4775  1687  1485  1413  1263
		I:   4653  8022  5583  7062  2961  8128  4179  3964
		J:     38  1331   538   148  1049     5   216   429
		K:    691  3952    28  1080  3551    51    19    18
		L:   3294  4648  4240  3089  4658  4814  2082  3985
		M:   2481  3526  3269  2861  3812  2790  4415  3021
		N:   4987  7958  5958  9026  4725  5966  4455  5704
		O:   6054  4219  5315  2208  3529  8668  8898  7605
		P:   1000  1331  2297   466   448  2060  1862  1842
		Q:    121    78   907    84    77   548   954   883
		R:   4518  1784  5986  5955  2802  5357  5328  5706
		S:   4943  5425  6898  5852  4538  4863  6774  6468
		T:   7055  7620  6025  5477  5632  5373  3729  3932
		U:   2590  4226  5373  3327   963  3081  3840  3591
		V:    657  1784  1566   661  1297  1287  1351   893
		W:   1926   120    78  1797   138   141    68    61
		X:    112    45   328    89    49    42   260    91
		Y:   1637  1403   247   169  1998   216    65   891
		Z:     15     3   343   939  2742   490   314   301

		Letter frequency order:
			 Engl  Finn  Fren  Germ  Hung  Ital  Port  Span
					E     A     E     E     E     E     E     E
					T     I     S     N     A     A     A     A
					O     N     A     I     T     O     O     O
					A     T     T     R     N     I     S     S
					H     E     R     S     L     N     R     R
					N     S     N     T     S     T     N     N
					S     L     I     A     M     R     M     L
					I     U     U     H     K     S     I     I
					R     O     O     D     O     L     U     T
					D     K     L     U     G     C     T     D
					L     M     M     C     I     U     D     U
					U     H     C     L     R     D     C     C
					M     R     D     M     Z     M     L     M
					C     V     P     G     D     P     P     P
					W     Y     V     O     Y     H     H     B
					F     J     F     B     B     G     V     H
					Y     P     B     W     H     V     B     G
					B     D     H     F     V     B     F     V
					G     C     Q     K     J     F     G     Y
					P     B     G     Z     C     Q     Q     Q
					K     F     J     V     U     Z     Z     F
					V     G     Z     P     F     Y     X     J
					Q     W     X     Y     P     W     J     Z
					X     Q     Y     J     W     K     W     X
					J     X     W     X     Q     X     Y     W
					Z     Z     K     Q     X     J     K     K

		Copy and paste a paragraph of text to be analyzed, followed by ^z (PC) or ^d (Mac): 
		Ma per arrivare a un agreement bisogna essere in due. E dato che il governo intende 
		resistere sui numeri della manovra, è necessario offrire garanzie all'Europa e ai 
		mercati. Perciò sono stati stabiliti due capisaldi: uno tecnico, l'altro più politico. 
		La riduzione strutturale del debito viene fissato come un «obiettivo strategico», 
		non a caso sottolineato da Di Maio dopo il vertice. La linea dell'esecutivo è che 
		per far ripartire l'Italia sia necessario «cambiare approccio» con una manovra 
		espansiva «dopo anni di cure rigoriste senza risultati», ma s

		A:51 B:5 C:20 D:15 E:55 F:4 G:6 H:2 I:54 J:0 K:0 L:22 M:10 N:29 O:39 P:13 Q:0 R:37 S:28 T:31 U:15 V:9 W:0 X:0 Y:0 Z:3 

		Letter frequency order:
			 Engl  Finn  Fren  Germ  Hung  Ital  Port  Span  User
					E     A     E     E     E     E     E     E     E
					T     I     S     N     A     A     A     A     I
					O     N     A     I     T     O     O     O     A
					A     T     T     R     N     I     S     S     O
					H     E     R     S     L     N     R     R     R
					N     S     N     T     S     T     N     N     T
					S     L     I     A     M     R     M     L     N
					I     U     U     H     K     S     I     I     S
					R     O     O     D     O     L     U     T     L
					D     K     L     U     G     C     T     D     C
					L     M     M     C     I     U     D     U     D
					U     H     C     L     R     D     C     C     U
					M     R     D     M     Z     M     L     M     P
					C     V     P     G     D     P     P     P     M
					W     Y     V     O     Y     H     H     B     V
					F     J     F     B     B     G     V     H     G
					Y     P     B     W     H     V     B     G     B
					B     D     H     F     V     B     F     V     F
					G     C     Q     K     J     F     G     Y     Z
					P     B     G     Z     C     Q     Q     Q     H
					K     F     J     V     U     Z     Z     F     J
					V     G     Z     P     F     Y     X     J     K
					Q     W     X     Y     P     W     J     Z     Q
					X     Q     Y     J     W     K     W     X     W
					J     X     W     X     Q     X     Y     W     X
					Z     Z     K     Q     X     J     K     K     Y

				 60    78    16    50    94    10    18    13  <--- Difference (This line is not part of expected output, but is helpful!)

		Language is Italian
 
 */

// Your code should go here
// ...
// 
//void sort(int data[])


#include <iostream>
#include <cmath>        // absolute value function
#include <string>
#include <cctype>       // For the letter checking functions
#include <fstream>	    // For file input
#include <iomanip>      // For setw
#include <cstdlib>      // For exit()
using namespace std;

const int ROWS = 26;
const int COLUMN = 9;
const int fileNumber = 8;

// *** Arvan: Write more meaningful comments.
void switchElements(int letterCount[ROWS][COLUMN], char alphabets[ROWS][COLUMN], int row, int column)
{
  int temp;

  temp = letterCount[row][column];
  letterCount[row][column]   = letterCount[row+1][column];
  letterCount[row+1][column] = temp;

  temp = alphabets[row][column];
  alphabets[row][column]   = alphabets[row+1][column];
  alphabets[row+1][column] = temp;
}

// *** Arvan: Write more meaningful comments.
void sort(int intArrayToSort[ROWS][COLUMN], char charArrayToSort[ROWS][COLUMN])
{ 
int i, j, fileNumber;

  for(fileNumber = 0; fileNumber < COLUMN; fileNumber++)
  { 
    // Bubble sort on each colum
    for(i = 0; i < ROWS; i++)
    {
      for(j = 0; j < ROWS-i-1; j++)
      {
        if( intArrayToSort[j+1][fileNumber] > intArrayToSort[j][fileNumber] ) 
        {
        switchElements(intArrayToSort, charArrayToSort, j, fileNumber);
        }
      }
    }
  }
}

void printData(char array[ROWS][COLUMN], int COLUMN)
{
  for (int i = 0; i < ROWS; i++) 
  {
    cout << "   ";
    for(int j = 0; j < COLUMN; j++)
    {
      // See if it is a printable character and if there were any of that character
      if ( array[i][j] != 0 )
      {
      cout << setw(6) << array[i][j];
      }
    }
  cout << endl;
  }
}

// *** Arvan: Write more meaningful comments.
void introduction()
{
  cout << "Program 3: Which Language." << endl << endl;
  cout << "Select from the following stages of output to display:" << endl
       << "1. Letter frequency counts" << endl
       << "2. Letter frequency order" << endl
       << "3. Get user input and display frequency counts" << endl
       << "4. Get user input, display frequency counts, and display language " << endl
       << "0. Exit the program" << endl << endl;
}


int main() {
  
 ifstream inputFileStream;           // declare the input file stream
 int stepNumber; 
 int lettersCount [ROWS][COLUMN];    // count occurrences of characters
 int difference[COLUMN - 1];
 int i,j, k;                         // loop counter
 int tempIntValue;                   // Store temporary int Value
 char alphabetArray[ROWS][COLUMN]; 
 char c = ' ';                       // input character
 string tempStringValue;             // Sotre temporary string value
 string fileNameArray[fileNumber] = {"MacbethEnglish.txt", "MacbethFinnish.txt", "MacbethFrench.txt", "MacbethGerman.txt", "MacbethHungarian.txt", "MacbethItalian.txt", "MacbethPortuguese.txt", "MacbethSpanish.txt"};
 string language[fileNumber] =      {"English","Finnish","French","German","Hungarian","Italian","Portuguese","Spanish"};
// *** Arvan: Use proper and consistent indentation and spacing.

introduction();
cin >> stepNumber;
cout << "Your choice --> " << endl;

 // initialize lettersCount count values 
for (i = 0; i < ROWS; i++) 
{ 
  for(j = 0; j < COLUMN; j++)
  {
  lettersCount[i][j] = 0;
  }
}

// *** Arvan: This section could have been done using functions.
// Reading all the Macbeths and updating the count in lettersCount Array
for (i = 0; i < fileNumber; i++)
{
 string fileName = fileNameArray[i];

 // open input file and verify
 inputFileStream.open( fileName.c_str());   // Convert C++ string to expected C-style string 

 if( !inputFileStream.is_open())
 {
   cout << "Could not find input file.  Exiting..." << endl;
   exit( -1);
 }

 while( inputFileStream >> c) 
 {
  // convert alphabetic input characters to upper case
  if( isalpha( c))
  {
    c = toupper( c);
    lettersCount[c-'A'][i]++; // update letter count, using the character as the index
  }
 }

  inputFileStream.close();   
}

// Populating alphabetArray
for(i = 0; i < COLUMN; i++)
{
  for(j = 0; j < ROWS; j++)
  {
    alphabetArray[j][i] = (char)(j + 'A');
  }
}

if(stepNumber >= 1)
{ 
 // display select portions of the table
// *** Arvan: This section could have been done using functions.
 cout << "Letter Frequency Counts: \n";
 cout << "    Engl  Finn  Fren  Germ  Hung  Ital  Port  Span" << endl;

 for (i = 0; i < ROWS; i++) 
 {
   cout << (char)(i + 'A') << ":";

   for(j = 0; j < COLUMN; j++)
   {
    // See if it is a printable character and if there were any of that character
     if ( lettersCount[i][j] != 0 )
     {
       // display the character and the number of occurences
       cout << setw(6) << lettersCount[i][j];
     }
   }
     cout << endl;
 }

 cout << endl;
} 

if( stepNumber >= 2)
{ 

  //sorting lettersCount and alphabetArray
  sort(lettersCount, alphabetArray);

  // display select portions of the table
  cout << "Letter Frequency order: \n";
  cout << "     Engl  Finn  Fren  Germ  Hung  Ital  Port  Span" << endl;

  printData(alphabetArray, COLUMN - 1);
  cout << endl;
}

if(stepNumber >= 3)
{
// *** Arvan: This section could have been done using functions.
  cout << "Copy and paste a paragraph of text to be analyzed, followed by ^z (PC) or ^d (Mac):";

  while( cin >> c) 
  {
  // convert alphabetic input characters to upper case
    if( isalpha(c))
    {
    c = toupper(c);
    lettersCount[c-'A'][8]++; // update letter count, using the character as the index
    }
  }
  cout << endl << endl; 
  
  // User input letter count represented horizontally
  for (i =0; i < ROWS; i++)
  {
  cout << (char)(i + 'A') << ":" << lettersCount[i][8] << " ";
  } 
  cout << endl << endl;
  //sorting lettersCount and alphabetArray again so that the last column is also sorted
  sort(lettersCount, alphabetArray);

  cout << "Letter Frequency order: \n";
  cout << "     Engl  Finn  Fren  Germ  Hung  Ital  Port  Span  User" << endl;

  printData(alphabetArray, COLUMN);
  cout << endl;     // newline 
}

if(stepNumber >= 4)
{
// *** Arvan: This section could have been done using functions.
  // Initializing the difference array   
  for (i = 0; i < COLUMN -1; i++) 
  { 
  difference[i] = 0;
  }
  // Comparing each element in the 8th column of alphabetArray
  // with each element of everyLanguage.
  for(i = 0; i < fileNumber; i++)
  {
    for(j = 0; j < ROWS; j++)
    {
      for(k = 0; k < ROWS; k++)
      {
        if(alphabetArray[j][8] == alphabetArray[k][i])
        {
          // Difference Threshold of 5
          if(abs(j-k) >= 5 )
          {
           difference[i] = difference[i] + abs(j - k);
          }
        }
      }
    }
  } 
  cout << endl;
  // Sorting difference array and also implementing the change to Language array.
  // After sorting is done, the min difference and corresponding
  // language are in the 0th place. 
  for(i=0;i < 8; i++)
  {
    for(j=0; j < 8 - 1 - i; j++)
    {
      if(difference[j+1] < difference[j]) 
      {
        tempIntValue = difference[j];
        difference[j] = difference[j+1];
        difference[j+1] = tempIntValue;

        tempStringValue = language[j];
        language[j] = language[j+1];
        language[j+1] = tempStringValue;
      }
    }
  }
  cout << endl;

  cout << "language is " << language[0] << endl;
}

if(stepNumber == 0)
{
  exit(-1);
} 

 return 0;
}
