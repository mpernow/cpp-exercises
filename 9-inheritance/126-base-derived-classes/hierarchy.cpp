class Vehicle
{
    int max_speed;
};

class Aeroplane : public Vehicle
{
    // Derives from Vehicle
    int max_height;
};

class FighterAeroplace : public Aeroplane
{
    // Derives from Aeroplane, and hence also from Vehicle
};
