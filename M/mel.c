void main()
{
    l_U98 = 0;
    l_U99 = 1;
    l_U100 = 3;
    l_U102 = 0;
    l_U103 = 0;
    l_U104 = 0;
    l_U105 = 0;
    l_U106 = 0;
    l_U107 = 0;
    l_U108 = 0;
    l_U109 = 0;
    l_U110 = 0;
    l_U113 = 0;
    l_U114 = 0;
    l_U115 = 0;
    l_U116 = 0;
    l_U117 = 0;
    l_U118 = 0;
    l_U119 = 0;
    l_U120 = 1;
    l_U121 = 0;
    l_U122 = 0;
    l_U123 = 0;
    l_U124 = 0;
    l_U125 = 0;
    l_U126 = 0;
    l_U148 = 0;
    l_U155 = 1;
    l_U156 = 1;
    l_U157 = 1000;
    l_U158 = 1;
    l_U161 = 1;
    l_U214 = 49;
    l_U215 = 206.34640000;
    l_U216 = 0;
    l_U218 = 0;
    l_U228 = 1;
    l_U229 = {1127.86400000, -110.51130000, 34.54720000};
    l_U232 = {1140.26400000, -108.54420000, 34.92240000};
    l_U235 = {1165.51600000, -99.25850000, 34.92160000};
    l_U238 = {1162.14400000, -100.02960000, 34.92160000};
    l_U241 = {1166.51000000, -101.54330000, 34.92160000};
    l_U244 = 0;
    l_U245 = 0;
    l_U246 = 0;
    if (sub_378( l_U214, l_U155 ))
    {
        if (IS_PLAYER_PLAYING( sub_1079() ))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_1079(), 0 )))
            {
                if (HAS_DEATHARREST_EXECUTED())
                {
                    sub_1153();
                }
                while (true)
                {
                    WAIT( 0 );
                    if (NOT l_U109)
                    {
                        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
                        {
                            if (sub_2482())
                            {
                                WAIT( 0 );
                            }
                            else if (g_U10978)
                            {
                                sub_1153();
                            }
                            if (NOT sub_2630())
                            {
                                sub_1153();
                            }
                            switch (l_U104)
                            {
                                case 0:
                                sub_2715();
                                break;
                                case 1:
                                sub_3241();
                                break;
                            }
                        }
                        else
                        {
                            sub_1153();
                        }
                        sub_7624();
                    }
                    if (l_U109)
                    {
                        switch (l_U105)
                        {
                            case 0:
                            sub_7740();
                            break;
                            default:
                        }
                    }
                }
            }
            else if (NOT g_U65019)
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_2049() )))
                {
                    if (NOT (IS_CHAR_IN_ANY_CAR( sub_2049() )))
                    {
                        if (sub_3420() < 25)
                        {
                            CLEAR_PRINTS();
                            PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                        }
                    }
                }
                if (IS_HINT_RUNNING())
                {
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U127, 0, 0, 0 );
                }
                g_U65019 = 1;
            }
            sub_1153();;
        }
        else
        {
            TERMINATE_THIS_SCRIPT();
        }
    }
    else
    {
        TERMINATE_THIS_SCRIPT();
    }
    return;
}

void sub_378(unknown uParam0, unknown uParam1)
{
    if (sub_387())
    {
        return 0;
    }
    return sub_434( uParam0, uParam1 );
}

int sub_387()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

boolean sub_434(unknown uParam0, int iParam1)
{
    unknown uVar4;

    if (NOT g_U34175._fU0)
    {
        return 0;
    }
    if (g_U10978)
    {
        return 0;
    }
    uVar4 = sub_478( uParam0 );
    if (g_U0)
    {
        return 1;
    }
    if (NOT g_U34048[uVar4]._fU0)
    {
        return 0;
    }
    if (NOT g_U34048[uVar4]._fU4)
    {
        return 0;
    }
    if (g_U9893._fU4)
    {
        return 0;
    }
    if (NOT g_U34048[uVar4]._fU24)
    {
        if (sub_755( g_U34048[uVar4]._fU8 ))
        {
            g_U34048[uVar4]._fU24 = 1;
        }
    }
    if (NOT g_U34048[uVar4]._fU24)
    {
        return 0;
    }
    return g_U34048[uVar4]._fU28 == iParam1;
}

int sub_478(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_489( uParam0 )))
    {
        sub_598( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 38;
}

int sub_489(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = uParam0;
    if (NOT (iVar3 >= 38))
    {
        return 0;
    }
    iVar4 = 52;
    if (NOT (iVar3 < iVar4))
    {
        return 0;
    }
    return 1;
}

void sub_598(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_755(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;

    if (uParam0._fU8._fU4 == -1)
    {
        return 1;
    }
    iVar6 = 0;
    iVar7 = 0;
    GET_CURRENT_DATE( ref iVar6, ref iVar7 );
    iVar8 = 0;
    iVar9 = 0;
    GET_TIME_OF_DAY( ref iVar8, ref iVar9 );
    if ((iVar7 == uParam0._fU0._fU4) AND (iVar6 == uParam0._fU0._fU0))
    {
        if (iVar8 < uParam0._fU8._fU0)
        {
            return 0;
        }
        else if (iVar8 > uParam0._fU8._fU0)
        {
            return 1;
        }
        if (iVar9 > uParam0._fU8._fU4)
        {
            return 1;
        }
        return 0;
    }
    if (sub_924( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_924(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    int iVar7;

    iVar7 = COMPARE_TWO_DATES( uParam1, uParam0, uParam3, uParam2 );
    if (iVar7 >= 0)
    {
        if (iVar7 <= iParam4)
        {
            return 1;
        }
    }
    return 0;
}

void sub_1079()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1153()
{
    if (((l_U111) AND (l_U112)) AND (NOT l_U113))
    {
        if (sub_1185())
        {
            sub_1232( 0 );
        }
    }
    if (sub_1454( l_U214, l_U155 ))
    {
        sub_1550( l_U214, l_U155 );
        CLEAR_HELP();
        if (IS_PLAYER_PLAYING( sub_1079() ))
        {
            SET_PLAYER_CONTROL( sub_1079(), 1 );
        }
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( -1, -1, -1, 0, 0, 0, 0 );
            SET_CAM_BEHIND_PED( sub_2049() );
        }
    }
    if (DOES_CHAR_EXIST( l_U127 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U127 )))
        {
            FREEZE_CHAR_POSITION( l_U127, 0 );
            CLEAR_CHAR_TASKS( l_U127 );
        }
        else
        {
            REMOVE_CHAR_ELEGANTLY( ref l_U127 );
        }
    }
    REMOVE_BLIP( l_U133 );
    if (DOES_BLIP_EXIST( l_U134 ))
    {
        REMOVE_BLIP( l_U134 );
    }
    if (DOES_BLIP_EXIST( l_U136 ))
    {
        REMOVE_BLIP( l_U136 );
    }
    if (DOES_BLIP_EXIST( l_U137 ))
    {
        REMOVE_BLIP( l_U137 );
    }
    if (DOES_BLIP_EXIST( l_U138 ))
    {
        REMOVE_BLIP( l_U138 );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U127 );
    l_U127 = nil;
    sub_2319();
    CLEAR_NAMED_CUTSCENE( "rpmel1" );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2049(), 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_1185()
{
    if (g_U9241._fU148[0] == 0)
    {
        return 0;
    }
    return 1;
}

void sub_1232(int iParam0)
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if ((I == iParam0) || (iParam0 == 2))
        {
            sub_1270( I );
            g_U9241._fU148[I] = 0;
            g_U9241._fU112[I] = -1;
            StrCopy( ref g_U9241._fU28[I], "", 16 );
        }
    }
    return;
}

void sub_1270(int iParam0)
{
    if (iParam0 == 0)
    {
        CLEAR_THIS_PRINT( ref g_U9241._fU64[0] );
    }
    else
    {
        sub_1322( ref g_U9241._fU64[1] );
    }
    return;
}

void sub_1322(unknown uParam0)
{
    if (DOES_TEXT_LABEL_EXIST( uParam0 ))
    {
        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( uParam0 ))
        {
            CLEAR_HELP();
        }
    }
    return;
}

int sub_1454(int iParam0, int iParam1)
{
    if (NOT g_U34175._fU4)
    {
        return 0;
    }
    if (NOT (g_U34175._fU8 == iParam0))
    {
        return 0;
    }
    if (NOT (g_U34175._fU12 == iParam1))
    {
        return 0;
    }
    return 1;
}

void sub_1550(unknown uParam0, unknown uParam1)
{
    if (NOT (sub_1454( uParam0, uParam1 )))
    {
        sub_598( "Interactions_Ended: Interaction for this character not active" );
        return;
    }
    sub_1646();
    if (g_U813)
    {
        sub_1738();
    }
    else
    {
        sub_1856();
    }
    g_U10978 = 0;
    return;
}

void sub_1646()
{
    if (g_U0)
    {
        g_U34175._fU0 = 0;
    }
    else
    {
        g_U34175._fU0 = 1;
    }
    g_U34175._fU4 = 0;
    g_U34175._fU8 = 54;
    g_U34175._fU12 = 0;
    return;
}

void sub_1738()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1784();
    return;
}

void sub_1784()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1856()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1902();
    return;
}

void sub_1902()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_2049()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2319()
{
    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    return;
}

