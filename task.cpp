#include<iostream>
#include<fstream>
using namespace std;
struct my_data
{
	float *ptr;
	int **ptr1=NULL;
	int **ptr2=NULL;
	int **ptr3=NULL;
	int rows1;
	int cols1;
	int rows2;
	int cols2;
};
//file input

void fill_array(my_data &mat,ifstream &fin);
void fill_array2(my_data &mat,ifstream &fin);
int find_cols(ifstream &fin);
int find_rows(ifstream &fin,int c);
void read_data(my_data &mat);
void read_data2(my_data &mat);

//MENU
void menu(void);
void user_wish(void);
void menu1(void);

//Delete
void delete1(my_data &mat);
void delete2(my_data &mat);
//input 
void input(my_data &mat);
void check(my_data &mat);
void input1(my_data &mat);
void input2(my_data &mat);


//FUNction display and performing
void function(my_data &mat,ofstream &fout);
void sum_matrix(my_data &mat,ofstream &fout);//1
void display_sum(int sum,ofstream &fout);//1
void product_all_values(my_data &mat,ofstream &fout);//2
void display_pro(int mul,ofstream &fout);//2
void row_average(my_data &mat,ofstream &fout);//3
void display_row_avg(my_data &mat,ofstream &fout);//3
void col_average(my_data &mat,ofstream &fout);//4
void display_col_avg(my_data &mat,ofstream &fout);//4
void average_matrix(my_data &mat,ofstream &fout);//5
void display_avg(float avg,ofstream &fout);//5
void swap(int &a,int &b);

void row_sorting(my_data &mat,ofstream &fout);//6
void row_ascending(my_data &mat);//6
void row_descending(my_data &mat);//6
void display_r_as(my_data &mat,ofstream &fout);//6
void display_r_des(my_data &mat,ofstream &fout);//6

void cols_sorting(my_data &mat,ofstream &fout);//7
void cols_ascending(my_data &mat,ofstream &fout);//7
void display_col_as(my_data &mat,ofstream &fout);//7
void cols_descending(my_data &mat);//7
void display_col_des(my_data &mat,ofstream &fout);//7

void scalar_add(my_data &mat,ofstream &fout);//8
void display_s_add(my_data &mat,ofstream &fout);//8
void display_add_mat(my_data &mat,ofstream &fout);//9
void add_two_matrics(my_data &mat,ofstream &fout);//9
void scalar_sub(my_data &mat,ofstream &fout);//10
void display_s_sub(my_data &mat,ofstream &fout);//10
void sub_two_matrics(my_data &mat,ofstream &fout);//11
void display_sub_mat(my_data &mat,ofstream &fout);//11
void scalar_mul(my_data &mat,ofstream &fout);//12
void display_s_mul(my_data &mat,ofstream &fout);//12
void display_mul(my_data &mat,ofstream &fout);//13
void multiplication(my_data &mat,ofstream &fout);//13
void scalar_div(my_data &mat,ofstream &fout);///14
void display_s_div(my_data &mat,ofstream &fout);//14
void display_transpose(my_data &mat,ofstream &fout);//15
void transpose_matrix(my_data &mat,ofstream &fout);//15

void determinant(my_data &mat,ofstream &fout);//16
int det(my_data &mat,ofstream &fout);//16
void display_2_det(int det,ofstream &fout);//6
void adjoint2(my_data &mat);//17
void display_inverse(my_data &mat,ofstream &fout);//17
void inverse(my_data &mat,ofstream &fout);

