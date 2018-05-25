/*
标准输入流对象cin 的api函数。

cin.get()//一次只能读取一个字符

cin.get(一个参数)//读一个字符

cin.get(三个参数)//可以读字符串

cin.getline();

cin.ignore(n)//负略

cin.peek()//读缓冲区，有数据就返回第一个数据,并阻塞。

cin.putback()//iostream是一个类，有自己的buffer。你每次cin>>a，它就把buffer减一，放到a中去。cin.putback(a)就是把a的内容放回buffer中。

例1：


*/


#include <iostream>

using namespace std;


int main(){


    char buf1[256];

    char buf2[256];

    cout<<"请输入一个字符串 含有多个空格 aa bb cc dd"<<endl;

    cin>>buf1;

    cin.ignore(2);//负略两个

    int myint = cin.peek();

    cout<<"myint: "<<myint<<endl;

    cin.getline(buf2,256);

    cout<<"buf1:"<<buf1<<"buf2:"<<buf2<<endl;



    return 0;

}

int main23(){


    char buf1[256];

    char buf2[256];

    cout<<"请输入一个字符串 含有多个空格 aa bb cc dd"<<endl;

    cin>>buf1;

    cin.ignore(2);//负略两个

    cin.getline(buf2,256);

    cout<<"buf1:"<<buf1<<"buf2:"<<buf2<<endl;



    return 0;

}











//getline 函数可接受函数 空格。



int main22(){

    char buf1[256];

    char buf2[256];

    cout<<"请输入一个字符串 含有多个空格 aa bb cc dd"<<endl;

    cin>>buf1;

    cin.getline(buf2,256);

    cout<<"buf1:"<<buf1<<"buf2:"<<buf2<<endl;


}








//get(一个参数
int main13(){

    char a,b,c;


    cout<<"cin.get(a) 如果缓冲区没有数据，则程序阻塞:"<<endl;


    cin.get(a);

    cin.get(b);

    cin.get(c);

    cout<<a<<b<<c;

//可以链式编程

    cin.get(a).get(b).get(c);

    cout<<a<<b<<c<<"因为缓冲区有数据，所以程序不会堵塞";

    return 0;
}






int main12(){

    char ch;
//缓冲区//get()->缓冲区-》显示器。
    while((ch = cin.get())!=EOF){


        cout<<ch<<endl;

    }


    return 0;
}






int main11()
{
    char mybuf[1024];

    int myInt;

    long myLong;

    cin>>myInt;

    cin>>myLong;

    cin>>mybuf;//遇见空格停止接受数据

    cout<<"myInt : "<<myInt<<"myLong: "<<myLong<<"mybuf : "<<mybuf<<endl;

    return 0;
}

