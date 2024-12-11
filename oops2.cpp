//book publication
#include<iostream>
using namespace std;
class publication
{
	public:
		string title;
		int price;
		public:
			void getdata()
			{
				cout<<"enter the title of the publication:";
				cin>>title;
				cout<<"enter the price of the publication:";
				cin>>price;
			}
			void putdata()
			{
				cout<<"the title of the given publication is:"<<title<<endl;
				cout<<"the price of the given publication is:"<<price<<endl;
			}
};
class book:public publication
{
	public:
		int pagecount;
		public:
			void getdata()
			{
				publication::getdata();
				cout<<"enter the page count of the book:";
				cin>>pagecount;
			}
			void putdata()
			{
				publication::putdata();
				cout<<"the total number of the paecount in the publication is:"<<pagecount<<endl;
			}
};
class tape:public publication
{
	public:
		float ptime;
		
		public:
			void getdata()
			{
				publication::getdata();
				cout<<"enter the time playing of the given publication:";
				cin>>ptime;
			}
			void putdata()
			{
				publication::putdata();
				cout<<"the playing time of the publication is:"<<ptime<<endl;
			}
		
};
int main()
{
	book b;
	tape t;
	b.getdata();
	t.getdata();
	b.putdata();
	t.putdata();
	return 0;
}
