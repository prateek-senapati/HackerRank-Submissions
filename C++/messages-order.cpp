// Messages Order

class Message
{
    string text;
    static int id;
    int current_id;
    public:
    Message(const string& text)
    {
        this->text = text;
        ++id;
        current_id = id;
    }
    const string& get_text() { return text; }
    bool operator < (const Message& m)
    {
        return current_id < m.current_id;
    }
};

int Message::id = 0;

class MessageFactory
{
    public:
    Message create_message(const string& text)
    {
        Message m(text);
        return m;
    }
};
