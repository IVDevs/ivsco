void main()
{
    l_U0 = 0;
    l_U1 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_29();
    }
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            if (IS_PLAYER_PLAYING( sub_79() ))
            {
                if (g_U9151 == 1)
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, 64535, 1223, 29, 1, 0.00000000 );
                }
                else
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, 64535, 1223, 29, 0, 0.00000000 );
                }
            }
            else
            {
                sub_29();
            }
        }
        else
        {
            sub_29();
        }
    }
    return;
}

void sub_29()
{
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_79()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}
