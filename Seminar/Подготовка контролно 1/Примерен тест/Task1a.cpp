#include <iostream>
using namespace std;

int main()
{
    char text[255];
    cin.getline(text, 255);

    int sentenceCount = 0;
    bool inSentence = false;

    for (int i = 0; text[i] != '\0'; i++)
    {
        char c = text[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == ' ')
        {
            inSentence = true;
        }
        else if (c == '.' || c == '!' || c == '?')
        {
            if (inSentence)
            {
                sentenceCount++;
                inSentence = false;
            }
        }
    }

    if (inSentence)
    {
        sentenceCount++;
    }

    cout << sentenceCount << endl;

    return 0;
}