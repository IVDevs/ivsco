void main()
{
    l_U0 = 0;
    l_U1 = 1;
    l_U2 = 3;
    l_U102 = 0;
    l_U103 = 0;
    l_U104 = 0;
    l_U105 = 0;
    l_U106 = 0;
    l_U107 = 0;
    l_U108 = 0;
    l_U109 = 0;
    l_U110 = 0;
    l_U111 = 0;
    l_U112 = 0;
    l_U113 = 0;
    ProtectedSet(l_U114, 0);
    ProtectedSet(l_U115, 0);
    l_U116 = 0;
    l_U117 = 0;
    ProtectedSet(l_U178, 0.00000000);
    ProtectedSet(l_U179, 0.00000000);
    l_U196 = 0;
    l_U197 = 0;
    l_U198 = 0;
    l_U199 = 0;
    l_U200 = 0;
    l_U201 = 0;
    l_U202 = 0;
    l_U203 = 0;
    l_U205 = 0;
    l_U206 = 0;
    l_U207 = 0;
    l_U208 = 0;
    l_U209 = 0;
    l_U210 = 1;
    l_U211 = 0;
    l_U212 = 0;
    l_U213 = 0;
    l_U228 = {24.14020000, -45.73810000, 13.65970000};
    l_U231 = {19.53240000, -38.38760000, 13.81180000};
    l_U234 = 0;
    l_U238 = 2;
    l_U239 = 100;
    l_U240 = 1;
    l_U262 = 47;
    l_U263 = 290.27470000;
    l_U264 = 0;
    l_U266 = 0;
    l_U281 = 0;
    l_U284 = 0;
    l_U285 = 0;
    l_U286 = 0;
    if (sub_374( l_U262, l_U238 ))
    {
        if (IS_PLAYER_PLAYING( sub_1075() ))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_1075(), 0 )))
            {
                if (HAS_DEATHARREST_EXECUTED())
                {
                    sub_1154( ref l_U250, 0 );
                    sub_1154( ref l_U256, 0 );
                    sub_1288();
                }
                while (true)
                {
                    WAIT( 0 );
                    if (NOT l_U202)
                    {
                        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
                        {
                            if (IS_SCORE_GREATER( sub_1075(), 1 ))
                            {
                                if (sub_2184())
                                {
                                    WAIT( 0 );
                                }
                                else if (g_U10978)
                                {
                                    sub_1288();
                                }
                                if (NOT sub_2332())
                                {
                                    sub_1288();
                                }
                                switch (l_U197)
                                {
                                    case 0:
                                    sub_2417();
                                    break;
                                    case 1:
                                    sub_3156();
                                    break;
                                }
                            }
                            else
                            {
                                sub_1288();
                            }
                        }
                        else
                        {
                            sub_1288();
                        }
                        sub_7610();
                    }
                    if (l_U202)
                    {
                        switch (l_U198)
                        {
                            case 0:
                            sub_7726();
                            break;
                            default:
                        }
                    }
                }
            }
            else if (NOT g_U65019)
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_2065() )))
                {
                    if (sub_3335() < 25)
                    {
                        CLEAR_PRINTS();
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
                if (IS_HINT_RUNNING())
                {
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U214, 0, 0, 0 );
                }
                g_U65019 = 1;
            }
            sub_1288();;
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

void sub_374(unknown uParam0, unknown uParam1)
{
    if (sub_383())
    {
        return 0;
    }
    return sub_430( uParam0, uParam1 );
}

int sub_383()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

boolean sub_430(unknown uParam0, int iParam1)
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
    uVar4 = sub_474( uParam0 );
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
        if (sub_751( g_U34048[uVar4]._fU8 ))
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

