#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = a; i < b; i++)
#define SCD(t) scanf("%d", &t)

int main() {
    int height, width;
    SCD(height);
    SCD(width);

    height += 2;
    width += 2;

    char map[1002 * 1002];
    FOR(i, 0, width) {
        map[0 * width + i] = '/';
        map[(height - 1) * width + i] = '/';
    }

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    FOR(i, 1, height - 1) {
        string s;
        getline(cin, s);

        map[i * width + 0] = '/';
        map[i * width + width - 1] = '/';

        FOR(j, 1, width - 1) {
            map[i * width + j] = s[j - 1];
        }
    }

    int rooms = 0;
    FOR(i, 1, height - 1) {
        FOR(j, 1, width - 1) {
            if (map[i * width + j] == '.') {
                rooms++;

                stack<char*> room;
                room.push(map + i * width + j);

                while (!room.empty()) {
                    char* c = room.top();
                    room.pop();
                    *c = 'x';

                    int pos[4] =
                    {
                        -width, // up
                        -1,     // left
                        1,      // right
                        width,  // down
                    };

                    FOR(k, 0, 4) {
                        if (*(c + pos[k]) == '.') {
                            room.push(c + pos[k]);
                            *(c + pos[k]) = 'x';
                        }
                    }
                }
            }
        }
    }
    
    printf("%d\n", rooms);

    return 0;
}
