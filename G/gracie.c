void main()
{
    l_U0 = 0;
    l_U1 = 1;
    l_U2 = 3;
    l_U4 = 0;
    l_U5 = 0;
    l_U6 = 0;
    l_U7 = 0;
    l_U8 = 0;
    l_U9 = 0;
    l_U10 = 0;
    l_U11 = 0;
    l_U12 = 0;
    l_U13 = 0;
    l_U38 = {-1511.26200000, 263.08500000, 12.62270000};
    l_U44 = 0;
    l_U45 = 0;
    l_U50 = 1;
    l_U60 = 42;
    l_U61 = 0;
    l_U62 = 300.42410000;
    l_U63 = 0;
    l_U64 = 0;
    l_U66 = 17.00000000;
    l_U70 = {2.00000000, 0.00000000, 0.00000000};
    l_U73 = 0.55000000;
    l_U74 = 1;
    l_U75 = 12.00000000;
    l_U76 = 0.50000000;
    l_U77 = 2.00000000;
    l_U78 = 0;
    l_U79 = 0;
    l_U80 = 0;
    if (sub_244( l_U60, l_U50 ))
    {
        if (IS_PLAYER_PLAYING( sub_945() ))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_945(), 0 )))
            {
                if (HAS_DEATHARREST_EXECUTED())
                {
                    sub_1019();
                }
                while (true)
                {
                    WAIT( 0 );
                    if (NOT l_U9)
                    {
                        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
                        {
                            if (sub_1923())
                            {
                                WAIT( 0 );
                            }
                            else if (g_U10978)
                            {
                                sub_1019();
                            }
                            if (NOT sub_2099())
                            {
                                sub_1019();
                            }
                            switch (l_U5)
                            {
                                case 0:
                                sub_2182();
                                break;
                                case 1:
                                sub_2948();
                                break;
                            }
                        }
                        else
                        {
                            sub_1019();
                        }
                        sub_7231();
                    }
                    if (l_U9)
                    {
                        switch (l_U6)
                        {
                            case 0:
                            sub_7337();
                            break;
                            default:
                        }
                    }
                }
            }
            else if (NOT g_U65019)
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_1932() )))
                {
                    if (sub_3026() < 25)
                    {
                        CLEAR_PRINTS();
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
                if (IS_HINT_RUNNING())
                {
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U14, 0, 0, 0 );
                }
                g_U65019 = 1;
            }
            sub_1019();;
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

void sub_244(unknown uParam0, unknown uParam1)
{
    if (sub_253())
    {
        return 0;
    }
    return sub_300( uParam0, uParam1 );
}

int sub_253()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

boolean sub_300(unknown uParam0, int iParam1)
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
    uVar4 = sub_344( uParam0 );
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
        if (sub_621( g_U34048[uVar4]._fU8 ))
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

int sub_344(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_355( uParam0 )))
    {
        sub_464( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 38;
}

int sub_355(unknown uParam0)
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

void sub_464(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_621(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_790( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_790(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

void sub_945()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1019()
{
    if (sub_1038( l_U60, l_U50 ))
    {
        sub_1134( l_U60, l_U50 );
        CLEAR_HELP();
        if (IS_PLAYER_PLAYING( sub_945() ))
        {
            SET_PLAYER_CONTROL( sub_945(), 1 );
        }
        sub_1604();
    }
    if (NOT (IS_CHAR_INJURED( l_U14 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U14 );
    }
    REMOVE_BLIP( l_U23 );
    REMOVE_BLIP( l_U24 );
    REMOVE_BLIP( l_U25 );
    REMOVE_BLIP( l_U26 );
    REMOVE_BLIP( l_U27 );
    REMOVE_BLIP( l_U28 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U15 );
    l_U15 = nil;
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U16 );
    l_U16 = nil;
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U17 );
    l_U17 = nil;
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U18 );
    l_U18 = nil;
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U19 );
    l_U19 = nil;
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U14 );
    l_U14 = nil;
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    CLEAR_NAMED_CUTSCENE( "rpmobd1" );
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_1038(int iParam0, int iParam1)
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

void sub_1134(unknown uParam0, unknown uParam1)
{
    if (NOT (sub_1038( uParam0, uParam1 )))
    {
        sub_464( "Interactions_Ended: Interaction for this character not active" );
        return;
    }
    sub_1230();
    if (g_U813)
    {
        sub_1322();
    }
    else
    {
        sub_1440();
    }
    g_U10978 = 0;
    return;
}

void sub_1230()
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

void sub_1322()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1368();
    return;
}

void sub_1368()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1440()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1486();
    return;
}

void sub_1486()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1604()
{
    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    return;
}

