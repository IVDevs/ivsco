void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U105 = 0;
    l_U106 = 1;
    l_U107 = 3;
    l_U109 = 350;
    l_U110 = 1.00000000;
    l_U111 = 20.00000000;
    l_U112 = 0.00000000;
    l_U113 = 0.50000000;
    l_U114 = 0;
    l_U119 = 1;
    l_U121 = 0.20000000;
    l_U1877 = 0;
    l_U1906 = 0;
    l_U1917 = 0.30000000;
    l_U1930 = 15.00000000;
    l_U1931 = 20.00000000;
    l_U1932 = 8.00000000;
    l_U1934 = 1.20000000;
    l_U1940 = 0;
    l_U1941 = 85;
    l_U1942 = 8;
    l_U1953 = -1;
    l_U1957 = 9999999;
    l_U1958 = 9999999;
    l_U1959 = 9999999;
    l_U1960 = 9999999;
    l_U1961 = 9999999;
    l_U1962 = 9999999;
    l_U1963 = 99999999;
    l_U1964 = 9999999;
    l_U1969 = 1000;
    l_U1972 = -1;
    l_U1973 = -1;
    l_U1974 = -1;
    l_U1987 = 0;
    l_U1988 = 0;
    l_U1989 = 0;
    l_U1990 = 0;
    l_U1991 = 0;
    l_U1992 = 0;
    l_U1993 = 0;
    l_U1994 = 0;
    l_U1995 = 0;
    l_U2035 = {0.10300000, 0.04000000, -0.04800000};
    l_U2038 = {0.10300000, 0.03700000, 0.03500000};
    l_U2041 = {3.14000000, 0.00000000, 0.00000000};
    l_U2044 = {3.14000000, 3.14000000, 0.00000000};
    l_U2047 = {0.10900000, 0.04100000, -0.03700000};
    l_U2050 = {0.06800000, 0.04000000, 0.02500000};
    l_U2053 = {3.14000000, 0.00000000, 0.00000000};
    l_U2056 = {0.00000000, 0.00000000, 0.00000000};
    l_U2059 = {0.10300000, 0.04000000, -0.03000000};
    l_U2062 = {0.00000000, 0.00000000, 0.00000000};
    l_U2068 = {0.00000000, 0.12000000, 0.00000000};
    l_U2071 = {0.00000000, 0.00000000, 0.00000000};
    PRINTSTRING( "AmbNightClub - Bahama Mamas script started" );
    PRINTNL();
    if (sub_675() > 2)
    {
        sub_827();
    }
    l_U2032 = {l_U2074._fU4[0]};
    l_U1938 = sub_6458( l_U2032 );
    if (NOT (l_U1938 == 0))
    {
        PRINTSTRING( "AmbNightClub - Bahama Mamas script cleaned up due to not being nearest club" );
        PRINTNL();
        sub_827();
    }
    sub_7008();
    while (true)
    {
        sub_19382();
        WAIT( 0 );
    }
    return;
}

void sub_675()
{
    int Result;

    Result = 0;
    Result += GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubM92" );
    Result += GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubBM2" );
    Result += GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubBM_min" );
    Result += GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubHC2" );
    return Result;
}

