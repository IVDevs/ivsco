void main()
{
    unknown uVar2;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 0;
    l_U8 = 0;
    l_U72 = 0;
    l_U73 = 0;
    l_U74 = 1;
    l_U75 = 0;
    l_U76 = 0;
    l_U77 = 0;
    l_U78 = 7.00000000;
    l_U69 = {l_U79._fU4[0]};
    if (g_U9520)
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "cablecars" )) == 1)
        {
            g_U9520 = 0;
            l_U72 = 1;
        }
        else
        {
            l_U72 = 0;
        }
    }
    else
    {
        l_U72 = 1;
    }
    sub_170();
    if (sub_810( ref uVar2 ))
    {
        l_U73 = 0;
        l_U74 = 1;
        SET_MINIGAME_IN_PROGRESS( 1 );
        l_U5[0] = 6;
        l_U5[1] = 6;
        l_U2 = 2;
    }
    while (sub_1021())
    {
        WAIT( 0 );
        if (IS_PLAYER_PLAYING( sub_819() ))
        {
            switch (l_U2)
            {
                case 0:
                sub_1171();
                break;
                case 1:
                sub_2347();
                break;
                case 2:
                sub_2933();
                break;
                case 3:
                sub_3200();
                break;
                case 4: break;
            }
        }
    }
    if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CCAR_ENT" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CCAR_SKIP" )))
    {
        CLEAR_HELP();
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_170()
{
    int iVar2;
    float fVar3;
    float fVar4;
    int iVar5;
    boolean bVar6;

    l_U24[0] = {431.58370000, 227.08710000, 13.71420000};
    l_U24[1] = {155.08820000, 227.51710000, 19.85840000};
    l_U9[1][0] = {154.90000000, 231.50000000, 28.20000000};
    l_U9[1][1] = {154.80000000, 222.40000000, 28.20000000};
    l_U9[0][0] = {433.70000000, 231.90000000, 22.10000000};
    l_U9[0][1] = {433.70000000, 222.50000000, 22.10000000};
    l_U31[0][0] = {434.10240000, 227.63250000, 13.71420000};
    l_U58[0][0] = 272.00000000;
    l_U31[0][1] = {431.74560000, 228.67370000, 13.71420000};
    l_U58[0][1] = 279.61260000;
    l_U31[0][2] = {431.72970000, 227.04970000, 13.71420000};
    l_U58[0][2] = 280.57770000;
    l_U31[0][3] = {432.67930000, 225.35610000, 13.71420000};
    l_U58[0][3] = 267.85710000;
    l_U31[1][0] = {152.62290000, 227.27120000, 19.85840000};
    l_U58[1][0] = 90.84470000;
    l_U31[1][1] = {154.76840000, 226.03000000, 19.85840000};
    l_U58[1][1] = 90.64090000;
    l_U31[1][2] = {154.72260000, 227.49330000, 19.85840000};
    l_U58[1][2] = 90.28960000;
    l_U31[1][3] = {155.66070000, 228.64720000, 19.85840000};
    l_U58[1][3] = 90.00000000;
    iVar2 = 0;
    fVar3 = 999999.00000000;
    bVar6 = false;
    while (iVar2 < 2)
    {
        fVar4 = VDIST( l_U69, l_U24[iVar2] );
        if (fVar4 < fVar3)
        {
            iVar5 = iVar2;
            fVar3 = fVar4;
            bVar6 = true;
        }
        iVar2++;
    }
    if (bVar6)
    {
        l_U4 = iVar5;
    }
    else
    {
        SCRIPT_ASSERT( "BAD BEDDOES LOGIC FOR CABLE CARS" );
    }
    l_U5[0] = 0;
    l_U5[1] = 0;
    return;
}

int sub_810(unknown uParam0)
{
    if (IS_PLAYER_PLAYING( sub_819() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_862() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_862(), uParam0 );
            if (NOT (IS_CAR_DEAD( (uParam0^) )))
            {
                if (IS_CAR_MODEL( (uParam0^), -960289747 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_819()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_862()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1021()
{
    if (IS_PLAYER_PLAYING( sub_819() ))
    {
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            return 1;
        }
        else if (g_U9520)
        {
            return 1;
        }
    }
    return 0;
}

void sub_1171()
{
    unknown uVar2;
    unknown uVar3;
    vector vVar4;
    vector vVar7;
    boolean bVar10;

    vVar4 = {0.00000000, 0.00000000, 0.00000000};
    vVar7 = {0.00000000, 0.00000000, 0.00000000};
    bVar10 = false;
    if (IS_PLAYER_PLAYING( sub_819() ))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_862() )))
        {
            if ((LOCATE_CHAR_ANY_MEANS_3D( sub_862(), l_U69._fU0, l_U69._fU4, l_U69._fU8, 20.00000000, 20.00000000, 5.00000000, 0 )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_819(), 0 ))))
            {
                GET_NEAREST_CABLE_CAR( l_U9[l_U4][0]._fU0, l_U9[l_U4][0]._fU4, l_U9[l_U4][0]._fU8, 5.00000000, ref uVar2 );
                if (NOT (IS_CAR_DEAD( uVar2 )))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar2, vVar7.x, vVar7.y, vVar7.z - l_U78, ref vVar7.x, ref vVar7.y, ref vVar7.z );
                    if (IS_CAR_STOPPED( uVar2 ))
                    {
                        if (LOCATE_CHAR_ON_FOOT_3D( sub_862(), vVar7.x, vVar7.y, vVar7.z, 4.00000000, 4.00000000, 3.00000000, 0 ))
                        {
                            if (sub_1486())
                            {
                                l_U5[0] = 4;
                                bVar10 = true;
                                if (IS_CONTROL_PRESSED( 2, 3 ))
                                {
                                    l_U5[0] = 5;
                                    bVar10 = false;
                                    SET_TRAIN_IS_STOPPED_AT_STATION( uVar2 );
                                    SET_MINIGAME_IN_PROGRESS( 1 );
                                    l_U2 = 1;
                                    l_U3 = 0;
                                    l_U74 = 1;
                                    l_U73 = 0;
                                    l_U8 = 0;
                                    return;
                                }
                            }
                        }
                        else
                        {
                            l_U5[0] = 3;
                        }
                    }
                    else
                    {
                        l_U5[0] = 1;
                    }
                }
                else
                {
                    l_U5[0] = 0;
                }
                GET_NEAREST_CABLE_CAR( l_U9[l_U4][1]._fU0, l_U9[l_U4][1]._fU4, l_U9[l_U4][1]._fU8, 5.00000000, ref uVar3 );
                if (NOT (IS_CAR_DEAD( uVar3 )))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar3, vVar4.x, vVar4.y, vVar4.z - l_U78, ref vVar4.x, ref vVar4.y, ref vVar4.z );
                    if (IS_CAR_STOPPED( uVar3 ))
                    {
                        if (LOCATE_CHAR_ON_FOOT_3D( sub_862(), vVar4.x, vVar4.y, vVar4.z, 4.00000000, 4.00000000, 3.00000000, 0 ))
                        {
                            if (sub_1486())
                            {
                                l_U5[1] = 4;
                                bVar10 = true;
                                if (IS_CONTROL_PRESSED( 2, 3 ))
                                {
                                    l_U5[1] = 5;
                                    SET_TRAIN_IS_STOPPED_AT_STATION( uVar3 );
                                    bVar10 = false;
                                    SET_MINIGAME_IN_PROGRESS( 1 );
                                    l_U2 = 1;
                                    l_U3 = 0;
                                    l_U74 = 1;
                                    l_U73 = 0;
                                    l_U8 = 1;
                                    return;
                                }
                            }
                        }
                        else
                        {
                            l_U5[1] = 3;
                        }
                    }
                    else
                    {
                        l_U5[1] = 1;
                    }
                }
                else
                {
                    l_U5[1] = 0;
                }
            }
        }
    }
    if (bVar10)
    {
        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CCAR_ENT" )))
        {
            PRINT_HELP_FOREVER( "CCAR_ENT" );
        }
    }
    else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CCAR_ENT" ))
    {
        CLEAR_HELP();
    }
    return;
}