int main()
{
	ofstream fout;
	my_data mat;
	function(mat,fout);	
}
void function(my_data &mat,ofstream &fout)
{
	cout<<"\n*****************WELCOME TO MATRIX CALCULATION******************\n";
	int option1=0,option2=0;
	while(1)
	{
		menu();
		cout<<"\nEnter your option to which operation operate a task :   ";
		cin>>option1;
		if(option1==1)
		{
			menu1();
			cin>>option2;
			if(option2==1)
			{
				input(mat);
				sum_matrix(mat,fout);
			}
			if(option2==2)
			{
				read_data(mat);
				sum_matrix(mat,fout);
			}
		}
		else if(option1==2)
		{
			menu1();
			cin>>option2;
			if(option2==1)
			{
				input(mat);
				product_all_values(mat,fout);
			}
			if(option2==2)
			{
				read_data(mat);
				product_all_values(mat,fout);
			}
		}
		else if(option1==3)
		{
			menu1();
			cin>>option2;
			if(option2==1)
			{
				input(mat);
				row_average(mat,fout);
			}
			if(option2==2)
			{
				read_data(mat);
				row_average(mat,fout);
			}
		}
		else if(option1==4)
		{
			menu1();
			cin>>option2;
			if(option2==1)
			{
				input(mat);
				col_average(mat,fout);
			}
			if(option2==2)
			{
				read_data(mat);
				col_average(mat,fout);
			}
		}
		else if(option1==5)
		{
			menu1();
			cin>>option2;
			if(option2==1)
			{
				input(mat);
				average_matrix(mat,fout);
			}
			if(option2==2)
			{
				read_data(mat);
				average_matrix(mat,fout);
			}
		}
		else if(option1==6)
		{
			menu1();
			cin>>option2;
			if(option2==1)
			{
				input(mat);
				row_sorting(mat,fout);
			}
			if(option2==2)
			{
				read_data(mat);
				row_sorting(mat,fout);
			}
		}
		else if(option1==7)
		{
			menu1();
			cin>>option2;
			if(option2==1)
			{
				input(mat);
				cols_sorting(mat,fout);
			}
			if(option2==2)
			{
				read_data(mat);
				cols_sorting(mat,fout);
			}
		}
		else if(option1==8)
		{
			menu1();
			cin>>option2;
			if(option2==1)
			{
				input(mat);
				scalar_add(mat,fout);
			}
			if(option2==2)
			{
				read_data(mat);
				scalar_add(mat,fout);
			}
		}
		else if(option1==9)
		{
			menu1();
			cin>>option2;
			if(option2==1)
			{
				input1(mat);
				add_two_matrics(mat,fout);
			}
			if(option2==2)
			{
				read_data(mat);
				cout<<mat.rows1<<"  "<<mat.cols1;
				read_data2(mat);
				cout<<mat.rows2<<"  "<<mat.cols2;
				add_two_matrics(mat,fout);
			}
		}
		else if(option1==10)
		{
			menu1();
			cin>>option2;
			if(option2==1)
			{
				input(mat);
				scalar_sub(mat,fout);
			}
			if(option2==2)
			{
				read_data(mat);
				scalar_sub(mat,fout);
			}
		}
		else if(option1==11)
		{
			menu1();
			cin>>option2;
			if(option2==1)
			{
				input1(mat);
				sub_two_matrics(mat,fout);
			}
			if(option2==2)
			{
				read_data(mat);
				read_data2(mat);
				sub_two_matrics(mat,fout);
			}
		}
		else if(option1==12)
		{
			menu1();
			cin>>option2;
			if(option2==1)
			{
				input(mat);
				scalar_mul(mat,fout);
			}
			if(option2==2)
			{
				read_data(mat);
				scalar_mul(mat,fout);
			}
		}
		else if(option1==13)
		{
			menu1();
			cin>>option2;
			if(option2==1)
			{
				input2(mat);
				multiplication(mat,fout);
			}
			if(option2==2)
			{
				read_data(mat);
				read_data2(mat);
				multiplication(mat,fout);
			}
		}
		else if(option1==14)
		{
			menu1();
			cin>>option2;
			if(option2==1)
			{
				input(mat);
				scalar_div(mat,fout);
			}
			if(option2==2)
			{
				read_data(mat);
				scalar_div(mat,fout);
			}
		}
		else if(option1==15)
		{
			menu1();
			cin>>option2;
			if(option2==1)
			{
				input(mat);
				transpose_matrix(mat,fout);
			}
			if(option2==2)
			{
				read_data(mat);
				transpose_matrix(mat,fout);
			}
		}
		else if(option1==16)
		{
			menu1();
			cin>>option2;
			if(option2==1)
			{
				input(mat);
				determinant(mat,fout);
			}
			if(option2==2)
			{
				read_data(mat);
				determinant(mat,fout);
			}
		}
		
		else if(option1==17)
		{
			menu1();
			cin>>option2;
			if(option2==1)
			{
				input(mat);
				inverse(mat,fout);
			}
			if(option2==2)
			{
				read_data(mat);
				inverse(mat,fout);
			}
		}
		else if(option1==18)
		{
			break;
		}
		else
		{
			cout<<"Enter a wrong number : ";
			cin>>option1;
		}
	}
}
void sum_matrix(my_data &mat,ofstream &fout)//1
{
	int sum=0;
	for(int i=0;i<mat.rows1;i++)
	{
		for(int j=0;j<mat.cols1;j++)
		{
			sum=sum+mat.ptr1[i][j];
		}
	}
	display_sum(sum,fout);
	delete1(mat);
}
void display_sum(int sum,ofstream &fout)//1
{
	char arr[100];
	user_wish();
	int option=0;
	cin>>option;
	while(1)
	{
		if(option==1)
		{
			cout<<"\nSum of whole matrix is :    "<<sum;
			break;
		}
		else if(option==2)
		{
			cout<<"\n\nEnter a file name :: ";
			cin.ignore();
			cin.getline(arr,100);
			fout.open(arr);
			fout<<"\nSum of whole matrix is :    "<<sum;
			fout.close();
			break;
		}
		else
		{
			cout<<"Wrong option :  Enter again";
			cin>>option;
		}
	}
}
void product_all_values(my_data &mat,ofstream &fout)//2
{
	int mul=1;
	for(int i=0;i<mat.rows1;i++)
	{
		for(int j=0;j<mat.cols1;j++)
		{
			mul=mul*mat.ptr1[i][j];	
		}
	}
	display_pro(mul,fout);
	delete1(mat);
}
void display_pro(int mul,ofstream &fout)//2
{
	user_wish();
	int option=0;
	cin>>option;
	char arr[100];
	while(1)
	{
		if(option==1)
		{
			cout<<"Product of all values is : "<<mul;
			break;
		}
		else if(option==2)
		{
			cout<<"\n\nEnter a file name :: ";
			cin.ignore();
			cin.getline(arr,100);
			fout.open(arr);		
			fout<<"Product of all values is : "<<mul;
			fout.close();
			break;
		}
		else
		{
			cout<<"Wrong option : ";
			cout<<"Enter again: ";
		}
	}
}
void row_average(my_data &mat,ofstream &fout)//3
{
	float r_avg=0;
	int sum=0;
	mat.ptr=new float[mat.rows1];
	for(int i=0;i<mat.rows1;i++)
	{
		sum=0;
		for(int j=0;j<mat.cols1;j++)
		{
			sum=sum+mat.ptr1[i][j];
		}
		r_avg=sum/mat.cols1;
		mat.ptr[i]=r_avg;
	}
	display_row_avg(mat,fout);
	delete1(mat);
	delete []mat.ptr;
	mat.ptr=NULL;
}
void display_row_avg(my_data &mat,ofstream &fout)//3
{
	user_wish();
	int option=0;
	cin>>option;
	char arr[100];
	while(1)
	{
		if(option==1)
		{
			for(int i=0;i<mat.rows1;i++)
			{
				cout<<"Average of "<<i+1<<" row is "<<mat.ptr[i]<<endl;
			}
			break;
		}
		else if(option==2)
		{
			cout<<"\n\nEnter a file name :: ";
			cin.ignore(1);
			cin.getline(arr,100);
			fout.open(arr);
			for(int i=0;i<mat.rows1;i++)
			{
				fout<<"Average of "<<i+1<<" row is "<<mat.ptr[i]<<endl;
			}
			fout.close();
			break;
		}
		else
		{
			cout<<"Wrong option :  Enter again";
			cin>>option;
		}
	}
}
void col_average(my_data &mat,ofstream &fout)//4
{
	float c_avg=0;
	int sum=0;
	mat.ptr=new float[mat.rows1];
	for(int i=0;i<mat.cols1;i++)
	{
		sum=0;
		for(int j=0;j<mat.rows1;j++)
		{
			sum=sum+mat.ptr1[j][i];		
		}
		c_avg=sum/mat.rows1;
		mat.ptr[i]=c_avg;
	}
	display_col_avg(mat,fout);
	delete1(mat);
	delete []mat.ptr;
	mat.ptr=NULL;
}
void display_col_avg(my_data &mat,ofstream &fout)//4
{
	user_wish();
	int option=0;
	cin>>option;
	char arr[100];
	while(1)
	{
		if(option==1)
		{
			for(int i=0;i<mat.cols1;i++)
			{
				cout<<"\nAverage of "<<i+1<<" column is "<<mat.ptr[i];
			}
			break;
		}
		else if(option==2)
		{
			cout<<"\n\nEnter a file name :: ";
			cin.ignore(1);
			cin.getline(arr,100);
			fout.open(arr);
			for(int i=0;i<mat.rows1;i++)
			{
				fout<<"Average of "<<i+1<<" column "<<mat.ptr[i]<<endl;
			}
			fout.close();
			break;
		}
		else
		{
			cout<<"Wrong option :  Enter again";
			cin>>option;
		}
	}
}
void average_matrix(my_data &mat,ofstream &fout)//5
{
	float avg;
	int sum=0;
	for(int i=0;i<mat.rows1;i++)
	{
		for(int j=0;j<mat.cols1;j++)
		{
			sum=sum+mat.ptr1[i][j];
		}
	}
	avg=sum/(mat.rows1+mat.cols1);
	display_avg(avg,fout);
	delete1(mat);
}
void display_avg(float avg,ofstream &fout)//5
{
	user_wish();
	int option=0;
	cin>>option;
	char arr[100];
	while(1)
	{
		if(option==1)
		{
			cout<<"\average of whole matrix is :    "<<avg;
			break;
		}
		else if(option==2)
		{
			cout<<"\n\nEnter a file name :: ";
			cin.ignore(1);
			cin.getline(arr,100);
			fout.open(arr);
			fout<<"\average of whole matrix is :    "<<avg;
			fout.close();
			break;
		}
		else
		{
			cout<<"Wrong option :  Enter again";
			cin>>option;
		}
	}
}


