void main()
{
    while (true)
    {
        WAIT( 1000 );
        if (NOT GET_MISSION_FLAG())
        {
            if (NOT (IS_CHAR_INJURED( sub_38() )))
            {
                SET_FOLLOW_VEHICLE_CAM_SUBMODE( g_U9587 );
                TERMINATE_THIS_SCRIPT();
            }
        }
    }
    return;
}

void sub_38()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}
