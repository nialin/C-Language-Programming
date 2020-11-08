char *getmonth( int n )
{
	char *month[12] ={
		"January", "February", "March", "April", "May", "June",
		 "July", "August", "September", "October", "November", "December"};

	if(n <= 0 || n > 12)
		return NULL;

	return month[n - 1];
}