int sub_1923()
{
    if (IS_CHAR_IN_ANY_CAR( sub_1932() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1932(), ref l_U20 );
        if (NOT (l_U20 == nil))
        {
            if (IS_VEH_DRIVEABLE( l_U20 ))
            {
                GET_CAR_SPEED( l_U20, ref l_U46 );
                if (l_U46 > 15)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_1932()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_2099()
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

void sub_2182()
{
    switch (l_U4)
    {
        case 0:
        l_U29 = {-1509.68900000, 267.00310000, 12.40340000};
        l_U59 = -357652594;
        REQUEST_MODEL( l_U59 );
        REQUEST_MODEL( -2030171296 );
        REQUEST_ANIMS( "missgracie" );
        while ((NOT (HAS_MODEL_LOADED( l_U59 ))) || (NOT (HAS_MODEL_LOADED( -2030171296 ))))
        {
            WAIT( 0 );
        }
        while (NOT (HAVE_ANIMS_LOADED( "missgracie" )))
        {
            WAIT( 0 );
        }
        OPEN_SEQUENCE_TASK( ref l_U58 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "smoke_default", "missgracie", 8.00000000, 1, 0, 0, 0, 0 );
        CLOSE_SEQUENCE_TASK( l_U58 );
        l_U4 = 1;
        break;
        case 1:
        if (NOT l_U10)
        {
            if (NOT (sub_2484( -1509.60200000, 261.48380000, 12.37330000, 10.00000000 )))
            {
                CLEAR_AREA( -1509.60200000, 261.48380000, 12.37330000, 10.00000000, 1 );
                CLEAR_AREA_OF_CHARS( -1514.61800000, 262.99510000, 15.06200000, 2.00000000 );
                CREATE_CHAR( 26, l_U59, l_U29._fU0, l_U29._fU4, l_U29._fU8, ref l_U14, 1 );
                SET_CHAR_HEADING( l_U14, l_U62 );
                SET_CHAR_NEVER_TARGETTED( l_U14, 1 );
                SET_CHAR_CANT_BE_DRAGGED_OUT( l_U14, 1 );
                if (NOT (IS_CHAR_DEAD( l_U14 )))
                {
                    TASK_PERFORM_SEQUENCE( l_U14, l_U58 );
                    CLEAR_SEQUENCE_TASK( l_U58 );
                }
                CREATE_CAR( -2030171296, l_U38._fU0, l_U38._fU4, l_U38._fU8, ref l_U21, 1 );
                SET_CAR_HEADING( l_U21, 274.88950000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U21 );
                CHANGE_CAR_COLOUR( l_U21, 156, 161 );
                SET_CAR_IN_CUTSCENE( l_U21, 1 );
                SET_EXTRA_CAR_COLOURS( l_U21, 163, 0 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( -2030171296 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U14, 1 );
                l_U10 = 1;
                if (NOT (DOES_BLIP_EXIST( l_U23 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U14, ref l_U23 );
                    CHANGE_BLIP_SPRITE( l_U23, 64 );
                    SET_BLIP_AS_FRIENDLY( l_U23, 1 );
                    CHANGE_BLIP_SCALE( l_U23, 1.00000000 );
                    CHANGE_BLIP_DISPLAY( l_U23, 2 );
                }
            }
        }
        if (l_U10)
        {
            l_U5 = 1;
        }
        break;
    }
    return;
}

int sub_2484(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0, uParam1, uParam2, uParam3 ))
    {
        return 1;
    }
    return 0;
}

void sub_2948()
{
    if (IS_CHAR_IN_ANY_CAR( sub_1932() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1932(), ref l_U20 );
        if (NOT (l_U20 == l_U22))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U22 );
            l_U22 = l_U20;
            SET_CAR_AS_MISSION_CAR( l_U22 );
        }
    }
    if ((sub_3026() < 25) AND (IS_CHAR_ON_FOOT( sub_1932() )))
    {
        sub_3254( ref l_U14, ref l_U65, ref l_U29, ref l_U62, ref l_U64, 1.10000000, "smoke_default", "missGRACIE" );
    }
    switch (l_U7)
    {
        case 0:
        if ((((IS_CHAR_INJURED( l_U14 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U14, sub_1932(), 0 ))) || (IS_CHAR_ON_FIRE( l_U14 ))) || (IS_WANTED_LEVEL_GREATER( sub_945(), 0 )))
        {
            if (IS_WANTED_LEVEL_GREATER( sub_945(), 0 ))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_1932() )))
                {
                    if (sub_3026() < 25)
                    {
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
            }
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U14, 0, 0, 0 );
            }
            sub_1019();
        }
        if (NOT (IS_CHAR_INJURED( l_U14 )))
        {
            if ((sub_3026() < 18) AND (IS_CHAR_ON_FOOT( sub_1932() )))
            {
                if ((NOT IS_HINT_RUNNING()) AND (NOT l_U63))
                {
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U14, 0, 0, 6000 );
                    TASK_LOOK_AT_CHAR( l_U14, sub_1932(), -2, 0 );
                    l_U63 = 1;
                }
                l_U7 = 1;
            }
        }
        break;
        case 1:
        if ((((IS_CHAR_INJURED( l_U14 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U14, sub_1932(), 0 ))) || (IS_CHAR_ON_FIRE( l_U14 ))) || (IS_WANTED_LEVEL_GREATER( sub_945(), 0 )))
        {
            if (IS_WANTED_LEVEL_GREATER( sub_945(), 0 ))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_1932() )))
                {
                    if (sub_3026() < 25)
                    {
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
            }
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U14, 0, 0, 0 );
            }
            sub_1019();
        }
        if ((sub_3026() < 5.00000000) || ((sub_4075( ref l_U21 )) < 5.00000000))
        {
            if (IS_CHAR_ON_FOOT( sub_1932() ))
            {
                if (NOT (IS_CHAR_INJURED( l_U14 )))
                {
                    if (sub_4265( 1, 1 ))
                    {
                        if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U14, sub_1932(), 0 )))
                        {
                            if (NOT (IS_CHAR_ON_FIRE( l_U14 )))
                            {
                                if (NOT (IS_WANTED_LEVEL_GREATER( sub_945(), 0 )))
                                {
                                    if (sub_2099())
                                    {
                                        SET_MISSION_FLAG( 1 );
                                        SET_PLAYER_CONTROL( sub_945(), 0 );
                                        DO_SCREEN_FADE_OUT( 100 );
                                        while (NOT IS_SCREEN_FADED_OUT())
                                        {
                                            WAIT( 0 );
                                        }
                                        l_U7 = 2;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (sub_3026() > 18)
        {
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U14, 0, 0, 0 );
            }
            l_U7 = 0;
        }
        break;
        case 2:
        PRINTSTRING( "IN START_INTERPOLATION" );
        PRINTNL();
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U14, 0, 0, 0 );
        }
        CLEAR_WANTED_LEVEL( sub_945() );
        CLEAR_PRINTS();
        LOAD_ADDITIONAL_TEXT( "PIGAUD", 6 );
        CLEAR_NAMED_CUTSCENE( "rpmobd1" );
        START_CUTSCENE_NOW( "rpmobd1" );
        sub_4910( l_U60, l_U50 );
        l_U9 = 1;
        break;
    }
    return;
}