void row_sorting(my_data &mat,ofstream &fout)//6
{
	row_ascending(mat);
	display_r_as(mat,fout);
	row_descending(mat);
	display_r_des(mat,fout);
	delete1(mat);
}
void row_ascending(my_data &mat)//6
{
	for(int i=0;i<mat.rows1;i++)
    {
    	for(int k=0;k<mat.cols1;k++)
    	{
			 for(int j=0;j<mat.cols1-1;j++)
       		 {
          		if(mat.ptr1[i][j]>mat.ptr1[i][j+1])
           		{
					swap(mat.ptr1[i][j],mat.ptr1[i][j+1]);
				}
			}
       	}
   	 }
}		
void row_descending(my_data &mat)//6
{
	for(int i=0;i<mat.rows1;i++)
    {
    	for(int k=0;k<mat.cols1;k++)
    	{
			 for(int j=0;j<mat.cols1-1;j++)
       		 {
          		if(mat.ptr1[i][j]<mat.ptr1[i][j+1])
           		{
					swap(mat.ptr1[i][j],mat.ptr1[i][j+1]);
				}
			}
       	}
   	 }
}		
void  display_r_as(my_data &mat,ofstream &fout)//6
{
	cout<<"\nSorting of rows ascending order : \n";
	user_wish();
	int option=0;
	cin>>option;
	char arr[100];
	while(1)
	{
		if(option==1)
		{
			for(int i=0;i<mat.rows1;i++)
			{
				for(int j=0;j<mat.cols1;j++)
				{
					cout<<mat.ptr1[i][j]<<"  ";
				}			
				cout<<endl;
			}
			break;
		}
		else if(option==2)
		{
			cout<<"Enter a file name :: ";
			cin.ignore(1);
			cin.getline(arr,100);
			fout.open(arr);
			for(int i=0;i<mat.rows1;i++)
			{
				for(int j=0;j<mat.cols1;j++)
				{
					fout<<mat.ptr1[i][j]<<"  ";
				}			
				fout<<endl;
			}
			fout.close();
			break;
		}
		else
		{
			cout<<"Wrong option :  Enter again";
			cin>>option;
		}
	}
}
void  display_r_des(my_data &mat,ofstream &fout)//6
{
	cout<<"\nSorting of rows descending order : \n";
	user_wish();
	int option=0;
	cin>>option;
	char arr[100];
	while(1)
	{
		if(option==1)
		{
			for(int i=0;i<mat.rows1;i++)
			{
				for(int j=0;j<mat.cols1;j++)
				{
					cout<<mat.ptr1[i][j]<<"  ";
				}			
				cout<<endl;
			}
			break;
		}
		else if(option==2)
		{
			cout<<"Enter a file name :: ";
			cin.ignore(1);
			cin.getline(arr,100);
			fout.open(arr);
			for(int i=0;i<mat.rows1;i++)
			{
				for(int j=0;j<mat.cols1;j++)
				{
					fout<<mat.ptr1[i][j]<<"  ";
				}			
				fout<<endl;
			}
			fout.close();
			break;
		}
		else
		{
			cout<<"Wrong option :  Enter again";
			cin>>option;
		}
	}
}
void swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}
void cols_ascending(my_data &mat)
{
	for(int i=0;i<mat.cols1;i++)
	{
   		for(int k=0;k<mat.rows1;k++)
   		{
			for(int j=0;j<mat.rows1-1;j++)
       		{
          		if(mat.ptr1[j][i]>mat.ptr1[j+1][i])
           		{
					swap(mat.ptr1[j][i],mat.ptr1[j+1][i]);
				}
			}
       	}
   	}
}
void display_col_as(my_data &mat,ofstream &fout)
{
	cout<<"\nSorting of cols ascending order : \n";
	user_wish();
	int option=0;
	cin>>option;
	char arr[100];
	while(1)
	{
		if(option==1)
		{
			for(int i=0;i<mat.rows1;i++)
			{
				for(int j=0;j<mat.cols1;j++)
				{
					cout<<mat.ptr1[i][j]<<"  ";
				}
				cout<<endl;
			}
			break;
		}
		else if(option==2)
		{
			cout<<"Enter a file name :: ";
			cin.ignore(1);
			cin.getline(arr,100);
			fout.open(arr);
			for(int i=0;i<mat.rows1;i++)
			{
				for(int j=0;j<mat.cols1;j++)
				{
					fout<<mat.ptr1[i][j]<<"  ";
				}			
				fout<<endl;
			}
			fout.close();
			break;
		}
		else
		{
			cout<<"Wrong option :  Enter again";
			cin>>option;
		}
	}
}
void cols_descending(my_data &mat)
{
	for(int i=0;i<mat.rows1;i++)
	{
   		for(int k=0;k<mat.rows1;k++)
   		{
			for(int j=0;j<mat.rows1;j++)
       		{
          		if(mat.ptr1[j][i]<mat.ptr1[j+1][i])
           		{
					swap(mat.ptr1[j][i],mat.ptr1[j+1][i]);
				}
			}
       	}
   	 }
}
void display_col_des(my_data &mat,ofstream &fout)
{
	cout<<"\nSorting of cols descending order : \n";
	user_wish;
	int option=0;
	cin>>option;
	char arr[100];
	while(1)
	{
		if(option==1)
		{
			for(int i=0;i<mat.rows1;i++)
			{
				for(int j=0;j<mat.cols1;j++)
				{
					cout<<mat.ptr1[i][j]<<"  ";
				}
				cout<<endl;
			}
			break;
		}
		else if(option==2)
		{
			cout<<"Enter a file name :: ";
			cin.ignore(1);
			cin.getline(arr,100);
			fout.open(arr);
			for(int i=0;i<mat.rows1;i++)
			{
				for(int j=0;j<mat.cols1;j++)
				{
					fout<<mat.ptr1[i][j]<<"  ";
				}			
				fout<<endl;
			}
			fout.close();
			break;
		}
		else
		{
			cout<<"Wrong option :  Enter again";
			cin>>option;
		}
	}
}
void cols_sorting(my_data &mat,ofstream &fout)
{
	cols_ascending(mat);
	display_col_as(mat,fout);
	
	cols_descending(mat);
	display_col_des(mat,fout);
	delete1(mat);
}
void scalar_add(my_data &mat,ofstream &fout)
{
	int num=0;
	cout<<"Enter a number to add in matrix : ";
	cin>>num;
	for(int i=0;i<mat.rows1;i++)
	{
		for(int j=0;j<mat.cols1;j++)
		{
			mat.ptr1[i][j]=num+mat.ptr1[i][j];
		}
	}
	display_s_add(mat,fout);
	delete1(mat);
}
void display_s_add(my_data &mat,ofstream &fout)
{
	user_wish();
	int option=0;
	cin>>option;
	char arr[100];
	cout<<"\nSclar matrix additon is : \n";
	while(1)
	{
		if(option==1)
		
		{
			for(int i=0;i<mat.rows1;i++)
			{
				for(int j=0;j<mat.cols1;j++)
				{
					cout<<mat.ptr1[i][j]<<"  ";
				}
				cout<<endl;
			}
			break;
		}
		else if(option==2)
		{
			cout<<"Enter a file name :: ";
			cin.ignore(1);
			cin.getline(arr,100);
			fout.open(arr);
			for(int i=0;i<mat.rows1;i++)
			{
				for(int j=0;j<mat.cols1;j++)
				{
					fout<<mat.ptr1[i][j]<<"  ";
				}			
				fout<<endl;
			}
			fout.close();
			break;
		}
		
	}
}
void add_two_matrics(my_data &mat,ofstream &fout)
{
	mat.ptr3=new int*[mat.rows1];
	for(int i=0;i<mat.rows1;i++)
	{
		mat.ptr3[i]=new int[mat.cols1];
		for(int j=0;j<mat.cols1;j++)
		{
			mat.ptr3[i][j]=mat.ptr1[i][j]+mat.ptr2[i][j];
		}
	}
	display_add_mat(mat,fout);
	delete2(mat);
	//delete 3 array
	for(int i=0;i<mat.rows1;i++)
	{
		delete[] mat.ptr3[i];
	}
	delete []mat.ptr3;
	mat.ptr3=NULL;
}
void display_add_mat(my_data &mat,ofstream &fout)
{
	cout<<"Sum of two matrics : \n";
	user_wish();
	int option=0;
	cin>>option;
	char arr[100];
	while(1)
	{
		if(option==1)
		{
			for(int i=0;i<mat.rows1;i++)
			{
				for(int j=0;j<mat.cols1;j++)
				{
					cout<<mat.ptr3[i][j]<<" ";
				}
				cout<<endl;
			}
			break;
		}
		else if(option==2)
		{
			cout<<"Enter a file name :: ";
			cin.ignore(1);
			cin.getline(arr,100);
			fout.open(arr);
			for(int i=0;i<mat.rows1;i++)
			{
				for(int j=0;j<mat.cols1;j++)
				{
					fout<<mat.ptr3[i][j]<<" ";
				}
				fout<<endl;
			}
			fout.close();
			break;
		}
		else
		{
			cout<<"Wrong option :  Enter again";
			cin>>option;
		}
	}
}
void scalar_sub(my_data &mat,ofstream &fout)
{
	int num=0;
	cout<<"Enter a number to sub in matrix : ";
	cin>>num;
	for(int i=0;i<mat.rows1;i++)
	{
		for(int j=0;j<mat.cols1;j++)
		{
			mat.ptr1[i][j]=mat.ptr1[i][j]-num;
		}
	}
	display_s_add(mat,fout);
	delete1(mat);
}
void display_s_sub(my_data &mat,ofstream &fout)
{
	cout<<"\nSclar matrix sutraction is : \n";
	user_wish();
	int option=0;
	cin>>option;
	char arr[100];
	while(1)
	{
		if(option==1)
		{
			for(int i=0;i<mat.rows1;i++)
			{
				for(int j=0;j<mat.cols1;j++)
				{
					cout<<mat.ptr1[i][j]<<"  ";
				}
				cout<<endl;
			}
			break;
		}
		else if(option==2)
		{
			cout<<"Enter a file name :: ";
			cin.ignore(1);
			cin.getline(arr,100);
			fout.open(arr);
			for(int i=0;i<mat.rows1;i++)
			{
				for(int j=0;j<mat.cols1;j++)
				{
					fout<<mat.ptr1[i][j]<<"  ";
				}
				fout<<endl;
			}
			fout.close();
			break;
		}
	}
}
void sub_two_matrics(my_data &mat,ofstream &fout)
{
	mat.ptr3=new int*[mat.rows1];
	for(int i=0;i<mat.rows1;i++)
	{
		mat.ptr3[i]=new int[mat.cols1];
		for(int j=0;j<mat.cols1;j++)
		{
			mat.ptr3[i][j]=mat.ptr1[i][j]-mat.ptr2[i][j];
		}
	}
	display_add_mat(mat,fout);
	delete2(mat);
	//delete 3 array
	for(int i=0;i<mat.rows1;i++)
	{
		delete[] mat.ptr3[i];
	}
	delete []mat.ptr3;
	mat.ptr3=NULL;
}
void display_sub_mat(my_data &mat,ofstream fout)
{
	user_wish;
	int option=0;
	cin>>option;
	char arr[100];
	cout<<"Subtraction of two matrics : \n";
	while(1)
	{
		if(option==1)
		{
			for(int i=0;i<mat.rows1;i++)
			{
				for(int j=0;j<mat.cols1;j++)
				{
					cout<<mat.ptr3[i][j]<<" ";
				}
				cout<<endl;
			}
			break;
		}
		else if(option==2)
		{
			cout<<"Enter a file name :: ";
			cin.ignore(1);
			cin.getline(arr,100);
			fout.open(arr);
			for(int i=0;i<mat.rows1;i++)
			{
				for(int j=0;j<mat.cols1;j++)
				{
					fout<<mat.ptr3[i][j]<<" ";
				}
				fout<<endl;
			}
			fout.close();
			break;
		}
		else
		{
			cout<<"Wrong option :  Enter again";
			cin>>option;
		}
	}
}
void scalar_mul(my_data &mat,ofstream &fout)
{
	int num=0;
	cout<<"Enter a number to mul in matrix : ";
	cin>>num;
	for(int i=0;i<mat.rows1;i++)
	{
		for(int j=0;j<mat.cols1;j++)
		{
			mat.ptr1[i][j]=num*mat.ptr1[i][j];
		}
	}
	display_s_add(mat,fout);
	delete1(mat);
}
void display_s_mul(my_data &mat,ofstream &fout)
{
	cout<<"\nSclar matrix multplication is : \n";
	user_wish();
	int option=0;
	cin>>option;
	char arr[100];
	while(1)
	{
		if(option==1)
		{
			for(int i=0;i<mat.rows1;i++)
			{
				for(int j=0;j<mat.cols1;j++)
				{
					cout<<mat.ptr1[i][j]<<"  ";
				}
				cout<<endl;
			}
			break;
		}
		else if(option==2)
		{
			cout<<"Enter a file name :: ";
			cin.ignore(1);
			cin.getline(arr,100);
			fout.open(arr);
			for(int i=0;i<mat.rows1;i++)
			{
				for(int j=0;j<mat.cols1;j++)
				{
					fout<<mat.ptr1[i][j]<<"  ";
				}
				fout<<endl;
			}
			fout.close();
			break;
		}
	}
}
void multiplication(my_data &mat,ofstream &fout)
{
	int sum=0;
	mat.ptr3=new int*[mat.rows1];
	for(int i=0;i<mat.rows1;i++)
    {
        mat.ptr3[i]=new int[mat.cols2];
        for(int j=0;j<mat.cols2;j++)
		{
        	sum=0;
            for(int k=0;k<mat.cols1;k++)
            {
            	sum=sum+mat.ptr1[i][k]*mat.ptr2[k][j];
            }
            mat.ptr3[i][j]=sum;
        }
    }
    display_mul(mat,fout);
    delete2(mat);
   	for(int i=0;i<mat.rows1;i++)
	{
		delete[] mat.ptr3[i];
	}
	delete []mat.ptr3;
	mat.ptr3=NULL;
}
void display_mul(my_data &mat,ofstream &fout)
{
	user_wish();
	int option=0;
	cin>>option;
	char arr[100];
	while(1)
	{
		if(option==1)
		{
			for(int i=0;i<mat.rows1;i++)
			{
				for(int j=0;j<mat.cols2;j++)
				{
					cout<<mat.ptr3[i][j]<<"  ";
				}
				cout<<endl;
			}
			break;
		}
		else if(option==2)
		{
			cout<<"Enter a file name :: ";
			cin.ignore(1);
			cin.getline(arr,100);
			fout.open(arr);
			for(int i=0;i<mat.rows1;i++)
			{
				for(int j=0;j<mat.cols2;j++)
				{
					fout<<mat.ptr3[i][j]<<"  ";
				}
				fout<<endl;
			}
			fout.close();
			break;
		}
		else
		{
			cout<<"Wrong option :  Enter again";
			cin>>option;
		}
	}
}

