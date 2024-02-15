#include <iostream>
using namespace std;
bool checkPalindrome( string s){
  int st = 0 ;
  int e= s.size()-1;
  while(st<=e){
    if(isalnum(s[st] )&& isalnum(s[e]) && tolower(s[st]) != tolower(s[e])){ 
      return  false;/*this line is for starting and ending alphanumeric letter is not equal */
    }
    else if (!isalnum(s[st])){ /*THIS LINE IS TO ELIMINATE TH ENON ALPHANUMERIC LETTER FROM STARTING INDEX*/
      st++;
    }
    else if (!isalnum(s[e])){ /*THIS LINE IS TO ELIMINATE TH ENON ALPHANUMERIC LETTER FROM ENDING INDEX*/
      e--;
    }
    if(isalnum(s[st] )&& isalnum(s[e]) && tolower(s[st]) == tolower(s[e]))
   {/*this line is for starting and ending alphanumeric letter is not equal */
      st++;
      e--;

    }
  }
return true;
}
int main (){
  string s = "A man, a plan, a canal: panama";
  
  if(checkPalindrome(s)){
     cout<<"it is palindrom"<<endl;
  }
  else 
  cout<<"it is not palindrome";
}