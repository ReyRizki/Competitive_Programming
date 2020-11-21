#include <iostream>
#include <algorithm>

#define ITR(i) int i
#define REP(i, a, b) for (ITR(i) = a; i < b; i++)

using namespace std;

struct participant
{
    string name;
    int score[3];
};

int comparator;

bool scoreCompare(participant s1, participant s2)
{
    return (s1.score[comparator] > s2.score[comparator]);
}

int main()
{
    // DATA STRUCTURE
    bool found;
    bool selected[8];
    int testCase;
    int N, M;
    int point;
    string find;
    struct participant student[80];

    // ALGORITHM
    cin >> testCase;
    REP(i, 0, testCase)
    {
        cin >> N >> M >> find;
        REP(j, 0, N)
        {
            cin >> student[j].name;
            REP(k, 0, 3)
                cin >> student[j].score[k];
        }

        comparator = 2;
        sort(student, student + N, scoreCompare);

        ITR(start);
        ITR(finish);
        start = 0;
        finish = 0;
        comparator = 2;
        point = student[start].score[comparator];
        while (start < N)
        {
            do
            {
                if (student[finish].score[comparator] == point)
                    finish++;
            } while ((student[finish].score[comparator] == point) && (finish < N));

            comparator = 1;
            sort(student + start, student + finish, scoreCompare);

            comparator = 2;
            start = finish;
            point = student[start].score[comparator];
        }

        start = 0;
        finish = 0;
        comparator = 1;
        point = student[start].score[comparator];
        while (start < N)
        {
            do
            {
                if (student[finish].score[comparator] == point)
                    finish++;
            } while ((student[finish].score[comparator] == point) && (finish < N));

            comparator = 0;
            sort(student + start, student + finish, scoreCompare);

            comparator = 1;
            start = finish;
            point = student[start].score[comparator];
        }

        ITR(l) = 0;
        found = false;
        while (!found && l < M)
        {
            if (student[l].name.compare(find) == 0)
                found = true;
            else
                l++;
        }

        selected[i] = found;
    }

    REP(i, 0, testCase)
        selected[i] ? cout<<"YA"<<endl : cout<<"TIDAK"<<endl;

    return 0;
}