void sub_3026()
{
    if (NOT (IS_CHAR_DEAD( l_U14 )))
    {
        GET_CHAR_COORDINATES( sub_1932(), ref l_U32._fU0, ref l_U32._fU4, ref l_U32._fU8 );
        GET_CHAR_COORDINATES( l_U14, ref l_U35._fU0, ref l_U35._fU4, ref l_U35._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( l_U32._fU0, l_U32._fU4, l_U32._fU8, l_U35._fU0, l_U35._fU4, l_U35._fU8, ref l_U44 );
        return l_U44;
    }
    return l_U44;
}

void sub_3254(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
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

void sub_4075(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            GET_CHAR_COORDINATES( sub_1932(), ref l_U32._fU0, ref l_U32._fU4, ref l_U32._fU8 );
            GET_DISTANCE_BETWEEN_COORDS_3D( l_U32._fU0, l_U32._fU4, l_U32._fU8, l_U38._fU0, l_U38._fU4, l_U38._fU8, ref l_U45 );
            return l_U45;
        }
    }
    return l_U45;
}

int sub_4265(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_1932() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1932(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_1932() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1932(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_1932()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_1932() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1932() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_945() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_945() )))
    {
        return 0;
    }
    return 1;
}

void sub_4910(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (g_U10978)
    {
        sub_464( "Interactions_Started: Already on a mission" );
        return;
    }
    uVar4 = sub_344( uParam0 );
    if (g_U34175._fU4)
    {
        sub_464( "Interactions_Started: Another interaction is already taking place" );
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
        sub_464( "Interactions_Started: This Random Character has been set to NOT allowToActivate" );
        return;
    }
    g_U34175._fU4 = 1;
    g_U34175._fU8 = uParam0;
    g_U34175._fU12 = uParam1;
    sub_5273();
    sub_6044( g_U34048[uVar4]._fU32 );
    g_U34048[uVar4]._fU32 = 0;
    sub_6188( uParam0, uParam1 );
    g_U10978 = 1;
    return;
}

void sub_5273()
{
    sub_5282();
    sub_5385( ref g_U9893._fU68 );
    sub_5434();
    return;
}

void sub_5282()
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