int sub_2482()
{
    if (IS_CHAR_IN_ANY_CAR( sub_2049() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2049(), ref l_U132 );
        if (NOT (l_U132 == nil))
        {
            if (IS_VEH_DRIVEABLE( l_U132 ))
            {
                GET_CAR_SPEED( l_U132, ref l_U149 );
                if (l_U149 > 15)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_2630()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U26757)
    {
        return 0;
    }
    return 1;
}

void sub_2715()
{
    switch (l_U103)
    {
        case 0:
        l_U139 = {900.80680000, -383.82390000, 15.85480000};
        l_U153 = -807339118;
        REQUEST_MODEL( l_U153 );
        REQUEST_ANIMS( "missmel" );
        while ((NOT (HAS_MODEL_LOADED( l_U153 ))) || (NOT (HAVE_ANIMS_LOADED( "missmel" ))))
        {
            WAIT( 0 );
        }
        l_U103 = 1;
        break;
        case 1:
        if (NOT l_U110)
        {
            CLEAR_AREA( l_U139._fU0, l_U139._fU4, l_U139._fU8, 10.00000000, 1 );
            CREATE_CHAR( 26, l_U153, l_U139._fU0, l_U139._fU4, l_U139._fU8, ref l_U127, 1 );
            SET_CHAR_COMPONENT_VARIATION( l_U127, 1, 1, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U127, 2, 1, 0 );
            SET_CHAR_HEADING( l_U127, l_U215 );
            SET_CHAR_NEVER_TARGETTED( l_U127, 1 );
            SET_CHAR_CANT_BE_DRAGGED_OUT( l_U127, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U127, 1 );
            l_U110 = 1;
        }
        if (NOT (DOES_BLIP_EXIST( l_U133 )))
        {
            ADD_BLIP_FOR_CHAR( l_U127, ref l_U133 );
            CHANGE_BLIP_SPRITE( l_U133, 63 );
            SET_BLIP_AS_FRIENDLY( l_U133, 1 );
            CHANGE_BLIP_SCALE( l_U133, 1.00000000 );
            CHANGE_BLIP_DISPLAY( l_U133, 2 );
        }
        if (l_U110)
        {
            if (NOT (IS_CHAR_INJURED( l_U127 )))
            {
                TASK_PLAY_ANIM( l_U127, "curious_ilde", "missmel", 8.00000000, 1, 0, 0, 0, -2 );
            }
            l_U104 = 1;
        }
        break;
    }
    return;
}

void sub_3241()
{
    if ((IS_CHAR_INJURED( l_U127 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U127, sub_2049(), 0 )))
    {
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U127, 0, 0, 0 );
        }
        sub_1153();
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2049() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2049(), ref l_U132 );
        if (NOT (l_U132 == l_U131))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U131 );
            l_U131 = l_U132;
            SET_VEH_HAS_STRONG_AXLES( l_U131, 1 );
        }
    }
    if ((sub_3420() < 25) AND (IS_CHAR_ON_FOOT( sub_2049() )))
    {
        sub_3652( ref l_U127, ref l_U217, ref l_U139, ref l_U215, ref l_U218, 1.10000000, "curious_ilde", "missMEL" );
    }
    switch (l_U106)
    {
        case 0:
        if ((((IS_CHAR_INJURED( l_U127 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U127, sub_2049(), 0 ))) || (IS_CHAR_ON_FIRE( l_U127 ))) || (IS_WANTED_LEVEL_GREATER( sub_1079(), 0 )))
        {
            if (IS_WANTED_LEVEL_GREATER( sub_1079(), 0 ))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_2049() )))
                {
                    if (sub_3420() < 25)
                    {
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
            }
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U127, 0, 0, 0 );
            }
            sub_1153();
        }
        if (NOT (IS_CHAR_INJURED( l_U127 )))
        {
            if ((sub_3420() < 18) AND (IS_CHAR_ON_FOOT( sub_2049() )))
            {
                if ((NOT IS_HINT_RUNNING()) AND (NOT l_U216))
                {
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U127, 0, 0, 6000 );
                    TASK_LOOK_AT_CHAR( l_U127, sub_2049(), -2, 0 );
                    l_U216 = 1;
                }
                l_U106 = 1;
            }
        }
        break;
        case 1:
        if ((((IS_CHAR_INJURED( l_U127 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U127, sub_2049(), 0 ))) || (IS_CHAR_ON_FIRE( l_U127 ))) || (IS_WANTED_LEVEL_GREATER( sub_1079(), 0 )))
        {
            if (IS_WANTED_LEVEL_GREATER( sub_1079(), 0 ))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_2049() )))
                {
                    if (sub_3420() < 25)
                    {
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
            }
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U127, 0, 0, 0 );
            }
            sub_1153();
        }
        if (sub_3420() < 3.50000000)
        {
            if (IS_CHAR_ON_FOOT( sub_2049() ))
            {
                if (NOT (IS_CHAR_INJURED( l_U127 )))
                {
                    if (sub_4539( 1, 1 ))
                    {
                        if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U127, sub_2049(), 0 )))
                        {
                            if (NOT (IS_CHAR_ON_FIRE( l_U127 )))
                            {
                                if (NOT (IS_WANTED_LEVEL_GREATER( sub_1079(), 0 )))
                                {
                                    if (sub_2630())
                                    {
                                        SET_MISSION_FLAG( 1 );
                                        SET_PLAYER_CONTROL( sub_1079(), 0 );
                                        DO_SCREEN_FADE_OUT( 100 );
                                        while (NOT IS_SCREEN_FADED_OUT())
                                        {
                                            WAIT( 0 );
                                        }
                                        l_U106 = 2;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (sub_3420() > 18)
        {
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U127, 0, 0, 0 );
            }
            l_U106 = 0;
        }
        break;
        case 2:
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U127, 0, 0, 0 );
        }
        CLEAR_WANTED_LEVEL( sub_1079() );
        sub_5089();
        CLEAR_NAMED_CUTSCENE( "rpmel1" );
        START_CUTSCENE_NOW( "rpmel1" );
        CLEAR_PRINTS();
        SET_GROUP_SEPARATION_RANGE( sub_5238(), 30.00000000 );
        sub_5301( l_U214, l_U155 );
        l_U109 = 1;
        break;
    }
    return;
}

void sub_3420()
{
    if (NOT (IS_CHAR_DEAD( l_U127 )))
    {
        GET_CHAR_COORDINATES( sub_2049(), ref l_U142._fU0, ref l_U142._fU4, ref l_U142._fU8 );
        GET_CHAR_COORDINATES( l_U127, ref l_U145._fU0, ref l_U145._fU4, ref l_U145._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( l_U142._fU0, l_U142._fU4, l_U142._fU8, l_U145._fU0, l_U145._fU4, l_U145._fU8, ref l_U148 );
        return l_U148;
    }
    return l_U148;
}

void sub_3652(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    int iVar10;

    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (NOT (uParam4^))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( (uParam0^), iParam2->_fU0, iParam2->_fU4, iParam2->_fU8, uParam5, uParam5, 1.80000000, 0 )))
            {
                TASK_FLUSH_ROUTE();
                TASK_EXTEND_ROUTE( iParam2->_fU0, iParam2->_fU4, iParam2->_fU8 );
                OPEN_SEQUENCE_TASK( uParam1 );
                TASK_FOLLOW_POINT_ROUTE( 0, 3, 0 );
                TASK_ACHIEVE_HEADING( 0, (uParam3^) );
                CLOSE_SEQUENCE_TASK( (uParam1^) );
                TASK_PERFORM_SEQUENCE( (uParam0^), (uParam1^) );
                CLEAR_SEQUENCE_TASK( (uParam1^) );
                (uParam4^) = 1;
            }
        }
        else
        {
            PRINTSTRING( "fail 0" );
            PRINTNL();
            GET_SCRIPT_TASK_STATUS( (uParam0^), 29, ref iVar10 );
            if (iVar10 == 7)
            {
                PRINTSTRING( "fail 1" );
                PRINTNL();
                TASK_PLAY_ANIM( (uParam0^), uParam6, uParam7, 8.00000000, 1, 0, 0, 0, -2 );
                (uParam4^) = 0;
            }
        }
    }
    return;
}

int sub_4539(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_2049() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2049(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_2049() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2049(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2049()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2049() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2049() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_1079() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_1079() )))
    {
        return 0;
    }
    return 1;
}

void sub_5089()
{
    if (g_U64542._fU4 == nil)
    {
        return;
    }
    if (NOT (DOES_CHAR_EXIST( g_U64542._fU4 )))
    {
        return;
    }
    DELETE_CHAR( ref g_U64542._fU4 );
    g_U64542._fU0 = 57;
    g_U64542._fU4 = nil;
    g_U64542._fU8 = 28;
    return;
}

void sub_5238()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_5301(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (g_U10978)
    {
        sub_598( "Interactions_Started: Already on a mission" );
        return;
    }
    uVar4 = sub_478( uParam0 );
    if (g_U34175._fU4)
    {
        sub_598( "Interactions_Started: Another interaction is already taking place" );
        return;
    }
    if (g_U0)
    {
        g_U34048[uVar4]._fU0 = 1;
        g_U34048[uVar4]._fU4 = 1;
        g_U34048[uVar4]._fU28 = uParam1;
    }
    if (NOT g_U34048[uVar4]._fU0)
    {
        sub_598( "Interactions_Started: This Random Character has been set to NOT allowToActivate" );
        return;
    }
    g_U34175._fU4 = 1;
    g_U34175._fU8 = uParam0;
    g_U34175._fU12 = uParam1;
    sub_5664();
    sub_6435( g_U34048[uVar4]._fU32 );
    g_U34048[uVar4]._fU32 = 0;
    sub_6579( uParam0, uParam1 );
    g_U10978 = 1;
    return;
}

void sub_5664()
{
    sub_5673();
    sub_5776( ref g_U9893._fU68 );
    sub_5825();
    return;
}

void sub_5673()
{
    g_U9893._fU4 = 0;
    g_U9893._fU8 = 0;
    g_U9893._fU12 = 0;
    g_U9893._fU16 = 0;
    g_U9893._fU20 = 0;
    g_U9893._fU28 = 0;
    g_U9893._fU32 = 0;
    g_U9893._fU36 = 0;
    g_U9893._fU48 = 0;
    return;
}

void sub_5776(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_5825()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_5863( 1, g_U569[I] )) == 0)
        {
            sub_6114( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_6292())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_5863(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    switch (uParam0)
    {
        case 0:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 14, 23 );
        break;
        case 1:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 0, 13 );
        break;
        case 2:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 14, 27 );
        break;
        case 3:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 0, 13 );
        break;
        case 4:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 27 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return uParam1._fU0[2];
        break;
    }
    return -1;
}

void sub_6114(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_6199( g_U569 - 1 );
    return;
}

void sub_6199(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_6292()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_5863( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_6435(int iParam0)
{
    g_U34175._fU16._fU4 += iParam0;
    sub_6469();
    INCREMENT_INT_STAT( 286, iParam0 );
    return;
}

void sub_6469()
{
    if (g_U0)
    {
        return;
    }
    if (g_U34175._fU16._fU4 < g_U34175._fU16._fU0)
    {
        return;
    }
    AWARD_ACHIEVEMENT( 36 );
    return;
}

void sub_6579(unknown uParam0, int iParam1)
{
    char[16] cVar4;
    int iVar8;

    StrCopy( ref cVar4, "", 16 );
    iVar8 = -1;
    switch (uParam0)
    {
        case 38:
        StrCopy( ref cVar4, "BADMAN", 16 );
        iVar8 = 1;
        break;
        case 39:
        StrCopy( ref cVar4, "BRIAN", 16 );
        iVar8 = 3;
        break;
        case 40:
        StrCopy( ref cVar4, "CHERISE", 16 );
        iVar8 = 1;
        break;
        case 41:
        StrCopy( ref cVar4, "EDDIE", 16 );
        iVar8 = 2;
        break;
        case 42:
        StrCopy( ref cVar4, "GRACIE", 16 );
        iVar8 = 1;
        break;
        case 43:
        StrCopy( ref cVar4, "HOSSAN", 16 );
        iVar8 = 1;
        break;
        case 44:
        StrCopy( ref cVar4, "ILYENA", 16 );
        iVar8 = 1;
        break;
        case 45:
        StrCopy( ref cVar4, "IVAN", 16 );
        iVar8 = 1;
        break;
        case 46:
        StrCopy( ref cVar4, "JEFF", 16 );
        iVar8 = 3;
        break;
        case 47:
        StrCopy( ref cVar4, "MARNIE", 16 );
        iVar8 = 2;
        break;
        case 48:
        StrCopy( ref cVar4, "CLARENCE", 16 );
        iVar8 = 1;
        break;
        case 49:
        StrCopy( ref cVar4, "MEL", 16 );
        iVar8 = 1;
        break;
        case 50:
        StrCopy( ref cVar4, "PATHOS", 16 );
        iVar8 = 2;
        break;
        case 51:
        StrCopy( ref cVar4, "SARA", 16 );
        iVar8 = 2;
        break;
        default:
        SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: Unknown Random Character ID" );
        return;
    }
    ConcatString(ref cVar4, "_", 16);
    if (iParam1 <= 0)
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: sequence < 0" );
        return;
    }
    if (iParam1 > iVar8)
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: sequence > max sequence" );
        return;
    }
    switch (iParam1)
    {
        case 1:
        ConcatString(ref cVar4, "1", 16);
        break;
        case 2:
        ConcatString(ref cVar4, "2", 16);
        break;
        case 3:
        ConcatString(ref cVar4, "3", 16);
        break;
        default: SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: unknown problem with paramSequence" );
    }
    sub_7425( cVar4 );
    return;
}

