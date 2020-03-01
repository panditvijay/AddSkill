#include<bits/stdc++.h>

using namespace std;

struct compare{
    bool operator()(pair<string,int> p1,pair<string,int> p2){
        return p1.first>p2.first;
    }

};

int main(){


int n=6;
for(int i=1;i<=n;i++){
        ostringstream oss;
        ostringstream oss1;
        oss<<"temp_words"<<i<<".txt";

    string st =oss.str();

    fstream op;
    op.open(st.c_str());
    fstream wf;

    oss1<<"sorted_words"<<i<<".txt";
    string st1 =oss1.str();

    wf.open(st1.c_str(),ios::out);

    string tmp;
    vector<string> v;
    while(op){
        op>>tmp;

        v.push_back(tmp+"\n");

    }
    cout<<v.size()<<endl;
    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++){
    wf<<v[i];
}


}

vector<string> v1;
vector<string> v2;
vector<string> v3;
vector<string> v4;
vector<string> v5;
vector<string> v6;


fstream f1,f2,f3,f4,f5,f6;
ostringstream os1;
ostringstream os2;
ostringstream os3;
ostringstream os4;
ostringstream os5;
ostringstream os6;

int tst=0;

for(int i=1;i<=n;i++){
    if(i==1){
            os1<<"sorted_words"<<i<<".txt";
            f1.open(os1.str().c_str());
        while(v1.size()!=2400000){
                tst++;
            string str;
            f1>>str;
            v1.push_back(str+"\n");
        }
        cout<<tst<<endl;

    }else if(i==2){
        os2<<"sorted_words"<<i<<".txt";
            f2.open(os2.str().c_str());
        while(v2.size()!=2400000){
            string str;
            f2>>str;
            v2.push_back(str+"\n");
        }
        cout<<v2.size()<<endl;
    }else if(i==3){
        os3<<"sorted_words"<<i<<".txt";
            f3.open(os3.str().c_str());
        while(v3.size()!=2400000){
            string str;
            f3>>str;
            v3.push_back(str+"\n");
        }
        cout<<v3.size()<<endl;
    }else if(i==4){
        os4<<"sorted_words"<<i<<".txt";
            f4.open(os4.str().c_str());
        while(v4.size()!=2400000){
            string str;
            f4>>str;
            v4.push_back(str+"\n");
        }
        cout<<v4.size()<<endl;
    }else if(i==5){
        os5<<"sorted_words"<<i<<".txt";
            f5.open(os5.str().c_str());
        while(v5.size()!=2400000){
            string str;
            f5>>str;
            v5.push_back(str+"\n");
        }
        cout<<v5.size()<<endl;
    }else{
        os6<<"sorted_words"<<i<<".txt";
            f6.open(os6.str().c_str());
        while(v6.size()!=2400000){
            string str;
            f6>>str;
            v6.push_back(str+"\n");
        }
        cout<<v6.size()<<endl;
    }
}

priority_queue<pair<string,int>,vector<pair<string,int> >,compare> pq;

int pv1=0,pv2=0,pv3=0,pv4=0,pv5=0,pv6=0;


pq.push(make_pair(v1[pv1],1));
pq.push(make_pair(v2[pv2],2));
pq.push(make_pair(v3[pv3],3));
pq.push(make_pair(v4[pv4],4));
pq.push(make_pair(v5[pv5],5));
pq.push(make_pair(v6[pv6],6));

vector<string> result;

