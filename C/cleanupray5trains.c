void main()
{
    while (true)
    {
        WAIT( 0 );
        if (sub_23())
        {
            MARK_MISSION_TRAINS_AS_NO_LONGER_NEEDED();
            SWITCH_RANDOM_TRAINS( 1 );
            TERMINATE_THIS_SCRIPT();
        }
        else if (NOT (IS_CAR_DEAD( g_U64958 )))
        {
            SET_TRAIN_CRUISE_SPEED( g_U64958, 0.00000000 );
        }
        if (NOT (IS_CAR_DEAD( g_U64959 )))
        {
            SET_TRAIN_CRUISE_SPEED( g_U64959, 0.00000000 );
        }
        SWITCH_RANDOM_TRAINS( 0 );;
    }
    return;
}

int sub_23()
{
    if (NOT (IS_CHAR_DEAD( sub_32() )))
    {
        if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_32(), 708.61000000, 269.32350000, 34.93950000, 300, 300, 300, 0 ))) AND (NOT (IS_CHAR_IN_AREA_2D( sub_32(), 145.30000000, 260.54000000, 980.33000000, 283.87000000, 0 ))))
        {
            return 1;
        }
        return 0;
    }
    return 1;
}

void sub_32()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}
