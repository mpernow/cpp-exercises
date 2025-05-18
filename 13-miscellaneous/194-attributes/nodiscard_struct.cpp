struct [[nodiscard]] Test
{
};

Test func() { return Test(); }

int main() { func(); }
