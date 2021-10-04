
#include <iostream>
#include <chrono>
#include <random>
#include <array>


enum class CardValue
{
    Two = 2,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Jack,
    Queen,
    King,
    Ace

};

enum class CardSuit
{
    Spades,
    Hearts,
    Diamonds,
    Clubs

};

struct CardDeck
{
    CardSuit Suit;
    CardValue Value;

};

std::string PrintSuit(CardSuit suit_)
{
    switch (suit_)
    {
    case CardSuit::Spades:
        return "Spades";
        break;
    case CardSuit::Hearts:
        return "Hearts";
        break;
    case CardSuit::Diamonds:
        return "Diamonds";
        break;
    case CardSuit::Clubs:
        return "Clubs";
        break;
    default:
        return "FalseSuit";
        break;
    }


}

std::string PrintValue(CardValue value_)
{
    switch (value_)
    {
    case CardValue::Two:
        return "two of ";
        break;
    case CardValue::Three:
        return "three of ";
        break;
    case CardValue::Four:
        return "four of ";
        break;
    case CardValue::Five:
        return "five of ";
        break;
    case CardValue::Six:
        return "six of ";
        break;
    case CardValue::Seven:
        return "seven of ";
        break;
    case CardValue::Eight:
        return " eight of ";
        break;
    case CardValue::Nine:
        return "nine of ";
        break;
    case CardValue::Ten:
        return "ten of ";
        break;
    case CardValue::Jack:
        return "jack of ";
        break;
    case CardValue::Queen:
        return "Queen of ";
        break;
    case CardValue::King:
        return "king of ";
        break;
    case CardValue::Ace:
        return "Ace of ";
        break;
    default:
        return " Wrong CardValue ";
        break;
    }


}


std::string PrintCard(CardDeck card_)
{
    return PrintValue(card_.Value) + PrintSuit(card_.Suit);


}



int main()
{
    int createCardCount = 0;

    std::array<CardDeck, 52> deck{};

    for (int s{ 0 }; s <= 3; s++) {

        for (int v{ 2 }; v <= 14; v++) {

            CardDeck nowCard;
            nowCard.Suit = static_cast<CardSuit>(s);
            nowCard.Value = static_cast<CardValue>(v);

            deck.at(createCardCount) = nowCard;
            createCardCount++;

            std::cout << PrintCard(nowCard) << std::endl;

        }


    }


}

