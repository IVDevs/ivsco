void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            if (sub_55())
            {
                switch (l_U2)
                {
                    case 0:
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1212308722, 65008, 1262, 18, 1, 0.00000000 );
                    l_U2 = 1;
                    break;
                    case 1: break;
                    case 2: break;
                }
            }
            else
            {
                sub_168();
            }
        }
        else
        {
            sub_168();
        }
    }
    return;
}

void sub_55()
{
    int Result;

    Result = 1;
    return Result;
}

void sub_168()
{
    TERMINATE_THIS_SCRIPT();
    return;
}
