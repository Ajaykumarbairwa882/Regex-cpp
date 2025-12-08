// #include<bits/stdc++.h>
// using namespace std;                                                                                                                       
// int main(){
//     vector<int>nums={6,7,0,1,2,3,4,5};
//     int target=0;
//     int left=0;
//     int right =nums.size()-1;
//     while(left<=right){
//         int mid=left+(right-left)/2;
//         if(nums[mid]==target){
//             cout<<mid;
//             return 0;
//         }
//         if(nums[left]<=nums[mid]){
//             if(target>=nums[left] && target<nums[mid]){
//                 right=mid-1;
//             }else{
//                 left=mid+1;
//             }
//         }else{
//             if(target>nums[mid] && target<=nums[right]){
//                 left=mid+1;
//             }else{
//                 right=mid-1;
//             }
//         }
//     }
//     return 0;
// }

// 2. jump game

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    vector<int>nums={2,3,1,1,4};
//     int n=nums.size();   
//     int j=0;
//     for(int i=0;i<n-1;i++){
//         j=max(j,i+nums[i]);
//         if(j<=i){
//             cout<<"false";
//             return 0;
//         }
//     }
//     cout<<"true";
// }