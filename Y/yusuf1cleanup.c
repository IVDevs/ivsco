void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 1;
    l_U4 = 3;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Yusuf1" )) > 0)
    {
        WAIT( 0 );
    }
    if (g_U43133)
    {
        WAIT( 0 );
    }
    while (true)
    {
        WAIT( 0 );
        if (NOT (IS_CHAR_DEAD( sub_102() )))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_102(), -1142.77700000, -988.49450000, 1.05540000, 800.00000000, 800.00000000, 800.00000000, 0 )))
            {
                if (NOT (sub_229( -1142.77700000, -988.49450000, 1.05540000, 10.00000000 )))
                {
                    if ((g_U43133) AND ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Yusuf1" )) > 0))
                    {
                        TERMINATE_THIS_SCRIPT();
                    }
                    else
                    {
                        sub_337( 1 );
                    }
                    TERMINATE_THIS_SCRIPT();
                }
            }
        }
    }
    return;
}

void sub_102()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_229(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3 ))
    {
        return 1;
    }
    return 0;
}

void sub_337(boolean bParam0)
{
    int I;

    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -1141632236, -28737275 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 2052240693, 1699083005 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -1313618655, -1366882930 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -740515878, -1143889885 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 256624776, -1143889885 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -529900459, -855358840 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 163992799, -855358840 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -1031741483, -530945740 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -285371601, -530945740 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 13155365, 1993446944 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 288897752, 1993446944 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -843141289, 459792206 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -670316162, 459792206 );
    I = 0;
    for ( I = 0; I < g_U43011; I++ )
    {
        if (bParam0)
        {
            if (DOES_OBJECT_EXIST( g_U43011[I] ))
            {
                DELETE_OBJECT( ref g_U43011[I] );
            }
        }
        g_U43011[I] = nil;
    }
    for ( I = 0; I < g_U43018; I++ )
    {
        if (bParam0)
        {
            if (DOES_OBJECT_EXIST( g_U43018[I] ))
            {
                DELETE_OBJECT( ref g_U43018[I] );
            }
        }
        g_U43018[I] = nil;
    }
    return;
}
