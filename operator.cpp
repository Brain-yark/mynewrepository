#include<iostream>
#include<string>
#include<list>
using namespace std;
//A simple structer of how facebook looks like
struct FacebookAccount{
    string name;
    int comments;
    int likes;
//constructor for facebookAccount
    FacebookAccount(string Name,int Likes,int Comments)
    {
       this->name=Name;
       this->likes=Likes;
       this->comments=Comments;
    }
 };
//since we cannot print the data out we will overload the operator << to print the data
//note that << is an ostream operator 
ostream& operator <<(ostream& COUT,FacebookAccount& account)
{
   COUT<<"Name: "<<account.name<<endl;
   COUT<<"likes: "<<account.likes<<endl;
   COUT<<"comments:: "<<account.comments<<endl;
       return COUT; 
}

//lets creat another structure that we will have the photos and videos of the owner of the facebook account and print them on the terminal

struct Posts {
      list<string>myphotos;
      list<string>videos;
//we have to overload the += operator in order to add the photos and videos in the user accoount
   void operator += (FacebookAccount& account)
   {
       this->myphotos.push_back(account);
       this->videos.push_back(account) ;
   }
};

int main( )
{
   FacebookAccount account1=FacebookAccount("williams",23434,9.0);
   FacebookAccount account2=FacebookAccount("Antony",4322,569);
       
        list<string>videos{"oop videos","c++ toutorial","pythone examples"}; 
        list<string>myphotos{"photo.jpg","photo.jpgx","photo.pdf"};
         for (auto i:videos)
            {
                 for (auto i:myphotos)
                     { 
                          cout<<i<<" ";
                     }
               cout<<i<<" ";
            }

//we are printing the data in both facebookaccounts using     the function that we overloaded 
   operator<<(cout,account1);
   operator<<(cout,account2);

  //lets print out the lists of items the user posted 
  
  Posts += account1;
  Posts += account2;
       
return 0;
}