void sub_827()
{
    int I;

    if (l_U1938 == 1)
    {
        sub_853( g_U30198 );
        sub_853( g_U30199 );
        sub_853( g_U30202 );
        g_U30198 = -1;
        g_U30199 = -1;
        g_U30202 = -1;
    }
    if (l_U1938 == 2)
    {
        sub_853( g_U30201 );
        sub_853( g_U30200 );
        sub_853( g_U30203 );
        g_U30201 = -1;
        g_U30200 = -1;
        g_U30203 = -1;
    }
    if (l_U1938 == 1)
    {
        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CLOSED_CLUBSEC" ))
        {
            CLEAR_HELP();
        }
    }
    if (l_U1873)
    {
        sub_1798();
    }
    for ( I = 0; I < l_U1685; I++ )
    {
        if (l_U1685[I]._fU0)
        {
            if (DOES_CHAR_EXIST( l_U1685[I]._fU24 ))
            {
                sub_2303( ref l_U1685[I], 0 );
            }
        }
    }
    for ( I = 0; I < l_U139; I++ )
    {
        if (l_U139[I]._fU0)
        {
            if (DOES_CHAR_EXIST( l_U139[I]._fU24 ))
            {
                sub_2303( ref l_U139[I], 0 );
            }
        }
    }
    for ( I = 0; I < l_U139; I++ )
    {
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U139[I]._fU44 );
    }
    for ( I = 0; I < l_U1685; I++ )
    {
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U1685[I]._fU44 );
    }
    if (DOES_OBJECT_EXIST( l_U1997 ))
    {
        DELETE_OBJECT( ref l_U1997 );
    }
    sub_5665();
    switch (l_U1938)
    {
        case 1:
        g_U30218 = 0;
        g_U30219 = 0;
        g_U30220 = 0;
        g_U30221 = 0;
        break;
        case 2:
        g_U30222 = 0;
        g_U30223 = 0;
        g_U30224 = 0;
        g_U30225 = 0;
        break;
    }
    if (g_U30110[l_U1938])
    {
        PRINTSTRING( "g_bWaitingForClubScriptToStreamIn - set to false in club cleanup" );
        PRINTNL();
        g_U30110[l_U1938] = 0;
    }
    if (l_U1884)
    {
        STOP_STREAM();
        l_U1884 = 0;
    }
    if (l_U1885)
    {
        STOP_STREAM();
        l_U1885 = 0;
    }
    if ((l_U1893) || (l_U1895))
    {
        if (IS_PLAYER_PLAYING( sub_2048() ))
        {
            SET_CHAR_MAX_MOVE_BLEND_RATIO( sub_3604(), 3.00000000 );
        }
    }
    if (l_U1895)
    {
        if (IS_PLAYER_PLAYING( sub_2048() ))
        {
            SET_ANIM_GROUP_FOR_CHAR( sub_3604(), "MOVE_PLAYER" );
        }
    }
    PRINTSTRING( "CLUB SCRIPT - " );
    switch (l_U1938)
    {
        case 0:
        PRINTSTRING( "BAHAMA MAMAS" );
        break;
        case 1:
        PRINTSTRING( "MAISONETTE 9" );
        break;
        case 2:
        PRINTSTRING( "HERCULES" );
        break;
    }
    PRINTNL();
    if (g_U30154[l_U1938])
    {
        g_U30154[l_U1938] = 0;
    }
    sub_6228();
    if (l_U1904)
    {
        STOP_STREAM();
        l_U1904 = 0;
    }
    if (l_U1905)
    {
        if (l_U1906)
        {
            MUTE_POSITIONED_RADIO( 0 );
            l_U1905 = 0;
        }
    }
    if (g_U30197 == l_U1938)
    {
        g_U30197 = -1;
    }
    if (l_U1908)
    {
        if (NOT (l_U1973 == -1))
        {
            MUTE_STATIC_EMITTER( l_U1973, 0 );
            l_U1908 = 0;
        }
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_853(int iParam0)
{
    int iVar3;

    if (NOT (iParam0 == -1))
    {
        iVar3 = GET_ID_OF_THIS_THREAD();
        if (iVar3 == g_U30236[iParam0])
        {
            PRINTSTRING( "FREE_UP_GLOBAL_CLUBPED_SLOT() - called with slot number " );
            PRINTINT( iParam0 );
            PRINTNL();
            if (NOT (DOES_CHAR_EXIST( g_U29971[iParam0]._fU12 )))
            {
                PRINTSTRING( "FREE_UP_GLOBAL_CLUBPED_SLOT() - char does not exist " );
                PRINTINT( iParam0 );
                PRINTNL();
            }
            else if (IS_CHAR_INJURED( g_U29971[iParam0]._fU12 ))
            {
                PRINTSTRING( "FREE_UP_GLOBAL_CLUBPED_SLOT() - char is injured " );
                PRINTINT( iParam0 );
                PRINTNL();
            }
            g_U29971[iParam0]._fU0 = 0;
            g_U29971[iParam0]._fU4 = 0;
            g_U29971[iParam0]._fU12 = nil;
            g_U29971[iParam0]._fU16 = {0.00000000, 0.00000000, 0.00000000};
            g_U29971[iParam0]._fU28 = 0.00000000;
            g_U29971[iParam0]._fU32 = 0;
            g_U29971[iParam0]._fU36 = 0;
            g_U29971[iParam0]._fU40 = 0;
            g_U30236[iParam0] = nil;
            sub_1320( iParam0, 0 );
            sub_1455( g_U29971[iParam0]._fU8 );
            g_U29971[iParam0]._fU8 = 0;
            PRINTSTRING( "FREE_UP_GLOBAL_CLUBPED_SLOT() - slot number " );
            PRINTINT( iParam0 );
            PRINTNL();
        }
    }
    return;
}

void sub_1320(int iParam0, unknown uParam1)
{
    if (NOT (iParam0 == -1))
    {
        g_U30132[iParam0] = uParam1;
    }
    else
    {
        SCRIPT_ASSERT( "SET_GLOBAL_CLUBPED_SLOT_AS_SCRIPT_CONTROLLED - invalid slot number (-1)" );
    }
    return;
}

void sub_1455(unknown uParam0)
{
    PRINTSTRING( "RELOAD_GLOBAL_CLUBPED_ARRAY() - called with " );
    PRINTINT( uParam0 );
    PRINTNL();
    g_U30128[uParam0] = 1;
    return;
}

void sub_1798()
{
    PRINTSTRING( "RESTORE_DENSITIES() - called by " );
    switch (l_U1938)
    {
        case 0:
        PRINTSTRING( "BAHAMA MAMAS" );
        break;
        case 1:
        PRINTSTRING( "MAISONETTE 9" );
        break;
        case 2:
        PRINTSTRING( "HERCULES" );
        break;
    }
    PRINTNL();
    SWITCH_GARBAGE_TRUCKS( 1 );
    g_U43642 = 0;
    g_U10935 = 0;
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_REDUCE_VEHICLE_MODEL_BUDGET( 0 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SWITCH_RANDOM_TRAINS( 1 );
    SET_SCENARIO_PED_DENSITY_MULTIPLIER( 1.00000000, 1.00000000 );
    if (IS_PLAYER_PLAYING( sub_2048() ))
    {
        SET_PLAYER_CAN_BE_HASSLED_BY_GANGS( sub_2048(), 1 );
        DONT_DISPATCH_COPS_FOR_PLAYER( sub_2048(), 0 );
    }
    l_U1873 = 0;
    if (NOT l_U1875)
    {
        g_U30102 = 0;
        g_U30103 = 1;
    }
    else
    {
        g_U30102 = 0;
        g_U30103 = 0;
    }
    PRINTSTRING( "SET_INTERIOR_DENSITIES - RESTORE_DENSITIES() called" );
    PRINTNL();
    return;
}

void sub_2048()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_2303(int iParam0, boolean bParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (NOT (iParam0->_fU24 == g_U30208))
    {
        if (NOT (sub_2334( iParam0->_fU24 )))
        {
            l_U1945++;
            l_U1940--;
            g_U30188--;
            if (iParam0->_fU4 == 14)
            {
                if (DOES_CHAR_EXIST( iParam0->_fU24 ))
                {
                    if (IS_CHAR_INJURED( iParam0->_fU24 ))
                    {
                        l_U1914 = 1;
                    }
                }
                if (NOT (DOES_OBJECT_EXIST( l_U1997 )))
                {
                    sub_2704();
                }
            }
            if ((iParam0->_fU12 == 99) || ((DOES_CHAR_EXIST( iParam0->_fU24 )) AND (IS_CHAR_INJURED( iParam0->_fU24 ))))
            {
                iParam0->_fU20 = 35536;
                iParam0->_fU16 = -1;
            }
            if (DOES_OBJECT_EXIST( iParam0->_fU44 ))
            {
                if (iParam0->_fU52 == 11)
                {
                    DELETE_OBJECT( iParam0 + 44 );
                }
                else
                {
                    MARK_OBJECT_AS_NO_LONGER_NEEDED( iParam0 + 44 );
                }
            }
            if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
            {
                if (HAS_CUTSCENE_FINISHED())
                {
                    SET_CHAR_IN_CUTSCENE( iParam0->_fU24, 0 );
                }
                SET_CHAR_COLLISION( iParam0->_fU24, 1 );
                if (sub_3003( iParam0->_fU56 ))
                {
                    FREEZE_CHAR_POSITION( iParam0->_fU24, 0 );
                }
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0->_fU24, 0 );
            }
            else if ((((((((iParam0->_fU4 == 1) || (iParam0->_fU4 == 2)) || (iParam0->_fU4 == 4)) || (iParam0->_fU4 == 6)) || (iParam0->_fU4 == 7)) || (iParam0->_fU4 == 10)) || (iParam0->_fU4 == 12)) || (iParam0->_fU4 == 13))
            {
                if (l_U1938 == 0)
                {
                    g_U30189++;
                }
            }
            if (l_U1875)
            {
                if ((((((((iParam0->_fU4 == 1) || (iParam0->_fU4 == 2)) || (iParam0->_fU4 == 4)) || (iParam0->_fU4 == 6)) || (iParam0->_fU4 == 7)) || (iParam0->_fU4 == 10)) || (iParam0->_fU4 == 12)) || (iParam0->_fU4 == 13))
                {
                    if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
                    {
                        CLEAR_CHAR_TASKS( iParam0->_fU24 );
                        if (NOT (IS_CHAR_INJURED( sub_3604() )))
                        {
                            SAY_AMBIENT_SPEECH( iParam0->_fU24, "GUN_RUN", 1, 1, 2 );
                            TASK_SMART_FLEE_CHAR( iParam0->_fU24, sub_3604(), 200.00000000, -1 );
                            SET_CHAR_KEEP_TASK( iParam0->_fU24, 1 );
                            l_U1943++;
                        }
                    }
                }
            }
            if (iParam0->_fU24 == g_U30212)
            {
                g_U30212 = nil;
            }
            if (iParam0->_fU24 == g_U30211)
            {
                g_U30211 = nil;
            }
            if (iParam0->_fU24 == g_U30213)
            {
                g_U30211 = nil;
            }
            if (NOT bParam1)
            {
                sub_3813( iParam0->_fU24 );
            }
            else if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
            {
                if (IS_CHAR_ON_SCREEN( iParam0->_fU24 ))
                {
                    if (NOT (sub_3889( sub_3604(), l_U1938, 0 )))
                    {
                        if (sub_3889( iParam0->_fU24, l_U1938, 0 ))
                        {
                            DELETE_CHAR( iParam0 + 24 );
                        }
                        else
                        {
                            sub_3813( iParam0->_fU24 );
                        }
                    }
                    else
                    {
                        DELETE_CHAR( iParam0 + 24 );
                    }
                }
                else
                {
                    DELETE_CHAR( iParam0 + 24 );
                }
            }
            else
            {
                sub_3813( iParam0->_fU24 );
            }
            iParam0->_fU24 = nil;
            iParam0->_fU12 = 0;
            iParam0->_fU8 = 0;
            if ((l_U1902) || (g_U30114[l_U1938]))
            {
                iParam0->_fU20 = 0;
            }
            if (l_U1877)
            {
                if (l_U1886)
                {
                    PRINTSTRING( "GLOBAL CLUB PED REMOVED - " );
                }
                else
                {
                    PRINTSTRING( "CLUB PED REMOVED - " );
                }
                switch (iParam0->_fU4)
                {
                    case 1:
                    PRINTSTRING( "INTERIOR_CROWD" );
                    break;
                    case 2:
                    PRINTSTRING( "EXTERIOR_CROWD" );
                    break;
                    case 13:
                    PRINTSTRING( "REFUSED_ENTRY" );
                    break;
                    case 4:
                    PRINTSTRING( "INTERIOR_PATROL" );
                    break;
                    case 5:
                    PRINTSTRING( "INTERIOR_STAFF" );
                    break;
                    case 14:
                    PRINTSTRING( "JONI" );
                    break;
                    case 6:
                    PRINTSTRING( "BOTH_PATROL" );
                    break;
                    case 7:
                    PRINTSTRING( "STAIRWELL_PED" );
                    break;
                    case 8:
                    PRINTSTRING( "INTERIOR_BOUNCER" );
                    break;
                    case 9:
                    PRINTSTRING( "EXTERIOR_BOUNCER" );
                    break;
                    case 10:
                    PRINTSTRING( "INTERIOR_DANCER" );
                    break;
                    case 12:
                    PRINTSTRING( "SPECIFIC_DANCER" );
                    break;
                }
                PRINTSTRING( ", iClubPedBeingProcessed = " );
                PRINTINT( l_U1951 );
                PRINTSTRING( ", iTotalPeds = " );
                PRINTINT( l_U1940 );
                PRINTNL();
            }
        }
        else if (iParam0->_fU4 == 14)
        {
            if (DOES_OBJECT_EXIST( l_U1997 ))
            {
                DELETE_OBJECT( ref l_U1997 );
            }
        }
    }
    return;
}

int sub_2334(unknown uParam0)
{
    unknown uVar3;

    if (sub_2345( uParam0 ))
    {
        uVar3 = sub_2416( uParam0 );
        return g_U30132[uVar3];
    }
    return 0;
}

int sub_2345(int iParam0)
{
    int I;

    for ( I = 0; I < 11; I++ )
    {
        if (g_U29971[I]._fU12 == iParam0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_2416(int iParam0)
{
    int Result;

    if (sub_2345( iParam0 ))
    {
        for ( Result = 0; Result < 11; Result++ )
        {
            if (g_U29971[Result]._fU12 == iParam0)
            {
                return Result;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "GET_CLUBPED_GLOBAL_SLOT_NUMBER - ped is not a global clubped!" );
    }
    return -1;
}

void sub_2704()
{
    CREATE_OBJECT( 159317168, -473.08840000, 145.66880000, 8.85860000, ref l_U1997, 1 );
    SET_OBJECT_HEADING( l_U1997, 294.49840000 - 180 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1997, "E2_MaisonsecurRoom" );
    FREEZE_OBJECT_POSITION( l_U1997, 1 );
    return;
}

int sub_3003(unknown uParam0)
{
    switch (uParam0)
    {
        case 2:
        return 1;
        break;
        default:
    }
    switch (l_U1938)
    {
        case 2:
        switch (uParam0)
        {
            case 71:
            case 72:
            case 81:
            case 82:
            case 41:
            case 42:
            return 1;
            break;
        }
        break;
        case 1:
        switch (uParam0)
        {
            case 34:
            case 35:
            case 43:
            case 44:
            case 45:
            case 46:
            case 52:
            case 53:
            case 56:
            return 1;
            break;
        }
        break;
        case 0:
        switch (uParam0)
        {
            case 31:
            case 32:
            case 33:
            case 34:
            case 35:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
            case 43:
            return 1;
            break;
        }
        break;
    }
    return 0;
}

void sub_3604()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3813(unknown uParam0)
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

int sub_3889(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_3917( uParam0, uParam1 ))
        {
            return 1;
        }
        switch (uParam1)
        {
            case 0:
            if (bParam2)
            {
                if ((LOCATE_CHAR_ON_FOOT_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 )) || ((IS_CHAR_ON_ANY_BIKE( uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
                {
                    return 1;
                }
            }
            break;
            case 1:
            if (bParam2)
            {
                if ((LOCATE_CHAR_ON_FOOT_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 )) || ((IS_CHAR_ON_ANY_BIKE( uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
                {
                    return 1;
                }
            }
            break;
            case 2:
            if (bParam2)
            {
                if ((LOCATE_CHAR_ON_FOOT_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 )) || ((IS_CHAR_ON_ANY_BIKE( uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
                {
                    return 1;
                }
            }
            break;
        }
    }
    return 0;
}

int sub_3917(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        switch (uParam1)
        {
            case 0:
            GET_INTERIOR_AT_COORDS( -395.22000000, 400.50000000, 14.40000000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 1:
            GET_INTERIOR_AT_COORDS( -483.90180000, 149.43310000, 7.56070000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 2:
            GET_INTERIOR_AT_COORDS( -431.82560000, 351.76230000, 11.71660000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            if (IS_CHAR_IN_AREA_3D( sub_3604(), -438.84750000, 349.78630000, 9.59170000, -436.09750000, 353.78630000, 14.46670000, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

void sub_5665()
{
    g_U30093[l_U1938] = 0;
    g_U30145[l_U1938] = 0;
    return;
}

void sub_6228()
{
    if (NOT (HAS_SOUND_FINISHED( l_U1972 )))
    {
        STOP_SOUND( l_U1972 );
    }
    RELEASE_SOUND_ID( l_U1972 );
    l_U1972 = -1;
    l_U1967 = 0;
    return;
}

int sub_6458(vector vParam0)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    uVar5 = {(vector( 5.10000000, 425.76000000, -393.78000000)) - vParam0};
    if ((VMAG( uVar5 )) < 20.00000000)
    {
        PRINTSTRING( "GET_NEAREST_NIGHTCLUB_FROM_COORDS = CLUB_BAHAMA_MAMAS" );
        PRINTNL();
        return 0;
    }
    uVar5 = {(vector( 7.56070000, 149.43310000, -483.90180000)) - vParam0};
    if ((VMAG( uVar5 )) < 20.00000000)
    {
        PRINTSTRING( "GET_NEAREST_NIGHTCLUB_FROM_COORDS = CLUB_MAISONETTE_9" );
        PRINTNL();
        return 1;
    }
    uVar5 = {(vector( 11.71660000, 351.76230000, -431.82560000)) - vParam0};
    if ((VMAG( uVar5 )) < 20.00000000)
    {
        PRINTSTRING( "GET_NEAREST_NIGHTCLUB_FROM_COORDS = CLUB_HERCULES" );
        PRINTNL();
        return 2;
    }
    PRINTSTRING( "GET_NEAREST_NIGHTCLUB_FROM_COORDS = not recognised" );
    PRINTNL();
    return -1;
}

void sub_7008()
{
    l_U1716[18]._fU0 = "F_DANCE_A";
    l_U1716[19]._fU0 = "F_DANCE_B";
    l_U1716[20]._fU0 = "FEMALE_PAIRED_HE_A";
    l_U1716[21]._fU0 = "HIGH_ENERGY_A";
    l_U1716[22]._fU0 = "HIGH_ENERGY_B";
    l_U1716[23]._fU0 = "HIGH_ENERGY_C";
    l_U1716[24]._fU0 = "HIGH_ENERGY_D";
    l_U1716[25]._fU0 = "HIGH_ENERGY_E";
    l_U1716[26]._fU0 = "MALE_PAIRED_HE_A";
    l_U1716[27]._fU0 = "CHAT_CHATA";
    l_U1716[28]._fU0 = "CHIT_CHATA";
    l_U1716[29]._fU0 = "DJ_IDLE_LOOP";
    l_U1716[30]._fU0 = "F_STAND_A";
    l_U1716[31]._fU0 = "FEMALE_COUCH_RIGHT";
    l_U1716[32]._fU0 = "FEMALE_SITTING_FLIRT";
    l_U1716[33]._fU0 = "FEMALE_SITTING_FRIENDS";
    l_U1716[34]._fU0 = "FEMALE_STOOL_ALONE";
    l_U1716[35]._fU0 = "FEMALE_STOOL_CHAT";
    l_U1716[36]._fU0 = "M_BAR_LEAN_A";
    l_U1716[37]._fU0 = "MALE_COUCH_LEFT";
    l_U1716[38]._fU0 = "MALE_COUCH_RIGHT";
    l_U1716[39]._fU0 = "MALE_SITTING_FLIRT";
    l_U1716[40]._fU0 = "MALE_SITTING_FRIENDS";
    l_U1716[41]._fU0 = "MALE_STOOL_CHAT";
    l_U1716[42]._fU0 = "MALE_CHAIR_CHAT";
    l_U1716[43]._fU0 = "FEMALE_CHAIR_CHAT";
    l_U1716[44]._fU0 = "F_STAND_B";
    l_U1716[45]._fU0 = "F_STAND_D";
    l_U126._fU4 = {-397.01410000, 421.93430000, 5.17430000};
    l_U126._fU16 = {-388.38910000, 429.25930000, 8.17430000};
    l_U126._fU28 = {-400.14460000, 421.41130000, 5.17440000};
    l_U126._fU40 = {-387.99460000, 429.36130000, 8.17440000};
    l_U126._fU0 = 1;
    GET_WEAPONTYPE_MODEL( 12, ref l_U1984[0] );
    GET_WEAPONTYPE_MODEL( 7, ref l_U1984[1] );
    l_U1987 = 1756785265;
    l_U1988 = 982077731;
    l_U1989 = 1758965191;
    l_U1991 = -844218756;
    l_U1992 = -1684055465;
    l_U1993 = -1696530209;
    g_U30214 = l_U1988;
    g_U30215 = l_U1989;
    g_U30216 = l_U1991;
    g_U30217 = l_U1992;
    l_U139[0]._fU0 = 1;
    l_U139[0]._fU52 = 1;
    l_U139[0]._fU4 = 6;
    l_U139[0]._fU56 = 0;
    l_U139[0]._fU28 = {-391.04790000, 397.21000000, 8.39000000};
    l_U139[0]._fU40 = 270.00000000;
    l_U139[1]._fU0 = 1;
    l_U139[1]._fU52 = 2;
    l_U139[1]._fU4 = 6;
    l_U139[1]._fU56 = 0;
    l_U139[1]._fU28 = {-387.62510000, 408.97380000, 4.66940000};
    l_U139[1]._fU40 = 331.45760000;
    l_U139[2]._fU0 = 1;
    l_U139[2]._fU52 = 1;
    l_U139[2]._fU4 = 4;
    l_U139[2]._fU56 = 0;
    l_U139[2]._fU28 = {-384.49440000, 418.84850000, 5.16940000};
    l_U139[2]._fU40 = 38.05010000;
    l_U139[3]._fU0 = 1;
    l_U139[3]._fU52 = 1;
    l_U139[3]._fU4 = 4;
    l_U139[3]._fU56 = 0;
    l_U139[3]._fU28 = {-385.66170000, 431.49510000, 5.16940000};
    l_U139[3]._fU40 = 354.64310000;
    l_U139[4]._fU0 = 1;
    l_U139[4]._fU52 = 1;
    l_U139[4]._fU4 = 4;
    l_U139[4]._fU56 = 0;
    l_U139[4]._fU28 = {-394.70620000, 436.17590000, 5.16940000};
    l_U139[4]._fU40 = 236.63510000;
    l_U139[5]._fU0 = 1;
    l_U139[5]._fU52 = 2;
    l_U139[5]._fU4 = 4;
    l_U139[5]._fU56 = 0;
    l_U139[5]._fU28 = {-395.88070000, 404.25770000, 4.66940000};
    l_U139[5]._fU40 = 232.63690000;
    l_U139[6]._fU0 = 1;
    l_U139[6]._fU52 = 2;
    l_U139[6]._fU4 = 4;
    l_U139[6]._fU56 = 0;
    l_U139[6]._fU28 = {-388.20230000, 411.63030000, 4.66940000};
    l_U139[6]._fU40 = 35.95910000;
    l_U139[7]._fU0 = 1;
    l_U139[7]._fU52 = 2;
    l_U139[7]._fU4 = 1;
    l_U139[7]._fU56 = 24;
    l_U139[7]._fU28 = {-389.01100000, 408.56960000, 4.66940000};
    l_U139[7]._fU40 = 63.55610000;
    l_U139[8]._fU0 = 1;
    l_U139[8]._fU52 = 8;
    l_U139[8]._fU4 = 8;
    l_U139[8]._fU56 = 0;
    l_U139[8]._fU28 = {-389.04280000, 402.24190000, 5.67430000};
    l_U139[8]._fU40 = 16.38000000;
    l_U139[9]._fU0 = 1;
    l_U139[9]._fU52 = 8;
    l_U139[9]._fU4 = 8;
    l_U139[9]._fU56 = 0;
    l_U139[9]._fU28 = {-384.19330000, 408.29870000, 5.67430000};
    l_U139[9]._fU40 = 105.00000000;
    l_U139[10]._fU0 = 1;
    l_U139[10]._fU52 = 8;
    l_U139[10]._fU4 = 8;
    l_U139[10]._fU56 = 0;
    l_U139[10]._fU28 = {-384.77300000, 421.33200000, 6.17440000};
    l_U139[10]._fU40 = 104.00000000;
    l_U139[11]._fU0 = 1;
    l_U139[11]._fU52 = 8;
    l_U139[11]._fU4 = 8;
    l_U139[11]._fU56 = 0;
    l_U139[11]._fU28 = {-383.75180000, 435.71690000, 6.17440000};
    l_U139[11]._fU40 = 83.60000000;
    l_U139[12]._fU0 = 1;
    l_U139[12]._fU52 = 8;
    l_U139[12]._fU4 = 8;
    l_U139[12]._fU56 = 0;
    l_U139[12]._fU28 = {-397.10420000, 435.85310000, 5.16940000};
    l_U139[12]._fU40 = 263.34670000;
    l_U139[13]._fU0 = 1;
    l_U139[13]._fU52 = 8;
    l_U139[13]._fU4 = 8;
    l_U139[13]._fU56 = 0;
    l_U139[13]._fU28 = {-384.14320000, 429.80620000, 5.16930000};
    l_U139[13]._fU40 = 135.17860000;
    l_U139[14]._fU0 = 1;
    l_U139[14]._fU52 = 8;
    l_U139[14]._fU4 = 8;
    l_U139[14]._fU56 = 0;
    l_U139[14]._fU28 = {-387.05590000, 417.40430000, 4.66940000};
    l_U139[14]._fU40 = 180.00000000;
    l_U139[15]._fU0 = 1;
    l_U139[15]._fU52 = 1;
    l_U139[15]._fU4 = 10;
    l_U139[15]._fU56 = 18;
    l_U139[15]._fU28 = {-391.85550000, 423.29750000, 5.16930000};
    l_U139[15]._fU40 = 40.68000000;
    l_U139[16]._fU0 = 1;
    l_U139[16]._fU52 = 2;
    l_U139[16]._fU4 = 10;
    l_U139[16]._fU56 = 21;
    l_U139[16]._fU28 = {-391.20290000, 424.40800000, 5.16930000};
    l_U139[16]._fU40 = 345.60000000;
    l_U139[17]._fU0 = 1;
    l_U139[17]._fU52 = 1;
    l_U139[17]._fU4 = 10;
    l_U139[17]._fU56 = 19;
    l_U139[17]._fU28 = {-390.46270000, 425.23540000, 5.16930000};
    l_U139[17]._fU40 = 152.00000000;
    l_U139[18]._fU0 = 1;
    l_U139[18]._fU52 = 1;
    l_U139[18]._fU4 = 10;
    l_U139[18]._fU56 = 18;
    l_U139[18]._fU28 = {-390.45980000, 426.63090000, 5.16930000};
    l_U139[18]._fU40 = 146.52000000;
    l_U139[19]._fU0 = 1;
    l_U139[19]._fU52 = 2;
    l_U139[19]._fU4 = 10;
    l_U139[19]._fU56 = 24;
    l_U139[19]._fU28 = {-392.50690000, 423.82910000, 5.16930000};
    l_U139[19]._fU40 = 220.00000000;
    l_U139[20]._fU0 = 1;
    l_U139[20]._fU52 = 1;
    l_U139[20]._fU4 = 10;
    l_U139[20]._fU56 = 18;
    l_U139[20]._fU28 = {-393.50130000, 422.79770000, 5.16930000};
    l_U139[20]._fU40 = 174.60000000;
    l_U139[21]._fU0 = 1;
    l_U139[21]._fU52 = 1;
    l_U139[21]._fU4 = 10;
    l_U139[21]._fU56 = 20;
    l_U139[21]._fU28 = {-391.63970000, 425.45600000, 5.16930000};
    l_U139[21]._fU40 = 236.00000000;
    l_U139[22]._fU0 = 1;
    l_U139[22]._fU52 = 2;
    l_U139[22]._fU4 = 10;
    l_U139[22]._fU56 = 22;
    l_U139[22]._fU28 = {-392.70530000, 426.73640000, 5.16930000};
    l_U139[22]._fU40 = 66.96000000;
    l_U139[23]._fU0 = 1;
    l_U139[23]._fU52 = 1;
    l_U139[23]._fU4 = 10;
    l_U139[23]._fU56 = 19;
    l_U139[23]._fU28 = {-394.55240000, 422.38840000, 5.16930000};
    l_U139[23]._fU40 = 253.08000000;
    l_U139[24]._fU0 = 1;
    l_U139[24]._fU52 = 1;
    l_U139[24]._fU4 = 10;
    l_U139[24]._fU56 = 18;
    l_U139[24]._fU28 = {-389.55110000, 419.67430000, 6.21290000};
    l_U139[24]._fU40 = 0.00000000;
    l_U139[25]._fU0 = 1;
    l_U139[25]._fU52 = 2;
    l_U139[25]._fU4 = 10;
    l_U139[25]._fU56 = 26;
    l_U139[25]._fU28 = {-389.49010000, 426.01370000, 5.17790000};
    l_U139[25]._fU40 = 69.48000000;
    l_U139[26]._fU0 = 1;
    l_U139[26]._fU52 = 1;
    l_U139[26]._fU4 = 10;
    l_U139[26]._fU56 = 20;
    l_U139[26]._fU28 = {-393.72930000, 426.95980000, 5.16930000};
    l_U139[26]._fU40 = 250.00000000;
    l_U139[27]._fU0 = 1;
    l_U139[27]._fU52 = 1;
    l_U139[27]._fU4 = 10;
    l_U139[27]._fU56 = 20;
    l_U139[27]._fU28 = {-395.36200000, 423.09150000, 5.16930000};
    l_U139[27]._fU40 = 60.00000000;
    l_U139[28]._fU0 = 1;
    l_U139[28]._fU52 = 2;
    l_U139[28]._fU4 = 10;
    l_U139[28]._fU56 = 26;
    l_U139[28]._fU28 = {-396.29380000, 423.50200000, 5.16930000};
    l_U139[28]._fU40 = 235.80000000;
    l_U139[29]._fU0 = 1;
    l_U139[29]._fU52 = 1;
    l_U139[29]._fU4 = 10;
    l_U139[29]._fU56 = 18;
    l_U139[29]._fU28 = {-395.65610000, 425.90070000, 5.16930000};
    l_U139[29]._fU40 = 318.00000000;
    l_U139[30]._fU0 = 1;
    l_U139[30]._fU52 = 1;
    l_U139[30]._fU4 = 10;
    l_U139[30]._fU56 = 19;
    l_U139[30]._fU28 = {-395.29690000, 426.95800000, 5.16930000};
    l_U139[30]._fU40 = 199.44000000;
    l_U139[31]._fU0 = 1;
    l_U139[31]._fU52 = 1;
    l_U139[31]._fU4 = 4;
    l_U139[31]._fU56 = 0;
    l_U139[31]._fU28 = {-394.98610000, 429.49090000, 5.16930000};
    l_U139[31]._fU40 = 181.35920000;
    l_U139[32]._fU0 = 1;
    l_U139[32]._fU52 = 1;
    l_U139[32]._fU4 = 4;
    l_U139[32]._fU56 = 0;
    l_U139[32]._fU28 = {-387.00000000, 425.08120000, 5.16930000};
    l_U139[32]._fU40 = 194.00000000;
    l_U139[33]._fU0 = 1;
    l_U139[33]._fU52 = 1;
    l_U139[33]._fU4 = 4;
    l_U139[33]._fU56 = 0;
    l_U139[33]._fU28 = {-387.00000000, 426.60430000, 5.16930000};
    l_U139[33]._fU40 = 219.00000000;
    l_U139[34]._fU0 = 1;
    l_U139[34]._fU52 = 1;
    l_U139[34]._fU4 = 4;
    l_U139[34]._fU56 = 0;
    l_U139[34]._fU28 = {-387.00000000, 428.35090000, 5.16930000};
    l_U139[34]._fU40 = 31.00000000;
    l_U139[35]._fU0 = 1;
    l_U139[35]._fU52 = 1;
    l_U139[35]._fU4 = 1;
    l_U139[35]._fU56 = 27;
    l_U139[35]._fU28 = {-390.14330000, 415.10960000, 4.80930000};
    l_U139[35]._fU40 = 52.92000000;
    l_U139[36]._fU0 = 1;
    l_U139[36]._fU52 = 1;
    l_U139[36]._fU4 = 1;
    l_U139[36]._fU56 = 6;
    l_U139[36]._fU28 = {-386.77920000, 413.16270000, 4.66930000};
    l_U139[36]._fU40 = 37.20480000;
    l_U139[37]._fU0 = 1;
    l_U139[37]._fU52 = 2;
    l_U139[37]._fU4 = 1;
    l_U139[37]._fU56 = 7;
    l_U139[37]._fU28 = {-386.78250000, 414.40230000, 4.66930000};
    l_U139[37]._fU40 = 152.29390000;
    l_U139[38]._fU0 = 1;
    l_U139[38]._fU52 = 1;
    l_U139[38]._fU4 = 1;
    l_U139[38]._fU56 = 27;
    l_U139[38]._fU28 = {-392.92450000, 405.82360000, 4.75930000};
    l_U139[38]._fU40 = 319.32000000;
    l_U139[39]._fU0 = 1;
    l_U139[39]._fU52 = 2;
    l_U139[39]._fU4 = 1;
    l_U139[39]._fU56 = 36;
    l_U139[39]._fU28 = {-391.86220000, 406.19630000, 4.66930000};
    l_U139[39]._fU40 = 111.96000000;
    l_U139[40]._fU0 = 1;
    l_U139[40]._fU52 = 1;
    l_U139[40]._fU4 = 1;
    l_U139[40]._fU56 = 30;
    l_U139[40]._fU28 = {-395.49700000, 405.29820000, 4.66930000};
    l_U139[40]._fU40 = 248.04000000;
    l_U139[41]._fU0 = 1;
    l_U139[41]._fU52 = 2;
    l_U139[41]._fU4 = 1;
    l_U139[41]._fU56 = 7;
    l_U139[41]._fU28 = {-394.52100000, 405.23370000, 4.66940000};
    l_U139[41]._fU40 = 113.76000000;
    l_U139[42]._fU0 = 1;
    l_U139[42]._fU52 = 2;
    l_U139[42]._fU4 = 1;
    l_U139[42]._fU56 = 41;
    l_U139[42]._fU28 = {-389.98100000, 408.10600000, 4.66000000};
    l_U139[42]._fU40 = 122.76000000;
    l_U139[43]._fU0 = 1;
    l_U139[43]._fU52 = 2;
    l_U139[43]._fU4 = 1;
    l_U139[43]._fU56 = 41;
    l_U139[43]._fU28 = {-389.42860000, 409.54310000, 4.73000000};
    l_U139[43]._fU40 = 22.32000000;
    l_U139[44]._fU0 = 1;
    l_U139[44]._fU52 = 1;
    l_U139[44]._fU4 = 1;
    l_U139[44]._fU56 = 35;
    l_U139[44]._fU28 = {-389.22860000, 410.84560000, 4.66000000};
    l_U139[44]._fU40 = 146.00000000;
    l_U139[45]._fU0 = 1;
    l_U139[45]._fU52 = 1;
    l_U139[45]._fU4 = 1;
    l_U139[45]._fU56 = 33;
    l_U139[45]._fU28 = {-382.28130000, 406.19760000, 4.73000000};
    l_U139[45]._fU40 = 138.25840000;
    l_U139[46]._fU0 = 1;
    l_U139[46]._fU52 = 2;
    l_U139[46]._fU4 = 1;
    l_U139[46]._fU56 = 40;
    l_U139[46]._fU28 = {-382.37060000, 403.80470000, 4.70000000};
    l_U139[46]._fU40 = 38.52000000;
    l_U139[47]._fU0 = 1;
    l_U139[47]._fU52 = 2;
    l_U139[47]._fU4 = 1;
    l_U139[47]._fU56 = 40;
    l_U139[47]._fU28 = {-383.83460000, 406.55130000, 4.65000000};
    l_U139[47]._fU40 = 186.33230000;
    l_U139[48]._fU0 = 1;
    l_U139[48]._fU52 = 1;
    l_U139[48]._fU4 = 1;
    l_U139[48]._fU56 = 40;
    l_U139[48]._fU28 = {-383.47850000, 413.10380000, 4.70000000};
    l_U139[48]._fU40 = 300.96000000;
    l_U139[49]._fU0 = 1;
    l_U139[49]._fU52 = 2;
    l_U139[49]._fU4 = 1;
    l_U139[49]._fU56 = 40;
    l_U139[49]._fU28 = {-382.47570000, 415.05090000, 4.70000000};
    l_U139[49]._fU40 = 152.64000000;
    l_U139[50]._fU0 = 1;
    l_U139[50]._fU52 = 2;
    l_U139[50]._fU4 = 1;
    l_U139[50]._fU56 = 39;
    l_U139[50]._fU28 = {-381.61680000, 426.90890000, 5.15000000};
    l_U139[50]._fU40 = 181.08000000;
    l_U139[51]._fU0 = 1;
    l_U139[51]._fU52 = 1;
    l_U139[51]._fU4 = 1;
    l_U139[51]._fU56 = 33;
    l_U139[51]._fU28 = {-380.08210000, 425.20180000, 5.20000000};
    l_U139[51]._fU40 = 50.14430000;
    l_U139[52]._fU0 = 1;
    l_U139[52]._fU52 = 1;
    l_U139[52]._fU4 = 1;
    l_U139[52]._fU56 = 32;
    l_U139[52]._fU28 = {-380.78480000, 426.74710000, 5.23850000};
    l_U139[52]._fU40 = 144.36000000;
    l_U139[53]._fU0 = 1;
    l_U139[53]._fU52 = 1;
    l_U139[53]._fU4 = 1;
    l_U139[53]._fU56 = 33;
    l_U139[53]._fU28 = {-391.33700000, 431.96600000, 5.16900000};
    l_U139[53]._fU40 = 288.72000000;
    l_U139[54]._fU0 = 1;
    l_U139[54]._fU52 = 1;
    l_U139[54]._fU4 = 1;
    l_U139[54]._fU56 = 44;
    l_U139[54]._fU28 = {-395.23870000, 404.53760000, 4.66940000};
    l_U139[54]._fU40 = 335.52000000;
    l_U139[55]._fU0 = 1;
    l_U139[55]._fU52 = 2;
    l_U139[55]._fU4 = 1;
    l_U139[55]._fU56 = 7;
    l_U139[55]._fU28 = {-396.51700000, 403.39790000, 4.66940000};
    l_U139[55]._fU40 = 296.62660000;
    l_U139[56]._fU0 = 1;
    l_U139[56]._fU52 = 2;
    l_U139[56]._fU4 = 1;
    l_U139[56]._fU56 = 28;
    l_U139[56]._fU28 = {-393.91780000, 405.86800000, 4.66940000};
    l_U139[56]._fU40 = 20.16000000;
    l_U139[57]._fU0 = 1;
    l_U139[57]._fU52 = 2;
    l_U139[57]._fU4 = 1;
    l_U139[57]._fU56 = 38;
    l_U139[57]._fU28 = {-379.89320000, 413.18570000, 4.66940000};
    l_U139[57]._fU40 = 81.36000000;
    l_U139[58]._fU0 = 1;
    l_U139[58]._fU52 = 2;
    l_U139[58]._fU4 = 1;
    l_U139[58]._fU56 = 7;
    l_U139[58]._fU28 = {-387.34160000, 405.36480000, 4.66940000};
    l_U139[58]._fU40 = 34.56000000;
    l_U139[59]._fU0 = 1;
    l_U139[59]._fU52 = 2;
    l_U139[59]._fU4 = 1;
    l_U139[59]._fU56 = 7;
    l_U139[59]._fU28 = {-387.93870000, 406.06980000, 4.66940000};
    l_U139[59]._fU40 = 217.80000000;
    l_U139[60]._fU0 = 1;
    l_U139[60]._fU52 = 2;
    l_U139[60]._fU4 = 1;
    l_U139[60]._fU56 = 7;
    l_U139[60]._fU28 = {-385.34370000, 409.21570000, 4.66940000};
    l_U139[60]._fU40 = 5.60000000;
    l_U139[61]._fU0 = 1;
    l_U139[61]._fU52 = 1;
    l_U139[61]._fU4 = 1;
    l_U139[61]._fU56 = 6;
    l_U139[61]._fU28 = {-385.31200000, 410.23010000, 4.66940000};
    l_U139[61]._fU40 = 181.87950000;
    l_U139[62]._fU0 = 1;
    l_U139[62]._fU52 = 2;
    l_U139[62]._fU4 = 1;
    l_U139[62]._fU56 = 28;
    l_U139[62]._fU28 = {-389.55900000, 437.82400000, 5.16900000};
    l_U139[62]._fU40 = 13.26530000;
    l_U139[63]._fU0 = 1;
    l_U139[63]._fU52 = 1;
    l_U139[63]._fU4 = 1;
    l_U139[63]._fU56 = 27;
    l_U139[63]._fU28 = {-391.52000000, 437.78900000, 5.29000000};
    l_U139[63]._fU40 = 360.00000000;
    l_U139[64]._fU0 = 1;
    l_U139[64]._fU52 = 2;
    l_U139[64]._fU4 = 1;
    l_U139[64]._fU56 = 36;
    l_U139[64]._fU28 = {-390.50810000, 416.26580000, 4.66930000};
    l_U139[64]._fU40 = 189.00000000;
    l_U139[65]._fU0 = 1;
    l_U139[65]._fU52 = 1;
    l_U139[65]._fU4 = 1;
    l_U139[65]._fU56 = 34;
    l_U139[65]._fU28 = {-390.73200000, 406.70300000, 4.73800000};
    l_U139[65]._fU40 = 22.32000000;
    l_U139[66]._fU0 = 1;
    l_U139[66]._fU52 = 1;
    l_U139[66]._fU4 = 1;
    l_U139[66]._fU56 = 31;
    l_U139[66]._fU28 = {-379.82020000, 413.69920000, 4.74940000};
    l_U139[66]._fU40 = 78.27550000;
    l_U139[67]._fU0 = 1;
    l_U139[67]._fU52 = 1;
    l_U139[67]._fU4 = 1;
    l_U139[67]._fU56 = 21;
    l_U139[67]._fU28 = {-390.25300000, 423.63430000, 5.18940000};
    l_U139[67]._fU40 = 209.52000000;
    l_U139[68]._fU0 = 1;
    l_U139[68]._fU52 = 2;
    l_U139[68]._fU4 = 1;
    l_U139[68]._fU56 = 26;
    l_U139[68]._fU28 = {-389.63930000, 423.23390000, 5.16940000};
    l_U139[68]._fU40 = 36.72000000;
    l_U139[69]._fU0 = 1;
    l_U139[69]._fU52 = 1;
    l_U139[69]._fU4 = 1;
    l_U139[69]._fU56 = 22;
    l_U139[69]._fU28 = {-390.94130000, 426.19120000, 5.16940000};
    l_U139[69]._fU40 = 347.76000000;
    l_U139[70]._fU0 = 1;
    l_U139[70]._fU52 = 1;
    l_U139[70]._fU4 = 1;
    l_U139[70]._fU56 = 33;
    l_U139[70]._fU28 = {-388.62500000, 431.84100000, 5.16900000};
    l_U139[70]._fU40 = 111.25000000;
    l_U139[71]._fU0 = 1;
    l_U139[71]._fU52 = 2;
    l_U139[71]._fU4 = 1;
    l_U139[71]._fU56 = 40;
    l_U139[71]._fU28 = {-389.47370000, 433.05080000, 5.16940000};
    l_U139[71]._fU40 = 169.20240000;
    l_U139[72]._fU0 = 1;
    l_U139[72]._fU52 = 2;
    l_U139[72]._fU4 = 5;
    l_U139[72]._fU56 = 29;
    l_U139[72]._fU28 = {-394.12390000, 420.04920000, 5.92240000};
    l_U139[72]._fU40 = 356.37720000;
    l_U139[73]._fU0 = 1;
    l_U139[73]._fU52 = 7;
    l_U139[73]._fU4 = 5;
    l_U139[73]._fU56 = 17;
    l_U139[73]._fU28 = {-391.58610000, 413.09590000, 4.66940000};
    l_U139[73]._fU40 = 276.53030000;
    l_U139[74]._fU0 = 1;
    l_U139[74]._fU52 = 7;
    l_U139[74]._fU4 = 5;
    l_U139[74]._fU56 = 17;
    l_U139[74]._fU28 = {-392.32870000, 408.85370000, 4.66940000};
    l_U139[74]._fU40 = 246.32050000;
    l_U139[75]._fU0 = 1;
    l_U139[75]._fU52 = 7;
    l_U139[75]._fU4 = 5;
    l_U139[75]._fU56 = 17;
    l_U139[75]._fU28 = {-390.91420000, 439.27990000, 5.16930000};
    l_U139[75]._fU40 = 180.00000000;
    l_U139[76]._fU0 = 1;
    l_U139[76]._fU52 = 7;
    l_U139[76]._fU4 = 5;
    l_U139[76]._fU56 = 17;
    l_U139[76]._fU28 = {-394.93840000, 407.75070000, 4.66930000};
    l_U139[76]._fU40 = 154.02300000;
    l_U139[77]._fU0 = 1;
    l_U139[77]._fU52 = 2;
    l_U139[77]._fU4 = 2;
    l_U139[77]._fU56 = 17;
    l_U139[77]._fU28 = {-396.33430000, 396.21220000, 13.40960000};
    l_U139[77]._fU40 = 87.36190000;
    l_U139[78]._fU0 = 1;
    l_U139[78]._fU52 = 1;
    l_U139[78]._fU4 = 2;
    l_U139[78]._fU56 = 3;
    l_U139[78]._fU28 = {-396.51100000, 395.41990000, 13.40960000};
    l_U139[78]._fU40 = 71.43280000;
    l_U139[79]._fU0 = 1;
    l_U139[79]._fU52 = 2;
    l_U139[79]._fU4 = 2;
    l_U139[79]._fU56 = 17;
    l_U139[79]._fU28 = {-395.48210000, 396.05160000, 13.40960000};
    l_U139[79]._fU40 = 94.19700000;
    l_U139[80]._fU0 = 1;
    l_U139[80]._fU52 = 1;
    l_U139[80]._fU4 = 2;
    l_U139[80]._fU56 = 3;
    l_U139[80]._fU28 = {-394.32360000, 395.54360000, 13.40960000};
    l_U139[80]._fU40 = 76.06570000;
    l_U139[81]._fU0 = 1;
    l_U139[81]._fU52 = 2;
    l_U139[81]._fU4 = 2;
    l_U139[81]._fU56 = 17;
    l_U139[81]._fU28 = {-392.63880000, 395.29320000, 13.47290000};
    l_U139[81]._fU40 = 59.67380000;
    l_U139[82]._fU0 = 1;
    l_U139[82]._fU52 = 1;
    l_U139[82]._fU4 = 2;
    l_U139[82]._fU56 = 0;
    l_U139[82]._fU28 = {-392.12340000, 395.99240000, 13.49880000};
    l_U139[82]._fU40 = 80.32940000;
    l_U139[83]._fU0 = 1;
    l_U139[83]._fU52 = 2;
    l_U139[83]._fU4 = 2;
    l_U139[83]._fU56 = 15;
    l_U139[83]._fU28 = {-402.64040000, 397.25730000, 13.40960000};
    l_U139[83]._fU40 = 180.00000000;
    l_U139[84]._fU0 = 1;
    l_U139[84]._fU52 = 1;
    l_U139[84]._fU4 = 2;
    l_U139[84]._fU56 = 15;
    l_U139[84]._fU28 = {-405.52350000, 396.41660000, 13.40960000};
    l_U139[84]._fU40 = 180.00000000;
    l_U139[85]._fU0 = 1;
    l_U139[85]._fU52 = 1;
    l_U139[85]._fU4 = 2;
    l_U139[85]._fU56 = 6;
    l_U139[85]._fU28 = {-402.83070000, 396.01840000, 13.40960000};
    l_U139[85]._fU40 = 350.00000000;
    l_U139[86]._fU0 = 1;
    l_U139[86]._fU52 = 1;
    l_U139[86]._fU4 = 2;
    l_U139[86]._fU56 = 3;
    l_U139[86]._fU28 = {-391.15390000, 395.55200000, 13.54760000};
    l_U139[86]._fU40 = 93.79570000;
    l_U139[87]._fU0 = 1;
    l_U139[87]._fU52 = 2;
    l_U139[87]._fU4 = 2;
    l_U139[87]._fU56 = 7;
    l_U139[87]._fU28 = {-389.56450000, 396.16970000, 13.62740000};
    l_U139[87]._fU40 = 107.91250000;
    l_U139[88]._fU0 = 1;
    l_U139[88]._fU52 = 1;
    l_U139[88]._fU4 = 2;
    l_U139[88]._fU56 = 3;
    l_U139[88]._fU28 = {-390.20920000, 395.28200000, 13.59510000};
    l_U139[88]._fU40 = 80.35660000;
    l_U139[89]._fU0 = 1;
    l_U139[89]._fU52 = 2;
    l_U139[89]._fU4 = 2;
    l_U139[89]._fU56 = 7;
    l_U139[89]._fU28 = {-388.18950000, 395.66350000, 13.69660000};
    l_U139[89]._fU40 = 118.16240000;
    l_U139[90]._fU0 = 1;
    l_U139[90]._fU52 = 1;
    l_U139[90]._fU4 = 2;
    l_U139[90]._fU56 = 6;
    l_U139[90]._fU28 = {-407.10390000, 395.61830000, 13.40960000};
    l_U139[90]._fU40 = 281.80700000;
    l_U139[91]._fU0 = 1;
    l_U139[91]._fU52 = 2;
    l_U139[91]._fU4 = 2;
    l_U139[91]._fU56 = 15;
    l_U139[91]._fU28 = {-405.76250000, 395.33430000, 13.40960000};
    l_U139[91]._fU40 = 29.07190000;
    l_U139[92]._fU0 = 1;
    l_U139[92]._fU52 = 2;
    l_U139[92]._fU4 = 2;
    l_U139[92]._fU56 = 15;
    l_U139[92]._fU28 = {-401.68590000, 395.98670000, 13.40960000};
    l_U139[92]._fU40 = 68.73940000;
    l_U139[93]._fU0 = 1;
    l_U139[93]._fU52 = 1;
    l_U139[93]._fU4 = 2;
    l_U139[93]._fU56 = 15;
    l_U139[93]._fU28 = {-401.86660000, 395.11330000, 13.40960000};
    l_U139[93]._fU40 = 99.05320000;
    l_U139[94]._fU0 = 1;
    l_U139[94]._fU52 = 2;
    l_U139[94]._fU4 = 2;
    l_U139[94]._fU56 = 15;
    l_U139[94]._fU28 = {-403.22750000, 394.99940000, 13.40960000};
    l_U139[94]._fU40 = 252.60580000;
    l_U139[95]._fU0 = 1;
    l_U139[95]._fU52 = 3;
    l_U139[95]._fU4 = 7;
    l_U139[95]._fU56 = 17;
    l_U139[95]._fU28 = {-401.58440000, 398.67580000, 13.41010000};
    l_U139[95]._fU40 = 270.00000000;
    l_U139[96]._fU0 = 1;
    l_U139[96]._fU52 = 1;
    l_U139[96]._fU4 = 7;
    l_U139[96]._fU56 = 13;
    l_U139[96]._fU28 = {-390.25140000, 400.64980000, 10.14000000};
    l_U139[96]._fU40 = 86.45180000;
    l_U139[97]._fU0 = 1;
    l_U139[97]._fU52 = 2;
    l_U139[97]._fU4 = 7;
    l_U139[97]._fU56 = 7;
    l_U139[97]._fU28 = {-390.97570000, 401.09150000, 10.14000000};
    l_U139[97]._fU40 = 240.12000000;
    l_U139[98]._fU0 = 1;
    l_U139[98]._fU52 = 1;
    l_U139[98]._fU4 = 7;
    l_U139[98]._fU56 = 14;
    l_U139[98]._fU28 = {-394.35450000, 396.70440000, 6.64000000};
    l_U139[98]._fU40 = 101.52000000;
    l_U139[99]._fU0 = 1;
    l_U139[99]._fU52 = 2;
    l_U139[99]._fU4 = 7;
    l_U139[99]._fU56 = 7;
    l_U139[99]._fU28 = {-394.43650000, 397.54660000, 6.64000000};
    l_U139[99]._fU40 = 185.65730000;
    l_U139[100]._fU0 = 1;
    l_U139[100]._fU52 = 4;
    l_U139[100]._fU4 = 7;
    l_U139[100]._fU56 = 3;
    l_U139[100]._fU28 = {-400.23710000, 398.42800000, 13.41010000};
    l_U139[100]._fU40 = 83.99950000;
    l_U139[101]._fU0 = 1;
    l_U139[101]._fU52 = 2;
    l_U139[101]._fU4 = 7;
    l_U139[101]._fU56 = 17;
    l_U139[101]._fU28 = {-399.89290000, 399.33390000, 13.41010000};
    l_U139[101]._fU40 = 101.54500000;
    l_U139[102]._fU0 = 1;
    l_U139[102]._fU52 = 8;
    l_U139[102]._fU4 = 9;
    l_U139[102]._fU56 = 0;
    l_U139[102]._fU28 = {-400.05890000, 396.74810000, 13.40960000};
    l_U139[102]._fU40 = 222.44750000;
    l_U1763[0]._fU0 = {-387.72190000, 436.21850000, 6.17430000};
    l_U1763[0]._fU12 = 25.90000000;
    l_U1763[0]._fU24 = 17;
    l_U1763[0]._fU16 = 0;
    l_U1763[1]._fU0 = {-382.97160000, 425.05880000, 6.17430000};
    l_U1763[1]._fU12 = 312.67240000;
    l_U1763[1]._fU24 = 17;
    l_U1763[1]._fU16 = 0;
    l_U1763[2]._fU0 = {-388.40850000, 422.00150000, 6.17440000};
    l_U1763[2]._fU12 = 58.11370000;
    l_U1763[2]._fU24 = 17;
    l_U1763[2]._fU16 = 0;
    l_U1763[3]._fU0 = {-386.14750000, 409.96160000, 5.68940000};
    l_U1763[3]._fU12 = 241.79470000;
    l_U1763[3]._fU24 = 17;
    l_U1763[3]._fU16 = 0;
    l_U1763[4]._fU0 = {-391.39890000, 404.89540000, 5.67440000};
    l_U1763[4]._fU12 = 43.50090000;
    l_U1763[4]._fU24 = 17;
    l_U1763[4]._fU16 = 0;
    l_U1763[5]._fU0 = {-388.67900000, 411.68370000, 5.67440000};
    l_U1763[5]._fU12 = 62.29760000;
    l_U1763[5]._fU24 = 17;
    l_U1763[5]._fU16 = 0;
    l_U1763[6]._fU0 = {-390.40310000, 429.96910000, 6.17430000};
    l_U1763[6]._fU12 = 50.15960000;
    l_U1763[6]._fU24 = 17;
    l_U1763[6]._fU16 = 0;
    l_U1763[7]._fU0 = {-389.00990000, 430.68380000, 6.17440000};
    l_U1763[7]._fU12 = 15.09300000;
    l_U1763[7]._fU24 = 17;
    l_U1763[7]._fU16 = 0;
    l_U1763[8]._fU0 = {-394.00270000, 436.64470000, 6.17430000};
    l_U1763[8]._fU12 = 4.37270000;
    l_U1763[8]._fU24 = 17;
    l_U1763[8]._fU16 = 0;
    l_U1763[9]._fU0 = {-384.73140000, 411.89710000, 5.67430000};
    l_U1763[9]._fU12 = 305.00000000;
    l_U1763[9]._fU24 = 17;
    l_U1763[9]._fU16 = 0;
    l_U1763[10]._fU0 = {-386.36940000, 407.02400000, 5.67430000};
    l_U1763[10]._fU12 = 260.28210000;
    l_U1763[10]._fU24 = 17;
    l_U1763[10]._fU16 = 0;
    l_U1763[11]._fU0 = {-394.33940000, 404.27030000, 5.67420000};
    l_U1763[11]._fU12 = 11.28860000;
    l_U1763[11]._fU24 = 17;
    l_U1763[11]._fU16 = 0;
    l_U1763[12]._fU0 = {-383.64690000, 425.47640000, 6.17430000};
    l_U1763[12]._fU12 = 303.20000000;
    l_U1763[12]._fU24 = 17;
    l_U1763[12]._fU16 = 0;
    l_U1763[13]._fU0 = {-395.42790000, 435.86020000, 6.17430000};
    l_U1763[13]._fU12 = 193.01510000;
    l_U1763[13]._fU24 = 17;
    l_U1763[13]._fU16 = 0;
    PRINTSTRING( "AmbNightClub - Bahama Mamas, data initialised" );
    PRINTNL();
    return;
}

void sub_19382()
{
    int I;
    int J;
    int iVar4;
    int iVar5;
    unknown uVar6;
    int iVar7;
    unknown uVar8;
    boolean bVar9;
    boolean bVar10;
    int iVar11;

    l_U1945 = 0;
    l_U1946 = 0;
    l_U1943 = 0;
    l_U1944 = 0;
    GET_FRAME_TIME( ref uVar6 );
    l_U1948 = ROUND( uVar6 * 1000.00000000 );
    l_U1949++;
    if (l_U1949 > 9)
    {
        l_U1949 = 0;
    }
    if (l_U1938 == 1)
    {
        if (NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "rocco1" )) == 0))
        {
            g_U30120[l_U1938] = 1;
        }
    }
    if (NOT l_U1903)
    {
        if ((g_U30181) AND (l_U1938 == 0))
        {
            PRINTSTRING( "club locked due to g_bBahamaMamasIsShutDown = TRUE" );
            PRINTNL();
            if (NOT (sub_3889( sub_3604(), 0, 0 )))
            {
                g_U30149[l_U1938] = 1;
                l_U1903 = 1;
            }
        }
        else if (NOT g_U15811[35])
        {
            if ((NOT g_U12379) AND (NOT g_U30153))
            {
                if (NOT (l_U1938 == 2))
                {
                    if (NOT (IS_THREAD_ACTIVE( g_U30226[l_U1938] )))
                    {
                        if (((NOT (sub_19747( sub_3604(), l_U1938, 1094713344 ))) || ((l_U1910) AND (NOT (sub_3889( sub_3604(), l_U1938, 0 ))))) || (g_U30110[l_U1938]))
                        {
                            GET_TIME_OF_DAY( ref iVar7, ref uVar8 );
                            if ((iVar7 >= 6) AND (iVar7 < 21))
                            {
                                PRINTSTRING( "club locked due to time of day" );
                                PRINTNL();
                                g_U30149[l_U1938] = 1;
                                l_U1903 = 1;
                            }
                        }
                    }
                }
            }
        }
        else
        {
            PRINTSTRING( "club locked due to g_flagMissionFlowFlags[MFF_CLUBS_SHUTDOWN] = TRUE" );
            PRINTNL();
            g_U30149[l_U1938] = 1;
            l_U1903 = 1;
        }
    }
    else
    {
        GET_TIME_OF_DAY( ref iVar7, ref uVar8 );
        if (NOT ((g_U30181) AND (l_U1938 == 0)))
        {
            if (NOT g_U15811[35])
            {
                if (((((g_U12379) || (IS_THREAD_ACTIVE( g_U30226[l_U1938] ))) || ((iVar7 >= 21) || (iVar7 < 6))) || (g_U30153)) || (sub_3889( sub_3604(), l_U1938, 0 )))
                {
                    PRINTSTRING( "club opened due to something" );
                    PRINTNL();
                    g_U30149[l_U1938] = 0;
                    l_U1903 = 0;
                    l_U1914 = 0;
                }
            }
        }
    }
    if (((sub_20450( sub_3604(), l_U1938 )) AND (IS_PLAYER_PLAYING( sub_2048() ))) AND (NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "rocco1" )) > 0)))
    {
        sub_21430();
        if (g_U30154[l_U1938])
        {
            if (l_U1894)
            {
                if (HAS_CUTSCENE_FINISHED())
                {
                    PRINTSTRING( "nightclub header - thinks mocap has finished, setting g_bShowClubPedsInCutscene = FALSE for club " );
                    switch (l_U1938)
                    {
                        case 2:
                        PRINTSTRING( "HERCULES" );
                        break;
                        case 0:
                        PRINTSTRING( "BAHAMA_MAMAS" );
                        break;
                        case 1:
                        PRINTSTRING( "MAISONETTE 9" );
                        break;
                    }
                    PRINTNL();
                    g_U30154[l_U1938] = 0;
                }
            }
            else if (HAS_CUTSCENE_LOADED())
            {
                if (NOT HAS_CUTSCENE_FINISHED())
                {
                    l_U1894 = 1;
                }
            }
        }
        else if (l_U1897)
        {
            if (sub_19747( sub_3604(), l_U1938, 20.00000000 ))
            {
                sub_22116( l_U1938, 0 );
                l_U1897 = 0;
            }
        }
        else if (NOT (sub_19747( sub_3604(), l_U1938, 20.00000000 )))
        {
            sub_22116( l_U1938, 1 );
            l_U1897 = 1;
        };;;
        sub_26281();
        sub_26710();
        sub_27576();
        sub_28956();
        sub_29131();
        switch (l_U1937)
        {
            case 0:
            if (sub_3889( sub_3604(), l_U1938, 0 ))
            {
                if ((sub_29981( sub_3604(), l_U1938 )) AND (NOT g_U30093[l_U1938]))
                {
                    if (NOT (sub_30048( sub_3604(), l_U1938 )))
                    {
                        sub_30842();
                        l_U1937 = 1;
                    }
                }
            }
            break;
            case 1:
            if ((NOT (sub_3889( sub_3604(), l_U1938, 0 ))) || (NOT (sub_29981( sub_3604(), l_U1938 ))))
            {
                sub_1798();
                l_U1937 = 0;
            }
            break;
        }
        if ((NOT g_U30149[l_U1938]) || (sub_30766()))
        {
            if ((NOT g_U30120[l_U1938]) || (sub_30766()))
            {
                if (g_U30128[l_U1938])
                {
                    PRINTSTRING( "g_ReloadGlobalClubpeds[] = TRUE" );
                    PRINTNL();
                    for ( I = 0; I < l_U1685; I++ )
                    {
                        if (l_U1685[I]._fU0)
                        {
                            iVar4 = sub_32116( l_U1685[I]._fU24, ref g_U29971 );
                            bVar9 = false;
                            if (NOT (iVar4 == -1))
                            {
                                if (NOT g_U29971[iVar4]._fU0)
                                {
                                    bVar9 = true;
                                }
                            }
                            if (iVar4 == -1)
                            {
                                bVar9 = true;
                            }
                            if (bVar9)
                            {
                                if (DOES_CHAR_EXIST( l_U1685[I]._fU24 ))
                                {
                                    sub_2303( ref l_U1685[I], 0 );
                                }
                                l_U1685[I]._fU24 = nil;
                                l_U1685[I]._fU0 = 0;
                                l_U1685[I]._fU4 = 0;
                                l_U1685[I]._fU28 = {0.00000000, 0.00000000, 0.00000000};
                                l_U1685[I]._fU40 = 0.00000000;
                                l_U1685[I]._fU48 = 0;
                                l_U1685[I]._fU52 = 0;
                                l_U1685[I]._fU56 = 0;
                                l_U1685[I]._fU8 = 0;
                                l_U1685[I]._fU12 = 0;
                                l_U1685[I]._fU16 = 0;
                                l_U1685[I]._fU20 = 0;
                                l_U1685[I]._fU44 = nil;
                            }
                        }
                    }
                    for ( I = 0; I < g_U29971; I++ )
                    {
                        if (g_U29971[I]._fU0)
                        {
                            if (g_U29971[I]._fU8 == l_U1938)
                            {
                                bVar10 = false;
                                for ( J = 0; J < l_U1685; J++ )
                                {
                                    if (DOES_CHAR_EXIST( l_U1685[J]._fU24 ))
                                    {
                                        if (g_U29971[I]._fU12 == l_U1685[J]._fU24)
                                        {
                                            bVar10 = true;
                                        }
                                    }
                                }
                                iVar11 = -1;
                                if (NOT bVar10)
                                {
                                    for ( J = 0; J < l_U1685; J++ )
                                    {
                                        if (l_U1685[J]._fU0 == 0)
                                        {
                                            iVar11 = J;
                                            J = l_U1685;
                                        }
                                    }
                                    if (NOT (iVar11 == -1))
                                    {
                                        l_U1685[iVar11]._fU8 = 0;
                                        l_U1685[iVar11]._fU12 = 0;
                                        l_U1685[iVar11]._fU16 = 0;
                                        l_U1685[iVar11]._fU20 = 0;
                                        l_U1685[iVar11]._fU24 = nil;
                                        l_U1685[iVar11]._fU44 = nil;
                                        l_U1685[iVar11]._fU0 = g_U29971[I]._fU0;
                                        l_U1685[iVar11]._fU4 = g_U29971[I]._fU4;
                                        l_U1685[iVar11]._fU28 = {g_U29971[I]._fU16};
                                        l_U1685[iVar11]._fU40 = g_U29971[I]._fU28;
                                        l_U1685[iVar11]._fU52 = g_U29971[I]._fU36;
                                        l_U1685[iVar11]._fU56 = g_U29971[I]._fU40;
                                        l_U1685[iVar11]._fU48 = g_U29971[I]._fU32;
                                        l_U1954[iVar11] = I;
                                    }
                                    else
                                    {
                                        PRINTSTRING( "g_ClubPEd slot = " );
                                        PRINTINT( I );
                                        PRINTNL();
                                        SCRIPT_ASSERT( "could not find free slot in clubpedsfromglobal" );
                                    }
                                }
                            }
                        }
                    }
                    g_U30128[l_U1938] = 0;
                }
                if (l_U1883)
                {
                    l_U1883 = 0;
                }
                if (NOT l_U1909)
                {
                    if (l_U1873)
                    {
                        STORE_WANTED_LEVEL( sub_2048(), ref iVar5 );
                        if (NOT (l_U1947 == iVar5))
                        {
                            DONT_DISPATCH_COPS_FOR_PLAYER( sub_2048(), 1 );
                            CLEAR_AREA_OF_COPS( l_U2032._fU0, l_U2032._fU4, l_U2032._fU8, 1000.00000000 );
                            l_U1909 = 1;
                            PRINTSTRING( "CLEAR_AREA_OF_COPS - called 2" );
                            PRINTNL();
                        }
                        l_U1947 = iVar5;
                    }
                }
                else if (NOT l_U1873)
                {
                    l_U1909 = 0;
                }
                if (g_U30104)
                {
                    sub_33306();
                    g_U30104 = 0;
                }
                if (l_U1949 == 0)
                {
                    sub_33857();
                }
                sub_34196();
                sub_34865();
                sub_35537();
                sub_36554();
                sub_38275();
                if (g_U30158[l_U1938])
                {
                    if (IS_THREAD_ACTIVE( g_U30230[l_U1938] ))
                    {
                        for ( I = 0; I < l_U1685; I++ )
                        {
                            sub_42544( ref l_U1685[I] );
                        }
                        for ( I = 0; I < l_U139; I++ )
                        {
                            sub_42544( ref l_U139[I] );
                        }
                        l_U1896 = 1;
                    }
                    g_U30158[l_U1938] = 0;
                }
                else if (l_U1896)
                {
                    if (NOT (IS_THREAD_ACTIVE( g_U30230[l_U1938] )))
                    {
                        g_U30251 = {0.00000000, 0.00000000, 0.00000000};
                        g_U30254 = {0.00000000, 0.00000000, 0.00000000};
                    }
                }
                if (g_U30114[l_U1938])
                {
                    PRINTSTRING( "g_bForceReloadOfClubPeds = TRUE - removing peds" );
                    PRINTNL();
                    for ( I = 0; I < l_U1685; I++ )
                    {
                        sub_42661( ref l_U1685[I], 1 );
                    }
                    for ( I = 0; I < l_U139; I++ )
                    {
                        sub_42661( ref l_U139[I], 1 );
                    }
                    if ((IS_SCREEN_FADED_OUT()) || (sub_3889( sub_3604(), l_U1938, 0 )))
                    {
                        sub_31142( l_U2032, 50.00000000, 0 );
                    }
                    sub_43689();
                }
                if (NOT g_U30119)
                {
                    l_U1886 = 1;
                    l_U1877 = 1;
                    for ( l_U1951 = 0; l_U1951 < l_U1685; l_U1951++ )
                    {
                        sub_43934( ref l_U1685[l_U1951] );
                    }
                    l_U1877 = 0;
                    l_U1886 = 0;
                    for ( l_U1951 = 0; l_U1951 < l_U139; l_U1951++ )
                    {
                        sub_43934( ref l_U139[l_U1951] );
                    }
                    sub_71520();
                }
                else if (NOT g_U12379)
                {
                    g_U30119 = 0;
                }
                if (g_U30114[l_U1938])
                {
                    g_U30114[l_U1938] = 0;
                }
                if (g_U30097[l_U1938])
                {
                    if (NOT l_U1888)
                    {
                        PRINTSTRING( "CLUB SCRIPT - g_bReduceClubPeds = TRUE" );
                        PRINTNL();
                        switch (l_U1938)
                        {
                            case 0:
                            sub_72427( ref l_U1685 );
                            sub_72427( ref l_U139 );
                            l_U1941 = 75;
                            break;
                            case 1:
                            for ( I = 0; I < l_U139; I++ )
                            {
                                if (l_U139[I]._fU4 == 8)
                                {
                                    l_U139[I]._fU0 = 0;
                                }
                            }
                            l_U1941 = 75;
                            break;
                            case 2:
                            l_U1941 = 75;
                            break;
                        }
                        l_U1888 = 1;
                    }
                }
                else if (l_U1888)
                {
                    l_U1941 = 85;
                    l_U1888 = 0;
                }
                if (g_U30109)
                {
                    for ( I = 0; I < l_U1685; I++ )
                    {
                        if ((l_U1685[I]._fU4 == 10) || (l_U1685[I]._fU4 == 12))
                        {
                            l_U1685[I]._fU16 = 0;
                        }
                    }
                    for ( I = 0; I < l_U139; I++ )
                    {
                        if ((l_U139[I]._fU4 == 10) || (l_U139[I]._fU4 == 12))
                        {
                            l_U139[I]._fU16 = 0;
                        }
                    }
                    g_U30109 = 0;
                }
                if (NOT (g_U30209 == nil))
                {
                    PRINTSTRING( "g_PedToDelete not NULL" );
                    PRINTNL();
                    for ( I = 0; I < l_U1685; I++ )
                    {
                        if (l_U1685[I]._fU24 == g_U30209)
                        {
                            sub_42661( ref l_U1685[I], 1 );
                            if (NOT (l_U1685[I]._fU4 == 14))
                            {
                                l_U1685[I]._fU20 = 35536;
                            }
                            else
                            {
                                l_U1685[I]._fU20 = 99999;
                                l_U1914 = 0;
                            }
                        }
                    }
                    for ( I = 0; I < l_U139; I++ )
                    {
                        if (l_U139[I]._fU24 == g_U30209)
                        {
                            sub_42661( ref l_U139[I], 1 );
                            if (NOT (l_U139[I]._fU4 == 14))
                            {
                                l_U139[I]._fU20 = 35536;
                            }
                            else
                            {
                                l_U139[I]._fU20 = 99999;
                            }
                        }
                    }
                    g_U30209 = nil;
                }
                if (g_U30110[l_U1938])
                {
                    PRINTSTRING( "g_bWaitingForClubScriptToStreamIn[iThisClub] - calling have_assets_for_Club_loaded..." );
                    PRINTNL();
                    if (l_U1897)
                    {
                        PRINTSTRING( "bClubIsUsingReducedMemory = TRUE" );
                        PRINTNL();
                    }
                    if (sub_73441( l_U1938, l_U1897 ))
                    {
                        if ((l_U1946 == 0) AND (l_U1916))
                        {
                            g_U30110[l_U1938] = 0;
                            l_U1916 = 0;
                        }
                    }
                    if (g_U30110[l_U1938])
                    {
                        if (NOT l_U1916)
                        {
                            for ( I = 0; I < l_U1685; I++ )
                            {
                                l_U1685[I]._fU20 = 99999;
                            }
                            for ( I = 0; I < l_U139; I++ )
                            {
                                l_U139[I]._fU20 = 99999;
                            }
                            l_U1916 = 1;
                        }
                    }
                }
                if (g_U30166)
                {
                    if (NOT (IS_THREAD_ACTIVE( g_U30234 )))
                    {
                        PRINTSTRING( "g_bHideMovingClubPeds - script that was hiding peds is no longer active" );
                        PRINTNL();
                        g_U30166 = 0;
                    }
                }
            }
            else if (g_U12379)
            {
                sub_75720();
            }
            else
            {
                g_U30120[l_U1938] = 0;
            }
        }
        else if ((IS_THREAD_ACTIVE( g_U30226[l_U1938] )) || (l_U1903))
        {
            sub_75720();
            if (g_U30110[l_U1938])
            {
                g_U30110[l_U1938] = 0;
            }
        }
        else
        {
            l_U1914 = 0;
            g_U30149[l_U1938] = 0;
            l_U1903 = 0;
        }
    }
    else
    {
        sub_827();
    }
    if (g_U30179)
    {
        if (NOT (IS_THREAD_ACTIVE( g_U30250 )))
        {
            PRINTSTRING( "g_bDontDoDanceWalk - script that was hiding peds is no longer active" );
            PRINTNL();
            g_U30179 = 0;
        }
    }
    if (l_U1901)
    {
        sub_76327();
        l_U1901 = 0;
    }
    sub_79790();
    if (g_U30197 == l_U1938)
    {
        if ((l_U1904) AND (l_U1966 > 1))
        {
            sub_83594( l_U1938 );
        }
    }
    if (NOT l_U1912)
    {
        if (l_U1938 == 2)
        {
            if (IS_PLAYER_CONTROL_ON( sub_2048() ))
            {
                GET_TIME_OF_DAY( ref iVar7, ref uVar8 );
                if ((iVar7 > 7) AND (iVar7 < 18))
                {
                    if (sub_3889( sub_3604(), l_U1938, 0 ))
                    {
                        if (sub_84308( "E2MF1_GAY", ref l_U2001, 3 ))
                        {
                            l_U1912 = 1;
                        }
                    }
                }
            }
        }
    }
    if (l_U1902)
    {
        if (NOT l_U1915)
        {
            for ( I = 0; I < l_U1685; I++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U1685[I]._fU24 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1685[I]._fU24 );
                }
            }
            for ( I = 0; I < l_U139; I++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U139[I]._fU24 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U139[I]._fU24 );
                }
            }
            l_U1915 = 1;
        }
    }
    else
    {
        l_U1915 = 0;
    }
    if (g_U30124[l_U1938])
    {
        sub_22310( l_U1938 );
        g_U30124[l_U1938] = 0;
    }
    return;
}

int sub_19747(unknown uParam0, unknown uParam1, unknown uParam2)
{
    vector vVar5;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    vVar5 = {sub_19758( uParam1 )};
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_3889( uParam0, uParam1, 0 ))
        {
            return 1;
        }
        else
        {
            GET_CHAR_COORDINATES( uParam0, ref vVar8.x, ref vVar8.y, ref vVar8.z );
            uVar11 = {vVar5 - vVar8};
            uVar11._fU8 = 0.00000000;
            if ((VMAG2( uVar11 )) < (uParam2 * uParam2))
            {
                return 1;
            }
        }
    }
    return 0;
}

vector sub_19758(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return vector( 14.17720000, 397.67000000, -399.10690000);
        break;
        case 1:
        return vector( 9.80000000, 153.41000000, -468.03000000);
        break;
        case 2:
        return vector( 11.54000000, 356.98000000, -440.28000000);
        break;
    }
    return vector( 0.00000000, 0.00000000, 0.00000000);
}

int sub_20450(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = false;
    if (IS_PLAYER_PLAYING( sub_2048() ))
    {
        if (sub_20484( sub_3604() ))
        {
            if (((sub_20724( sub_3604() )) == 5) || ((sub_20724( sub_3604() )) == 3))
            {
                bVar4 = true;
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT bVar4)
        {
            switch (uParam1)
            {
                case 0:
                if ((LOCATE_CHAR_ANY_MEANS_3D( uParam0, -399.02980000, 396.49390000, 13.40960000, 150.00000000, 150.00000000, 50.00000000, 0 )) || (NOT (IS_CHAR_INJURED( g_U30208 ))))
                {
                    return 1;
                }
                break;
                case 1:
                if (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -483.56000000, 153.63000000, 7.55000000, 150.00000000, 150.00000000, 50.00000000, 0 ))
                {
                    return 1;
                }
                break;
                case 2:
                if (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -438.87000000, 355.55000000, 11.93000000, 150.00000000, 150.00000000, 50.00000000, 0 ))
                {
                    return 1;
                }
                break;
            }
        }
        else
        {
            switch (uParam1)
            {
                case 0:
                if ((LOCATE_CHAR_ANY_MEANS_3D( uParam0, -399.02980000, 396.49390000, 13.40960000, 150.00000000, 150.00000000, 150.00000000, 0 )) || (NOT (IS_CHAR_INJURED( g_U30208 ))))
                {
                    return 1;
                }
                break;
                case 1:
                if (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -483.56000000, 153.63000000, 7.55000000, 150.00000000, 150.00000000, 150.00000000, 0 ))
                {
                    return 1;
                }
                break;
                case 2:
                if (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -438.87000000, 355.55000000, 11.93000000, 150.00000000, 150.00000000, 150.00000000, 0 ))
                {
                    return 1;
                }
                break;
            }
        }
    }
    PRINTSTRING( "CLUB NO LONGER WITHIN ACTIVATION RANGE" );
    PRINTNL();
    return 0;
}

int sub_20484(unknown uParam0)
{
    int iVar3;

    if (sub_20493())
    {
        iVar3 = sub_20559( uParam0 );
        if (iVar3 < 0)
        {
            return 0;
        }
        else if (g_U2692[iVar3]._fU60)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
    }
    return 0;
}

int sub_20493()
{
    if ((HAS_MODEL_LOADED( 1490460832 )) AND (HAVE_ANIMS_LOADED( "PARACHUTE" )))
    {
        return 1;
    }
    return 0;
}

int sub_20559(int iParam0)
{
    int Result;

    Result = 0;
    for ( Result = 0; Result < g_U2692; Result++ )
    {
        if (g_U2692[Result]._fU0 == iParam0)
        {
            if (g_U2692[Result]._fU56)
            {
                return Result;
            }
        }
    }
    return -1;
}

int sub_20724(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_20559( uParam0 );
    if (iVar3 >= 0)
    {
        return g_U2692[iVar3]._fU4;
        break;
    }
    SCRIPT_ASSERT( "GET_PARACHUTE_PED_STATE: Ped does not have a parachute equipped." );
    return 0;
}

void sub_21430()
{
    if (NOT l_U1872)
    {
        PRINTSTRING( "INITIALISE_CLUB() - start" );
        PRINTNL();
        sub_21492();
        PRINTSTRING( "INITIALISE_CLUB() - 1" );
        PRINTNL();
        COPY_SHARED_CHAR_DECISION_MAKER( 65539, ref g_U30182 );
        COPY_SHARED_CHAR_DECISION_MAKER( 65539, ref g_U30183 );
        COPY_SHARED_COMBAT_DECISION_MAKER( 65560, ref g_U30184 );
        COPY_SHARED_COMBAT_DECISION_MAKER( 65568, ref g_U30185 );
        sub_5665();
        if (NOT (sub_19747( sub_3604(), l_U1938, 20.00000000 )))
        {
            sub_22116( l_U1938, 1 );
            l_U1897 = 1;
        }
        if (l_U1938 == 1)
        {
            l_U2007[0]._fU0 = {-473.94560000, 159.98590000, 9.67320000};
            l_U2007[1]._fU0 = {-473.93990000, 162.85640000, 9.67420000};
            l_U2007[2]._fU0 = {-473.94610000, 165.78630000, 9.67380000};
            l_U2007[3]._fU0 = {-468.53060000, 158.77260000, 9.67420000};
            l_U2007[4]._fU0 = {-468.53060000, 160.82300000, 9.67420000};
            l_U2007[5]._fU0 = {-469.03140000, 164.52770000, 9.66570000};
        }
        if (l_U1938 == 0)
        {
            g_U30189 = 0;
        }
        sub_1455( l_U1938 );
        if (l_U1938 == 1)
        {
            g_U30198 = sub_23528();
            if (NOT (g_U30198 == -1))
            {
                g_U29971[g_U30198]._fU0 = 1;
                g_U29971[g_U30198]._fU4 = 14;
                g_U29971[g_U30198]._fU8 = 1;
                g_U29971[g_U30198]._fU16 = {-473.14230000, 145.59760000, 8.95000000};
                g_U29971[g_U30198]._fU28 = 324.01530000;
                g_U29971[g_U30198]._fU40 = 2;
                g_U29971[g_U30198]._fU36 = 0;
                g_U29971[g_U30198]._fU32 = -882058861;
            }
            g_U30199 = sub_23528();
            if (NOT (g_U30199 == -1))
            {
                g_U29971[g_U30199]._fU0 = 1;
                g_U29971[g_U30199]._fU8 = 1;
                g_U29971[g_U30199]._fU36 = 9;
                g_U29971[g_U30199]._fU32 = sub_24339( 9 );
                g_U29971[g_U30199]._fU4 = 9;
                g_U29971[g_U30199]._fU16 = {-467.43100000, 152.37370000, 8.86880000};
                g_U29971[g_U30199]._fU28 = 270.00000000;
            }
            g_U30202 = sub_23528();
            if (NOT (g_U30202 == -1))
            {
                g_U29971[g_U30202]._fU0 = 1;
                g_U29971[g_U30202]._fU8 = 1;
                g_U29971[g_U30202]._fU36 = 7;
                g_U29971[g_U30202]._fU32 = sub_24339( 7 );
                g_U29971[g_U30202]._fU4 = 5;
                g_U29971[g_U30202]._fU16 = {-481.30330000, 158.76740000, 6.68390000};
                g_U29971[g_U30202]._fU28 = 157.70500000;
                g_U29971[g_U30202]._fU40 = 17;
            }
            sub_1455( 1 );
        }
        if (l_U1938 == 2)
        {
            g_U30201 = sub_23528();
            if (NOT (g_U30201 == -1))
            {
                g_U29971[g_U30201]._fU0 = 1;
                g_U29971[g_U30201]._fU4 = 5;
                g_U29971[g_U30201]._fU8 = 2;
                g_U29971[g_U30201]._fU16 = {-434.46780000, 354.59100000, 10.71170000};
                g_U29971[g_U30201]._fU28 = 180.00000000;
                g_U29971[g_U30201]._fU40 = 44;
                g_U29971[g_U30201]._fU36 = 0;
                g_U29971[g_U30201]._fU32 = 284474691;
            }
            g_U30200 = sub_23528();
            if (NOT (g_U30200 == -1))
            {
                g_U29971[g_U30200]._fU0 = 1;
                g_U29971[g_U30200]._fU4 = 9;
                g_U29971[g_U30200]._fU8 = 2;
                g_U29971[g_U30200]._fU16 = {-442.04090000, 358.27740000, 10.04620000};
                g_U29971[g_U30200]._fU28 = 106.88260000;
                g_U29971[g_U30200]._fU40 = 0;
                g_U29971[g_U30200]._fU36 = 10;
                g_U29971[g_U30200]._fU32 = sub_24339( 10 );
            }
            g_U30203 = sub_23528();
            if (NOT (g_U30203 == -1))
            {
                g_U29971[g_U30203]._fU0 = 1;
                g_U29971[g_U30203]._fU4 = 10;
                g_U29971[g_U30203]._fU8 = 2;
                g_U29971[g_U30203]._fU16 = {-426.79110000, 351.86660000, 10.90920000};
                g_U29971[g_U30203]._fU28 = 90.00000000;
                g_U29971[g_U30203]._fU40 = 59;
                g_U29971[g_U30203]._fU36 = 2;
            }
            sub_1455( 2 );
        }
        sub_25803();
        l_U1872 = 1;
        l_U1910 = 1;
    }
    else if (l_U1910)
    {
        l_U1910 = 0;
    }
    return;
}

void sub_21492()
{
    l_U1716[0]._fU0 = "null";
    l_U1716[1]._fU0 = "BOUNCER_GREETING";
    l_U1716[2]._fU0 = "FEMALE_CHAIR_ALONE";
    l_U1716[3]._fU0 = "FEMALE_IDLE";
    l_U1716[4]._fU0 = "FEMALE_PUKE";
    l_U1716[5]._fU0 = "FEMALE_SHOCKED";
    l_U1716[6]._fU0 = "FEMALE_STAND_CHAT";
    l_U1716[7]._fU0 = "MALE_STAND_CHAT";
    l_U1716[8]._fU0 = "GIRL_A_ARGUE";
    l_U1716[9]._fU0 = "GIRL_B_ARGUE";
    l_U1716[10]._fU0 = "MALE_PUKE";
    l_U1716[11]._fU0 = "M_DRUNK_A";
    l_U1716[12]._fU0 = "M_DRUNK_B";
    l_U1716[13]._fU0 = "F_STAND_B";
    l_U1716[14]._fU0 = "F_STAND_D";
    l_U1716[15]._fU0 = "Scenario_SmokingOutsideOffice";
    l_U1716[16]._fU0 = "Scenario_Bouncer";
    l_U1716[17]._fU0 = "HangOut_Street";
    return;
}

void sub_22116(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        PRINTSTRING( "SET_CLUB_USES_REDUCED_MEMORY - called TRUE - for " );
        switch (uParam0)
        {
            case 2:
            PRINTSTRING( "HERCULES" );
            break;
            case 0:
            PRINTSTRING( "BAHAMA_MAMAS" );
            break;
            case 1:
            PRINTSTRING( "MAISONETTE 9" );
            break;
        }
        PRINTNL();
        sub_22310( uParam0 );
    }
    else
    {
        PRINTSTRING( "SET_CLUB_USES_REDUCED_MEMORY - called FALSE - for " );
        switch (uParam0)
        {
            case 2:
            PRINTSTRING( "HERCULES" );
            break;
            case 0:
            PRINTSTRING( "BAHAMA_MAMAS" );
            break;
            case 1:
            PRINTSTRING( "MAISONETTE 9" );
            break;
        }
        PRINTNL();
    }
    g_U30162[uParam0] = bParam1;
    return;
}

void sub_22310(unknown uParam0)
{
    REMOVE_ANIMS( "missnightclub" );
    REMOVE_ANIMS( "AMB@SMOKING_F" );
    REMOVE_ANIMS( "AMB@SMOKING" );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -268530289 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -2037134882 );
    switch (uParam0)
    {
        case 0:
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1696530209 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1756785265 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 982077731 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1758965191 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -844218756 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1684055465 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "ambNightclubBM2" );
        REMOVE_ANIMS( "missamb_bama" );
        PRINTSTRING( "UNLOAD_ASSETS_FOR_CLUB - " );
        PRINTSTRING( "BAHAMA MAMAS" );
        PRINTNL();
        break;
        case 1:
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1696530209 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1756785265 );
        sub_22660( g_U30218 );
        sub_22660( g_U30219 );
        sub_22660( g_U30220 );
        sub_22660( g_U30221 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1429700748 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1446884113 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "ambNightclubM92" );
        REMOVE_ANIMS( "missamb_m9" );
        PRINTSTRING( "UNLOAD_ASSETS_FOR_CLUB - " );
        PRINTSTRING( "MAISONETTE_9" );
        PRINTNL();
        break;
        case 2:
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1696530209 );
        sub_22660( g_U30222 );
        sub_22660( g_U30223 );
        sub_22660( g_U30224 );
        sub_22660( g_U30225 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1662473323 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "ambNightclubHC2" );
        REMOVE_ANIMS( "missamb_herc_female" );
        REMOVE_ANIMS( "missamb_herc_male" );
        PRINTSTRING( "UNLOAD_ASSETS_FOR_CLUB - " );
        PRINTSTRING( "HERCULES" );
        PRINTNL();
        break;
    }
    if (NOT g_U30124[uParam0])
    {
        g_U30124[uParam0] = 1;
    }
    return;
}

