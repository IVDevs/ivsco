void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U18 = 0;
    l_U19 = "NULL";
    l_U21 = 1113677074;
    l_U22 = 1353709999;
    l_U23 = 1;
    l_U24 = 0;
    l_U25 = 0;
    l_U26 = "MISSSTRIPCLUB";
    l_U27 = "Billy1";
    if (DOES_OBJECT_EXIST( l_U28 ))
    {
        FREEZE_OBJECT_POSITION( l_U28, 1 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U28, 0.00000000, 1.00000000, 0.00000000, ref l_U5._fU0, ref l_U5._fU4, ref l_U5._fU8 );
        GET_OBJECT_HEADING( l_U28, ref l_U8 );
        SET_OBJECT_COLLISION( l_U28, 0 );
        l_U10 = {-1.50000000, -1.50000000, -1.50000000};
        l_U13 = {1.50000000, 1.50000000, 1.50000000};
        l_U10 = {l_U5 + l_U10};
        l_U13 = {l_U5 + l_U13};
        SWITCH_PED_PATHS_OFF( l_U10._fU0, l_U10._fU4, l_U10._fU8, l_U13._fU0, l_U13._fU4, l_U13._fU8 );
    }
    if (sub_292())
    {
        if ((VDIST( l_U5, -1714.97400000, 354.85410000, 24.63340000 )) < 50.00000000)
        {
            l_U3 = 0;
        }
        else
        {
            l_U3 = 2;
        }
    }
    else
    {
        l_U3 = 1;
    }
    if (g_U12303)
    {
        if (l_U3 != 0)
        {
            if (NOT (sub_496( 9 )))
            {
                if (NOT sub_973())
                {
                    l_U23 = 0;
                    l_U21 = 1113677074;
                    l_U22 = 1113677074;
                    l_U26 = "MISSSTRIPCLUBLO";
                }
                else
                {
                    l_U23 = 0;
                    l_U21 = 1113677074;
                    l_U22 = 1113677074;
                }
            }
        }
    }
    if (l_U3 == 0)
    {
        if (NOT sub_973())
        {
            if (NOT sub_1213())
            {
                sub_1315();
            }
        }
        l_U21 = -2034268874;
        l_U22 = -2034268874;
    }
    sub_1448();
    while (true)
    {
        WAIT( 0 );
        if (DOES_OBJECT_EXIST( l_U28 ))
        {
            if (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U28 ))
            {
                switch (l_U2)
                {
                    case 0:
                    if (sub_1551())
                    {
                        if (sub_973())
                        {
                            if (g_U10462)
                            {
                                sub_1703( l_U28 );
                                if (NOT (IS_CHAR_INJURED( l_U4 )))
                                {
                                    if (LOCATE_CHAR_ON_FOOT_3D( l_U4, 1176.75500000, 1681.93900000, 16.72200000, 2.00000000, 2.00000000, 2.00000000, 0 ))
                                    {
                                        TASK_PLAY_ANIM( l_U4, "Dance_Rick", l_U26, 100.00000000, 0, 0, 0, 1, 0 );
                                        l_U2 = 1;
                                    }
                                    else
                                    {
                                        TASK_PLAY_ANIM( l_U4, "Dance_Wisper_2", l_U26, 100.00000000, 1, 0, 0, 0, 0 );
                                        l_U2 = 1;
                                    }
                                }
                            }
                        }
                        else
                        {
                            sub_1703( l_U28 );
                            l_U2 = 2;
                        }
                    }
                    break;
                    case 2:
                    sub_2344();
                    if (sub_3041())
                    {
                        SET_OBJECT_COLLISION( l_U28, 1 );
                        l_U2 = 3;
                    }
                    break;
                    case 3:
                    if (NOT (IS_CHAR_INJURED( l_U4 )))
                    {
                        TASK_COWER( l_U4 );
                        SET_ALL_RANDOM_PEDS_FLEE( sub_1046(), 1 );
                        SET_CHAR_KEEP_TASK( l_U4, 1 );
                        if (l_U3 == 0)
                        {
                            g_U10441 = 0;
                        }
                        TERMINATE_THIS_SCRIPT();
                    }
                    break;
                    case 1:
                    if (NOT l_U24)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U4 )))
                        {
                            if (IS_CHAR_PLAYING_ANIM( l_U4, l_U26, "Dance_Rick" ))
                            {
                                SET_CHAR_ANIM_CURRENT_TIME( l_U4, l_U26, "Dance_Rick", 0.40000000 );
                                l_U24 = 1;
                            }
                            else if (IS_CHAR_PLAYING_ANIM( l_U4, l_U26, "Dance_Wisper_2" ))
                            {
                                SET_CHAR_ANIM_CURRENT_TIME( l_U4, l_U26, "Dance_Wisper_2", 0.62000000 );
                                l_U24 = 1;
                            }
                        }
                    }
                    if (l_U3 == 0)
                    {
                        if (NOT g_U10462)
                        {
                            sub_1315();
                        }
                    }
                    break;
                }
            }
            else
            {
                sub_1315();
            }
        }
        else
        {
            sub_1315();
        }
    }
    return;
}

