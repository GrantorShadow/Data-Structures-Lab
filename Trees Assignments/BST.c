    #include <stdio.h>

    #include <stdlib.h>

	#include <string.h>
	
	#include <time.h>

	#define max 10	
	
    struct node

    {

        int ID;
        
    	char name[max];
    	
    	char desig[max];
    	
    	int exp;
    	
    	float sal;

    	struct node*left;

    	struct node*right;

    };

    typedef struct node BST;

    BST *LOC, *PAR;

    void search(BST *root, int item)

    {

        BST *save,*ptr;

        if (root == NULL)//if root is null then element not present

        {

            LOC = NULL;

            PAR = NULL;

        }

        if (item == root -> ID)

        {
        
        	printf("ID :%d\n",root->ID);
		
			printf("Name :%s\n",root->name);
		
			printf("Designation :%s\n",root->desig);
		
			printf("Experience :%d\n",root->exp);
		
			printf("Salary :%f\n",root->sal);
		
        	LOC = root;//variable to store at which location it is being taken from

        	PAR = NULL;

        	return;

        }

        if (item < root->ID)

        {

            save = root;//saving for history

            ptr = root->left;//pointing to left node

        }

        else

        {

            save = root;//saving for history

            ptr = root -> right;// pointing to right node

        }

        while( ptr != NULL)

        {

            if (ptr -> ID == item)

            {
            
            	printf("ID :%d\n",ptr->ID);
		
				printf("name :%s\n",ptr->name);
		
				printf("Designation :%s\n",ptr->desig);
		
				printf("Experience :%d\n",ptr->exp);
		
				printf("Salary :%f\n",ptr->sal);
      
                LOC = ptr;

                PAR = save;

                return;

            }

            if(item < ptr->ID)

            {

                save = ptr;

                ptr = ptr->left;

            }

            else

            {

                save = ptr;

                ptr = ptr->right;

            }

        }
        
        LOC = NULL;

        PAR = save;

        return;

    }

     

    struct node* findmin(struct node*r)

    {

    	if (r == NULL)

    		return NULL;

    	else if (r->left!=NULL)

    		return findmin(r->left);

    	else if (r->left == NULL)

    		return r;

    }

    struct node *insert(struct node*r, int x, char nm[max], char designation[max], float salary, int experience)

    {

    	if (r == NULL)

    	{

                r = (struct node*)malloc(sizeof(struct node));

                r->ID = x;
                
              	strcpy ( r->name, nm);
                
              	strcpy( r->desig , designation);
                
                r->sal = salary;
                
                r->exp = experience;
                
                r->left = r->right = NULL;

                return r;

    	}

    	else if (x < r->ID)

                r->left = insert(r->left, x, nm, designation, salary, experience);

    	else if (x > r->ID)

                r->right = insert(r->right, x, nm, designation, salary, experience);

    	return r;

    }

     

    struct node* del(struct node*r, int x)

    {

    	struct node *t;

    	if(r == NULL)

    		printf("\nElement not found\n");

    	else if (x < r->ID)

                r->left = del(r->left, x);//recursive call

    	else if (x > r->ID)

                r->right = del(r->right, x);

    	else if ((r->left != NULL) && (r->right != NULL))

    	{

                t = findmin(r->right);

                r->ID = t->ID;

                r->right = del(r->right, r->ID);

    	}

    	else

    	{

                t = r;

                if (r->left == NULL)

                    r = r->right;

                else if (r->right == NULL)

                    r = r->left;

                free(t);

    	}

    	return r;

    }

     

     

    void main()

    {
		time_t rawtime;
	
		struct tm * timeinfo;
  	
  		time ( &rawtime );
  	
  		timeinfo = localtime ( &rawtime );
  	
  		printf ( "%s", asctime (timeinfo) );
		
        struct node* root = NULL;

        int x, c = 1, z;
        
        int idn, exp;
        
        char n[max],d[max];
        
        float s;

        int element;

        char ch;
        
        printf("\n------------------VIT PUNE ERP SYSTEM------------------\n");

        while(1)

        {

            printf("\n1 Insert an element ");

            printf("\n2 Delete an element");

            printf("\n3 Search for an element ");

            printf("\n4 Exit ");

            printf("\nEnter your choice: ");

            scanf("%d", &c);

            switch(c)

            {

                case 1:

                    printf("\nEnter ID: ");

        			scanf("%d", &idn);
        
        			printf("\nEnter name:");

        			scanf("%s", n);
        
					printf("\nEnter a designation:");

        			scanf("%s", d);
        
					printf("\nEnter salary:");

        			scanf("%f", &s);
        
        			printf("\nEnter experience:");

        			scanf("%d", &exp);
                
        			root = insert(root, idn, n, d, s, exp);

                    break;

                case 2:

                    printf("\nEnter the ID to be deleted:");

                    scanf("%d", &z);

                    root = del(root, z);

    		break;

                case 3:

                    printf("\nEnter an ID to be searched:  ");
                    
                    printf("\n");

                    scanf("%d", &element);

                    search(root, element);

                    if(LOC != NULL)

                        printf("\n%d ID present in ERP Database \n",element);

                    else

                        printf("\n ID NOT PRESENT in ERP Database\n");

                    break;

                case 4:

                    printf("\nExiting...\n");
                    
                    printf ( "%s", asctime (timeinfo) );

    		return;

                default:

                    printf("\nEnter a valid choice: \n");

     

            }

        }

    }