void sub_22660(int iParam0)
{
    if (NOT (iParam0 == 0))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( iParam0 );
    }
    return;
}

int sub_23528()
{
    int Result;

    PRINTSTRING( "GET_FREE_GLOBAL_CLUBPED_SLOT() - called " );
    PRINTNL();
    for ( Result = 0; Result < 11; Result++ )
    {
        if (g_U29971[Result]._fU0)
        {
            if (NOT (IS_THREAD_ACTIVE( g_U30236[Result] )))
            {
                PRINTSTRING( "GET_FREE_GLOBAL_CLUBPED_SLOT() - calling FREE_UP_GLOBAL_CLUBPED_SLOT because script no longer active, slot = " );
                PRINTINT( Result );
                PRINTNL();
                sub_853( Result );
            }
        }
        if (NOT g_U29971[Result]._fU0)
        {
            g_U29971[Result]._fU4 = 0;
            g_U29971[Result]._fU8 = 0;
            g_U29971[Result]._fU12 = nil;
            g_U29971[Result]._fU16 = {0.00000000, 0.00000000, 0.00000000};
            g_U29971[Result]._fU28 = 0.00000000;
            g_U29971[Result]._fU32 = 0;
            g_U29971[Result]._fU36 = 0;
            g_U29971[Result]._fU40 = 0;
            g_U30236[Result] = GET_ID_OF_THIS_THREAD();
            PRINTSTRING( "GET_FREE_GLOBAL_CLUBPED_SLOT() - returned " );
            PRINTINT( Result );
            PRINTNL();
            return Result;
        }
    }
    SCRIPT_ASSERT( "GET_FREE_GLOBAL_CLUBPED_SLOT() - couldn't find free slot" );
    return -1;
}

int sub_24339(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return 0;
        break;
        case 1:
        return sub_24468( l_U1938, 1 );
        break;
        case 3:
        return l_U1991;
        break;
        case 4:
        return l_U1992;
        break;
        case 2:
        return sub_24468( l_U1938, 0 );
        break;
        case 5:
        return l_U1988;
        break;
        case 6:
        return l_U1989;
        break;
        case 7:
        return l_U1993;
        break;
        case 8:
        return l_U1987;
        break;
        case 9:
        return -1446884113;
        break;
        case 10:
        return 1662473323;
        break;
        case 11:
        return l_U1994;
        break;
    }
    SCRIPT_ASSERT( "GET_MODEL_NAME - unrecognised input" );
    return 0;
}

int sub_24468(unknown uParam0, boolean bParam1)
{
    int iVar4;

    if (bParam1)
    {
        switch (uParam0)
        {
            case 2:
            return g_U30224;
            break;
            case 0:
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar4 );
            if (iVar4 == 0)
            {
                return g_U30216;
            }
            else
            {
                return g_U30217;
            }
            break;
            case 1:
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar4 );
            if (iVar4 == 0)
            {
                return g_U30220;
            }
            else
            {
                return g_U30221;
            }
            break;
        }
    }
    else
    {
        switch (uParam0)
        {
            case 2:
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar4 );
            switch (iVar4)
            {
                case 0:
                return g_U30222;
                break;
                case 1:
                return g_U30223;
                break;
            }
            break;
            case 0:
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar4 );
            if (iVar4 == 0)
            {
                return g_U30214;
            }
            else
            {
                return g_U30215;
            }
            break;
            case 1:
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar4 );
            if (iVar4 == 0)
            {
                return g_U30218;
            }
            else
            {
                return g_U30219;
            }
            break;
        }
    }
    return 0;
}

void sub_25803()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;

    return;
}

void sub_26281()
{
    float fVar2;

    GET_FRAME_TIME( ref fVar2 );
    fVar2 *= 1000.00000000;
    l_U1933 += fVar2;
    if (NOT (IS_CONTROL_PRESSED( 2, 1 )))
    {
        l_U1933 = 0.00000000;
    }
    if (IS_PLAYER_PLAYING( sub_2048() ))
    {
        if ((NOT g_U30153) AND (NOT g_U30179))
        {
            if (NOT l_U1893)
            {
                if ((NOT g_U30093[l_U1938]) AND (NOT l_U1895))
                {
                    if (sub_3917( sub_3604(), l_U1938 ))
                    {
                        SET_CHAR_MAX_MOVE_BLEND_RATIO( sub_3604(), 1.00000000 );
                        l_U1893 = 1;
                    }
                }
            }
            else if ((NOT (sub_3917( sub_3604(), l_U1938 ))) || (g_U30093[l_U1938]))
            {
                SET_CHAR_MAX_MOVE_BLEND_RATIO( sub_3604(), 3.00000000 );
                l_U1893 = 0;
            }
            else if (l_U1933 > 500.00000000)
            {
                SET_CHAR_MAX_MOVE_BLEND_RATIO( sub_3604(), l_U1934 );
            }
            else
            {
                SET_CHAR_MAX_MOVE_BLEND_RATIO( sub_3604(), 1.00000000 );
            }
            if (l_U1895)
            {
                SET_CHAR_MAX_MOVE_BLEND_RATIO( sub_3604(), 3.00000000 );
                l_U1893 = 0;
            }
        }
        else if (l_U1893)
        {
            SET_CHAR_MAX_MOVE_BLEND_RATIO( sub_3604(), 3.00000000 );
            l_U1893 = 0;
        }
    }
    if (IS_PLAYER_PLAYING( sub_2048() ))
    {
        if ((l_U1893) || (l_U1895))
        {
            ;
        }
        else if (NOT g_U30153)
        {
            ;
        }
    }
    return;
}

