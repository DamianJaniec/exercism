namespace targets {
// TODO: Insert the code for the alien class here
    class Alien
    {
        
        int health = 3;

        public:
        int x_coordinate;
        int y_coordinate;
    
        Alien(int x, int y) : x_coordinate(x), y_coordinate(y)
        {}

        int get_health()
        {
            return health;
        }
        bool hit()
        {
            if(health>0)
            {
                health--;
                return true;
            }
            return false;
        }
        bool is_alive()
        {
            return health>0 ? true : false;
        }
        bool teleport(int x, int y)
        {
            x_coordinate = x;
            y_coordinate = y;
            return true;
        }
        bool collision_detection(Alien a)
        {
            if(x_coordinate == a.x_coordinate && y_coordinate == a.y_coordinate)
                return true;
            return false;
        }
    };
}  // namespace targets