void sub_5385(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_5434()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_5472( 1, g_U569[I] )) == 0)
        {
            sub_5723( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_5901())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_5472(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_5723(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_5808( g_U569 - 1 );
    return;
}

void sub_5808(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_5901()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_5472( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_6044(int iParam0)
{
    g_U34175._fU16._fU4 += iParam0;
    sub_6078();
    INCREMENT_INT_STAT( 286, iParam0 );
    return;
}

void sub_6078()
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

void sub_6188(unknown uParam0, int iParam1)
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
    sub_7034( cVar4 );
    return;
}

void sub_7034(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

int sub_7231()
{
    if (IS_HINT_RUNNING())
    {
        if ((sub_3026() > 30) || (sub_1923()))
        {
            HINT_CAM( l_U29._fU0, l_U29._fU4, l_U29._fU8, 0, 0, 0, 0 );
            return 1;
        }
    }
    return 0;
}

void sub_7337()
{
    switch (l_U8)
    {
        case 0:
        PRINTSTRING( "IN LOAD_MOCAP" );
        PRINTNL();
        CLEAR_HELP();
        if (DOES_VEHICLE_EXIST( l_U22 ))
        {
            if (IS_VEH_DRIVEABLE( l_U22 ))
            {
                SET_CAR_AS_MISSION_CAR( l_U22 );
                SET_CAR_COORDINATES( l_U22, -1502.15900000, 269.20540000, 11.75400000 );
                SET_CAR_HEADING( l_U22, 179.58270000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U22 );
                SET_CAR_IN_CUTSCENE( l_U22, 1 );
            }
        }
        CLEAR_AREA( l_U29._fU0, l_U29._fU4, l_U29._fU8, 10.00000000, 1 );
        CLEAR_AREA_OF_CHARS( -1514.61800000, 262.99510000, 15.06200000, 2.00000000 );
        DELETE_CHAR( ref l_U14 );
        GET_CHAR_COORDINATES( sub_1932(), ref l_U32._fU0, ref l_U32._fU4, ref l_U32._fU8 );
        SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
        SWITCH_PED_PATHS_OFF( l_U32._fU0 - 5.00000000, l_U32._fU4 - 5.00000000, l_U32._fU8 - 5.00000000, l_U32._fU0 + 5.00000000, l_U32._fU4 + 5.00000000, l_U32._fU8 + 5.00000000 );
        CLEAR_AREA( l_U32._fU0, l_U32._fU4, l_U32._fU8, 100.00000000, 1 );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U51 );
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "rpmobd1" );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U59 );
        SET_CHAR_COORDINATES( sub_1932(), l_U32._fU0, l_U32._fU4, l_U32._fU8 - 1.00000000 );
        if (NOT (IS_CHAR_INJURED( sub_1932() )))
        {
            SET_CHAR_COORDINATES( sub_1932(), -1503.20100000, 265.93300000, 11.48940000 );
            SET_CHAR_HEADING( sub_1932(), 80.71560000 );
            SET_CAM_BEHIND_PED( sub_1932() );
        }
        sub_7939();
        LOAD_ADDITIONAL_TEXT( "WI_GRAC", 0 );
        SET_CAM_BEHIND_PED( sub_1932() );
        SET_GAME_CAM_HEADING( 0.00000000 );
        LOAD_SCENE( l_U32._fU0, l_U32._fU4, l_U32._fU8 );
        l_U8 = 1;
        break;
        case 1:
        SET_WANTED_MULTIPLIER( 0.00000000 );
        CLEAR_HELP();
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1932(), 0 );
        SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SWITCH_PED_PATHS_ON( l_U32._fU0 - 5.00000000, l_U32._fU4 - 5.00000000, l_U32._fU8 - 5.00000000, l_U32._fU0 + 5.00000000, l_U32._fU4 + 5.00000000, l_U32._fU8 + 5.00000000 );
        DO_SCREEN_FADE_IN( 250 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        SET_PLAYER_CONTROL_ADVANCED( sub_945(), 1, 1, 1 );
        l_U8 = 2;
        break;
        case 2:
        sub_9396();
        if (NOT l_U13)
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                PRINT_NOW( "GRA1_PMT1", 7500, 1 );
                l_U13 = 1;
            }
        }
        if ((IS_CHAR_INJURED( l_U15 )) || (IS_CHAR_DEAD( l_U15 )))
        {
            REMOVE_BLIP( l_U24 );
        }
        if ((IS_CHAR_INJURED( l_U16 )) || (IS_CHAR_DEAD( l_U16 )))
        {
            REMOVE_BLIP( l_U25 );
        }
        if ((IS_CHAR_INJURED( l_U17 )) || (IS_CHAR_DEAD( l_U17 )))
        {
            REMOVE_BLIP( l_U26 );
        }
        if ((IS_CHAR_INJURED( l_U18 )) || (IS_CHAR_DEAD( l_U18 )))
        {
            REMOVE_BLIP( l_U27 );
        }
        if (NOT (IS_CHAR_INJURED( l_U19 )))
        {
            GET_CHAR_COORDINATES( l_U19, ref l_U67._fU0, ref l_U67._fU4, ref l_U67._fU8 );
            PRINTFLOAT( l_U67._fU8 );
            PRINTNL();
            if (l_U67._fU8 < l_U66)
            {
                SET_CHAR_HEALTH( l_U19, 90 );
                SET_CHAR_PROOFS( l_U19, 0, 0, 0, 0, 0 );
                SET_PED_DIES_WHEN_INJURED( l_U19, 1 );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U19 )))
        {
            if (((NOT l_U78) AND (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U19, sub_1932(), 1 ))) AND (NOT (IS_CHAR_INJURED( l_U19 ))))
            {
                SET_CHAR_PROOFS( l_U19, 1, 0, 0, 0, 0 );
                CLEAR_CHAR_TASKS( l_U19 );
                SWITCH_PED_TO_RAGDOLL( l_U19, 0, 30000, 1, 1, 1, 0 );
                CREATE_NM_MESSAGE( 1, 79 );
                SEND_NM_MESSAGE( l_U19 );
                l_U78 = 1;
            }
            if (((l_U78) AND (NOT l_U79)) AND (NOT (IS_CHAR_INJURED( l_U19 ))))
            {
                CREATE_NM_MESSAGE( 1, 114 );
                SET_NM_MESSAGE_VEC3( 116, l_U70._fU0, l_U70._fU4, l_U70._fU8 );
                SET_NM_MESSAGE_FLOAT( 117, l_U73 );
                SET_NM_MESSAGE_BOOL( 118, l_U74 );
                SEND_NM_MESSAGE( l_U19 );
                l_U79 = 1;
            }
            if ((((l_U78) AND (l_U79)) AND (NOT l_U80)) AND (NOT (IS_CHAR_INJURED( l_U19 ))))
            {
                CREATE_NM_MESSAGE( 1, 289 );
                SET_NM_MESSAGE_FLOAT( 291, l_U75 );
                SET_NM_MESSAGE_FLOAT( 292, l_U76 );
                SET_NM_MESSAGE_FLOAT( 293, l_U77 );
                SEND_NM_MESSAGE( l_U19 );
                l_U80 = 1;
            }
        }
        else if (DOES_BLIP_EXIST( l_U28 ))
        {
            REMOVE_BLIP( l_U28 );
        }
        if ((sub_10564( ref l_U15 )) > 100.00000000)
        {
            CLEAR_PRINTS();
            PRINT_NOW( "GRA1_PMT21", 4000, 1 );
            sub_10749();
        }
        else if ((sub_10564( ref l_U16 )) > 100.00000000)
        {
            CLEAR_PRINTS();
            PRINT_NOW( "GRA1_PMT21", 4000, 1 );
            sub_10749();
        }
        else if ((sub_10564( ref l_U17 )) > 100.00000000)
        {
            CLEAR_PRINTS();
            PRINT_NOW( "GRA1_PMT21", 4000, 1 );
            sub_10749();
        }
        else if ((sub_10564( ref l_U18 )) > 100.00000000)
        {
            CLEAR_PRINTS();
            PRINT_NOW( "GRA1_PMT21", 4000, 1 );
            sub_10749();
        }
        else if ((sub_10564( ref l_U19 )) > 100.00000000)
        {
            CLEAR_PRINTS();
            PRINT_NOW( "GRA1_PMT21", 4000, 1 );
            sub_10749();
        };;;;;
        if (((((IS_CHAR_INJURED( l_U15 )) AND (IS_CHAR_INJURED( l_U16 ))) AND (IS_CHAR_INJURED( l_U17 ))) AND (IS_CHAR_INJURED( l_U18 ))) AND (IS_CHAR_INJURED( l_U19 )))
        {
            sub_11166();
        }
        break;
    }
    return;
}

