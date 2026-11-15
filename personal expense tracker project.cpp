#include<iostream>
#include<string>
using namespace std;
class expense_tracker{
	private:
		int trx_id;
		string trx_type;
		string trx_catagory;
		double trx_amount;
		string trx_date;
	public:
		void add_transaction(){
			cout<<"enter transaction Id : "<<endl;
			cin>>trx_id;
			cout<<"enter transaction type (income/expense) : "<<endl;
			cin>>trx_type;
			cout<<"enter catagory of transaction(food/shopping/travel etc) : "<<endl;
			cin>>trx_catagory;
			cout<<"enter transaction amount : "<<endl;
			cin>>trx_amount;
			cout<<"enter date of transaction : "<<endl;
			cin>>trx_date;
		}
		void display_transaction(){
			cout<<"transaction id : "<<trx_id<<endl;
			cout<<"transaction type : "<<trx_type<<endl;
			cout<<"transaction catagory : "<<trx_catagory<<endl;
			cout<<"transaction amount : "<<trx_amount<<endl;
			cout<<"transaction date : "<<trx_date<<endl;
		}
};
int main(){
	expense_tracker t1;
	t1.add_transaction();
	t1.display_transaction();
	return 0;
}
