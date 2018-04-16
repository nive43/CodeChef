#include <cstdio>

int square(int n)
{
    return n*n;
}

int is_inside(int big_x, int big_y, int big_r, int x, int y, int r)
{
    int distance_squared = square(big_x - x) + square(big_y - y);

    return ( distance_squared <= square(big_r - r) );
}

void solve()
{
    int x1, y1, radius1, x2, y2, radius2;
    scanf("%d %d %d %d %d %d", &x1, &y1, &radius1, &x2, &y2, &radius2);

    if(x1 == x2 && y1 == y2 && radius1 == radius2)
        printf("C2~C1\n");
    else if(is_inside(x1, y1, radius1, x2, y2, radius2) && radius1 > radius2)
        printf("C1CC2\n");
    else if(is_inside(x2, y2, radius2, x1, y1, radius1) && radius2 > radius1)
        printf("C2CC1\n");
    else
        printf("NOT SATISFIED\n");
}

int main()
{
    int no_of_test_cases;
    scanf("%d", &no_of_test_cases);

    while(no_of_test_cases--)
        solve();

    return 0;
}
