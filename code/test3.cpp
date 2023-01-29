#include<bits/stdc++.h>
using namespace std;


int main()
{

    cout<<averageOfLargestAndSmallestNbr({4,9,5,6,9,7});

}







/**



//  Solution with C++
int countOfElements(vector<int>arr)
{
    int count,average;
    int average= (accumulate(arr.begin(), arr.end(),0))/arr.size();
    for(int x:arr)if(x==average)count++;

    return count;
}
// Solution with JavaScript
countOfElements = (arr) => {
    let average = Math.floor((arr.reduce(function (a, b) { return a + b }, 0)) / arr.length)
    return (arr.filter(val => val === average)).length
}








// Solution with C++

double averageOfLargestAndSmallestNbr(vector<int>arr){

    int maxValue=arr[0],maxCount=1;
    int minValue=arr[0],minCount=1;

    for(int i=1;i<arr.size();i++){
        int x=arr[i];

        if(x>maxValue){
            maxValue=x;
            maxCount=1;
        }
        else if(x==maxValue)maxCount++;

        if(x<minValue){
            minValue=x;
            minCount=1;
        }
        else if(x==minValue)minCount++;

    }
    return ((maxValue*maxCount)+(minValue*minCount))/(maxCount+minCount);
}


// Solution with JavaScript

averageOfLargestAndSmallestNbr = (arr) => {
    let minVal = Math.min(...arr)
    let maxVal = Math.max(...arr)
    let minCount = arr.filter(x => x === minVal).length
    let maxCount = arr.filter(x => x === maxVal).length

    return ((maxVal * maxCount) + (minVal * minCount)) / (maxCount + minCount);
}


// Solution with JavaScript
sendEachDomainFirstMails = (emails) => {

    let includeList = [];
    let sendMails = [];

    emails.sort(function (a, b) {
        let x = a.split('@')[0],
            y = b.split('@')[0];
        return x == y ? 0 : x > y ? 1 : -1;

    });

    emails.forEach(email => {
        let x = email.split('@')[1]
        if (!includeList.includes(x)) {
            includeList.push(x)
            sendMails.push(email)
        }
    });
    sendMails.forEach(email => {

        // console.log(email);
        sendMails(email)
    });

}

*/
