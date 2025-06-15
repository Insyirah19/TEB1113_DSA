/*
ID=22011701
Name= Insyirah Amani binti Zainul Za'aba
*/

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    struct Student {
      
    int id;
    string name;
    int contact;
    string email;
    
    };
    
    Student students[5];
    
    for(int i=0; i<5; i++){
        
        cout<<"\nEnter data for student #"<<i+1<<endl;
        
        cout<<"Enter student id: "; cin>>students[i].id; cin.ignore();
        
        cout<<"Enter student name: "; getline(cin, students[i].name);
    
        cout<<"Enter student contact: "; cin>>students[i].contact; cin.ignore();       
    
        cout<<"Enter student email: "; getline(cin, students[i].email);
    
    }
    
    cout<<"\n---Student Information---"<<endl;
    
    for(int i=0; i<5; i++){
    cout<<"\nID: "<<students[i].id<<endl;
    cout<<"Name: "<<students[i].name<<endl;
    cout<<"Contact: "<<students[i].contact<<endl;
    cout<<"Email: "<<students[i].email<<endl;
    }
    
    return 0;
}