void sub_7939()
{
    REQUEST_MODEL( 897868981 );
    REQUEST_MODEL( 1846597315 );
    REQUEST_MODEL( -196312163 );
    while (((NOT (HAS_MODEL_LOADED( 1846597315 ))) || (NOT (HAS_MODEL_LOADED( -196312163 )))) || (NOT (HAS_MODEL_LOADED( 897868981 ))))
    {
        WAIT( 0 );
    }
    if (NOT l_U12)
    {
        SET_RELATIONSHIP( 5, 23, 0 );
        CREATE_CHAR( 7, 897868981, -1517.28800000, 268.71190000, 11.63070000, ref l_U15, 1 );
        SET_CHAR_MONEY( l_U15, 400 );
        SET_CHAR_MAX_TIME_IN_WATER( l_U15, 20.00000000 );
        SET_CHAR_MAX_TIME_UNDERWATER( l_U15, 10.00000000 );
        SET_CHAR_HEADING( l_U15, 180.00000000 );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U52 );
        SET_COMBAT_DECISION_MAKER( l_U15, l_U52 );
        SET_CHAR_WILL_USE_COVER( l_U15, 1 );
        SET_CHAR_RELATIONSHIP( l_U15, 5, 0 );
        CREATE_CHAR( 7, 897868981, -1527.04300000, 270.72550000, 11.63010000, ref l_U16, 1 );
        SET_CHAR_MONEY( l_U16, 400 );
        SET_CHAR_HEADING( l_U16, 180.00000000 );
        SET_CHAR_MAX_TIME_IN_WATER( l_U16, 20.00000000 );
        SET_CHAR_MAX_TIME_UNDERWATER( l_U16, 10.00000000 );
        LOAD_COMBAT_DECISION_MAKER( 8, ref l_U53 );
        SET_COMBAT_DECISION_MAKER( l_U16, l_U53 );
        SET_CHAR_WILL_USE_COVER( l_U16, 1 );
        SET_CHAR_RELATIONSHIP( l_U16, 5, 0 );
        CREATE_CHAR( 7, 897868981, -1537.11000000, 258.75000000, 12.70000000, ref l_U17, 1 );
        SET_CHAR_MONEY( l_U17, 400 );
        SET_CHAR_HEADING( l_U17, 180.00000000 );
        SET_CHAR_MAX_TIME_IN_WATER( l_U17, 20.00000000 );
        SET_CHAR_MAX_TIME_UNDERWATER( l_U17, 10.00000000 );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U54 );
        SET_COMBAT_DECISION_MAKER( l_U17, l_U54 );
        SET_CHAR_WILL_USE_COVER( l_U17, 1 );
        SET_CHAR_RELATIONSHIP( l_U17, 5, 0 );
        CREATE_CHAR( 7, 897868981, -1522.60000000, 259.25270000, 11.77090000, ref l_U18, 1 );
        SET_CHAR_MONEY( l_U18, 400 );
        SET_CHAR_HEADING( l_U18, 180.00000000 );
        SET_CHAR_MAX_TIME_IN_WATER( l_U18, 20.00000000 );
        SET_CHAR_MAX_TIME_UNDERWATER( l_U18, 10.00000000 );
        LOAD_COMBAT_DECISION_MAKER( 2, ref l_U55 );
        SET_COMBAT_DECISION_MAKER( l_U18, l_U55 );
        SET_CHAR_WILL_USE_COVER( l_U18, 1 );
        SET_CHAR_RELATIONSHIP( l_U18, 5, 0 );
        CREATE_CHAR( 7, 897868981, -1514.20200000, 262.66080000, 18.28530000, ref l_U19, 1 );
        SET_CHAR_MONEY( l_U19, 400 );
        SET_CHAR_HEADING( l_U19, 292.13220000 );
        SET_CHAR_MAX_TIME_IN_WATER( l_U19, 20.00000000 );
        SET_CHAR_MAX_TIME_UNDERWATER( l_U19, 10.00000000 );
        SET_PED_DIES_WHEN_INJURED( l_U19, 1 );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U56 );
        SET_COMBAT_DECISION_MAKER( l_U19, l_U56 );
        SET_CHAR_RELATIONSHIP( l_U19, 5, 0 );
        SET_CHAR_WILL_USE_COVER( l_U19, 0 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U15, 23 );
        GIVE_WEAPON_TO_CHAR( l_U15, 7, 150, 0 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U16, 23 );
        GIVE_WEAPON_TO_CHAR( l_U16, 13, 150, 0 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U17, 23 );
        GIVE_WEAPON_TO_CHAR( l_U17, 7, 150, 0 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U18, 23 );
        GIVE_WEAPON_TO_CHAR( l_U18, 11, 150, 0 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U19, 23 );
        GIVE_WEAPON_TO_CHAR( l_U19, 7, 150, 0 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U15 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U16 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U17 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U18 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U19 );
        ADD_BLIP_FOR_CHAR( l_U15, ref l_U24 );
        ADD_BLIP_FOR_CHAR( l_U16, ref l_U25 );
        ADD_BLIP_FOR_CHAR( l_U17, ref l_U26 );
        ADD_BLIP_FOR_CHAR( l_U18, ref l_U27 );
        ADD_BLIP_FOR_CHAR( l_U19, ref l_U28 );
        CHANGE_BLIP_DISPLAY( l_U24, 4 );
        CHANGE_BLIP_DISPLAY( l_U25, 4 );
        CHANGE_BLIP_DISPLAY( l_U26, 4 );
        CHANGE_BLIP_DISPLAY( l_U27, 4 );
        CHANGE_BLIP_DISPLAY( l_U28, 4 );
        l_U12 = 1;
        MARK_MODEL_AS_NO_LONGER_NEEDED( 897868981 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1846597315 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1708842493 );
    }
    return;
}

