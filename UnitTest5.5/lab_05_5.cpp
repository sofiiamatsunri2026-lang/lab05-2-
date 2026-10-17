// Лабораторна робота № 5.5
// Варіант 19
// Мацун Софія

#include <iostream>

using namespace std;

// кількість способів сплатити m копійок марками номіналом x, y, z;
// level - рівень рекурсії поточного виклику, depth - глибина рекурсії
int ways(const int m, const int x, const int y, const int z, const int level, int& depth)
{
    if (level > depth)
        depth = level;

    cout << "level = " << level << endl;

    if (m == 0)
        return 1;
    if (m < 0)
        return 0;

    return ways(m - x, x, y, z, level + 1, depth)
        + ways(m - y, x, y, z, level + 1, depth)
        + ways(m - z, x, y, z, level + 1, depth);
}

int main()
{
    int m, x, y, z;
    int depth = 0;

    cout << "m = "; cin >> m;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "z = "; cin >> z;

    if (m < 0 || x <= 0 || y <= 0 || z <= 0)
    {
        cout << "Incorrect input" << endl;
        return 1;
    }

    int result = ways(m, x, y, z, 1, depth);

    cout << "ways = " << result << endl;
    cout << "depth = " << depth << endl;

    return 0;
}