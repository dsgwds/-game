#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<time.h>
#include<windows.h>
#include"s1.h"
#define t1 100
#define t2 500
#define t3 1000 

using namespace std;
int  sm=1000,jq=3000,gj=100;//生命，金钱，攻击，护甲
int g[3]={100,150,200};
int m=500; 
int  n,r;
void pr1(string a)
{
	for(int i=0;i<a.length();i++)
	{
		cout<<a[i];
		Sleep(t1);
	}
} 
int work()
{
	system("cls");
	pr1("对战开始");
	Sleep(t1);
	cout<<endl;
	while(1)
	{
		system("cls");
		r++;
		printf("当前你的状态：\n生命：%d\n金钱:%d\n攻击:%d\n",sm,jq,gj);
		cout<<"Round: "<<r<<endl;
		pr1("请输入你所出的招式");
		cout<<endl; 
		cout<<"1、左正蹬"<<endl<<"2、右鞭腿"<<endl<<"3、左刺拳"<<endl;
		cin>>n; 
		if(n>=1&&n<=3)
		{
			pr1("看我化劲，接化发！呵，哈，吼，嘿！");
			cout<<endl; 
			m-=g[n-1];
			pr1("马保国躲闪失败，恭喜你正中命门，造成伤害");
			cout<<g[n-1]; 
			cout<<endl; 
		}
		else
		{
			pr1("不讲武德？");
			cout<<endl;
		}
		pr1("下面请马老师出招");
		cout<<endl;
		pr1("看我松果弹抖闪电鞭");
		Sleep(t2);
		system("cls");
		s();
		sm-=100; 
		if(sm<=0) return 1;
		if(m<=0) return 0;
	} 
	
}
int main()
{
	system("color 70"); 
	pr1("欢迎来到浑元形意太极拳试炼场");
	cout<<endl;
	Sleep(t2);
	pr1("我是掌门人 ");
	Sleep(t2); 
	pr1("马 保 国");
	cout<<endl;
	Sleep(t2);
	pr1("小伙子，听说你听了我的肾磨石之后，非常想来拜我为师");
	cout<<endl;
	pr1("武林虽然以和为贵，但是想让我收你为徒，还是要先来挑战一下我");
	cout<<endl;
	pr1("由于本人身体娇贵，出场费高昂，需收取你2000元挑战费，是否愿意挑战");
	cout<<endl<<"1、愿意挑战"<<endl<<"2、放弃挑战"<<endl;
	cin>>n;
	if(n==2)
	{
		pr1("小伙子，钱都不交，定是来骗、来偷袭我，这好吗，这不好，我劝你耗子尾汁"); 
	}
	else
		if(n!=1)
		{
			pr1("小伙子，不讲武德，不乖乖听话，滚吧！");
			cout<<endl;
		} 
		else
		{
			pr1("非常好，小伙子，很有精神");
			cout<<endl;
			jq-=2000; 
			pr1("小伙子，我看你三十多岁，体重八十多公斤");
			cout<<endl;
			pr1("你一定是在健身房练功颈椎练坏了吧");
			cout<<endl;
			pr1("我先来教教你浑元功法");
			Sleep(t2);
			cout<<endl; 
			pr1("什么，你不信？  小朋友，你那个没用，我这个有用，你两只手来找我一个手指头你都找不动");
			cout<<endl;
			pr1("两百多斤的英国大力士，都找不动的，这可是化劲，传统功夫四两拨千斤？懂？");
			cout<<endl;
			pr1("非要试试？ok，记得先去买个保险，我怕我浑元功法，伤着你！");
			cout<<endl;
			Sleep(t2);
			n=work();
			if(n==1)
				pr1("小伙子，连我都打不过，你还是回去歇着吧，耗子尾汁");
			if(n==0)
				pr1("你成功击杀马保国，被讹2亿元+无期徒刑");
				cout<<endl; 
		} 
	cout<<"game over"<<endl;
	return 0;
}
/*朋友们好啊我是浑元形意太极门掌门人马报国。
刚才有个朋友问我马老师发生什么事了，我说怎么回事，给我发了一几张截图，我一看！嗷！
原来是昨天，有两个年轻人，三十多岁，一个体重，九十多公斤，一个体重八十多公斤，他们说，唉…
有一个说是我在健身房练功颈椎练坏了，马老师你能不能教教我浑元功法，矮…帮助治疗一下，我的颈椎病。
我说可以。我说你在健身房练死劲儿，不好用，他不服气。我说小朋友：你两个手来找我一个手指头，
他找不动。他说你这也没用。我说我这个有用，这是化劲儿，传统功夫是讲化劲儿的四两拨千金。
二百多斤的英国大力士，动我不动我这一个手指头。啊…哈！他非和我试试，我说可以。诶…
我一说的啪就站起来了，很快啊！然后上来就是一个左正蹬一个右边腿一个左刺拳，
我全部防区防出去了啊防出去以后自然是传统功夫你点到为止右拳放到他鼻子上没打他，
我笑一下准备收拳，由这时间，欸传统功夫的点到为止他已经输了，如果这一拳发力，一
拳就把他鼻子打骨折了，放在鼻子上没有打他，他也承认，我先打到他面部。
他不知道拳放在他鼻子上，他承认我先打到他面部，啊，我收拳的时间不打了，他突然袭击左刺拳来打我脸，
啊，我大意了啊，没有闪，矮…他的左拳给我眼，啊，右眼，蹭了一下，但没关系啊！
他也说，啊他截图也说了，两分多钟以后，当时流眼泪了，捂着眼，我说停停。然后两分钟钟以后，
两分多钟以后诶就好了，我说小伙子你不讲武德你不懂，我说马老师对不对不起，我不懂规矩。啊，我是…
他说他是乱打的，他可不是乱打的啊，蹬蹬边腿左刺拳，训练有素，后来他说他练过三四年泰拳，啊，
看来是有备而来！这两个年轻人不讲武德，来骗，来偷袭，我六十九岁的老同志，这好吗？这不好，
我劝这位年轻人好自为之，好好反思，以后不要再犯这样的聪明，小聪明，啊，呃…武林要以和为贵，
要讲武德，不要搞窝里斗，谢谢朋友们！*/
