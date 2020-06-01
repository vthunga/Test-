/* Name: Divya Vani Linga
   CWID: 50229614    */

#include<iostream>
using namespace std;

struct node    
{ 
	int item; 
	node* next;
};

typedef node *link;
class STACK
  {
    private:
      link head;

    public:
      STACK()
	  {
      		head = NULL;
	  }
      STACK(int x)
	  { 
	  		head = new node();(Just for testing )
			head->item = x;
			head->next = NULL;  
		}
      int empty() const
	  {
	  		if(head == NULL)
			return 0; 
	  		return 1; 
		}
      void push(int x)
	  {
		if(head != NULL)
		{
	  		link temp = new node();
			temp->item = x;
			temp->next = head;
			head = temp; 
	  	}
		else
		{
	  		head = new node();
			head->item = x;
			head->next = NULL;
		}	
	 }
      int peek()
	  {
      		if(head != NULL)
			  {
				int val = head->item;
				return val;
			}
			return 0;
      }
    	int pop()
		{ 
	  		if(head!=NULL)
			  {
				int v = head->item; 
				link t = head->next;
    			delete head; 
				head = t; 
				return v; 
			}
			return 0;
		
		}
      void flush()
	  {
      		link temp = head;	
        	while(temp != NULL)
			{
        		cout<<temp->item<<"\t";
        		temp = temp->next;
			}
			head = NULL;
        	cout<<endl;
      }
  };
  int main()
  {
  	STACK *s = new STACK();
  	cout<<"P x : pushes integer x onto the stack\n";
	cout<<"R :  pops off and displays the stack top\n";
	cout<<"E :  outputs \"empty\" if stack is empty; otherwise \"not empty\"\n";
	cout<<"K :  outputs the stack top integer x using function peek\n";
	cout<<"F :  outputs the entire content of the stack in last-in first-out order; empties the stack using function flush\n";
  	cout<<"Q :  Quit\n";
	char ch;
  	cin>>ch;
  	while(ch != 'Q')
	  {
  		if(ch == 'P')
		  {
  			cout<<"Enter an integer to push into the stack\n";
  			int val;
			cin>>val;
			s->push(val);
		}
		else if(ch == 'R')
		{
			cout<<s->pop()<<" is poped from the stack\n";	
		}
		else if(ch == 'E')
		{
			if(s->empty() == 1)
				cout<<"Not empty\n";
			else
				cout<<"Empty\n";
		}
		else if(ch == 'K')
		{
			cout<<"The element in the top of the stack is "<<s->peek()<<endl;
		}
		else if(ch == 'F')
		{
			s->flush();
		}
		cout<<"enter choice\n";
		cin>>ch;
	}
  }


