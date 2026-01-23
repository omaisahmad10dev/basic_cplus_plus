#include<iostream>
using namespace std;
class shop
{
	private:
	int itemID[10];
	int itemprice[10];
	int counter;
	public:
		void initcounter(void){counter=0;};
		void setprice(void);
		void displayprice(void);
		
};

void shop::setprice(void)
{
	cout<<"your previous id was:"<<counter<<endl;
	cout<<"Enter ID of your item no :";
	cin>>itemID[counter];
	cout<<"Enter price of your item no :";
	cin>>itemprice[counter];
	counter++;
	
	
}
void shop::displayprice(){
	for(int i=0; i>counter; i++){
		cout<<"The price of item with id "<<itemID[i]<<"is "<<itemprice[i]<<endl;
		
	}
}
int main()
{
	shop dukan;
	dukan.initcounter();
	dukan.setprice();
	dukan.setprice();
	dukan.setprice();
	dukan.setprice();
	dukan.setprice();
	dukan.setprice();
	dukan.displayprice();
	
	
	return 0;
}
