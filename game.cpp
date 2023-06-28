#include<iostream>
#include<string>
using namespce std;
struct motorcar{
    string name;
    string model;
    int year;
           motorcar(string Name,string Model,int Year)
           {
              this->name=Name;
              this->model=Model;
              this->year=Year;  
           }

           int driving(int acceleration,int breacks,int gear)
           {
             if (acceleration =0 && breacks==0 && gear==0){
                 cout<<"start the vehicle "<<endl;
                 }
             else if (acceleration=1 && breacks==0 && gear==1){
                 cout<<"You are driving the car"<<endl;
                 }
             else{
                    cout<<"Ready to drive ? "<<endl;
                 }
            return 1;
           }
           
           int reverse(int acceleration,int breacks,string Rgear)
           {     
               if(acceleration=1 && breacks==0 && Rgear=="R"){
                    cout<<"you are on a reverse gear"<<endl;
                 }
              else if(acceleration=1 && breacks==0 && Rgear=="D"){
                     cout<<"you are driving "<<endl;
                 }
              else{
                     cout<<"Put the gear to move the vehicle forward or back"<<endl;
                  }
           return 1;  
            }
};
//we have overloadede the cout operator inorder to print out the attributes
ostream& operator << (ostream& COUT, motorcar& car){
   COUT<<"Name: "<<car.name<<endl;
   COUT<<"Model: "<<car.model<<endl;
   COUT<<"Year of release: "<<car.year<<endl;
 return COUT;
}
//Deriver code
 int main ()
 {
   motorcar car=motorcar("Subaru","Forester",2023);
            operator << (COUT,car); 
            car.driving(0,0,0);
            car.reverse(0,0,"D");
    return 0;
 }
