#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    for (int i = 0; i <=N; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout << "  ";
        }
		for(int j=N-i;j>=0;j--){
			cout<<j<<" ";
		}
		for(int j=1;j<=N-i;j++){
			cout<<j<<" ";
		}
        cout << endl;
    }
	 for (int i = N-1; i >=0; i--)
    {
        for (int j = 1; j <=i; j++)
        {
            cout << "  ";
        }
		for(int j=N-i;j>=0;j--){
			cout<<j<<" ";
		}
		for(int j=1;j<=N-i;j++){
			cout<<j<<" ";
		}
        cout << endl;
    }

    return 0;
}