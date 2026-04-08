class Robot {
public:
    int width;
    int height;
    int x, y;
    int dir;
    int perimeter;
    bool moved;
    vector<string> direction = {"East", "North", "West", "South"};
    Robot(int width, int height) {
        this->width = width;
        this->height = height;
        x = 0;
        y = 0;
        dir = 0;
        perimeter = 2 * (height + width) - 4;
        moved = false;
    }

    void step(int num) {
        num = num % perimeter;
        if (num == 0 && moved) {
            num = perimeter;
        }
        moved = true;
        while (num > 0) {
            if (dir == 0) {
                int move = min(width - 1 - x, num);
                x += move;
                num -= move;
            } else if (dir == 1) {
                int move = min(height - 1 - y, num);
                y += move;
                num -= move;
            } else if (dir == 2) {
                int move = min(x, num);
                x -= move;
                num -= move;
            } else if (dir == 3) {
                int move = min(y, num);
                y -= move;
                num -= move;
            }
            if (num > 0) {
                dir = (dir + 1) % 4;
            }
        }
    }

    vector<int> getPos() {
        return {x, y};
    }

    string getDir() {
        return direction[dir];
    }
};

/**
 * Your Robot object will be instantiated and called as such:
 * Robot* obj = new Robot(width, height);
 * obj->step(num);
 * vector<int> param_2 = obj->getPos();
 * string param_3 = obj->getDir();
 */