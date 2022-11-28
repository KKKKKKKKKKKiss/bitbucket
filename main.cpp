double my_pow(double num , unsigned int deg)
{ 
    double res =1;
    for (int i=0; i<deg; i++)
    {
     res*=num;   
    }
    return res;
};