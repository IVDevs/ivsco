void main()
{
    l_U0 = 4;
    l_U1 = 5000;
    l_U2 = 0;
    l_U4 = 0;
    l_U5 = 0;
    l_U39 = 0;
    l_U40 = 1;
    l_U41 = 0;
    l_U42 = 0;
    sub_55();
    while (sub_576())
    {
        WAIT( 0 );
        if ((NOT g_U9309) AND (NOT (IS_BIT_SET( g_U10938._fU0, 4 ))))
        {
            sub_723();
        }
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_55()
{
    l_U43[0] = {2233.38500000, -75.13140000, 0.57290000};
    l_U74[0] = {2342.04300000, -178.13330000, 27.14920000};
    l_U105[0] = 816.00000000;
    l_U43[1] = {2726.20800000, 226.78510000, 1.91930000};
    l_U74[1] = {2862.47600000, 366.94870000, 27.85000000};
    l_U105[1] = 798.72500000;
    l_U43[2] = {2415.75000000, 161.92500000, 5.81260000};
    l_U74[2] = {2581.73700000, 123.50670000, 20.51700000};
    l_U105[2] = 308.42500000;
    l_U43[3] = {2247.85700000, 186.44040000, 5.86090000};
    l_U74[3] = {2252.61600000, 26.60730000, 36.70830000};
    l_U105[3] = 209.47500000;
    l_U43[4] = {2343.76500000, 257.53440000, 5.81280000};
    l_U74[4] = {2345.53700000, 186.77900000, 36.31290000};
    l_U105[4] = 96.52500000;
    l_U43[5] = {2468.00200000, 377.67860000, 5.86320000};
    l_U74[5] = {2522.38700000, 387.81630000, 36.64000000};
    l_U105[5] = 128.55000000;
    l_U43[6] = {2273.28400000, 616.22190000, 6.08560000};
    l_U74[6] = {2302.15600000, 644.96990000, 36.86300000};
    l_U105[6] = 195.42500000;
    l_U43[7] = {2760.01900000, 465.53490000, 5.82570000};
    l_U74[7] = {2797.46200000, 504.66250000, 36.57900000};
    l_U105[7] = 592.00000000;
    l_U2 = 8;
    l_U5 = 0;
    g_U9309 = 0;
    return;
}

int sub_576()
{
    if (IS_PLAYER_PLAYING( sub_585() ))
    {
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "E2EndCredits" )) == 0)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_585()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_723()
{
    boolean bVar2;
    int iVar3;

    bVar2 = false;
    if (l_U4 >= l_U2)
    {
        l_U4 = 0;
    }
    if (IS_PLAYER_PLAYING( sub_585() ))
    {
        if (IS_CHAR_IN_ANGLED_AREA_3D( sub_768(), l_U43[l_U4]._fU0, l_U43[l_U4]._fU4, l_U43[l_U4]._fU8, l_U74[l_U4]._fU0, l_U74[l_U4]._fU4, l_U74[l_U4]._fU8, l_U105[l_U4], 0 ))
        {
            l_U5 = 0;
            bVar2 = true;
        }
        else
        {
            l_U5++;
        }
        if (bVar2)
        {
            if (NOT l_U41)
            {
                GET_GAME_TIMER( ref l_U3 );
                l_U41 = 1;
            }
            else
            {
                GET_GAME_TIMER( ref iVar3 );
                if ((iVar3 - l_U3) >= l_U1)
                {
                    if (IS_CHAR_IN_ANY_HELI( sub_768() ))
                    {
                        ALTER_WANTED_LEVEL_NO_DROP( sub_585(), 2 );
                    }
                    else
                    {
                        ALTER_WANTED_LEVEL_NO_DROP( sub_585(), l_U0 );
                    }
                    APPLY_WANTED_LEVEL_CHANGE_NOW( sub_585() );
                }
            }
        }
        else if (l_U41)
        {
            if (l_U5 >= l_U2)
            {
                l_U41 = 0;
            }
        }
        l_U4++;
    }
    return;
}

void sub_768()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}