void sub_9396()
{
    if (NOT l_U11)
    {
        switch (l_U61)
        {
            case 0:
            SETTIMERB( 0 );
            GET_CHAR_COORDINATES( sub_1932(), ref l_U47, ref l_U48, ref l_U49 );
            OPEN_SEQUENCE_TASK( ref l_U57 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U47, l_U48, l_U49, 4, -2, 1.50000000 );
            CLOSE_SEQUENCE_TASK( l_U57 );
            if (NOT (IS_CHAR_INJURED( l_U19 )))
            {
                SET_CHAR_IS_TARGET_PRIORITY( l_U19, 1 );
            }
            if (NOT (IS_CHAR_INJURED( l_U18 )))
            {
                SET_CHAR_IS_TARGET_PRIORITY( l_U18, 1 );
                TASK_PERFORM_SEQUENCE( l_U18, l_U57 );
            }
            l_U61++;
            break;
            case 1:
            if (TIMERB() > 500)
            {
                if (NOT (IS_CHAR_INJURED( l_U16 )))
                {
                    SET_CHAR_IS_TARGET_PRIORITY( l_U16, 1 );
                    TASK_PERFORM_SEQUENCE( l_U16, l_U57 );
                }
                l_U61++;
            }
            break;
            case 2:
            if (TIMERB() > 1000)
            {
                if (NOT (IS_CHAR_INJURED( l_U17 )))
                {
                    SET_CHAR_IS_TARGET_PRIORITY( l_U17, 1 );
                    TASK_PERFORM_SEQUENCE( l_U17, l_U57 );
                }
                l_U61++;
            }
            break;
            case 3:
            if (TIMERB() > 1500)
            {
                if (NOT (IS_CHAR_INJURED( l_U15 )))
                {
                    SET_CHAR_IS_TARGET_PRIORITY( l_U15, 1 );
                    TASK_PERFORM_SEQUENCE( l_U15, l_U57 );
                }
                CLEAR_SEQUENCE_TASK( l_U57 );
                l_U11 = 1;
            }
            break;
        }
    }
    return;
}