void sub_26710()
{
    string sVar2;
    boolean bVar3;

    switch (l_U1938)
    {
        case 0:
        case 1:
        case 2:
        sVar2 = "MOVE_PLAYER_CLUB";
        break;
    }
    bVar3 = false;
    switch (l_U1938)
    {
        case 0:
        if (l_U1965 == 3)
        {
            bVar3 = true;
        }
        break;
        case 2:
        if (l_U1965 == 0)
        {
            bVar3 = true;
        }
        break;
        case 1:
        if ((l_U1965 == 5) || (l_U1965 == 7))
        {
            bVar3 = true;
        }
        break;
    }
    if (bVar3)
    {
        if (l_U1933 > 500.00000000)
        {
            bVar3 = false;
        }
    }
    if (IS_PLAYER_PLAYING( sub_2048() ))
    {
        if ((NOT g_U30153) AND (NOT g_U30179))
        {
            if (NOT l_U1895)
            {
                if ((NOT g_U30093[l_U1938]) AND (NOT g_U30153))
                {
                    if (sub_3917( sub_3604(), l_U1938 ))
                    {
                        if (NOT (sub_27010( sub_3604() )))
                        {
                            if (bVar3)
                            {
                                if (sub_27171( sVar2 ))
                                {
                                    BLOCK_CHAR_AMBIENT_ANIMS( sub_3604(), 1 );
                                    SET_ANIM_GROUP_FOR_CHAR( sub_3604(), sVar2 );
                                    l_U1895 = 1;
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                BLOCK_CHAR_AMBIENT_ANIMS( sub_3604(), 1 );
                SET_DISABLE_PLAYER_SHOVE_ANIMATION( sub_3604(), 1 );
                if (((((NOT (sub_3917( sub_3604(), l_U1938 ))) || (g_U30093[l_U1938])) || (g_U30153)) || (NOT bVar3)) || (sub_27010( sub_3604() )))
                {
                    BLOCK_CHAR_AMBIENT_ANIMS( sub_3604(), 0 );
                    SET_DISABLE_PLAYER_SHOVE_ANIMATION( sub_3604(), 0 );
                    SET_ANIM_GROUP_FOR_CHAR( sub_3604(), "MOVE_PLAYER" );
                    REMOVE_ANIMS( sVar2 );
                    l_U1895 = 0;
                }
            }
        }
        else if (l_U1895)
        {
            BLOCK_CHAR_AMBIENT_ANIMS( sub_3604(), 0 );
            SET_DISABLE_PLAYER_SHOVE_ANIMATION( sub_3604(), 0 );
            SET_ANIM_GROUP_FOR_CHAR( sub_3604(), "MOVE_PLAYER" );
            REMOVE_ANIMS( sVar2 );
            l_U1895 = 0;
        }
    }
    return;
}

int sub_27010(int iParam0)
{
    if (iParam0 == nil)
    {
        return 0;
    }
    if ((sub_27035( iParam0 )) == -1)
    {
        return 0;
    }
    return 1;
}

int sub_27035(int iParam0)
{
    int Result;

    if (iParam0 == nil)
    {
        return -1;
    }
    Result = 0;
    for ( Result = 0; Result < 5; Result++ )
    {
        if (NOT (g_U9105[Result]._fU0 == -1))
        {
            if (iParam0 == g_U9105[Result]._fU4)
            {
                return Result;
            }
        }
    }
    return -1;
}

int sub_27171(unknown uParam0)
{
    if (NOT (sub_27182( uParam0 )))
    {
        REQUEST_ANIMS( uParam0 );
        if (HAVE_ANIMS_LOADED( uParam0 ))
        {
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int sub_27182(unknown uParam0)
{
    if (IS_STRING_NULL( uParam0 ))
    {
        return 1;
    }
    else if (COMPARE_STRING( uParam0, "" ))
    {
        return 1;
    }
    return 0;
}

void sub_27576()
{
    int iVar2;
    vector vVar3;
    boolean bVar6;
    int iVar7;
    float fVar8;
    unknown uVar9;

    switch (l_U1938)
    {
        case 0:
        iVar2 = 725112888;
        vVar3 = {-398.00000000, 398.00000000, 15.00000000};
        break;
        case 2:
        iVar2 = 1316667213;
        vVar3 = {-440.00000000, 358.00000000, 12.00000000};
        break;
        case 1:
        iVar2 = -175426899;
        vVar3 = {-468.00000000, 153.00000000, 10.00000000};
        break;
    }
    if (l_U1938 == 1)
    {
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -397503281, -474.00000000, 162.00000000, 10.00000000, 1, 0.00000000 );
    }
    if (NOT g_U30167)
    {
        if (((HAS_CUTSCENE_FINISHED()) AND (IS_PLAYER_CONTROL_ON( sub_2048() ))) || (((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Tony6" )) > 0) AND (l_U1938 == 0)))
        {
            if (IS_PLAYER_PLAYING( sub_2048() ))
            {
                if (g_U30153)
                {
                    sub_27855( l_U1938, 0 );
                }
                else if ((((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Tony6" )) > 0) AND (l_U1938 == 0)) || (((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "E2EndCredits" )) > 0) AND (l_U1938 == 0)))
                {
                    if ((IS_WANTED_LEVEL_GREATER( sub_2048(), 0 )) AND (NOT (sub_3889( sub_3604(), l_U1938, 0 ))))
                    {
                        sub_27855( l_U1938, 2 );
                    }
                    else
                    {
                        sub_27855( l_U1938, 1 );
                    }
                }
                else if (((IS_WANTED_LEVEL_GREATER( sub_2048(), 0 )) || (g_U30093[l_U1938])) || (g_U30149[l_U1938]))
                {
                    sub_27855( l_U1938, 2 );
                }
                else if (l_U1938 == 0)
                {
                    sub_27855( l_U1938, 2 );
                }
                else
                {
                    sub_27855( l_U1938, 0 );
                };;;;
            }
            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( vVar3.x, vVar3.y, vVar3.z, 1.50000000, iVar2 ))
            {
                switch (g_U30192[l_U1938])
                {
                    case 0:
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( iVar2, vVar3, 0, fVar8 );
                    l_U1889 = 0;
                    break;
                    case 1:
                    l_U1889 = 0;
                    GET_STATE_OF_CLOSEST_DOOR_OF_TYPE( iVar2, vVar3, ref bVar6, ref fVar8 );
                    if (fVar8 > -1.00000000)
                    {
                        GET_FRAME_TIME( ref uVar9 );
                        fVar8 += uVar9 * -1.00000000;
                    }
                    else
                    {
                        fVar8 = -1.00000000;
                    }
                    if ((IS_SCREEN_FADED_OUT()) || (NOT (sub_28310( vVar3, 2.00000000 ))))
                    {
                        fVar8 = -1.00000000;
                    }
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( iVar2, vVar3, 1, fVar8 );
                    break;
                    case 2:
                    iVar7 = 0;
                    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Tony6" )) > 0)
                    {
                        if (NOT (sub_3889( sub_3604(), l_U1938, 0 )))
                        {
                            iVar7 = 1;
                        }
                    }
                    else if (NOT (sub_3889( sub_3604(), l_U1938, 1 )))
                    {
                        iVar7 = 1;
                    }
                    if (sub_28485())
                    {
                        iVar7 = 0;
                    }
                    if ((l_U1889) || (iVar7))
                    {
                        GET_STATE_OF_CLOSEST_DOOR_OF_TYPE( iVar2, vVar3, ref bVar6, ref fVar8 );
                        if (fVar8 > 0.00000000)
                        {
                            if (fVar8 < 0.05000000)
                            {
                                fVar8 = 0.00000000;
                            }
                            else
                            {
                                GET_FRAME_TIME( ref uVar9 );
                                fVar8 += uVar9 * -1.00000000;
                            }
                        }
                        else if (fVar8 > -0.05000000)
                        {
                            fVar8 = 0.00000000;
                        }
                        else
                        {
                            GET_FRAME_TIME( ref uVar9 );
                            fVar8 += uVar9;
                        }
                        if ((IS_SCREEN_FADED_OUT()) || (NOT (sub_28310( vVar3, 2.00000000 ))))
                        {
                            fVar8 = 0.00000000;
                        }
                        if (fVar8 == 0.00000000)
                        {
                            l_U1889 = 1;
                        }
                        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( iVar2, vVar3, 1, fVar8 );
                    }
                    else
                    {
                        GET_STATE_OF_CLOSEST_DOOR_OF_TYPE( iVar2, vVar3, ref bVar6, ref fVar8 );
                        if (bVar6)
                        {
                            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( iVar2, vVar3, 0, fVar8 );
                        }
                    }
                    break;
                }
            }
        }
    }
    else if (NOT (IS_THREAD_ACTIVE( g_U30235 )))
    {
        g_U30167 = 0;
    }
    if (l_U1889)
    {
        ;
    }
    return;
}

void sub_27855(unknown uParam0, unknown uParam1)
{
    g_U30192[uParam0] = uParam1;
    return;
}

int sub_28310(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3 ))
    {
        return 1;
    }
    return 0;
}

int sub_28485()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (DOES_GROUP_EXIST( sub_28494() ))
    {
        for ( I = 0; I < 7; I++ )
        {
            GET_GROUP_MEMBER( sub_28494(), I, ref uVar5 );
            if (NOT (IS_CHAR_INJURED( uVar5 )))
            {
                if (sub_19747( uVar5, l_U1938, 1094713344 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_28494()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_28956()
{
    float fVar2;

    GET_FRAME_TIME( ref fVar2 );
    fVar2 *= 1000.00000000;
    l_U1957 += ROUND( fVar2 );
    l_U1958 += ROUND( fVar2 );
    l_U1959 += ROUND( fVar2 );
    l_U1960 += ROUND( fVar2 );
    l_U1963 += ROUND( fVar2 );
    l_U1961 += ROUND( fVar2 );
    l_U1964 += ROUND( fVar2 );
    return;
}

void sub_29131()
{
    if (NOT l_U1892)
    {
        if (IS_PLAYER_PLAYING( sub_2048() ))
        {
            if (g_U30149[l_U1938])
            {
                if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3604() )))
                {
                    if (((NOT sub_29203()) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())) AND (NOT g_U12379))
                    {
                        switch (l_U1938)
                        {
                            case 0:
                            if (IS_CHAR_IN_AREA_3D( sub_3604(), -401.82090000, 394.47430000, 13.41450000, -396.59590000, 398.24930000, 16.41460000, 0 ))
                            {
                                PRINT_HELP( "CLUB_CLOSED" );
                                l_U1892 = 1;
                            }
                            break;
                            case 1:
                            if (IS_CHAR_IN_AREA_3D( sub_3604(), -468.65860000, 152.33520000, 8.87380000, -466.40860000, 154.51020000, 11.87380000, 0 ))
                            {
                                PRINT_HELP( "CLUB_CLOSED" );
                                l_U1892 = 1;
                            }
                            break;
                            case 2:
                            if (IS_CHAR_IN_AREA_3D( sub_3604(), -442.43930000, 355.85000000, 9.88570000, -440.13930000, 358.10000000, 13.11070000, 0 ))
                            {
                                PRINT_HELP( "CLUB_CLOSED" );
                                l_U1892 = 1;
                            }
                            break;
                        }
                    }
                }
            }
        }
    }
    else
    {
        switch (l_U1938)
        {
            case 0:
            if (NOT (IS_CHAR_IN_AREA_3D( sub_3604(), -401.82090000, 394.47430000, 13.41450000, -396.59590000, 398.24930000, 16.41460000, 0 )))
            {
                l_U1892 = 0;
            }
            break;
            case 1:
            if (NOT (IS_CHAR_IN_AREA_3D( sub_3604(), -468.65860000, 152.33520000, 8.87380000, -466.40860000, 154.51020000, 11.87380000, 0 )))
            {
                l_U1892 = 0;
            }
            break;
            case 2:
            if (NOT (IS_CHAR_IN_AREA_3D( sub_3604(), -442.43930000, 355.85000000, 9.88570000, -440.13930000, 358.10000000, 13.11070000, 0 )))
            {
                l_U1892 = 0;
            }
            break;
        }
        if (NOT l_U1892)
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CLUB_CLOSED" ))
            {
                CLEAR_HELP();
            }
        }
    }
    return;
}

int sub_29203()
{
    if (((IS_MESSAGE_BEING_DISPLAYED()) || (sub_29219())) || (sub_29270()))
    {
        return 1;
    }
    return 0;
}

int sub_29219()
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8867 == 1)) || (g_U8867 == 2))
    {
        return 1;
    }
    return 0;
}

int sub_29270()
{
    if ((g_U95._fU0 == 1007) || (g_U95._fU0 == 1008))
    {
        return 1;
    }
    return 0;
}

int sub_29981(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        switch (uParam1)
        {
            case 0:
            if (NOT (sub_30048( sub_3604(), l_U1938 )))
            {
                if (sub_3917( uParam0, uParam1 ))
                {
                    if (((((IS_CHAR_IN_AREA_3D( uParam0, -398.50490000, 401.49280000, 3.67440000, -378.30490000, 440.81780000, 8.50000000, 0 )) || (IS_CHAR_IN_AREA_3D( uParam0, -384.02620000, 431.87570000, 4.64940000, -368.82620000, 442.87570000, 8.74940000, 0 ))) || (IS_CHAR_IN_AREA_3D( uParam0, -379.40620000, 417.46790000, 3.72430000, -377.38120000, 421.04290000, 9.87430000, 0 ))) || (IS_CHAR_IN_AREA_3D( uParam0, -380.04610000, 428.22680000, 4.52430000, -376.77110000, 432.22680000, 9.84930000, 0 ))) || (IS_CHAR_IN_AREA_3D( uParam0, -398.11870000, 396.36870000, 4.70370000, -395.56870000, 402.74370000, 12.52870000, 0 )))
                    {
                        return 1;
                    }
                }
                if (IS_CHAR_IN_AREA_3D( uParam0, -397.47520000, 394.72470000, 4.22000000, -390.12520000, 401.97470000, 10.47000000, 0 ))
                {
                    return 1;
                }
            }
            break;
            case 1:
            if (sub_3917( uParam0, uParam1 ))
            {
                if (NOT (sub_30048( sub_3604(), l_U1938 )))
                {
                    if (IS_CHAR_IN_AREA_3D( uParam0, -490.11110000, 138.91470000, 6.40490000, -468.06110000, 166.93970000, 14.45490000, 0 ))
                    {
                        return 1;
                    }
                }
            }
            break;
            case 2:
            if (NOT (sub_30048( sub_3604(), l_U1938 )))
            {
                if (sub_3917( uParam0, uParam1 ))
                {
                    if (IS_CHAR_IN_AREA_3D( uParam0, -439.82380000, 347.38690000, 9.49160000, -424.74880000, 355.93690000, 14.94170000, 0 ))
                    {
                        return 1;
                    }
                }
            }
            break;
        }
    }
    if (sub_30766())
    {
        return 1;
    }
    return 0;
}

int sub_30048(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        switch (uParam1)
        {
            case 0:
            if (IS_CHAR_IN_AREA_3D( uParam0, -400.75690000, 397.53590000, 13.41520000, -396.75690000, 401.28590000, 16.41520000, 0 ))
            {
                return 1;
            }
            break;
            case 1:
            if (IS_CHAR_IN_AREA_3D( sub_3604(), -468.92590000, 152.57140000, 7.86410000, -467.90090000, 154.02140000, 11.86410000, 0 ))
            {
                return 1;
            }
            break;
            case 2:
            if (IS_CHAR_IN_AREA_3D( uParam0, -440.23210000, 355.07540000, 10.71670000, -436.60710000, 359.22540000, 13.71670000, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

int sub_30766()
{
    return 0;
}

void sub_30842()
{
    unknown uVar2;

    PRINTSTRING( "SET_INTERIOR_DENSITIES() - called by " );
    switch (l_U1938)
    {
        case 0:
        PRINTSTRING( "BAHAMA MAMAS" );
        break;
        case 1:
        PRINTSTRING( "MAISONETTE 9" );
        break;
        case 2:
        PRINTSTRING( "HERCULES" );
        break;
    }
    PRINTNL();
    SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
    SET_REDUCE_VEHICLE_MODEL_BUDGET( 1 );
    SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
    SWITCH_GARBAGE_TRUCKS( 0 );
    SWITCH_RANDOM_TRAINS( 0 );
    g_U43642 = 1;
    g_U10935 = 1;
    SET_SCENARIO_PED_DENSITY_MULTIPLIER( 0.00000000, 0.00000000 );
    CLEAR_AREA_OF_CHARS( l_U2032._fU0, l_U2032._fU4, l_U2032._fU8, 1000.00000000 );
    sub_31142( l_U2032, 1000.00000000, 0 );
    CLEAR_AREA_OF_COPS( l_U2032._fU0, l_U2032._fU4, l_U2032._fU8, 1000.00000000 );
    if (IS_PLAYER_PLAYING( sub_2048() ))
    {
        SET_PLAYER_CAN_BE_HASSLED_BY_GANGS( sub_2048(), 0 );
        DONT_DISPATCH_COPS_FOR_PLAYER( sub_2048(), 1 );
    }
    GET_INTERIOR_AT_COORDS( l_U2032._fU0, l_U2032._fU4, l_U2032._fU8, ref uVar2 );
    ACTIVATE_INTERIOR( uVar2, 1 );
    l_U1873 = 1;
    if (NOT l_U1875)
    {
        g_U30102 = 1;
        g_U30103 = 0;
    }
    else
    {
        g_U30102 = 0;
        g_U30103 = 0;
    }
    if (l_U1938 == 1)
    {
        l_U1973 = FIND_STATIC_EMITTER_INDEX( "EP2_MAISONETTE9_TOILET_AMBIENCE" );
    }
    PRINTSTRING( "SET_INTERIOR_DENSITIES - SET_INTERIOR_DENSITIES() called" );
    PRINTNL();
    return;
}

void sub_31142(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar7 );
    if (DOES_VEHICLE_EXIST( uVar7 ))
    {
        if (NOT (IS_CAR_DEAD( uVar7 )))
        {
            GET_CAR_COORDINATES( uVar7, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
            GET_CAR_HEADING( uVar7, ref uVar11 );
            sub_31234( uParam0, uParam3, uVar8, uVar11, uParam4 );
        }
    }
    return;
}

void sub_31234(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8)
{
    unknown uVar11;
    boolean bVar12;

    bVar12 = false;
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar11 );
    if (DOES_VEHICLE_EXIST( uVar11 ))
    {
        if (NOT (IS_CAR_DEAD( uVar11 )))
        {
            if (NOT (IS_CHAR_SITTING_IN_CAR( sub_3604(), uVar11 )))
            {
                if (NOT (IS_CAR_A_MISSION_CAR( uVar11 )))
                {
                    SET_CAR_AS_MISSION_CAR( uVar11 );
                    bVar12 = true;
                }
            }
            else
            {
                uVar11 = nil;
            }
        }
    }
    CLEAR_AREA_OF_CARS( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3 );
    if (bParam8)
    {
        CLEAR_AREA( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3, 1 );
    }
    if (DOES_VEHICLE_EXIST( uVar11 ))
    {
        if (NOT (IS_CAR_DEAD( uVar11 )))
        {
            if (LOCATE_CAR_3D( uVar11, uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3, uParam3, uParam3, 0 ))
            {
                CLEAR_AREA( uParam4._fU0, uParam4._fU4, uParam4._fU8, 5.00000000, 0 );
                SET_CAR_HEADING( uVar11, uParam7 );
                SET_CAR_COORDINATES( uVar11, uParam4._fU0, uParam4._fU4, uParam4._fU8 );
            }
        }
    }
    if (bVar12)
    {
        if (DOES_VEHICLE_EXIST( uVar11 ))
        {
            sub_31549( uVar11 );
        }
    }
    return;
}

void sub_31549(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

int sub_32116(int iParam0, unknown uParam1)
{
    int Result;

    for ( Result = 0; Result < (uParam1^); Result++ )
    {
        if (NOT (iParam0 == nil))
        {
            if ((uParam1^)[Result]._fU12 == iParam0)
            {
                return Result;
            }
        }
    }
    return -1;
}

void sub_33306()
{
    float fVar2;

    fVar2 = 99999.90000000;
    if (NOT (g_U30206 == nil))
    {
        l_U1979 = g_U30206;
        g_U30206 = nil;
    }
    if (NOT (IS_CHAR_INJURED( g_U30208 )))
    {
        g_U30206 = g_U30208;
        fVar2 = 0.00000000;
        PRINTSTRING( "GET_NEAREST_DANCER() - mission dance ped" );
        PRINTNL();
    }
    sub_33450( ref l_U1685, ref fVar2 );
    sub_33450( ref l_U139, ref fVar2 );
    if (g_U30206 == nil)
    {
        PRINTSTRING( "GET_NEAREST_DANCER() - none found" );
        PRINTNL();
        g_U30109 = 1;
    }
    return;
}

void sub_33450(unknown uParam0, unknown uParam1)
{
    int I;
    float fVar5;
    vector vVar6;
    vector vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    if (IS_PLAYER_PLAYING( sub_2048() ))
    {
        GET_CHAR_COORDINATES( sub_3604(), ref vVar6.x, ref vVar6.y, ref vVar6.z );
    }
    for ( I = 0; I < (uParam0^); I++ )
    {
        if ((uParam0^)[I]._fU0)
        {
            if (((uParam0^)[I]._fU4 == 10) || ((uParam0^)[I]._fU4 == 12))
            {
                if (sub_33564( (uParam0^)[I]._fU52 ))
                {
                    if ((uParam0^)[I]._fU16 == 0)
                    {
                        if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU24 )))
                        {
                            GET_CHAR_COORDINATES( (uParam0^)[I]._fU24, ref vVar9.x, ref vVar9.y, ref vVar9.z );
                            uVar12 = {vVar9 - vVar6};
                            fVar5 = VMAG( uVar12 );
                            if (fVar5 < (uParam1^))
                            {
                                g_U30206 = l_U139[I]._fU24;
                                (uParam1^) = fVar5;
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_33564(int iParam0)
{
    if (((iParam0 == 1) || (iParam0 == 3)) || (iParam0 == 4))
    {
        return 1;
    }
    return 0;
}

void sub_33857()
{
    int I;
    vector vVar3;
    vector vVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    float fVar12;
    float fVar13;
    float fVar14;

    fVar12 = 1E7;
    fVar13 = 999999.90000000;
    l_U1977 = nil;
    l_U1978 = nil;
    if (IS_PLAYER_PLAYING( sub_2048() ))
    {
        GET_CHAR_COORDINATES( sub_3604(), ref vVar3.x, ref vVar3.y, ref vVar3.z );
        if (sub_3889( sub_3604(), l_U1938, 0 ))
        {
            for ( I = 0; I < l_U139; I++ )
            {
                if (l_U139[I]._fU4 == 8)
                {
                    if (NOT (IS_CHAR_INJURED( l_U139[I]._fU24 )))
                    {
                        GET_CHAR_COORDINATES( l_U139[I]._fU24, ref vVar6.x, ref vVar6.y, ref vVar6.z );
                        uVar9 = {vVar6 - vVar3};
                        if ((ABSF( uVar9._fU8 )) < 4.00000000)
                        {
                            fVar14 = VMAG( uVar9 );
                            if (fVar14 < fVar12)
                            {
                                fVar13 = fVar12;
                                l_U1978 = l_U1977;
                                l_U1977 = l_U139[I]._fU24;
                                fVar12 = fVar14;
                            }
                            else if (fVar14 < fVar13)
                            {
                                fVar13 = fVar14;
                                l_U1978 = l_U139[I]._fU24;
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_34196()
{
    if (NOT l_U1891)
    {
        if (IS_PLAYER_PLAYING( sub_2048() ))
        {
            if ((g_U30093[l_U1938]) AND (NOT (g_U30192[l_U1938] == 1)))
            {
                if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3604() )))
                {
                    if ((NOT sub_29203()) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED()))
                    {
                        switch (l_U1938)
                        {
                            case 0:
                            if (IS_CHAR_IN_AREA_3D( sub_3604(), -401.82090000, 394.47430000, 13.41450000, -396.59590000, 398.24930000, 16.41460000, 0 ))
                            {
                                PRINT_HELP( "CLUB_KICKED" );
                                l_U1891 = 1;
                            }
                            break;
                            case 1:
                            if (IS_CHAR_IN_AREA_3D( sub_3604(), -468.65860000, 152.33520000, 8.87380000, -466.40860000, 154.51020000, 11.87380000, 0 ))
                            {
                                PRINT_HELP( "CLUB_KICKED" );
                                l_U1891 = 1;
                            }
                            break;
                            case 2:
                            if (IS_CHAR_IN_AREA_3D( sub_3604(), -442.43930000, 355.85000000, 9.88570000, -440.13930000, 358.10000000, 13.11070000, 0 ))
                            {
                                PRINT_HELP( "CLUB_KICKED" );
                                l_U1891 = 1;
                            }
                            break;
                        }
                    }
                }
            }
        }
    }
    else
    {
        switch (l_U1938)
        {
            case 0:
            if (NOT (IS_CHAR_IN_AREA_3D( sub_3604(), -401.82090000, 394.47430000, 13.41450000, -396.59590000, 398.24930000, 16.41460000, 0 )))
            {
                l_U1891 = 0;
            }
            break;
            case 1:
            if (NOT (IS_CHAR_IN_AREA_3D( sub_3604(), -468.65860000, 152.33520000, 8.87380000, -466.40860000, 154.51020000, 11.87380000, 0 )))
            {
                l_U1891 = 0;
            }
            break;
            case 2:
            if (NOT (IS_CHAR_IN_AREA_3D( sub_3604(), -442.43930000, 355.85000000, 9.88570000, -440.13930000, 358.10000000, 13.11070000, 0 )))
            {
                l_U1891 = 0;
            }
            break;
        }
        if (NOT l_U1891)
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CLUB_KICKED" ))
            {
                CLEAR_HELP();
            }
        }
    }
    return;
}

void sub_34865()
{
    if (NOT l_U1890)
    {
        if (IS_PLAYER_PLAYING( sub_2048() ))
        {
            if (NOT g_U30093[l_U1938])
            {
                if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3604() )))
                {
                    if (IS_WANTED_LEVEL_GREATER( sub_2048(), 0 ))
                    {
                        if ((NOT sub_29203()) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED()))
                        {
                            switch (l_U1938)
                            {
                                case 0:
                                if (IS_CHAR_IN_AREA_3D( sub_3604(), -401.82090000, 394.47430000, 13.41450000, -396.59590000, 398.24930000, 16.41460000, 0 ))
                                {
                                    PRINT_HELP( "CLUB_WANTED" );
                                    l_U1890 = 1;
                                }
                                break;
                                case 1:
                                if (IS_CHAR_IN_AREA_3D( sub_3604(), -468.65860000, 152.33520000, 8.87380000, -466.40860000, 154.51020000, 11.87380000, 0 ))
                                {
                                    PRINT_HELP( "CLUB_WANTED" );
                                    l_U1890 = 1;
                                }
                                break;
                                case 2:
                                if (IS_CHAR_IN_AREA_3D( sub_3604(), -442.43930000, 355.85000000, 9.88570000, -440.13930000, 358.10000000, 13.11070000, 0 ))
                                {
                                    PRINT_HELP( "CLUB_WANTED" );
                                    l_U1890 = 1;
                                }
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        switch (l_U1938)
        {
            case 0:
            if (NOT (IS_CHAR_IN_AREA_3D( sub_3604(), -401.82090000, 394.47430000, 13.41450000, -396.59590000, 398.24930000, 16.41460000, 0 )))
            {
                l_U1890 = 0;
            }
            break;
            case 1:
            if (NOT (IS_CHAR_IN_AREA_3D( sub_3604(), -468.65860000, 152.33520000, 8.87380000, -466.40860000, 154.51020000, 11.87380000, 0 )))
            {
                l_U1890 = 0;
            }
            break;
            case 2:
            if (NOT (IS_CHAR_IN_AREA_3D( sub_3604(), -442.43930000, 355.85000000, 9.88570000, -440.13930000, 358.10000000, 13.11070000, 0 )))
            {
                l_U1890 = 0;
            }
            break;
        }
        if (NOT l_U1890)
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CLUB_WANTED" ))
            {
                CLEAR_HELP();
            }
        }
    }
    return;
}

void sub_35537()
{
    boolean bVar2;

    if ((IS_PLAYER_PLAYING( sub_2048() )) AND (NOT g_U30093[l_U1938]))
    {
        if (((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3604() ))) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_2048(), 0 )))) AND (NOT g_U43025))
        {
            if (NOT l_U1887)
            {
                if (NOT l_U1874)
                {
                    if (NOT (sub_3917( sub_3604(), l_U1938 )))
                    {
                        if (sub_35667( sub_3604() ))
                        {
                            switch (l_U1938)
                            {
                                case 0:
                                if (IS_CHAR_IN_AREA_3D( sub_3604(), -401.82090000, 394.47430000, 13.41450000, -396.59590000, 398.24930000, 16.41460000, 0 ))
                                {
                                    bVar2 = true;
                                }
                                break;
                                case 1:
                                if (IS_CHAR_IN_AREA_3D( sub_3604(), -468.65860000, 152.33520000, 8.87380000, -466.40860000, 154.51020000, 11.87380000, 0 ))
                                {
                                    bVar2 = true;
                                }
                                break;
                                case 2:
                                if (IS_CHAR_IN_AREA_3D( sub_3604(), -442.43930000, 355.85000000, 9.88570000, -440.13930000, 358.10000000, 13.11070000, 0 ))
                                {
                                    bVar2 = true;
                                }
                                break;
                            }
                        }
                    }
                    if (bVar2)
                    {
                        if (NOT sub_36119())
                        {
                            TASK_SWAP_WEAPON( sub_3604(), 0 );
                            l_U1943++;
                            PRINT_HELP( "STR_WEA" );
                            l_U1874 = 1;
                            l_U1887 = 1;
                        }
                    }
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( sub_3604(), 127, ref l_U1999 );
                    if (l_U1999 == 7)
                    {
                        SET_CURRENT_CHAR_WEAPON( sub_3604(), 0, 0 );
                        l_U1874 = 0;
                    }
                }
            }
            else
            {
                switch (l_U1938)
                {
                    case 0:
                    if (NOT (IS_CHAR_IN_AREA_3D( sub_3604(), -401.82090000, 394.47430000, 13.41450000, -396.59590000, 398.24930000, 16.41460000, 0 )))
                    {
                        l_U1887 = 0;
                    }
                    break;
                    case 1:
                    if (NOT (IS_CHAR_IN_AREA_3D( sub_3604(), -468.65860000, 152.33520000, 8.87380000, -466.40860000, 154.51020000, 11.87380000, 0 )))
                    {
                        l_U1887 = 0;
                    }
                    break;
                    case 2:
                    if (NOT (IS_CHAR_IN_AREA_3D( sub_3604(), -442.43930000, 355.85000000, 9.88570000, -440.13930000, 358.10000000, 13.11070000, 0 )))
                    {
                        l_U1887 = 0;
                    }
                    break;
                }
            }
        }
    }
    return;
}

int sub_35667(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    vector vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;

    vVar3 = {sub_19758( l_U1938 )};
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref vVar6.x, ref vVar6.y, ref vVar6.z );
        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( uParam0, 0.00000000, 1.00000000, 0.00000000, ref vVar9.x, ref vVar9.y, ref vVar9.z );
        uVar12 = {vVar3 - vVar6};
        uVar12._fU8 = 0.00000000;
        uVar15 = {vVar9 - vVar6};
        uVar15._fU8 = 0.00000000;
        if (((sub_35809( uVar12, uVar15 )) > 0.00000000) AND ((VMAG2( uVar12 )) > 0.50000000))
        {
            return 1;
        }
    }
    return 0;
}

float sub_35809(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return ((uParam0._fU0 * uParam3._fU0) + (uParam0._fU4 * uParam3._fU4)) + (uParam0._fU8 * uParam3._fU8);
}

int sub_36119()
{
    int iVar2;

    if (NOT (IS_CHAR_INJURED( sub_3604() )))
    {
        GET_CURRENT_CHAR_WEAPON( sub_3604(), ref iVar2 );
        if ((((iVar2 == 0) || (iVar2 == 45)) || (iVar2 == 46)) || (iVar2 == 41))
        {
            return 1;
        }
    }
    return 0;
}

void sub_36554()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (NOT g_U30101)
    {
        if (NOT l_U1875)
        {
            if (sub_19747( sub_3604(), l_U1938, 1094713344 ))
            {
                if ((IS_CHAR_SHOOTING( sub_3604() )) || (sub_36622()))
                {
                    g_U30093[l_U1938] = 1;
                    PRINTSTRING( "g_bPlayerHasKickedOffInsideClub - set to TRUE - shots fired inside club" );
                    PRINTNL();
                    GET_GAME_TIMER( ref l_U1976 );
                    l_U1875 = 1;
                }
            }
        }
    }
    if (NOT g_U30093[l_U1938])
    {
        if (IS_PLAYER_PLAYING( sub_2048() ))
        {
            if ((sub_19747( sub_3604(), l_U1938, 1094713344 )) || ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Tony6" )) > 0))
            {
                sub_37126( ref l_U1685 );
                sub_37126( ref l_U139 );
            }
            if (sub_3889( sub_3604(), l_U1938, 0 ))
            {
                if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3604() ))
                {
                    PRINTSTRING( "g_bPlayerHasKickedOffInsideClub - set to TRUE - player is in a car inside the club" );
                    PRINTNL();
                    g_U30093[l_U1938] = 1;
                }
            }
        }
    }
    else if (NOT l_U1879)
    {
        sub_37126( ref l_U1685 );
        sub_37126( ref l_U139 );
    }
    return;
}

int sub_36622()
{
    switch (l_U1938)
    {
        case 0:
        if (((IS_BULLET_IN_BOX( -398.50490000, 401.49280000, 3.67440000, -378.30490000, 440.81780000, 7.67440000, 0 )) || (IS_BULLET_IN_BOX( -384.02620000, 431.87570000, 4.64940000, -368.82620000, 442.87570000, 8.74940000, 0 ))) || (IS_BULLET_IN_BOX( -398.38180000, 411.76870000, 4.22430000, -383.38180000, 434.24370000, 8.17430000, 0 )))
        {
            return 1;
        }
        break;
        case 1:
        if (IS_BULLET_IN_BOX( -490.11110000, 138.91470000, 6.40490000, -468.06110000, 166.93970000, 14.45490000, 0 ))
        {
            return 1;
        }
        break;
        case 2:
        if (IS_BULLET_IN_BOX( -439.94970000, 347.42230000, 9.81670000, -423.12470000, 356.29730000, 15.11670000, 0 ))
        {
            return 1;
        }
        break;
    }
    return 0;
}

void sub_37126(unknown uParam0)
{
    int I;

    for ( I = 0; I < (uParam0^); I++ )
    {
        if ((uParam0^)[I]._fU0)
        {
            if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU24 )))
            {
                if (NOT g_U30153)
                {
                    if (NOT sub_36119())
                    {
                        if ((IS_PLAYER_TARGETTING_CHAR( sub_2048(), (uParam0^)[I]._fU24 )) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_2048(), (uParam0^)[I]._fU24 )))
                        {
                            g_U30093[l_U1938] = 1;
                            PRINTSTRING( "g_bPlayerHasKickedOffInsideClub - set to TRUE - targetting ped" );
                            PRINTNL();
                            l_U1879 = 1;
                            if (((uParam0^)[I]._fU4 == 8) || ((uParam0^)[I]._fU4 == 9))
                            {
                                g_U30145[l_U1938] = 1;
                                l_U1879 = 1;
                            }
                        }
                    }
                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam0^)[I]._fU24, sub_3604(), 0 ))
                    {
                        if ((l_U1938 == 0) || (((uParam0^)[I]._fU4 == 8) || ((uParam0^)[I]._fU4 == 9)))
                        {
                            PRINTSTRING( "g_bPlayerHasKickedOffInsideClub - set to TRUE - player damaged a club ped" );
                            PRINTNL();
                            g_U30093[l_U1938] = 1;
                            if (((uParam0^)[I]._fU4 == 8) || ((uParam0^)[I]._fU4 == 9))
                            {
                                g_U30145[l_U1938] = 1;
                                l_U1879 = 1;
                            }
                        }
                    }
                    if (((uParam0^)[I]._fU4 == 8) || ((uParam0^)[I]._fU4 == 9))
                    {
                        if (IS_PED_IN_COMBAT( (uParam0^)[I]._fU24 ))
                        {
                            PRINTSTRING( "g_bPlayerHasKickedOffInsideClub - set to TRUE - bouncers are in combat" );
                            PRINTNL();
                            g_U30093[l_U1938] = 1;
                            l_U1879 = 1;
                            g_U30145[l_U1938] = 1;
                        }
                    }
                }
            }
            else if (((uParam0^)[I]._fU4 == 8) || ((uParam0^)[I]._fU4 == 9))
            {
                g_U30145[l_U1938] = 1;
                l_U1879 = 1;
            }
        }
    }
    if (l_U1879)
    {
        if (NOT l_U1880)
        {
            sub_37865();
            l_U1880 = 1;
        }
    }
    return;
}

void sub_37865()
{
    int I;
    unknown uVar3;

    for ( I = 0; I < l_U139; I++ )
    {
        if ((l_U139[I]._fU4 == 8) || (l_U139[I]._fU4 == 9))
        {
            if (NOT (IS_CHAR_INJURED( l_U139[I]._fU24 )))
            {
                if ((l_U139[I]._fU48 == -1446884113) || (l_U139[I]._fU48 == 1662473323))
                {
                    GIVE_WEAPON_TO_CHAR( l_U139[I]._fU24, 12, 999, 0 );
                }
                else
                {
                    GIVE_WEAPON_TO_CHAR( l_U139[I]._fU24, 7, 999, 0 );
                }
            }
        }
    }
    return;
}

void sub_38275()
{
    unknown uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    boolean bVar7;
    int iVar8;
    int I;

    bVar7 = false;
    if (sub_3889( sub_3604(), l_U1938, 0 ))
    {
        if (sub_38308())
        {
            if (((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dancing" )) == 0) AND (NOT l_U1882))
            {
                if (NOT g_U30093[l_U1938])
                {
                    if (sub_38765( sub_3604() ))
                    {
                        if (NOT (IS_PED_IN_COMBAT( sub_3604() )))
                        {
                            if (NOT (IS_CHAR_DUCKING( sub_3604() )))
                            {
                                if (sub_36119())
                                {
                                    if (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_2048() ))
                                    {
                                        bVar7 = true;
                                    }
                                }
                            }
                        }
                    }
                }
                GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar3, ref iVar4, ref iVar5, ref iVar6 );
                if (iVar5 < 0)
                {
                    iVar5 *= -1;
                }
                if (iVar6 < 0)
                {
                    iVar6 *= -1;
                }
                if (bVar7)
                {
                    if ((iVar3 < 10) AND (iVar4 < 10))
                    {
                        ;
                    }
                }
                iVar8 = 1;
                if (g_U12379)
                {
                    if ((NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Tony1" )) > 0)) AND (NOT g_U30105))
                    {
                        iVar8 = 0;
                    }
                }
                if ((IS_AUTO_SAVE_IN_PROGRESS()) || (g_U10953._fU4))
                {
                    iVar8 = 0;
                }
                if (IS_CHAR_DEAD( sub_3604() ))
                {
                    iVar8 = 0;
                }
                if (NOT (IS_PLAYER_PLAYING( sub_2048() )))
                {
                    iVar8 = 0;
                }
                if (g_U12381)
                {
                    iVar8 = 0;
                }
                if ((sub_29270()) || (sub_39139()))
                {
                    iVar8 = 0;
                }
                if (NOT g_U22957)
                {
                    iVar8 = 0;
                }
                if (NOT (CAN_PLAYER_START_MISSION( sub_2048() )))
                {
                    iVar8 = 0;
                }
                if (NOT (sub_39222( 1, 1 )))
                {
                    iVar8 = 0;
                }
                if (IS_BIT_SET( g_U10938._fU0, 4 ))
                {
                    iVar8 = 0;
                }
                if (NOT sub_39541())
                {
                    iVar8 = 0;
                }
                if (NOT (IS_CHAR_INJURED( g_U30208 )))
                {
                    l_U1983 = g_U30208;
                }
                if (NOT (IS_CHAR_INJURED( l_U1983 )))
                {
                    if (LOCATE_CHAR_ON_FOOT_3D( l_U1983, l_U2065._fU0, l_U2065._fU4, l_U2065._fU8, 0.70000000, 0.70000000, 2.50000000, 0 ))
                    {
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U1983, sub_3604(), 0 ))
                        {
                            iVar8 = 0;
                        }
                    }
                    else
                    {
                        iVar8 = 0;
                    }
                }
                else
                {
                    iVar8 = 0;
                }
                if (g_U30105)
                {
                    SET_PLAYER_CONTROL( sub_2048(), 1 );
                }
                if (sub_27010( sub_3604() ))
                {
                    iVar8 = 0;
                }
                if ((((bVar7) || (g_U30105)) AND (sub_39794( 2, 0 ))) AND (iVar8))
                {
                    l_U1998 = "DANC_H01";
                    if (((NOT l_U1876) AND (NOT IS_MESSAGE_BEING_DISPLAYED())) || (g_U30105))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U1983 )))
                        {
                            if (l_U1963 > 30000)
                            {
                                SAY_AMBIENT_SPEECH( l_U1983, "DANCING_GAME_ASK", 1, 1, 2 );
                                TASK_LOOK_AT_CHAR( l_U1983, sub_3604(), 5000, 0 );
                                PRINTSTRING( "SAY_AMBIENT_SPEECH - DANCING_GAME_ASK" );
                                PRINTNL();
                                l_U1963 = 0;
                            }
                        }
                        if ((sub_40278( 2, l_U1998, 0 )) || (g_U30105))
                        {
                            g_U30206 = l_U1983;
                            g_U30190 = l_U1938;
                            l_U1911 = 0;
                            START_NEW_SCRIPT( "dancing", 1024 );
                            l_U1876 = 1;
                            l_U1882 = 1;
                            sub_40958( 2, l_U1998 );
                            SET_PLAYER_CONTROL( sub_2048(), 0 );
                        }
                    }
                    else if (NOT (IS_CONTROL_PRESSED( 2, 23 )))
                    {
                        l_U1876 = 0;
                    }
                }
                else if (NOT (sub_27182( l_U1998 )))
                {
                    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( l_U1998 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U1983 )))
                        {
                            SAY_AMBIENT_SPEECH( l_U1983, "DANCING_REJECTED", 1, 1, 2 );
                            PRINTSTRING( "SAY_AMBIENT_SPEECH - DANCING_GAME_ASK" );
                            PRINTNL();
                        }
                    }
                }
                sub_40958( 2, l_U1998 );;
            }
            else if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dancing" )) == 0)
            {
                if (g_U30106)
                {
                    if (NOT l_U1911)
                    {
                        switch (l_U1938)
                        {
                            case 1:
                            switch (l_U1950)
                            {
                                case 0:
                                if (IS_PLAYER_PLAYING( sub_2048() ))
                                {
                                    SET_PLAYER_CONTROL( sub_2048(), 1 );
                                }
                                REQUEST_SCRIPT( "toilet_activity" );
                                if (NOT IS_SCREEN_FADED_OUT())
                                {
                                    if (NOT IS_SCREEN_FADING())
                                    {
                                        DO_SCREEN_FADE_OUT( 1000 );
                                    }
                                }
                                else if (HAS_SCRIPT_LOADED( "toilet_activity" ))
                                {
                                    g_U30205 = g_U30206;
                                    g_U30191 = 0;
                                    START_NEW_SCRIPT( "toilet_activity", 512 );
                                    l_U1950++;
                                }
                                break;
                                case 1:
                                if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "toilet_activity" )) == 0)
                                {
                                    if (IS_PLAYER_PLAYING( sub_2048() ))
                                    {
                                        SET_PLAYER_CONTROL( sub_2048(), 1 );
                                    }
                                    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "toilet_activity" );
                                    PRINTSTRING( "Reset Dancing Globals after toilet activity" );
                                    PRINTNL();
                                    sub_41931();
                                    l_U1882 = 0;
                                    l_U1950 = 0;
                                }
                                break;
                            }
                            break;
                            case 0:
                            l_U1882 = 0;
                            l_U1950 = 0;
                            break;
                            case 2:
                            PRINTSTRING( "Reset Dancing Globals - passed, hercules" );
                            PRINTNL();
                            l_U1882 = 0;
                            l_U1950 = 0;
                            sub_41931();
                            break;
                        }
                    }
                    else
                    {
                        l_U1882 = 0;
                        l_U1950 = 0;
                        sub_41931();
                    }
                }
                else if (g_U30107)
                {
                    switch (l_U1938)
                    {
                        case 1:
                        sub_41931();
                        l_U1882 = 0;
                        break;
                        case 0:
                        l_U1882 = 0;
                        break;
                        case 2:
                        sub_41931();
                        l_U1882 = 0;
                        break;
                    }
                    for ( I = 0; I < l_U1685; I++ )
                    {
                        if (l_U1685[I]._fU0)
                        {
                            if (l_U1685[I]._fU4 == 12)
                            {
                                sub_2303( ref l_U1685[I], 1 );
                            }
                        }
                    }
                    for ( I = 0; I < l_U139; I++ )
                    {
                        if (l_U139[I]._fU0)
                        {
                            if (l_U139[I]._fU4 == 12)
                            {
                                sub_2303( ref l_U139[I], 1 );
                            }
                        }
                    }
                }
                else
                {
                    sub_41931();
                    l_U1882 = 0;
                }
            }
            else if (NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "busstop" )) == 0))
            {
                l_U1911 = 1;
            };;;
        }
    }
    return;
}

int sub_38308()
{
    switch (l_U1938)
    {
        case 2:
        REQUEST_SCRIPT( "dancing" );
        REQUEST_ANIMS( "missamb_herc_female" );
        REQUEST_ANIMS( "missamb_herc_male" );
        if (((HAS_SCRIPT_LOADED( "dancing" )) AND (HAVE_ANIMS_LOADED( "missamb_herc_female" ))) AND (HAVE_ANIMS_LOADED( "missamb_herc_male" )))
        {
            return 1;
        }
        break;
        case 1:
        REQUEST_SCRIPT( "dancing" );
        REQUEST_ANIMS( "missamb_m9" );
        if ((HAS_SCRIPT_LOADED( "dancing" )) AND (HAVE_ANIMS_LOADED( "missamb_m9" )))
        {
            return 1;
        }
        break;
        case 0:
        REQUEST_SCRIPT( "dancing" );
        REQUEST_ANIMS( "missamb_bama" );
        if ((HAS_SCRIPT_LOADED( "dancing" )) AND (HAVE_ANIMS_LOADED( "missamb_bama" )))
        {
            return 1;
        }
        break;
    }
    return 0;
}

int sub_38765(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_AREA_3D( uParam0, l_U126._fU4._fU0, l_U126._fU4._fU4, l_U126._fU4._fU8, l_U126._fU16._fU0, l_U126._fU16._fU4, l_U126._fU16._fU8, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_39139()
{
    if (g_U560 == 2)
    {
        return 1;
    }
    return 0;
}

int sub_39222(boolean bParam0, boolean bParam1)
{
    unknown uVar4;
    int iVar5;
    float fVar6;

    if (IS_MINIGAME_IN_PROGRESS())
    {
        return 0;
    }
    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3604() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3604(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_CAR_UPRIGHT_VALUE( uVar4, ref fVar6 );
                if ((fVar6 < 0.95000000) || (fVar6 > 1.01100000))
                {
                    return 0;
                }
            }
        }
    }
    if (bParam0)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3604() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3604(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3604()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3604() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3604() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_2048() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_2048() )))
    {
        return 0;
    }
    return 1;
}

int sub_39541()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U22959)
    {
        return 0;
    }
    return 1;
}

