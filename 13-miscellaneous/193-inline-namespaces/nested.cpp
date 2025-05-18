namespace A
{
namespace B
{
int x;
}
// B::x; // Need to access via B's namespace
}  // namespace A

int main() { A::B::x = 5; }
