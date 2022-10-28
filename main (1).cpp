 
#include <iostream>  
  
   
using namespace std;   
int main(){  
cout << "Welcome Player" << endl;  
srand(time(0)); // Initialize random number generator.  
   
int random = (rand() % 10) + 1;  
//get a random number, use if else statements to get the word  
string word;  //use the random number generated to pick a word
    if (random == 1){  
        word = "pizza";  
    }  
    else if (random == 2){  
        word = "hotdog";  
    }  
    else if (random == 3){  
        word = "hire";  
    }  
    else if (random == 4){  
        word = "hamburger";  
    }  
    else if (random == 5){  
        word = "chess";  
    }  
    else if (random == 6){  
        word = "payback";  
    }  
    else if (random == 7){  
        word = "cougar";  
    }  
    else if (random == 8){  
        word = "leopard";  
    }  
    else if (random == 9){  
        word = "champion";  
    }  
    else if (random == 10){  
        word = "final";  
    }  
    cout << "This word has " << word.length() << " letters in it" << endl;  
    char letter;  
    int k = 0;  
    int hangman = 0;  
    string part;  
    int correct = 0;  
    
    while(k < 100){ //this was made to create a near endless cycle until terms are met
    ++k; 
    cout << "Please pick a letter" << endl; 
    
    cin>> letter; //input choice
    
    
    
    int count = 0; 
    for(int i = 0; i < word.size(); ++i){ 
                                    
        if(letter == word.at(i)){ 
            count = count + 1; //how many of the letter there is
             
            ++correct; //counts until it reaches a point where you win
            
        
            
        } 
        if(i == word.size()-1 && count > 0){ 
            if(count == 1){ 
                cout << "Correct, there is " << count << " " << letter << endl; 
            } 
            else{ 
            cout << "Correct, there are " << count << " " << letter << "'s" << endl; 
            } 
        } 
        else if (i == word.size()-1){ 
            hangman = hangman + 1; //decides where you are in the hangman
            
            if(hangman == 1){ 
                part = "head"; 
            } 
            else if(hangman == 2){ 
                part = "body"; 
            } 
            else if(hangman == 3){ 
                part = "left leg"; 
            } 
            else if(hangman == 4){ 
                part = "right leg"; 
            } 
            else if(hangman == 5){ 
                part = "left arm"; 
            } 
            else if(hangman == 6){ 
                part = "right arm"; 
                 cout << "That is incorrect, you gain a " << part << endl << "Your man is hanged," << endl << "GAME OVER"; 
                return 0; 
            } 
            cout << "That is incorrect you gain a " << part << endl; 
            
        } 
        if(correct == word.length()){ 
                cout << "congratulations the word was " << word << " YOU WIN!" << endl; 
                return 0; 
            } 
        
    }    
        
    } 

return 0; 
} 