int sub_39794(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_2048() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_2048() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_2048() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9200)))
                {
                    if (NOT sub_39890())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_3604() )) == nil)
                        {
                            if (g_U10534 <= iParam0)
                            {
                                if (g_U10535 == 0)
                                {
                                    if (sub_39975())
                                    {
                                        return 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_39890()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_39975()
{
    return sub_39986( 0, 0 );
}

int sub_39986(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U95._fU104 = 1;
    }
    if ((uParam1) AND (g_U560 != 9))
    {
        g_U95._fU100 = 1;
    }
    return 1;
}

int sub_40278(unknown uParam0, string sParam1, unknown uParam2)
{
    string sVar5;
    string sVar6;

    if (USING_STANDARD_CONTROLS())
    {
        sVar5 = "CNTBUT1";
        sVar6 = "CNTBUT2";
    }
    else
    {
        sVar5 = "CNTBUT2";
        sVar6 = "CNTBUT1";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (sub_39794( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_2048(), 0 );
                l_U4 = 1;
            }
            g_U10534 = uParam0;
            l_U5 = 1;
            StrCopy( ref g_U10536, sParam1, 16 );
            g_U10540 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_40553();
                l_U3 = 1;
                g_U10535 = 6;
                if (NOT (IS_STRING_NULL( sParam1 )))
                {
                    if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))
                    {
                        CLEAR_HELP();
                    }
                }
                return 1;
            }
            else
            {
                g_U10535 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U2 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U2)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U2 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_40553()
{
    return sub_39986( 1, 1 );
}

void sub_40958(int iParam0, string sParam1)
{
    string sVar4;

    if (USING_STANDARD_CONTROLS())
    {
        sVar4 = "CNTBUT1";
    }
    else
    {
        sVar4 = "CNTBUT2";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (NOT (IS_STRING_NULL( sParam1 )))
    {
        if (COMPARE_STRING( sParam1, ref g_U10536 ))
        {
            if ((g_U10534 == iParam0) AND (l_U5))
            {
                StrCopy( ref g_U10536, "", 16 );
                g_U10534 = 0;
                g_U10535 = 0;
                g_U10540 = nil;
                l_U5 = 0;
                if (l_U3)
                {
                    sub_41179();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_2048(), 1 );
                l_U4 = 0;
            }
            if (l_U2)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U2 = 0;
            }
        }
    }
    return;
}

void sub_41179()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_41931()
{
    g_U30105 = 0;
    g_U30106 = 0;
    g_U30107 = 0;
    g_U30108 = 0;
    PRINTSTRING( "RESET_DANCING_GLOBALS() - Called" );
    PRINTNL();
    return;
}

void sub_42544(int iParam0)
{
    if (iParam0->_fU0)
    {
        if (NOT (iParam0->_fU24 == g_U30207))
        {
            if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
            {
                if (IS_CHAR_IN_AREA_3D( iParam0->_fU24, g_U30251._fU0, g_U30251._fU4, g_U30251._fU8, g_U30254._fU0, g_U30254._fU4, g_U30254._fU8, 0 ))
                {
                    sub_42661( iParam0, 1 );
                }
            }
        }
    }
    return;
}

void sub_42661(int iParam0, boolean bParam1)
{
    int iVar4;

    iVar4 = 1;
    if ((iParam0->_fU24 == g_U30208) AND (bParam1))
    {
        if (DOES_CHAR_EXIST( iParam0->_fU24 ))
        {
            PRINTSTRING( "Deleting g_MissionDancePedID" );
            PRINTNL();
            DELETE_CHAR( iParam0 + 24 );
        }
    }
    if ((NOT (iParam0->_fU24 == g_U30208)) || (iParam0->_fU24 == nil))
    {
        if (NOT (sub_2334( iParam0->_fU24 )))
        {
            if (DOES_CHAR_EXIST( iParam0->_fU24 ))
            {
                if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
                {
                    GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 26, ref l_U1999 );
                    if (NOT (l_U1999 == 7))
                    {
                        if (IS_CHAR_ON_SCREEN( iParam0->_fU24 ))
                        {
                            iVar4 = 0;
                        }
                    }
                    GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 91, ref l_U1999 );
                    if (NOT (l_U1999 == 7))
                    {
                        iVar4 = 0;
                    }
                    if (IS_PLAYER_PLAYING( sub_2048() ))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3604(), iParam0->_fU24, 5.00000000, 5.00000000, 2.00000000, 0 ))
                        {
                            if (IS_CHAR_ON_SCREEN( iParam0->_fU24 ))
                            {
                                iVar4 = 0;
                            }
                        }
                    }
                }
                if (l_U1889)
                {
                    if (NOT (sub_3917( sub_3604(), l_U1938 )))
                    {
                        bParam1 = true;
                    }
                }
                if ((iVar4) || (bParam1))
                {
                    iParam0->_fU8 = 0;
                    iParam0->_fU12 = 0;
                    if (l_U1877)
                    {
                        PRINTSTRING( "CLUB_PED_REMOVED - called from REMOVE_CLUB_PED" );
                        PRINTNL();
                    }
                    sub_2303( iParam0, 1 );
                    sub_43141( iParam0 );
                }
            }
            else if (bParam1)
            {
                iParam0->_fU8 = 0;
                iParam0->_fU12 = 0;
                iParam0->_fU16 = 0;
            }
        }
    }
    return;
}

void sub_43141(int iParam0)
{
    if (NOT (iParam0->_fU48 == 0))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( iParam0->_fU48 );
    }
    switch (iParam0->_fU4)
    {
        case 10:
        case 12:
        sub_43207();
        break;
        default:
        REMOVE_ANIMS( "missnightclub" );
        break;
    }
    return;
}

void sub_43207()
{
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "dancing" );
    return;
}

void sub_43689()
{
    PRINTSTRING( "RESET_CLUB_VARIABLES() - called" );
    PRINTNL();
    l_U1874 = 0;
    l_U1875 = 0;
    l_U1876 = 0;
    l_U1878 = 0;
    l_U1879 = 0;
    l_U1880 = 0;
    l_U1881 = 0;
    l_U1882 = 0;
    l_U1883 = 0;
    sub_1798();
    g_U30102 = 0;
    g_U30103 = 0;
    l_U1937 = 0;
    l_U1935 = 0;
    l_U1936 = 0;
    l_U1939 = 0;
    l_U1943 = 0;
    l_U1945 = 0;
    l_U1946 = 0;
    l_U1947 = 0;
    sub_5665();
    return;
}

void sub_43934(int iParam0)
{
    if (iParam0->_fU0)
    {
        iParam0->_fU20 += l_U1948;
        if (iParam0->_fU8 == 0)
        {
            if (DOES_CHAR_EXIST( iParam0->_fU24 ))
            {
                sub_42661( iParam0, 0 );
            }
            else if (NOT l_U1875)
            {
                if (iParam0->_fU20 > 0)
                {
                    switch (iParam0->_fU4)
                    {
                        case 1:
                        case 4:
                        case 5:
                        case 8:
                        case 10:
                        case 12:
                        if (((sub_3889( sub_3604(), l_U1938, 1 )) || (sub_29981( sub_3604(), l_U1938 ))) AND ((NOT g_U30103) || (sub_30766())))
                        {
                            iParam0->_fU8 = 1;
                        }
                        break;
                        case 14:
                        if ((NOT l_U1914) AND (NOT g_U30180))
                        {
                            if ((NOT g_U30102) AND (NOT l_U1897))
                            {
                                if (NOT (sub_44249( sub_3604(), l_U1938 )))
                                {
                                    iParam0->_fU8 = 1;
                                }
                            }
                        }
                        else if (g_U30180)
                        {
                            if ((NOT g_U30153) AND (NOT g_U12379))
                            {
                                g_U30180 = 0;
                            }
                        }
                        break;
                        case 2:
                        case 9:
                        case 13:
                        if (sub_44382( (iParam0^) ))
                        {
                            iParam0->_fU8 = 1;
                        }
                        else if (NOT g_U30102)
                        {
                            if (NOT (sub_44249( sub_3604(), l_U1938 )))
                            {
                                iParam0->_fU8 = 1;
                            }
                        }
                        break;
                        case 6:
                        case 7:
                        if ((NOT g_U30102) AND (NOT l_U1897))
                        {
                            if (NOT (sub_44249( sub_3604(), l_U1938 )))
                            {
                                iParam0->_fU8 = 1;
                            }
                        }
                        break;
                    }
                }
            }
        }
        if (iParam0->_fU8 == 1)
        {
            if ((NOT l_U1875) AND (sub_44555( iParam0 )))
            {
                switch (iParam0->_fU4)
                {
                    case 1:
                    case 5:
                    case 8:
                    case 10:
                    case 12:
                    if (sub_3889( sub_3604(), l_U1938, 1 ))
                    {
                        if (((sub_44710( iParam0 )) AND (sub_29981( sub_3604(), l_U1938 ))) AND ((NOT g_U30103) || (sub_30766())))
                        {
                            sub_45529( iParam0 );
                        }
                    }
                    else
                    {
                        sub_42661( iParam0, 0 );
                    }
                    break;
                    case 14:
                    if (sub_52980( sub_3604(), l_U1938 ))
                    {
                        if (sub_44710( iParam0 ))
                        {
                            sub_45529( iParam0 );
                        }
                    }
                    break;
                    case 2:
                    case 13:
                    if (sub_44710( iParam0 ))
                    {
                        if (sub_53067( sub_3604(), l_U1938 ))
                        {
                            if (NOT g_U30102)
                            {
                                if (NOT l_U1875)
                                {
                                    sub_45529( iParam0 );
                                }
                            }
                        }
                    }
                    break;
                    case 9:
                    if (sub_44710( iParam0 ))
                    {
                        if ((sub_53067( sub_3604(), l_U1938 )) || (sub_44382( (iParam0^) )))
                        {
                            if ((NOT g_U30102) || (sub_44382( (iParam0^) )))
                            {
                                sub_45529( iParam0 );
                            }
                        }
                    }
                    break;
                    case 6:
                    if ((sub_53067( sub_3604(), l_U1938 )) || (sub_3917( sub_3604(), l_U1938 )))
                    {
                        if (sub_44710( iParam0 ))
                        {
                            sub_45529( iParam0 );
                        }
                    }
                    break;
                    case 4:
                    if (sub_3889( sub_3604(), l_U1938, 1 ))
                    {
                        if (((sub_44710( iParam0 )) AND (sub_29981( sub_3604(), l_U1938 ))) AND (NOT g_U30103))
                        {
                            sub_45529( iParam0 );
                        }
                    }
                    else
                    {
                        sub_42661( iParam0, 0 );
                    }
                    break;
                    case 7:
                    if (sub_52980( sub_3604(), l_U1938 ))
                    {
                        if (sub_44710( iParam0 ))
                        {
                            sub_45529( iParam0 );
                        }
                    }
                    break;
                }
            }
        }
        if (iParam0->_fU8 == 2)
        {
            if (l_U1875)
            {
                sub_53685( iParam0 );
            }
            else
            {
                switch (iParam0->_fU4)
                {
                    case 1:
                    case 5:
                    case 8:
                    case 10:
                    case 12:
                    if ((sub_29981( sub_3604(), l_U1938 )) AND ((NOT g_U30103) || (sub_30766())))
                    {
                        sub_53685( iParam0 );
                    }
                    else
                    {
                        sub_42661( iParam0, 0 );
                    }
                    break;
                    case 14:
                    sub_53685( iParam0 );
                    break;
                    case 6:
                    if (NOT (sub_44249( sub_3604(), l_U1938 )))
                    {
                        sub_53685( iParam0 );
                    }
                    else
                    {
                        sub_42661( iParam0, 0 );
                    }
                    break;
                    case 4:
                    if ((sub_29981( sub_3604(), l_U1938 )) AND (NOT g_U30103))
                    {
                        sub_53685( iParam0 );
                    }
                    else
                    {
                        sub_42661( iParam0, 0 );
                    }
                    break;
                    case 2:
                    case 9:
                    case 13:
                    if (sub_44382( (iParam0^) ))
                    {
                        sub_53685( iParam0 );
                    }
                    else if ((sub_53067( sub_3604(), l_U1938 )) AND (NOT g_U30102))
                    {
                        sub_53685( iParam0 );
                    }
                    else
                    {
                        sub_42661( iParam0, 0 );
                    }
                    break;
                    case 7:
                    if (sub_52980( sub_3604(), l_U1938 ))
                    {
                        sub_53685( iParam0 );
                    }
                    else
                    {
                        sub_42661( iParam0, 0 );
                    }
                    break;
                }
            }
        }
    }
    else if (DOES_CHAR_EXIST( iParam0->_fU24 ))
    {
        sub_42661( iParam0, 0 );
    }
    else if (NOT g_U30097[l_U1938])
    {
        if (NOT (iParam0->_fU4 == 0))
        {
            if (IS_SCREEN_FADED_OUT())
            {
                iParam0->_fU0 = 1;
            }
            else if ((((NOT (sub_3889( sub_3604(), l_U1938, 0 ))) AND (NOT (iParam0->_fU4 == 2))) AND (NOT (iParam0->_fU4 == 13))) AND (NOT (iParam0->_fU4 == 9)))
            {
                iParam0->_fU0 = 1;
            }
            else if (NOT (sub_28310( iParam0->_fU28, 1.50000000 )))
            {
                iParam0->_fU0 = 1;
            };;;
        }
    };;;
    return;
}

int sub_44249(unknown uParam0, unknown uParam1)
{
    int iVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (sub_3917( uParam0, uParam1 )))
        {
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar4 );
            if (NOT (iVar4 == nil))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_44382(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14)
{
    if ((uParam0._fU52 == 9) || (uParam0._fU52 == 10))
    {
        return 1;
    }
    return 0;
}

int sub_44555(unknown uParam0)
{
    return 1;
}

int sub_44710(int iParam0)
{
    int iVar3;

    if (iParam0->_fU0)
    {
        iVar3 = sub_44731( iParam0 );
        if (NOT (iVar3 == 0))
        {
            REQUEST_MODEL( iVar3 );
            REQUEST_ANIMS( "missnightclub" );
            if (HAS_MODEL_LOADED( iVar3 ))
            {
                return 1;
            }
            else if (IS_SCREEN_FADED_OUT())
            {
                if (NOT g_U30176)
                {
                    LOAD_ALL_OBJECTS_NOW();
                }
            }
        }
        else
        {
            PRINTSTRING( "ARE_ASSETS_LOADED_FOR_CREATING_CLUB_PED - " );
            if (l_U1886)
            {
                PRINTSTRING( "global club ped " );
                PRINTINT( l_U1951 );
            }
            else
            {
                PRINTSTRING( "club ped " );
                PRINTINT( l_U1951 );
            }
            PRINTNL();
            SCRIPT_ASSERT( "ARE_ASSETS_LOADED_FOR_CREATING_CLUB_PED - trying to load DUMMY_MODEL_FOR_SCRIPT" );
        }
    }
    return 0;
}

void sub_44731(int iParam0)
{
    if (((((g_U30162[l_U1938]) || (iParam0->_fU4 == 2)) || (iParam0->_fU4 == 13)) || (iParam0->_fU4 == 6)) || (iParam0->_fU4 == 7))
    {
        if (((iParam0->_fU52 == 2) || (iParam0->_fU52 == 5)) || (iParam0->_fU52 == 6))
        {
            iParam0->_fU48 = l_U1988;
            return iParam0->_fU48;
        }
        if (((iParam0->_fU52 == 1) || (iParam0->_fU52 == 3)) || (iParam0->_fU52 == 4))
        {
            iParam0->_fU48 = l_U1991;
            return iParam0->_fU48;
        }
    }
    if (NOT (iParam0->_fU52 == 0))
    {
        iParam0->_fU48 = sub_24339( iParam0->_fU52 );
    }
    if (iParam0->_fU48 == 0)
    {
        if (l_U1877)
        {
            PRINTSTRING( "inPed.iModel = " );
            PRINTINT( iParam0->_fU52 );
            PRINTNL();
            if (l_U1886)
            {
                PRINTSTRING( "Global iClubPedBeingProcessed = " );
                PRINTINT( l_U1951 );
                PRINTNL();
            }
            else
            {
                PRINTSTRING( "iClubPedBeingProcessed = " );
                PRINTINT( l_U1951 );
                PRINTNL();
            }
        }
    }
    return iParam0->_fU48;
}

