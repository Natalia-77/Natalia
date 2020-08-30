//#include"Mediator.h"
//#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;
class Subscriber;
class Site
{
	string _news;
	vector<Subscriber*> _subscribers;
	void Notify();
public:
	Site();
	void Attach(Subscriber* subscriber);
	void Detach(Subscriber* subscriber);
	void SetNews(string news);
	string SendNews();
};

class Subscriber
{
protected:
	Site*_site;
	string _news;
	string _name;
public:
	Subscriber()
	{
			
	}
	Subscriber(Site*site, string name)
	{
		_site = site;
		_name = name;
	}
	virtual void Update() = 0;
};

class SubscriberForShort:public Subscriber
{
public:
	SubscriberForShort()
	{
			
	}
	SubscriberForShort(Site*site, string name):Subscriber(site,name)
	{
		_site = site;
		_name = name;
	}
	void Update()
	{
		
		if (strstr(_site->SendNews().c_str(),"qr") == 0)
		{
			_news = _site->SendNews();
			cout << _name << " recieve news: " << _news << endl;
		}
	}
};

class SubscriberForAll:public Subscriber
{
public:
	SubscriberForAll()
	{
			
	}
	SubscriberForAll(Site*site, string name):Subscriber(site,name)
	{
		_site = site;
		_name = name;
	}
	void Update()
	{
		_news = _site->SendNews();
		cout << _name << " recieve11 news: " << _news << endl;
	}
};

	void Site:: Notify()
	{
		for (auto s : _subscribers)
		{
			s->Update();
		}
	}
	Site::Site()
	{
		_news = "";
	}
	void Site::Attach(Subscriber* subscriber)
	{
		_subscribers.push_back(subscriber);
	}
	void Site::Detach(Subscriber* subscriber)
	{
		auto it=find(_subscribers.begin(), _subscribers.end(), subscriber);
		if(it!=_subscribers.end())
		_subscribers.erase(it);
	}
	void Site::SetNews(string news)
	{
		if (_news != news)
		{
			_news = news;
			Notify();
		}
	}
	string Site::SendNews()
	{
		return _news;
	}
	
void main()
{
	//SetConsoleOutputCP(1251);
	Site*msdn = new Site();
	list <Subscriber*> subscr
	{
		new SubscriberForShort(msdn,"Petja"),
		new SubscriberForShort(msdn, "Vasja"),
		new SubscriberForShort(msdn, "Gena")
	};

	for (auto el : subscr)
	{
		msdn->Attach(el);
	}

	msdn->SetNews("rtr aa");
	msdn->SetNews("huhu rr huh");
	//msdn->Detach(*(subscr.begin()));
	msdn->SetNews("rteee eee");
	
}


