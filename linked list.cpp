#include<iostream>
using namespace std;

struct node{
	int num;
	node*next;
};

class queue{
	node*front,*rear;
	public:
	queue(){
		rear=NULL;
		front=NULL;
	}

		void insert()
		{
			node*temp;
			temp=new node;
			cout<<"enter data"<<"\n";
			cin>>temp->num;
			temp->next=NULL;
			if(rear=NULL)
			{
				front=temp;
				rear=temp;
				
			}
			else
			{
			   rear->next=temp;
			   rear=temp;
			}
			
		}
		
		
	
};

int main()
{
	queue stud;
	stud.insert();
}