void scalar_div(my_data &mat,ofstream &fout)
{
	int num=0;
	cout<<"Enter a number to divide in matrix : ";
	cin>>num;
	for(int i=0;i<mat.rows1;i++)
	{
		for(int j=0;j<mat.cols1;j++)
		{
			mat.ptr1[i][j]=mat.ptr1[i][j]/num;
		}
	}
	display_s_add(mat,fout);
	delete1(mat);
}
void display_s_div(my_data &mat,ofstream &fout)
{
	cout<<"\nSclar matrix division is : \n";
	user_wish();
	int option=0;
	cin>>option;
	char arr[100];
	while(1)
	{
		if(option==1)
		{
			for(int i=0;i<mat.rows1;i++)
			{
				for(int j=0;j<mat.cols1;j++)
				{
					cout<<mat.ptr1[i][j]<<"  ";
				}
				cout<<endl;
			}
			break;
		}
		else if(option==2)
		{
			cout<<"Enter a file name :: ";
			cin.ignore(1);
			cin.getline(arr,100);
			fout.open(arr);
			for(int i=0;i<mat.rows1;i++)
			{
				for(int j=0;j<mat.cols1;j++)
				{
					fout<<mat.ptr1[i][j]<<"  ";
				}
				fout<<endl;
			}
			fout.close();
			break;
		}
	}
}
void transpose_matrix(my_data &mat,ofstream &fout)
{
	mat.ptr3=new int*[mat.cols1];
	for(int i=0;i<mat.cols1;i++)
	{
		mat.ptr3[i]=new int[mat.rows1];
		for(int j=0;j<mat.rows1;j++)
		{
			mat.ptr3[i][j]=mat.ptr1[j][i];
		}
	}
	display_transpose(mat,fout);
	delete1(mat);
	for(int i=0;i<mat.cols1;i++)
	{
		delete[] mat.ptr3[i];
	}
	delete []mat.ptr3;
	mat.ptr3=NULL;
}
void display_transpose(my_data &mat,ofstream &fout)
{
	user_wish();
	int option=0;
	cin>>option;
	char arr[100];
	cout<<"YOu entered a matrix : \n";
	for(int i=0;i<mat.rows1;i++)
	{
		for(int j=0;j<mat.cols1;j++)
		{
			cout<<mat.ptr1[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<"\n\n AFter transposing :  \n";
	while(1)
	{
		if(option==1)
		{
			for(int i=0;i<mat.cols1;i++)
			{
				for(int j=0;j<mat.rows1;j++)
				{
					cout<<mat.ptr3[i][j]<<"  ";
				}
				cout<<endl;
			}
			break;
		}
		else if(option==2)
		{
			cout<<"Enter a file name :: ";
			cin.ignore(1);
			cin.getline(arr,100);
			fout.open(arr);
			for(int i=0;i<mat.cols1;i++)
			{
				for(int j=0;j<mat.rows1;j++)
				{
					fout<<mat.ptr3[i][j]<<"  ";
				}
				fout<<endl;
			}
			fout.close();
			break;
		}
		else
		{
			cout<<"Wrong option :  Enter again";
			cin>>option;
		}
	}
}
void determinant(my_data &mat,ofstream &fout)
{
	while(1)
	{
		if(mat.rows1==mat.cols1)
		{
			det(mat,fout);
			break;
		}
		else
		{
			cout<<"Determaiint is not possible : ";
			break;
		}
	}
}
int det(my_data &mat,ofstream &fout)
{
	int deter=1,d2=1,d1=1;
	if(mat.rows1==2)
	{
		for(int i=0;i<mat.rows1;i++)
		{
			for(int j=0;j<mat.cols1;j++)
			{
				if(i==j)
				{
					d1=d1*mat.ptr1[i][j];
				}
				else if(i+j==mat.rows1-1)
				{
					d2=d2*mat.ptr1[i][j];
				}
			}
		}
		deter=d1-d2;
		display_2_det(deter,fout);
		delete1(mat);
		return deter;
	}
	else if(mat.rows1==3)
	{
		int a1=mat.ptr1[0][0] * ((mat.ptr1[1][1] * mat.ptr1[2][2]) - (mat.ptr1[1][2] * mat.ptr1[2][1]) );
		int a2=mat.ptr1[0][1] * ((mat.ptr1[1][0] * mat.ptr1[2][2]) - (mat.ptr1[1][2]* mat.ptr1[2][0]) );
		int a3=mat.ptr1[0][2] * ((mat.ptr1[1][0] * mat.ptr1[2][1]) - (mat.ptr1[1][1]* mat.ptr1[2][0]) );
		int a=a1-a2+a3;
		cout<<"Determaint of 3 x 3 is  : "<<a;
		return a;
	}
	
}
void display_2_det(int det,ofstream &fout)	
{
	user_wish();
	int option=0;
	cin>>option;
	char arr[100];
	while(1)
	{
		if(option==1)
		{
			cout<<"Determaint of matrix is : "<<det;
			break;
		}
		else if(option==2)
		{
			cout<<"Enter a file namme : ";
			cin.ignore(1);
			cin.getline(arr,100);
			fout.open(arr);
			fout<<"Determaint of matrix is : "<<det;
			break;
			fout.close();
		}
		else
		{
			cout<<"Wrong option :  \nEnter again  : ";
		}
	}
}
void inverse(my_data &mat,ofstream &fout)
{
	int det2=det(mat,fout);
	if(mat.rows1==2&&det2!=0)
	{
		adjoint2(mat);
		for(int i=0;i<mat.rows1;i++)
		{
			for(int j=0;j<mat.cols1;j++)
			{
				mat.ptr1[i][j]=mat.ptr1[i][j]/det2;
			}
		}
	}
	display_inverse(mat,fout);
	delete1(mat);
}
void display_inverse(my_data &mat,ofstream &fout)
{
	user_wish();
	int option=0;
	cin>>option;
	char arr[100];
	cout<<"\nInverse of 2 x2 matrix is : \n";
	while(1)
	{
		if(option==1)
		{
			for(int i=0;i<mat.cols1;i++)
			{
				for(int j=0;j<mat.rows1;j++)
				{
					cout<<mat.ptr1[i][j]<<"  ";
				}
				cout<<endl;
			}
			break;
		}
		else if(option==2)
		{
			cout<<"Enter a file name :: ";
			cin.ignore(1);
			cin.getline(arr,100);
			fout.open(arr);
			for(int i=0;i<mat.cols1;i++)
			{
				for(int j=0;j<mat.rows1;j++)
				{
					fout<<mat.ptr1[i][j]<<"  ";
				}
				fout<<endl;
			}
			fout.close();
			break;
		}
		else
		{
			cout<<"Wrong option :  Enter again";
			cin>>option;
		}
	}
}
void adjoint2(my_data &mat)
{
	for(int i=0;i<mat.rows1;i++)
	{
		for(int j=0;j<mat.cols1;j++)
		{
			if(i==j)
			{
				swap(mat.ptr1[i][j],mat.ptr1[i+1][j+1]);
			}
			else if(i+j==mat.rows1-1)
			{
				mat.ptr1[i][j]=-mat.ptr1[i][j];
				mat.ptr1[i+1][j]=-mat.ptr1[i+1][j];	
			}
		}
	}
}
//                 input finctions
void delete2(my_data &mat)
{
	for(int i=0;i<mat.rows1;i++)
	{
		delete[] mat.ptr1[i];
	}
	delete []mat.ptr1;
	mat.ptr1=NULL;
	for(int i=0;i<mat.rows2;i++)
	{
		delete[] mat.ptr2[i];
	}
	delete []mat.ptr2;
	mat.ptr2=NULL;
}
void input(my_data &mat)
{
	cout<<"\nEnter a rows : ";
	cin>>mat.rows1;
	cout<<"\nEnter a cols : ";
	cin>>mat.cols1;
	while(1)
	{
		if(mat.rows1>=1)
		{
			break;
		}
		else
		{
			cout<<"Invalid entry \n";
			cout<<"\nEnter a again rows : donot enter rows  and cols less than 1  : ";
			cin>>mat.rows1;
		}
	}
	while(1)
	{
		if(mat.cols1>=1)
		{
			break;
		}
		else
		{
			cout<<"Invalid entry \n";
			cout<<"\nEnter a again cols : donot enter rows  and cols less than 1  : ";
			cin>>mat.rows1;
		}
		
	}
	mat.ptr1=new int*[mat.rows1];
	cout<<"Enter a values : \n\n";
	for(int i=0;i<mat.rows1;i++)
	{
		mat.ptr1[i]=new int[mat.cols1];
		for(int j=0;j<mat.cols1;j++)
		{
			cin>>mat.ptr1[i][j];
		}
	}
}
void delete1(my_data &mat)
{
	for(int i=0;i<mat.rows1;i++)
	{
		delete[] mat.ptr1[i];
	}
	delete []mat.ptr1;
	mat.ptr1=NULL;
}
void check(my_data &mat)
{
	cout<<"Enter a row for matrix 1 : ";
	cin>>mat.rows1;
	cout<<"Enter a cols for matrix 1 : ";
	cin>>mat.cols1;
	cout<<"\nEnter a row for matrix 2 : ";
	cin>>mat.rows2;
	while(1)
	{
		if(mat.rows1==mat.rows2)
		{
			cout<<"Enter a cols for matrix 2 : ";
			cin>>mat.cols2;
			while(1)
			{
				if(mat.cols1==mat.cols2)
				{
					break;
				}
				else
				{
						cout<<"Enter a equal cols : \n\n";
						cin>>mat.cols2;
				}
			}
			break;
		}
		else
		{
			cout<<"Enter a equal rows : \n\n";
			cin>>mat.rows2;
		}
	}
}
void input2(my_data &mat)
{
	cout<<"Enter a row for matrix 1 : ";
	cin>>mat.rows1;
	cout<<"Enter a cols for matrix 1 : ";	
	cin>>mat.cols1;		
	cout<<"\nEnter a row for matrix 2 : ";
	cin>>mat.rows2;
	cout<<"\nEnter a cols for matrix 2 : ";
	cin>>mat.cols2;
	while(1)
	{
		if(mat.rows2==mat.cols1)
		{
			break;
		}
		else
		{
			cout<<"Multiplication is not possible : \n";
			cout<<"Enter again rows2 or cols1 for multiply : "<<endl;
			cout<<"\nEnter a again row for matrix 2 : ";
			cin>>mat.rows2;
			cout<<"Enter a cols for matrix 1 : ";	
			cin>>mat.cols1;	
		}
	}
	mat.ptr1=new int*[mat.rows1];
	mat.ptr2=new int*[mat.rows2];
	cout<<"\nEnter a values of matrix 1 :  \n";
	for(int i=0;i<mat.rows1;i++)
	{
		mat.ptr1[i]=new int[mat.cols1];
		for(int j=0;j<mat.cols1;j++)
		{
			cin>>mat.ptr1[i][j];
		}
	}
	cout<<"\n\nEnter a value of matrix 2 :  \n";
	for(int i=0;i<mat.rows2;i++)
	{
		mat.ptr2[i]=new int[mat.cols2];
		for(int j=0;j<mat.cols2;j++)
		{
			cin>>mat.ptr2[i][j];
		}
	}
}
void input1(my_data &mat)
{
	check(mat);
	mat.ptr1=new int*[mat.rows1];
	mat.ptr2=new int*[mat.rows2];
	cout<<"\nEnter a values of matrix 1 :  \n";
	for(int i=0;i<mat.rows1;i++)
	{
		mat.ptr1[i]=new int[mat.cols1];
		for(int j=0;j<mat.cols1;j++)
		{
			cin>>mat.ptr1[i][j];
		}
	}
	cout<<"\n\nEnter a value of matrix 2 :  \n";
	for(int i=0;i<mat.rows2;i++)
	{
		mat.ptr2[i]=new int[mat.cols2];
		for(int j=0;j<mat.cols2;j++)
		{
			cin>>mat.ptr2[i][j];
		}
	}
}

//                 MENU FUNCION 
void user_wish(void)
{
	cout<<"\noutput show onn console or file\n";
	cout<<"Enter 1 to console : ";
	cout<<"\nEnter 2 to file : ";
	cout<<"\nEnter your option : \n";
}
void menu(void)
{
	cout<<"\n1 : Sum of Matrix \n2 : Product of Matrix \n";
	cout<<"3 : Row-wise Average\n4 : Column-wise Average \n";
	cout<<"5 : Average or whole Matrix \n6 : Row-wise sorting\n";
	cout<<"7 : column_wise sorting\n8 : Scalar Matrix Addition\n";
	cout<<"9 : Addition of two Matrice \n10 : Scalar Matrix Subtraction\n";
	cout<<"11 : Subtraction of two Matrices\n12 : Scalar Matrix Multiplication \n";
	cout<<"13 : Multiplication of two Matrices\n14: Scalar Matrix Division \n";
	cout<<"15 : Matrix transpose\n16 : Matrix determinant \n";
	cout<<"17 : Matrix Inverse \n";
	cout<<"\nEnter 18 too exist a function\n";
}
void menu1(void)
{
	cout<<"Enter data :   Enter your option : ";
	cout<<"Enter 1 for personally : ";
	cout<<"\nEnter 2 for file :  ";
}

//           COmplete

//			file input
void fill_array(my_data &mat,ifstream &fin)
{
	for(int i=0;i<mat.rows1;i++)
	{
		mat.ptr1[i]=new int[mat.cols1];
		for(int j=0;j<mat.cols1;j++)
		{
			fin>>mat.ptr1[i][j];
		}
	}
}
int find_cols(ifstream &fin)
{
	int num=0;
	int c=0;
	char aplha=' ';
	while(fin>>num&&aplha==' ')
	{
		fin.get(aplha);
		c++;
	}
	return c;
}
int find_rows(ifstream &fin,int c)
{
	int r=0,no=0;
	while(fin>>no)
	{
		r++;
	}
	r=r/c;
	return r;
}
void  read_data(my_data &mat)
{
	ifstream fin;
	char arr[100];
	cout<<"Enter a file name : ";
	cin.ignore(1);
	cin.getline(arr,100);
	
	fin.open(arr);
	int c=find_cols(fin);
	mat.cols1=c;
	fin.close();
	
	fin.open(arr);
	int r=find_rows(fin,c);
	mat.rows1=r;
	fin.close();
	
	fin.open(arr);
	mat.ptr1=new int*[mat.rows1];
	fill_array(mat,fin);
	fin.close();
	 r=0,c=0;
}
void  read_data2(my_data &mat)
{
	ifstream fin2;
	char arr1[100];
	cout<<"\nEnter a second file name : ";
	cin.getline(arr1,100);
	
	fin2.open(arr1);
	int c=find_cols(fin2);
	mat.cols2=c;
	
//	cout<<endl<<c;
	fin2.close();
	
	fin2.open(arr1);
	int r=find_rows(fin2,c);
	mat.rows2=r;
	fin2.close();
	
	fin2.open(arr1);
	mat.ptr2=new int*[mat.rows2];
	fill_array2(mat,fin2);
	fin2.close();
}
void fill_array2(my_data &mat,ifstream &fin)
{
	for(int i=0;i<mat.rows2;i++)
	{
		mat.ptr2[i]=new int[mat.cols2];
		for(int j=0;j<mat.cols2;j++)
		{
			fin>>mat.ptr2[i][j];
		}
	}
}
