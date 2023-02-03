using namespace std;

int main() {
    int majorityArray[] = {0, 2 ,5 , 4, 6 ,5 ,1 ,2 ,7 ,5 ,5 ,5 ,5 ,5 ,5 , 5};
    int majorityArrayLength = 16;
    //parallel merge sort array for log squared n complexity  


    int count = 1;
    int selectedIndex = 0;
    while(selectedIndex < majorityArrayLength){
        while(majorityArray[selectedIndex] == majorityArray[selectedIndex+count]){
            ++count;
            if(selectedIndex+count >= majorityArrayLength) break;
        }
        //return number if majority
        if(count > majorityArrayLength/2) return majorityArray[selectedIndex];
        selectedIndex+=count;
        count=1;
    }
    //no majority
    return -1;
}