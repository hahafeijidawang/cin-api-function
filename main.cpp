/*
��׼����������cin ��api������

cin.get()//һ��ֻ�ܶ�ȡһ���ַ�

cin.get(һ������)//��һ���ַ�

cin.get(��������)//���Զ��ַ���

cin.getline();

cin.ignore(n)//����

cin.peek()//���������������ݾͷ��ص�һ������,��������

cin.putback()//iostream��һ���࣬���Լ���buffer����ÿ��cin>>a�����Ͱ�buffer��һ���ŵ�a��ȥ��cin.putback(a)���ǰ�a�����ݷŻ�buffer�С�

��1��


*/


#include <iostream>

using namespace std;


int main(){


    char buf1[256];

    char buf2[256];

    cout<<"������һ���ַ��� ���ж���ո� aa bb cc dd"<<endl;

    cin>>buf1;

    cin.ignore(2);//��������

    int myint = cin.peek();

    cout<<"myint: "<<myint<<endl;

    cin.getline(buf2,256);

    cout<<"buf1:"<<buf1<<"buf2:"<<buf2<<endl;



    return 0;

}

int main23(){


    char buf1[256];

    char buf2[256];

    cout<<"������һ���ַ��� ���ж���ո� aa bb cc dd"<<endl;

    cin>>buf1;

    cin.ignore(2);//��������

    cin.getline(buf2,256);

    cout<<"buf1:"<<buf1<<"buf2:"<<buf2<<endl;



    return 0;

}











//getline �����ɽ��ܺ��� �ո�



int main22(){

    char buf1[256];

    char buf2[256];

    cout<<"������һ���ַ��� ���ж���ո� aa bb cc dd"<<endl;

    cin>>buf1;

    cin.getline(buf2,256);

    cout<<"buf1:"<<buf1<<"buf2:"<<buf2<<endl;


}








//get(һ������
int main13(){

    char a,b,c;


    cout<<"cin.get(a) ���������û�����ݣ����������:"<<endl;


    cin.get(a);

    cin.get(b);

    cin.get(c);

    cout<<a<<b<<c;

//������ʽ���

    cin.get(a).get(b).get(c);

    cout<<a<<b<<c<<"��Ϊ�����������ݣ����Գ��򲻻����";

    return 0;
}






int main12(){

    char ch;
//������//get()->������-����ʾ����
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

    cin>>mybuf;//�����ո�ֹͣ��������

    cout<<"myInt : "<<myInt<<"myLong: "<<myLong<<"mybuf : "<<mybuf<<endl;

    return 0;
}