void sub_10564(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        GET_CHAR_COORDINATES( sub_1932(), ref l_U32._fU0, ref l_U32._fU4, ref l_U32._fU8 );
        GET_CHAR_COORDINATES( (uParam0^), ref l_U41._fU0, ref l_U41._fU4, ref l_U41._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_2D( l_U32._fU0, l_U32._fU4, l_U41._fU0, l_U41._fU4, ref l_U44 );
        return l_U44;
    }
    return l_U44;
}

void sub_10749()
{
    g_U64750++;
    if (g_U64750 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_945(), 150 );
        SAY_AMBIENT_SPEECH( sub_1932(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    else
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_945(), 150 );
    }
    sub_1019();
    return;
}

void sub_11166()
{
    CLEAR_WANTED_LEVEL( sub_945() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 50 );
    sub_11202( l_U60 );
    sub_1019();
    return;
}

void sub_11202(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_344( uParam0 );
    sub_11222( uParam0 );
    sub_15196( uParam0 );
    return;
}

void sub_11222(unknown uParam0)
{
    switch (uParam0)
    {
        case 38:
        sub_11352();
        break;
        case 39:
        sub_12314();
        break;
        case 40:
        sub_12573();
        break;
        case 48:
        sub_12756();
        break;
        case 41:
        sub_12941();
        break;
        case 42:
        sub_13137();
        break;
        case 43:
        sub_13318();
        break;
        case 44:
        sub_13501();
        break;
        case 45:
        sub_13682();
        break;
        case 46:
        sub_13861();
        break;
        case 47:
        sub_14172();
        break;
        case 49:
        sub_14372();
        break;
        case 50:
        sub_14549();
        break;
        case 51:
        sub_14747();
        break;
        default: sub_464( "Interactions_Pass: Unknown Random Interaction Character ID - tell Keith" );
    }
    sub_15022();
    sub_15095();
    return;
}

void sub_11352()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 38;
    uVar3 = sub_344( iVar2 );
    sub_11392( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_12038( 500 );
        break;
        default: sub_464( "Interactions_Badman_Pass: Unknown Badman Sequence - tell Keith" );
    }
    return;
}

void sub_11392(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_11445( iParam0, uParam1, uParam2 );
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
        sub_11577( iParam0 + 0 );
    }
    return;
}

void sub_11445(int iParam0, int iParam1, int iParam2)
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
        sub_11577( iParam0 + 0 );
    }
    return;
}

void sub_11577(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_11608( iParam0->_fU4 )))
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

int sub_11608(unknown uParam0)
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

void sub_12038(unknown uParam0)
{
    sub_12049( uParam0 );
    return;
}

void sub_12049(unknown uParam0)
{
    ADD_SCORE( sub_945(), uParam0 );
    sub_12074( uParam0 );
    return;
}

