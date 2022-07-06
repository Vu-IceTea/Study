#include<bits/stdc++.h>
using namespace std;
class Card
{
private:
	string nameBook, nameAuthor;
	int numberBook;
public:
	Card()
	{
		
	}
	Card(string nameBook, string nameAuthor, int numberBook)
	{
		this->nameBook = nameBook;
		this->nameAuthor = nameAuthor;
		this->numberBook = numberBook;
	}
	void display()
	{
		cout << "Name Book: " << nameBook << endl;
		cout << "Name Author: " << nameAuthor << endl;
		cout << "Number Book: " << numberBook << endl;	
	}
	int getNumBook()
	{
		return numberBook;	
	}
	static void sortCards(vector<Card> &cards)
	{
		for(int i = 0; i < cards.size() - 1; i++)
		{
			for(int j = i + 1; j < cards.size(); j++)
			{
				if(cards[i].getNumBook() > cards[j].getNumBook())
				{
					swap(cards[i], cards[j]);
				}
			}
		}
	}
};

int main()
{
	Card c("A", "B", 10);
	vector<Card> cards(2);
	cards[0] = {"B", "Nguyen Van A", 12};
	cards[1] = {"C", "Nguyen Van C", 20};
}
