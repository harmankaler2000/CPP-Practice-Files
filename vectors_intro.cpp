#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	// to create vectpr, we have to declare the TEMPLATE vector
	//create type of vector
	//name of vector
	// this a way to create vector
	//vector<int> num (1,2,3,4,5,6);
	//we can display it using this vector, either using index
	//cout<<setw(3)<<num[0]; 
	// this is not a standard way of creating vectpr in c++
	//vectpr allw to add data using push at it's rear or back
	vector<int> num_vec;
	//we can insert data using push_back(element) 
	num_vec.push_back(1);
	num_vec.push_back(2);
	num_vec.push_back(3);
	num_vec.push_back(4);
	num_vec.push_back(5);
	num_vec.push_back(6);
	num_vec.push_back(7);
	num_vec.push_back(8);
	num_vec.push_back(9);
	num_vec.push_back(10);
	//to access element we use index
	//cout<<setw(3)<<"The second element of vector is : "<<num_vec;
	// in order to determine the size of the vector, STL provides
	// size function, this is an integer
	cout<<"The second element of the vector is: "<<num_vec[1]<<endl;
	int n=num_vec.size();
	//advantage of using vector is there is no prefixed size
	//vectors are accessed randomly in O(1) time but we cannot
	//traverse backward because in vectors, no start and end is known
	cout<<"The size of our vector is: "<<n<<endl;
	//assign() function will assign value to a vector
	//it can be used to create a repetition of data
	vector<int> zero_vec;
	zero_vec.assign(10,0);
	for(int i=0;i<zero_vec.size();i++)
		cout<<zero_vec[i]<<" ";
	cout<<endl;
	//another way is begin and end function
	//to traverse a function
	//for this we have to create an iterator
	//they are pointers to access the lements from the containers
	// which need to be derefrenced
	vector<int>::iterator it;
	for(it=num_vec.begin();it!=num_vec.end();it++)
		cout<<*it<<" ";
	//iterator holds the state of the information
	//vectors can only have forward iterators
	//can be from 0 to positive
	//doubly linked list can have bi directional iterators
	
	cout<<endl;
	return 0;
	vector<string> names;
	
}