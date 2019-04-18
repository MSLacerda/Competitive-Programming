#include <bits/stdc++.h>

using namespace std;

/*******  All Required define Pre-Processors and typedef Constants *******/
#define SCD(t) scanf("%d", &t)
#define SCLD(t) scanf("%ld", &t)
#define SCLLD(t) scanf("%lld", &t)
#define SCC(t) scanf("%c", &t)
#define SCS(t) scanf("%s", t)
#define SCF(t) scanf("%f", &t)
#define SCLF(t) scanf("%lf", &t)
#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (int i = j; i < k; i += in)
#define RFOR(i, j, k, in) for (int i = j; i >= k; i -= in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert(B <= A && A <= C)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define read(type) readInt<type>()
const double pi = acos(-1.0);
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int, int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;

/**************************************/

/******** User-defined Function *******/

//  1 -3

int main()
{
    vector<int> loop;
    vector<int>::iterator it;
    int n, temp;


    while (true)
    {
        int counter = 0;
        SCD(n);
        if (n == 0)
            break;

        int i;
        FOR(i, 0, n, 1)
        {
            SCD(temp);
            loop.push_back(temp);
        }
        
        if (loop.size() == 2)
        {
            if (loop.at(0) != loop.at(1))
                counter = 2;
        }
        else
        {
            int last = *it;
            it += 1;
            FOREACH(it, loop)
            {
                vector<int>::iterator actual = it;
                vector<int>::iterator next = it;

                cout << "Actual: " << *actual << " Last: " << last << " Next: "<< *next;
            }
        }

        printf("%d\n", counter);
    }

    return 0;
}
