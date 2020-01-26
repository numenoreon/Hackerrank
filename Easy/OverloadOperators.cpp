ostream& operator<<(ostream &out, Complex &t)
{
out << t.a << "+i" << t.b << endl;
return out;
}

Complex& operator+(Complex &t, Complex &f){

    t.a+=f.a;
    t.b+=f.b;
    return t;
}