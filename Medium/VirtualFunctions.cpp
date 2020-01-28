class Person{

protected:
int data,age,id;
string name;
public:
virtual void getdata(){
}

virtual void putdata(){
}
};

class Student : public Person{

public:
static int cur_id;
Student(){
    id=cur_id;
    cur_id++;
}

void getdata() override{
    int d=0;
    cin >> name;
    cin >> age;
    for (int i=0; i<6; i++)
    {   
        cin >> d;
        data+=d;    
    }
}

void putdata() override{  
    cout << name << " ";
    cout << age << " ";
    cout << data << " ";
    cout << id << endl;
}
};

class Professor : public Person{
public:
static int cur_id;
Professor(){
    id=cur_id;
    cur_id++;
    }

void getdata() override{
    cin >> name;
    cin >> age;
    cin >> data;
}

void putdata() override {
    cout << name << " ";
    cout << age << " ";
    cout << data << " ";
    cout << id << endl;
}
};

int Professor::cur_id=1;
int Student::cur_id=1;
