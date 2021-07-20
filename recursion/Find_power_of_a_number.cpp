/*

	Ninja is sitting in an examination hall. He is encountered with a problem statement, "Find ‘X’ to the power ‘N’ (i.e. ‘X’ ^ ‘N’). Where ‘X’ and ‘N’ are two integers."
	Ninja was not prepared for this question at all, as this question was unexpected in the exam.
	He is asking for your help to solve this problem. Help Ninja to find the answer to the problem.
	Note :
	For this question, you can assume that 0 raised to the power of 0 is 1.

	*/

long long Pow(int X, int N)
{
    if(N==0){
        return 1;
    }
    if(N==1){
        return X;
    }
    long long ans=0;
    ans=Pow(X,N-1)*X;
    return ans;
}