int sub_1486()
{
    if (NOT (sub_1497( 1, 1 )))
    {
        return 0;
    }
    if (NOT IS_SCREEN_FADED_IN())
    {
        return 0;
    }
    if (NOT (IS_PLAYER_CONTROL_ON( sub_819() )))
    {
        return 0;
    }
    return 1;
}

int sub_1497(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_862() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_862(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_862() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_862(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_862()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_862() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_862() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_819() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_819() )))
    {
        return 0;
    }
    return 1;
}

void sub_2347()
{
    unknown[7] uVar2;
    unknown uVar10;
    unknown uVar11;
    int iVar12;
    int I;
    int iVar14;
    unknown uVar15;

    array(ref uVar2, 7);
    GET_NEAREST_CABLE_CAR( l_U9[l_U4][l_U8]._fU0, l_U9[l_U4][l_U8]._fU4, l_U9[l_U4][l_U8]._fU8, 10.00000000, ref uVar15 );
    if (NOT (IS_CAR_DEAD( uVar15 )))
    {
        switch (l_U3)
        {
            case 0:
            if (NOT IS_SCREEN_FADING())
            {
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CCAR_ENT" ))
                {
                    CLEAR_HELP();
                }
                DO_SCREEN_FADE_OUT( 4000 );
                l_U3 = 1;
            }
            break;
            case 1:
            if (NOT IS_SCREEN_FADING())
            {
                sub_2544();
                iVar14 = 0;
                WARP_CHAR_INTO_CAR( sub_862(), uVar15 );
                GET_PLAYER_GROUP( sub_819(), ref uVar10 );
                GET_GROUP_SIZE( uVar10, ref uVar11, ref iVar12 );
                GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar15, ref l_U75 );
                for ( I = 0; I < iVar12; I++ )
                {
                    if (iVar14 < l_U75)
                    {
                        GET_GROUP_MEMBER( uVar10, I, ref uVar2[I] );
                        if (NOT (IS_CHAR_INJURED( uVar2[I] )))
                        {
                            if (IS_CAR_PASSENGER_SEAT_FREE( uVar15, iVar14 ))
                            {
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( uVar2[I], uVar15, iVar14 );
                            }
                            iVar14++;
                        }
                    }
                }
                l_U73 = 0;
                l_U3 = 2;
            }
            break;
            case 2:
            if (NOT IS_SCREEN_FADING())
            {
                DO_SCREEN_FADE_IN( 4000 );
                TRAIN_LEAVE_STATION( uVar15 );
                l_U74 = 1;
                l_U2 = 2;
            }
            break;
        }
    }
    else if (NOT IS_SCREEN_FADING())
    {
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 4000 );
            l_U2 = 0;
        }
    }
    return;
}

