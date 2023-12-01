
float power(float base,int pow)
{
	int i = 0;
	float res = 1.0;

	for(i = 0;i < pow;i += 1)
	{
		res *= base;
	}

	return res;
}