void sub_7425(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT (COMPARE_STRING( ref g_U9926, "" )))
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Started: g_labelPlayerStatMissionName is already set up" );
        return;
    }
    g_U9926 = {uParam0};
    PLAYSTATS_MISSION_STARTED( ref g_U9926 );
    return;
}

int sub_7624()
{
    if (IS_HINT_RUNNING())
    {
        if ((sub_3420() > 30) || (sub_2482()))
        {
            HINT_CAM( l_U139._fU0, l_U139._fU4, l_U139._fU8, 0, 0, 0, 0 );
            return 1;
        }
    }
    return 0;
}

void sub_7740()
{
    if ((IS_CHAR_DEAD( l_U127 )) AND (NOT (l_U107 == 21)))
    {
        PRINT_NOW( "MEL_PMT11", 7500, 1 );
        sub_7803( ref l_U166, 0 );
        sub_7803( ref l_U178, 0 );
        sub_7803( ref l_U190, 0 );
        sub_7803( ref l_U196, 0 );
        sub_7803( ref l_U202, 0 );
        sub_7976( 49, l_U127, 28 );
        sub_8026();
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2049() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2049(), ref l_U132 );
        if (NOT (l_U132 == l_U131))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U131 );
            l_U131 = l_U132;
            SET_CAR_AS_MISSION_CAR( l_U131 );
        }
    }
    if (l_U123)
    {
        if (NOT (IS_CHAR_INJURED( l_U127 )))
        {
            if (NOT (IS_GROUP_MEMBER( l_U127, sub_5238() )))
            {
                if (DOES_BLIP_EXIST( l_U133 ))
                {
                    if (sub_3420() < 12.00000000)
                    {
                        REMOVE_BLIP( l_U133 );
                        SET_GROUP_MEMBER( sub_5238(), l_U127 );
                        l_U120 = 1;
                        if (NOT (IS_CHAR_INJURED( l_U127 )))
                        {
                            if (l_U161 == 1)
                            {
                                if (NOT l_U126)
                                {
                                    PRINT( "MRN2_PMT1", 7500, 1 );
                                    l_U126 = 1;
                                }
                                if (NOT (DOES_BLIP_EXIST( l_U134 )))
                                {
                                    ADD_BLIP_FOR_COORD( l_U229._fU0, l_U229._fU4, l_U229._fU8, ref l_U134 );
                                    SET_ROUTE( l_U134, 1 );
                                }
                                CLEAR_PRINTS();
                                if (NOT (IS_WANTED_LEVEL_GREATER( sub_1079(), 0 )))
                                {
                                    PRINT( "MEL_PMT41", 7500, 1 );
                                }
                            }
                            else if (NOT l_U126)
                            {
                                PRINT( "MRN2_PMT10", 7500, 1 );
                                l_U126 = 1;
                            }
                            if (NOT (DOES_BLIP_EXIST( l_U135 )))
                            {
                                ADD_BLIP_FOR_COORD( 896.29540000, -388.27520000, 16.70040000, ref l_U135 );
                                SET_ROUTE( l_U135, 1 );
                            }
                            CLEAR_PRINTS();
                            PRINT( "MEL_PMT51", 7500, 1 );;
                        }
                    }
                }
                else
                {
                    l_U126 = 0;
                    l_U120 = 0;
                    if (DOES_BLIP_EXIST( l_U134 ))
                    {
                        REMOVE_BLIP( l_U134 );
                    }
                    if (DOES_BLIP_EXIST( l_U135 ))
                    {
                        REMOVE_BLIP( l_U135 );
                    }
                    if (NOT (DOES_BLIP_EXIST( l_U133 )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U127, ref l_U133 );
                        SET_ROUTE( l_U133, 1 );
                        SET_BLIP_AS_FRIENDLY( l_U133, 1 );
                    }
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "MEL_PMT61" )))
                    {
                        CLEAR_PRINTS();
                        PRINT( "MEL_PMT61", 7500, 1 );
                    }
                }
            }
        }
    }
    if (l_U120)
    {
        if (NOT (IS_CHAR_DEAD( sub_2049() )))
        {
            if (IS_VEH_DRIVEABLE( l_U131 ))
            {
                if (IS_CHAR_IN_CAR( sub_2049(), l_U131 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U127 )))
                    {
                        if (IS_CHAR_IN_CAR( l_U127, l_U131 ))
                        {
                            if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                            {
                                if (g_U64737 == 0)
                                {
                                    if (l_U156 == 1)
                                    {
                                        if (sub_9243( l_U166 ))
                                        {
                                            sub_9289( "PML_BANT1V1", ref l_U166, 6, 1 );
                                        }
                                    }
                                    if (l_U156 == 2)
                                    {
                                        if (sub_9243( l_U166 ))
                                        {
                                            sub_9289( "PML_BANT2V1", ref l_U166, 6, 1 );
                                        }
                                    }
                                }
                                else if (g_U64737 == 1)
                                {
                                    if (l_U156 == 1)
                                    {
                                        if (sub_9243( l_U166 ))
                                        {
                                            sub_9289( "PML_BANT1V2", ref l_U166, 6, 1 );
                                        }
                                    }
                                    if (l_U156 == 2)
                                    {
                                        if (sub_9243( l_U166 ))
                                        {
                                            sub_9289( "PML_BANT2V1", ref l_U166, 6, 1 );
                                        }
                                    }
                                }
                            }
                            l_U116 = 1;
                        }
                        else if (sub_10462( l_U166 ))
                        {
                            sub_10633( ref l_U166 );
                        }
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U127 )))
                {
                    if (IS_CHAR_IN_CAR( l_U127, l_U131 ))
                    {
                        if (sub_10462( l_U166 ))
                        {
                            sub_10633( ref l_U166 );
                        }
                    }
                    else if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                    {
                        if (sub_3420() < 10.00000000)
                        {
                            if (g_U64737 == 0)
                            {
                                if (l_U156 == 1)
                                {
                                    if (sub_9243( l_U166 ))
                                    {
                                        sub_9289( "PML_BANT1V1", ref l_U166, 6, 1 );
                                    }
                                }
                                if (l_U156 == 2)
                                {
                                    if (sub_9243( l_U166 ))
                                    {
                                        sub_9289( "PML_BANT2V1", ref l_U166, 6, 1 );
                                    }
                                }
                            }
                            else if (g_U64737 == 1)
                            {
                                if (l_U156 == 1)
                                {
                                    if (sub_9243( l_U166 ))
                                    {
                                        sub_9289( "PML_BANT1V2", ref l_U166, 6, 1 );
                                    }
                                }
                                if (l_U156 == 2)
                                {
                                    if (sub_9243( l_U166 ))
                                    {
                                        sub_9289( "PML_BANT2V1", ref l_U166, 6, 1 );
                                    }
                                }
                            }
                        }
                        else if (sub_10462( l_U166 ))
                        {
                            sub_10633( ref l_U166 );
                        }
                    }
                }
            }
        }
    }
    switch (l_U107)
    {
        case 0:
        LOAD_ADDITIONAL_TEXT( "PMLAUD", 6 );
        CLEAR_HELP();
        SET_PLAYER_CONTROL( sub_1079(), 0 );
        REMOVE_BLIP( l_U133 );
        if (DOES_VEHICLE_EXIST( l_U131 ))
        {
            if (IS_VEH_DRIVEABLE( l_U131 ))
            {
                SET_CAR_AS_MISSION_CAR( l_U131 );
                SET_CAR_COORDINATES( l_U131, 903.23770000, -396.94620000, 15.67760000 );
                SET_CAR_HEADING( l_U131, 180.69820000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U131 );
                SET_CAR_IN_CUTSCENE( l_U131, 1 );
            }
        }
        CLEAR_AREA( l_U139._fU0, l_U139._fU4, l_U139._fU8, 5.00000000, 1 );
        GET_CHAR_COORDINATES( sub_2049(), ref l_U142._fU0, ref l_U142._fU4, ref l_U142._fU8 );
        DELETE_CHAR( ref l_U127 );
        SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
        SWITCH_PED_PATHS_OFF( l_U139._fU0 - 10.00000000, l_U139._fU4 - 10.00000000, l_U139._fU8 - 10.00000000, l_U139._fU0 + 10.00000000, l_U139._fU4 + 10.00000000, l_U139._fU8 + 10.00000000 );
        CLEAR_AREA( l_U142._fU0, l_U142._fU4, l_U142._fU8, 20.00000000, 1 );
        LOAD_COMBAT_DECISION_MAKER( 1, ref l_U162 );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U163 );
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "rpmel1" );
        REQUEST_MODEL( 807236245 );
        REQUEST_MODEL( -196312163 );
        while ((NOT (HAS_MODEL_LOADED( 807236245 ))) || (NOT (HAS_MODEL_LOADED( -196312163 ))))
        {
            WAIT( 0 );
        }
        OPEN_SEQUENCE_TASK( ref l_U165 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U139._fU0, l_U139._fU4, l_U139._fU8, 2, -2, 1.50000000 );
        CLOSE_SEQUENCE_TASK( l_U165 );
        CREATE_CHAR( 26, l_U153, 898.01140000, -395.49170000, 15.76150000, ref l_U127, 1 );
        SET_CHAR_COMPONENT_VARIATION( l_U127, 1, 1, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U127, 2, 1, 0 );
        COPY_GROUP_CHAR_DECISION_MAKER( 65537, ref l_U164 );
        SET_GROUP_CHAR_DECISION_MAKER( l_U127, l_U164 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U127, 0 );
        SET_CHAR_MAX_TIME_IN_WATER( l_U127, 20.00000000 );
        SET_CHAR_MAX_TIME_UNDERWATER( l_U127, 10.00000000 );
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2049(), 0 );
        SET_PED_DIES_WHEN_INJURED( l_U127, 1 );
        SET_CHAR_HEADING( l_U127, 338.35030000 );
        SET_CHAR_NEVER_TARGETTED( l_U127, 1 );
        SET_CHAR_SUFFERS_CRITICAL_HITS( l_U127, 0 );
        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U127, 1 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U153 );
        SET_CHAR_COORDINATES( sub_2049(), 898.36070000, -393.07820000, 15.81900000 );
        SET_CHAR_HEADING( sub_2049(), 256.17800000 );
        SET_CHAR_RELATIONSHIP( l_U127, 0, 0 );
        sub_12432( "PMLAUD" );
        sub_12551( 0, sub_2049(), "NIKO", 0 );
        sub_12551( 1, l_U127, "PI_MEL", 0 );
        LOAD_ADDITIONAL_TEXT( "WI_MEL", 0 );
        l_U107 = 2;
        break;
        case 2:
        SET_CAM_BEHIND_PED( sub_2049() );
        SET_PLAYER_CONTROL_ADVANCED( sub_1079(), 1, 1, 1 );
        if (NOT (DOES_BLIP_EXIST( l_U134 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U127 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U127 );
            }
        }
        SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SWITCH_PED_PATHS_ON( l_U139._fU0 - 10.00000000, l_U139._fU4 - 10.00000000, l_U139._fU8 - 10.00000000, l_U139._fU0 + 10.00000000, l_U139._fU4 + 10.00000000, l_U139._fU8 + 10.00000000 );
        LOAD_SCENE( l_U139._fU0, l_U139._fU4, l_U139._fU8 );
        DO_SCREEN_FADE_IN( 250 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        if (NOT (IS_CHAR_DEAD( l_U127 )))
        {
            TASK_LOOK_AT_CHAR( l_U127, sub_2049(), -2, 0 );
            CLEAR_CHAR_TASKS( l_U127 );
            if (NOT l_U117)
            {
                sub_13070( "PML_N2GO", ref l_U202, 6, 1 );
                WAIT( 250 );
                l_U117 = 1;
            }
        }
        l_U107 = 3;
        break;
        case 3:
        if (NOT (sub_10462( l_U202 )))
        {
            CLEAR_PRINTS();
            l_U117 = 0;
            l_U108 = 0;
            l_U107 = 4;
        }
        break;
        case 4:
        if (NOT l_U126)
        {
            PRINT( "MEL_PMT3", 7500, 1 );
            l_U126 = 1;
        }
        if (NOT (IS_CHAR_INJURED( sub_2049() )))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_2049() ))
            {
                if (NOT (IS_CHAR_INJURED( l_U127 )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U127, 0 );
                }
                CLEAR_PRINTS();
                l_U123 = 1;
                l_U107 = 5;
            }
            else
            {
                l_U123 = 0;
            }
        }
        break;
        case 5:
        if (l_U116)
        {
            if (NOT l_U117)
            {
                if (NOT (IS_CHAR_INJURED( l_U127 )))
                {
                    TASK_LOOK_AT_CHAR( l_U127, sub_2049(), 0, 0 );
                }
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    if (g_U64737 == 0)
                    {
                        sub_13070( "PML_BANT1V1", ref l_U166, 6, 1 );
                        WAIT( 250 );
                        l_U117 = 1;
                    }
                    else if (g_U64737 == 1)
                    {
                        sub_13070( "PML_BANT1V2", ref l_U166, 6, 1 );
                        WAIT( 250 );
                        l_U117 = 1;
                    }
                    else if (g_U64737 == 2)
                    {
                        SAY_AMBIENT_SPEECH( l_U127, "listen_to_radio", 0, 0, 0 );
                        WAIT( 250 );
                        l_U117 = 1;
                    };;;
                }
            }
        }
        if (IS_WANTED_LEVEL_GREATER( sub_1079(), 0 ))
        {
            if (DOES_BLIP_EXIST( l_U134 ))
            {
                REMOVE_BLIP( l_U134 );
                PRINT_HELP( "GLOCK_WL" );
            }
        }
        else if (l_U117)
        {
            if (NOT (DOES_BLIP_EXIST( l_U134 )))
            {
                ADD_BLIP_FOR_COORD( l_U229._fU0, l_U229._fU4, l_U229._fU8, ref l_U134 );
                SET_ROUTE( l_U134, 1 );
                if (IS_THIS_PRINT_BEING_DISPLAYED( "GLOCK_WL", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                {
                    CLEAR_PRINTS();
                }
            }
        }
        if ((DOES_VEHICLE_EXIST( l_U131 )) AND (NOT (IS_VEH_DRIVEABLE( l_U131 ))))
        {
            SET_CAR_ENGINE_ON( l_U131, 0, 0 );
        }
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_1079(), 0 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U127 )))
            {
                if (IS_GROUP_MEMBER( l_U127, sub_5238() ))
                {
                    if ((LOCATE_CHAR_ANY_MEANS_3D( sub_2049(), l_U229._fU0, l_U229._fU4, l_U229._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1 )) AND (sub_4539( 1, 1 )))
                    {
                        if (sub_3420() < 3.00000000)
                        {
                            l_U123 = 1;
                            if (IS_THIS_PRINT_BEING_DISPLAYED( "MEL_PMT4", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                            {
                                CLEAR_PRINTS();
                            }
                            if (IS_HINT_RUNNING())
                            {
                                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U127, 0, 0, 0 );
                                TASK_LOOK_AT_CHAR( sub_2049(), l_U127, 0, 0 );
                            }
                            SET_PLAYER_CONTROL( sub_1079(), 0 );
                            if (NOT l_U111)
                            {
                                BEGIN_CAM_COMMANDS( ref l_U220 );
                                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                                CREATE_CAM( 14, ref l_U221 );
                                SET_CAM_POS( l_U221, 1145.97000000, -108.21000000, 35.00000000 );
                                SET_CAM_ROT( l_U221, 16.27000000, -0.00000000, 98.11000000 );
                                SET_CAM_FOV( l_U221, 54.60000000 );
                                CREATE_CAM( 14, ref l_U222 );
                                SET_CAM_POS( l_U222, 1145.91000000, -105.80000000, 36.00000000 );
                                SET_CAM_FOV( l_U222, 55.20000000 );
                                SET_CAM_ROT( l_U222, -6.76000000, -0.00000000, -89.82000000 );
                                CREATE_CAM( 14, ref l_U223 );
                                SET_CAM_POS( l_U223, 1145.91000000, -112.80000000, 36.00000000 );
                                SET_CAM_FOV( l_U223, 43.50000000 );
                                SET_CAM_ROT( l_U223, -5.85000000, 0.00000000, -64.72000000 );
                                CREATE_CAM( 14, ref l_U224 );
                                SET_CAM_POS( l_U224, 1147.10000000, -106.43000000, 37.84000000 );
                                SET_CAM_FOV( l_U224, 16.00000000 );
                                SET_CAM_ROT( l_U224, -5.28000000, 0.00000000, 102.56000000 );
                                SET_CAM_NEAR_DOF( l_U224, 14.00000000 );
                                SET_CAM_FAR_DOF( l_U224, 24.00000000 );
                                SET_CAM_PROPAGATE( l_U224, 1 );
                                SET_CAM_ACTIVE( l_U224, 1 );
                                SET_USE_HIGHDOF( 1 );
                                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                                l_U111 = 1;
                            }
                            if (IS_CHAR_IN_ANY_CAR( sub_2049() ))
                            {
                                if (NOT (IS_CAR_UPSIDEDOWN( l_U131 )))
                                {
                                    sub_7803( ref l_U166, 0 );
                                    CLEAR_PRINTS();
                                    REMOVE_BLIP( l_U134 );
                                    SET_WIDESCREEN_BORDERS( 1 );
                                    SET_WANTED_MULTIPLIER( 0.10000000 );
                                    l_U122 = 0;
                                    l_U107 = 8;
                                }
                            }
                            else if (IS_CHAR_ON_FOOT( sub_2049() ))
                            {
                                sub_7803( ref l_U166, 0 );
                                CLEAR_PRINTS();
                                REMOVE_BLIP( l_U134 );
                                if (NOT (IS_CHAR_INJURED( sub_2049() )))
                                {
                                    CLEAR_CHAR_TASKS( sub_2049() );
                                    TASK_TURN_CHAR_TO_FACE_CHAR( sub_2049(), l_U127 );
                                    REMOVE_PED_HELMET( sub_2049(), 0 );
                                }
                                if (NOT (IS_CHAR_INJURED( l_U127 )))
                                {
                                    CLEAR_CHAR_TASKS( l_U127 );
                                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U127, sub_2049() );
                                }
                                SET_WIDESCREEN_BORDERS( 1 );
                                SET_WANTED_MULTIPLIER( 0.10000000 );
                                l_U122 = 0;
                                l_U107 = 8;
                            }
                        }
                        else
                        {
                            l_U123 = 0;
                            SET_PLAYER_CONTROL( sub_1079(), 0 );
                            if (NOT (IS_CHAR_INJURED( sub_2049() )))
                            {
                                GET_CHAR_COORDINATES( sub_2049(), ref l_U142._fU0, ref l_U142._fU4, ref l_U142._fU8 );
                            }
                            if (NOT IS_HINT_RUNNING())
                            {
                                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U127, 0, 0, 30000 );
                                TASK_LOOK_AT_CHAR( sub_2049(), l_U127, -2, 0 );
                                if (NOT (IS_CHAR_INJURED( l_U127 )))
                                {
                                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U127, l_U142._fU0, l_U142._fU4, l_U142._fU8, 4, -2, 1.00000000 );
                                }
                                PRINT( "MEL_PMT4", 3000, 1 );
                            }
                        }
                    }
                }
            }
        }
        break;
        case 8:
        if (l_U122 == 0)
        {
            SETTIMERA( 0 );
            l_U122 = 1;
        }
        if ((TIMERA() >= 2000) AND (sub_15135()))
        {
            sub_7803( ref l_U166, 0 );
            SET_CAM_PROPAGATE( l_U224, 0 );
            SET_CAM_ACTIVE( l_U224, 0 );
            SET_USE_HIGHDOF( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        }
        if (NOT l_U121)
        {
            sub_13070( "PML_LOCATE", ref l_U184, 6, 1 );
            WAIT( 250 );
            if (NOT (IS_CHAR_DEAD( l_U127 )))
            {
                TASK_LOOK_AT_COORD( l_U127, l_U232._fU0, l_U232._fU4, l_U232._fU8, 0, 0 );
            }
            l_U121 = 1;
            l_U108 = 0;
        }
        if (sub_15406( ref l_U184 ))
        {
            DO_SCREEN_FADE_OUT( 250 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            l_U107 = 10;
        }
        else if ((sub_15514( l_U184 )) == 1)
        {
            if (NOT l_U244)
            {
                SET_CAM_PROPAGATE( l_U224, 0 );
                SET_CAM_ACTIVE( l_U224, 0 );
                SET_USE_HIGHDOF( 0 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                if (NOT (IS_CHAR_DEAD( sub_2049() )))
                {
                    if (IS_CHAR_IN_ANY_CAR( sub_2049() ))
                    {
                        TASK_LEAVE_CAR( sub_2049(), l_U131 );
                    }
                }
                l_U244 = 1;
            }
            else if (NOT l_U245)
            {
                if ((NOT (IS_CHAR_INJURED( sub_2049() ))) AND (NOT (IS_CHAR_IN_ANY_CAR( sub_2049() ))))
                {
                    REMOVE_PED_HELMET( sub_2049(), 0 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( sub_2049(), 1145.22000000, -107.74000000, 34.90000000, 2, -2, 1.00000000 );
                    l_U245 = 1;
                }
            }
        }
        break;
        case 10:
        if (NOT l_U118)
        {
            CREATE_CHAR( 26, 807236245, l_U235._fU0, l_U235._fU4, l_U235._fU8, ref l_U128, 1 );
            SET_CHAR_HEADING( l_U128, 170.57520000 );
            SET_CHAR_MAX_TIME_IN_WATER( l_U128, 20.00000000 );
            SET_CHAR_MAX_TIME_UNDERWATER( l_U128, 10.00000000 );
            GIVE_WEAPON_TO_CHAR( l_U128, 7, 150, 0 );
            SET_CURRENT_CHAR_WEAPON( l_U128, 7, 1 );
            sub_12551( 2, l_U128, "LOANSHARK", 0 );
            CREATE_CHAR( 26, 807236245, l_U238._fU0, l_U238._fU4, l_U238._fU8, ref l_U129, 1 );
            SET_CHAR_MAX_TIME_IN_WATER( l_U129, 20.00000000 );
            SET_CHAR_MAX_TIME_UNDERWATER( l_U129, 10.00000000 );
            SET_CHAR_HEADING( l_U129, 325.22210000 );
            GIVE_WEAPON_TO_CHAR( l_U129, 7, 150, 0 );
            SET_CURRENT_CHAR_WEAPON( l_U129, 7, 1 );
            CREATE_CHAR( 26, 807236245, l_U241._fU0, l_U241._fU4, l_U241._fU8, ref l_U130, 1 );
            SET_CHAR_HEADING( l_U130, 49.28850000 );
            SET_CHAR_MAX_TIME_IN_WATER( l_U130, 20.00000000 );
            SET_CHAR_MAX_TIME_UNDERWATER( l_U130, 10.00000000 );
            GIVE_WEAPON_TO_CHAR( l_U130, 7, 150, 0 );
            SET_CURRENT_CHAR_WEAPON( l_U130, 7, 1 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U128 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U129 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U130 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U128, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U129, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U130, 1 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U128, 23 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U129, 23 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U130, 23 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 807236245 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 1758564455 );
            SWITCH_PED_PATHS_OFF( 1152.68000000, -109.88000000, 35.19000000, 1161.23000000, -97.82000000, 35.40000000 );
            CLEAR_AREA_OF_CHARS( 1156.96000000, -103.85000000, 35.00000000, 20.00000000 );
            l_U118 = 1;
        }
        CLEAR_AREA_OF_CHARS( 1155.13000000, -106.95000000, 38.92000000, 10.00000000 );
        CLEAR_AREA_OF_CARS( 1158.13000000, -107.65000000, 38.92000000, 3.00000000 );
        CLEAR_AREA_OF_CARS( 1152.23000000, -107.65000000, 38.92000000, 3.00000000 );
        CLEAR_AREA_OF_CARS( 1162.53000000, -102.25000000, 38.92000000, 3.00000000 );
        if (NOT (IS_CHAR_INJURED( sub_2049() )))
        {
            SET_CHAR_COORDINATES( sub_2049(), 1138.04300000, -109.58690000, 34.76500000 );
            SET_CHAR_HEADING( sub_2049(), 277.00000000 );
        }
        if (NOT (IS_CHAR_INJURED( l_U127 )))
        {
            SET_CHAR_COORDINATES( l_U127, 1135.73500000, -109.36200000, 35.07000000 );
            SET_CHAR_HEADING( l_U127, 309.89000000 );
        }
        SET_CAM_PROPAGATE( l_U221, 1 );
        SET_CAM_ACTIVE( l_U221, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        CLEAR_AREA_OF_CHARS( 1155.13000000, -106.95000000, 37.92000000, 10.00000000 );
        CLEAR_AREA_OF_CARS( 1158.13000000, -107.65000000, 38.92000000, 3.00000000 );
        CLEAR_AREA_OF_CARS( 1152.23000000, -107.65000000, 38.92000000, 3.00000000 );
        CLEAR_AREA_OF_CARS( 1162.53000000, -102.25000000, 38.92000000, 5.00000000 );
        if (DOES_VEHICLE_EXIST( l_U131 ))
        {
            if (IS_VEH_DRIVEABLE( l_U131 ))
            {
                SET_CAR_COORDINATES( l_U131, 1127.86400000, -110.51130000, 34.54720000 );
                SET_CAR_HEADING( l_U131, 30.00000000 );
            }
        }
        DO_SCREEN_FADE_IN( 250 );
        l_U122 = 0;
        l_U107 = 11;
        break;
        case 11:
        if (l_U122 == 0)
        {
            SETTIMERA( 0 );
            l_U122 = 1;
        }
        if ((TIMERA() >= 2000) AND (sub_15135()))
        {
            sub_7803( ref l_U172, 0 );
            if (NOT (IS_CHAR_INJURED( l_U128 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U128 );
            }
            if (NOT (IS_CHAR_INJURED( l_U129 )))
            {
                CLEAR_CHAR_TASKS( l_U129 );
            }
            if (NOT (IS_CHAR_INJURED( l_U130 )))
            {
                CLEAR_CHAR_TASKS( l_U130 );
            }
            if (NOT (IS_CHAR_INJURED( sub_2049() )))
            {
                CLEAR_CHAR_TASKS( sub_2049() );
            }
            if (NOT l_U113)
            {
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                END_CAM_COMMANDS( ref l_U219 );
                SET_WIDESCREEN_BORDERS( 0 );
                SET_PLAYER_CONTROL( sub_1079(), 1 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                l_U113 = 1;
            }
            if (NOT (IS_CHAR_DEAD( l_U127 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U127 );
                TASK_SEEK_COVER_FROM_PED( l_U127, l_U128, 0 );
            }
            l_U107 = 14;
        }
        switch (l_U102)
        {
            case 0:
            if (NOT (IS_CHAR_DEAD( l_U128 )))
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U128, 1157.27800000, -103.87090000, 34.92160000, 2, 65516, 0.50000000 );
            }
            if (NOT (IS_CHAR_DEAD( l_U129 )))
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U129, 1156.38100000, -101.99730000, 34.92160000, 2, 65516, 0.50000000 );
            }
            if (NOT (IS_CHAR_DEAD( l_U130 )))
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U130, 1159.03000000, -106.64510000, 34.92160000, 2, 65516, 0.50000000 );
            }
            if (NOT (IS_CHAR_DEAD( sub_2049() )))
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( sub_2049(), 1152.74100000, -107.69870000, 34.92160000, 2, 65516, 0.50000000 );
                sub_13070( "PML_LSHARK", ref l_U172, 6, 1 );
            }
            if (NOT (IS_CHAR_DEAD( l_U127 )))
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U127, 1150.97000000, -106.49320000, 34.92160000, 2, 65516, 0.50000000 );
            }
            l_U102 = 1;
            break;
            case 1:
            if (((NOT (IS_CHAR_INJURED( sub_2049() ))) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_2049(), 1152.74100000, -107.69870000, 34.92160000, 1.00000000, 1.00000000, 1.00000000, 0 ))) || (NOT (IS_CHAR_ON_SCREEN( sub_2049() ))))
            {
                SET_CAM_PROPAGATE( l_U222, 1 );
                SET_CAM_ACTIVE( l_U222, 1 );
                SET_CAM_PROPAGATE( l_U221, 0 );
                SET_CAM_ACTIVE( l_U221, 0 );
                l_U102 = 2;
            }
            break;
            case 2:
            if ((((NOT (IS_CHAR_INJURED( l_U128 ))) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U128, 1157.27800000, -103.87090000, 35.92160000, 2.00000000, 2.00000000, 21.00000000, 0 ))) AND (NOT (IS_CHAR_INJURED( sub_2049() )))) AND (IS_CHAR_ON_SCREEN( sub_2049() )))
            {
                if (NOT (IS_CHAR_INJURED( sub_2049() )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U128 )))
                    {
                        TASK_TURN_CHAR_TO_FACE_CHAR( l_U128, sub_2049() );
                    }
                }
                if (NOT (IS_CHAR_INJURED( sub_2049() )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U129 )))
                    {
                        TASK_TURN_CHAR_TO_FACE_CHAR( l_U129, sub_2049() );
                    }
                }
                if (NOT (IS_CHAR_INJURED( sub_2049() )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U130 )))
                    {
                        TASK_TURN_CHAR_TO_FACE_CHAR( l_U130, sub_2049() );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U128 )))
                {
                    if (NOT (IS_CHAR_INJURED( sub_2049() )))
                    {
                        TASK_TURN_CHAR_TO_FACE_CHAR( sub_2049(), l_U128 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U128 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U127 )))
                    {
                        TASK_LOOK_AT_CHAR( l_U127, l_U128, -1, 0 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( l_U127, l_U128 );
                    }
                }
                SET_CAM_PROPAGATE( l_U223, 1 );
                SET_CAM_ACTIVE( l_U223, 1 );
                CREATE_CAM( 3, ref l_U225 );
                SET_CAM_PROPAGATE( l_U225, 1 );
                SET_CAM_INTERP_STYLE_CORE( l_U225, l_U222, l_U223, 15000, 0 );
                SET_CAM_PROPAGATE( l_U222, 0 );
                SET_CAM_ACTIVE( l_U222, 0 );
                l_U102 = 3;
            }
            break;
            case 3:
            l_U122 = 0;
            l_U123 = 0;
            l_U120 = 0;
            l_U122 = 0;
            l_U113 = 0;
            l_U107 = 13;
            break;
        }
        break;
        case 13:
        if (l_U122 == 0)
        {
            SETTIMERA( 0 );
            l_U122 = 1;
        }
        if ((TIMERA() >= 2000) AND (sub_15135()))
        {
            sub_7803( ref l_U172, 0 );
            if (NOT (IS_CHAR_INJURED( l_U128 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U128 );
            }
            if (NOT (IS_CHAR_INJURED( l_U129 )))
            {
                CLEAR_CHAR_TASKS( l_U129 );
            }
            if (NOT (IS_CHAR_INJURED( l_U130 )))
            {
                CLEAR_CHAR_TASKS( l_U130 );
            }
            if (NOT (IS_CHAR_INJURED( sub_2049() )))
            {
                CLEAR_CHAR_TASKS( sub_2049() );
            }
            if (NOT l_U113)
            {
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                DESTROY_CAM( l_U225 );
                END_CAM_COMMANDS( ref l_U219 );
                SET_WIDESCREEN_BORDERS( 0 );
                SET_PLAYER_CONTROL( sub_1079(), 1 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                l_U113 = 1;
            }
            if (NOT (IS_CHAR_DEAD( l_U127 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U127 );
                TASK_SEEK_COVER_FROM_PED( l_U127, l_U128, 0 );
            }
            l_U107 = 14;
        }
        if (sub_10462( l_U172 ))
        {
            l_U226 = sub_15514( l_U172 );
            if (l_U226 == 4)
            {
                if (NOT l_U227)
                {
                    if (NOT (IS_CHAR_INJURED( sub_2049() )))
                    {
                        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_2049(), 0 );
                    }
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    l_U227 = 1;
                }
            }
        }
        else if (NOT l_U113)
        {
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            DESTROY_CAM( l_U225 );
            END_CAM_COMMANDS( ref l_U219 );
            SET_WIDESCREEN_BORDERS( 0 );
            SET_PLAYER_CONTROL( sub_1079(), 1 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            l_U113 = 1;
        }
        if (NOT (IS_CHAR_DEAD( l_U128 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U128 );
        }
        if (NOT (IS_CHAR_DEAD( l_U127 )))
        {
            SET_CHAR_HEALTH( l_U127, 250 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U127 );
            TASK_SEEK_COVER_FROM_PED( l_U127, l_U128, 0 );
        }
        if (NOT (IS_CHAR_DEAD( l_U129 )))
        {
            CLEAR_CHAR_TASKS( l_U129 );
        }
        if (NOT (IS_CHAR_DEAD( l_U130 )))
        {
            CLEAR_CHAR_TASKS( l_U130 );
        }
        sub_7803( ref l_U172, 0 );
        l_U107 = 14;;
        break;
        case 14:
        if (NOT l_U115)
        {
            l_U123 = 0;
            REMOVE_CHAR_FROM_GROUP( l_U127 );
            l_U115 = 1;
        }
        if (NOT l_U119)
        {
            PRINT_NOW( "MEL_PMT15", 7500, 1 );
            if (NOT (IS_CHAR_INJURED( l_U127 )))
            {
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U127, 0 );
                SET_COMBAT_DECISION_MAKER( l_U127, l_U162 );
            }
            if (NOT (IS_CHAR_INJURED( l_U128 )))
            {
                SET_COMBAT_DECISION_MAKER( l_U128, l_U163 );
                SET_CHAR_AS_ENEMY( l_U128, 1 );
                TASK_COMBAT( l_U128, l_U127 );
            }
            if (NOT (IS_CHAR_INJURED( l_U129 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U129 );
                SET_COMBAT_DECISION_MAKER( l_U129, l_U163 );
                SET_CHAR_AS_ENEMY( l_U129, 1 );
                TASK_COMBAT( l_U129, l_U127 );
            }
            if (NOT (IS_CHAR_INJURED( l_U130 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U130 );
                SET_COMBAT_DECISION_MAKER( l_U130, l_U163 );
                SET_CHAR_AS_ENEMY( l_U130, 1 );
                TASK_COMBAT( l_U130, sub_2049() );
            }
            ADD_BLIP_FOR_CHAR( l_U128, ref l_U136 );
            ADD_BLIP_FOR_CHAR( l_U129, ref l_U137 );
            ADD_BLIP_FOR_CHAR( l_U130, ref l_U138 );
            CHANGE_BLIP_DISPLAY( l_U136, 4 );
            CHANGE_BLIP_DISPLAY( l_U137, 4 );
            CHANGE_BLIP_DISPLAY( l_U138, 4 );
            l_U119 = 1;
        }
        l_U113 = 0;
        if (sub_3420() < 20)
        {
            if (NOT (IS_CHAR_INJURED( l_U127 )))
            {
                if (l_U228)
                {
                    if (NOT (sub_10462( l_U178 )))
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( l_U158, l_U157, ref l_U160 );
                        if (l_U160 > 500)
                        {
                            sub_13070( "PML_COWERS", ref l_U178, 6, 1 );
                            WAIT( 250 );
                            SETTIMERA( 0 );
                            l_U228 = 0;
                        }
                        else
                        {
                            sub_13070( "PML_ATTK", ref l_U178, 6, 1 );
                            WAIT( 250 );
                            SETTIMERA( 0 );
                            l_U228 = 0;
                        }
                    }
                }
                else if ((TIMERA() > 4500) AND (NOT (sub_10462( l_U178 ))))
                {
                    GENERATE_RANDOM_INT_IN_RANGE( l_U158, l_U157, ref l_U159 );
                    if (l_U159 > 800)
                    {
                        l_U228 = 1;
                    }
                }
            }
            else
            {
                sub_7803( ref l_U178, 0 );
            }
        }
        if ((sub_3420() > 100) AND (NOT (IS_CHAR_ON_SCREEN( l_U127 ))))
        {
            if (NOT (IS_CHAR_DEAD( l_U127 )))
            {
                PRINT_NOW( "MEL_PMT12", 7500, 1 );
                DELETE_CHAR( ref l_U127 );
                sub_7803( ref l_U178, 0 );
                sub_8026();
            }
        }
        if (IS_CHAR_INJURED( l_U128 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U128 )))
            {
                SET_CHAR_HEALTH( l_U128, 5 );
            }
            REMOVE_BLIP( l_U136 );
        }
        if (IS_CHAR_INJURED( l_U129 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U129 )))
            {
                SET_CHAR_HEALTH( l_U129, 5 );
            }
            REMOVE_BLIP( l_U137 );
        }
        if (IS_CHAR_INJURED( l_U130 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U130 )))
            {
                SET_CHAR_HEALTH( l_U130, 5 );
            }
            REMOVE_BLIP( l_U138 );
        }
        if (((IS_CHAR_INJURED( l_U128 )) AND (IS_CHAR_INJURED( l_U129 ))) AND (IS_CHAR_INJURED( l_U130 )))
        {
            SWITCH_PED_PATHS_ON( 1152.68000000, -109.88000000, 35.19000000, 1161.23000000, -97.82000000, 35.40000000 );
            l_U161 = 2;
            l_U228 = 0;
            if (NOT (IS_CHAR_DEAD( l_U127 )))
            {
                sub_7803( ref l_U178, 0 );
                PRINT( "MEL_PMT61", 7500, 1 );
                if (NOT (DOES_BLIP_EXIST( l_U133 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U127, ref l_U133 );
                    SET_BLIP_AS_FRIENDLY( l_U133, 1 );
                    CHANGE_BLIP_SCALE( l_U133, 1.00000000 );
                }
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U127 );
                if (NOT (IS_CHAR_INJURED( sub_2049() )))
                {
                    GET_CHAR_COORDINATES( sub_2049(), ref l_U142._fU0, ref l_U142._fU4, ref l_U142._fU8 );
                }
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U127, l_U142._fU0, l_U142._fU4, l_U142._fU8, 3, -2, 5.00000000 );
            }
            l_U107 = 15;
        }
        break;
        case 15:
        if (NOT (IS_GROUP_MEMBER( l_U127, sub_5238() )))
        {
            if (sub_3420() < 10.00000000)
            {
                if (NOT (IS_CHAR_INJURED( l_U127 )))
                {
                    CLEAR_CHAR_TASKS( l_U127 );
                    SET_GROUP_MEMBER( sub_5238(), l_U127 );
                    if (DOES_BLIP_EXIST( l_U133 ))
                    {
                        REMOVE_BLIP( l_U133 );
                    }
                }
                l_U123 = 1;
                sub_13070( "PML_KILLSH", ref l_U190, 6, 1 );
                WAIT( 1000 );
            }
        }
        else if (sub_15406( ref l_U190 ))
        {
            l_U107 = 16;
        }
        break;
        case 16:
        if ((sub_15406( ref l_U190 )) || (NOT (sub_10462( l_U190 ))))
        {
            l_U107 = 17;
        }
        break;
        case 17:
        if (NOT l_U124)
        {
            if ((sub_15406( ref l_U190 )) || (NOT (sub_10462( l_U190 ))))
            {
                sub_13070( "PML_TA", ref l_U196, 6, 1 );
                WAIT( 1000 );
                l_U116 = 0;
                l_U117 = 0;
                l_U121 = 0;
                l_U124 = 1;
            }
        }
        else if (NOT (sub_10462( l_U196 )))
        {
            l_U120 = 1;
            if (NOT (DOES_BLIP_EXIST( l_U135 )))
            {
                SET_PLAYER_CONTROL( sub_1079(), 1 );
                CLEAR_HELP();
                ADD_BLIP_FOR_COORD( 896.29540000, -388.27520000, 16.70040000, ref l_U135 );
                SET_ROUTE( l_U135, 1 );
                PRINT( "MEL_PMT10", 7500, 1 );
            }
            if (IS_CHAR_INJURED( l_U127 ))
            {
                SET_CHAR_HEALTH( l_U127, 150 );
            }
            l_U107 = 18;
        }
        break;
        case 18:
        l_U156 = 2;
        if (l_U116)
        {
            if (NOT l_U117)
            {
                if (sub_13070( "PML_BANT2V1", ref l_U166, 6, 1 ))
                {
                    l_U117 = 1;
                }
            }
        }
        if ((DOES_VEHICLE_EXIST( l_U131 )) AND (NOT (IS_VEH_DRIVEABLE( l_U131 ))))
        {
            SET_CAR_ENGINE_ON( l_U131, 0, 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U127 )))
        {
            if (IS_GROUP_MEMBER( l_U127, sub_5238() ))
            {
                if ((LOCATE_CHAR_ANY_MEANS_3D( sub_2049(), 903.12110000, -388.51770000, 15.86610000 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1 )) AND (sub_4539( 1, 1 )))
                {
                    SET_PLAYER_CONTROL( sub_1079(), 0 );
                    sub_7803( ref l_U166, 0 );
                    l_U123 = 0;
                    l_U115 = 0;
                    if (IS_CHAR_IN_ANY_CAR( sub_2049() ))
                    {
                        if (NOT (IS_CAR_UPSIDEDOWN( l_U131 )))
                        {
                            GET_CHAR_HEADING( sub_2049(), ref l_U248 );
                            if ((l_U248 > 270) || (l_U248 < 90))
                            {
                                l_U247 = 1;
                            }
                            if ((IS_VEH_DRIVEABLE( l_U131 )) AND (NOT (IS_CHAR_INJURED( l_U127 ))))
                            {
                                GET_CAR_MODEL( l_U131, ref l_U154 );
                                if (NOT (IS_CHAR_IN_ANY_CAR( l_U127 )))
                                {
                                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U127, l_U131, 0 );
                                }
                            }
                            if (IS_THIS_MODEL_A_HELI( l_U154 ))
                            {
                                if (NOT (IS_CHAR_INJURED( sub_2049() )))
                                {
                                    if (IS_VEH_DRIVEABLE( l_U131 ))
                                    {
                                        FREEZE_CAR_POSITION( l_U131, 1 );
                                    }
                                }
                            }
                            REMOVE_BLIP( l_U135 );
                            l_U120 = 0;
                            l_U122 = 0;
                            l_U111 = 0;
                            l_U113 = 0;
                            l_U107 = 19;
                        }
                    }
                    else if (IS_CHAR_ON_FOOT( sub_2049() ))
                    {
                        SET_PLAYER_CONTROL( sub_1079(), 0 );
                        DO_SCREEN_FADE_OUT( 250 );
                        while (NOT IS_SCREEN_FADED_OUT())
                        {
                            WAIT( 0 );
                        }
                        if (NOT (IS_CHAR_INJURED( sub_2049() )))
                        {
                            CLEAR_CHAR_TASKS( sub_2049() );
                            SET_CHAR_COORDINATES( sub_2049(), 902.80000000, -387.60000000, 15.83640000 );
                            SET_CHAR_HEADING( sub_2049(), 0.15480000 );
                            REMOVE_PED_HELMET( sub_2049(), 0 );
                        }
                        if (DOES_VEHICLE_EXIST( l_U131 ))
                        {
                            if (IS_VEH_DRIVEABLE( l_U131 ))
                            {
                                SET_CAR_COORDINATES( l_U131, 903.62120000, -375.34000000, 16.01080000 );
                                SET_CAR_HEADING( l_U131, 180.15480000 );
                                SET_CAR_ON_GROUND_PROPERLY( l_U131 );
                            }
                        }
                        if (NOT (IS_CHAR_INJURED( l_U127 )))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U127 );
                            SET_CHAR_COORDINATES( l_U127, 902.80000000, -386.60000000, 15.83640000 );
                            SET_CHAR_HEADING( l_U127, 180.15480000 );
                        }
                        REMOVE_BLIP( l_U135 );
                        l_U120 = 0;
                        l_U122 = 0;
                        l_U111 = 0;
                        l_U113 = 0;
                        l_U107 = 19;
                    }
                }
            }
        }
        break;
        case 19:
        if (l_U122 == 0)
        {
            SETTIMERA( 0 );
            l_U122 = 1;
        }
        if ((TIMERA() >= 2000) AND (sub_15135()))
        {
            DO_SCREEN_FADE_OUT( 250 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            if (NOT (IS_CHAR_DEAD( l_U127 )))
            {
                REMOVE_CHAR_FROM_GROUP( l_U127 );
                REMOVE_CHAR_ELEGANTLY( ref l_U127 );
            }
            l_U107 = 21;
        }
        if (NOT l_U111)
        {
            BEGIN_CAM_COMMANDS( ref l_U220 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            CREATE_CAM( 14, ref l_U221 );
            if (l_U247)
            {
                SET_CAM_POS( l_U221, 911.78000000, -380.51000000, 18.35000000 );
                SET_CAM_FOV( l_U221, 32.10000000 );
                SET_CAM_NEAR_DOF( l_U221, 3.00000000 );
                SET_CAM_FAR_DOF( l_U221, 16.00000000 );
                POINT_CAM_AT_PED( l_U221, sub_2049() );
            }
            else
            {
                SET_CAM_POS( l_U221, 910.35000000, -396.07000000, 18.63000000 );
                SET_CAM_FOV( l_U221, 40.70000000 );
                POINT_CAM_AT_PED( l_U221, sub_2049() );
                SET_CAM_NEAR_DOF( l_U221, 3.00000000 );
                SET_CAM_FAR_DOF( l_U221, 16.00000000 );
            }
            CREATE_CAM( 14, ref l_U222 );
            if (l_U247)
            {
                SET_CAM_POS( l_U222, 903.12000000, -380.51000000, 18.35000000 );
                SET_CAM_FOV( l_U222, 37.10000000 );
                SET_CAM_NEAR_DOF( l_U222, 3.00000000 );
                SET_CAM_FAR_DOF( l_U222, 16.00000000 );
                POINT_CAM_AT_PED( l_U222, sub_2049() );
            }
            else
            {
                SET_CAM_POS( l_U222, 900.89000000, -396.07000000, 18.63000000 );
                SET_CAM_FOV( l_U222, 32.70000000 );
                POINT_CAM_AT_PED( l_U222, sub_2049() );
                SET_CAM_NEAR_DOF( l_U222, 3.00000000 );
                SET_CAM_FAR_DOF( l_U222, 16.00000000 );
            }
            CREATE_CAM( 14, ref l_U223 );
            SET_CAM_POS( l_U223, 904.77000000, -385.27000000, 16.51000000 );
            SET_CAM_FOV( l_U223, 57.00000000 );
            SET_CAM_ROT( l_U223, 13.17000000, 0.00000000, 129.40000000 );
            SET_CAM_NEAR_DOF( l_U223, 2.00000000 );
            SET_CAM_FAR_DOF( l_U223, 8.00000000 );
            if (NOT (IS_CHAR_INJURED( sub_2049() )))
            {
                if (IS_CHAR_ON_FOOT( sub_2049() ))
                {
                    SET_CAM_PROPAGATE( l_U223, 1 );
                    SET_CAM_ACTIVE( l_U223, 1 );
                    SET_USE_HIGHDOF( 1 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                }
                else
                {
                    SET_CAM_PROPAGATE( l_U221, 1 );
                    SET_CAM_ACTIVE( l_U221, 1 );
                    SET_USE_HIGHDOF( 1 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                }
            }
            l_U111 = 1;
        }
        if (NOT l_U121)
        {
            if (IS_SCREEN_FADED_OUT())
            {
                DO_SCREEN_FADE_IN( 250 );
                while (NOT IS_SCREEN_FADED_IN())
                {
                    WAIT( 0 );
                }
            }
            if (NOT (IS_CHAR_INJURED( sub_2049() )))
            {
                if (IS_CHAR_ON_FOOT( sub_2049() ))
                {
                    ;
                }
                else
                {
                    CREATE_CAM( 3, ref l_U225 );
                    SET_CAM_PROPAGATE( l_U225, 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U225, l_U221, l_U222, 30000, 0 );
                }
            }
            sub_13070( "PML_BACK2S", ref l_U208, 6, 1 );
            WAIT( 250 );
            l_U121 = 1;
        }
        if (NOT (sub_10462( l_U208 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U127 )))
            {
                if (NOT l_U115)
                {
                    SET_PLAYER_CONTROL( sub_1079(), 0 );
                    REMOVE_CHAR_FROM_GROUP( l_U127 );
                    if (NOT (IS_CHAR_DEAD( l_U127 )))
                    {
                        if (IS_CHAR_IN_ANY_CAR( l_U127 ))
                        {
                            if (IS_VEH_DRIVEABLE( l_U131 ))
                            {
                                if (IS_CHAR_IN_CAR( l_U127, l_U131 ))
                                {
                                    TASK_LEAVE_CAR( l_U127, l_U131 );
                                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                                    PRINTNL();
                                    PRINTSTRING( "ALL_DONE_A1" );
                                    PRINTNL();
                                    l_U107 = 20;
                                }
                                else
                                {
                                    PRINTNL();
                                    PRINTSTRING( "ALL_DONE_A2" );
                                    PRINTNL();
                                    l_U107 = 20;
                                }
                            }
                        }
                        else
                        {
                            PRINTNL();
                            PRINTSTRING( "ALL_DONE_A3" );
                            PRINTNL();
                            l_U107 = 20;
                        }
                    }
                    l_U115 = 1;
                }
            }
        }
        else if ((sub_15514( l_U208 )) == 2)
        {
            if (NOT l_U246)
            {
                if (NOT (IS_CHAR_INJURED( sub_2049() )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U127 )))
                    {
                        TASK_LOOK_AT_CHAR( sub_2049(), l_U127, 2000, 0 );
                        TASK_LOOK_AT_CHAR( l_U127, sub_2049(), 4000, 0 );
                        l_U246 = 1;
                    }
                }
            }
        }
        else if ((sub_15514( l_U208 )) == 4)
        {
            if (l_U246)
            {
                if (NOT (IS_CHAR_INJURED( sub_2049() )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U127 )))
                    {
                        TASK_LOOK_AT_CHAR( sub_2049(), l_U127, 3000, 0 );
                        TASK_LOOK_AT_CHAR( l_U127, sub_2049(), 2000, 0 );
                        l_U246 = 0;
                    }
                }
            }
        };;;
        break;
        case 20:
        if (NOT (IS_CHAR_INJURED( l_U127 )))
        {
            if (NOT l_U125)
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( l_U127 )))
                {
                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U127, -1280.78100000, 820.59150000, 18.73690000, 2, -2, 1.50000000 );
                    SETTIMERB( 0 );
                    l_U125 = 1;
                }
            }
            else if ((NOT (IS_CHAR_ON_SCREEN( l_U127 ))) || (TIMERB() > 6000))
            {
                DELETE_CHAR( ref l_U127 );
                l_U107 = 21;
            }
        }
        break;
        case 21:
        CLEAR_HELP();
        if (NOT l_U113)
        {
            SET_USE_HIGHDOF( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            END_CAM_COMMANDS( ref l_U220 );
            SET_WIDESCREEN_BORDERS( 0 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_PLAYER_CONTROL_ADVANCED( sub_1079(), 1, 1, 1 );
            l_U113 = 1;
        }
        if (IS_VEH_DRIVEABLE( l_U131 ))
        {
            if (IS_VEH_DRIVEABLE( l_U131 ))
            {
                FREEZE_CAR_POSITION( l_U131, 1 );
            }
        }
        sub_7803( ref l_U208, 0 );
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN_UNHACKED( 500 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
        }
        sub_23551();
        break;
    }
    return;
}

