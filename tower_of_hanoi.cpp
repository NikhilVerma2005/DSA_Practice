#include <iostream>
#include <cmath>  // just for power function only
using namespace std;

void toh(int n,string s,string d,string h)
{
    if(n==1)
    {
        cout<<"Move disk "<<n<<" from "<<s<<" to "<<d<<endl;
        return ;
    }
    toh(n-1,s,h,d);
    cout<<"Move disk "<<n<<" from "<<s<<" to "<<d<<endl;
    toh(n-1,h,d,s);
} 
int main()
{
    int n = 3;  // number of disks
    string s = "Srce";  // denotes source (initially)
    string h = "Help"; // denotes helper (initially)
    string d="Dest";  // denotes destination (initially)
    toh(n,s,d,h);

    // Total steps would be = (2 raised to the power n)-1
    int total_steps = pow(2,n)-1;
    cout<<endl<<"Total steps = "<<total_steps<<endl;
}