int cnt=1;
while(!pq.empty()){
    if(pv1==2400000){
            cout<<"test1"<<endl;
        v1.clear();
        v1.resize(0);
        pv1=-1;

        while(v1.size()!=2400000 && !f1.eof()){
            string str;
            f1>>str;
            v1.push_back(str+"\n");
        }
    }else if(pv2==2400000){
        cout<<"test2"<<endl;
        v2.clear();
        v2.resize(0);
        pv2=-1;

        while(v2.size()!=2400000 && !f2.eof()){

            string str;
            f2>>str;
            v2.push_back(str+"\n");
        }
        cout<<"Size : 2 "<<v2.size()<<endl;
    }else if(pv3==2400000){
    cout<<"test3"<<endl;
        v3.clear();
        v3.resize(0);
        pv3=-1;

        while(v3.size()!=2400000 && !f3.eof()){
            string str;
            f3>>str;
            v3.push_back(str+"\n");
        }
        cout<<"Size : 3 "<<v3.size()<<endl;
    }else if(pv4==2400000){
        cout<<"test4"<<endl;
        v4.clear();
        v4.resize(0);
        pv4=-1;

        while(v4.size()!=2400000 && !f4.eof()){
            string str;
            f4>>str;
            v4.push_back(str+"\n");
        }
        cout<<"Size : 4 "<<v4.size()<<endl;
    }else if(pv5==2400000){
        cout<<"test5"<<endl;
        v5.clear();
        v5.resize(0);
        pv5=-1;

        while(v5.size()!=2400000 && !f5.eof()){
            string str;
            f5>>str;
            v5.push_back(str+"\n");
        }
        cout<<"Size : 5 "<<v5.size()<<endl;
    }else if(pv6==2400000){
        cout<<"test6"<<endl;
        v6.clear();
        v6.resize(0);
        pv6=-1;

        while(v6.size()!=2400000 && !f6.eof()){
            string str;
            f6>>str;
            v6.push_back(str+"\n");
        }
        cout<<"Size : 6 "<<v6.size()<<endl;
    }

    pair<string,int> pr = pq.top();
    result.push_back(pr.first);


    if(result.size()==2400000){
            ostringstream res;
            fstream f;
            res<<"result"<<cnt<<".txt";

            f.open(res.str().c_str(),ios::out);

            for(int i=0;i<result.size();i++){
                f<<result[i];
            }

            cnt++;
            result.clear();
            result.resize(0);

    }


    pq.pop();


    if(pr.second==1 && !f1.eof()){
        pv1++;
        if(pv1<2400000)
            pq.push(make_pair(v1[pv1],1));
    }else if(pr.second==2 && !f2.eof()){
        pv2++;
        if(pv2<2400000)
            pq.push(make_pair(v2[pv2],2));
    }else if(pr.second==3 && !f3.eof()){
        pv3++;
        if(pv3<2400000)
            pq.push(make_pair(v3[pv3],3));
    }else if(pr.second==4 && !f4.eof()){
        pv4++;
        if(pv4<2400000)
            pq.push(make_pair(v4[pv4],4));
    }else if(pr.second==5 && !f5.eof()){
        pv5++;

        if(pv5<2400000)
            pq.push(make_pair(v5[pv5],5));
    }else if(pr.second==6 && !f6.eof()){
        pv6++;
        if(pv6<2400000)
            pq.push(make_pair(v6[pv6],6));
    }else{
        cout<<"Important part!!"<<endl;
        if(pr.second==1){
                pv2++,pv3++,pv4++,pv5++,pv6++;
            pq.push(make_pair(v2[pv2],2));
            pq.push(make_pair(v3[pv3],3));
            pq.push(make_pair(v4[pv4],4));
            pq.push(make_pair(v5[pv5],5));
            pq.push(make_pair(v6[pv6],6));
        }else if(pr.second==2){
            pv1++,pv3++,pv4++,pv5++,pv6++;
            pq.push(make_pair(v1[pv1],1));
            pq.push(make_pair(v3[pv3],3));
            pq.push(make_pair(v4[pv4],4));
            pq.push(make_pair(v5[pv5],5));
            pq.push(make_pair(v6[pv6],6));

        }else if(pr.second==3){
            pv2++,pv1++,pv4++,pv5++,pv6++;
             pq.push(make_pair(v1[pv1],1));
            pq.push(make_pair(v2[pv2],2));
            pq.push(make_pair(v4[pv4],4));
            pq.push(make_pair(v5[pv5],5));
            pq.push(make_pair(v6[pv6],6));

        }else if(pr.second==4){
            pv2++,pv3++,pv1++,pv5++,pv6++;
             pq.push(make_pair(v1[pv1],1));
            pq.push(make_pair(v2[pv2],2));
            pq.push(make_pair(v3[pv3],3));
            pq.push(make_pair(v5[pv5],5));
            pq.push(make_pair(v6[pv6],6));

        }else if(pr.second==5){
            pv2++,pv3++,pv4++,pv1++,pv6++;
             pq.push(make_pair(v1[pv1],1));
            pq.push(make_pair(v2[pv2],2));
            pq.push(make_pair(v3[pv3],3));
            pq.push(make_pair(v4[pv4],4));
            pq.push(make_pair(v6[pv6],6));

        }else{
            pv2++,pv3++,pv4++,pv5++,pv1++;
             pq.push(make_pair(v1[pv1],1));
            pq.push(make_pair(v2[pv2],2));
            pq.push(make_pair(v3[pv3],3));
            pq.push(make_pair(v4[pv4],4));
            pq.push(make_pair(v5[pv5],5));

        }
    }
}

ostringstream res;
            fstream f;
            res<<"result"<<cnt<<".txt";

            f.open(res.str().c_str(),ios::out);

            for(int i=0;i<result.size();i++){
                f<<result[i];
            }


/*
fstream myfile;

string st1="temp_words1.txt";
    // opening file
    myfile.open(st1.c_str());
    if (myfile.fail())
    {
        cout << "Error Opening File" << endl;
        exit(1);
    }

fstream wf;

wf.open("test.txt",ios::out);





string st;

vector<string> v;


while(myfile){
    myfile>>st;
    v.push_back(st+"\n");


}


sort(v.begin(),v.end());

for(int i=0;i<v.size();i++){
    wf<<v[i];
}

*/


return 0;
}
