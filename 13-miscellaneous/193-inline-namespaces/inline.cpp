namespace A
{
inline namespace B
{
int x;
}
}  // namespace A

int main()
{
    A::x;  // Can access without explicitly putting B
}