void sub_45529(int iParam0)
{
    unknown uVar3;
    string sVar4;
    unknown uVar5;
    char[16] cVar6;

    if (iParam0->_fU0)
    {
        if ((sub_45550( iParam0 )) || (l_U1902))
        {
            if (((sub_45621( iParam0 )) || (g_U30114[l_U1938])) || (l_U1902))
            {
                if ((NOT (sub_46452( iParam0->_fU28, g_U30251, g_U30254 ))) || (l_U1902))
                {
                    if ((sub_46552( iParam0 )) || (l_U1902))
                    {
                        if (HAS_MODEL_LOADED( iParam0->_fU48 ))
                        {
                            if (NOT (DOES_CHAR_EXIST( iParam0->_fU24 )))
                            {
                                if (((NOT g_U30093[l_U1938]) || (sub_3889( sub_3604(), l_U1938, 0 ))) || (l_U1902))
                                {
                                    if (sub_47194( iParam0->_fU56 ))
                                    {
                                        sVar4 = l_U1716[iParam0->_fU56]._fU0;
                                    }
                                    else
                                    {
                                        sVar4 = "";
                                    }
                                    if (NOT (DOES_CHAR_EXIST( iParam0->_fU24 )))
                                    {
                                        CLEAR_AREA( ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 1.20000000, 0 );
                                        if (NOT (sub_33564( iParam0->_fU52 )))
                                        {
                                            CREATE_CHAR( 4, iParam0->_fU48, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, iParam0 + 24, 1 );
                                        }
                                        else
                                        {
                                            CREATE_CHAR( 5, iParam0->_fU48, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, iParam0 + 24, 1 );
                                        }
                                        if (DOES_CHAR_EXIST( iParam0->_fU24 ))
                                        {
                                            sub_47444( iParam0 );
                                            if (sub_3003( iParam0->_fU56 ))
                                            {
                                                SET_CHAR_COLLISION( iParam0->_fU24, 0 );
                                                FREEZE_CHAR_POSITION( iParam0->_fU24, 1 );
                                            }
                                            SET_CHAR_RANDOM_COMPONENT_VARIATION( iParam0->_fU24 );
                                            SET_CHAR_HEADING( iParam0->_fU24, iParam0->_fU40 );
                                            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( iParam0->_fU24, 1 );
                                            if (((NOT (iParam0->_fU4 == 2)) AND (NOT (iParam0->_fU4 == 7))) AND (NOT (iParam0->_fU4 == 13)))
                                            {
                                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0->_fU24, 1 );
                                            }
                                            if (sub_3003( iParam0->_fU56 ))
                                            {
                                                SET_CHAR_SUFFERS_CRITICAL_HITS( iParam0->_fU24, 0 );
                                            }
                                            uVar5 = sub_48287( iParam0->_fU28 );
                                            if (NOT (sub_27182( uVar5 )))
                                            {
                                                SET_ROOM_FOR_CHAR_BY_NAME( iParam0->_fU24, uVar5 );
                                            }
                                            SET_PED_ALPHA( iParam0->_fU24, 255 );
                                            if (l_U1886)
                                            {
                                                StrCopy( ref cVar6, "Global Ped ", 16 );
                                            }
                                            else
                                            {
                                                StrCopy( ref cVar6, "Club Ped ", 16 );
                                            }
                                            ConcatString(ref cVar6, l_U1951, 16);
                                            SET_CHAR_NAME_DEBUG( iParam0->_fU24, ref cVar6 );
                                            if (sub_49659( iParam0 ))
                                            {
                                                SET_CHAR_IN_CUTSCENE( iParam0->_fU24, 1 );
                                            }
                                            sub_49709( iParam0->_fU56, iParam0 + 56, -1 );
                                            if (iParam0->_fU52 == 10)
                                            {
                                                SET_CHAR_PROP_INDEX( iParam0->_fU24, 1, 0 );
                                                SET_CHAR_PROP_INDEX( iParam0->_fU24, 0, 0 );
                                            }
                                            if ((iParam0->_fU4 == 10) || (iParam0->_fU4 == 12))
                                            {
                                                SET_DONT_ACTIVATE_RAGDOLL_FROM_PLAYER_IMPACT( iParam0->_fU24, 1 );
                                            }
                                            if (l_U1886)
                                            {
                                                PRINTSTRING( "**** copying ped id back to g_clubped ****" );
                                                PRINTNL();
                                                uVar3 = sub_50421( iParam0->_fU24, ref l_U1685 );
                                                PRINTSTRING( "i = " );
                                                PRINTINT( uVar3 );
                                                PRINTNL();
                                                PRINTSTRING( "iClubPedsFromGlobalSlotNumber[i] = " );
                                                PRINTINT( l_U1954[uVar3] );
                                                PRINTNL();
                                                uVar3 = l_U1954[uVar3];
                                                g_U29971[uVar3]._fU12 = iParam0->_fU24;
                                                PRINTSTRING( "inPed.iModel = " );
                                                PRINTINT( iParam0->_fU52 );
                                                PRINTNL();
                                                PRINTSTRING( "inPed.iType = " );
                                                PRINTINT( iParam0->_fU4 );
                                                PRINTNL();
                                            }
                                            else if (((((((iParam0->_fU4 == 1) || (iParam0->_fU4 == 2)) || (iParam0->_fU4 == 3)) || (iParam0->_fU4 == 4)) || (iParam0->_fU4 == 6)) || (iParam0->_fU4 == 7)) || (iParam0->_fU4 == 10))
                                            {
                                                ALWAYS_USE_HEAD_ON_HORN_ANIM_WHEN_DEAD_IN_CAR( iParam0->_fU24, 1 );
                                            }
                                            if (l_U1938 == 1)
                                            {
                                                if (NOT (g_U30198 == -1))
                                                {
                                                    if (g_U29971[g_U30198]._fU12 == iParam0->_fU24)
                                                    {
                                                        SET_CHAR_COMPONENT_VARIATION( iParam0->_fU24, 1, 0, 0 );
                                                        CLEAR_AREA( ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 1.00000000, 0 );
                                                        if (DOES_OBJECT_EXIST( l_U1997 ))
                                                        {
                                                            DELETE_OBJECT( ref l_U1997 );
                                                        }
                                                        sub_2704();
                                                    }
                                                }
                                            }
                                            if (iParam0->_fU4 == 12)
                                            {
                                                l_U1983 = iParam0->_fU24;
                                                l_U2065 = {iParam0->_fU28};
                                            }
                                            if (iParam0->_fU4 == 9)
                                            {
                                                switch (l_U1938)
                                                {
                                                    case 2:
                                                    g_U30211 = iParam0->_fU24;
                                                    break;
                                                    case 0:
                                                    if (NOT (DOES_CHAR_EXIST( g_U30213 )))
                                                    {
                                                        g_U30213 = iParam0->_fU24;
                                                    }
                                                    break;
                                                    case 1:
                                                    g_U30212 = iParam0->_fU24;
                                                    break;
                                                }
                                            }
                                            if (l_U1938 == 2)
                                            {
                                                if (NOT (g_U30201 == -1))
                                                {
                                                    if (g_U29971[g_U30201]._fU12 == iParam0->_fU24)
                                                    {
                                                        SET_CHAR_COMPONENT_VARIATION( iParam0->_fU24, 0, 0, 1 );
                                                        SET_CHAR_COMPONENT_VARIATION( iParam0->_fU24, 1, 0, 1 );
                                                        SET_CHAR_COMPONENT_VARIATION( iParam0->_fU24, 2, 0, 0 );
                                                        SET_CHAR_COMPONENT_VARIATION( iParam0->_fU24, 3, 1, 0 );
                                                        SET_CHAR_COMPONENT_VARIATION( iParam0->_fU24, 7, 0, 1 );
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
                                    {
                                        if ((iParam0->_fU4 == 8) || (iParam0->_fU4 == 9))
                                        {
                                            SET_CHAR_DECISION_MAKER( iParam0->_fU24, g_U30183 );
                                            SET_COMBAT_DECISION_MAKER( iParam0->_fU24, g_U30184 );
                                            SET_CHAR_WILL_USE_COVER( iParam0->_fU24, 1 );
                                            SET_CHAR_SPHERE_DEFENSIVE_AREA( iParam0->_fU24, iParam0->_fU28, 10.00000000 );
                                            SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU24, 23 );
                                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0->_fU24, 0 );
                                        }
                                        else
                                        {
                                            SET_CHAR_DECISION_MAKER( iParam0->_fU24, g_U30182 );
                                        }
                                        if (g_U12379)
                                        {
                                            if ((((NOT (iParam0->_fU4 == 8)) AND (NOT (iParam0->_fU4 == 5))) AND (NOT (iParam0->_fU4 == 9))) AND (NOT (iParam0->_fU4 == 14)))
                                            {
                                                SET_CHAR_NEVER_TARGETTED( iParam0->_fU24, 1 );
                                            }
                                        }
                                        if (iParam0->_fU4 == 2)
                                        {
                                            if (NOT (sub_27182( sVar4 )))
                                            {
                                                if (COMPARE_STRING( sVar4, "Scenario_SmokingOutsideOffice" ))
                                                {
                                                    if (sub_33564( iParam0->_fU52 ))
                                                    {
                                                        GIVE_PED_AMBIENT_OBJECT( iParam0->_fU24, -2037134882 );
                                                    }
                                                    else
                                                    {
                                                        GIVE_PED_AMBIENT_OBJECT( iParam0->_fU24, -268530289 );
                                                    }
                                                }
                                            }
                                        }
                                        sub_51542( iParam0, 0 );
                                        iParam0->_fU8 = 2;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_45550(unknown uParam0)
{
    if (g_U30188 >= l_U1941)
    {
        return 0;
    }
    if (l_U1946 > l_U1942)
    {
        return 0;
    }
    return 1;
}

int sub_45621(int iParam0)
{
    int iVar3;
    unknown uVar4;

    if (((NOT IS_SCREEN_FADED_OUT()) AND (NOT g_U30114[l_U1938])) AND (IS_PLAYER_CONTROL_ON( sub_2048() )))
    {
        if (((iParam0->_fU4 == 2) || (iParam0->_fU4 == 9)) || (iParam0->_fU4 == 13))
        {
            GET_INTERIOR_FROM_CHAR( sub_3604(), ref iVar3 );
            if (iVar3 == nil)
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_3604(), ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 40.00000000, 40.00000000, 40.00000000, 0 ))
                {
                    GET_GAME_VIEWPORT_ID( ref uVar4 );
                    if (NOT (iParam0->_fU4 == 9))
                    {
                        if (CAM_IS_SPHERE_VISIBLE( uVar4, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 2.00000000 ))
                        {
                            return 0;
                        }
                    }
                    else if (CAM_IS_SPHERE_VISIBLE( uVar4, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 1.20000000 ))
                    {
                        return 0;
                    }
                }
            }
            else if (LOCATE_CHAR_ANY_MEANS_3D( sub_3604(), ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 5.00000000, 5.00000000, 5.00000000, 0 ))
            {
                GET_GAME_VIEWPORT_ID( ref uVar4 );
                if (NOT (iParam0->_fU4 == 9))
                {
                    if (CAM_IS_SPHERE_VISIBLE( uVar4, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 2.00000000 ))
                    {
                        return 0;
                    }
                }
                else if (CAM_IS_SPHERE_VISIBLE( uVar4, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 1.20000000 ))
                {
                    return 0;
                }
            }
        }
        if ((iParam0->_fU16 == -1) AND (iParam0->_fU20 > 0))
        {
            if (sub_3889( sub_3604(), l_U1938, 0 ))
            {
                GET_GAME_VIEWPORT_ID( ref uVar4 );
                if ((CAM_IS_SPHERE_VISIBLE( uVar4, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 2.00000000 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3604(), ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 5.00000000, 5.00000000, 5.00000000, 0 )))
                {
                    return 0;
                }
            }
        }
        if (iParam0->_fU4 == 12)
        {
            GET_GAME_VIEWPORT_ID( ref uVar4 );
            if ((CAM_IS_SPHERE_VISIBLE( uVar4, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 1.50000000 )) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_3604(), ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 7.00000000, 7.00000000, 5.00000000, 0 )))
            {
                return 0;
            }
        }
        if (iParam0->_fU20 < 0)
        {
            if (NOT (sub_2334( iParam0->_fU24 )))
            {
                return 0;
            }
        }
    }
    if (NOT (iParam0->_fU4 == 12))
    {
        if (((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dancing" )) > 0) AND (NOT IS_SCREEN_FADED_OUT()))
        {
            return 0;
        }
    }
    return 1;
}

int sub_46452(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    if ((((((uParam0._fU0 > uParam3._fU0) AND (uParam0._fU4 > uParam3._fU4)) AND (uParam0._fU8 > uParam3._fU8)) AND (uParam0._fU0 < uParam6._fU0)) AND (uParam0._fU4 < uParam6._fU4)) AND (uParam0._fU8 < uParam6._fU8))
    {
        return 1;
    }
    return 0;
}

int sub_46552(int iParam0)
{
    switch (iParam0->_fU4)
    {
        case 8:
        case 9:
        case 5:
        return 1;
        break;
        case 14:
        if (g_U15811[31])
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
        case 7:
        if (l_U1938 == 2)
        {
            return 1;
        }
        else if (sub_46697( iParam0->_fU56 ))
        {
            return 1;
        }
        break;
        case 2:
        if (iParam0->_fU56 == 2)
        {
            if (sub_46697( 3 ))
            {
                return 1;
            }
        }
        else if (sub_46697( iParam0->_fU56 ))
        {
            return 1;
        }
        break;
        case 13:
        return 1;
        break;
        default:
        if (sub_46697( iParam0->_fU56 ))
        {
            return 1;
        }
        break;
    }
    return 0;
}

int sub_46697(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    unknown uVar6;

    switch (uParam0)
    {
        case 4:
        case 10:
        case 8:
        case 9:
        case 11:
        case 12:
        iVar3 = 4;
        iVar4 = 6;
        break;
        case 15:
        if ((l_U1938 == 0) AND ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Tony6" )) > 0))
        {
            return 1;
        }
        else
        {
            iVar3 = 23;
            iVar4 = 4;
        }
        break;
        case 3:
        case 17:
        if ((l_U1938 == 0) AND ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Tony6" )) > 0))
        {
            return 1;
        }
        else
        {
            iVar3 = 22;
            iVar4 = 6;
        }
        break;
        default:
        return 1;
        break;
    }
    GET_TIME_OF_DAY( ref iVar5, ref uVar6 );
    if (iVar4 < iVar3)
    {
        if ((iVar5 >= iVar3) || (iVar5 < iVar4))
        {
            return 1;
        }
    }
    else if ((iVar5 >= iVar3) AND (iVar5 < iVar4))
    {
        return 1;
    }
    return 0;
}

int sub_47194(int iParam0)
{
    if (((iParam0 == 15) || (iParam0 == 16)) || (iParam0 == 17))
    {
        return 1;
    }
    return 0;
}

void sub_47444(int iParam0)
{
    l_U1940++;
    g_U30188++;
    l_U1946++;
    if (l_U1877)
    {
        PRINTSTRING( "CLUB PED CREATED - " );
        switch (iParam0->_fU4)
        {
            case 1:
            PRINTSTRING( "INTERIOR_CROWD" );
            break;
            case 2:
            PRINTSTRING( "EXTERIOR_CROWD" );
            break;
            case 13:
            PRINTSTRING( "REFUSED_ENTRY" );
            break;
            case 4:
            PRINTSTRING( "INTERIOR_PATROL" );
            break;
            case 5:
            PRINTSTRING( "INTERIOR_STAFF" );
            break;
            case 14:
            PRINTSTRING( "JONI" );
            break;
            case 6:
            PRINTSTRING( "BOTH_PATROL" );
            break;
            case 7:
            PRINTSTRING( "STAIRWELL_PED" );
            break;
            case 8:
            PRINTSTRING( "INTERIOR_BOUNCER" );
            break;
            case 9:
            PRINTSTRING( "EXTERIOR_BOUNCER" );
            break;
            case 10:
            PRINTSTRING( "INTERIOR_DANCER" );
            break;
            case 12:
            PRINTSTRING( "SPECIFIC_DANCER" );
            break;
        }
        PRINTSTRING( ", iTotalPeds = " );
        PRINTINT( l_U1940 );
        if (l_U1886)
        {
            PRINTSTRING( ", global club ped - " );
            PRINTINT( l_U1951 );
        }
        else
        {
            PRINTSTRING( ", club ped - " );
            PRINTINT( l_U1951 );
        }
        PRINTNL();
    }
    return;
}

string sub_48287(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (sub_46452( uParam0, -489.24960000, 137.39240000, 10.33000000, -476.42460000, 167.81740000, 13.62370000 ))
    {
        return "E2_MaisonRoomTop";
    }
    if (sub_46452( uParam0, -489.53600000, 138.46910000, 5.00000000, -476.73600000, 165.44410000, 10.60640000 ))
    {
        if (NOT (sub_46452( uParam0, -489.38310000, 158.32430000, 5.00000000, -479.73310000, 161.82430000, 9.68890000 )))
        {
            return "E2_MaisonRoommain";
        }
    }
    if (sub_46452( uParam0, -489.38310000, 158.32430000, 5.00000000, -479.73310000, 161.82430000, 9.68890000 ))
    {
        return "E2_Maisonbar";
    }
    if (sub_46452( uParam0, -476.68000000, 154.01000000, 5.00000000, -471.46310000, 156.21000000, 11.86410000 ))
    {
        return "E2_MaisonRoomsteps1";
    }
    if (sub_46452( uParam0, -476.23730000, 156.22570000, 5.00000000, -471.66230000, 166.60070000, 11.67420000 ))
    {
        return "E2_MaisonRoomt2";
    }
    if (sub_46452( uParam0, -471.24200000, 156.18820000, 5.00000000, -468.24200000, 166.56320000, 11.67410000 ))
    {
        return "E2_MaisonRoomt03";
    }
    if (sub_46452( uParam0, -474.83110000, 144.02730000, 5.00000000, -470.93110000, 150.60230000, 11.86380000 ))
    {
        return "E2_MaisonsecurRoom";
    }
    if ((sub_46452( uParam0, -471.45100000, 139.90120000, 5.00000000, -468.07600000, 156.20120000, 11.86410000 )) || (sub_46452( uParam0, -473.07430000, 139.93400000, 5.00000000, -467.99930000, 142.23400000, 11.86410000 )))
    {
        return "E2_MaisonRoomfront";
    }
    if (sub_46452( uParam0, -476.64990000, 139.87450000, 5.00000000, -473.07490000, 142.12450000, 11.33070000 ))
    {
        return "E2_MaisonRoomsteps2";
    }
    if (sub_46452( uParam0, -440.38200000, 354.95600000, 9.00000000, -437.18200000, 358.75600000, 13.71660000 ))
    {
        return "Room_Entrance";
    }
    if (sub_46452( uParam0, -440.03200000, 347.35350000, 9.00000000, -437.43200000, 354.97850000, 13.71670000 ))
    {
        return "Room_lobby";
    }
    if (sub_46452( uParam0, -437.35140000, 347.40860000, 9.00000000, -424.87640000, 356.00860000, 13.71670000 ))
    {
        return "Room_Bar";
    }
    if (sub_46452( uParam0, -403.71630000, 397.53020000, 12.00000000, -396.67000000, 401.95520000, 16.41520000 ))
    {
        return "gayclubvestibule";
    }
    if (sub_46452( uParam0, -397.62090000, 393.82890000, 4.00000000, -389.79590000, 401.52890000, 13.29600000 ))
    {
        return "gayclubstrs";
    }
    if (sub_46452( uParam0, -400.69110000, 401.43300000, 1.00000000, -379.14110000, 417.88300000, 7.67430000 ))
    {
        return "gayclubroom";
    }
    if ((sub_46452( uParam0, -398.37480000, 417.79220000, 4.00000000, -377.19980000, 431.96720000, 12.05160000 )) || (sub_46452( uParam0, -397.59980000, 431.71720000, 4.00000000, -383.42480000, 441.21720000, 12.05160000 )))
    {
        return "gaydanceflr";
    }
    if (sub_46452( uParam0, -383.11910000, 432.43100000, 4.00000000, -369.26910000, 442.85600000, 8.17430000 ))
    {
        return "gaybackoffice";
    }
    return "";
}

int sub_49659(unknown uParam0)
{
    return 0;
}

int sub_49709(unknown uParam0, unknown uParam1, int iParam2)
{
    unknown uVar5;
    int iVar6;

    iVar6 = -1;
    switch (uParam0)
    {
        case 8:
        case 9:
        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar5 );
        switch (uVar5)
        {
            case 0:
            iVar6 = 8;
            break;
            case 1:
            iVar6 = 9;
            break;
        }
        break;
        case 11:
        case 12:
        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar5 );
        switch (uVar5)
        {
            case 0:
            iVar6 = 11;
            break;
            case 1:
            iVar6 = 12;
            break;
        }
        break;
    }
    if (l_U1938 == 1)
    {
        switch (uParam0)
        {
            case 47:
            case 20:
            case 21:
            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref uVar5 );
            switch (uVar5)
            {
                case 0:
                iVar6 = 47;
                break;
                case 1:
                iVar6 = 20;
                break;
                case 2:
                iVar6 = 21;
                break;
            }
            break;
            case 22:
            case 23:
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar5 );
            switch (uVar5)
            {
                case 0:
                iVar6 = 22;
                break;
                case 1:
                iVar6 = 23;
                break;
            }
            break;
        }
    }
    if (l_U1938 == 2)
    {
        switch (uParam0)
        {
            case 44:
            case 48:
            case 49:
            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref uVar5 );
            switch (uVar5)
            {
                case 0:
                iVar6 = 44;
                break;
                case 1:
                iVar6 = 48;
                break;
                case 2:
                iVar6 = 49;
                break;
            }
            break;
        }
    }
    if (iVar6 == -1)
    {
        (uParam1^) = uParam0;
        return 1;
        break;
    }
    if (iParam2 == -1)
    {
        (uParam1^) = iVar6;
        return 1;
        break;
    }
    if (iVar6 == iParam2)
    {
        return 0;
        break;
    }
    (uParam1^) = iVar6;
    return 1;
}

int sub_50421(int iParam0, unknown uParam1)
{
    int Result;

    for ( Result = 0; Result < (uParam1^); Result++ )
    {
        if (NOT (iParam0 == nil))
        {
            if ((uParam1^)[Result]._fU24 == iParam0)
            {
                return Result;
            }
        }
    }
    return -1;
}

void sub_51542(int iParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (NOT (iParam0->_fU12 == 99))
        {
            if ((iParam0->_fU4 == 1) || (iParam0->_fU4 == 7))
            {
                if (sub_51601( iParam0->_fU56 ))
                {
                    if (NOT (DOES_OBJECT_EXIST( iParam0->_fU44 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3604(), iParam0->_fU24, l_U1932, l_U1932, l_U1932, 0 ))
                        {
                            BLOCK_CHAR_AMBIENT_ANIMS( iParam0->_fU24, 1 );
                            if (NOT (sub_33564( iParam0->_fU52 )))
                            {
                                CREATE_OBJECT( 568449139, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, iParam0 + 44, 1 );
                                if (NOT (sub_52075( iParam0->_fU56 )))
                                {
                                    ATTACH_OBJECT_TO_PED( iParam0->_fU44, iParam0->_fU24, 1219, l_U2035, l_U2041, 0 );
                                }
                                else
                                {
                                    ATTACH_OBJECT_TO_PED( iParam0->_fU44, iParam0->_fU24, 1232, l_U2038, l_U2044, 0 );
                                }
                            }
                            else
                            {
                                CREATE_OBJECT( -937089801, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, iParam0 + 44, 1 );
                                if (NOT (sub_52075( iParam0->_fU56 )))
                                {
                                    ATTACH_OBJECT_TO_PED( iParam0->_fU44, iParam0->_fU24, 1219, l_U2047, l_U2053, 0 );
                                }
                                else
                                {
                                    ATTACH_OBJECT_TO_PED( iParam0->_fU44, iParam0->_fU24, 1232, l_U2050, l_U2056, 0 );
                                }
                            }
                        }
                    }
                    else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3604(), iParam0->_fU24, l_U1932, l_U1932, l_U1932, 0 )))
                    {
                        DELETE_OBJECT( iParam0 + 44 );
                    }
                }
            }
            if (iParam0->_fU52 == 11)
            {
                BLOCK_CHAR_AMBIENT_ANIMS( iParam0->_fU24, 1 );
                if (NOT (DOES_OBJECT_EXIST( iParam0->_fU44 )))
                {
                    CREATE_OBJECT( -433173805, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, iParam0 + 44, 1 );
                    ATTACH_OBJECT_TO_PED( iParam0->_fU44, iParam0->_fU24, 1232, l_U2059, l_U2062, 0 );
                }
            }
        }
        else
        {
            BLOCK_CHAR_AMBIENT_ANIMS( iParam0->_fU24, 0 );
            if (l_U1944 < 5)
            {
                if (DOES_OBJECT_EXIST( iParam0->_fU44 ))
                {
                    if (IS_OBJECT_ATTACHED( iParam0->_fU44 ))
                    {
                        DETACH_OBJECT( iParam0->_fU44, 1 );
                    }
                    if (iParam0->_fU52 == 11)
                    {
                        DELETE_OBJECT( iParam0 + 44 );
                    }
                    l_U1944++;
                }
            }
        }
    }
    else
    {
        BLOCK_CHAR_AMBIENT_ANIMS( iParam0->_fU24, 0 );
        if (DOES_OBJECT_EXIST( iParam0->_fU44 ))
        {
            DELETE_OBJECT( iParam0 + 44 );
        }
    }
    return;
}

int sub_51601(unknown uParam0)
{
    switch (uParam0)
    {
        case 6:
        case 7:
        case 13:
        case 14:
        return 1;
        break;
    }
    switch (l_U1938)
    {
        case 1:
        switch (uParam0)
        {
            case 32:
            case 33:
            case 55:
            case 37:
            case 27:
            case 28:
            case 29:
            case 38:
            case 39:
            case 40:
            case 30:
            case 56:
            case 35:
            return 1;
            break;
        }
        break;
        case 2:
        switch (uParam0)
        {
            case 72:
            case 77:
            return 1;
            break;
        }
        break;
        case 0:
        switch (uParam0)
        {
            case 30:
            case 44:
            case 36:
            case 33:
            case 32:
            return 1;
            break;
        }
        break;
    }
    return 0;
}

int sub_52075(unknown uParam0)
{
    switch (uParam0)
    {
        case 6:
        case 13:
        case 14:
        return 1;
        break;
    }
    switch (l_U1938)
    {
        case 1:
        switch (uParam0)
        {
            case 32:
            case 33:
            case 55:
            case 39:
            case 38:
            case 36:
            case 37:
            case 40:
            case 56:
            case 30:
            return 1;
            break;
        }
        break;
        case 2:
        switch (uParam0)
        {
            case 77:
            return 1;
            break;
            default:
        }
        break;
        case 0:
        switch (uParam0)
        {
            case 30:
            case 44:
            case 36:
            case 33:
            return 1;
            break;
        }
        break;
    }
    return 0;
}

int sub_52980(unknown uParam0, unknown uParam1)
{
    if (sub_44249( uParam0, uParam1 ))
    {
        return 0;
    }
    return 1;
}

int sub_53067(unknown uParam0, unknown uParam1)
{
    int iVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_INTERIOR_FROM_CHAR( uParam0, ref iVar4 );
        if (iVar4 == nil)
        {
            return 1;
        }
        else if (sub_44249( uParam0, uParam1 ))
        {
            return 0;
        }
        switch (uParam1)
        {
            case 0:
            if (IS_CHAR_IN_AREA_3D( uParam0, -403.27530000, 397.40990000, 11.52820000, -390.00030000, 402.20990000, 16.40320000, 0 ))
            {
                return 1;
            }
            break;
            case 1:
            if (IS_CHAR_IN_AREA_3D( uParam0, -471.63720000, 141.73170000, 7.86390000, -467.71220000, 164.73170000, 11.86390000, 0 ))
            {
                return 1;
            }
            break;
            case 2:
            if (IS_CHAR_IN_AREA_3D( uParam0, -440.63380000, 353.59830000, 10.66670000, -437.50880000, 358.02330000, 13.71670000, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    if (sub_30766())
    {
        return 1;
    }
    return 0;
}

void sub_53685(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    boolean bVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    int iVar12;
    unknown uVar13;
    unknown uVar14;
    string sVar15;

    if (DOES_CHAR_EXIST( iParam0->_fU24 ))
    {
        if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
        {
            if (NOT (sub_2334( iParam0->_fU24 )))
            {
                if (iParam0->_fU4 == 14)
                {
                    if (NOT (DOES_OBJECT_EXIST( l_U1997 )))
                    {
                        sub_2704();
                    }
                }
                sub_51542( iParam0, 0 );
                uVar13 = l_U1716[iParam0->_fU56]._fU0;
                uVar14 = sub_53814( iParam0->_fU56 );
                if (sub_47194( iParam0->_fU56 ))
                {
                    sVar15 = l_U1716[iParam0->_fU56]._fU0;
                }
                else
                {
                    sVar15 = "";
                }
                if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
                {
                    if (g_U30166)
                    {
                        if (sub_55330( iParam0 ))
                        {
                            SET_CHAR_VISIBLE( iParam0->_fU24, 0 );
                            SET_CHAR_COLLISION( iParam0->_fU24, 0 );
                            SET_CHAR_COORDINATES( iParam0->_fU24, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8 );
                        }
                    }
                    else if (NOT (sub_3003( iParam0->_fU56 )))
                    {
                        SET_CHAR_COLLISION( iParam0->_fU24, 1 );
                    }
                    SET_CHAR_VISIBLE( iParam0->_fU24, 1 );;
                }
                if (sub_49659( iParam0 ))
                {
                    SET_CHAR_IN_CUTSCENE( iParam0->_fU24, 1 );
                }
                else
                {
                    SET_CHAR_IN_CUTSCENE( iParam0->_fU24, 0 );
                }
                if (NOT (iParam0->_fU12 == 99))
                {
                    if ((sub_3003( iParam0->_fU56 )) || (sub_51601( iParam0->_fU56 )))
                    {
                        BLOCK_CHAR_AMBIENT_ANIMS( iParam0->_fU24, 1 );
                    }
                }
                if (NOT l_U1875)
                {
                    if (sub_55800( iParam0 ))
                    {
                        if (l_U1902)
                        {
                            if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
                            {
                                SET_CHAR_COORDINATES( iParam0->_fU24, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8 );
                                SET_CHAR_HEADING( iParam0->_fU24, iParam0->_fU40 );
                            }
                            else
                            {
                                DELETE_CHAR( iParam0 + 24 );
                            }
                            iParam0->_fU12 = 0;
                        }
                        else if (iParam0->_fU12 == 99)
                        {
                            BLOCK_CHAR_AMBIENT_ANIMS( iParam0->_fU24, 0 );
                            if (sub_3003( iParam0->_fU56 ))
                            {
                                SET_CHAR_COLLISION( iParam0->_fU24, 1 );
                                FREEZE_CHAR_POSITION( iParam0->_fU24, 0 );
                            }
                            if (NOT (sub_27010( iParam0->_fU24 )))
                            {
                                GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 25, ref l_U1999 );
                                if (l_U1999 == 7)
                                {
                                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( iParam0->_fU24, sub_3604(), 0 ))
                                    {
                                        if (IS_CHAR_MALE( iParam0->_fU24 ))
                                        {
                                            GET_CHAR_HEALTH( iParam0->_fU24, ref iVar12 );
                                            if ((NOT sub_36119()) || (iVar12 < 180))
                                            {
                                                TASK_SMART_FLEE_CHAR( iParam0->_fU24, sub_3604(), 200.00000000, -1 );
                                                SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0->_fU24, "PANIC", "PAIN_VOICE", 1, 1, 2 );
                                            }
                                            else if (NOT (IS_PED_IN_COMBAT( iParam0->_fU24 )))
                                            {
                                                GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 29, ref l_U1999 );
                                                if (l_U1999 == 7)
                                                {
                                                    OPEN_SEQUENCE_TASK( ref l_U2000 );
                                                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3604() );
                                                    TASK_LOOK_AT_CHAR( 0, sub_3604(), 20000, 0 );
                                                    TASK_STAND_STILL( 0, 20000 );
                                                    CLOSE_SEQUENCE_TASK( l_U2000 );
                                                    TASK_PERFORM_SEQUENCE( iParam0->_fU24, l_U2000 );
                                                    CLEAR_SEQUENCE_TASK( l_U2000 );
                                                    SAY_AMBIENT_SPEECH( iParam0->_fU24, "BUMP", 1, 1, 2 );
                                                }
                                            }
                                            else if (NOT (IS_PLAYER_CONTROL_ON( sub_2048() )))
                                            {
                                                CLEAR_CHAR_LAST_DAMAGE_ENTITY( iParam0->_fU24 );
                                            };;;
                                        }
                                        else if (iParam0->_fU4 == 14)
                                        {
                                            l_U1914 = 1;
                                            GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 17, ref l_U1999 );
                                            if (l_U1999 == 7)
                                            {
                                                TASK_SMART_FLEE_CHAR( iParam0->_fU24, sub_3604(), 200.00000000, -1 );
                                                SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0->_fU24, "PANIC", "PAIN_VOICE", 1, 1, 2 );
                                            }
                                        }
                                        else
                                        {
                                            TASK_SMART_FLEE_CHAR( iParam0->_fU24, sub_3604(), 200.00000000, -1 );
                                            SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0->_fU24, "PANIC", "PAIN_VOICE", 1, 1, 2 );
                                        }
                                    }
                                    else
                                    {
                                        GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 26, ref l_U1999 );
                                        if (l_U1999 == 7)
                                        {
                                            TASK_WANDER_STANDARD( iParam0->_fU24 );
                                            if (NOT (iParam0->_fU4 == 12))
                                            {
                                                SAY_AMBIENT_SPEECH( iParam0->_fU24, "BUMP", 1, 1, 2 );
                                            }
                                            else
                                            {
                                                SAY_AMBIENT_SPEECH( iParam0->_fU24, "DANCING_GAME_FAIL", 1, 1, 2 );
                                            }
                                            TASK_LOOK_AT_CHAR( iParam0->_fU24, sub_3604(), 5000, 0 );
                                        }
                                    }
                                }
                                else if (iParam0->_fU4 == 14)
                                {
                                    GET_CHAR_COORDINATES( iParam0->_fU24, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                                    if (uVar4._fU8 > 10.50000000)
                                    {
                                        GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 17, ref l_U1999 );
                                        if (l_U1999 == 7)
                                        {
                                            TASK_GO_STRAIGHT_TO_COORD( iParam0->_fU24, -472.13280000, 149.16770000, 9.86390000, 3, -2 );
                                        }
                                    }
                                }
                            }
                            if ((NOT (IS_CHAR_ON_SCREEN( iParam0->_fU24 ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3604(), iParam0->_fU24, 15.00000000, 15.00000000, 5.00000000, 0 ))))
                            {
                                if (l_U1877)
                                {
                                    PRINTSTRING( "CLUB_PED_REMOVED - called from UPDATE_CLUB_PED progress = 99" );
                                    PRINTNL();
                                }
                                sub_2303( iParam0, 1 );
                            }
                        }
                        else if (iParam0->_fU12 == -1)
                        {
                            CLEAR_CHAR_TASKS( iParam0->_fU24 );
                            iParam0->_fU12++;
                        }
                        switch (iParam0->_fU4)
                        {
                            case 8:
                            case 9:
                            if (iParam0->_fU4 == 9)
                            {
                                if (NOT (iParam0->_fU24 == g_U30210))
                                {
                                    if (IS_PLAYER_PLAYING( sub_2048() ))
                                    {
                                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3604(), iParam0->_fU24, 40.00000000, 40.00000000, 40.00000000, 0 ))
                                        {
                                            g_U30210 = iParam0->_fU24;
                                        }
                                    }
                                }
                            }
                            if (NOT g_U30118)
                            {
                                switch (iParam0->_fU12)
                                {
                                    case 0:
                                    if (NOT g_U30093[l_U1938])
                                    {
                                        if (NOT (IS_PED_IN_COMBAT( iParam0->_fU24 )))
                                        {
                                            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( iParam0->_fU24, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 0.50000000, 0.50000000, 2.00000000, 0 )))
                                            {
                                                GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 29, ref l_U1999 );
                                                if (l_U1999 == 7)
                                                {
                                                    OPEN_SEQUENCE_TASK( ref l_U2000 );
                                                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 2, -1, 0.50000000 );
                                                    TASK_ACHIEVE_HEADING( 0, iParam0->_fU40 );
                                                    TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_Bouncer", -1082130432 );
                                                    CLOSE_SEQUENCE_TASK( l_U2000 );
                                                    TASK_PERFORM_SEQUENCE( iParam0->_fU24, l_U2000 );
                                                    l_U1943 += 3;
                                                    CLEAR_SEQUENCE_TASK( l_U2000 );
                                                    SET_CHAR_SPHERE_DEFENSIVE_AREA( iParam0->_fU24, iParam0->_fU28, 10.00000000 );
                                                }
                                            }
                                            else if (HAVE_ANIMS_LOADED( "misstony06" ))
                                            {
                                                if (NOT (IS_CHAR_PLAYING_ANIM( iParam0->_fU24, "misstony06", "bouncer_greeting" )))
                                                {
                                                    GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 29, ref l_U1999 );
                                                    if (l_U1999 == 7)
                                                    {
                                                        OPEN_SEQUENCE_TASK( ref l_U2000 );
                                                        TASK_ACHIEVE_HEADING( 0, iParam0->_fU40 );
                                                        TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_Bouncer", -1082130432 );
                                                        CLOSE_SEQUENCE_TASK( l_U2000 );
                                                        TASK_PERFORM_SEQUENCE( iParam0->_fU24, l_U2000 );
                                                        l_U1943 += 2;
                                                        CLEAR_SEQUENCE_TASK( l_U2000 );
                                                        SET_CHAR_SPHERE_DEFENSIVE_AREA( iParam0->_fU24, iParam0->_fU28, 10.00000000 );
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 29, ref l_U1999 );
                                                if (l_U1999 == 7)
                                                {
                                                    OPEN_SEQUENCE_TASK( ref l_U2000 );
                                                    TASK_ACHIEVE_HEADING( 0, iParam0->_fU40 );
                                                    TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_Bouncer", -1082130432 );
                                                    CLOSE_SEQUENCE_TASK( l_U2000 );
                                                    TASK_PERFORM_SEQUENCE( iParam0->_fU24, l_U2000 );
                                                    l_U1943 += 2;
                                                    CLEAR_SEQUENCE_TASK( l_U2000 );
                                                    SET_CHAR_SPHERE_DEFENSIVE_AREA( iParam0->_fU24, iParam0->_fU28, 10.00000000 );
                                                }
                                            }
                                        }
                                        if (LOCATE_CHAR_ON_FOOT_CHAR_3D( iParam0->_fU24, sub_3604(), 2.00000000, 2.00000000, 2.00000000, 0 ))
                                        {
                                            TASK_LOOK_AT_CHAR( iParam0->_fU24, sub_3604(), 2000, 0 );
                                        }
                                        else
                                        {
                                            TASK_CLEAR_LOOK_AT( iParam0->_fU24 );
                                        }
                                        if (NOT sub_36119())
                                        {
                                            if ((iParam0->_fU24 == l_U1977) || (iParam0->_fU24 == l_U1978))
                                            {
                                                CLEAR_CHAR_TASKS( iParam0->_fU24 );
                                                iParam0->_fU20 = 0;
                                                iParam0->_fU12 = 1;
                                            }
                                        }
                                    }
                                    else if ((iParam0->_fU24 == l_U1977) || (iParam0->_fU24 == l_U1978))
                                    {
                                        GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 91, ref l_U1999 );
                                        if (l_U1999 == 7)
                                        {
                                            SET_CHAR_RELATIONSHIP( iParam0->_fU24, 5, 0 );
                                            TASK_COMBAT( iParam0->_fU24, sub_3604() );
                                        }
                                    }
                                    else if (iParam0->_fU4 == 9)
                                    {
                                        GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 91, ref l_U1999 );
                                        if (l_U1999 == 7)
                                        {
                                            SET_CHAR_RELATIONSHIP( iParam0->_fU24, 5, 0 );
                                            TASK_COMBAT( iParam0->_fU24, sub_3604() );
                                        }
                                    };;;
                                    break;
                                    case 1:
                                    if (NOT sub_36119())
                                    {
                                        GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 29, ref l_U1999 );
                                        if (l_U1999 == 7)
                                        {
                                            OPEN_SEQUENCE_TASK( ref l_U2000 );
                                            TASK_GOTO_CHAR_OFFSET( 0, sub_3604(), 60000, 1.50000000, 0 );
                                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3604() );
                                            CLOSE_SEQUENCE_TASK( l_U2000 );
                                            TASK_PERFORM_SEQUENCE( iParam0->_fU24, l_U2000 );
                                            CLEAR_SEQUENCE_TASK( l_U2000 );
                                        }
                                        else
                                        {
                                            bVar7 = true;
                                        }
                                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( iParam0->_fU24, sub_3604(), 2.00000000, 2.00000000, 2.00000000, 0 ))
                                        {
                                            bVar7 = true;
                                        }
                                        if (bVar7)
                                        {
                                            SAY_AMBIENT_SPEECH( iParam0->_fU24, "BOUNCER_POLITE_WARNING", 1, 1, 2 );
                                            PRINTSTRING( "SAY_AMBIENT_SPEECH - BOUNCER_POLITE_WARNING" );
                                            PRINTNL();
                                            iParam0->_fU20 = 0;
                                            iParam0->_fU12++;
                                        }
                                    }
                                    else
                                    {
                                        CLEAR_CHAR_TASKS( iParam0->_fU24 );
                                        iParam0->_fU12 = 0;
                                    }
                                    break;
                                    case 2:
                                    if ((NOT sub_36119()) AND (sub_3889( sub_3604(), l_U1938, 0 )))
                                    {
                                        GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 29, ref l_U1999 );
                                        if (l_U1999 == 7)
                                        {
                                            OPEN_SEQUENCE_TASK( ref l_U2000 );
                                            TASK_GOTO_CHAR_OFFSET( 0, sub_3604(), 60000, 1.50000000, 0 );
                                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3604() );
                                            CLOSE_SEQUENCE_TASK( l_U2000 );
                                            TASK_PERFORM_SEQUENCE( iParam0->_fU24, l_U2000 );
                                            CLEAR_SEQUENCE_TASK( l_U2000 );
                                        }
                                        if (iParam0->_fU20 > 7000)
                                        {
                                            g_U30093[l_U1938] = 1;
                                            PRINTSTRING( "g_bPlayerHasKickedOffInsideClub - set to TRUE - not put away weapon!" );
                                            PRINTNL();
                                            SAY_AMBIENT_SPEECH( iParam0->_fU24, "BOUNCER_ARMED_EJECTION", 1, 1, 2 );
                                            PRINTSTRING( "SAY_AMBIENT_SPEECH - BOUNCER_ARMED_EJECTION" );
                                            PRINTNL();
                                            iParam0->_fU12 = 0;
                                        }
                                    }
                                    else
                                    {
                                        CLEAR_CHAR_TASKS( iParam0->_fU24 );
                                        iParam0->_fU12 = 0;
                                    }
                                    break;
                                }
                            }
                            break;
                            case 4:
                            case 6:
                            if (sub_59423( iParam0 ))
                            {
                                CLEAR_CHAR_TASKS( iParam0->_fU24 );
                                iParam0->_fU12 = 99;
                            }
                            else
                            {
                                switch (iParam0->_fU12)
                                {
                                    case 0:
                                    if (sub_56018())
                                    {
                                        sub_59569( iParam0 );
                                        if (NOT (iParam0->_fU16 == -1))
                                        {
                                            OPEN_SEQUENCE_TASK( ref l_U2000 );
                                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U1763[iParam0->_fU16]._fU0._fU0, l_U1763[iParam0->_fU16]._fU0._fU4, l_U1763[iParam0->_fU16]._fU0._fU8, 2, -2, 0.30000000 );
                                            if (NOT (sub_59892( iParam0->_fU16 )))
                                            {
                                                TASK_ACHIEVE_HEADING( 0, l_U1763[iParam0->_fU16]._fU12 );
                                            }
                                            if (sub_47194( l_U1763[iParam0->_fU16]._fU24 ))
                                            {
                                                if (IS_CHAR_MALE( iParam0->_fU24 ))
                                                {
                                                    TASK_START_SCENARIO_IN_PLACE( 0, l_U1716[l_U1763[iParam0->_fU16]._fU24]._fU0, -1082130432 );
                                                }
                                                else
                                                {
                                                    TASK_PLAY_ANIM( 0, "female_idle", "missnightclub", 2.00000000, 0, 0, 0, 0, -1 );
                                                }
                                            }
                                            else if (NOT (sub_59892( iParam0->_fU16 )))
                                            {
                                                if (l_U1877)
                                                {
                                                    PRINTSTRING( "TASK_PLAY_ANIM - patrol" );
                                                    PRINTNL();
                                                }
                                                TASK_PLAY_ANIM( 0, l_U1716[l_U1763[iParam0->_fU16]._fU24]._fU0, sub_53814( l_U1763[iParam0->_fU16]._fU24 ), 8.00000000, 0, 0, 0, 0, -1 );
                                            }
                                            CLOSE_SEQUENCE_TASK( l_U2000 );
                                            TASK_PERFORM_SEQUENCE( iParam0->_fU24, l_U2000 );
                                            l_U1943 += 4;
                                            CLEAR_SEQUENCE_TASK( l_U2000 );
                                            iParam0->_fU20 = 0;
                                            iParam0->_fU12++;
                                        }
                                        else
                                        {
                                            PRINTSTRING( "Nightclub script - Patrol ped could not find free patrol point!" );
                                            PRINTNL();
                                        }
                                    }
                                    break;
                                    case 1:
                                    if (sub_56018())
                                    {
                                        GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 29, ref l_U1999 );
                                        if ((l_U1999 == 7) || (iParam0->_fU20 > 30000))
                                        {
                                            if (NOT (iParam0->_fU16 == -1))
                                            {
                                                l_U1763[iParam0->_fU16]._fU20 = nil;
                                            }
                                            iParam0->_fU12 = 0;
                                        }
                                        else if (NOT (LOCATE_CHAR_ON_FOOT_3D( iParam0->_fU24, l_U1763[iParam0->_fU16]._fU0._fU0, l_U1763[iParam0->_fU16]._fU0._fU4, l_U1763[iParam0->_fU16]._fU0._fU8, 2.00000000, 2.00000000, 2.00000000, 0 )))
                                        {
                                            iParam0->_fU20 = 0;
                                        }
                                    }
                                    else
                                    {
                                        CLEAR_CHAR_TASKS( iParam0->_fU24 );
                                        iParam0->_fU12 = 99;
                                    }
                                    break;
                                }
                            }
                            break;
                            case 10:
                            case 12:
                            if (sub_59423( iParam0 ))
                            {
                                iParam0->_fU12 = 99;
                            }
                            else if ((NOT (g_U30207 == iParam0->_fU24)) AND (NOT (g_U30205 == iParam0->_fU24)))
                            {
                                if (NOT (sub_60707( iParam0 )))
                                {
                                    sub_60918( iParam0 );
                                }
                                else
                                {
                                    GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 131, ref l_U1999 );
                                    if (l_U1999 == 7)
                                    {
                                        if (l_U1999 == 7)
                                        {
                                            if (iParam0->_fU56 == 0)
                                            {
                                                sub_61179( iParam0 );
                                            }
                                            else if (NOT (sub_27182( uVar14 )))
                                            {
                                                if (NOT (sub_27182( uVar13 )))
                                                {
                                                    if (sub_27171( uVar14 ))
                                                    {
                                                        GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 1.00000000, ref uVar3 );
                                                        TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( iParam0->_fU24, uVar13, uVar14, 4.00000000, -1, 16, uVar3 );
                                                    }
                                                }
                                                else
                                                {
                                                    sub_61179( iParam0 );
                                                }
                                            }
                                            else
                                            {
                                                sub_61179( iParam0 );
                                            }
                                        }
                                    }
                                }
                            }
                            break;
                            default:
                            if ((sub_59423( iParam0 )) || (NOT (LOCATE_CHAR_ANY_MEANS_3D( iParam0->_fU24, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 5.00000000, 5.00000000, 5.00000000, 0 ))))
                            {
                                iParam0->_fU12 = 99;
                            }
                            else
                            {
                                switch (iParam0->_fU12)
                                {
                                    case 0:
                                    if (l_U1943 < 30)
                                    {
                                        if (NOT (sub_60707( iParam0 )))
                                        {
                                            sub_60918( iParam0 );
                                        }
                                        else if (sub_47194( iParam0->_fU56 ))
                                        {
                                            if (NOT (sub_27182( sVar15 )))
                                            {
                                                if (l_U1877)
                                                {
                                                    PRINTSTRING( "UPDATE_CLUB_PED - " );
                                                    if (l_U1886)
                                                    {
                                                        PRINTSTRING( "global club ped " );
                                                        PRINTINT( l_U1951 );
                                                    }
                                                    else
                                                    {
                                                        PRINTSTRING( "club ped " );
                                                        PRINTINT( l_U1951 );
                                                    }
                                                    PRINTSTRING( "given scenario " );
                                                    PRINTSTRING( sVar15 );
                                                    PRINTNL();
                                                }
                                                TASK_START_SCENARIO_IN_PLACE( iParam0->_fU24, sVar15, -1082130432 );
                                                l_U1943++;
                                                iParam0->_fU12++;
                                            }
                                        }
                                        else if (sub_55388( iParam0->_fU56 ))
                                        {
                                            if (sub_62026( (iParam0^) ))
                                            {
                                                if (NOT (sub_27182( uVar14 )))
                                                {
                                                    if (NOT (sub_27182( uVar13 )))
                                                    {
                                                        if (sub_27171( uVar14 ))
                                                        {
                                                            TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( iParam0->_fU24, uVar13, uVar14, 4.00000000, -1, 192, 0.00000000 );
                                                            if (sub_62354( iParam0->_fU56 ))
                                                            {
                                                                sub_62416( iParam0->_fU24 );
                                                            }
                                                            l_U1943++;
                                                            iParam0->_fU12++;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        else if (sub_62583( iParam0->_fU56 ))
                                        {
                                            if (NOT (IS_CHAR_PLAYING_ANIM( iParam0->_fU24, uVar14, uVar13 )))
                                            {
                                                if (sub_49709( iParam0->_fU56, iParam0 + 56, iParam0->_fU56 ))
                                                {
                                                    uVar13 = l_U1716[iParam0->_fU56]._fU0;
                                                    uVar14 = sub_53814( iParam0->_fU56 );
                                                    if (NOT (sub_27182( uVar14 )))
                                                    {
                                                        if (NOT (sub_27182( uVar13 )))
                                                        {
                                                            if (sub_27171( uVar14 ))
                                                            {
                                                                if (iParam0->_fU4 == 2)
                                                                {
                                                                    TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( iParam0->_fU24, uVar13, uVar14, 4.00000000, -1, 144, 0.00000000 );
                                                                }
                                                                else
                                                                {
                                                                    TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( iParam0->_fU24, uVar13, uVar14, 4.00000000, -1, 16, 0.00000000 );
                                                                }
                                                                l_U1943++;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        else if (NOT (sub_27182( uVar14 )))
                                        {
                                            if (NOT (sub_27182( uVar13 )))
                                            {
                                                if (sub_27171( uVar14 ))
                                                {
                                                    GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 1.00000000, ref uVar3 );
                                                    if (iParam0->_fU4 == 2)
                                                    {
                                                        TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( iParam0->_fU24, uVar13, uVar14, 4.00000000, -1, 144, uVar3 );
                                                    }
                                                    else
                                                    {
                                                        TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( iParam0->_fU24, uVar13, uVar14, 4.00000000, -1, 16, uVar3 );
                                                    }
                                                    l_U1943++;
                                                    iParam0->_fU12++;
                                                    if (l_U1877)
                                                    {
                                                        PRINTSTRING( "UPDATE_CLUB_PED - " );
                                                        if (l_U1886)
                                                        {
                                                            PRINTSTRING( "global club ped " );
                                                            PRINTINT( l_U1951 );
                                                        }
                                                        else
                                                        {
                                                            PRINTSTRING( "club ped " );
                                                            PRINTINT( l_U1951 );
                                                        }
                                                        PRINTSTRING( "given TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE " );
                                                        PRINTSTRING( uVar13 );
                                                        PRINTSTRING( ", " );
                                                        PRINTSTRING( uVar14 );
                                                        PRINTSTRING( ", fTemp = " );
                                                        PRINTFLOAT( uVar3 );
                                                        PRINTNL();
                                                    }
                                                }
                                            }
                                        };;;;;
                                    }
                                    break;
                                    case 1:
                                    if (NOT (sub_27182( sVar15 )))
                                    {
                                        iParam0->_fU12++;
                                    }
                                    else if ((NOT (sub_27182( uVar13 ))) AND (NOT (sub_27182( uVar14 ))))
                                    {
                                        if (sub_55388( iParam0->_fU56 ))
                                        {
                                            GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 131, ref l_U1999 );
                                            if (l_U1999 == 7)
                                            {
                                                if (sub_63404( iParam0->_fU56 ))
                                                {
                                                    sub_63487( iParam0->_fU24, 90000 );
                                                }
                                                iParam0->_fU12 = 99;
                                            }
                                        }
                                        else if (IS_CHAR_PLAYING_ANIM( iParam0->_fU24, uVar14, uVar13 ))
                                        {
                                            iParam0->_fU12++;
                                        }
                                    }
                                    break;
                                    case 2:
                                    bVar7 = false;
                                    GET_CHAR_COORDINATES( iParam0->_fU24, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                                    if (IS_PLAYER_PLAYING( sub_2048() ))
                                    {
                                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3604(), uVar4._fU0, uVar4._fU4, uVar4._fU8, l_U1917, l_U1917, 2.00000000, 0 ))
                                        {
                                            PRINTSTRING( "UPDATE_CLUB_PED - player collides with club ped - " );
                                            if (l_U1886)
                                            {
                                                PRINTSTRING( "global club ped " );
                                                PRINTINT( l_U1951 );
                                            }
                                            else
                                            {
                                                PRINTSTRING( "club ped " );
                                                PRINTINT( l_U1951 );
                                            }
                                            PRINTNL();
                                            bVar7 = true;
                                        }
                                    }
                                    if (sub_27182( sVar15 ))
                                    {
                                        GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 71, ref l_U1999 );
                                        if (l_U1999 == 7)
                                        {
                                            GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 131, ref l_U1999 );
                                            if (l_U1999 == 7)
                                            {
                                                PRINTSTRING( "UPDATE_CLUB_PED - club ped finished playing anim task - " );
                                                if (l_U1886)
                                                {
                                                    PRINTSTRING( "global club ped " );
                                                    PRINTINT( l_U1951 );
                                                }
                                                else
                                                {
                                                    PRINTSTRING( "club ped " );
                                                    PRINTINT( l_U1951 );
                                                }
                                                PRINTNL();
                                                bVar7 = true;
                                            }
                                            if ((NOT (sub_27182( uVar13 ))) AND (NOT (sub_27182( uVar14 ))))
                                            {
                                                if (NOT (IS_CHAR_PLAYING_ANIM( iParam0->_fU24, uVar14, uVar13 )))
                                                {
                                                    PRINTSTRING( "UPDATE_CLUB_PED - ped is not playing anim - " );
                                                    if (l_U1886)
                                                    {
                                                        PRINTSTRING( "global club ped " );
                                                        PRINTINT( l_U1951 );
                                                    }
                                                    else
                                                    {
                                                        PRINTSTRING( "club ped " );
                                                        PRINTINT( l_U1951 );
                                                    }
                                                    PRINTNL();
                                                    bVar7 = true;
                                                }
                                            }
                                        }
                                    }
                                    else
                                    {
                                        GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 114, ref l_U1999 );
                                        if (l_U1999 == 7)
                                        {
                                            if ((NOT (iParam0->_fU4 == 5)) AND (NOT (iParam0->_fU4 == 5)))
                                            {
                                                PRINTSTRING( "UPDATE_CLUB_PED - club ped finished playing scenario task" );
                                                if (l_U1886)
                                                {
                                                    PRINTSTRING( "global club ped " );
                                                    PRINTINT( l_U1951 );
                                                }
                                                else
                                                {
                                                    PRINTSTRING( "club ped " );
                                                    PRINTINT( l_U1951 );
                                                }
                                                PRINTNL();
                                                bVar7 = true;
                                            }
                                            else
                                            {
                                                TASK_START_SCENARIO_IN_PLACE( iParam0->_fU24, sVar15, -1082130432 );
                                            }
                                        }
                                    }
                                    if (bVar7)
                                    {
                                        if (NOT (iParam0->_fU24 == g_U30208))
                                        {
                                            iParam0->_fU12 = 99;
                                        }
                                    }
                                    else if (sub_27182( sVar15 ))
                                    {
                                        if (NOT (sub_27182( uVar13 )))
                                        {
                                            if (NOT (LOCATE_CHAR_ON_FOOT_3D( iParam0->_fU24, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 0.20000000, 0.20000000, 2.00000000, 0 )))
                                            {
                                                GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 71, ref l_U1999 );
                                                if (l_U1999 == 7)
                                                {
                                                    TASK_CHAR_SLIDE_TO_COORD_AND_PLAY_ANIM( iParam0->_fU24, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, iParam0->_fU40, 0.10000000, uVar13, uVar14, 4.00000000, 1, 0, 0, 0, -1 );
                                                }
                                            }
                                        }
                                    }
                                    break;
                                }
                            }
                            break;
                        };;;
                    }
                }
                else if (l_U1889)
                {
                    if (sub_3889( iParam0->_fU24, l_U1938, 0 ))
                    {
                        sub_42661( iParam0, 1 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
                {
                    switch (iParam0->_fU4)
                    {
                        case 8:
                        case 9:
                        switch (iParam0->_fU12)
                        {
                            case 0:
                            if (g_U30093[l_U1938])
                            {
                                if (l_U1943 < 30)
                                {
                                    SET_CHAR_RELATIONSHIP( iParam0->_fU24, 5, 0 );
                                    TASK_COMBAT( iParam0->_fU24, sub_3604() );
                                    l_U1943++;
                                    SET_CHAR_KEEP_TASK( iParam0->_fU24, 1 );
                                    SAY_AMBIENT_SPEECH( iParam0->_fU24, "BOUNCER_ARMED_EJECTION", 1, 1, 2 );
                                    PRINTSTRING( "SAY_AMBIENT_SPEECH - BOUNCER_ARMED_EJECTION" );
                                    PRINTNL();
                                    iParam0->_fU12++;
                                }
                            }
                            break;
                            case 1:
                            if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
                            {
                                GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 91, ref l_U1999 );
                                if ((l_U1999 == 7) AND (l_U1943 < 30))
                                {
                                    SET_CHAR_RELATIONSHIP( iParam0->_fU24, 5, 0 );
                                    TASK_COMBAT( iParam0->_fU24, sub_3604() );
                                    l_U1943++;
                                    SET_CHAR_KEEP_TASK( iParam0->_fU24, 1 );
                                }
                            }
                            break;
                        }
                        break;
                        default:
                        switch (iParam0->_fU12)
                        {
                            case 99:
                            BLOCK_CHAR_AMBIENT_ANIMS( iParam0->_fU24, 0 );
                            if (sub_3003( iParam0->_fU56 ))
                            {
                                SET_CHAR_COLLISION( iParam0->_fU24, 1 );
                                FREEZE_CHAR_POSITION( iParam0->_fU24, 0 );
                            }
                            if (sub_3889( iParam0->_fU24, l_U1938, 0 ))
                            {
                                GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 25, ref l_U1999 );
                                if (l_U1999 == 7)
                                {
                                    if (l_U1943 < 30)
                                    {
                                        GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref uVar8 );
                                        switch (uVar8)
                                        {
                                            case 0:
                                            SAY_AMBIENT_SPEECH( iParam0->_fU24, "GUN_RUN", 1, 1, 2 );
                                            break;
                                            case 1:
                                            SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0->_fU24, "PANIC", "PAIN_VOICE", 1, 1, 2 );
                                            break;
                                            case 2:
                                            SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0->_fU24, "HIGH_FALL", "PAIN_VOICE", 1, 1, 2 );
                                            break;
                                            case 3:
                                            SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0->_fU24, "PANIC_SHORT", "PAIN_VOICE", 1, 1, 2 );
                                            break;
                                        }
                                        TASK_SMART_FLEE_CHAR( iParam0->_fU24, sub_3604(), 200.00000000, -1 );
                                        SET_CHAR_KEEP_TASK( iParam0->_fU24, 1 );
                                        l_U1943++;
                                    }
                                }
                            }
                            else
                            {
                                sub_2303( iParam0, 0 );
                            }
                            if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
                            {
                                if ((NOT (IS_CHAR_ON_SCREEN( iParam0->_fU24 ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3604(), iParam0->_fU24, 15.00000000, 15.00000000, 5.00000000, 0 ))))
                                {
                                    if (l_U1877)
                                    {
                                        PRINTSTRING( "CLUB_PED_REMOVED - called from UPDATE_CLUB_PED progress (shooting)  = 99" );
                                        PRINTNL();
                                    }
                                    sub_2303( iParam0, 0 );
                                }
                            }
                            break;
                            default:
                            iParam0->_fU12 = 99;
                            break;
                        }
                        break;
                    }
                }
            }
            else if (iParam0->_fU4 == 14)
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( iParam0->_fU24, sub_3604(), 0 ))
                {
                    l_U1914 = 1;
                }
            }
            if (iParam0->_fU4 == 14)
            {
                if (DOES_OBJECT_EXIST( l_U1997 ))
                {
                    DELETE_OBJECT( ref l_U1997 );
                }
            }
            sub_51542( iParam0, 1 );
            iParam0->_fU12 = -1;;
        }
        else if (iParam0->_fU4 == 14)
        {
            l_U1914 = 1;
        }
        if (l_U1877)
        {
            PRINTSTRING( "CLUB_PED_REMOVED - called from UPDATE_CLUB_PED 3" );
            PRINTNL();
        }
        sub_2303( iParam0, 0 );;
    }
    sub_66576( iParam0 );
    return;
}

