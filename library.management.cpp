#include<iostream>
#include<string.h>
#include<stdlib.h>

class library{
    public:
    int id;
    char name[100];
    char author[100];
    char student[100];
    int price;
    int pages;


};
using namespace std;

int main(){

    library lib[20];
    int input = 0;
    int count = 0;

    while(input!=3){
        cout<<"Enter 1 to input details like id, name, author, student, price, pages"<<endl;
        cout<<"Enter 2 to display deatils"<<endl;
        cout<<"Enter 3 to quit"<<endl;
        cin>>input;
    
        switch(input){

            case 1:
        start:
            cout<<"Enter book id"<<endl;
            cin>>lib[count].id;

            cout<<"Enter book Name"<<endl;
            cin>>lib[count].name;

            cout<<"Enter book author"<<endl;
            cin>>lib[count].author;

            cout<<"Enter student Name"<<endl;
            cin>>lib[count].student;

            cout<<"Enter book price"<<endl;
            cin>>lib[count].price;

            cout<<"Enter book pages"<<endl;
            cin>>lib[count].pages;

            count++;

            break;

        case 2:       
                int i;
                for(i=0;i<count;i++){
                    cout<<"Book id:"<<lib[i].id<<endl;
                    cout<<"Book name:"<<lib[i].name<<endl;
                    cout<<"Book author:"<<lib[i].author<<endl;
                    cout<<"student name:"<<lib[i].student<<endl;
                    cout<<"Book price:"<<lib[i].price<<endl;
                    cout<<"Book pages:"<<lib[i].pages<<endl;
                  
                         }     
                break;
                case 3:
                exit(0);
                break;
                default:
                cout<<"You have entered wrong value , please type again"<<endl; 
                goto start;   
        }
    }


    return 0;
}