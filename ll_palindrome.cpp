
//ERROR IN CODE... SOME PROBLEM IN PASSING STIRNG IN print_ll function
/*Given a linked list handling string data, check to see whether data is palindrome or not?
For example,

Input  : a -> bc -> d -> dcb -> a -> NULL
Output : True
String "abcddcba" is palindrome.

Output : a -> bc -> d -> ba -> NULL
Output : False
String "abcdba" is not palindrome. 

*/
#include <bits/stdc++.h>
using namespace std;

struct node
{
	string data;
	struct node* next;
};

void push(struct node** head_ref, const char* new_data)
{
	struct node* new_node=(struct node*) malloc(sizeof(struct node));
	puts("1");
	cout<<new_data;
	new_node->data= new_data;
	new_node->data = new_data;
	puts("2");
	new_node->next=*(head_ref);
	puts("3");
	*(head_ref)=new_node;
	puts("4");  	
	puts("push function working well");
}

void print_ll(struct node* head)
{
	struct node* ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data;
		ptr=ptr->next;
	}
	puts("print_ll function working well");
}

//to check if complete string is palindorme or not
bool palindrome(string s)
{
	
	int len=s.length();
	for(int i=0;i<len;i++)
	{
		if(s[i]!=s[len-1-i])
			return false;
	}
	puts("palindrome function working well");
	return true;
}
		
	
bool llpalindrome(struct node* ptr)
{
	
	string s="";
	while(ptr!=NULL)
	{
		s.append(ptr->data);
		ptr=ptr->next;
	}
	puts("llpalindrome function working well");
	return palindrome(s);
	
}

int main()
{
	struct node* a=NULL;
	puts("qwerty");
	
	push(&a,"a");
	puts("asdf");
	push(&a,"abba");
	puts("zxcvb");
	//print_ll(a);
	cout<<endl;
	llpalindrome(a)? printf("yes\n"):printf("no\n");
	return 0;
}
