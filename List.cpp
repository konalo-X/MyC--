#include<iostream>
template<class T>
class List<T>
{
private:
	class Node
	{
		public:
			Node * next;
			T val;
			Node(T &i):val(i),next(0){};
	};
	enum{L_SIZE=10};
	int size;
	Node * first;
	Node * last;
public:
	bool isEmpty()
	{
		if(size==0) 
			return true;
		else
		 	return false
	};
	bool isFull()
	{
		if(size==L_SIZE)
			return true;
		else
			return false;
	};
	bool addNode(T &item)
	{
		if(size<L_SIZE)
		{
			Node * add=new Node(item);
			size++;

				if(first==0)
				{
				first=add;
				first->val=item;
				last=add;
				}
		else
			last->next=add;

			last=add;
			return true;

		}
	return false;
	}
	bool delNode(T &item)
	{
		if (first==0)
		{
			return false;
		}
		else
		{
			size--;
			Node * temp ;
			temp=first;
			item=first->val;
			first=first->next;
			delete temp;
			return true;
		}
	}
	List(int n):size(n),Node(0)
	{

	}
	~List()
	{
		while(first!=0)
		{
			Node * temp;
			temp=first;
			first=first->next;
			delete temp;
		}
	}

}

int main()
{
	List<std::string> name(5);
	std::string str;
	for (int i = 0; i < 5; ++i)
	{
		
		std::cout<<"please input name["<<i+1<<"] : ";
		getline(str,cin);
		name.addNode(str);
	}
	while(name.delNode(str))
	{
		std::cout<<"deling--------"<<str<<std::endl;
	}
}