void sub_12074(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_464( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_12314()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 39;
    uVar3 = sub_344( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_12038( 100 );
        sub_11392( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 2:
        sub_12038( 200 );
        sub_11392( ref g_U34048[uVar3]._fU8, 168, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3:
        sub_12038( 500 );
        break;
        default: sub_464( "Interactions_Brian_Pass: Unknown Brian Sequence - tell Keith" );
    }
    return;
}

void sub_12573()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 40;
    uVar3 = sub_344( iVar2 );
    sub_11392( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_12038( 0 );
        break;
        default: sub_464( "Interactions_Cherise_Pass: Unknown Cherise Sequence - tell Keith" );
    }
    return;
}

void sub_12756()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 48;
    uVar3 = sub_344( iVar2 );
    sub_11392( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_12038( 0 );
        break;
        default: sub_464( "Interactions_Clarence_Pass: Unknown Clarence Sequence - tell Keith" );
    }
    return;
}

void sub_12941()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 41;
    uVar3 = sub_344( iVar2 );
    sub_11392( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_12038( 0 );
        break;
        case 2:
        sub_12038( 0 );
        break;
        default: sub_464( "Interactions_Eddie_Pass: Unknown Eddie Sequence - tell Keith" );
    }
    return;
}

void sub_13137()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 42;
    uVar3 = sub_344( iVar2 );
    sub_11392( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_12038( 0 );
        break;
        default: sub_464( "Interactions_Gracie_Pass: Unknown Gracie Sequence - tell Keith" );
    }
    return;
}

void sub_13318()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 43;
    uVar3 = sub_344( iVar2 );
    sub_11392( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_12038( 500 );
        break;
        default: sub_464( "Interactions_Hossan_Pass: Unknown Hossan Sequence - tell Keith" );
    }
    return;
}

void sub_13501()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 44;
    uVar3 = sub_344( iVar2 );
    sub_11392( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_12038( 0 );
        break;
        default: sub_464( "Interactions_Ilyena_Pass: Unknown Ilyena Sequence - tell Keith" );
    }
    return;
}

void sub_13682()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 45;
    uVar3 = sub_344( iVar2 );
    sub_11392( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_12038( 1000 );
        break;
        default: sub_464( "Interactions_Ivan_Pass: Unknown Ivan Sequence - tell Keith" );
    }
    return;
}

void sub_13861()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 46;
    uVar3 = sub_344( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_12038( 1000 );
        sub_13948( ref g_U34048[uVar3]._fU8 );
        g_U34048[uVar3]._fU24 = 1;
        break;
        case 2:
        sub_12038( 5000 );
        sub_11392( ref g_U34048[uVar3]._fU8, 96, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3: break;
        default: sub_464( "Interactions_Jeff_Pass: Unknown Jeff Sequence - tell Keith" );
    }
    return;
}

void sub_13948(int iParam0)
{
    sub_13961( iParam0 + 0 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    return;
}

void sub_13961(int iParam0)
{
    GET_CURRENT_DATE( iParam0 + 0, iParam0 + 4 );
    return;
}

void sub_14172()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 47;
    uVar3 = sub_344( iVar2 );
    sub_11392( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_12038( 0 );
        break;
        case 2:
        sub_12038( 0 );
        break;
        default: sub_464( "Interactions_Marnie_Pass: Unknown Marnie Sequence - tell Keith" );
    }
    return;
}

void sub_14372()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 49;
    uVar3 = sub_344( iVar2 );
    sub_11392( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_12038( 500 );
        break;
        default: sub_464( "Interactions_Mel_Pass: Unknown Mel Sequence - tell Keith" );
    }
    return;
}

void sub_14549()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 50;
    uVar3 = sub_344( iVar2 );
    sub_11392( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_12038( 0 );
        break;
        case 2:
        sub_12038( 0 );
        break;
        default: sub_464( "Interactions_Pathos_Pass: Unknown Pathos Sequence - tell Keith" );
    }
    return;
}

void sub_14747()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 51;
    uVar3 = sub_344( iVar2 );
    sub_11392( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_12038( 0 );
        break;
        case 2:
        sub_12038( 1000 );
        break;
        default: sub_464( "Interactions_Sara_Pass: Unknown Sara Sequence - tell Keith" );
    }
    return;
}

void sub_15022()
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

void sub_15095()
{
    sub_15104();
    StrCopy( ref g_U9926, "RIPASS", 16 );
    return;
}

void sub_15104()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_15196(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_344( uParam0 );
    g_U34048[uVar3]._fU28 = 99;
    g_U34048[uVar3]._fU4 = 0;
    sub_5385( ref g_U34048[uVar3]._fU8 );
    g_U34048[uVar3]._fU24 = 0;
    sub_15277( uParam0 );
    return;
}

void sub_15277(unknown uParam0)
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
            sub_15556( 5, iVar4 );
            g_U64848[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_15556(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_15738( 0 );
    return;
}

void sub_15738(boolean bParam0)
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
        sub_15993();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_15993()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}
