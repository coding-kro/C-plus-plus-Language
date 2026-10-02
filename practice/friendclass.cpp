#include<iostream>
using namespace std;
class aimit
{
	int x, y;
	protected:
		int z;
		public:
			void display()
			{
				cout<<"Enter Three no";
				cin>>x>>y>>z;
			}
			friend class bca;
		};
		class bca
		{
			public:
				void disp(aimit & a1)
				{
					cout<<a1.x+a1.y+a1.z;
				}
		};
		int main()
		{
			aimit a2;
			bca b1;
			a2.display();
			b1.disp(a2);
		}
