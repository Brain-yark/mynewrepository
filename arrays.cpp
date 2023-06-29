#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main ()
{
/*let's start by declearing an array it should contain a data type a name and number of data to be held in that array
remember that you can declear an array without spesifing the number that it can hold*/

// string cars[];

//string cars[5];

//lets now insert values in our array

string cars[5]={"subaru","volxy","volxwagen","volvo","wingroad"};

//to declear an array of three numbers will be

int numbers[3]={5,6,7};

/*now lets access one by one and print values in the array cars you will use the index address of the value*/

cout<<"the first car in the array cars is: "<<cars[0]<<endl;

/*to add another value in the existing array you will do that by refering to the specisific address number */

cars[1]="Ford";

//Now lets print the all names of cars in our array cars

           for (int i=0;i<5;i++){
                cout<<i<<" =  "<<cars[i]<<endl;
      }
/*that is called looping through an array
         or you can loop as :
          
           for (int i:cars){
                  cout<<i<<" ";     
               }
 this can only be done in cpp 11 (2011) the above loop is called foreach loop */

//lets print our numbers in the array numbers

         for (int i=0;i<3;i++){
                 cout<<"the numbers are: "<<numbers[i]<<"\n";
             }          

        // how to get the size of an array

  int age [4]={45,78,34,10};
  cout<<"The size of array age is: "<<sizeof(age)<<endl;

         //To find out how many elements an array contains
   int agelength=sizeof(age)/sizeof(int);
   cout<<"Number of items in array age: "<<agelength<<endl;

       //how to loop through an array using the keyword sizeof()
   for( int i =0;i<sizeof(age)/sizeof(int);i++){
          cout<<"looping through array age : "<<age[i] <<"\n"<<endl;
      }
  //lets talk about multi-dimensional arrays,also called array of arrays in cpp

  int numerics [2] [4]={ 
           {1,2,3,4},
           {5,6,7,8}
};    //this is a two dimensional array
 
   string letters [2][2][2]={
   {       { "a","b"},
            {"c","d"} 
   },
   { 
        {"e","f"},
        {"g","h"}
   }

};  //three dimensional array

//how to access the elements of multidimensional array

cout<<"the value to be accessed in 2d: "<<numerics[0][2]<<endl; //it will out put 3

 //How to change an element in the multi-dimensional arrays
 
letters[0][0][0]="y";
cout<<"new input instead of 'a': "<<letters[0][0][0]<<endl;

// How to loop through multi-dimensional arrays

    for (int i=0;i<2;i++){
         for(int j=0;j<4;j++){
              cout<<numerics[i][j]<<endl;
           } 
     
      } //desplay for 2dimensional array


     for (int i=0;i<2;i++){
            for(int j=0;j<2;j++){ 
                 for(int k=0;k<2;k++){
                     cout<<letters[i][j][k]<<endl;
             }
        }
    } //desplay for 3 dimensional array
  return 0;
}
