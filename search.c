//Binary search function
//Function accepts an array, a range of elements for the search
//and the number for which we are searching.


void binary_search(int x[100], int lowbound, int upperbound,
		int search_num)
{
int search_pos;
int compare_count = 1; // variable used to count comparisons.

// Calculate initial search position
search_pos = (lowbound + upperbound) / 2;

while((x[search_pos] != search_num) && (lowbound <= upperbound))
{
	compare_count++;
	if(x[search_pos] > search_num) 	   	  // If the value in the search
	{							  	     // position is greater than the number
		upperbound = search_pos - 1;    // for which we are searching, change
									   // upperbound to the search position
	}								  // minus one.
	else 							 // Else, change lowerbound to search
	{								 // position plus one.
		lowbound = search_pos + 1;
	}
	search_pos = (lowbound + upperbound) / 2;

}
if(lowbound <= upperbound)
{
	std::cout << "A binary search found the number in "
		<< compare_count << "comparisons. \n";

}
else
{
	std::cout << "Number not found by binary search after "
		<< compare_count << " comparisons.\n";
}

}