int sub_474(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_485( uParam0 )))
    {
        sub_594( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 38;
}

int sub_485(unknown uParam0)
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

void sub_594(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_751(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_920( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_920(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

void sub_1075()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1154(int iParam0, unknown uParam1)
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

void sub_1288()
{
    if (sub_1307( l_U262, l_U238 ))
    {
        sub_1403( l_U262, l_U238 );
        CLEAR_HELP();
        if (IS_PLAYER_PLAYING( sub_1075() ))
        {
            SET_PLAYER_CONTROL( sub_1075(), 1 );
        }
        sub_1873();
    }
    if (DOES_CHAR_EXIST( l_U214 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U214 )))
        {
            FREEZE_CHAR_POSITION( l_U214, 0 );
            CLEAR_CHAR_TASKS( l_U214 );
        }
        else
        {
            REMOVE_CHAR_ELEGANTLY( ref l_U214 );
        }
    }
    CLEAR_NAMED_CUTSCENE( "rpmar2" );
    REMOVE_BLIP( l_U217 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U214 );
    l_U214 = nil;
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2065(), 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_1307(int iParam0, int iParam1)
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

void sub_1403(unknown uParam0, unknown uParam1)
{
    if (NOT (sub_1307( uParam0, uParam1 )))
    {
        sub_594( "Interactions_Ended: Interaction for this character not active" );
        return;
    }
    sub_1499();
    if (g_U813)
    {
        sub_1591();
    }
    else
    {
        sub_1709();
    }
    g_U10978 = 0;
    return;
}

void sub_1499()
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

void sub_1591()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1637();
    return;
}

void sub_1637()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1709()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1755();
    return;
}

void sub_1755()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1873()
{
    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    return;
}

void sub_2065()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_2184()
{
    if (IS_CHAR_IN_ANY_CAR( sub_2065() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2065(), ref l_U216 );
        if (NOT (l_U216 == nil))
        {
            if (IS_VEH_DRIVEABLE( l_U216 ))
            {
                GET_CAR_SPEED( l_U216, ref l_U235 );
                if (l_U235 > 15)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_2332()
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

void sub_2417()
{
    switch (l_U196)
    {
        case 0:
        l_U219 = {-555.52000000, 913.86500000, 8.93350000};
        l_U236 = 411185872;
        REQUEST_MODEL( l_U236 );
        REQUEST_ANIMS( "MISSMARNIE2" );
        while ((NOT (HAS_MODEL_LOADED( l_U236 ))) || (NOT (HAVE_ANIMS_LOADED( "MISSMARNIE2" ))))
        {
            WAIT( 0 );
        }
        OPEN_SEQUENCE_TASK( ref l_U243 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U231._fU0, l_U231._fU4, l_U231._fU8, 2, -2, 1.50000000 );
        CLOSE_SEQUENCE_TASK( l_U243 );
        l_U196 = 1;
        break;
        case 1:
        if (NOT l_U203)
        {
            SWITCH_PED_PATHS_OFF( l_U219._fU0 - 10.00000000, l_U219._fU4 - 10.00000000, l_U219._fU8 - 5.00000000, l_U219._fU0 + 10.00000000, l_U219._fU4 + 10.00000000, l_U219._fU8 + 5.00000000 );
            CLEAR_AREA( -548.77390000, 926.17850000, 9.94060000, 10.00000000, 1 );
            CREATE_CHAR( 26, l_U236, l_U219._fU0, l_U219._fU4, l_U219._fU8, ref l_U214, 1 );
            SET_CHAR_HEADING( l_U214, l_U263 );
            SET_CHAR_COORDINATES( l_U214, l_U219._fU0, l_U219._fU4, l_U219._fU8 );
            SET_CHAR_NEVER_TARGETTED( l_U214, 1 );
            SET_CHAR_CANT_BE_DRAGGED_OUT( l_U214, 1 );
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U214, 1 );
            if (NOT (DOES_BLIP_EXIST( l_U217 )))
            {
                ADD_BLIP_FOR_CHAR( l_U214, ref l_U217 );
                CHANGE_BLIP_SPRITE( l_U217, 64 );
                SET_BLIP_AS_FRIENDLY( l_U217, 1 );
                CHANGE_BLIP_SCALE( l_U217, 1.00000000 );
                CHANGE_BLIP_DISPLAY( l_U217, 2 );
            }
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U214, 1 );
            l_U203 = 1;
        }
        else if (NOT (IS_CHAR_INJURED( l_U214 )))
        {
            TASK_PLAY_ANIM( l_U214, "lean_idle_a", "MISSMARNIE2", 8.00000000, 1, 0, 0, 0, -2 );
            if (NOT (IS_CHAR_ON_SCREEN( l_U214 )))
            {
                CLEAR_AREA( l_U219._fU0, l_U219._fU4, l_U219._fU8, 10.00000000, 1 );
            }
            l_U197 = 1;
        }
        break;
    }
    return;
}

void sub_3156()
{
    if ((IS_CHAR_INJURED( l_U214 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U214, sub_2065(), 0 )))
    {
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U214, 0, 0, 0 );
        }
        sub_1288();
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2065() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2065(), ref l_U216 );
        if (NOT (l_U216 == l_U215))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U215 );
            l_U215 = l_U216;
            SET_VEH_HAS_STRONG_AXLES( l_U215, 1 );
        }
    }
    if ((sub_3335() < 25) AND (IS_CHAR_ON_FOOT( sub_2065() )))
    {
        sub_3572( ref l_U214, ref l_U265, ref l_U219, ref l_U263, ref l_U266, 1.10000000, "lean_idle_a", "missMARNIE2", 0, 1 );
    }
    switch (l_U199)
    {
        case 0:
        if ((((IS_CHAR_INJURED( l_U214 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U214, sub_2065(), 0 ))) || (IS_CHAR_ON_FIRE( l_U214 ))) || (IS_WANTED_LEVEL_GREATER( sub_1075(), 0 )))
        {
            if (IS_WANTED_LEVEL_GREATER( sub_1075(), 0 ))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_2065() )))
                {
                    if (sub_3335() < 25)
                    {
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
            }
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U214, 0, 0, 0 );
            }
            sub_1288();
        }
        if (NOT (IS_CHAR_INJURED( l_U214 )))
        {
            if ((sub_3335() < 18) AND (IS_CHAR_ON_FOOT( sub_2065() )))
            {
                if ((NOT IS_HINT_RUNNING()) AND (NOT l_U264))
                {
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U214, 0, 0, 6000 );
                    TASK_LOOK_AT_CHAR( l_U214, sub_2065(), -2, 0 );
                    l_U264 = 1;
                }
                l_U199 = 1;
            }
        }
        break;
        case 1:
        if ((((IS_CHAR_INJURED( l_U214 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U214, sub_2065(), 0 ))) || (IS_CHAR_ON_FIRE( l_U214 ))) || (IS_WANTED_LEVEL_GREATER( sub_1075(), 0 )))
        {
            if (IS_WANTED_LEVEL_GREATER( sub_1075(), 0 ))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_2065() )))
                {
                    if (sub_3335() < 25)
                    {
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
            }
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U214, 0, 0, 0 );
            }
            sub_1288();
        }
        if (sub_3335() < 4.00000000)
        {
            if (IS_CHAR_ON_FOOT( sub_2065() ))
            {
                if (NOT (IS_CHAR_INJURED( l_U214 )))
                {
                    if (sub_4497( 1, 1 ))
                    {
                        if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U214, sub_2065(), 0 )))
                        {
                            if (NOT (IS_CHAR_ON_FIRE( l_U214 )))
                            {
                                if (NOT (IS_WANTED_LEVEL_GREATER( sub_1075(), 0 )))
                                {
                                    if (sub_2332())
                                    {
                                        SET_MISSION_FLAG( 1 );
                                        SET_PLAYER_CONTROL( sub_1075(), 0 );
                                        DO_SCREEN_FADE_OUT( 100 );
                                        while (NOT IS_SCREEN_FADED_OUT())
                                        {
                                            WAIT( 0 );
                                        }
                                        l_U199 = 2;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (sub_3335() > 18)
        {
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U214, 0, 0, 0 );
            }
            l_U199 = 0;
        }
        break;
        case 2:
        CLEAR_WANTED_LEVEL( sub_1075() );
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U214, 0, 0, 0 );
        }
        CLEAR_PRINTS();
        LOAD_ADDITIONAL_TEXT( "PIMAAUD", 6 );
        sub_5072();
        CLEAR_NAMED_CUTSCENE( "rpmar2" );
        START_CUTSCENE_NOW( "rpmar2" );
        SET_GROUP_SEPARATION_RANGE( sub_5214(), 30.00000000 );
        sub_5277( l_U262, l_U238 );
        l_U202 = 1;
        break;
    }
    return;
}

void sub_3335()
{
    if (NOT (IS_CHAR_DEAD( l_U214 )))
    {
        GET_CHAR_COORDINATES( sub_2065(), ref l_U222._fU0, ref l_U222._fU4, ref l_U222._fU8 );
        GET_CHAR_COORDINATES( l_U214, ref l_U225._fU0, ref l_U225._fU4, ref l_U225._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( l_U222._fU0, l_U222._fU4, l_U222._fU8, l_U225._fU0, l_U225._fU4, l_U225._fU8, ref l_U234 );
        return l_U234;
    }
    return l_U234;
}

void sub_3572(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, boolean bParam9)
{
    int iVar12;

    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (NOT (uParam4^))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( (uParam0^), iParam2->_fU0, iParam2->_fU4, iParam2->_fU8, uParam5, uParam5, 1.80000000, 0 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 1 );
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
            GET_SCRIPT_TASK_STATUS( (uParam0^), 29, ref iVar12 );
            if (iVar12 == 7)
            {
                PRINTSTRING( "fail 1" );
                PRINTNL();
                if (bParam9)
                {
                    TASK_PLAY_ANIM( (uParam0^), uParam6, uParam7, 8.00000000, 1, 0, 0, 0, -2 );
                }
                (uParam4^) = 0;
                if (bParam8)
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 0 );
                }
            }
        }
    }
    return;
}

int sub_4497(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_2065() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2065(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_2065() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2065(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2065()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2065() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2065() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_1075() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_1075() )))
    {
        return 0;
    }
    return 1;
}

void sub_5072()
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

void sub_5214()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_5277(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (g_U10978)
    {
        sub_594( "Interactions_Started: Already on a mission" );
        return;
    }
    uVar4 = sub_474( uParam0 );
    if (g_U34175._fU4)
    {
        sub_594( "Interactions_Started: Another interaction is already taking place" );
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
        sub_594( "Interactions_Started: This Random Character has been set to NOT allowToActivate" );
        return;
    }
    g_U34175._fU4 = 1;
    g_U34175._fU8 = uParam0;
    g_U34175._fU12 = uParam1;
    sub_5640();
    sub_6411( g_U34048[uVar4]._fU32 );
    g_U34048[uVar4]._fU32 = 0;
    sub_6555( uParam0, uParam1 );
    g_U10978 = 1;
    return;
}

void sub_5640()
{
    sub_5649();
    sub_5752( ref g_U9893._fU68 );
    sub_5801();
    return;
}

