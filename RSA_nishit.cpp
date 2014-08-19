#include<iostream>
#include<vector>
#include<math.h>
#include<sstream>
#include<cstdlib>
//-----------------------------------------------------------------------------------------------------------------------
using namespace std;
//-----------------------------------------------------------------------------------------------------------------------
long long int inverse(long long int,long long int);         //AX = 1 MOD (B), CALCULATES X
void calc();                                                //CALCULATING VALUES OF D, N, M
int checkForPrime(long long int);                           //CHECK IF NUMBER IS PRIME
void encrypt();                                             //ENCRYPTION OF MESSAGE
string encode(string);                                      //ENCODING TWO CHARACTERS AT A TIME
void decrypt();                                             //DECRYPTION OF MESSAGE
string decode(string);                                      //DECODING ONE SUBSTRING AT A TIME

//-----------------------------------------------------------------------------------------------------------------------
string message;                                             //STORES INPUT MESSAGE
vector <string> code;                                       //STORES ENCRYPTED MESSAGE, IN PIECES
vector <string> actual;                                     //STORES DECRYPTED CODE, IN PIECES
long long int e,d,p1,p2,n,m;                                //VALUES OF E, D, P1, P2, N, M
int npower;                                                 //BASICALLY VALUE THAT DETERMINES BLOCK SIZE ... 10^(NPOWER*3) ~ N
//-----------------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------
int main()
{
    cout<<"Welcome to the RSA Encryption/Decryption Algorithm!\n";
//-----------------------------------------------------------------------------------------------------------------------
    cout<<"Please enter a message to be encrypted: ";
    getline(cin,message);                                   //INPUT MESSAGE TO BE ENCRYPTED
//-----------------------------------------------------------------------------------------------------------------------
    calc();                                                //CALCULATE VALUES OF N, M, D
//-----------------------------------------------------------------------------------------------------------------------
    encrypt();                                              //ENCRYPT THE MESSAGE
//-----------------------------------------------------------------------------------------------------------------------
    cout<<"\nThe Encoded message is: \n\n\t\t\t";
    int p=0;
    while(p<code.size())
    {                                                       //PRINT THE ENCRYPTED MESSAGE
        cout<<code[p];
        p++;
    }
//-----------------------------------------------------------------------------------------------------------------------
    cout<<"\n\n\t\tNOW STARTING DECRYPTION!\n";
    decrypt();                                              //DECRYPT THE MESSAGE
//-----------------------------------------------------------------------------------------------------------------------
    cout<<"The Decoded message is: \n\n\t\t\t";
    p=0;
    while(p<actual.size())
    {
        cout<<actual[p];                                    //PRINT THE DECRYPTED MESSAGE
        p++;
    }
    cout<<"\n\n";
//-----------------------------------------------------------------------------------------------------------------------
}

void calc()
{
    int i,t;
//-----------------------------------------------------------------------------------------------------------------------
    do
    {
        cout<<"Enter Prime Number P: ";
        cin>>p1;
        t=0;
        t=checkForPrime(p1);                                    //INPUT AND CHECK FIRST PRIME NUMBER
        if(t==0)
        {
            cout<<"This is not a prime number\n";
            continue;
        }
//-----------------------------------------------------------------------------------------------------------------------
        cout<<"Enter Prime Number Q: ";
        cin>>p2;
        t=0;
        t=checkForPrime(p2);                                    //INPUT AND CHECK 2ND PRIME NUMBER
        if(t==0)
        {
            cout<<"This is not a prime number\n";
            continue;
        }
//-----------------------------------------------------------------------------------------------------------------------
        n=p1*p2;
        if(n<128)
        {
            cout<<"These are too small, please enter bigger values\n";  //N>128 NEEDED
            continue;
        }
//-----------------------------------------------------------------------------------------------------------------------
        i=0;
        long long int temp=0;
        do
        {
            temp=temp*1000+127;                                     //CALCULATING NPOWER
            i++;
        }while(temp<=n);
        npower=i-1;
//-----------------------------------------------------------------------------------------------------------------------
        m=(p1-1)*(p2-1);                                            //CALCULATING M
//-----------------------------------------------------------------------------------------------------------------------
        do
        {
            cout<<"Enter a public key: ";
            cin>>e;

            if(e>m||m%e==0||checkForPrime(e)==0)                    //E SHOULD BE PRIME, AND COPRIME TO M
            {
                cout<<"That is not a valid key, please enter a Valid Key.\n";
                continue;
            }
            break;
        }while(1);
//-----------------------------------------------------------------------------------------------------------------------
        d=inverse(e,m);                                             //CALCULATING D
        break;
//-----------------------------------------------------------------------------------------------------------------------
    }while(1);

}