string sub_53814(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        return "missnightclub";
        break;
        case 15:
        case 16:
        case 17:
        return "";
        break;
    }
    switch (l_U1938)
    {
        case 1:
        switch (uParam0)
        {
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
            case 23:
            case 24:
            case 25:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 35:
            case 36:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
            case 43:
            case 44:
            case 45:
            case 46:
            case 47:
            case 48:
            case 49:
            case 50:
            case 51:
            case 52:
            case 53:
            case 54:
            case 55:
            case 56:
            return "missamb_m9";
            break;
        }
        break;
        case 0:
        switch (uParam0)
        {
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
            case 23:
            case 24:
            case 25:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 35:
            case 36:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
            case 43:
            case 44:
            case 45:
            return "missamb_bama";
            break;
        }
        break;
        case 2:
        switch (uParam0)
        {
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
            case 23:
            case 24:
            case 25:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 35:
            case 36:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
            return "missamb_herc_female";
            break;
            case 43:
            case 44:
            case 45:
            case 46:
            case 47:
            case 48:
            case 49:
            case 50:
            case 51:
            case 52:
            case 53:
            case 54:
            case 55:
            case 56:
            case 57:
            case 58:
            case 59:
            case 60:
            case 61:
            case 62:
            case 63:
            case 64:
            case 65:
            case 66:
            case 67:
            case 68:
            case 69:
            case 70:
            case 71:
            case 72:
            case 73:
            case 74:
            case 75:
            case 76:
            case 77:
            case 78:
            case 79:
            case 80:
            case 81:
            case 82:
            return "missamb_herc_male";
            break;
        }
        break;
    }
    return "";
}

int sub_55330(int iParam0)
{
    if (iParam0->_fU12 == 99)
    {
        return 1;
    }
    if ((iParam0->_fU4 == 4) || (iParam0->_fU4 == 6))
    {
        return 1;
    }
    if (sub_55388( iParam0->_fU56 ))
    {
        return 1;
    }
    return 0;
}

int sub_55388(unknown uParam0)
{
    switch (uParam0)
    {
        case 4:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        return 1;
        break;
    }
    switch (l_U1938)
    {
        case 1:
        switch (uParam0)
        {
            case 20:
            case 21:
            case 22:
            case 23:
            case 47:
            return 1;
            break;
        }
        break;
        default:
    }
    return 0;
}

int sub_55800(int iParam0)
{
    if (iParam0->_fU0)
    {
        if (sub_44710( iParam0 ))
        {
            REQUEST_ANIMS( "missnightclub" );
            switch (iParam0->_fU4)
            {
                case 4:
                case 6:
                if (sub_55932( iParam0 ))
                {
                    if (sub_56018())
                    {
                        return 1;
                    }
                }
                break;
                case 10:
                case 12:
                if (sub_55932( iParam0 ))
                {
                    if (sub_38308())
                    {
                        return 1;
                    }
                }
                break;
                case 1:
                case 3:
                case 5:
                case 14:
                if (sub_55932( iParam0 ))
                {
                    return 1;
                }
                break;
                default:
                if (HAVE_ANIMS_LOADED( "missnightclub" ))
                {
                    return 1;
                }
                break;
            }
        }
    }
    return 0;
}

int sub_55932(int iParam0)
{
    unknown uVar3;

    uVar3 = sub_53814( iParam0->_fU56 );
    if (NOT (sub_27182( uVar3 )))
    {
        REQUEST_ANIMS( uVar3 );
        if (HAVE_ANIMS_LOADED( uVar3 ))
        {
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

void sub_56018()
{
    int I;
    int Result;
    unknown uVar4;

    Result = 1;
    for ( I = 0; I < l_U1763; I++ )
    {
        uVar4 = sub_53814( l_U1763[I]._fU24 );
        if (NOT (sub_27182( uVar4 )))
        {
            REQUEST_ANIMS( uVar4 );
            if (NOT (HAVE_ANIMS_LOADED( uVar4 )))
            {
                Result = 0;
            }
        }
        if (NOT (HAVE_ANIMS_LOADED( "missnightclub" )))
        {
            REQUEST_ANIMS( "missnightclub" );
            Result = 0;
        }
    }
    return Result;
}

int sub_59423(int iParam0)
{
    if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
    {
        if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( iParam0->_fU24, sub_3604(), 0 )) || (IS_PED_RAGDOLL( iParam0->_fU24 )))
        {
            return 1;
        }
    }
    return 0;
}

void sub_59569(int iParam0)
{
    int I;
    boolean bVar4;

    for ( I = 0; I < l_U1763; I++ )
    {
        if ((NOT (I == iParam0->_fU16)) AND (NOT (l_U1763[I]._fU20 == iParam0->_fU24)))
        {
            if (IS_CHAR_INJURED( l_U1763[I]._fU20 ))
            {
                l_U1763[I]._fU20 = nil;
            }
            if (l_U1763[I]._fU20 == nil)
            {
                bVar4 = true;
                if (l_U1763[I]._fU16 == 1)
                {
                    if (NOT (sub_33564( iParam0->_fU52 )))
                    {
                        bVar4 = false;
                    }
                }
                if (bVar4)
                {
                    l_U1763[I]._fU20 = iParam0->_fU24;
                    iParam0->_fU16 = I;
                    return;
                }
            }
        }
        else
        {
            iParam0->_fU16 = -1;
            l_U1763[I]._fU20 = nil;
        }
    }
    return;
}

int sub_59892(unknown uParam0)
{
    if (NOT (sub_47194( l_U1763[uParam0]._fU24 )))
    {
        if ((sub_27182( l_U1716[l_U1763[uParam0]._fU24]._fU0 )) || (sub_27182( sub_53814( l_U1763[uParam0]._fU24 ) )))
        {
            return 1;
        }
    }
    return 0;
}

int sub_60707(int iParam0)
{
    unknown uVar3;
    float fVar4;

    if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
    {
        if (LOCATE_CHAR_ON_FOOT_3D( iParam0->_fU24, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 0.50000000, 0.50000000, 2.00000000, 0 ))
        {
            GET_CHAR_HEADING( iParam0->_fU24, ref uVar3 );
            fVar4 = iParam0->_fU40 - uVar3;
            if (fVar4 < -180.00000000)
            {
                fVar4 += 360.00000000;
            }
            if (fVar4 > 180.00000000)
            {
                fVar4 -= 360.00000000;
            }
            if (fVar4 < 0.00000000)
            {
                fVar4 *= -1.00000000;
            }
            if (fVar4 < 15.00000000)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_60918(int iParam0)
{
    GET_SCRIPT_TASK_STATUS( iParam0->_fU24, 29, ref l_U1999 );
    if (l_U1999 == 7)
    {
        OPEN_SEQUENCE_TASK( ref l_U2000 );
        TASK_GO_STRAIGHT_TO_COORD( 0, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, 2, -2 );
        TASK_CHAR_SLIDE_TO_COORD( 0, ref iParam0->_fU28->_fU0, ref iParam0->_fU28->_fU4, ref iParam0->_fU28->_fU8, iParam0->_fU40, 1061158912 );
        TASK_ACHIEVE_HEADING( 0, iParam0->_fU40 );
        CLOSE_SEQUENCE_TASK( l_U2000 );
        TASK_PERFORM_SEQUENCE( iParam0->_fU24, l_U2000 );
        l_U1943 += 3;
        CLEAR_SEQUENCE_TASK( l_U2000 );
    }
    return;
}

void sub_61179(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    switch (l_U1938)
    {
        case 1:
        if (sub_33564( iParam0->_fU52 ))
        {
            sub_49709( 25, ref uVar4, -1 );
        }
        else
        {
            sub_49709( 48, ref uVar4, -1 );
        }
        break;
        case 0:
        if (sub_33564( iParam0->_fU52 ))
        {
            sub_49709( 20, ref uVar4, -1 );
        }
        else
        {
            sub_49709( 21, ref uVar4, -1 );
        }
        break;
        case 2:
        if (sub_33564( iParam0->_fU52 ))
        {
            sub_49709( 18, ref uVar4, -1 );
        }
        else
        {
            sub_49709( 53, ref uVar4, -1 );
        }
        break;
    }
    uVar5 = sub_53814( uVar4 );
    uVar6 = l_U1716[uVar4]._fU0;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
    {
        if (NOT (sub_27182( uVar5 )))
        {
            if (NOT (sub_27182( uVar6 )))
            {
                if (sub_27171( uVar5 ))
                {
                    GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 1.00000000, ref uVar7 );
                    TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( iParam0->_fU24, uVar6, uVar5, 4.00000000, -1, 16, uVar7 );
                }
            }
        }
    }
    return;
}

int sub_62026(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14)
{
    if (NOT (IS_CHAR_INJURED( uParam0._fU24 )))
    {
        if (NOT (sub_3889( uParam0._fU24, l_U1938, 0 )))
        {
            if (IS_CHAR_ON_SCREEN( uParam0._fU24 ))
            {
                if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3604(), uParam0._fU24, 60.00000000, 60.00000000, 60.00000000, 0 )) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_2048(), uParam0._fU24 )))
                {
                    return 1;
                }
            }
            else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3604(), uParam0._fU24, 10.00000000, 10.00000000, 10.00000000, 0 ))
            {
                return 1;
            }
        }
        else if (sub_3889( sub_3604(), l_U1938, 0 ))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3604(), uParam0._fU24, 5.00000000, 5.00000000, 5.00000000, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_62354(unknown uParam0)
{
    switch (uParam0)
    {
        case 4:
        case 10:
        return 1;
        break;
    }
    return 0;
}

void sub_62416(unknown uParam0)
{
    int I;
    boolean bVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        for ( I = 0; I < l_U1862; I++ )
        {
            if (NOT bVar4)
            {
                if (NOT (DOES_CHAR_EXIST( l_U1862[I]._fU0 )))
                {
                    l_U1862[I]._fU0 = uParam0;
                    l_U1862[I]._fU4 = -1;
                    l_U1862[I]._fU8 = 0;
                    bVar4 = true;
                }
            }
        }
    }
    return;
}

int sub_62583(unknown uParam0)
{
    if (l_U1938 == 2)
    {
        switch (uParam0)
        {
            case 44:
            case 48:
            case 49:
            return 1;
            break;
        }
    }
    return 0;
}

int sub_63404(unknown uParam0)
{
    switch (uParam0)
    {
        case 4:
        case 10:
        case 11:
        case 12:
        return 1;
        break;
    }
    return 0;
}

int sub_63487(int iParam0, int iParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;

    if (iParam0 == nil)
    {
        return 0;
    }
    if (NOT (DOES_CHAR_EXIST( iParam0 )))
    {
        return 0;
    }
    iVar4 = sub_63531( iParam0 );
    if (NOT (iVar4 == -1))
    {
        return 1;
    }
    iVar5 = sub_63640( iParam0 );
    if (NOT (iVar5 == -1))
    {
        return 1;
    }
    if ((iParam1 == 0) || (iParam1 < 0))
    {
        SCRIPT_ASSERT( "Attempt to Make_Ped_Drunk but ragdoll msec requested is NOT_DRUNK or a negative value" );
        return 0;
    }
    iVar6 = sub_63837();
    if (iVar6 == -1)
    {
        PRINTSTRING( "\n\n\nAll drunk request slots are full - Need to increase MAX_NUMBER_OF_DRUNK_REQUESTS\n\n" );
        return 0;
    }
    g_U9074[iVar6]._fU0 = 0;
    g_U9074[iVar6]._fU4 = iParam0;
    g_U9074[iVar6]._fU8 = iParam1;
    g_U9074[iVar6]._fU12 = iParam1;
    g_U9074[iVar6]._fU16 = nil;
    g_U9074[iVar6]._fU20 = nil;
    if (iParam0 == sub_3604())
    {
        g_U9199 = 1;
    }
    return 1;
}

int sub_63531(int iParam0)
{
    int I;

    if (iParam0 == nil)
    {
        return -1;
    }
    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        if (iParam0 == g_U9105[I]._fU4)
        {
            return g_U9105[I]._fU0;
        }
    }
    return -1;
}

int sub_63640(int iParam0)
{
    int Result;

    Result = 0;
    for ( Result = 0; Result < 5; Result++ )
    {
        if (g_U9074[Result]._fU4 == iParam0)
        {
            return Result;
        }
    }
    return -1;
}

int sub_63837()
{
    int Result;

    Result = 0;
    for ( Result = 0; Result < 5; Result++ )
    {
        if (g_U9074[Result]._fU0 == 16)
        {
            return Result;
        }
    }
    return -1;
}

