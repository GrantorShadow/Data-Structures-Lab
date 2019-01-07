/*
Assignment on AVL Tree
Roll No - 27

*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct node {
	char data[15];
	struct node *left,*right;
	int ht;
} node;

node *insert(node *,char[]);
node *Delete(node *,char[]);
void preorder(node *);
void inorder(node *);
int height( node *);
node *rotateright(node *);
node *rotateleft(node *);
node *RR(node *);
node *LL(node *);
node *LR(node *);
node *RL(node *);
int BF(node *);

int main() {
	node *root=NULL;
	int size,i;
	char str[15];


	printf("\nEnter no. of elements : ");
	fflush(stdout);
	scanf("%d",&size);

	root=NULL;
	for(i=1; i<=size; i++) {
		printf("\n Enter element %d = ",i);
		fflush(stdin);
		fflush(stdout);
		gets(str);
		root=insert(root,str);

		printf("\n After insertion of %d element : \n ",i);
		printf("\nPreorder sequence : ");
		preorder(root);
		printf("\n\nInorder sequence : ");
		inorder(root);
		printf("\n");

	}

	printf("\n Enter element to delete = ");
	fflush(stdin);
	fflush(stdout);
	gets(str);

	root=Delete(root,str);

	printf("\n After deletion of element : \n ");
	printf("\nPreorder sequence : ");
	preorder(root);
	printf("\n\nInorder sequence : ");
	inorder(root);
	printf("\n");

	return 0;
}

node * insert(node *T, char str[]) {

	if(T==NULL) {
		T=(node*)malloc(sizeof(node));
		strcpy(T->data,str);
		T->left=NULL;
		T->right=NULL;
	} else if(strcmp(str,T->data)>0) {   // insert in right subtree
		T->right=insert(T->right,str);
		if(BF(T)==-2) {
			if(strcmp(str,T->data)>0){
				printf("\n RR Rotation is Performed. ");
				T=RR(T);
			}

			else{
				printf("\n RL Rotation is Performed. ");
				T=RL(T);
			}

		}
	} else if(strcmp(str,T->data)<0) {
		T->left=insert(T->left,str);
		if(BF(T)==2)
		{
			if(strcmp(str,T->data)<0)
			{
				printf("\n LL Rotation is Performed. ");
				T=LL(T);
			}
			else
			{
				printf("\n LR Rotation is Performed. ");
				T=LR(T);
			}
		}

	}

	T->ht=height(T);

	return(T);
}

int height(node *T) {
	int lh,rh;
	if(T==NULL)
		return(0);

	if(T->left==NULL)
		lh=0;
	else
		lh=1+T->left->ht;

	if(T->right==NULL)
		rh=0;
	else
		rh=1+T->right->ht;

	if(lh>rh)
		return(lh);

	return(rh);
}

node * rotateright(node *x) {
	node *y;
	y=x->left;
	x->left=y->right;
	y->right=x;
	x->ht=height(x);
	y->ht=height(y);
	return(y);
}

node * rotateleft(node *x) {
	node *y;
	y=x->right;
	x->right=y->left;
	y->left=x;
	x->ht=height(x);
	y->ht=height(y);

	return(y);
}

node * RR(node *T) {
	T=rotateleft(T);
	return(T);
}

node * LL(node *T) {
	T=rotateright(T);
	return(T);
}

node * LR(node *T) {
	T->left=rotateleft(T->left);
	T=rotateright(T);

	return(T);
}

node * RL(node *T) {
	T->right=rotateright(T->right);
	T=rotateleft(T);
	return(T);
}

int BF(node *T) {
	int lh,rh;
	if(T==NULL)
		return(0);

	if(T->left==NULL)
		lh=0;
	else
		lh=1+T->left->ht;

	if(T->right==NULL)
		rh=0;
	else
		rh=1+T->right->ht;

	return(lh-rh);
}

void preorder(node *T) {
	if(T!=NULL) {
		printf("%s  ",T->data);
		preorder(T->left);
		preorder(T->right);
	}
}

void inorder(node *T) {
	if(T!=NULL) {
		inorder(T->left);
		printf("%s  ",T->data);
		inorder(T->right);
	}
}


node * Delete(node *T,char str[]) {
	node *p;

	if(T==NULL) {
		return NULL;
	} else if(strcmp(str,T->data)>0) {   // insert in right subtree
		T->right=Delete(T->right,str);
		if(BF(T)==2)
		{
			if(BF(T->left)>=0)
				T=LL(T);
			else
				T=LR(T);
		}
	} else if(strcmp(str,T->data)<0)
	{
		T->left=Delete(T->left,str);
		if(BF(T)==-2)    //Rebalance during windup
		{
			if(BF(T->right)<=0)
				T=RR(T);
			else
				T=RL(T);
		}
	}
	else
	{
		//data to be deleted is found
		if(T->right!=NULL) {
			//delete its inorder succesor
			p=T->right;

			while(p->left!= NULL)
				p=p->left;

			//strcmp(T->data,p->data);
			T->right=Delete(T->right,p->data);

			if(BF(T)==2)//Rebalance during windup
			{
				if(BF(T->left)>=0)
					T=LL(T);
				else
					T=LR(T);
			}
			\
		} else
			return(T->left);
	}
	T->ht=height(T);
	return(T);
}