int sub_292()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;

    if (NOT (IS_CHAR_DEAD( sub_301() )))
    {
        GET_CHAR_COORDINATES( sub_301(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        iVar5 = GET_MAP_AREA_FROM_COORDS( uVar2 );
        if (iVar5 == 3)
        {
            return 1;
        }
    }
    return 0;
}

void sub_301()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_496(int iParam0)
{
    unknown uVar3;

    if (g_U26739._fU0 == 19)
    {
        return 0;
    }
    if (sub_525( iParam0 ))
    {
        return 0;
    }
    if (sub_584( g_U26739._fU0 ))
    {
        if (NOT (sub_616( g_U26739._fU0, iParam0 )))
        {
            return 0;
        }
        g_U26739._fU8 = iParam0;
        g_U26739._fU84 = 0;
        return 1;
    }
    uVar3 = iParam0;
    if (iParam0 == g_U26739._fU4)
    {
        if (g_U26739._fU24)
        {
            return 0;
        }
        else
        {
            g_U26739._fU8 = 12;
            if (g_U26739._fU36[uVar3] > 0)
            {
                g_U26739._fU36[uVar3]--;
            }
            g_U26739._fU84 = 0;
            return 1;
        }
    }
    if (g_U26739._fU8 == iParam0)
    {
        return 1;
    }
    if (NOT (g_U26739._fU8 == 12))
    {
        if (g_U26739._fU24)
        {
            return 0;
        }
        else
        {
            g_U26739._fU8 = 12;
        }
    }
    if (g_U26739._fU32 <= 0)
    {
        g_U26739._fU12 = iParam0;
        return 0;
    }
    if (g_U26739._fU36[uVar3] > 0)
    {
        g_U26739._fU8 = iParam0;
        g_U26739._fU36[uVar3]--;
        if (iParam0 == 8)
        {
            g_U26739._fU84 = 1;
        }
        return 1;
    }
    g_U26739._fU12 = iParam0;
    return 0;
}

int sub_525(int iParam0)
{
    if (iParam0 == 8)
    {
        if (g_U10999 == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_584(unknown uParam0)
{
    return 0;
}

int sub_616(unknown uParam0, unknown uParam1)
{
    return 1;
}

int sub_973()
{
    if (l_U3 == 0)
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Billy1" )) >= 1)
        {
            return 1;
        }
        if (sub_1019())
        {
            if (IS_PLAYER_PLAYING( sub_1046() ))
            {
                if (NOT (IS_PLAYER_CONTROL_ON( sub_1046() )))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_1019()
{
    int Result;

    Result = 0;
    return Result;
}

void sub_1046()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_1213()
{
    int iVar2;
    unknown uVar3;

    if (l_U3 != 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Billy1" )) >= 1)
    {
        return 1;
    }
    if (g_U10460)
    {
        GET_TIME_OF_DAY( ref iVar2, ref uVar3 );
        if ((iVar2 > 21) || (iVar2 < 6))
        {
            return 1;
        }
    }
    return 0;
}

void sub_1315()
{
    if (NOT (IS_CHAR_DEAD( l_U4 )))
    {
        if (NOT (IS_CHAR_ON_SCREEN( l_U4 )))
        {
            DELETE_CHAR( ref l_U4 );
        }
        else
        {
            SET_CHAR_KEEP_TASK( l_U4, 1 );
        }
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambPoleDancer" )) == 1)
    {
        g_U10443 = -1;
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_1448()
{
    return;
}

int sub_1551()
{
    REQUEST_MODEL( l_U21 );
    REQUEST_MODEL( l_U22 );
    REQUEST_ANIMS( l_U26 );
    if (((HAS_MODEL_LOADED( l_U21 )) AND (HAS_MODEL_LOADED( l_U22 ))) AND (HAVE_ANIMS_LOADED( l_U26 )))
    {
        return 1;
    }
    else
    {
        REQUEST_MODEL( l_U21 );
        REQUEST_MODEL( l_U22 );
        REQUEST_ANIMS( l_U26 );
    }
    return 0;
}

void sub_1703(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (IS_CHAR_DEAD( l_U4 ))
    {
        if (l_U3 == 0)
        {
            CLEAR_AREA_OF_CHARS( l_U5._fU0, l_U5._fU4, l_U5._fU8, 1.00000000 );
            CREATE_CHAR( 5, -2034268874, l_U5._fU0, l_U5._fU4, l_U5._fU8, ref l_U4, 1 );
            if (g_U10462)
            {
                PRINTSTRING( "g_bBillyFlybyRunning \n" );
                SET_CHAR_DEFAULT_COMPONENT_VARIATION( l_U4 );
            }
            else
            {
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U4 );
            }
        }
        else
        {
            CREATE_CHAR( 5, sub_1868(), l_U5._fU0, l_U5._fU4, l_U5._fU8, ref l_U4, 1 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U4 );
        }
        SET_CHAR_HEADING( l_U4, l_U8 );
        SET_CHAR_COORDINATES( l_U4, l_U5._fU0, l_U5._fU4, l_U5._fU8 );
        SET_CHAR_NEVER_TARGETTED( l_U4, 1 );
        GET_ROOM_KEY_FROM_OBJECT( uParam0, ref uVar3 );
        SET_ROOM_FOR_CHAR_BY_KEY( l_U4, uVar3 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U4, 1 );
        if (IS_CHAR_MODEL( l_U4, 1113677074 ))
        {
            SET_AMBIENT_VOICE_NAME( l_U4, "STRIPPER_1" );
        }
        else
        {
            SET_AMBIENT_VOICE_NAME( l_U4, "STRIPPER_2" );
        }
    }
    return;
}

void sub_1868()
{
    int Result;
    unknown uVar3;
    int iVar4;

    iVar4 = 2;
    if (g_U12303)
    {
        if (NOT (sub_496( 9 )))
        {
            iVar4 = 1;
        }
    }
    GENERATE_RANDOM_INT_IN_RANGE( 0, iVar4, ref uVar3 );
    switch (uVar3)
    {
        case 0:
        Result = 1113677074;
        break;
        case 1:
        Result = 1353709999;
        break;
    }
    return Result;
}

void sub_2344()
{
    if (NOT (IS_CHAR_INJURED( l_U4 )))
    {
        GET_SCRIPT_TASK_STATUS( l_U4, 80, ref l_U9 );
        if (l_U9 == 7)
        {
            TASK_PLAY_ANIM( l_U4, sub_2397(), l_U26, 100.00000000, 0, 0, 0, 1, 0 );
        }
        else if (HAS_CHAR_ANIM_FINISHED( l_U4, l_U26, l_U19 ))
        {
            TASK_PLAY_ANIM( l_U4, sub_2397(), l_U26, 100.00000000, 0, 0, 0, 1, 0 );
        }
        else if (NOT l_U23)
        {
            if (g_U10443 == -1)
            {
                SET_CHAR_ANIM_CURRENT_TIME( l_U4, l_U26, l_U19, 0.50000000 );
                g_U10443++;
            }
        }
        if (NOT g_U12303)
        {
            if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U4 );
                l_U19 = "NULL";
                g_U10443 = -1;
            }
        }
    }
    return;
}

void sub_2397()
{
    unknown uVar2;

    if (l_U23)
    {
        if (COMPARE_STRING( l_U19, "NULL" ))
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref uVar2 );
            switch (uVar2)
            {
                case 0:
                if (g_U10443 == 0)
                {
                    l_U19 = "Dance_Wisper_2";
                }
                else
                {
                    l_U19 = "pole_dance_a";
                    if (g_U10443 == -1)
                    {
                        g_U10443 = 0;
                    }
                }
                break;
                case 1:
                if (g_U10443 == 1)
                {
                    l_U19 = "pole_dance_a";
                }
                else
                {
                    l_U19 = "Dance_Rick";
                    if (g_U10443 == -1)
                    {
                        g_U10443 = 1;
                    }
                }
                break;
                case 2:
                if (g_U10443 == 2)
                {
                    l_U19 = "Dance_Rick";
                }
                else
                {
                    l_U19 = "Dance_Ragga_2";
                    if (g_U10443 == -1)
                    {
                        g_U10443 = 2;
                    }
                }
                break;
                case 3:
                if (g_U10443 == 3)
                {
                    l_U19 = "Dance_Ragga_2";
                }
                else
                {
                    l_U19 = "Dance_Wisper_2";
                    if (g_U10443 == -1)
                    {
                        g_U10443 = 3;
                    }
                }
                break;
            }
        }
    }
    else
    {
        l_U19 = "pole_dance_a";
        l_U26 = "MISSSTRIPCLUBLO";
    }
    return l_U19;
}

int sub_3041()
{
    float fVar2;

    if (l_U3 != 0)
    {
        fVar2 = 3.00000000;
    }
    else
    {
        fVar2 = 0.50000000;
    }
    if (NOT (IS_CHAR_INJURED( sub_301() )))
    {
        if (sub_3102( sub_301() ))
        {
            if (NOT (IS_CHAR_INJURED( l_U4 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_301(), l_U4, fVar2, fVar2, 0.50000000, 0 ))
                {
                    g_U10441 = 1;
                    return 1;
                }
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U4, sub_301(), 0 ))
                {
                    g_U10441 = 1;
                    return 1;
                }
                if (IS_CHAR_TOUCHING_CHAR( sub_301(), l_U4 ))
                {
                    g_U10441 = 1;
                    return 1;
                }
            }
            if (IS_CHAR_SHOOTING( sub_301() ))
            {
                g_U10441 = 1;
                return 1;
            }
            if (g_U10441)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_3102(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar3 );
        switch (l_U3)
        {
            case 1:
            if ((((iVar3 == (GET_HASH_KEY( "clampalbkrm" ))) || (iVar3 == (GET_HASH_KEY( "clammainroom" )))) || (iVar3 == (GET_HASH_KEY( "clamfronrm" )))) || (iVar3 == (GET_HASH_KEY( "clamchangeroom" ))))
            {
                return 1;
            }
            break;
            case 2:
            if ((iVar3 == (GET_HASH_KEY( "Bada_room2" ))) || (iVar3 == (GET_HASH_KEY( "Bada_room1" ))))
            {
                return 1;
            }
            break;
            case 0:
            if (((iVar3 == (GET_HASH_KEY( "E1_Lost_grndfront" ))) || (iVar3 == (GET_HASH_KEY( "E1_Lost_grndbar" )))) || (iVar3 == (GET_HASH_KEY( "E1_Lost_grndsave" ))))
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}
