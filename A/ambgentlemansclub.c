void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U116 = 0;
    l_U120 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_49();
    }
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            switch (l_U120)
            {
                case 0:
                GET_GAME_VIEWPORT_ID( ref l_U117 );
                if (NOT (CAM_IS_SPHERE_VISIBLE( l_U117, l_U121._fU4[0]._fU0, l_U121._fU4[0]._fU4, l_U121._fU4[0]._fU8, 10.00000000 )))
                {
                    if (IS_PLAYER_PLAYING( sub_205() ))
                    {
                        l_U120 = 1;
                    }
                }
                break;
                case 1:
                REQUEST_MODEL( -84406538 );
                while (NOT (HAS_MODEL_LOADED( -84406538 )))
                {
                    WAIT( 0 );
                }
                CREATE_CHAR( 4, -84406538, -33.35000000, 765.82000000, 13.72000000, ref l_U115, 1 );
                SET_CHAR_HEADING( l_U115, 90.00000000 );
                SET_CHAR_RELATIONSHIP( l_U115, 1, 0 );
                l_U120 = 2;
                break;
                case 2:
                if (l_U116 == 1)
                {
                    sub_49();
                }
                break;
            }
        }
        else
        {
            sub_49();
        }
    }
    return;
}

void sub_49()
{
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_205()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}
