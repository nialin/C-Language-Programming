int set_grade( struct student *p, int n )
{
	int i, rslt = 0;

	for(i = 0; i < n; ++i) {
		if(p[i].score >= 85)
			p[i].grade = 'A';

		else if(p[i].score >= 70)
			p[i].grade = 'B';

		else if(p[i].score >= 60)
			p[i].grade = 'C';

		else {
			p[i].grade = 'D';
			++rslt;
		}
	}

	return rslt;
}