void sub_2544()
{
    return sub_2555( 0, 1 );
}

int sub_2555(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U94._fU104 = 1;
    }
    if ((uParam1) AND (g_U558 != 9))
    {
        g_U94._fU100 = 1;
    }
    return 1;
}

void sub_2933()
{
    unknown uVar2;

    if (IS_PLAYER_PLAYING( sub_819() ))
    {
        if (sub_810( ref uVar2 ))
        {
            if (IS_CAR_STOPPED( uVar2 ))
            {
                if (l_U73)
                {
                    l_U3 = 0;
                    l_U2 = 3;
                    l_U5[l_U8] = 7;
                    SET_TRAIN_IS_STOPPED_AT_STATION( uVar2 );
                }
            }
            else
            {
                l_U73 = 1;
                l_U5[l_U8] = 6;
                if (sub_3040())
                {
                    if (NOT l_U74)
                    {
                        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CCAR_SKIP" ))
                        {
                            CLEAR_HELP();
                        }
                    }
                }
                else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CCAR_SKIP" )))
                {
                    ;
                }
                l_U74 = 0;;
            }
        }
        else
        {
            l_U2 = 0;
        }
    }
    return;
}

int sub_3040()
{
    if ((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_3200()
{
    unknown[7] uVar2;
    unknown uVar10;
    unknown uVar11;
    int iVar12;
    int I;
    unknown uVar14;
    int iVar15;
    unknown uVar16;

    array(ref uVar2, 7);
    iVar15 = 0;
    switch (l_U3)
    {
        case 0:
        if (NOT IS_SCREEN_FADING())
        {
            DO_SCREEN_FADE_OUT( 4000 );
            l_U3 = 1;
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CCAR_SKIP" ))
            {
                CLEAR_HELP();
            }
        }
        break;
        case 1:
        if (NOT IS_SCREEN_FADING())
        {
            sub_2544();
            if (sub_810( ref uVar16 ))
            {
                TRAIN_LEAVE_STATION( uVar16 );
                GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar16, ref l_U75 );
                iVar15 = 0;
                if (IS_CHAR_IN_ANY_CAR( sub_862() ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( sub_862(), l_U31[l_U4][iVar15]._fU0, l_U31[l_U4][iVar15]._fU4, l_U31[l_U4][iVar15]._fU8 );
                }
                else
                {
                    SET_CHAR_COORDINATES( sub_862(), l_U31[l_U4][iVar15]._fU0, l_U31[l_U4][iVar15]._fU4, l_U31[l_U4][iVar15]._fU8 );
                }
                SET_CHAR_HEADING( sub_862(), l_U58[l_U4][iVar15] );
                iVar15 = 1;
                GET_PLAYER_GROUP( sub_819(), ref uVar10 );
                GET_GROUP_SIZE( uVar10, ref uVar11, ref iVar12 );
                for ( I = 0; I < iVar12; I++ )
                {
                    if (iVar15 < 4)
                    {
                        GET_GROUP_MEMBER( uVar10, I, ref uVar2[I] );
                        if (NOT (IS_CHAR_INJURED( uVar2[I] )))
                        {
                            if (IS_CHAR_IN_ANY_CAR( uVar2[I] ))
                            {
                                WARP_CHAR_FROM_CAR_TO_COORD( uVar2[I], l_U31[l_U4][iVar15]._fU0, l_U31[l_U4][iVar15]._fU4, l_U31[l_U4][iVar15]._fU8 );
                            }
                            else
                            {
                                SET_CHAR_COORDINATES( uVar2[I], l_U31[l_U4][iVar15]._fU0, l_U31[l_U4][iVar15]._fU4, l_U31[l_U4][iVar15]._fU8 );
                            }
                            SET_CHAR_HEADING( uVar2[I], l_U58[l_U4][iVar15] );
                            iVar15++;
                        }
                    }
                }
                l_U3 = 2;
            }
            else
            {
                I = 0;
                iVar15 = 1;
                while (I < 7)
                {
                    if (iVar15 < 4)
                    {
                        GET_GROUP_MEMBER( uVar10, I, ref uVar2[I] );
                        if (NOT (IS_CHAR_INJURED( uVar2[I] )))
                        {
                            if (IS_CHAR_IN_ANY_CAR( uVar2[I] ))
                            {
                                WARP_CHAR_FROM_CAR_TO_COORD( uVar2[I], l_U31[l_U4][iVar15]._fU0, l_U31[l_U4][iVar15]._fU4, l_U31[l_U4][iVar15]._fU8 );
                            }
                            else
                            {
                                SET_CHAR_COORDINATES( uVar2[I], l_U31[l_U4][iVar15]._fU0, l_U31[l_U4][iVar15]._fU4, l_U31[l_U4][iVar15]._fU8 );
                            }
                            SET_CHAR_HEADING( uVar2[I], l_U58[l_U4][iVar15] );
                            iVar15++;
                        }
                    }
                    I++;
                }
                l_U2 = 0;
            }
        }
        break;
        case 2:
        SET_GAME_CAM_HEADING( 0.00000000 );
        if (IS_PLAYER_PLAYING( sub_819() ))
        {
            SET_CAM_BEHIND_PED( sub_862() );
        }
        DO_SCREEN_FADE_IN( 4000 );
        l_U74 = 1;
        while (IS_SCREEN_FADING())
        {
            WAIT( 0 );
        }
        SET_MINIGAME_IN_PROGRESS( 0 );
        l_U2 = 0;
        break;
    }
    return;
}
