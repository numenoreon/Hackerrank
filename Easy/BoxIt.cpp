class Box{
    int l,b,h;

    public:
    
    Box(){
        l=0;
        b=0;
        h=0;
    }
    
    Box(Box &x){
        l=x.l;
        b=x.b;
        h=x.h;
    }

    Box(int x, int y, int z) : l(x), b(y), h(z) {}
    
    int getLength()
    {
        return l;
    }
    
    int getBreadth()
    {
        return b;
    }

    int getHeight(){
        return h;
    }

    long long CalculateVolume()
    {
        return (long long)l*b*h;
    }

    friend ostream& operator<<(ostream &out, Box &b)
    {
        out << b.l  << " " << b.b << " " << b.h;
        return out;
    }

    bool operator<(Box& B) {
    if (l < B.l) return true;
    else if(b < B.b && l == B.l) return true;
    else if(h < B.h && b == B.b && l == B.l) return true;
    else return false;
    }

};