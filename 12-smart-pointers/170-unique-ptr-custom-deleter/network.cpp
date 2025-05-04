#include <iostream>
#include <memory>

using namespace std;

struct destination
{ /*...*/
};
struct connection
{ /*...*/
};

connection connect(destination dest)
{
    cout << "Connecting" << endl;
    connection conn;
    return conn;
}

void disconnect(connection conn) { cout << "Disconnecting" << endl; }

auto end_connection = [](connection *conn) { disconnect(*conn); };

void get_data(const destination &d)
{
    connection conn = connect(d);
    unique_ptr<connection, decltype(end_connection)> p(&conn, end_connection);
    cout << "Getting data" << endl;
}

int main()
{
    destination dest;
    get_data(dest);
}