int checkForPrime(long long int p)
{
//-----------------------------------------------------------------------------------------------------------------------
    long int i;
    if(p%2==0||p%3==0)
    {
        return(0);                                                  //IF NUMBER IS DIVISIBLE BY 2 OR 3
    }
//-----------------------------------------------------------------------------------------------------------------------
    long int limit=sqrt(p);
    for(i=6;i<=limit;i+=6)
    {
        if(p%(i-1)==0||p%(i+1)==0)                                  //ELSE, OF THE FORM 6K+1 OR 6K-1 (SINCE ALL PRIMES ARE OF THIS FORM)
        {
            return(0);
        }
    }
//-----------------------------------------------------------------------------------------------------------------------
    return(1);
}

long long int inverse(long long int a,long long int b)
{
    long long int t=0;
    long long int newt=1;
    long long int r=b;
    long long int newr=a;
    long long int temp,quotient;
//-----------------------------------------------------------------------------------------------------------------------
    while(newr!=0)
    {
        quotient=r/newr;

        temp=newt;
        newt=t-quotient*newt;                                   //EXTENDED EULER'S ALGORITHM
        t=temp;

        temp=newr;
        newr=r-quotient*newr;
        r=temp;
    }
//-----------------------------------------------------------------------------------------------------------------------
    if(t<0)
    {
        return(t+b);                                        //IF T IS NEGATIVE
    }

    return(t);
}

void encrypt()
{
    string s;
    int i=0,j;
    int ctr;
//-----------------------------------------------------------------------------------------------------------------------
    while(i<message.length())
    {
        s="";
        ctr=0;
        while(ctr<npower)
        {
//-----------------------------------------------------------------------------------------------------------------------
            if(i==message.length())
            {
                for(j=0;j<npower-ctr;j++)
                {
                    s+=' ';                                 //ADDING REQUIRED SPACES AT END
                }
                break;
            }
//-----------------------------------------------------------------------------------------------------------------------
            s+=message[i];
            ctr++;                                          //ADDING LETTER TO CURRENT SUBSTRING
            i++;
        }
//-----------------------------------------------------------------------------------------------------------------------
        code.push_back(encode(s));                          //ENCODING SUBSTRING
    }
}

void decrypt()
{
    int i=0;
    while(i<code.size())
    {
        actual.push_back(decode(code[i]));
        i++;
    }
}

string encode(string input)
{
    long long int x=0;
    int i=0;
    while(i<npower)
    {
        x=(1000*x)+input[i];
        i++;
    }
//-----------------------------------------------------------------------------------------------------------------------
    long long int ans=1;
    long int q=e;
    while(q>0)
    {
        if(q%2==1)
        {
            ans=(ans*x)%n;                                  //MODULAR BINARY EXPONENTIATION
        }
        x=(x*x)%n;
        q/=2;
    }
    ans=ans%n;
//-----------------------------------------------------------------------------------------------------------------------
    int k=0;
    while(pow(10,k)<n)
    {
        k++;                                                //CALCULATING NO. OF DIGITS IN N
    }
//-----------------------------------------------------------------------------------------------------------------------
    int p=0;
    while(pow(10,p)<ans)
    {                                                       //CALCULATING NO. OF DIGITS IN ANS
        p++;
    }
//-----------------------------------------------------------------------------------------------------------------------
    int z=0;
    string s="";
    while(z<k-p)
    {                                                       //ADDING EXTRA ZEROES TO THE LEFT OF ANS, IF REQUIRED
        s+="0";
        z++;
    }
//-----------------------------------------------------------------------------------------------------------------------
    stringstream ss;
    ss<<ans;                                                //CONVERTING ANS TO STRING
    s=s+ss.str();
    return(s);
}

string decode(string input)
{
    istringstream ss(input);
    long long int x;                                        //CONVERTING STRING TO INTEGER
    ss>>x;
//-----------------------------------------------------------------------------------------------------------------------
    long long int ans=1;
    long int q=d;
    while(q>0)
    {
        if(q%2==1)
        {                                                   //MODULAR BINARY EXPONENTIATION
            ans=(ans*x)%n;
        }
        x=(x*x)%n;
        q/=2;
    }
    ans=ans%n;
//-----------------------------------------------------------------------------------------------------------------------
    char temp;
    int z;
    string s="";
    int i;
    for(i=0;i<npower;i++)
    {
        z=ans/(pow(10,(npower-i-1)*3));
        temp=z;
        s+=temp;
        ans=ans%(long long int)(pow(10,(npower-i-1)*3));
    }
    return(s);
}

