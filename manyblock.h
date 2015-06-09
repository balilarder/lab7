#ifndef MANYBLOCK_H
#define MANYBLOCK_H
#include <iostream>
using namespace std;
char I_arr [2][4][4] = {{{'0','0','1','0'},
        {'0','0','1','0'},
        {'0','0','1','0'},
        {'0','0','1','0'}
    },
    {   {'0','0','0','0'},
        {'0','0','0','0'},
        {'1','1','1','1'},
        {'0','0','0','0'}
    }
};
class I_Block
{
public:
    I_Block(int xx=0,int yy=0,int ri=0):
        x(xx),y(yy),rotate_index(ri) {} ;
    I_Block& rotate()
    {
        rotate_index=(rotate_index>0)?
                     0:rotate_index+1;
        return *this;
    }
    I_Block& left()
    {
        x=(x>0)?(x-1):10;
        return *this;
    }
    I_Block& right()
    {
        x=(x>10)?0:x+1;
        return *this;
    }
    virtual void paint()
    {
        for(int i=0; i<4; ++i)
        {
            for(int j=0; j<x; ++j) cout << ' ';
            for(int j=0; j<4; ++j)
                cout << I_arr[rotate_index][i][j];
            cout << endl;
        }
        cout<<endl;
    }
protected:
    int rotate_index;
    int x, y;
};
char S_arr [2][4][4] = {{{'0','0','0','0'},
        {'0','0','0','0'},
        {'0','0','1','1'},
        {'0','1','1','0'}
    },
    {   {'0','0','0','0'},
        {'0','1','0','0'},
        {'0','1','1','0'},
        {'0','0','1','0'}
    }
};
class S_Block: public I_Block
{
public:
    virtual void paint()
    {
        for(int i=0; i<4; ++i)
        {
            for(int j=0; j<x; ++j) cout << ' ';
            for(int j=0; j<4; ++j)
                cout << S_arr[rotate_index][i][j];
            cout << endl;
        }
        cout << endl;
    }
};
char O_arr [2][4][4] = {{{'0','0','0','0'},
        {'0','0','0','0'},
        {'0','1','1','0'},
        {'0','1','1','0'}
    },
    {   {'0','0','0','0'},
        {'0','0','0','0'},
        {'0','1','1','0'},
        {'0','1','1','0'}
    }
};
class O_Block: public I_Block
{
public:
    virtual void paint()
    {
        for(int i=0; i<4; ++i)
        {
            for(int j=0; j<x; ++j) cout << ' ';
            for(int j=0; j<4; ++j)
                cout << O_arr[rotate_index][i][j];
            cout << endl;
        }
        cout << endl;
    }
};
char T_arr [2][4][4] = {{{'0','0','0','0'},
        {'0','0','0','0'},
        {'0','1','1','1'},
        {'0','0','1','0'}
    },
    {   {'0','0','0','0'},
        {'0','0','1','0'},
        {'0','1','1','0'},
        {'0','0','1','0'}
    }
};
class T_Block: public I_Block
{
public:
    virtual void paint()
    {
        for(int i=0; i<4; ++i)
        {
            for(int j=0; j<x; ++j) cout << ' ';
            for(int j=0; j<4; ++j)
                cout << T_arr[rotate_index][i][j];
            cout << endl;
        }
        cout << endl;
    }
};
#endif // MANYBLOCK
