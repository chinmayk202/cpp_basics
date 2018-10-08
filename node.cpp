#include<iostream>
using namespace std;

typedef struct node{
	int data;
	node* next;
}node;

node* create(int data , node* next){
	node* new_node = (node*)malloc(sizeof(node));
	if(new_node == NULL){
		cout << "Error creating node\n";
		return NULL;
	}
	new_node->data = data;
	new_node->next = next;
	return new_node;
}

node* append(int data, node* head){
	if(head == NULL){
		return create(data,NULL);
	}
	else{
		node* cursor = head;
		while(cursor->next != NULL){
			cursor = cursor->next;
		}
		cursor->next = create(data,NULL);
		return head;
	}
}

node* prepend(int data, node* head){
	return create(data,head);	
}

node* add_node(int data, node* previous){
	if(previous == NULL){
		return create(data,NULL);
	}
	else{
		previous->next = create(data,previous->next);
		return previous->next;
	}
}

node* delete_node(node* head,node* addr){
	if(addr == NULL) return head;
	else if(addr == head){
		node* temp = head;
		head = head->next;
		free(temp);
		return head;
	}
	else{
		node* cursor = head;
		while(cursor->next != addr){
			cursor = cursor->next;
		}
		cursor->next = addr->next;
		free(addr);
		return head;
	}
	
}

int count_el(node* head){
	int n = 0;
	node* cursor = head;
        while(cursor != NULL){
                cursor = cursor->next;
		n++;
        }
	return n;
}

node* nth_addr(node* head,int n){
	node* cursor = head;
	int count = 0;
	while(count != n && cursor != NULL){
		cursor = cursor->next;
		count++;
	}
	return cursor;
}

node* delete_nth(node* head, int n){
        return delete_node(head,nth_addr(head,n));
}


int nth_data(node* head, int n){
	if(nth_addr(head,n) != NULL){
		return nth_addr(head,n)->data;
	}
	else return 0;
}

void print_ll(node* head){
	node* cursor = head;
        while(cursor != NULL){
		cout << cursor->data << endl;
                cursor = cursor->next;
        }
}

int main(){
	/*node* head = (node*)malloc(sizeof(node));
	head->data = 5;
	head->next = NULL;*/
	node* head = create(5,NULL);
	append(55,head);
	append(56,head);
	head = prepend(3,head);
	add_node(33,head);
	head = delete_nth(head,0);
	print_ll(head);
        cout << count_el(head) << endl << nth_data(head,0) << nth_addr(head,3)->data;
	return 0;
}
