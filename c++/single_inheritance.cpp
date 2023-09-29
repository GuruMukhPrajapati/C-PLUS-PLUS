// single 

#include<iostream>
using namespace std;

class a {
private:
    int a;

protected:
    void setvalue(int k) {
        a = k;
    }
};

class b : public a {
public:
    void setdata(int x) {
        setvalue(x);
    }
};

int main() { // Use int main() instead of void main()
    b obj;
    obj.setdata(4);
    return 0; // Add return 0; at the end of main
}


/*
#include<iostream>
using namespace std;
class a {
    private:
    int a;
    protected:
    void setvalue(int k)
    {
        a=k;
    }

};
class b : public a 
{
    public: 
    void setdata(int x ){
    setvalue(x);
    }
};
void main()
{
    b obj;
    obj.setdata(4);
}

*/
