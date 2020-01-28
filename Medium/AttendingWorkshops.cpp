struct WorkShop {
    int start, duration, end;
};

struct Available_Workshops {
    int counter;
    vector<WorkShop> WorkShops;
};

Available_Workshops* initialize(int startTable[], int durationTable[], int n) {
    Available_Workshops* pointer = new Available_Workshops;
    pointer->counter = n;

    for(int i = 0; i < n; ++i) {
        WorkShop temp;
        temp.start = startTable[i];
        temp.duration = durationTable[i];
        temp.end = startTable[i] + durationTable[i];
        pointer->WorkShops.push_back(temp);
    }
    return pointer;
}

int CalculateMaxWorkshops(Available_Workshops* pointerWorkshops) {

    std::sort(pointerWorkshops->WorkShops.begin(),pointerWorkshops->WorkShops.end(),
    [](WorkShop temp1, WorkShop temp2) {return temp1.end<temp2.end;});
    
    int currentCounter = 0, currentEndTime = 0;
    for(int i = 0; i < pointerWorkshops->counter; ++i) {
        if ( pointerWorkshops->WorkShops[i].start >= currentEndTime ) {
            ++currentCounter;
            currentEndTime = pointerWorkshops->WorkShops[i].end;
        }
    }
    return currentCounter;
}