#include <bits/stdc++.h>
using namespace std;

//--------------------------------------INITIALISING FUNCTIONS-----------------------------------
int Prime_checker(long long int);
long long int inverse(long long int,long long int);
void encrypt();                                             //ENCRYPTION OF MESSAGE
void decrypt();                                             //DECRYPTION OF MESSAGE

//-------------------------------------INITIALISING VARIABLES------------------------------
long long int p,q,n,m,pow_n,e,d;
string message;
vector <string> code;                                       //STORES ENCRYPTED MESSAGE
vector <string> actual;                                     //STORES DECRYPTED MESSAGE

//---------------------------------------------MAIN------------------------------------------
int main()
{
    cout<<"A Program for RSA ENCRPTION & DECRYPTION"<<endl<<endl;
   cout<<"Please Enter the Message to be Encrypted: ";
   getline(cin,message);

   do
    {   int t;
        cout<<"Enter Prime Number P (greater than 12): ";
        cin>>p;
        t=0;
        t=Prime_checker(p);                                    //INPUT AND CHECK FIRST PRIME NUMBER
        if(t==0 || p<12)
        {
            cout<<"Either This is not a prime number or is less than 12, so please enter again\n";
            continue;
        }

        cout<<"Enter Prime Number Q (greater than 12): ";
        cin>>q;
        t=0;
        t=Prime_checker(q);                                    //INPUT AND CHECK SECOND PRIME NUMBER
        if(t==0 || q<12)
        {
            cout<<"Either This is not a prime number or is less than 12, so please enter again\n";
            continue;
        }

        n=p*q;                                                  //CALCULATING N
        m=(p-1)*(q-1);                                          //CALCULATING M

         do
        {
            cout<<"Enter a public key (itself prime & coprime to (P-1)*(Q-1)): ";
            cin>>e;
            if(e>m||m%e==0||Prime_checker(e)==0)                                  //E (PUBLIC KEY) SHOULD BE PRIME, AND COPRIME TO M
            {
                cout<<"That is not a valid key, please enter a Valid Key.\n";
                continue;
            }
            break;
        }while(1);

        int i=0;
        long long int temp=0;
        do
        {
            temp=temp*1000+127;                                     //CALCULATING pow_n
            i++;
        }while(temp<=n);
        pow_n=i-1;

        d=inverse(e,m);                                             //CALCULATING D

        break;
    }while(1);


   encrypt();
   cout<<"\n\n\t\t\t\tENCRYPTION\nThe Encrypted message is: \n\n";
    int p=0;
    while(p<code.size())
    {                                                       //PRINT THE ENCRYPTED MESSAGE
        cout<<code[p];
        p++;
    }


    decrypt();
    cout<<"\n\n\n\t\t\t\tDECRYPTION\nThe Decrypted message is: \n\n";
    p=0;
    while(p<actual.size())
    {
        cout<<actual[p];                                    //PRINT THE DECRYPTED MESSAGE
        p++;
    }
    cout<<"\n\n";
}

//----------------------------------------------MAIN ENDS, FUNCTIONS BELOW------------------------------------

//-------------------------------------------------FOR CHECKING PRIME------------------------------------------
int Prime_checker(long long int p)
{
    long int i;
    if(p%2==0||p%3==0)
    {
        return(0);                                                  //IF NUMBER IS DIVISIBLE BY 2 OR 3
    }
    long int limit=sqrt(p);
    for(i=6;i<=limit;i+=6)
    {
        if(p%(i-1)==0||p%(i+1)==0)                                  //ELSE, OF THE FORM 6N+1 OR 6N-1
        {
            return(0);
        }
    }
    return(1);
}

//------------------------------------------------FOR FINDING INVERSE-------------------------------

long long int inverse(long long int a,long long int b)
{
    long long int t=0,t_new=1,r=b,r_new=a,temp,quotient;

    while(r_new!=0)
    {
        quotient=r/r_new;

        temp=t_new;
        t_new=t-quotient*t_new;                                             //EXTENDED EULER ALGORITHM
        t=temp;

        temp=r_new;
        r_new=r-quotient*r_new;
        r=temp;
    }

    if(t<0)
    {
        return(t+b);
    }
    else
    {
        return(t);
    }
}
//------------------------------------------ENCRYPTION FUNCTION-----------------------------------------------------

void encrypt()
{
    string s;
    int i=0,j;
    int counter;
    while(i<message.length())
    {
        s="";
        counter=0;
        while(counter<pow_n)
        {
            s+=message[i];                                  //ADDING LETTER TO CURRENT SUBSTRING
            counter++;
            i++;
        }

    long long int x=0, l=0;
    while(l<pow_n)
    {
        x=(1000*x)+s[l];
        l++;
    }

    long long int ans=1, q=e;
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

    int k=0;
    while(pow(10,k)<n)
    {
        k++;                                                //CALCULATING NO. OF DIGITS IN N
    }

    int p=0;
    while(pow(10,p)<ans)
    {                                                       //CALCULATING NO. OF DIGITS IN ANS
        p++;
    }

    int z=0;
    string s1="";
    while(z<k-p)
    {                                                       //ADDING EXTRA ZEROES TO THE LEFT OF ANS, IF REQUIRED
        s1+="0";
        z++;
    }

    stringstream ss;
    ss<<ans;                                                //CONVERTING ANS TO STRING
    s1=s1+ss.str();
    code.push_back(s1);                                     //ENCODING SUBSTRING
    }
}


//-------------------------------------------------DECRYPTION FUNCTION----------------------------------------------------

void decrypt()
{
    int i=0;
    while(i<code.size())
    {
    istringstream ss(code[i]);
    long long int x;                                        //CONVERTING STRING TO INTEGER
    ss>>x;

    long long int ans=1, q=d;
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

    char temp;
    int z;
    string s="";
    int k;
    for(k=0;k<pow_n;k++)
    {
        z=ans/(pow(10,(pow_n-k-1)*3));
        temp=z;
        s+=temp;
        ans=ans%(long long int)(pow(10,(pow_n-k-1)*3));
    }
        actual.push_back(s);
        i++;
    }
}