void sub_66576(int iParam0)
{
    boolean bVar3;
    boolean bVar4;
    int iVar5;
    unknown uVar6;

    if (DOES_CHAR_EXIST( iParam0->_fU24 ))
    {
        if (NOT (IS_CHAR_INJURED( iParam0->_fU24 )))
        {
            if (sub_51601( iParam0->_fU56 ))
            {
                BLOCK_CHAR_AMBIENT_ANIMS( iParam0->_fU24, 1 );
            }
            if (NOT (IS_AMBIENT_SPEECH_PLAYING( iParam0->_fU24 )))
            {
                if (NOT (sub_2334( iParam0->_fU24 )))
                {
                    if (sub_27182( sub_53814( iParam0->_fU56 ) ))
                    {
                        uVar6 = l_U1716[iParam0->_fU56]._fU0;
                    }
                    if (NOT l_U1875)
                    {
                        if (iParam0->_fU20 > 10000)
                        {
                            switch (iParam0->_fU4)
                            {
                                case 9:
                                if (NOT (g_U30192[l_U1938] == 2))
                                {
                                    if (l_U1957 > 30000)
                                    {
                                        if (LOCATE_CHAR_ON_FOOT_CHAR_3D( iParam0->_fU24, sub_3604(), 1.50000000, 1.50000000, 2.00000000, 0 ))
                                        {
                                            if (NOT sub_29203())
                                            {
                                                SAY_AMBIENT_SPEECH( iParam0->_fU24, "GREET_LUIS", 1, 1, 0 );
                                                PRINTSTRING( "SAY_AMBIENT_SPEECH - GREET_LUIS" );
                                                PRINTNL();
                                                l_U1957 = 0;
                                                iParam0->_fU20 = 0;
                                            }
                                        }
                                    }
                                }
                                else if (l_U1957 > 30000)
                                {
                                    if (LOCATE_CHAR_ON_FOOT_CHAR_3D( iParam0->_fU24, sub_3604(), 1.50000000, 1.50000000, 2.00000000, 0 ))
                                    {
                                        if (NOT sub_29203())
                                        {
                                            SAY_AMBIENT_SPEECH( iParam0->_fU24, "NIGHTCLUB_REFUSE_ENTRY", 1, 0, 0 );
                                            PRINTSTRING( "SAY_AMBIENT_SPEECH - NIGHTCLUB_REFUSE_ENTRY 1" );
                                            PRINTNL();
                                            l_U1957 = 0;
                                            iParam0->_fU20 = 0;
                                        }
                                    }
                                }
                                if (l_U1899)
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U1982 )))
                                    {
                                        if ((NOT (IS_AMBIENT_SPEECH_PLAYING( l_U1982 ))) AND (NOT (IS_AMBIENT_SPEECH_PLAYING( iParam0->_fU24 ))))
                                        {
                                            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref iVar5 );
                                            switch (iVar5)
                                            {
                                                case 0:
                                                SAY_AMBIENT_SPEECH( iParam0->_fU24, "NIGHTCLUB_REFUSE_ENTRY", 1, 0, 0 );
                                                PRINTSTRING( "SAY_AMBIENT_SPEECH - NIGHTCLUB_REFUSE_ENTRY 2" );
                                                PRINTNL();
                                                break;
                                                case 1:
                                                SAY_AMBIENT_SPEECH( iParam0->_fU24, "BOUNCER_AGGRESSIVE_NO", 1, 0, 0 );
                                                PRINTSTRING( "SAY_AMBIENT_SPEECH - BOUNCER_AGGRESSIVE_NO" );
                                                PRINTNL();
                                                break;
                                                case 2:
                                                SAY_AMBIENT_SPEECH( iParam0->_fU24, "BOUNCER_DISMISSIVE_NO", 1, 0, 0 );
                                                PRINTSTRING( "SAY_AMBIENT_SPEECH - BOUNCER_DISMISSIVE_NO" );
                                                PRINTNL();
                                                break;
                                            }
                                            TASK_LOOK_AT_CHAR( iParam0->_fU24, l_U1982, 3000, 0 );
                                            l_U1899 = 0;
                                        }
                                    }
                                }
                                break;
                                case 1:
                                case 7:
                                case 3:
                                case 4:
                                case 6:
                                bVar3 = true;
                                if (DOES_CHAR_EXIST( l_U1980 ))
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U1980 )))
                                    {
                                        if ((IS_AMBIENT_SPEECH_PLAYING( l_U1980 )) || (l_U1980 == iParam0->_fU24))
                                        {
                                            bVar3 = false;
                                        }
                                    }
                                }
                                if (l_U1938 == 2)
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_3D( iParam0->_fU24, -438.89600000, 349.11720000, 10.71170000, 0.50000000, 0.50000000, 2.00000000, 0 ))
                                    {
                                        bVar4 = true;
                                    }
                                }
                                if (l_U1938 == 0)
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_3D( iParam0->_fU24, -438.89600000, 349.11720000, 10.71170000, 0.50000000, 0.50000000, 2.00000000, 0 ))
                                    {
                                        bVar4 = true;
                                    }
                                }
                                if (NOT bVar4)
                                {
                                    if (bVar3)
                                    {
                                        if (NOT l_U1900)
                                        {
                                            if (((l_U1959 > 6000) AND (iParam0->_fU20 > 20000)) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3604(), iParam0->_fU24, 2.00000000, 2.00000000, 2.00000000, 0 )))
                                            {
                                                GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref iVar5 );
                                                if (iVar5 < 2)
                                                {
                                                    if ((sub_67948( iParam0->_fU24 )) || (l_U1938 == 0))
                                                    {
                                                        l_U1980 = iParam0->_fU24;
                                                        SAY_AMBIENT_SPEECH( iParam0->_fU24, "NOT_BEING_SERVED", 1, 1, 2 );
                                                        PRINTSTRING( "SAY_AMBIENT_SPEECH - NOT_BEING_SERVED" );
                                                        PRINTNL();
                                                        iParam0->_fU20 = 0;
                                                        l_U1959 = 0;
                                                    }
                                                    else if (sub_33564( iParam0->_fU52 ))
                                                    {
                                                        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar5 );
                                                        switch (iVar5)
                                                        {
                                                            case 0:
                                                            l_U1980 = iParam0->_fU24;
                                                            SAY_AMBIENT_SPEECH( iParam0->_fU24, "COMMENT_ON_LUIS", 1, 1, 2 );
                                                            PRINTSTRING( "SAY_AMBIENT_SPEECH - COMMENT_ON_LUIS" );
                                                            PRINTNL();
                                                            iParam0->_fU20 = 0;
                                                            l_U1959 = 0;
                                                            break;
                                                            case 1:
                                                            l_U1980 = iParam0->_fU24;
                                                            SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0->_fU24, "GIGGLE", "PAIN_VOICE", 1, 1, 2 );
                                                            PRINTSTRING( "SAY_AMBIENT_SPEECH - GIGGLE" );
                                                            PRINTNL();
                                                            iParam0->_fU20 = 0;
                                                            l_U1959 = 0;
                                                            break;
                                                        }
                                                        TASK_LOOK_AT_CHAR( iParam0->_fU24, sub_3604(), 5000, 0 );
                                                    }
                                                    else
                                                    {
                                                        l_U1980 = iParam0->_fU24;
                                                        SAY_AMBIENT_SPEECH( iParam0->_fU24, "CONV_DANCEFLOOR_STATE", 1, 1, 2 );
                                                        PRINTSTRING( "SAY_AMBIENT_SPEECH - CONV_DANCEFLOOR_STATE" );
                                                        PRINTNL();
                                                        iParam0->_fU20 = 0;
                                                        l_U1959 = 0;
                                                        l_U1900 = 1;
                                                    }
                                                }
                                                else if ((sub_68791( iParam0->_fU24 )) AND (l_U1964 > 20000))
                                                {
                                                    l_U1980 = iParam0->_fU24;
                                                    SAY_AMBIENT_SPEECH( iParam0->_fU24, "EXCITED_CHEER", 1, 1, 2 );
                                                    PRINTSTRING( "SAY_AMBIENT_SPEECH - EXCITED_CHEER" );
                                                    PRINTNL();
                                                    l_U1964 = 0;
                                                    l_U1959 = 0;
                                                }
                                                else
                                                {
                                                    l_U1980 = iParam0->_fU24;
                                                    SAY_AMBIENT_SPEECH( iParam0->_fU24, "CONV_DANCEFLOOR_STATE", 1, 1, 2 );
                                                    PRINTSTRING( "SAY_AMBIENT_SPEECH - CONV_DANCEFLOOR_STATE" );
                                                    PRINTNL();
                                                    iParam0->_fU20 = 0;
                                                    l_U1959 = 0;
                                                    l_U1900 = 1;
                                                }
                                            }
                                        }
                                        else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3604(), iParam0->_fU24, 3.00000000, 3.00000000, 2.00000000, 0 ))
                                        {
                                            l_U1980 = iParam0->_fU24;
                                            SAY_AMBIENT_SPEECH( iParam0->_fU24, "CONV_DANCEFLOOR_RESP", 1, 1, 2 );
                                            PRINTSTRING( "SAY_AMBIENT_SPEECH - CONV_DANCEFLOOR_RESP" );
                                            PRINTNL();
                                            iParam0->_fU20 = 0;
                                            l_U1900 = 0;
                                        }
                                    }
                                }
                                else if ((l_U1959 > 5000) AND (iParam0->_fU20 > 5000))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3604(), iParam0->_fU24, 2.00000000, 2.00000000, 2.00000000, 0 ))
                                    {
                                        l_U1980 = iParam0->_fU24;
                                        SAY_AMBIENT_SPEECH( iParam0->_fU24, "ATTENDANT_NO_TICKET", 1, 1, 2 );
                                        PRINTSTRING( "SAY_AMBIENT_SPEECH - ATTENDANT_NO_TICKET" );
                                        PRINTNL();
                                        iParam0->_fU20 = 0;
                                    }
                                }
                                break;
                                case 5:
                                if (iParam0->_fU48 == l_U1994)
                                {
                                    if (l_U1961 > 300000)
                                    {
                                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3604(), iParam0->_fU24, 1.50000000, 1.50000000, 2.00000000, 0 ))
                                        {
                                            SAY_AMBIENT_SPEECH( iParam0->_fU24, "OFFER_COLOGNE", 1, 1, 2 );
                                            PRINTSTRING( "SAY_AMBIENT_SPEECH - OFFER_COLOGNE" );
                                            PRINTNL();
                                            TASK_LOOK_AT_CHAR( iParam0->_fU24, sub_3604(), 10000, 0 );
                                            l_U1961 = 0;
                                        }
                                    }
                                }
                                break;
                                case 14:
                                if (iParam0->_fU48 == -882058861)
                                {
                                    if (l_U1961 > 300000)
                                    {
                                        if (IS_CHAR_IN_AREA_3D( sub_3604(), -474.83110000, 144.02730000, 5.00000000, -470.93110000, 150.60230000, 11.86380000, 0 ))
                                        {
                                            if (IS_CHAR_ON_SCREEN( iParam0->_fU24 ))
                                            {
                                                SAY_AMBIENT_SPEECH( iParam0->_fU24, "GENERIC_HI", 1, 1, 2 );
                                                PRINTSTRING( "SAY_AMBIENT_SPEECH - joni says hi" );
                                                PRINTNL();
                                                TASK_LOOK_AT_CHAR( iParam0->_fU24, sub_3604(), 25000, 0 );
                                                l_U1961 = 0;
                                            }
                                        }
                                    }
                                }
                                break;
                                case 2:
                                bVar3 = true;
                                if (DOES_CHAR_EXIST( l_U1981 ))
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U1981 )))
                                    {
                                        if ((IS_AMBIENT_SPEECH_PLAYING( l_U1981 )) || (l_U1981 == iParam0->_fU24))
                                        {
                                            bVar3 = false;
                                        }
                                    }
                                }
                                if (bVar3)
                                {
                                    if (NOT (sub_27182( uVar6 )))
                                    {
                                        if (COMPARE_STRING( uVar6, "Scenario_SmokingOutsideOffice" ))
                                        {
                                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3604(), iParam0->_fU24, 4.00000000, 4.00000000, 2.00000000, 0 ))
                                            {
                                                if (NOT l_U1898)
                                                {
                                                    if (l_U1960 > 300000)
                                                    {
                                                        l_U1981 = iParam0->_fU24;
                                                        SAY_AMBIENT_SPEECH( iParam0->_fU24, "CONV_SMOKE_STATE", 1, 0, 0 );
                                                        PRINTSTRING( "SAY_AMBIENT_SPEECH - CONV_SMOKE_STATE" );
                                                        PRINTNL();
                                                        iParam0->_fU20 = 0;
                                                        l_U1898 = 1;
                                                        l_U1960 = 0;
                                                    }
                                                }
                                                else
                                                {
                                                    l_U1981 = iParam0->_fU24;
                                                    SAY_AMBIENT_SPEECH( iParam0->_fU24, "CONV_SMOKE_RESP", 1, 0, 0 );
                                                    PRINTSTRING( "SAY_AMBIENT_SPEECH - CONV_SMOKE_RESP" );
                                                    PRINTNL();
                                                    iParam0->_fU20 = 0;
                                                    l_U1898 = 0;
                                                }
                                            }
                                        }
                                    }
                                }
                                break;
                                case 13:
                                if (iParam0->_fU20 > 20000)
                                {
                                    if (NOT l_U1899)
                                    {
                                        if (NOT (IS_CHAR_INJURED( g_U30210 )))
                                        {
                                            TASK_LOOK_AT_CHAR( iParam0->_fU24, g_U30210, 3000, 0 );
                                            SAY_AMBIENT_SPEECH( iParam0->_fU24, "NIGHTCLUB_REFUSE_PLEAD", 1, 0, 0 );
                                            PRINTSTRING( "SAY_AMBIENT_SPEECH - NIGHTCLUB_REFUSE_PLEAD" );
                                            PRINTNL();
                                            l_U1982 = iParam0->_fU24;
                                            l_U1899 = 1;
                                            iParam0->_fU20 = 0;
                                        }
                                    }
                                }
                                break;
                            }
                        }
                    }
                    else
                    {
                        switch (iParam0->_fU4)
                        {
                            case 1:
                            case 7:
                            case 3:
                            case 4:
                            case 6:
                            case 10:
                            case 12:
                            if (iParam0->_fU20 > 3000)
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref iVar5 );
                                switch (iVar5)
                                {
                                    case 0:
                                    SAY_AMBIENT_SPEECH( iParam0->_fU24, "GUN_RUN", 1, 1, 2 );
                                    break;
                                    case 1:
                                    SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0->_fU24, "PANIC", "PAIN_VOICE", 1, 1, 2 );
                                    break;
                                    case 2:
                                    SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0->_fU24, "HIGH_FALL", "PAIN_VOICE", 1, 1, 2 );
                                    break;
                                    case 3:
                                    SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0->_fU24, "PANIC_SHORT", "PAIN_VOICE", 1, 1, 2 );
                                    break;
                                }
                                iParam0->_fU20 = 0;
                            }
                            break;
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_67948(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        switch (l_U1938)
        {
            case 0:
            if ((IS_CHAR_IN_AREA_3D( uParam0, -399.23300000, 404.80890000, 3.59930000, -391.15800000, 411.48390000, 7.67430000, 0 )) || (IS_CHAR_IN_AREA_3D( uParam0, -398.35210000, 436.67440000, 4.69930000, -386.22710000, 438.67440000, 8.17430000, 0 )))
            {
                return 1;
            }
            break;
            case 2:
            if (IS_CHAR_IN_AREA_3D( uParam0, -437.19730000, 352.37860000, 10.19170000, -430.17230000, 355.72860000, 13.71660000, 0 ))
            {
                return 1;
            }
            break;
            case 1:
            if (IS_CHAR_IN_AREA_3D( uParam0, -486.86260000, 156.69480000, 6.05520000, -480.53760000, 158.54480000, 9.55520000, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

int sub_68791(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_AREA_3D( uParam0, l_U126._fU28._fU0, l_U126._fU28._fU4, l_U126._fU28._fU8, l_U126._fU40._fU0, l_U126._fU40._fU4, l_U126._fU40._fU8, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_71520()
{
    int I;

    for ( I = 0; I < l_U1862; I++ )
    {
        sub_71553( ref l_U1862[I] );
    }
    return;
}

void sub_71553(int iParam0)
{
    int iVar3;
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        iVar3 = 0;
        if (IS_CHAR_PLAYING_ANIM( iParam0->_fU0, "missnightclub", "MALE_puke" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( iParam0->_fU0, "missnightclub", "MALE_puke", ref uVar4 );
            iVar3 = 1;
        }
        else if (IS_CHAR_PLAYING_ANIM( iParam0->_fU0, "missnightclub", "female_puke" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( iParam0->_fU0, "missnightclub", "female_puke", ref uVar4 );
            iVar3 = 2;
        }
        if (iVar3 > 0)
        {
            if (sub_71783( iVar3, uVar4 ))
            {
                if (NOT iParam0->_fU8)
                {
                    iParam0->_fU4 = START_PTFX_ON_PED_BONE( "drink_champagne_vomit", iParam0->_fU0, l_U2068, l_U2071, 1205, 1.00000000 );
                    SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0->_fU0, "COUGH", "PAIN_VOICE", 1, 1, 1 );
                    iParam0->_fU8 = 1;
                }
            }
            else if (iParam0->_fU8)
            {
                STOP_PTFX( iParam0->_fU4 );
                iParam0->_fU8 = 0;
            }
        }
        else if (iParam0->_fU8)
        {
            STOP_PTFX( iParam0->_fU4 );
            iParam0->_fU8 = 0;
        }
    }
    else if (iParam0->_fU0 != nil)
    {
        if (iParam0->_fU8)
        {
            STOP_PTFX( iParam0->_fU4 );
        }
        iParam0->_fU0 = nil;
        iParam0->_fU8 = 0;
        iParam0->_fU4 = -1;
    }
    return;
}

int sub_71783(int iParam0, float fParam1)
{
    if (NOT g_U30166)
    {
        if (iParam0 == 1)
        {
            if (((((fParam1 >= 0.24000000) AND (fParam1 <= 0.30000000)) || ((fParam1 >= 0.41000000) AND (fParam1 <= 0.44000000))) || ((fParam1 >= 0.77000000) AND (fParam1 <= 0.81000000))) || ((fParam1 >= 0.85000000) AND (fParam1 <= 0.87000000)))
            {
                return 1;
            }
            return 0;
        }
        else if (iParam0 == 2)
        {
            if ((((fParam1 >= 0.25000000) AND (fParam1 <= 0.26000000)) || ((fParam1 >= 0.54000000) AND (fParam1 <= 0.56000000))) || ((fParam1 >= 0.71000000) AND (fParam1 <= 0.74000000)))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_72427(unknown uParam0)
{
    int I;

    for ( I = 0; I < (uParam0^); I++ )
    {
        if (((((((((uParam0^)[I]._fU4 == 8) || ((uParam0^)[I]._fU4 == 9)) || ((uParam0^)[I]._fU4 == 2)) || ((uParam0^)[I]._fU4 == 13)) || ((uParam0^)[I]._fU4 == 6)) || ((uParam0^)[I]._fU4 == 7)) || ((uParam0^)[I]._fU4 == 5)) || ((uParam0^)[I]._fU4 == 14))
        {
            (uParam0^)[I]._fU0 = 0;
        }
        if (NOT (l_U139[I]._fU24 == g_U30208))
        {
            if (DOES_CHAR_EXIST( (uParam0^)[I]._fU24 ))
            {
                sub_2303( ref (uParam0^)[I], 1 );
                (uParam0^)[I]._fU8 = 0;
                (uParam0^)[I]._fU12 = 0;
            }
        }
    }
    return;
}

int sub_73441(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        sub_73461( uParam0, 0 );
        if (((((HAVE_ANIMS_LOADED( "missnightclub" )) AND (HAVE_ANIMS_LOADED( "AMB@SMOKING_F" ))) AND (HAVE_ANIMS_LOADED( "AMB@SMOKING" ))) AND (HAS_MODEL_LOADED( -268530289 ))) AND (HAS_MODEL_LOADED( -2037134882 )))
        {
            switch (uParam0)
            {
                case 0:
                if ((((((((HAS_MODEL_LOADED( -1696530209 )) AND (HAS_MODEL_LOADED( 1756785265 ))) AND (HAS_MODEL_LOADED( 982077731 ))) AND (HAS_MODEL_LOADED( 1758965191 ))) AND (HAS_MODEL_LOADED( -844218756 ))) AND (HAS_MODEL_LOADED( -1684055465 ))) AND (HAS_SCRIPT_LOADED( "ambNightclubBM2" ))) AND (HAVE_ANIMS_LOADED( "missamb_bama" )))
                {
                    return 1;
                }
                break;
                case 1:
                if ((((((((((HAS_MODEL_LOADED( -1696530209 )) AND (HAS_MODEL_LOADED( 1756785265 ))) AND (HAS_MODEL_LOADED( g_U30218 ))) AND (HAS_MODEL_LOADED( g_U30219 ))) AND (HAS_MODEL_LOADED( g_U30220 ))) AND (HAS_MODEL_LOADED( g_U30221 ))) AND (HAS_MODEL_LOADED( 1429700748 ))) AND (HAS_MODEL_LOADED( -1446884113 ))) AND (HAS_SCRIPT_LOADED( "ambNightclubM92" ))) AND (HAVE_ANIMS_LOADED( "missamb_m9" )))
                {
                    return 1;
                }
                break;
                case 2:
                if ((((((((HAS_MODEL_LOADED( g_U30222 )) AND (HAS_MODEL_LOADED( g_U30223 ))) AND (HAS_MODEL_LOADED( g_U30224 ))) AND (HAS_MODEL_LOADED( g_U30225 ))) AND (HAS_MODEL_LOADED( 1662473323 ))) AND (HAS_SCRIPT_LOADED( "ambNightclubHC2" ))) AND (HAVE_ANIMS_LOADED( "missamb_herc_female" ))) AND (HAVE_ANIMS_LOADED( "missamb_herc_male" )))
                {
                    return 1;
                }
                break;
            }
        }
    }
    else
    {
        switch (uParam0)
        {
            case 0:
            if (((HAS_MODEL_LOADED( 1756785265 )) AND (HAS_MODEL_LOADED( 982077731 ))) AND (HAS_MODEL_LOADED( -844218756 )))
            {
                return 1;
            }
            break;
            case 1:
            if (((HAS_MODEL_LOADED( g_U30218 )) AND (HAS_MODEL_LOADED( g_U30220 ))) AND (HAS_MODEL_LOADED( -1446884113 )))
            {
                return 1;
            }
            break;
            case 2:
            if (((HAS_MODEL_LOADED( g_U30222 )) AND (HAS_MODEL_LOADED( g_U30224 ))) AND (HAS_MODEL_LOADED( 1662473323 )))
            {
                return 1;
            }
            break;
        }
        return 0;
    }
    PRINTSTRING( "HAVE_ASSETS_FOR_CLUB_LOADED - " );
    switch (uParam0)
    {
        case 0:
        PRINTSTRING( "BAHAMA MAMAS" );
        break;
        case 1:
        PRINTSTRING( "MAISONETTE 9" );
        break;
        case 2:
        PRINTSTRING( "HERCULES" );
        break;
    }
    PRINTSTRING( " - loading..." );
    PRINTNL();
    return 0;
}

void sub_73461(unknown uParam0, boolean bParam1)
{
    sub_73472( uParam0 );
    if (bParam1)
    {
        switch (uParam0)
        {
            case 0:
            REQUEST_MODEL( 1756785265 );
            REQUEST_MODEL( 982077731 );
            REQUEST_MODEL( -844218756 );
            break;
            case 1:
            REQUEST_MODEL( g_U30218 );
            REQUEST_MODEL( g_U30220 );
            REQUEST_MODEL( -1446884113 );
            break;
            case 2:
            REQUEST_MODEL( g_U30222 );
            REQUEST_MODEL( g_U30224 );
            REQUEST_MODEL( 1662473323 );
            break;
        }
    }
    else
    {
        REQUEST_ANIMS( "missnightclub" );
        REQUEST_ANIMS( "AMB@SMOKING_F" );
        REQUEST_ANIMS( "AMB@SMOKING" );
        REQUEST_MODEL( -268530289 );
        REQUEST_MODEL( -2037134882 );
        switch (uParam0)
        {
            case 0:
            REQUEST_MODEL( -1696530209 );
            REQUEST_MODEL( 1756785265 );
            REQUEST_MODEL( 982077731 );
            REQUEST_MODEL( 1758965191 );
            REQUEST_MODEL( -844218756 );
            REQUEST_MODEL( -1684055465 );
            REQUEST_SCRIPT( "ambNightclubBM2" );
            REQUEST_ANIMS( "missamb_bama" );
            break;
            case 1:
            REQUEST_MODEL( -1696530209 );
            REQUEST_MODEL( 1756785265 );
            REQUEST_MODEL( g_U30218 );
            REQUEST_MODEL( g_U30219 );
            REQUEST_MODEL( g_U30220 );
            REQUEST_MODEL( g_U30221 );
            REQUEST_MODEL( 1429700748 );
            REQUEST_MODEL( -1446884113 );
            REQUEST_SCRIPT( "ambNightclubM92" );
            REQUEST_ANIMS( "missamb_m9" );
            break;
            case 2:
            REQUEST_MODEL( g_U30222 );
            REQUEST_MODEL( g_U30223 );
            REQUEST_MODEL( g_U30224 );
            REQUEST_MODEL( g_U30225 );
            REQUEST_MODEL( 1662473323 );
            REQUEST_SCRIPT( "ambNightclubHC2" );
            REQUEST_ANIMS( "missamb_herc_female" );
            REQUEST_ANIMS( "missamb_herc_male" );
            break;
        }
    }
    g_U30144 = 1;
    return;
}

void sub_73472(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: break;
        case 1:
        if (g_U30218 == 0)
        {
            g_U30218 = 698554670;
        }
        if (g_U30219 == 0)
        {
            g_U30219 = -747359056;
        }
        if (g_U30220 == 0)
        {
            g_U30220 = 930552533;
        }
        if (g_U30221 == 0)
        {
            g_U30221 = -297585214;
        }
        break;
        case 2:
        if (g_U30222 == 0)
        {
            g_U30222 = 284474691;
        }
        if (g_U30223 == 0)
        {
            g_U30223 = 563038535;
        }
        if (g_U30224 == 0)
        {
            g_U30224 = -1064645793;
        }
        if (g_U30225 == 0)
        {
            g_U30225 = -808865642;
        }
        break;
    }
    return;
}

void sub_75720()
{
    unknown uVar2;

    if (NOT l_U1883)
    {
        sub_75744( ref l_U1685 );
        sub_75744( ref l_U139 );
        sub_75972();
        l_U1883 = 1;
    }
    return;
}

void sub_75744(unknown uParam0)
{
    int I;

    for ( I = 0; I < (uParam0^); I++ )
    {
        if ((uParam0^)[I]._fU0)
        {
            if (NOT ((uParam0^)[I]._fU48 == 0))
            {
                MARK_MODEL_AS_NO_LONGER_NEEDED( (uParam0^)[I]._fU48 );
            }
        }
        if (l_U1877)
        {
            PRINTSTRING( "REMOVE_CLUB_PED - called from REMOVE_ALL_CLUB_PEDS_AND_UNLOAD_ASSETS_FROM_CLUBPED_ARRAY" );
            PRINTNL();
        }
        sub_42661( ref (uParam0^)[I], 1 );
    }
    return;
}

void sub_75972()
{
    int I;
    unknown uVar3;

    for ( I = 0; I < l_U1763; I++ )
    {
        uVar3 = sub_53814( l_U1763[I]._fU24 );
        if (NOT (sub_27182( uVar3 )))
        {
            REMOVE_ANIMS( uVar3 );
        }
    }
    return;
}

void sub_76327()
{
    int I;
    int iVar3;

    OPEN_DEBUG_FILE();
    SAVE_NEWLINE_TO_DEBUG_FILE();
    SAVE_STRING_TO_DEBUG_FILE( "// *********************************************************************************************" );
    SAVE_NEWLINE_TO_DEBUG_FILE();
    switch (l_U1938)
    {
        case 0:
        SAVE_STRING_TO_DEBUG_FILE( "//    BAHAMA MAMAS CLUB DETAILS" );
        break;
        case 2:
        SAVE_STRING_TO_DEBUG_FILE( "//    HERCULES CLUB DETAILS" );
        break;
        case 1:
        SAVE_STRING_TO_DEBUG_FILE( "//    MAISONETTE 9 CLUB DETAILS" );
        break;
    }
    SAVE_NEWLINE_TO_DEBUG_FILE();
    SAVE_STRING_TO_DEBUG_FILE( "// *********************************************************************************************" );
    SAVE_NEWLINE_TO_DEBUG_FILE();
    SAVE_NEWLINE_TO_DEBUG_FILE();
    SAVE_STRING_TO_DEBUG_FILE( "// club peds " );
    SAVE_NEWLINE_TO_DEBUG_FILE();
    for ( I = 0; I < l_U139; I++ )
    {
        if (l_U139[I]._fU0)
        {
            SAVE_STRING_TO_DEBUG_FILE( "ClubPeds[" );
            SAVE_INT_TO_DEBUG_FILE( iVar3 );
            SAVE_STRING_TO_DEBUG_FILE( "].bIsActive = TRUE" );
            SAVE_NEWLINE_TO_DEBUG_FILE();
            SAVE_STRING_TO_DEBUG_FILE( "ClubPeds[" );
            SAVE_INT_TO_DEBUG_FILE( iVar3 );
            SAVE_STRING_TO_DEBUG_FILE( "].iModel = " );
            switch (l_U139[I]._fU52)
            {
                case 0:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_CUSTOM" );
                SAVE_NEWLINE_TO_DEBUG_FILE();
                SAVE_STRING_TO_DEBUG_FILE( "ClubPeds[" );
                SAVE_INT_TO_DEBUG_FILE( iVar3 );
                SAVE_STRING_TO_DEBUG_FILE( "].ModelName = //  this needs to be filled out manually " );
                break;
                case 1:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_RANDOM_FEMALE" );
                break;
                case 2:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_RANDOM_MALE" );
                break;
                case 3:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_FEMALE_1" );
                break;
                case 4:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_FEMALE_2" );
                break;
                case 5:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_MALE_1" );
                break;
                case 6:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_MALE_2" );
                break;
                case 7:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_BAR_STAFF" );
                break;
                case 8:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_BOUNCER" );
                break;
                case 9:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_DESSIE" );
                break;
                case 10:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_TROY" );
                break;
                case 11:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_MODEL_BATHROOM_ATTENDANT" );
                break;
            }
            SAVE_NEWLINE_TO_DEBUG_FILE();
            SAVE_STRING_TO_DEBUG_FILE( "ClubPeds[" );
            SAVE_INT_TO_DEBUG_FILE( iVar3 );
            SAVE_STRING_TO_DEBUG_FILE( "].iType = " );
            switch (l_U139[I]._fU4)
            {
                case 1:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_INTERIOR_CROWD" );
                break;
                case 2:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_EXTERIOR_CROWD" );
                break;
                case 13:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_REFUSED_ENTRY" );
                break;
                case 3:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_BOTH_CROWD" );
                break;
                case 4:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_INTERIOR_PATROL" );
                break;
                case 5:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_INTERIOR_STAFF" );
                break;
                case 14:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_JONI" );
                break;
                case 6:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_BOTH_PATROL" );
                break;
                case 7:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_STAIRWELL_PED" );
                break;
                case 8:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_INTERIOR_BOUNCER" );
                break;
                case 9:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_EXTERIOR_BOUNCER" );
                break;
                case 10:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_INTERIOR_DANCER" );
                break;
                case 11:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_EXTERIOR_ONLOOKER" );
                break;
                case 12:
                SAVE_STRING_TO_DEBUG_FILE( "CLUB_PED_TYPE_SPECIFIC_DANCER" );
                break;
            }
            SAVE_NEWLINE_TO_DEBUG_FILE();
            SAVE_STRING_TO_DEBUG_FILE( "ClubPeds[" );
            SAVE_INT_TO_DEBUG_FILE( iVar3 );
            SAVE_STRING_TO_DEBUG_FILE( "].iClubAnim = CLUB_ANIM_" );
            if (l_U139[I]._fU56 > 17)
            {
                switch (l_U1938)
                {
                    case 0:
                    SAVE_STRING_TO_DEBUG_FILE( "BM_" );
                    break;
                    case 2:
                    if (l_U139[I]._fU56 < 43)
                    {
                        SAVE_STRING_TO_DEBUG_FILE( "HERC_FEMALE_" );
                    }
                    else
                    {
                        SAVE_STRING_TO_DEBUG_FILE( "HERC_MALE_" );
                    }
                    break;
                    case 1:
                    SAVE_STRING_TO_DEBUG_FILE( "M9_" );
                    break;
                }
            }
            if (NOT (sub_27182( l_U1716[l_U139[I]._fU56]._fU0 )))
            {
                SAVE_STRING_TO_DEBUG_FILE( l_U1716[l_U139[I]._fU56]._fU0 );
            }
            else
            {
                PRINTSTRING( "iClubAnim = " );
                PRINTINT( l_U139[I]._fU56 );
                PRINTNL();
                SCRIPT_ASSERT( "club anim strname is null!" );
            }
            SAVE_NEWLINE_TO_DEBUG_FILE();
            SAVE_STRING_TO_DEBUG_FILE( "ClubPeds[" );
            SAVE_INT_TO_DEBUG_FILE( iVar3 );
            SAVE_STRING_TO_DEBUG_FILE( "].pos = <<" );
            SAVE_FLOAT_TO_DEBUG_FILE( l_U139[I]._fU28._fU0 );
            SAVE_STRING_TO_DEBUG_FILE( ", " );
            SAVE_FLOAT_TO_DEBUG_FILE( l_U139[I]._fU28._fU4 );
            SAVE_STRING_TO_DEBUG_FILE( ", " );
            SAVE_FLOAT_TO_DEBUG_FILE( l_U139[I]._fU28._fU8 );
            SAVE_STRING_TO_DEBUG_FILE( ">>" );
            SAVE_NEWLINE_TO_DEBUG_FILE();
            SAVE_STRING_TO_DEBUG_FILE( "ClubPeds[" );
            SAVE_INT_TO_DEBUG_FILE( iVar3 );
            SAVE_STRING_TO_DEBUG_FILE( "].fHeading = " );
            SAVE_FLOAT_TO_DEBUG_FILE( l_U139[I]._fU40 );
            SAVE_NEWLINE_TO_DEBUG_FILE();
            SAVE_NEWLINE_TO_DEBUG_FILE();
            iVar3++;
        }
    }
    SAVE_NEWLINE_TO_DEBUG_FILE();
    iVar3 = 0;
    SAVE_STRING_TO_DEBUG_FILE( "// patrol points" );
    SAVE_NEWLINE_TO_DEBUG_FILE();
    for ( I = 0; I < l_U1763; I++ )
    {
        SAVE_STRING_TO_DEBUG_FILE( "PatrolPoints[" );
        SAVE_INT_TO_DEBUG_FILE( iVar3 );
        SAVE_STRING_TO_DEBUG_FILE( "].pos = <<" );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U1763[I]._fU0._fU0 );
        SAVE_STRING_TO_DEBUG_FILE( ", " );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U1763[I]._fU0._fU4 );
        SAVE_STRING_TO_DEBUG_FILE( ", " );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U1763[I]._fU0._fU8 );
        SAVE_STRING_TO_DEBUG_FILE( ">>" );
        SAVE_NEWLINE_TO_DEBUG_FILE();
        SAVE_STRING_TO_DEBUG_FILE( "PatrolPoints[" );
        SAVE_INT_TO_DEBUG_FILE( iVar3 );
        SAVE_STRING_TO_DEBUG_FILE( "].heading = " );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U1763[I]._fU12 );
        SAVE_NEWLINE_TO_DEBUG_FILE();
        SAVE_STRING_TO_DEBUG_FILE( "PatrolPoints[" );
        SAVE_INT_TO_DEBUG_FILE( iVar3 );
        SAVE_STRING_TO_DEBUG_FILE( "].iClubAnim = CLUB_ANIM_" );
        if (l_U1763[I]._fU24 > 17)
        {
            if ((l_U1938 == 0) || (l_U1938 == 1))
            {
                SAVE_STRING_TO_DEBUG_FILE( "M9_" );
            }
            else if (l_U1763[I]._fU24 < 43)
            {
                SAVE_STRING_TO_DEBUG_FILE( "HERC_FEMALE_" );
            }
            else
            {
                SAVE_STRING_TO_DEBUG_FILE( "HERC_MALE_" );
            }
        }
        SAVE_STRING_TO_DEBUG_FILE( l_U1716[l_U1763[I]._fU24]._fU0 );
        SAVE_NEWLINE_TO_DEBUG_FILE();
        SAVE_STRING_TO_DEBUG_FILE( "PatrolPoints[" );
        SAVE_INT_TO_DEBUG_FILE( iVar3 );
        SAVE_STRING_TO_DEBUG_FILE( "].iType = " );
        switch (l_U1763[I]._fU16)
        {
            case 0:
            SAVE_STRING_TO_DEBUG_FILE( "PATROL_POINT_TYPE_DEFAULT" );
            break;
            case 1:
            SAVE_STRING_TO_DEBUG_FILE( "PATROL_POINT_TYPE_FEMALE_ONLY" );
            break;
        }
        SAVE_NEWLINE_TO_DEBUG_FILE();
        SAVE_NEWLINE_TO_DEBUG_FILE();
        iVar3++;
    }
    SAVE_NEWLINE_TO_DEBUG_FILE();
    CLOSE_DEBUG_FILE();
    WAIT( 0 );
    return;
}

void sub_79790()
{
    float fVar2;
    float fVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    float fVar8;
    float fVar9;

    l_U1965 = GET_AUDIO_ROOM_ID();
    if (l_U1875)
    {
        if (NOT l_U1913)
        {
            GET_GAME_TIMER( ref iVar4 );
            iVar5 = iVar4 - l_U1976;
            if (iVar5 > 10000)
            {
                TRIGGER_POLICE_REPORT( "E2_GENERIC_CLUB_REPORT" );
                l_U1913 = 1;
            }
        }
    }
    if ((l_U1875) || (g_U30178))
    {
        if ((NOT (l_U1973 == -1)) AND (NOT l_U1908))
        {
            MUTE_STATIC_EMITTER( l_U1973, 1 );
            l_U1908 = 1;
        }
    }
    else if (NOT g_U30178)
    {
        if (l_U1908)
        {
            if (NOT (l_U1973 == -1))
            {
                MUTE_STATIC_EMITTER( l_U1973, 0 );
                l_U1908 = 0;
            }
        }
    }
    if (NOT (l_U1970 == l_U1965))
    {
        switch (l_U1938)
        {
            case 0:
            switch (l_U1965)
            {
                case 0:
                l_U1924 = 2.50000000;
                l_U1925 = 2500.00000000;
                l_U1926 = 0.50000000;
                break;
                case 1:
                l_U1924 = 2.50000000;
                l_U1925 = 5000.00000000;
                l_U1926 = 0.60000000;
                break;
                case 2:
                l_U1924 = 2.50000000;
                l_U1925 = 10000.00000000;
                l_U1926 = 0.80000000;
                break;
                case 3:
                l_U1924 = 2.00000000;
                l_U1925 = 15000.00000000;
                l_U1926 = 0.90000000;
                break;
                case 4:
                l_U1924 = 2.50000000;
                l_U1925 = 1500.00000000;
                l_U1926 = 0.20000000;
                break;
                case -1:
                l_U1924 = 5.00000000;
                l_U1925 = 1000.00000000;
                l_U1926 = 0.10000000;
                break;
            }
            break;
            case 1:
            switch (l_U1965)
            {
                case 0:
                l_U1924 = 2.50000000;
                l_U1925 = 5000.00000000;
                l_U1926 = 0.40000000;
                break;
                case 1:
                l_U1924 = 2.50000000;
                l_U1925 = 9000.00000000;
                l_U1926 = 0.60000000;
                break;
                case 2:
                l_U1924 = 2.50000000;
                l_U1925 = 9000.00000000;
                l_U1926 = 0.60000000;
                break;
                case 3:
                l_U1924 = 2.50000000;
                l_U1925 = 2000.00000000;
                l_U1926 = 0.30000000;
                break;
                case 4:
                l_U1924 = 2.50000000;
                l_U1925 = 2000.00000000;
                l_U1926 = 0.30000000;
                break;
                case 5:
                l_U1924 = 2.50000000;
                l_U1925 = 15000.00000000;
                l_U1926 = 0.90000000;
                break;
                case 6:
                l_U1924 = 2.50000000;
                l_U1925 = 13000.00000000;
                l_U1926 = 0.70000000;
                break;
                case 7:
                l_U1924 = 2.50000000;
                l_U1925 = 12000.00000000;
                l_U1926 = 0.80000000;
                break;
                case 8:
                l_U1924 = 2.50000000;
                l_U1925 = 12000.00000000;
                l_U1926 = 0.70000000;
                break;
                case 9:
                l_U1924 = 2.50000000;
                l_U1925 = 900.00000000;
                l_U1926 = 0.10000000;
                break;
                case 10:
                l_U1924 = 2.50000000;
                l_U1925 = 1500.00000000;
                l_U1926 = 0.20000000;
                break;
                case -1:
                l_U1924 = 3.50000000;
                l_U1925 = 1000.00000000;
                l_U1926 = 0.10000000;
                break;
            }
            break;
            case 2:
            switch (l_U1965)
            {
                case 0:
                l_U1924 = 3.00000000;
                l_U1925 = 15000.00000000;
                l_U1926 = 0.80000000;
                break;
                case 1:
                l_U1924 = 5.00000000;
                l_U1925 = 2000.00000000;
                l_U1926 = 0.50000000;
                break;
                case 2:
                l_U1924 = 5.00000000;
                l_U1925 = 2000.00000000;
                l_U1926 = 0.50000000;
                break;
                case -1:
                l_U1924 = 6.00000000;
                l_U1925 = 1000.00000000;
                l_U1926 = 0.10000000;
                break;
            }
            break;
        }
        l_U1918 = l_U1921;
        l_U1919 = l_U1922;
        l_U1920 = l_U1923;
        GET_GAME_TIMER( ref l_U1971 );
    }
    else if (IS_THREAD_ACTIVE( g_U30249 ))
    {
        l_U1926 = g_U30187;
    }
    GET_GAME_TIMER( ref iVar6 );
    iVar7 = iVar6 - l_U1971;
    if (iVar7 < l_U1969)
    {
        fVar8 = (TO_FLOAT( iVar7 )) / (TO_FLOAT( l_U1969 ));
    }
    else
    {
        fVar8 = 1.00000000;
    }
    if (NOT (l_U1965 == -1))
    {
        fVar9 = l_U1924 - l_U1918;
        fVar9 *= fVar8;
        l_U1921 = l_U1918 + fVar9;
        fVar9 = l_U1925 - l_U1919;
        fVar9 *= fVar8;
        l_U1922 = l_U1919 + fVar9;
        fVar9 = l_U1926 - l_U1920;
        fVar9 *= fVar8;
        l_U1923 = l_U1920 + fVar9;
    }
    else
    {
        fVar2 = sub_81341( l_U1938 );
        fVar3 = fVar2;
        if (fVar3 > l_U1930)
        {
            fVar3 = l_U1930;
        }
        fVar3 /= l_U1930;
        l_U1927 = (1.00000000 - fVar3) * l_U1924;
        l_U1928 = l_U1925;
        l_U1929 = l_U1926;
        fVar9 = l_U1927 - l_U1918;
        fVar9 *= fVar8;
        l_U1921 = l_U1918 + fVar9;
        fVar9 = l_U1928 - l_U1919;
        fVar9 *= fVar8;
        l_U1922 = l_U1919 + fVar9;
        fVar9 = l_U1929 - l_U1920;
        fVar9 *= fVar8;
        l_U1923 = l_U1920 + fVar9;
    }
    l_U1970 = l_U1965;
    if (g_U30177)
    {
        if (NOT (IS_THREAD_ACTIVE( g_U30248 )))
        {
            g_U30177 = 0;
            g_U30248 = nil;
        }
    }
    if (NOT (g_U30197 == -1))
    {
        if (NOT (g_U30197 == l_U1938))
        {
            l_U1966 = 0;
        }
        else if (((NOT (sub_19747( sub_3604(), g_U30197, l_U1931 ))) || (g_U30177)) || ((g_U30149[l_U1938]) AND (NOT g_U30154[l_U1938])))
        {
            if (l_U1904)
            {
                if (g_U30177)
                {
                    l_U1974 = GET_STREAM_PLAYTIME();
                    GET_GAME_TIMER( ref l_U1975 );
                }
                else
                {
                    l_U1974 = -1;
                }
            }
            else
            {
                l_U1974 = -1;
            }
            l_U1966 = 0;
            if (NOT (GET_STREAM_PLAYTIME() == -1))
            {
                STOP_STREAM();
            }
            if (l_U1904)
            {
                STOP_STREAM();
                l_U1904 = 0;
            }
            sub_6228();
            if (NOT g_U30177)
            {
                if (l_U1905)
                {
                    if (l_U1906)
                    {
                        MUTE_POSITIONED_RADIO( 0 );
                        l_U1905 = 0;
                    }
                }
            }
            g_U30197 = -1;
        }
    }
    switch (l_U1966)
    {
        case 0:
        if (fVar2 < l_U1930)
        {
            if (g_U30197 == -1)
            {
                if ((((sub_19747( sub_3604(), l_U1938, l_U1931 )) AND (NOT g_U30177)) AND (NOT ((g_U30149[l_U1938]) AND (NOT g_U30154[l_U1938])))) || (g_U30154[l_U1938]))
                {
                    if (GET_STREAM_PLAYTIME() == -1)
                    {
                        l_U1966++;
                        if (NOT l_U1907)
                        {
                            REGISTER_SCRIPT_WITH_AUDIO( 0 );
                            l_U1907 = 1;
                        }
                        if (l_U1906)
                        {
                            MUTE_POSITIONED_RADIO( 1 );
                            l_U1905 = 1;
                        }
                        if (l_U1974 == -1)
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 600000, ref l_U1968 );
                            g_U30197 = l_U1938;
                        }
                        else
                        {
                            GET_GAME_TIMER( ref iVar6 );
                            iVar5 = iVar6 - l_U1975;
                            l_U1968 = l_U1974 + iVar5;
                            g_U30197 = l_U1938;
                            PRINTSTRING( "CLUB AUDIO - restarting stream from new position - iStreamOffset = " );
                            PRINTINT( l_U1968 );
                            PRINTNL();
                        }
                    }
                    else
                    {
                        PRINTSTRING( "Club " );
                        switch (l_U1938)
                        {
                            case 0:
                            PRINTSTRING( "BAHAMA MAMAS" );
                            break;
                            case 1:
                            PRINTSTRING( "MAISONETTE 9" );
                            break;
                            case 2:
                            PRINTSTRING( "HERCULES" );
                            break;
                        }
                        PRINTSTRING( " is trying to start audio but NOT GET_STREAM_PLAYTIME() = -1" );
                        PRINTNL();
                        STOP_STREAM();
                    }
                }
            }
        }
        break;
        case 1:
        switch (l_U1938)
        {
            case 2:
            if (PRELOAD_STREAM_WITH_START_OFFSET( "DANCING_HERCULES_MIX", l_U1968 ))
            {
                PLAY_STREAM_FRONTEND();
                PRINTSTRING( "PLAY_STREAM_FRONTEND - called with DANCING_HERCULES_MIX" );
                PRINTNL();
                l_U1904 = 1;
                l_U1966++;
            }
            break;
            case 1:
            if (PRELOAD_STREAM_WITH_START_OFFSET( "DANCING_MAISONETTE_MIX", l_U1968 ))
            {
                PLAY_STREAM_FRONTEND();
                PRINTSTRING( "PLAY_STREAM_FRONTEND - called with DANCING_MAISONETTE_MIX" );
                PRINTNL();
                l_U1904 = 1;
                l_U1966++;
            }
            break;
            case 0:
            if (PRELOAD_STREAM_WITH_START_OFFSET( "DANCING_BAHAMAMAMMAS_MIX", l_U1968 ))
            {
                PLAY_STREAM_FRONTEND();
                PRINTSTRING( "PLAY_STREAM_FRONTEND - called with DANCING_BAHAMAMAMMAS_MIX" );
                PRINTNL();
                l_U1904 = 1;
                l_U1966++;
            }
            break;
        }
        break;
        case 2:
        if (l_U1904)
        {
            SET_STREAM_PARAMS( l_U1921, ROUND( l_U1922 ) );
        }
        break;
    }
    switch (l_U1967)
    {
        case 0:
        if (g_U30197 == l_U1938)
        {
            if ((l_U1966 > 0) AND (NOT l_U1875))
            {
                l_U1967++;
            }
        }
        break;
        case 1:
        if (REQUEST_AMBIENT_AUDIO_BANK( "EP2_SFX\CLUB_WALLA" ))
        {
            l_U1972 = GET_SOUND_ID();
            PLAY_SOUND_FRONTEND( l_U1972, "CLUB_WALLA" );
            l_U1967++;
        }
        break;
        case 2:
        if (NOT (l_U1972 == -1))
        {
            if (NOT (HAS_SOUND_FINISHED( l_U1972 )))
            {
                if (NOT l_U1875)
                {
                    SET_VARIABLE_ON_SOUND( l_U1972, "Loudness", l_U1923 );
                }
                else if (sub_3889( sub_3604(), l_U1938, 0 ))
                {
                    switch (l_U1938)
                    {
                        case 1:
                        PLAY_SOUND_FROM_POSITION( -1, "CLUB_WALLA_PANIC", 65053, 150, 9 );
                        break;
                        case 2:
                        PLAY_SOUND_FROM_POSITION( -1, "CLUB_WALLA_PANIC", 65101, 352, 12 );
                        break;
                        case 0:
                        PLAY_SOUND_FROM_POSITION( -1, "CLUB_WALLA_PANIC", 65146, 427, 6 );
                        break;
                    }
                }
                sub_6228();;
            }
            else
            {
                sub_6228();
            }
        }
        else
        {
            sub_6228();
        }
        break;
    }
    return;
}

float sub_81341(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    vVar3 = {sub_19758( uParam0 )};
    GET_GAME_CAM( ref uVar12 );
    if (DOES_CAM_EXIST( uVar12 ))
    {
        GET_CAM_POS( uVar12, ref vVar6.x, ref vVar6.y, ref vVar6.z );
        uVar9 = {vVar6 - vVar3};
        return VMAG( uVar9 );
    }
    return -1.00000000;
}

void sub_83594(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    vector vVar7;

    if (NOT l_U125)
    {
        l_U125 = 1;
    }
    if ((g_U10597) || (IS_PLAYER_CONTROL_ON( sub_2048() )))
    {
        if (NOT (sub_83645( iParam0 )))
        {
            if (g_U30197 == iParam0)
            {
                if (GET_STREAM_PLAYTIME() > 0)
                {
                    GET_STREAM_BEAT_INFO( ref l_U115, ref l_U116, ref l_U117 );
                    GET_ROOT_CAM( ref uVar3 );
                    if (DOES_CAM_EXIST( uVar3 ))
                    {
                        GET_CAM_POS( uVar3, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                        switch (iParam0)
                        {
                            case 0:
                            vVar7 = {-390.60390000, 424.73400000, 6.20160000};
                            break;
                            case 1:
                            vVar7 = {-485.47840000, 147.79830000, 6.55100000};
                            break;
                            case 2:
                            vVar7 = {-428.55470000, 351.42450000, 11.72620000};
                            break;
                        }
                        GET_DISTANCE_BETWEEN_COORDS_3D( uVar4._fU0, uVar4._fU4, uVar4._fU8, vVar7.x, vVar7.y, vVar7.z, ref l_U120 );
                        l_U123 = l_U110 / (l_U120 * l_U121);
                        if (l_U123 > 1.00000000)
                        {
                            l_U123 = 1.00000000;
                        }
                        else if (l_U123 < 0.00000000)
                        {
                            l_U123 = 0.00000000;
                        }
                        SET_DANCE_SHAKE_ACTIVE_THIS_UPDATE( l_U123 );
                    }
                }
            }
        }
    }
    return;
}

int sub_83645(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        if ((IS_CHAR_IN_AREA_3D( sub_3604(), -474.97280000, 143.74440000, 8.86370000, -471.82280000, 150.54440000, 11.86370000, 0 )) || (IS_CHAR_IN_AREA_3D( sub_3604(), -468.32000000, 156.33000000, 11.46000000, -476.07000000, 166.44000000, 8.74000000, 0 )))
        {
            return 1;
        }
        break;
        case 0:
        if (IS_CHAR_IN_AREA_3D( sub_3604(), -382.97280000, 441.74440000, 8.86370000, -368.82280000, 430.54440000, 5.86370000, 0 ))
        {
            return 1;
        }
        break;
    }
    if (NOT (sub_3889( sub_3604(), uParam0, 0 )))
    {
        return 1;
    }
    return 0;
}

int sub_84308(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (sub_84328( "E2MF2AU", 7 ))
    {
        if (sub_84693( uParam0, uParam1, uParam2, 1 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_84328(unknown uParam0, unknown uParam1)
{
    if (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 ))
    {
        sub_84355( uParam0 );
        if (NOT (IS_CHAR_INJURED( sub_3604() )))
        {
            sub_84492( 0, sub_3604(), "LUIS", 0 );
        }
        return 1;
    }
    else if (NOT (IS_STREAMING_ADDITIONAL_TEXT( uParam1 )))
    {
        REQUEST_ADDITIONAL_TEXT( uParam0, uParam1 );
    }
    return 0;
}

void sub_84355(unknown uParam0)
{
    StrCopy( ref l_U6._fU0, uParam0, 16 );
    sub_84372();
    return;
}

void sub_84372()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U6._fU16[I]._fU0 = nil;
        StrCopy( ref l_U6._fU16[I]._fU4, "", 32 );
        l_U6._fU344[I] = 0;
    }
    return;
}

void sub_84492(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U6._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U6._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_84572( "\n PED NUMBER ", uParam0 );
    sub_84612( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_84572(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_84612(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_84693(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_84714( uParam0, ref l_U6._fU0, uParam1, uParam2, uParam3 );
}

void sub_84714(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;
    char[12] cVar11;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;

    StrCopy( ref cVar7, uParam1, 16 );
    array(ref cVar11, 2);
    StrCopy( ref cVar11[0], uParam0, 16 );
    StrCopy( ref cVar11[1], "END", 16 );
    return sub_84768( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_84768(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_84790( iParam1 )))
    {
        return 0;
    }
    l_U6._fU384 = 0;
    iParam1->_fU16 = 0;
    iParam1->_fU20 = uParam5;
    if (bParam3)
    {
        if (iParam1->_fU12)
        {
            iVar12 = iParam1->_fU8;
            iParam1->_fU12 = 0;
        }
    }
    else
    {
        iParam1->_fU12 = 0;
        if (bParam4)
        {
            iVar12 = uParam6;
            iParam1->_fU8 = uParam6;
            iParam1->_fU12 = 0;
        }
        else
        {
            iParam1->_fU8 = 0;
            iParam1->_fU12 = 0;
        }
    }
    iParam1->_fU16 = bParam4;
    for ( I = 0; I <= (g_U8972 - 1); I++ )
    {
        StrCopy( ref g_U8972[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8972[I] = {(uParam0^)[I]};
    }
    g_U8966 = {(iParam1^)};
    sub_85478( ref g_U8868, ref l_U6 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_84790(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_84867( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U561[1] ))
    {
        switch (g_U95._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_84867( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8867)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8865 > iParam0->_fU0)
        {
            sub_84867( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8865 = iParam0->_fU0;
    g_U8866++;
    if (g_U8866 > 100000)
    {
        g_U8866 = 1;
    }
    iParam0->_fU4 = g_U8866;
    return 1;
}

void sub_84867(unknown uParam0)
{
    return;
}

void sub_85478(int iParam0, int iParam1)
{
    int I;

    iParam0->_fU0 = {iParam1->_fU0};
    for ( I = 0; I <= 8; I++ )
    {
        iParam0->_fU16[I] = {iParam1->_fU16[I]};
        iParam0->_fU344[I] = iParam1->_fU344[I];
    }
    iParam0->_fU384 = iParam1->_fU384;
    iParam0->_fU388 = iParam1->_fU388;
    return;
}
