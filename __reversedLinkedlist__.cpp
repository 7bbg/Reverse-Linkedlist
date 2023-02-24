#include<iostream>
using namespace std;

struct Node
{
	long long number;
	
	Node *next;
};
void print(Node *head, int indicator);


int main()
{
	Node * head=NULL, *current;
	
	int choice, indicator;
	
	
	indicator=0;	//The indicator is needed 
	
	//This add to the linked list based on the user choice
	while(choice !=-999)
	{
		current=new Node;
		
		cout<<"Enter the number you want to store : "; // To get the value from the user.
		
		cin>> current->number;
		
		current->next=head;
			
		head=current;
		
		indicator +=1;
		
		cout<<"Enter (-999) to exit or any number to continue: ";
		
		cin>>choice;
	}
	
	//To call the print linkedlist function
	cout<<"\nThe Printed Reversed Linked list is \n";
	print(head, indicator);
	
	return 0;
	
}

//This function would print the reversed linked list.
void print(Node *head, int indicator)
{
	
	Node *node =head;
	int counter=0;
	while (node!=NULL)
	{
		cout<<node->number;
		counter+=1;
		
		if(counter !=indicator)
		{
			cout<<"->";
		}
		node=node->next;
	}
}