void sub_7803(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_7976(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U64542._fU0 = uParam0;
    g_U64542._fU4 = uParam1;
    g_U64542._fU8 = uParam2;
    return;
}

void sub_8026()
{
    if (g_U64737 == 0)
    {
        g_U64737 = 1;
    }
    else if (g_U64737 == 1)
    {
        g_U64737 = 2;
    }
    g_U64754++;
    if (g_U64754 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_1079(), 150 );
        SAY_AMBIENT_SPEECH( sub_2049(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    else
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_1079(), 150 );
    }
    if (NOT (IS_CHAR_INJURED( l_U128 )))
    {
        SET_CHAR_RELATIONSHIP( l_U128, 5, 0 );
        TASK_COMBAT( l_U128, sub_2049() );
        SET_CHAR_KEEP_TASK( l_U128, 1 );
    }
    if (NOT (IS_CHAR_INJURED( l_U129 )))
    {
        SET_CHAR_RELATIONSHIP( l_U129, 5, 0 );
        TASK_COMBAT( l_U129, sub_2049() );
        SET_CHAR_KEEP_TASK( l_U129, 1 );
    }
    if (NOT (IS_CHAR_INJURED( l_U130 )))
    {
        SET_CHAR_RELATIONSHIP( l_U130, 5, 0 );
        TASK_COMBAT( l_U130, sub_2049() );
        SET_CHAR_KEEP_TASK( l_U130, 1 );
    }
    sub_1153();
    return;
}

void sub_9243(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

void sub_9289(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_9310( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

int sub_9310(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
    if (iParam2->_fU12)
    {
        StrCopy( ref cVar11[0], uParam0, 16 );
        StrCopy( ref cVar11[1], "END", 16 );
        return sub_9374( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_9374(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_9396( iParam1 )))
    {
        return 0;
    }
    l_U0._fU384 = 0;
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
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8499[I] = {(uParam0^)[I]};
    }
    g_U8493 = {(iParam1^)};
    sub_10084( ref g_U8395, ref l_U0 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_9396(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_9473( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U556[1] ))
    {
        switch (g_U91._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_9473( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 > iParam0->_fU0)
        {
            sub_9473( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8392 = iParam0->_fU0;
    g_U8393++;
    if (g_U8393 > 100000)
    {
        g_U8393 = 1;
    }
    iParam0->_fU4 = g_U8393;
    return 1;
}

void sub_9473(unknown uParam0)
{
    return;
}

void sub_10084(int iParam0, int iParam1)
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

int sub_10462(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_9473( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_9473( "\n speech is not playing" );
    }
    return 0;
}

int sub_10633(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_9473( "\n already paused" );
    }
    else if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 1 )) + 1;
            sub_9473( "\n CONVERSATION PAUSED AT LINE " );
            sub_10773( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_9473( "\n NOT pausing the line as scripted and global speech id dont match" );
        }
    }
    else
    {
        sub_9473( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_9473( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_10773(unknown uParam0)
{
    return;
}

void sub_12432(unknown uParam0)
{
    StrCopy( ref l_U0._fU0, uParam0, 16 );
    sub_12449();
    return;
}

void sub_12449()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U0._fU16[I]._fU0 = nil;
        StrCopy( ref l_U0._fU16[I]._fU4, "", 32 );
        l_U0._fU344[I] = 0;
    }
    return;
}

void sub_12551(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U0._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U0._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_12631( "\n PED NUMBER ", uParam0 );
    sub_12671( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_12631(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_12671(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_13070(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_13091( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

void sub_13091(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_9374( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_15135()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_15406(int iParam0)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            return 0;
        }
    }
    return 1;
}

void sub_15514(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_10462( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

void sub_23551()
{
    CLEAR_WANTED_LEVEL( sub_1079() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 50 );
    sub_23587( l_U214 );
    sub_1153();
    return;
}

void sub_23587(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_478( uParam0 );
    sub_23607( uParam0 );
    sub_27581( uParam0 );
    return;
}

void sub_23607(unknown uParam0)
{
    switch (uParam0)
    {
        case 38:
        sub_23737();
        break;
        case 39:
        sub_24699();
        break;
        case 40:
        sub_24958();
        break;
        case 48:
        sub_25141();
        break;
        case 41:
        sub_25326();
        break;
        case 42:
        sub_25522();
        break;
        case 43:
        sub_25703();
        break;
        case 44:
        sub_25886();
        break;
        case 45:
        sub_26067();
        break;
        case 46:
        sub_26246();
        break;
        case 47:
        sub_26557();
        break;
        case 49:
        sub_26757();
        break;
        case 50:
        sub_26934();
        break;
        case 51:
        sub_27132();
        break;
        default: sub_598( "Interactions_Pass: Unknown Random Interaction Character ID - tell Keith" );
    }
    sub_27407();
    sub_27480();
    return;
}

void sub_23737()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 38;
    uVar3 = sub_478( iVar2 );
    sub_23777( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_24423( 500 );
        break;
        default: sub_598( "Interactions_Badman_Pass: Unknown Badman Sequence - tell Keith" );
    }
    return;
}

void sub_23777(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_23830( iParam0, uParam1, uParam2 );
    if (NOT bParam3)
    {
        return;
    }
    if (NOT ((ref iParam0->_fU8->_fU4) == 0))
    {
        if ((ref iParam0->_fU8->_fU4) <= 15)
        {
            ref iParam0->_fU8->_fU4 = 15;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 30)
        {
            ref iParam0->_fU8->_fU4 = 30;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 45)
        {
            ref iParam0->_fU8->_fU4 = 45;
        }
        else
        {
            ref iParam0->_fU8->_fU4 = 0;
            ref iParam0->_fU8->_fU0++;
        };;;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_23962( iParam0 + 0 );
    }
    return;
}

void sub_23830(int iParam0, int iParam1, int iParam2)
{
    ref iParam0->_fU8->_fU4 += iParam2;
    ref iParam0->_fU8->_fU0 += iParam1;
    while ((ref iParam0->_fU8->_fU4) >= 60)
    {
        ref iParam0->_fU8->_fU4 -= 60;
        ref iParam0->_fU8->_fU0++;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_23962( iParam0 + 0 );
    }
    return;
}

void sub_23962(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_23993( iParam0->_fU4 )))
    {
        iParam0->_fU0 = 1;
        iParam0->_fU4++;
        if (iParam0->_fU4 > 12)
        {
            iParam0->_fU4 = 1;
        }
    }
    return;
}

int sub_23993(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: return 31;
        case 4:
        case 6:
        case 9:
        case 11: return 30;
        case 2: return 28;
    }
    return 30;
}

void sub_24423(unknown uParam0)
{
    sub_24434( uParam0 );
    return;
}

void sub_24434(unknown uParam0)
{
    ADD_SCORE( sub_1079(), uParam0 );
    sub_24459( uParam0 );
    return;
}

void sub_24459(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_598( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_24699()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 39;
    uVar3 = sub_478( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_24423( 100 );
        sub_23777( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 2:
        sub_24423( 200 );
        sub_23777( ref g_U34048[uVar3]._fU8, 168, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3:
        sub_24423( 500 );
        break;
        default: sub_598( "Interactions_Brian_Pass: Unknown Brian Sequence - tell Keith" );
    }
    return;
}

void sub_24958()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 40;
    uVar3 = sub_478( iVar2 );
    sub_23777( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_24423( 0 );
        break;
        default: sub_598( "Interactions_Cherise_Pass: Unknown Cherise Sequence - tell Keith" );
    }
    return;
}

void sub_25141()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 48;
    uVar3 = sub_478( iVar2 );
    sub_23777( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_24423( 0 );
        break;
        default: sub_598( "Interactions_Clarence_Pass: Unknown Clarence Sequence - tell Keith" );
    }
    return;
}

void sub_25326()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 41;
    uVar3 = sub_478( iVar2 );
    sub_23777( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_24423( 0 );
        break;
        case 2:
        sub_24423( 0 );
        break;
        default: sub_598( "Interactions_Eddie_Pass: Unknown Eddie Sequence - tell Keith" );
    }
    return;
}

void sub_25522()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 42;
    uVar3 = sub_478( iVar2 );
    sub_23777( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_24423( 0 );
        break;
        default: sub_598( "Interactions_Gracie_Pass: Unknown Gracie Sequence - tell Keith" );
    }
    return;
}

void sub_25703()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 43;
    uVar3 = sub_478( iVar2 );
    sub_23777( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_24423( 500 );
        break;
        default: sub_598( "Interactions_Hossan_Pass: Unknown Hossan Sequence - tell Keith" );
    }
    return;
}

void sub_25886()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 44;
    uVar3 = sub_478( iVar2 );
    sub_23777( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_24423( 0 );
        break;
        default: sub_598( "Interactions_Ilyena_Pass: Unknown Ilyena Sequence - tell Keith" );
    }
    return;
}

void sub_26067()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 45;
    uVar3 = sub_478( iVar2 );
    sub_23777( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_24423( 1000 );
        break;
        default: sub_598( "Interactions_Ivan_Pass: Unknown Ivan Sequence - tell Keith" );
    }
    return;
}

void sub_26246()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 46;
    uVar3 = sub_478( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_24423( 1000 );
        sub_26333( ref g_U34048[uVar3]._fU8 );
        g_U34048[uVar3]._fU24 = 1;
        break;
        case 2:
        sub_24423( 5000 );
        sub_23777( ref g_U34048[uVar3]._fU8, 96, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3: break;
        default: sub_598( "Interactions_Jeff_Pass: Unknown Jeff Sequence - tell Keith" );
    }
    return;
}

void sub_26333(int iParam0)
{
    sub_26346( iParam0 + 0 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    return;
}

void sub_26346(int iParam0)
{
    GET_CURRENT_DATE( iParam0 + 0, iParam0 + 4 );
    return;
}

void sub_26557()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 47;
    uVar3 = sub_478( iVar2 );
    sub_23777( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_24423( 0 );
        break;
        case 2:
        sub_24423( 0 );
        break;
        default: sub_598( "Interactions_Marnie_Pass: Unknown Marnie Sequence - tell Keith" );
    }
    return;
}

void sub_26757()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 49;
    uVar3 = sub_478( iVar2 );
    sub_23777( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_24423( 500 );
        break;
        default: sub_598( "Interactions_Mel_Pass: Unknown Mel Sequence - tell Keith" );
    }
    return;
}

void sub_26934()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 50;
    uVar3 = sub_478( iVar2 );
    sub_23777( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_24423( 0 );
        break;
        case 2:
        sub_24423( 0 );
        break;
        default: sub_598( "Interactions_Pathos_Pass: Unknown Pathos Sequence - tell Keith" );
    }
    return;
}

void sub_27132()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 51;
    uVar3 = sub_478( iVar2 );
    sub_23777( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_24423( 0 );
        break;
        case 2:
        sub_24423( 1000 );
        break;
        default: sub_598( "Interactions_Sara_Pass: Unknown Sara Sequence - tell Keith" );
    }
    return;
}

void sub_27407()
{
    g_U9914._fU0 = 1;
    g_U9914._fU4 = 0;
    g_U9914._fU8 = 0;
    g_U9914._fU12 = 0;
    g_U9914._fU16 = 0;
    g_U9914._fU20 = 0;
    g_U9914._fU24 = 7;
    return;
}

void sub_27480()
{
    sub_27489();
    StrCopy( ref g_U9926, "RIPASS", 16 );
    return;
}

void sub_27489()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_27581(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_478( uParam0 );
    g_U34048[uVar3]._fU28 = 99;
    g_U34048[uVar3]._fU4 = 0;
    sub_5776( ref g_U34048[uVar3]._fU8 );
    g_U34048[uVar3]._fU24 = 0;
    sub_27662( uParam0 );
    return;
}

void sub_27662(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (g_U0)
    {
        return;
    }
    iVar3 = 10;
    switch (uParam0)
    {
        case 38:
        iVar3 = 0;
        break;
        case 39:
        iVar3 = 1;
        break;
        case 41:
        iVar3 = 2;
        break;
        case 42:
        iVar3 = 3;
        break;
        case 43:
        iVar3 = 4;
        break;
        case 44:
        iVar3 = 5;
        break;
        case 47:
        iVar3 = 6;
        break;
        case 49:
        iVar3 = 7;
        break;
        case 50:
        iVar3 = 8;
        break;
        case 51:
        iVar3 = 9;
        break;
        case 40:
        case 45:
        case 48:
        case 46: return;
    }
    return;
    iVar4 = 0;
    if (NOT g_U64848[iVar3]._fU0)
    {
        iVar4 = ProtectedGet(g_U64848[iVar3]._fU8);
        if (iVar4 > 0)
        {
            sub_27941( 5, iVar4 );
            g_U64848[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_27941(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_28123( 0 );
    return;
}

void sub_28123(boolean bParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    boolean bVar7;
    int I;

    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    fVar6 = 0.00000000;
    bVar7 = true;
    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        if (g_U32871[I]._fU4 == g_U32871[I]._fU0)
        {
            fVar4 = g_U32871[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U32871[I]._fU0 );
            fVar6 = TO_FLOAT( g_U32871[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U32871[I]._fU8;
        }
        fVar3 += fVar4;
    }
    if (fVar3 > 100.00000000)
    {
        fVar3 = 99.99000000;
    }
    if (bVar7)
    {
        fVar3 = 100.00000000;
    }
    SET_FLOAT_STAT( 0, fVar3 );
    if (bVar7)
    {
        sub_28378();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_28378()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}