void sub_5649()
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

void sub_5752(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_5801()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_5839( 1, g_U569[I] )) == 0)
        {
            sub_6090( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_6268())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_5839(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_6090(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_6175( g_U569 - 1 );
    return;
}

void sub_6175(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_6268()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_5839( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_6411(int iParam0)
{
    g_U34175._fU16._fU4 += iParam0;
    sub_6445();
    INCREMENT_INT_STAT( 286, iParam0 );
    return;
}

void sub_6445()
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

void sub_6555(unknown uParam0, int iParam1)
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
    sub_7401( cVar4 );
    return;
}

void sub_7401(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

int sub_7610()
{
    if (IS_HINT_RUNNING())
    {
        if ((sub_3335() > 30) || (sub_2184()))
        {
            HINT_CAM( l_U219._fU0, l_U219._fU4, l_U219._fU8, 0, 0, 0, 0 );
            return 1;
        }
    }
    return 0;
}

void sub_7726()
{
    if (IS_CHAR_DEAD( l_U214 ))
    {
        PRINT_NOW( "MRN2_PMT41", 7500, 1 );
        sub_1154( ref l_U256, 0 );
        sub_1154( ref l_U244, 0 );
        sub_7805( 47, l_U214, 28 );
        sub_7855();
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2065() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2065(), ref l_U216 );
        if (NOT (l_U216 == l_U215))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U215 );
            l_U215 = l_U216;
            SET_CAR_AS_MISSION_CAR( l_U215 );
            SET_VEH_HAS_STRONG_AXLES( l_U215, 1 );
        }
    }
    if (l_U210)
    {
        if (NOT (IS_CHAR_INJURED( sub_2065() )))
        {
            if (IS_VEH_DRIVEABLE( l_U215 ))
            {
                if (IS_CHAR_IN_CAR( sub_2065(), l_U215 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U214 )))
                    {
                        if (IS_CHAR_IN_CAR( l_U214, l_U215 ))
                        {
                            if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                            {
                                if (g_U64739 == 0)
                                {
                                    if (sub_8262( l_U244 ))
                                    {
                                        sub_8308( "PIMA2_BANT1", ref l_U244, 6, 1 );
                                    }
                                }
                                else if (g_U64739 == 1)
                                {
                                    if (sub_8262( l_U244 ))
                                    {
                                        sub_8308( "PIMA2_BANT2", ref l_U244, 6, 1 );
                                    }
                                }
                            }
                            l_U207 = 1;
                        }
                        else if (sub_9361( l_U244 ))
                        {
                            sub_9532( ref l_U244 );
                        }
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U214 )))
                {
                    if (IS_CHAR_IN_CAR( l_U214, l_U215 ))
                    {
                        if (sub_9361( l_U244 ))
                        {
                            sub_9532( ref l_U244 );
                        }
                    }
                    else if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                    {
                        if (sub_3335() < 10.00000000)
                        {
                            if (g_U64739 == 0)
                            {
                                if (sub_8262( l_U244 ))
                                {
                                    sub_8308( "PIMA2_BANT1", ref l_U244, 6, 1 );
                                }
                            }
                            else if (g_U64739 == 1)
                            {
                                if (sub_8262( l_U244 ))
                                {
                                    sub_8308( "PIMA2_BANT2", ref l_U244, 6, 1 );
                                }
                            }
                        }
                        else if (sub_9361( l_U244 ))
                        {
                            sub_9532( ref l_U244 );
                        }
                    }
                }
            }
        }
    }
    if (l_U212)
    {
        if (NOT (IS_CHAR_INJURED( l_U214 )))
        {
            if (NOT (IS_GROUP_MEMBER( l_U214, sub_5214() )))
            {
                l_U210 = 0;
                if (DOES_BLIP_EXIST( l_U217 ))
                {
                    if (sub_3335() < 12.00000000)
                    {
                        REMOVE_BLIP( l_U217 );
                        SET_GROUP_MEMBER( sub_5214(), l_U214 );
                        l_U210 = 1;
                        if (NOT (IS_CHAR_INJURED( l_U214 )))
                        {
                            if ((NOT (IS_CHAR_INJURED( sub_2065() ))) AND (NOT (IS_CHAR_IN_ANY_CAR( sub_2065() ))))
                            {
                                if (NOT l_U281)
                                {
                                    PRINT( "MRN2_PMT3", 7500, 1 );
                                    l_U281 = 1;
                                }
                            }
                            l_U281 = 0;
                            if (NOT (DOES_BLIP_EXIST( l_U218 )))
                            {
                                ADD_BLIP_FOR_COORD( l_U228._fU0, l_U228._fU4, l_U228._fU8, ref l_U218 );
                                SET_ROUTE( l_U218, 1 );
                            }
                            CLEAR_PRINTS();
                            PRINT( "MRN2_PMT91", 7500, 1 );
                        }
                    }
                }
                else if (DOES_BLIP_EXIST( l_U218 ))
                {
                    REMOVE_BLIP( l_U218 );
                }
                if (NOT (DOES_BLIP_EXIST( l_U217 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U214, ref l_U217 );
                    SET_ROUTE( l_U217, 1 );
                    SET_BLIP_AS_FRIENDLY( l_U217, 1 );
                }
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "MRN2_PMT11" )))
                {
                    CLEAR_PRINTS();
                    PRINT( "MRN2_PMT11", 7500, 1 );
                }
            }
        }
    }
    switch (l_U200)
    {
        case 0:
        CLEAR_HELP();
        REMOVE_BLIP( l_U217 );
        if (DOES_VEHICLE_EXIST( l_U215 ))
        {
            if (NOT (IS_CAR_DEAD( l_U215 )))
            {
                SET_CAR_AS_MISSION_CAR( l_U215 );
                SET_CAR_COORDINATES( l_U215, -549.03720000, 928.84440000, 8.83540000 );
                SET_CAR_HEADING( l_U215, 272.40960000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U215 );
                SET_CAR_IN_CUTSCENE( l_U215, 1 );
            }
        }
        DELETE_CHAR( ref l_U214 );
        SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
        CLEAR_AREA( l_U219._fU0, l_U219._fU4, l_U219._fU8, 100.00000000, 1 );
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "rpmar2" );
        CREATE_CHAR( 26, l_U236, l_U219._fU0, l_U219._fU4, l_U219._fU8, ref l_U214, 1 );
        SET_CHAR_MAX_TIME_IN_WATER( l_U214, 20.00000000 );
        SET_CHAR_MAX_TIME_UNDERWATER( l_U214, 10.00000000 );
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2065(), 0 );
        SET_CHAR_HEADING( l_U214, 271.95890000 );
        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U214, 1 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U236 );
        SET_CHAR_SUFFERS_CRITICAL_HITS( l_U214, 0 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U214, 1 );
        SET_CHAR_COORDINATES( sub_2065(), -553.84920000, 913.21200000, 8.93350000 );
        SET_CHAR_HEADING( sub_2065(), 77.64170000 );
        SET_PED_DIES_WHEN_INJURED( l_U214, 1 );
        SET_CHAR_NEVER_TARGETTED( l_U214, 1 );
        sub_11208( "PIMA2AD" );
        sub_11327( 0, sub_2065(), "NIKO", 0 );
        sub_11327( 1, l_U214, "PI_MARLENE", 0 );
        LOAD_ADDITIONAL_TEXT( "WI_MRN2", 0 );
        l_U200 = 1;
        break;
        case 1:
        SET_CAM_BEHIND_PED( sub_2065() );
        SET_PLAYER_CONTROL_ADVANCED( sub_1075(), 1, 1, 1 );
        SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SWITCH_PED_PATHS_ON( l_U219._fU0 - 10.00000000, l_U219._fU4 - 10.00000000, l_U219._fU8 - 5.00000000, l_U219._fU0 + 10.00000000, l_U219._fU4 + 10.00000000, l_U219._fU8 + 5.00000000 );
        LOAD_SCENE( l_U219._fU0, l_U219._fU4, l_U219._fU8 );
        DO_SCREEN_FADE_IN( 250 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        if (NOT (IS_CHAR_DEAD( l_U214 )))
        {
            CLEAR_CHAR_TASKS( l_U214 );
            TASK_LOOK_AT_CHAR( l_U214, sub_2065(), -2, 0 );
            if (NOT l_U208)
            {
                if (sub_11803( "PIMA2_GO", ref l_U256, 6, 1 ))
                {
                    WAIT( 250 );
                    l_U208 = 1;
                    l_U201 = 0;
                    l_U200 = 2;
                }
            }
        }
        break;
        case 2:
        if (NOT (sub_9361( l_U256 )))
        {
            CLEAR_PRINTS();
            l_U208 = 0;
            l_U200 = 3;
        }
        break;
        case 3:
        if (NOT l_U281)
        {
            PRINT( "MRN2_PMT3", 7500, 1 );
            l_U281 = 1;
        }
        if (NOT (IS_CHAR_INJURED( sub_2065() )))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_2065() ))
            {
                if (NOT (IS_CHAR_INJURED( l_U214 )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U214, 0 );
                }
                CLEAR_PRINTS();
                l_U212 = 1;
                l_U200 = 4;
            }
            else
            {
                l_U212 = 0;
            }
        }
        break;
        case 4:
        if (NOT (IS_CHAR_INJURED( l_U214 )))
        {
            MODIFY_CHAR_MOVE_STATE( l_U214, 2 );
        }
        if (NOT (IS_CHAR_INJURED( l_U214 )))
        {
            if (IS_CHAR_IN_ANY_CAR( l_U214 ))
            {
                l_U200 = 5;
            }
        }
        break;
        case 5:
        if (l_U207)
        {
            if (NOT l_U208)
            {
                if (NOT (IS_CHAR_INJURED( l_U214 )))
                {
                    TASK_LOOK_AT_CHAR( l_U214, sub_2065(), 0, 0 );
                }
                WAIT( 3000 );
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    GENERATE_RANDOM_INT_IN_RANGE( l_U240, l_U239, ref l_U241 );
                    if (g_U64739 == 0)
                    {
                        if (sub_11803( "PIMA2_BANT1", ref l_U244, 6, 1 ))
                        {
                            l_U208 = 1;
                        }
                    }
                    else if (g_U64739 == 1)
                    {
                        if (sub_11803( "PIMA2_BANT2", ref l_U244, 6, 1 ))
                        {
                            l_U208 = 1;
                        }
                    }
                    else if (g_U64739 == 2)
                    {
                        SAY_AMBIENT_SPEECH( l_U214, "listen_to_radio", 0, 0, 0 );
                        l_U208 = 1;
                    };;;
                }
            }
        }
        if ((DOES_VEHICLE_EXIST( l_U215 )) AND (NOT (IS_VEH_DRIVEABLE( l_U215 ))))
        {
            SET_CAR_ENGINE_ON( l_U215, 0, 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U214 )))
        {
            if (IS_GROUP_MEMBER( l_U214, sub_5214() ))
            {
                if ((LOCATE_CHAR_ANY_MEANS_3D( sub_2065(), l_U228._fU0, l_U228._fU4, l_U228._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1 )) AND (sub_4497( 1, 1 )))
                {
                    if (sub_9361( l_U244 ))
                    {
                        sub_1154( ref l_U244, 0 );
                    }
                    l_U212 = 0;
                    if (IS_CHAR_IN_ANY_CAR( sub_2065() ))
                    {
                        if (NOT (IS_CAR_UPSIDEDOWN( l_U215 )))
                        {
                            GET_CAR_MODEL( l_U215, ref l_U237 );
                            if (DOES_BLIP_EXIST( l_U218 ))
                            {
                                REMOVE_BLIP( l_U218 );
                            }
                            SET_PLAYER_CONTROL( sub_1075(), 0 );
                            if (IS_THIS_MODEL_A_HELI( l_U237 ))
                            {
                                if (NOT (IS_CHAR_INJURED( sub_2065() )))
                                {
                                    GET_CHAR_HEIGHT_ABOVE_GROUND( sub_2065(), ref l_U283 );
                                }
                                DO_SCREEN_FADE_OUT( 250 );
                                while (NOT IS_SCREEN_FADED_OUT())
                                {
                                    WAIT( 0 );
                                }
                                CLEAR_AREA( 22.12860000, -49.74600000, 13.84180000, 15.00000000, 1 );
                                CLEAR_AREA_OF_CARS( l_U228._fU0, l_U228._fU4, l_U228._fU8, 30.00000000 );
                                if (NOT (IS_CAR_DEAD( l_U215 )))
                                {
                                    SET_CAR_COORDINATES( l_U215, 20.40450000, -52.26450000, 13.84030000 );
                                    SET_CAR_HEADING( l_U215, 0.78980000 );
                                    if (NOT (IS_CAR_DEAD( l_U215 )))
                                    {
                                        FREEZE_CAR_POSITION( l_U215, 1 );
                                    }
                                }
                            }
                            else if (IS_THIS_MODEL_A_BIKE( l_U237 ))
                            {
                                l_U285 = 1;
                                while ((NOT (sub_13015( l_U215 ))) || (NOT (sub_13090( sub_2065() ))))
                                {
                                    WAIT( 0 );
                                }
                                DO_SCREEN_FADE_OUT( 250 );
                                while (NOT IS_SCREEN_FADED_OUT())
                                {
                                    WAIT( 0 );
                                }
                                CLEAR_AREA( 22.12860000, -49.74600000, 13.84180000, 15.00000000, 1 );
                                CLEAR_AREA_OF_CARS( l_U228._fU0, l_U228._fU4, l_U228._fU8, 30.00000000 );
                                if (NOT (IS_CAR_DEAD( l_U215 )))
                                {
                                    SET_CAR_COORDINATES( l_U215, l_U228._fU0, l_U228._fU4, l_U228._fU8 );
                                    SET_CAR_HEADING( l_U215, 270.00000000 );
                                    SET_CAR_ON_GROUND_PROPERLY( l_U215 );
                                    if (NOT (IS_CAR_DEAD( l_U215 )))
                                    {
                                        FREEZE_CAR_POSITION( l_U215, 1 );
                                    }
                                }
                                WAIT( 1500 );
                                if (NOT (IS_CAR_DEAD( l_U215 )))
                                {
                                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2065(), -1.10000000, 0.60000000, -0.50000000, ref l_U278._fU0, ref l_U278._fU4, ref l_U278._fU8 );
                                    GET_GROUND_Z_FOR_3D_COORD( l_U278._fU0, l_U278._fU4, l_U278._fU8, ref l_U242 );
                                    if (NOT (IS_CHAR_INJURED( l_U214 )))
                                    {
                                        if (IS_CHAR_IN_ANY_CAR( l_U214 ))
                                        {
                                            REMOVE_CHAR_FROM_GROUP( l_U214 );
                                            WARP_CHAR_FROM_CAR_TO_COORD( l_U214, l_U278._fU0, l_U278._fU4, l_U242 );
                                            SET_CHAR_HEADING( l_U214, 180.00000000 );
                                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U214, 1 );
                                        }
                                        else
                                        {
                                            SET_CHAR_COORDINATES( l_U214, l_U278._fU0, l_U278._fU4, l_U242 );
                                            SET_CHAR_HEADING( l_U214, 180.00000000 );
                                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U214, 1 );
                                        }
                                    }
                                }
                            }
                            else
                            {
                                DO_SCREEN_FADE_OUT( 250 );
                                while (NOT IS_SCREEN_FADED_OUT())
                                {
                                    WAIT( 0 );
                                }
                                CLEAR_AREA( 22.12860000, -49.74600000, 13.84180000, 15.00000000, 1 );
                                CLEAR_AREA_OF_CARS( l_U228._fU0, l_U228._fU4, l_U228._fU8, 30.00000000 );
                                if ((NOT (IS_CAR_DEAD( l_U215 ))) AND (NOT (IS_CHAR_INJURED( l_U214 ))))
                                {
                                    SET_CAR_COORDINATES( l_U215, 23.33770000, -46.18930000, 13.71800000 );
                                    SET_CAR_HEADING( l_U215, 274.86910000 );
                                    SET_CAR_ON_GROUND_PROPERLY( l_U215 );
                                    if (NOT (IS_CHAR_IN_ANY_CAR( l_U214 )))
                                    {
                                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U214, l_U215, 0 );
                                    }
                                }
                            }
                            if (((NOT l_U204) AND (NOT (IS_CHAR_INJURED( l_U214 )))) AND (NOT (IS_CHAR_INJURED( sub_2065() ))))
                            {
                                GET_PED_BONE_POSITION( l_U214, 1205, 0.00000000, 0.00000000, 0.00000000, ref l_U272 );
                                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2065(), 1.61000000, -5.65320000, -0.21580000, ref l_U275._fU0, ref l_U275._fU4, ref l_U275._fU8 );
                                BEGIN_CAM_COMMANDS( ref l_U267 );
                                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                                CREATE_CAM( 14, ref l_U268 );
                                SET_CAM_POS( l_U268, 27.71000000, -45.81000000, 14.96000000 );
                                SET_CAM_FOV( l_U268, 48.00000000 );
                                SET_CAM_ROT( l_U268, 5.50000000, -0.00000000, 88.04000000 );
                                SET_CAM_NEAR_DOF( l_U268, 0.10000000 );
                                SET_CAM_FAR_DOF( l_U268, 15.00000000 );
                                CREATE_CAM( 14, ref l_U269 );
                                SET_CAM_POS( l_U269, l_U275._fU0, l_U275._fU4, l_U275._fU8 );
                                SET_CAM_FOV( l_U269, 35.20000000 );
                                POINT_CAM_AT_COORD( l_U269, l_U272._fU0, l_U272._fU4, l_U272._fU8 );
                                SET_CAM_NEAR_DOF( l_U269, 0.10000000 );
                                SET_CAM_FAR_DOF( l_U269, 15.00000000 );
                                CREATE_CAM( 14, ref l_U270 );
                                SET_CAM_POS( l_U270, 26.48000000, -39.63000000, 14.62000000 );
                                SET_CAM_FOV( l_U270, 29.20000000 );
                                SET_CAM_ROT( l_U270, 4.41000000, 0.00000000, 165.60000000 );
                                SET_CAM_NEAR_DOF( l_U270, 0.10000000 );
                                SET_CAM_FAR_DOF( l_U270, 15.00000000 );
                                l_U204 = 1;
                            }
                            SET_WIDESCREEN_BORDERS( 1 );
                            SET_CAM_PROPAGATE( l_U268, 1 );
                            SET_CAM_ACTIVE( l_U268, 1 );
                            SET_USE_HIGHDOF( 1 );
                            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                            DO_SCREEN_FADE_IN( 250 );
                            while (NOT IS_SCREEN_FADED_IN())
                            {
                                WAIT( 0 );
                            }
                            l_U210 = 0;
                            l_U200 = 8;
                        }
                    }
                    else if (DOES_BLIP_EXIST( l_U218 ))
                    {
                        REMOVE_BLIP( l_U218 );
                        SET_WIDESCREEN_BORDERS( 1 );
                        SET_PLAYER_CONTROL( sub_1075(), 0 );
                        DO_SCREEN_FADE_OUT( 250 );
                        while (NOT IS_SCREEN_FADED_OUT())
                        {
                            WAIT( 0 );
                        }
                        CLEAR_AREA( 22.12860000, -49.74600000, 13.84180000, 15.00000000, 1 );
                        CLEAR_AREA_OF_CARS( l_U228._fU0, l_U228._fU4, l_U228._fU8, 30.00000000 );
                        if (((NOT l_U204) AND (NOT (IS_CHAR_INJURED( l_U214 )))) AND (NOT (IS_CHAR_INJURED( sub_2065() ))))
                        {
                            BEGIN_CAM_COMMANDS( ref l_U267 );
                            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                            CREATE_CAM( 14, ref l_U270 );
                            SET_CAM_POS( l_U270, 23.86000000, -44.89000000, 15.27000000 );
                            SET_CAM_FOV( l_U270, 52.50000000 );
                            SET_CAM_ROT( l_U270, -14.91000000, 0.00000000, 46.24000000 );
                            CREATE_CAM( 14, ref l_U271 );
                            SET_CAM_POS( l_U271, 23.63000000, -40.75000000, 15.64000000 );
                            SET_CAM_FOV( l_U271, 52.50000000 );
                            SET_CAM_ROT( l_U271, -15.83000000, 0.00000000, 142.06000000 );
                            l_U204 = 1;
                        }
                        if (NOT (IS_CHAR_INJURED( sub_2065() )))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2065() );
                            SET_CHAR_COORDINATES( sub_2065(), 22.90970000, -43.15000000, 13.81270000 );
                            SET_CHAR_HEADING( sub_2065(), 97 );
                            REMOVE_PED_HELMET( sub_2065(), 0 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U214 )))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U214 );
                            REMOVE_CHAR_FROM_GROUP( l_U214 );
                            SET_CHAR_COORDINATES( l_U214, 21.88090000, -43.18290000, 13.81270000 );
                            SET_CHAR_HEADING( l_U214, 277 );
                        }
                        if (DOES_VEHICLE_EXIST( l_U215 ))
                        {
                            if (NOT (IS_CAR_DEAD( l_U215 )))
                            {
                                SET_CAR_COORDINATES( l_U215, 6.17920000, -46.08270000, 13.71720000 );
                                SET_CAR_HEADING( l_U215, 91.86000000 );
                                SET_CAR_ON_GROUND_PROPERLY( l_U215 );
                            }
                        }
                        SET_CAM_PROPAGATE( l_U270, 1 );
                        SET_CAM_ACTIVE( l_U270, 1 );
                        SET_USE_HIGHDOF( 1 );
                        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                        l_U210 = 0;
                        DO_SCREEN_FADE_IN( 250 );
                        while (NOT IS_SCREEN_FADED_IN())
                        {
                            WAIT( 0 );
                        }
                        while (sub_3335() > 5.00000000)
                        {
                            WAIT( 0 );
                        }
                        l_U200 = 7;
                    }
                }
            }
        }
        break;
        case 7:
        if (l_U211 == 0)
        {
            SETTIMERA( 0 );
            l_U211 = 1;
        }
        if ((TIMERA() >= 2000) AND (sub_15313()))
        {
            if (NOT (IS_CAR_DEAD( l_U215 )))
            {
                if (IS_CHAR_IN_CAR( l_U214, l_U215 ))
                {
                    TASK_LEAVE_CAR( l_U214, l_U215 );
                    REMOVE_CHAR_FROM_GROUP( l_U214 );
                }
                else
                {
                    REMOVE_CHAR_FROM_GROUP( l_U214 );
                }
            }
            l_U213 = 1;
            SET_PLAYER_CONTROL_ADVANCED( sub_1075(), 1, 1, 1 );
            l_U200 = 10;
        }
        if (NOT l_U209)
        {
            if (sub_11803( "PIMA2_ARRIVE", ref l_U250, 6, 1 ))
            {
                l_U209 = 1;
            }
        }
        else if (NOT (sub_9361( l_U250 )))
        {
            l_U211 = 0;
            SET_CAM_PROPAGATE( l_U271, 1 );
            SET_CAM_ACTIVE( l_U271, 1 );
            SET_CAM_PROPAGATE( l_U270, 0 );
            SET_CAM_ACTIVE( l_U270, 0 );
            l_U200 = 9;
        }
        else if ((sub_15674( l_U250 )) == 1)
        {
            if (NOT l_U286)
            {
                if (NOT (IS_CHAR_INJURED( l_U214 )))
                {
                    TASK_PLAY_ANIM( l_U214, "take_obj", "missmarnie2", 8.00000000, 0, 0, 0, 0, -2 );
                }
                if (NOT (IS_CHAR_INJURED( sub_2065() )))
                {
                    TASK_PLAY_ANIM( sub_2065(), "give_obj", "missmarnie2", 8.00000000, 0, 0, 0, 0, -2 );
                }
                l_U286 = 1;
            }
        };;;
        break;
        case 8:
        if (l_U211 == 0)
        {
            l_U205 = 0;
            SETTIMERA( 0 );
            l_U211 = 1;
        }
        if ((TIMERA() >= 2000) AND (sub_15313()))
        {
            if (NOT (IS_CAR_DEAD( l_U215 )))
            {
                if (IS_CHAR_IN_CAR( l_U214, l_U215 ))
                {
                    TASK_LEAVE_CAR( l_U214, l_U215 );
                    REMOVE_CHAR_FROM_GROUP( l_U214 );
                }
                else
                {
                    REMOVE_CHAR_FROM_GROUP( l_U214 );
                }
            }
            l_U213 = 1;
            SET_PLAYER_CONTROL_ADVANCED( sub_1075(), 1, 1, 1 );
            l_U200 = 10;
        }
        if (NOT l_U209)
        {
            if (NOT (IS_CHAR_INJURED( sub_2065() )))
            {
                if (NOT (IS_CHAR_INJURED( l_U214 )))
                {
                    TASK_LOOK_AT_CHAR( sub_2065(), l_U214, -2, 0 );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U214 )))
            {
                if (NOT (IS_CHAR_INJURED( sub_2065() )))
                {
                    TASK_LOOK_AT_CHAR( l_U214, sub_2065(), -2, 0 );
                }
            }
            if (sub_11803( "PIMA2_ARRIVE", ref l_U250, 6, 1 ))
            {
                WAIT( 250 );
                l_U209 = 1;
            }
        }
        else if (NOT (sub_9361( l_U250 )))
        {
            l_U211 = 0;
            if (NOT l_U285)
            {
                if (NOT (IS_CAR_DEAD( l_U215 )))
                {
                    if (IS_CHAR_IN_CAR( l_U214, l_U215 ))
                    {
                        if (IS_THIS_MODEL_A_HELI( l_U237 ))
                        {
                            SET_CAM_PROPAGATE( l_U270, 1 );
                            SET_CAM_ACTIVE( l_U270, 1 );
                            SET_CAM_PROPAGATE( l_U268, 0 );
                            SET_CAM_ACTIVE( l_U268, 0 );
                            TASK_LEAVE_CAR( l_U214, l_U215 );
                            l_U200 = 9;
                        }
                        else
                        {
                            SET_CAM_PROPAGATE( l_U269, 1 );
                            SET_CAM_ACTIVE( l_U269, 1 );
                            SET_CAM_PROPAGATE( l_U268, 0 );
                            SET_CAM_ACTIVE( l_U268, 0 );
                            TASK_LEAVE_CAR( l_U214, l_U215 );
                            l_U200 = 9;
                        }
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U214 )))
                {
                    TASK_LEAVE_ANY_CAR( l_U214 );
                }
            }
            else
            {
                SET_CAM_PROPAGATE( l_U270, 1 );
                SET_CAM_ACTIVE( l_U270, 1 );
                SET_CAM_PROPAGATE( l_U268, 0 );
                SET_CAM_ACTIVE( l_U268, 0 );
                l_U200 = 9;
            }
        }
        else if ((sub_15674( l_U250 )) == 1)
        {
            if (l_U285)
            {
                if (NOT l_U286)
                {
                    sub_16639( sub_2065(), l_U215 );
                    WAIT( 750 );
                    if (NOT (IS_CHAR_INJURED( l_U214 )))
                    {
                        TASK_PLAY_ANIM( l_U214, "take_obj", "missmarnie2", 8.00000000, 0, 0, 0, 0, -2 );
                    }
                    l_U286 = 1;
                }
            }
        };;;
        break;
        case 9:
        if (l_U211 == 0)
        {
            l_U205 = 0;
            SETTIMERA( 0 );
            l_U211 = 1;
        }
        if ((TIMERA() >= 2000) AND (sub_15313()))
        {
            if (NOT (IS_CAR_DEAD( l_U215 )))
            {
                if (IS_CHAR_IN_CAR( l_U214, l_U215 ))
                {
                    TASK_LEAVE_CAR( l_U214, l_U215 );
                    REMOVE_CHAR_FROM_GROUP( l_U214 );
                }
                else
                {
                    REMOVE_CHAR_FROM_GROUP( l_U214 );
                }
            }
            l_U213 = 1;
            SET_PLAYER_CONTROL_ADVANCED( sub_1075(), 1, 1, 1 );
            l_U200 = 10;
        }
        if (NOT l_U206)
        {
            if (IS_CHAR_IN_ANY_CAR( sub_2065() ))
            {
                if (NOT (IS_CAR_DEAD( l_U215 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U214 )))
                    {
                        if (NOT (IS_CHAR_IN_CAR( l_U214, l_U215 )))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U214, 1 );
                            TASK_PERFORM_SEQUENCE( l_U214, l_U243 );
                            CLEAR_SEQUENCE_TASK( l_U243 );
                            l_U206 = 1;
                        }
                    }
                }
            }
            else if (NOT (IS_CHAR_DEAD( l_U214 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U214, 1 );
                TASK_PERFORM_SEQUENCE( l_U214, l_U243 );
                CLEAR_SEQUENCE_TASK( l_U243 );
                l_U206 = 1;
            }
        }
        else
        {
            SETTIMERB( 0 );
            l_U200 = 10;
        }
        break;
        case 10:
        if ((((LOCATE_CHAR_ANY_MEANS_3D( l_U214, l_U231._fU0, l_U231._fU4, l_U231._fU8 + 1.60000000, 1.60000000, 1.60000000, 1.60000000, 0 )) || (NOT (IS_CHAR_ON_SCREEN( l_U214 )))) || (l_U213 == 1)) || (TIMERB() > 5000))
        {
            if (NOT (IS_CAR_DEAD( l_U215 )))
            {
                if (IS_THIS_MODEL_A_HELI( l_U237 ))
                {
                    SET_CAR_COORDINATES( l_U215, 20.40450000, -52.26450000, 13.84030000 );
                    SET_CAR_HEADING( l_U215, 0.78980000 );
                    FREEZE_CAR_POSITION( l_U215, 0 );
                }
                else if (IS_THIS_MODEL_A_BIKE( l_U237 ))
                {
                    FREEZE_CAR_POSITION( l_U215, 0 );
                }
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
            if (NOT (IS_CHAR_INJURED( sub_2065() )))
            {
                TASK_LOOK_AT_CHAR( sub_2065(), l_U214, 0, 0 );
            }
            if (NOT l_U205)
            {
                SET_WIDESCREEN_BORDERS( 0 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                SET_USE_HIGHDOF( 0 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                END_CAM_COMMANDS( ref l_U267 );
                l_U205 = 1;
            }
            if (DOES_CHAR_EXIST( l_U214 ))
            {
                DELETE_CHAR( ref l_U214 );
            }
            SET_PLAYER_CONTROL_ADVANCED( sub_1075(), 1, 1, 1 );
            sub_1154( ref l_U250, 1 );
            if (IS_SCORE_GREATER( sub_1075(), 500 ))
            {
                sub_18012( 65036 );
                INCREMENT_INT_STAT( 103, 500 );
            }
            else
            {
                STORE_SCORE( sub_1075(), ref l_U282 );
                sub_18012( -l_U282 );
                INCREMENT_INT_STAT( 103, l_U282 );
            }
            sub_18103();
        }
        break;
    }
    return;
}

void sub_7805(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U64542._fU0 = uParam0;
    g_U64542._fU4 = uParam1;
    g_U64542._fU8 = uParam2;
    return;
}

void sub_7855()
{
    if (g_U64739 == 0)
    {
        g_U64739 = 1;
    }
    else if (g_U64739 == 1)
    {
        g_U64739 = 2;
    }
    g_U64753++;
    if (g_U64753 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_1075(), 150 );
        SAY_AMBIENT_SPEECH( sub_2065(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    else
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_1075(), 150 );
    }
    sub_1288();
    return;
}

void sub_8262(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

void sub_8308(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_8329( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

int sub_8329(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_8393( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_8393(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_8415( iParam1 )))
    {
        return 0;
    }
    l_U4._fU384 = 0;
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
    sub_9103( ref g_U8395, ref l_U4 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_8415(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_8492( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_8492( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_8492( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_8492(unknown uParam0)
{
    return;
}

void sub_9103(int iParam0, int iParam1)
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

int sub_9361(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_8492( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_8492( "\n speech is not playing" );
    }
    return 0;
}

int sub_9532(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_8492( "\n already paused" );
    }
    else if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 1 )) + 1;
            sub_8492( "\n CONVERSATION PAUSED AT LINE " );
            sub_9672( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_8492( "\n NOT pausing the line as scripted and global speech id dont match" );
        }
    }
    else
    {
        sub_8492( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_8492( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_9672(unknown uParam0)
{
    return;
}

void sub_11208(unknown uParam0)
{
    StrCopy( ref l_U4._fU0, uParam0, 16 );
    sub_11225();
    return;
}

void sub_11225()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U4._fU16[I]._fU0 = nil;
        StrCopy( ref l_U4._fU16[I]._fU4, "", 32 );
        l_U4._fU344[I] = 0;
    }
    return;
}

void sub_11327(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U4._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U4._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_11407( "\n PED NUMBER ", uParam0 );
    sub_11447( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_11407(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_11447(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_11803(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_11824( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

void sub_11824(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_8393( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_13015(unknown uParam0)
{
    float fVar3;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_SPEED( uParam0, ref fVar3 );
        if ((fVar3 < 0.50000000) || (IS_CAR_STOPPED( uParam0 )))
        {
            return 1;
        }
    }
    return 0;
}

int sub_13090(unknown uParam0)
{
    float fVar3;

    GET_CHAR_SPEED( uParam0, ref fVar3 );
    if ((fVar3 < 0.50000000) || (IS_CHAR_STOPPED( uParam0 )))
    {
        return 1;
    }
    return 0;
}

int sub_15313()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_15674(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_9361( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

void sub_16639(unknown uParam0, unknown uParam1)
{
    string sVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_VEH_DRIVEABLE( uParam1 ))
        {
            if (sub_16679( uParam1 ))
            {
                sVar4 = "toss_money_chopper";
            }
            else if (sub_16755( uParam1 ))
            {
                sVar4 = "toss_money_dirt";
            }
            else if (sub_16828( uParam1 ))
            {
                sVar4 = "toss_money_freeway";
            }
            else if (sub_16919( uParam1 ))
            {
                sVar4 = "toss_money_scooter";
            }
            else if (sub_16995( uParam1 ))
            {
                sVar4 = "toss_money_spt";
            };;;;;
            TASK_PLAY_ANIM( uParam0, sVar4, "missmarnie2", 4.00000000, 0, 0, 0, 0, 0 );
        }
    }
    return;
}

int sub_16679(unknown uParam0)
{
    if (IS_CAR_MODEL( uParam0, -570033273 ))
    {
        return 1;
    }
    return 0;
}

int sub_16755(unknown uParam0)
{
    if (IS_CAR_MODEL( uParam0, 788045382 ))
    {
        return 1;
    }
    return 0;
}

int sub_16828(unknown uParam0)
{
    if ((IS_CAR_MODEL( uParam0, -1830458836 )) || (IS_CAR_MODEL( uParam0, 584879743 )))
    {
        return 1;
    }
    return 0;
}

int sub_16919(unknown uParam0)
{
    if (IS_CAR_MODEL( uParam0, -1842748181 ))
    {
        return 1;
    }
    return 0;
}

int sub_16995(unknown uParam0)
{
    if ((IS_CAR_MODEL( uParam0, 1203311498 )) || (IS_CAR_MODEL( uParam0, -909201658 )))
    {
        return 1;
    }
    return 0;
}

void sub_18012(unknown uParam0)
{
    ADD_SCORE( sub_1075(), uParam0 );
    return;
}

void sub_18103()
{
    CLEAR_WANTED_LEVEL( sub_1075() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 50 );
    sub_18136( 0, 1 );
    sub_18218( "PD_MARNIE", "PD_ALLEN", 1 );
    sub_18392( 0 );
    sub_19052( l_U262 );
    sub_1288();
    return;
}

void sub_18136(int iParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = iParam0 mod 1000;
    SET_BITS_IN_RANGE( ref g_U1502[iVar4 / 16], (iVar4 mod 16) * 2, ((iVar4 mod 16) * 2) + 1, uParam1 );
    return;
}

void sub_18218(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = sub_18231( uParam0, uParam1 );
    if (iVar5 != -1)
    {
        g_U2273[iVar5]._fU192 = uParam2;
    }
    return;
}

int sub_18231(unknown uParam0, unknown uParam1)
{
    int Result;

    if ((DOES_TEXT_LABEL_EXIST( uParam0 )) AND (DOES_TEXT_LABEL_EXIST( uParam1 )))
    {
        for ( Result = 0; Result <= 99; Result++ )
        {
            if (COMPARE_STRING( ref g_U2273[Result]._fU16, uParam0 ))
            {
                if (COMPARE_STRING( ref g_U2273[Result]._fU0, uParam1 ))
                {
                    return Result;
                }
            }
        }
    }
    return -1;
}

void sub_18392(unknown uParam0)
{
    if (g_U1710[uParam0] == 0)
    {
        sub_18428( ref g_U1712[uParam0], 4, 0, 0 );
        g_U1710[uParam0] = 1;
    }
    return;
}

void sub_18428(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_18481( iParam0, uParam1, uParam2 );
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
        sub_18613( iParam0 + 0 );
    }
    return;
}

void sub_18481(int iParam0, int iParam1, int iParam2)
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
        sub_18613( iParam0 + 0 );
    }
    return;
}

void sub_18613(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_18644( iParam0->_fU4 )))
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

int sub_18644(unknown uParam0)
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

void sub_19052(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_474( uParam0 );
    sub_19072( uParam0 );
    sub_22450( uParam0 );
    return;
}

void sub_19072(unknown uParam0)
{
    switch (uParam0)
    {
        case 38:
        sub_19202();
        break;
        case 39:
        sub_19568();
        break;
        case 40:
        sub_19827();
        break;
        case 48:
        sub_20010();
        break;
        case 41:
        sub_20195();
        break;
        case 42:
        sub_20391();
        break;
        case 43:
        sub_20572();
        break;
        case 44:
        sub_20755();
        break;
        case 45:
        sub_20936();
        break;
        case 46:
        sub_21115();
        break;
        case 47:
        sub_21426();
        break;
        case 49:
        sub_21626();
        break;
        case 50:
        sub_21803();
        break;
        case 51:
        sub_22001();
        break;
        default: sub_594( "Interactions_Pass: Unknown Random Interaction Character ID - tell Keith" );
    }
    sub_22276();
    sub_22349();
    return;
}

void sub_19202()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 38;
    uVar3 = sub_474( iVar2 );
    sub_18428( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_19292( 500 );
        break;
        default: sub_594( "Interactions_Badman_Pass: Unknown Badman Sequence - tell Keith" );
    }
    return;
}

void sub_19292(unknown uParam0)
{
    sub_19303( uParam0 );
    return;
}

void sub_19303(unknown uParam0)
{
    ADD_SCORE( sub_1075(), uParam0 );
    sub_19328( uParam0 );
    return;
}

void sub_19328(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_594( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_19568()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 39;
    uVar3 = sub_474( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_19292( 100 );
        sub_18428( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 2:
        sub_19292( 200 );
        sub_18428( ref g_U34048[uVar3]._fU8, 168, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3:
        sub_19292( 500 );
        break;
        default: sub_594( "Interactions_Brian_Pass: Unknown Brian Sequence - tell Keith" );
    }
    return;
}

void sub_19827()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 40;
    uVar3 = sub_474( iVar2 );
    sub_18428( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_19292( 0 );
        break;
        default: sub_594( "Interactions_Cherise_Pass: Unknown Cherise Sequence - tell Keith" );
    }
    return;
}

void sub_20010()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 48;
    uVar3 = sub_474( iVar2 );
    sub_18428( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_19292( 0 );
        break;
        default: sub_594( "Interactions_Clarence_Pass: Unknown Clarence Sequence - tell Keith" );
    }
    return;
}

void sub_20195()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 41;
    uVar3 = sub_474( iVar2 );
    sub_18428( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_19292( 0 );
        break;
        case 2:
        sub_19292( 0 );
        break;
        default: sub_594( "Interactions_Eddie_Pass: Unknown Eddie Sequence - tell Keith" );
    }
    return;
}

void sub_20391()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 42;
    uVar3 = sub_474( iVar2 );
    sub_18428( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_19292( 0 );
        break;
        default: sub_594( "Interactions_Gracie_Pass: Unknown Gracie Sequence - tell Keith" );
    }
    return;
}

void sub_20572()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 43;
    uVar3 = sub_474( iVar2 );
    sub_18428( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_19292( 500 );
        break;
        default: sub_594( "Interactions_Hossan_Pass: Unknown Hossan Sequence - tell Keith" );
    }
    return;
}

void sub_20755()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 44;
    uVar3 = sub_474( iVar2 );
    sub_18428( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_19292( 0 );
        break;
        default: sub_594( "Interactions_Ilyena_Pass: Unknown Ilyena Sequence - tell Keith" );
    }
    return;
}

void sub_20936()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 45;
    uVar3 = sub_474( iVar2 );
    sub_18428( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_19292( 1000 );
        break;
        default: sub_594( "Interactions_Ivan_Pass: Unknown Ivan Sequence - tell Keith" );
    }
    return;
}

void sub_21115()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 46;
    uVar3 = sub_474( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_19292( 1000 );
        sub_21202( ref g_U34048[uVar3]._fU8 );
        g_U34048[uVar3]._fU24 = 1;
        break;
        case 2:
        sub_19292( 5000 );
        sub_18428( ref g_U34048[uVar3]._fU8, 96, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3: break;
        default: sub_594( "Interactions_Jeff_Pass: Unknown Jeff Sequence - tell Keith" );
    }
    return;
}

void sub_21202(int iParam0)
{
    sub_21215( iParam0 + 0 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    return;
}

void sub_21215(int iParam0)
{
    GET_CURRENT_DATE( iParam0 + 0, iParam0 + 4 );
    return;
}

void sub_21426()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 47;
    uVar3 = sub_474( iVar2 );
    sub_18428( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_19292( 0 );
        break;
        case 2:
        sub_19292( 0 );
        break;
        default: sub_594( "Interactions_Marnie_Pass: Unknown Marnie Sequence - tell Keith" );
    }
    return;
}

void sub_21626()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 49;
    uVar3 = sub_474( iVar2 );
    sub_18428( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_19292( 500 );
        break;
        default: sub_594( "Interactions_Mel_Pass: Unknown Mel Sequence - tell Keith" );
    }
    return;
}

void sub_21803()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 50;
    uVar3 = sub_474( iVar2 );
    sub_18428( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_19292( 0 );
        break;
        case 2:
        sub_19292( 0 );
        break;
        default: sub_594( "Interactions_Pathos_Pass: Unknown Pathos Sequence - tell Keith" );
    }
    return;
}

void sub_22001()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 51;
    uVar3 = sub_474( iVar2 );
    sub_18428( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_19292( 0 );
        break;
        case 2:
        sub_19292( 1000 );
        break;
        default: sub_594( "Interactions_Sara_Pass: Unknown Sara Sequence - tell Keith" );
    }
    return;
}

void sub_22276()
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

void sub_22349()
{
    sub_22358();
    StrCopy( ref g_U9926, "RIPASS", 16 );
    return;
}

void sub_22358()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_22450(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_474( uParam0 );
    g_U34048[uVar3]._fU28 = 99;
    g_U34048[uVar3]._fU4 = 0;
    sub_5752( ref g_U34048[uVar3]._fU8 );
    g_U34048[uVar3]._fU24 = 0;
    sub_22531( uParam0 );
    return;
}

void sub_22531(unknown uParam0)
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
            sub_22810( 5, iVar4 );
            g_U64848[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_22810(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_22992( 0 );
    return;
}

void sub_22992(boolean bParam0)
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
        sub_23247();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_23247()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}
