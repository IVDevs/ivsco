void main()
{
    l_U98 = 0;
    l_U99 = 1;
    l_U100 = 3;
    l_U106 = 0;
    l_U107 = 0;
    l_U108 = 0;
    l_U109 = 0;
    l_U110 = 0;
    l_U111 = 0;
    l_U112 = 0;
    l_U113 = 0;
    l_U114 = 0;
    l_U115 = 0;
    l_U116 = 0;
    l_U117 = 1;
    l_U118 = 0;
    l_U119 = 0;
    l_U120 = 0;
    l_U121 = 0;
    l_U122 = 0;
    l_U123 = 0;
    l_U146 = {21.53170000, 796.36360000, 14.78850000};
    l_U149 = {21.71120000, 816.65340000, 13.61310000};
    l_U152 = {21.98000000, 797.00000000, 13.83000000};
    l_U158 = {22.39000000, 809.92000000, 16.96000000};
    l_U161 = "SHOP_ALARMS_RANDOM";
    l_U163 = {0.16000000, 0.00000000, 0.01000000};
    l_U166 = {4.82000000, 2.91000000, 0.26000000};
    l_U169 = 0;
    l_U187 = 2;
    l_U208 = 51;
    l_U209 = 180.42640000;
    l_U210 = 0;
    l_U212 = 0;
    l_U214 = 0;
    l_U215 = 0;
    l_U237 = 0;
    l_U238 = 0;
    l_U239 = 0;
    l_U242 = 0;
    l_U243 = 0;
    if (sub_382( l_U208, l_U187 ))
    {
        if (IS_PLAYER_PLAYING( sub_1083() ))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_1083(), 0 )))
            {
                if (HAS_DEATHARREST_EXECUTED())
                {
                    sub_1157();
                }
                if (g_U0)
                {
                    SET_TIME_OF_DAY( 6, 1 );
                    l_U242 = 1;
                }
                if (NOT l_U243)
                {
                    GET_TIME_OF_DAY( ref l_U240, ref l_U241 );
                    if ((l_U240 >= 6) || (l_U240 < 18))
                    {
                        l_U242 = 1;
                        l_U243 = 1;
                    }
                    else
                    {
                        l_U242 = 0;
                        l_U243 = 1;
                    }
                }
                if ((l_U243) AND (NOT l_U242))
                {
                    TERMINATE_THIS_SCRIPT();
                }
                while (true)
                {
                    WAIT( 0 );
                    if (NOT l_U112)
                    {
                        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
                        {
                            if (sub_2310())
                            {
                                WAIT( 0 );
                            }
                            else if (g_U10978)
                            {
                                sub_1157();
                            }
                            if (NOT sub_2494())
                            {
                                sub_1157();
                            }
                            switch (l_U107)
                            {
                                case 0:
                                sub_2579();
                                break;
                                case 1:
                                sub_3112();
                                break;
                            }
                        }
                        else
                        {
                            sub_1157();
                        }
                        sub_7472();
                    }
                    if (l_U112)
                    {
                        switch (l_U108)
                        {
                            case 0:
                            sub_7588();
                            break;
                            default:
                        }
                        if (IS_KEYBOARD_KEY_PRESSED( 31 ))
                        {
                            sub_23003();
                        }
                    }
                }
            }
            else if (NOT g_U65019)
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_2319() )))
                {
                    if (sub_3290() < 25)
                    {
                        CLEAR_PRINTS();
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
                if (IS_HINT_RUNNING())
                {
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U124, 0, 0, 0 );
                }
                g_U65019 = 1;
            }
            sub_1157();;
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

void sub_382(unknown uParam0, unknown uParam1)
{
    if (sub_391())
    {
        return 0;
    }
    return sub_438( uParam0, uParam1 );
}

int sub_391()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

boolean sub_438(unknown uParam0, int iParam1)
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
    uVar4 = sub_482( uParam0 );
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
        if (sub_759( g_U34048[uVar4]._fU8 ))
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

int sub_482(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_493( uParam0 )))
    {
        sub_602( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 38;
}

int sub_493(unknown uParam0)
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

void sub_602(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_759(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_928( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_928(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

void sub_1083()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1157()
{
    if (sub_1176( l_U208, l_U187 ))
    {
        sub_1272( l_U208, l_U187 );
        CLEAR_HELP();
        if (IS_PLAYER_PLAYING( sub_1083() ))
        {
            SET_PLAYER_CONTROL( sub_1083(), 1 );
        }
        sub_1742();
    }
    if (DOES_CHAR_EXIST( l_U124 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U124 )))
        {
            FREEZE_CHAR_POSITION( l_U124, 0 );
            CLEAR_CHAR_TASKS( l_U124 );
        }
        else
        {
            REMOVE_CHAR_ELEGANTLY( ref l_U124 );
        }
    }
    if (DOES_OBJECT_EXIST( l_U126 ))
    {
        if (NOT l_U122)
        {
            DELETE_OBJECT( ref l_U126 );
        }
    }
    sub_1908( ref l_U202, 0 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    CLEAR_NAMED_CUTSCENE( "rpsar2" );
    REMOVE_BLIP( l_U130 );
    REMOVE_BLIP( l_U129 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U124 );
    l_U124 = nil;
    g_U8359 = 0;
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_1176(int iParam0, int iParam1)
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

void sub_1272(unknown uParam0, unknown uParam1)
{
    if (NOT (sub_1176( uParam0, uParam1 )))
    {
        sub_602( "Interactions_Ended: Interaction for this character not active" );
        return;
    }
    sub_1368();
    if (g_U813)
    {
        sub_1460();
    }
    else
    {
        sub_1578();
    }
    g_U10978 = 0;
    return;
}

void sub_1368()
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

void sub_1460()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1506();
    return;
}

void sub_1506()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1578()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1624();
    return;
}

void sub_1624()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1742()
{
    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    return;
}

void sub_1908(int iParam0, unknown uParam1)
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

int sub_2310()
{
    if (IS_CHAR_IN_ANY_CAR( sub_2319() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2319(), ref l_U128 );
        if (NOT (l_U128 == nil))
        {
            if (IS_VEH_DRIVEABLE( l_U128 ))
            {
                GET_CAR_SPEED( l_U128, ref l_U171 );
                if (l_U171 > 15)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_2319()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_2494()
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

void sub_2579()
{
    switch (l_U106)
    {
        case 0:
        l_U134 = {345.14940000, -452.95040000, 3.69260000};
        l_U184 = -17823883;
        l_U185 = 613267368;
        REQUEST_MODEL( l_U184 );
        REQUEST_ANIMS( "misssara2" );
        while ((NOT (HAS_MODEL_LOADED( l_U184 ))) || (NOT (HAVE_ANIMS_LOADED( "misssara2" ))))
        {
            WAIT( 0 );
        }
        l_U106 = 1;
        break;
        case 1:
        if (NOT l_U113)
        {
            CLEAR_AREA( 345.14940000, -452.95040000, 4.69260000, 10.00000000, 1 );
            CREATE_CHAR( 26, l_U184, l_U134._fU0, l_U134._fU4, l_U134._fU8, ref l_U124, 1 );
            SET_CHAR_HEADING( l_U124, l_U209 );
            SET_CHAR_NEVER_TARGETTED( l_U124, 1 );
            SET_CHAR_CANT_BE_DRAGGED_OUT( l_U124, 1 );
            TASK_LOOK_AT_CHAR( l_U124, sub_2319(), -1, 0 );
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U124, 1 );
            if (NOT (DOES_BLIP_EXIST( l_U129 )))
            {
                ADD_BLIP_FOR_CHAR( l_U124, ref l_U129 );
                CHANGE_BLIP_SPRITE( l_U129, 64 );
                SET_BLIP_AS_FRIENDLY( l_U129, 1 );
                CHANGE_BLIP_SCALE( l_U129, 1.00000000 );
                CHANGE_BLIP_DISPLAY( l_U129, 2 );
            }
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U124, 1 );
            l_U113 = 1;
        }
        else if (NOT (IS_CHAR_INJURED( l_U124 )))
        {
            TASK_PLAY_ANIM( l_U124, "pace_around", "misssara2", 8.00000000, 1, 0, 0, 0, -2 );
        }
        l_U107 = 1;;
        break;
    }
    return;
}

void sub_3112()
{
    if ((IS_CHAR_INJURED( l_U124 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U124, sub_2319(), 0 )))
    {
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U124, 0, 0, 0 );
        }
        sub_1157();
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2319() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2319(), ref l_U128 );
        if (NOT (l_U128 == l_U127))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U127 );
            l_U127 = l_U128;
            SET_CAR_AS_MISSION_CAR( l_U127 );
        }
    }
    if ((sub_3290() < 25) AND (IS_CHAR_ON_FOOT( sub_2319() )))
    {
        sub_3523( ref l_U124, ref l_U211, ref l_U134, ref l_U209, ref l_U212, 1.10000000, "pace_around", "missSARA2" );
    }
    switch (l_U109)
    {
        case 0:
        if ((((IS_CHAR_INJURED( l_U124 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U124, sub_2319(), 0 ))) || (IS_CHAR_ON_FIRE( l_U124 ))) || (IS_WANTED_LEVEL_GREATER( sub_1083(), 0 )))
        {
            if (IS_WANTED_LEVEL_GREATER( sub_1083(), 0 ))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_2319() )))
                {
                    if (sub_3290() < 25)
                    {
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
            }
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U124, 0, 0, 0 );
            }
            sub_1157();
        }
        if (NOT (IS_CHAR_INJURED( l_U124 )))
        {
            if ((sub_3290() < 18) AND (IS_CHAR_ON_FOOT( sub_2319() )))
            {
                if ((NOT IS_HINT_RUNNING()) AND (NOT l_U210))
                {
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U124, 0, 0, 6000 );
                    TASK_LOOK_AT_CHAR( l_U124, sub_2319(), -2, 0 );
                    l_U210 = 1;
                }
                l_U109 = 1;
            }
        }
        break;
        case 1:
        if ((((IS_CHAR_INJURED( l_U124 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U124, sub_2319(), 0 ))) || (IS_CHAR_ON_FIRE( l_U124 ))) || (IS_WANTED_LEVEL_GREATER( sub_1083(), 0 )))
        {
            if (IS_WANTED_LEVEL_GREATER( sub_1083(), 0 ))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_2319() )))
                {
                    if (sub_3290() < 25)
                    {
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
            }
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U124, 0, 0, 0 );
            }
            sub_1157();
        }
        if (sub_3290() < 3.50000000)
        {
            if (IS_CHAR_ON_FOOT( sub_2319() ))
            {
                if (NOT (IS_CHAR_INJURED( l_U124 )))
                {
                    if (sub_4410( 1, 1 ))
                    {
                        if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U124, sub_2319(), 0 )))
                        {
                            if (NOT (IS_CHAR_ON_FIRE( l_U124 )))
                            {
                                if (NOT (IS_WANTED_LEVEL_GREATER( sub_1083(), 0 )))
                                {
                                    if (sub_2494())
                                    {
                                        SET_MISSION_FLAG( 1 );
                                        SET_PLAYER_CONTROL( sub_1083(), 0 );
                                        DO_SCREEN_FADE_OUT( 100 );
                                        while (NOT IS_SCREEN_FADED_OUT())
                                        {
                                            WAIT( 0 );
                                        }
                                        l_U109 = 2;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (sub_3290() > 18)
        {
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U124, 0, 0, 0 );
            }
            l_U109 = 0;
        }
        break;
        case 2:
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U124, 0, 0, 0 );
        }
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U124, 0 );
        CLEAR_WANTED_LEVEL( sub_1083() );
        CLEAR_PRINTS();
        LOAD_ADDITIONAL_TEXT( "PISAUD", 6 );
        sub_4997();
        CLEAR_NAMED_CUTSCENE( "rpsar2" );
        START_CUTSCENE_NOW( "rpsar2" );
        sub_5149( l_U208, l_U187 );
        l_U112 = 1;
        break;
    }
    return;
}

void sub_3290()
{
    if (NOT (IS_CHAR_DEAD( l_U124 )))
    {
        GET_CHAR_COORDINATES( sub_2319(), ref l_U137._fU0, ref l_U137._fU4, ref l_U137._fU8 );
        GET_CHAR_COORDINATES( l_U124, ref l_U140._fU0, ref l_U140._fU4, ref l_U140._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( l_U137._fU0, l_U137._fU4, l_U137._fU8, l_U140._fU0, l_U140._fU4, l_U140._fU8, ref l_U169 );
        return l_U169;
    }
    return l_U169;
}

void sub_3523(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
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

int sub_4410(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_2319() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2319(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_2319() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2319(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2319()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2319() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2319() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_1083() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_1083() )))
    {
        return 0;
    }
    return 1;
}

void sub_4997()
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

void sub_5149(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (g_U10978)
    {
        sub_602( "Interactions_Started: Already on a mission" );
        return;
    }
    uVar4 = sub_482( uParam0 );
    if (g_U34175._fU4)
    {
        sub_602( "Interactions_Started: Another interaction is already taking place" );
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
        sub_602( "Interactions_Started: This Random Character has been set to NOT allowToActivate" );
        return;
    }
    g_U34175._fU4 = 1;
    g_U34175._fU8 = uParam0;
    g_U34175._fU12 = uParam1;
    sub_5512();
    sub_6283( g_U34048[uVar4]._fU32 );
    g_U34048[uVar4]._fU32 = 0;
    sub_6427( uParam0, uParam1 );
    g_U10978 = 1;
    return;
}

void sub_5512()
{
    sub_5521();
    sub_5624( ref g_U9893._fU68 );
    sub_5673();
    return;
}

void sub_5521()
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

void sub_5624(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_5673()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_5711( 1, g_U569[I] )) == 0)
        {
            sub_5962( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_6140())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_5711(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_5962(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_6047( g_U569 - 1 );
    return;
}

void sub_6047(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_6140()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_5711( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_6283(int iParam0)
{
    g_U34175._fU16._fU4 += iParam0;
    sub_6317();
    INCREMENT_INT_STAT( 286, iParam0 );
    return;
}

void sub_6317()
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

void sub_6427(unknown uParam0, int iParam1)
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
    sub_7273( cVar4 );
    return;
}

void sub_7273(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

int sub_7472()
{
    if (IS_HINT_RUNNING())
    {
        if ((sub_3290() > 30) || (sub_2310()))
        {
            HINT_CAM( l_U134._fU0, l_U134._fU4, l_U134._fU8, 0, 0, 0, 0 );
            return 1;
        }
    }
    return 0;
}

void sub_7588()
{
    if (IS_CHAR_IN_ANY_CAR( sub_2319() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2319(), ref l_U128 );
        if (NOT (l_U128 == l_U127))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U127 );
            l_U127 = l_U128;
            SET_CAR_AS_MISSION_CAR( l_U127 );
        }
    }
    switch (l_U110)
    {
        case 0:
        CLEAR_HELP();
        if (DOES_VEHICLE_EXIST( l_U127 ))
        {
            if (IS_VEH_DRIVEABLE( l_U127 ))
            {
                SET_CAR_AS_MISSION_CAR( l_U127 );
                SET_CAR_COORDINATES( l_U127, 341.75460000, -458.99080000, 3.59040000 );
                SET_CAR_HEADING( l_U127, 1.01060000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U127 );
                SET_CAR_IN_CUTSCENE( l_U127, 1 );
            }
        }
        CLEAR_AREA( l_U134._fU0, l_U134._fU4, l_U134._fU8, 5.00000000, 1 );
        DELETE_CHAR( ref l_U124 );
        GET_CHAR_COORDINATES( sub_2319(), ref l_U137._fU0, ref l_U137._fU4, ref l_U137._fU8 );
        GET_CHAR_HEADING( sub_2319(), ref l_U170 );
        SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
        SWITCH_PED_PATHS_OFF( l_U134._fU0 - 5.00000000, l_U134._fU4 - 5.00000000, l_U134._fU8 - 5.00000000, l_U134._fU0 + 5.00000000, l_U134._fU4 + 5.00000000, l_U134._fU8 + 5.00000000 );
        CLEAR_AREA( l_U137._fU0, l_U137._fU4, l_U137._fU8, 100.00000000, 1 );
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "rpsar2" );
        CREATE_CHAR( 26, l_U184, l_U134._fU0, l_U134._fU4, l_U134._fU8, ref l_U124, 1 );
        SET_PED_DIES_WHEN_INJURED( l_U124, 1 );
        SET_CHAR_RELATIONSHIP( l_U124, 0, 0 );
        SET_CHAR_HEADING( l_U124, 150.42640000 );
        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U124, 1 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -301223260 );
        SET_CHAR_SUFFERS_CRITICAL_HITS( l_U124, 0 );
        SET_CHAR_COORDINATES( sub_2319(), l_U137._fU0, l_U137._fU4, l_U137._fU8 - 1.00000000 );
        SET_CHAR_HEADING( sub_2319(), 330.27020000 );
        SET_CHAR_NEVER_TARGETTED( l_U124, 1 );
        sub_8452( "PIS2AUD" );
        sub_8571( 0, sub_2319(), "NIKO", 0 );
        LOAD_ADDITIONAL_TEXT( "WI_SRA2", 0 );
        l_U110 = 1;
        break;
        case 1:
        CLEAR_HELP();
        SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SET_CAM_BEHIND_PED( sub_2319() );
        SWITCH_PED_PATHS_ON( l_U134._fU0 - 5.00000000, l_U134._fU4 - 5.00000000, l_U134._fU8 - 5.00000000, l_U134._fU0 + 5.00000000, l_U134._fU4 + 5.00000000, l_U134._fU8 + 5.00000000 );
        LOAD_SCENE( l_U134._fU0, l_U134._fU4, l_U134._fU8 );
        CLEAR_AREA_OF_CHARS( 360.20330000, -490.58860000, 5.29170000, 5.00000000 );
        DO_SCREEN_FADE_IN( 250 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        if (NOT (DOES_BLIP_EXIST( l_U133 )))
        {
            ADD_BLIP_FOR_COORD( l_U152._fU0 + 0.50000000, l_U152._fU4, l_U152._fU8, ref l_U133 );
            SET_BLIP_AS_FRIENDLY( l_U133, 1 );
            SET_ROUTE( l_U133, 1 );
            PRINT_NOW( "SRA2_PMT7", 7500, 5 );
        }
        SET_PLAYER_CONTROL_ADVANCED( sub_1083(), 1, 1, 1 );
        if (NOT (IS_CHAR_INJURED( l_U124 )))
        {
            CLEAR_CHAR_TASKS( l_U124 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U124, 359.12310000, -492.76080000, 4.81800000, 2, -2, 1.00000000 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U124, 0 );
            l_U111 = 0;
        }
        l_U110 = 2;
        break;
        case 2:
        if (IS_CHAR_DEAD( l_U124 ))
        {
            PRINT_NOW( "SRA2_PMT8", 7500, 1 );
            sub_9229( 51, l_U124, 28 );
            sub_9279();
        }
        if (DOES_CHAR_EXIST( l_U124 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U124 )))
            {
                if ((sub_3290() > 50) AND (NOT (IS_CHAR_ON_SCREEN( l_U124 ))))
                {
                    DELETE_CHAR( ref l_U124 );
                    l_U110 = 3;
                }
                else if (NOT l_U237)
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( l_U124, 359.12310000, -492.76080000, 4.81800000, 1.00000000, 1.00000000, 3.00000000, 0 ))
                    {
                        TASK_USE_NEAREST_SCENARIO_TO_POS( l_U124, 359.12310000, -492.76080000, 4.81800000, 10.00000000 );
                        l_U237 = 1;
                    }
                }
            }
        }
        break;
        case 3:
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2319(), l_U149._fU0, l_U149._fU4, l_U149._fU8 + 20, 150.00000000, 150.00000000, 20.00000000, 0 ))
        {
            REQUEST_MODEL( -151000142 );
            while (NOT (HAS_MODEL_LOADED( -151000142 )))
            {
                WAIT( 0 );
            }
            g_U8359 = 1;
            GET_INTERIOR_AT_COORDS( l_U152._fU0, l_U152._fU4, l_U152._fU8 + 2.00000000, ref l_U188 );
            while (l_U188 == nil)
            {
                WAIT( 0 );
                GET_INTERIOR_AT_COORDS( l_U152._fU0, l_U152._fU4, l_U152._fU8 + 2.00000000, ref l_U188 );
            }
            ACTIVATE_INTERIOR( l_U188, 1 );
            l_U110 = 4;
        }
        break;
        case 4:
        GET_INTERIOR_AT_COORDS( l_U152._fU0, l_U152._fU4, l_U152._fU8 + 2.00000000, ref l_U188 );
        while (l_U188 == nil)
        {
            WAIT( 0 );
            GET_INTERIOR_AT_COORDS( l_U152._fU0, l_U152._fU4, l_U152._fU8 + 2.00000000, ref l_U188 );
        }
        if (NOT l_U115)
        {
            CLEAR_AREA( l_U152._fU0, l_U152._fU4, l_U152._fU8, 20.00000000, 1 );
            CREATE_CHAR( 26, -151000142, l_U152._fU0 + 0.50000000, l_U152._fU4, l_U152._fU8, ref l_U125, 1 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U125, "C_RETAIL_14x10_Room01" );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U125, 1 );
            sub_10064();
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U125 );
            SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U125, 1 );
            SET_CHAR_HEADING( l_U125, 11.26880000 );
            sub_8571( 2, l_U125, "PERSEUS_WORKER", 0 );
            FREEZE_CHAR_POSITION( l_U125, 1 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( -151000142 );
            CREATE_OBJECT_NO_OFFSET( l_U185, l_U146._fU0, l_U146._fU4, l_U146._fU8, ref l_U126, 1 );
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U126, "C_RETAIL_14x10_Room01" );
            if (DOES_BLIP_EXIST( l_U133 ))
            {
                REMOVE_BLIP( l_U133 );
                ADD_BLIP_FOR_CHAR( l_U125, ref l_U133 );
                SET_BLIP_AS_FRIENDLY( l_U133, 1 );
            }
            l_U115 = 1;
        }
        else if (NOT (IS_CHAR_INJURED( l_U125 )))
        {
            FREEZE_CHAR_POSITION( l_U125, 0 );
            SET_DONT_ACTIVATE_RAGDOLL_FROM_PLAYER_IMPACT( l_U125, 1 );
        }
        if (NOT (IS_CHAR_INJURED( l_U125 )))
        {
            if (DOES_OBJECT_EXIST( l_U126 ))
            {
                ATTACH_OBJECT_TO_PED( l_U126, l_U125, 1232, l_U163, l_U166, 0 );
                l_U110 = 5;
            }
        }
        break;
        case 5:
        if (sub_10519())
        {
            if (IS_CHAR_SHOOTING( sub_2319() ))
            {
                if (DOES_BLIP_EXIST( l_U133 ))
                {
                    REMOVE_BLIP( l_U133 );
                }
                PRINT_NOW( "SRA2_PMT12", 7500, 1 );
                sub_9279();
            }
        }
        if (DOES_CHAR_EXIST( l_U125 ))
        {
            if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U125, sub_2319(), 0 )) || (IS_CHAR_INJURED( l_U125 )))
            {
                if (DOES_BLIP_EXIST( l_U133 ))
                {
                    REMOVE_BLIP( l_U133 );
                }
                PRINT_NOW( "SRA2_PMT71", 7500, 1 );
                sub_9279();
            }
        }
        l_U111 = 0;
        if (((sub_10821( ref l_U125 )) < 1.50000000) || ((sub_10974( ref l_U125 )) < 6.00000000))
        {
            if (sub_4410( 1, 1 ))
            {
                REGISTER_SCRIPT_WITH_AUDIO( 0 );
                CLEAR_PRINTS();
                if (DOES_BLIP_EXIST( l_U133 ))
                {
                    REMOVE_BLIP( l_U133 );
                }
                SET_WIDESCREEN_BORDERS( 1 );
                SET_PLAYER_CONTROL( sub_1083(), 0 );
                DO_SCREEN_FADE_OUT( 250 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                REQUEST_ANIMS( "gestures@niko" );
                while (NOT (HAVE_ANIMS_LOADED( "gestures@niko" )))
                {
                    WAIT( 0 );
                }
                if (NOT (IS_CHAR_INJURED( sub_2319() )))
                {
                    if (IS_CHAR_IN_ANY_CAR( sub_2319() ))
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( sub_2319(), 22.38740000, 805.02280000, 13.76180000 );
                    }
                    REMOVE_PED_HELMET( sub_2319(), 1 );
                    if (DOES_VEHICLE_EXIST( l_U127 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U127 ))
                        {
                            SET_CAR_COORDINATES( l_U127, 21.94000000, 816.73450000, 13.60260000 );
                            SET_CAR_ON_GROUND_PROPERLY( l_U127 );
                            SET_CAR_HEADING( l_U127, 271.23240000 );
                        }
                    }
                    SET_CHAR_COORDINATES( sub_2319(), 22.38740000, 799.02280000, 13.76180000 );
                    SET_CHAR_HEADING( sub_2319(), 180.00000000 );
                    CLEAR_CHAR_TASKS( sub_2319() );
                    if (NOT (IS_CHAR_INJURED( l_U125 )))
                    {
                        TASK_TURN_CHAR_TO_FACE_CHAR( sub_2319(), l_U125 );
                    }
                }
                if (NOT (IS_CHAR_DEAD( l_U125 )))
                {
                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U125, sub_2319() );
                }
                l_U110 = 7;
            }
        }
        break;
        case 7:
        if (NOT l_U114)
        {
            GET_CHAR_HEADING( sub_2319(), ref l_U170 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2319(), 0.00000000, 2.00000000, 0.50000000, ref l_U222._fU0, ref l_U222._fU4, ref l_U222._fU8 );
            GET_PED_BONE_POSITION( sub_2319(), 1205, 0.00000000, 0.00000000, 0.00000000, ref l_U155 );
            BEGIN_CAM_COMMANDS( ref l_U181 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            CREATE_CAM( 14, ref l_U173 );
            SET_CAM_POS( l_U173, 20.97000000, 797.28000000, 15.16000000 );
            SET_CAM_FOV( l_U173, 57.00000000 );
            SET_CAM_ROT( l_U173, -6.99000000, -0.00000000, -36.36000000 );
            CREATE_CAM( 14, ref l_U174 );
            SET_CAM_POS( l_U174, 20.49000000, 798.54000000, 15.23000000 );
            SET_CAM_FOV( l_U174, 62.70000000 );
            SET_CAM_ROT( l_U174, -15.36000000, 0.00000000, -94.90000000 );
            CREATE_CAM( 14, ref l_U175 );
            SET_CAM_POS( l_U175, 21.19000000, 800.21000000, 14.89000000 );
            SET_CAM_FOV( l_U175, 58.80000000 );
            SET_CAM_ROT( l_U175, -3.78000000, -0.00000000, -154.16000000 );
            SET_CAM_PROPAGATE( l_U173, 1 );
            SET_CAM_ACTIVE( l_U173, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U114 = 1;
        }
        else
        {
            GET_GAME_VIEWPORT_ID( ref l_U172 );
            SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U172, "C_RETAIL_14x10_Room01" );
            if (NOT (IS_CHAR_INJURED( sub_2319() )))
            {
                SET_ROOM_FOR_CHAR_BY_NAME( sub_2319(), "C_RETAIL_14x10_Room01" );
            }
            DO_SCREEN_FADE_IN( 250 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
            sub_12224( "PIS2_COLLECT", ref l_U190, 6, 1 );
            if (NOT (IS_CHAR_INJURED( sub_2319() )))
            {
                if (NOT (IS_CHAR_INJURED( l_U125 )))
                {
                    TASK_LOOK_AT_CHAR( sub_2319(), l_U125, -2, 0 );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U125 )))
            {
                if (NOT (IS_CHAR_INJURED( sub_2319() )))
                {
                    TASK_LOOK_AT_CHAR( l_U125, sub_2319(), -2, 0 );
                }
            }
            SETTIMERA( 0 );
            SETTIMERB( 0 );
            l_U110 = 8;
        }
        break;
        case 8:
        if (l_U118 == 0)
        {
            SETTIMERA( 0 );
            l_U118 = 1;
        }
        if ((TIMERA() >= 2000) AND (sub_13359()))
        {
            if (NOT (IS_CHAR_DEAD( l_U125 )))
            {
                CLEAR_CHAR_TASKS( l_U125 );
            }
            if (NOT l_U214)
            {
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                END_CAM_COMMANDS( ref l_U181 );
                SET_WIDESCREEN_BORDERS( 0 );
                l_U214 = 1;
            }
            CLEAR_CHAR_TASKS( sub_2319() );
            SET_PLAYER_CONTROL( sub_1083(), 1 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            sub_1908( ref l_U190, 0 );
            l_U110 = 9;
        }
        if (NOT (sub_13596( l_U190 )))
        {
            if (NOT l_U214)
            {
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                END_CAM_COMMANDS( ref l_U181 );
                SET_WIDESCREEN_BORDERS( 0 );
                l_U214 = 1;
            }
            CLEAR_CHAR_TASKS( sub_2319() );
            SET_PLAYER_CONTROL( sub_1083(), 1 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            if (NOT (IS_CHAR_DEAD( l_U125 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U125, 0 );
            }
            GET_GROUND_Z_FOR_3D_COORD( l_U146._fU0, l_U146._fU4, l_U146._fU8, ref l_U183 );
            if (NOT (IS_CHAR_INJURED( sub_2319() )))
            {
                if (NOT (IS_CHAR_INJURED( l_U125 )))
                {
                    TASK_LOOK_AT_CHAR( sub_2319(), l_U125, 0, 0 );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U125 )))
            {
                if (NOT (IS_CHAR_INJURED( sub_2319() )))
                {
                    TASK_LOOK_AT_CHAR( l_U125, sub_2319(), 0, 0 );
                }
            }
            l_U110 = 9;
        }
        else if ((sub_14037( l_U190 )) == 1)
        {
            SET_CAM_PROPAGATE( l_U174, 1 );
            SET_CAM_ACTIVE( l_U174, 1 );
            SET_CAM_PROPAGATE( l_U173, 0 );
            SET_CAM_ACTIVE( l_U173, 0 );
        }
        else if ((sub_14037( l_U190 )) == 2)
        {
            SET_CAM_PROPAGATE( l_U175, 1 );
            SET_CAM_ACTIVE( l_U175, 1 );
            SET_CAM_PROPAGATE( l_U174, 0 );
            SET_CAM_ACTIVE( l_U174, 0 );
        };;;
        break;
        case 9:
        if (NOT (IS_CHAR_INJURED( l_U125 )))
        {
            if (IS_PLAYER_TARGETTING_CHAR( sub_1083(), l_U125 ))
            {
                SET_DONT_ACTIVATE_RAGDOLL_FROM_PLAYER_IMPACT( l_U125, 0 );
                sub_14311( 2, "SRA2_PMT11" );
                CLEAR_HELP();
                CLEAR_PRINTS();
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U125 );
                TASK_HANDS_UP( l_U125, 5000 );
                sub_12224( "PIS2_TARGETS", ref l_U196, 6, 1 );
                l_U110 = 11;
            }
        }
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U125, sub_2319(), 0 ))
        {
            CLEAR_HELP();
            sub_14311( 2, "SRA2_PMT11" );
            if (NOT l_U121)
            {
                if (NOT (IS_CHAR_INJURED( l_U125 )))
                {
                    SET_DONT_ACTIVATE_RAGDOLL_FROM_PLAYER_IMPACT( l_U125, 0 );
                    DETACH_OBJECT( l_U126, 1 );
                    CLEAR_PRINTS();
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U125 );
                    TASK_SMART_FLEE_CHAR( l_U125, sub_2319(), 60.00000000, -1 );
                    sub_14900( "PIS2_TARGETS", 1, 1, ref l_U196, 6, 1 );
                    l_U121 = 1;
                    l_U110 = 11;
                }
                else
                {
                    PRINT_NOW( "SRA2_PMT71", 7500, 1 );
                    sub_9279();
                }
            }
        }
        if ((sub_10821( ref l_U125 )) < 2.50000000)
        {
            if (sub_15073( 2, 0 ))
            {
                if (sub_15342( 2, "SRA2_PMT11", 0 ))
                {
                    if (IS_SCORE_GREATER( sub_1083(), 500 ))
                    {
                        sub_15988( 65036 );
                        DELETE_OBJECT( ref l_U126 );
                        if (NOT (IS_CHAR_INJURED( l_U125 )))
                        {
                            TASK_PLAY_ANIM( l_U125, "give_obj", "misssara2", 8.00000000, 0, 0, 0, 0, -2 );
                            SET_CHAR_MONEY( l_U125, 500 );
                        }
                        if (NOT (IS_CHAR_INJURED( sub_2319() )))
                        {
                            TASK_PLAY_ANIM( sub_2319(), "take_obj", "misssara2", 8.00000000, 0, 0, 0, 0, -2 );
                        }
                        l_U110 = 10;
                    }
                    else
                    {
                        PRINT_NOW( "SRA2_PMT10", 7500, 1 );
                        sub_14311( 2, "SRA2_PMT11" );
                    }
                }
            }
            else
            {
                sub_14311( 2, "SRA2_PMT11" );
            }
        }
        else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SRA2_PMT11" ))
        {
            CLEAR_HELP();
        }
        sub_14538();
        sub_14311( 2, "SRA2_PMT11" );;
        if ((sub_10821( ref l_U125 )) > 50.00000000)
        {
            sub_14311( 2, "SRA2_PMT11" );
            if (NOT l_U239)
            {
                if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "TOO FAR", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
                {
                    PRINT_NOW( "SRA2_PMT61", 7500, 1 );
                    if (NOT (DOES_BLIP_EXIST( l_U133 )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U125, ref l_U133 );
                        SET_BLIP_AS_FRIENDLY( l_U133, 1 );
                    }
                    l_U239 = 1;
                }
            }
            else if ((sub_10821( ref l_U125 )) > 100.00000000)
            {
                PRINT_NOW( "SRA2_PMT62", 7500, 1 );
                sub_9279();
            }
        }
        else if (l_U239 == 1)
        {
            if ((sub_10821( ref l_U125 )) < 25.00000000)
            {
                if (DOES_BLIP_EXIST( l_U133 ))
                {
                    REMOVE_BLIP( l_U133 );
                }
                l_U239 = 0;
            }
        }
        break;
        case 10:
        sub_14311( 2, "SRA2_PMT11" );
        CLEAR_HELP();
        l_U110 = 13;
        break;
        case 11:
        sub_14311( 2, "SRA2_PMT11" );
        g_U8360 = 1;
        CLEAR_HELP();
        if (NOT (sub_13596( l_U196 )))
        {
            STORE_WANTED_LEVEL( sub_1083(), ref l_U213 );
            ALTER_WANTED_LEVEL( sub_1083(), l_U213 + 1 );
            l_U162 = GET_SOUND_ID();
            PLAY_SOUND_FROM_POSITION( l_U162, l_U161, l_U158 );
            l_U238 = 1;
            l_U215 = 1;
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                PRINT_NOW( "SRA2_PMT9", 7500, 5 );
            }
            if (DOES_OBJECT_EXIST( l_U126 ))
            {
                GET_OBJECT_COORDINATES( l_U126, ref l_U146._fU0, ref l_U146._fU4, ref l_U146._fU8 );
                CREATE_PICKUP( l_U185, 22, l_U146._fU0, l_U146._fU4, l_U146._fU8, ref l_U189, 0 );
                if (sub_10519())
                {
                    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U189, "C_RETAIL_14x10_Room01" );
                }
                DELETE_OBJECT( ref l_U126 );
            }
            if (NOT (DOES_BLIP_EXIST( l_U131 )))
            {
                ADD_BLIP_FOR_PICKUP( l_U189, ref l_U131 );
                SET_ROUTE( l_U131, 1 );
                CHANGE_BLIP_DISPLAY( l_U131, 4 );
                CHANGE_BLIP_COLOUR( l_U131, 2 );
            }
            l_U110 = 12;
        }
        else if (IS_CHAR_INJURED( l_U125 ))
        {
            DETACH_OBJECT( l_U126, 1 );
            sub_1908( ref l_U196, 0 );
        }
        if ((sub_14037( l_U196 )) == 2)
        {
            if (NOT l_U121)
            {
                if (NOT (IS_CHAR_INJURED( l_U125 )))
                {
                    if (NOT (IS_PED_ATTACHED_TO_OBJECT( l_U125, l_U126 )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U125 );
                        TASK_SMART_FLEE_CHAR( l_U125, sub_2319(), 60.00000000, -1 );
                    }
                    l_U121 = 1;
                }
            }
        }
        else if ((sub_14037( l_U196 )) == 1)
        {
            if (NOT l_U120)
            {
                if (NOT (IS_CHAR_INJURED( l_U125 )))
                {
                    DETACH_OBJECT( l_U126, 1 );
                }
                l_U120 = 1;
            }
        };;;
        break;
        case 12:
        if (HAS_PICKUP_BEEN_COLLECTED( l_U189 ))
        {
            if (DOES_BLIP_EXIST( l_U131 ))
            {
                REMOVE_BLIP( l_U131 );
            }
            l_U110 = 13;
        }
        break;
        case 13:
        if (NOT (DOES_BLIP_EXIST( l_U132 )))
        {
            PRINT_NOW( "SRA2_PMT3", 7500, 5 );
            ADD_BLIP_FOR_COORD( 341.50460000, -487.55040000, 4.33970000, ref l_U132 );
            SET_ROUTE( l_U132, 1 );
            l_U110 = 14;
        }
        break;
        case 14:
        if (l_U238)
        {
            GET_CHAR_COORDINATES( sub_2319(), ref l_U137._fU0, ref l_U137._fU4, ref l_U137._fU8 );
            if ((VDIST( l_U152, l_U137 )) > 150.00000000)
            {
                STOP_SOUND( l_U162 );
                RELEASE_SOUND_ID( l_U162 );
                l_U238 = 0;
            }
        }
        if (IS_WANTED_LEVEL_GREATER( sub_1083(), 0 ))
        {
            if (DOES_BLIP_EXIST( l_U132 ))
            {
                REMOVE_BLIP( l_U132 );
                PRINT_HELP( "GLOCK_WL" );
            }
        }
        else if (NOT (DOES_BLIP_EXIST( l_U132 )))
        {
            ADD_BLIP_FOR_COORD( 341.50460000, -487.55040000, 4.33970000, ref l_U132 );
            SET_ROUTE( l_U132, 1 );
            if (IS_THIS_PRINT_BEING_DISPLAYED( "GLOCK_WL", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
            {
                CLEAR_PRINTS();
            }
        }
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_1083(), 0 )))
        {
            if ((LOCATE_CHAR_ANY_MEANS_3D( sub_2319(), 342.05460000, -487.55040000, 3.53970000 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1 )) AND (sub_4410( 1, 1 )))
            {
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_WL" ))
                {
                    CLEAR_HELP();
                }
                if (IS_CHAR_IN_ANY_CAR( sub_2319() ))
                {
                    if ((IS_VEH_DRIVEABLE( l_U127 )) AND (NOT (IS_CAR_UPSIDEDOWN( l_U127 ))))
                    {
                        GET_CAR_MODEL( l_U127, ref l_U186 );
                        SET_PLAYER_CONTROL( sub_1083(), 0 );
                        while (NOT (sub_17870( sub_2319() )))
                        {
                            WAIT( 0 );
                        }
                        DO_SCREEN_FADE_OUT( 250 );
                        while (NOT IS_SCREEN_FADED_OUT())
                        {
                            WAIT( 0 );
                        }
                        DISPLAY_HUD( 0 );
                        DISPLAY_RADAR( 0 );
                        if (IS_THIS_MODEL_A_HELI( l_U186 ))
                        {
                            if (NOT (IS_CHAR_INJURED( sub_2319() )))
                            {
                                SET_CHAR_COORDINATES( sub_2319(), 341.13450000, -489.16960000, 3.60670000 );
                                SET_CHAR_HEADING( sub_2319(), 181.01320000 );
                                if (IS_VEH_DRIVEABLE( l_U127 ))
                                {
                                    FREEZE_CAR_POSITION( l_U127, 1 );
                                }
                            }
                        }
                        CREATE_CHAR( 26, l_U184, 345.49870000, -485.57770000, 3.69270000, ref l_U124, 1 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U124, 1 );
                        SET_CHAR_HEADING( l_U124, 92.42640000 );
                        sub_8571( 1, l_U124, "SARA", 0 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U184 );
                        CREATE_OBJECT_NO_OFFSET( l_U185, 349.49870000, -489.43260000, 5.69260000, ref l_U126, 1 );
                        SET_CHAR_COORDINATES( sub_2319(), 341.99000000, -487.55040000, 3.53970000 );
                        SET_CHAR_HEADING( sub_2319(), 180.00000000 );
                        if (NOT (IS_CHAR_INJURED( sub_2319() )))
                        {
                            REMOVE_PED_HELMET( sub_2319(), 1 );
                            ATTACH_OBJECT_TO_PED( l_U126, sub_2319(), 1232, l_U163, l_U166, 0 );
                        }
                        l_U122 = 1;
                        l_U118 = 0;
                        l_U114 = 0;
                        l_U119 = 0;
                        l_U110 = 16;
                    }
                }
                else if (IS_CHAR_ON_FOOT( sub_2319() ))
                {
                    SET_PLAYER_CONTROL( sub_1083(), 0 );
                    if (NOT (IS_CHAR_INJURED( sub_2319() )))
                    {
                        CLEAR_CHAR_TASKS( sub_2319() );
                    }
                    DO_SCREEN_FADE_OUT( 250 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    DISPLAY_HUD( 0 );
                    DISPLAY_RADAR( 0 );
                    CREATE_CHAR( 26, l_U184, 348.49870000, -485.57770000, 3.69270000, ref l_U124, 1 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U124, 1 );
                    SET_CHAR_HEADING( l_U124, 92.42640000 );
                    sub_8571( 1, l_U124, "SARA", 0 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U184 );
                    CREATE_OBJECT_NO_OFFSET( l_U185, 349.49870000, -489.43260000, 5.69260000, ref l_U126, 1 );
                    if (NOT (IS_CHAR_INJURED( sub_2319() )))
                    {
                        ATTACH_OBJECT_TO_PED( l_U126, sub_2319(), 1232, l_U163, l_U166, 0 );
                    }
                    l_U118 = 0;
                    l_U114 = 0;
                    l_U119 = 0;
                    l_U110 = 16;
                }
            }
        }
        break;
        case 16:
        if (l_U118 == 0)
        {
            SETTIMERA( 0 );
            l_U118 = 1;
        }
        if ((TIMERA() >= 1000) AND (sub_18735()))
        {
            if (NOT (IS_CHAR_DEAD( l_U124 )))
            {
                CLEAR_CHAR_TASKS( l_U124 );
            }
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            END_CAM_COMMANDS( ref l_U181 );
            SET_WIDESCREEN_BORDERS( 0 );
            CLEAR_CHAR_TASKS( sub_2319() );
            SET_PLAYER_CONTROL( sub_1083(), 1 );
            l_U110 = 20;
        }
        if (NOT l_U114)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2319(), -1.40000000, 0.10000000, 0.40000000, ref l_U216._fU0, ref l_U216._fU4, ref l_U216._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2319(), -6.40000000, 0.10000000, 0.40000000, ref l_U219._fU0, ref l_U219._fU4, ref l_U219._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2319(), 0.40000000, 0.05000000, 0.50000000, ref l_U222._fU0, ref l_U222._fU4, ref l_U222._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2319(), -2.50000000, 0.50000000, 1.55080000, ref l_U228._fU0, ref l_U228._fU4, ref l_U228._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2319(), 1.00000000, 3.00000000, 0.65080000, ref l_U231._fU0, ref l_U231._fU4, ref l_U231._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2319(), -3.00000000, -2.06800000, 0.66820000, ref l_U225._fU0, ref l_U225._fU4, ref l_U225._fU8 );
            if (NOT (IS_CHAR_INJURED( l_U124 )))
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U124, -5.00000000, 0.00000000, 0.55080000, ref l_U234._fU0, ref l_U234._fU4, ref l_U234._fU8 );
            }
            BEGIN_CAM_COMMANDS( ref l_U182 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            CREATE_CAM( 14, ref l_U173 );
            SET_CAM_POS( l_U173, l_U222._fU0, l_U222._fU4, l_U222._fU8 );
            SET_CAM_FOV( l_U173, 50.40000000 );
            POINT_CAM_AT_COORD( l_U173, l_U216._fU0, l_U216._fU4, l_U216._fU8 + 0.50000000 );
            CREATE_CAM( 14, ref l_U174 );
            SET_CAM_POS( l_U174, 346.37000000, -484.40000000, 5.11000000 );
            SET_CAM_FOV( l_U174, 74.80000000 );
            SET_CAM_ROT( l_U174, -9.55000000, 0.00000000, 128.98000000 );
            CREATE_CAM( 14, ref l_U175 );
            SET_CAM_POS( l_U175, l_U225._fU0, l_U225._fU4, l_U225._fU8 );
            SET_CAM_FOV( l_U175, 74.80000000 );
            SET_CAM_NEAR_DOF( l_U175, 0.10000000 );
            SET_CAM_FAR_DOF( l_U175, 10.00000000 );
            POINT_CAM_AT_PED( l_U175, sub_2319() );
            CREATE_CAM( 14, ref l_U176 );
            SET_CAM_POS( l_U176, l_U228._fU0, l_U228._fU4, l_U228._fU8 );
            SET_CAM_FOV( l_U176, 38.80000000 );
            POINT_CAM_AT_PED( l_U176, sub_2319() );
            CREATE_CAM( 14, ref l_U177 );
            SET_CAM_POS( l_U177, l_U231._fU0, l_U231._fU4, l_U231._fU8 );
            SET_CAM_FOV( l_U177, 40.80000000 );
            SET_CAM_NEAR_DOF( l_U177, 0.10000000 );
            SET_CAM_FAR_DOF( l_U177, 8.00000000 );
            POINT_CAM_AT_COORD( l_U177, l_U216._fU0, l_U216._fU4, l_U216._fU8 );
            CREATE_CAM( 14, ref l_U178 );
            SET_CAM_POS( l_U178, 343.76000000, -488.52000000, 4.94000000 );
            SET_CAM_FOV( l_U178, 59.10000000 );
            SET_CAM_NEAR_DOF( l_U178, 0.10000000 );
            SET_CAM_FAR_DOF( l_U178, 10.00000000 );
            SET_CAM_ROT( l_U178, 0.07000000, -0.00000000, -21.68000000 );
            CREATE_CAM( 14, ref l_U179 );
            SET_CAM_POS( l_U179, l_U234._fU0, l_U234._fU4, l_U234._fU8 );
            SET_CAM_FOV( l_U179, 44.80000000 );
            POINT_CAM_AT_PED( l_U179, sub_2319() );
            CREATE_CAM( 14, ref l_U180 );
            SET_CAM_POS( l_U180, 348.72000000, -484.75000000, 5.35000000 );
            SET_CAM_FOV( l_U180, 27.60000000 );
            SET_CAM_NEAR_DOF( l_U180, 0.10000000 );
            SET_CAM_FAR_DOF( l_U180, 10.00000000 );
            SET_CAM_ROT( l_U180, -4.55000000, 0.00000000, 110.57000000 );
            SET_USE_HIGHDOF( 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U114 = 1;
        }
        if (IS_SCREEN_FADED_OUT())
        {
            if (IS_CHAR_IN_ANY_CAR( sub_2319() ))
            {
                SET_CAM_PROPAGATE( l_U177, 1 );
                SET_CAM_ACTIVE( l_U177, 1 );
                if (NOT (IS_CHAR_INJURED( l_U124 )))
                {
                    SET_CHAR_COORDINATES( l_U124, l_U219._fU0, l_U219._fU4, 3.60200000 );
                    if (NOT (IS_CHAR_INJURED( sub_2319() )))
                    {
                        TASK_TURN_CHAR_TO_FACE_CHAR( l_U124, sub_2319() );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U124, l_U216._fU0, l_U216._fU4, 3.60200000, 2, -1, 1.00000000 );
                    }
                }
                DO_SCREEN_FADE_IN( 250 );
                while (NOT IS_SCREEN_FADED_IN())
                {
                    WAIT( 0 );
                }
                if (l_U215)
                {
                    sub_12224( "PIS2_GIVE2", ref l_U202, 6, 1 );
                }
                else
                {
                    sub_12224( "PIS2_GIVE", ref l_U202, 6, 1 );
                }
                if (NOT (IS_CHAR_INJURED( l_U124 )))
                {
                    TASK_LOOK_AT_CHAR( sub_2319(), l_U124, -2, 0 );
                }
                l_U110 = 17;
            }
            else if (NOT (IS_CHAR_INJURED( sub_2319() )))
            {
                if (NOT (IS_CHAR_INJURED( l_U124 )))
                {
                    SET_CHAR_COORDINATES( l_U124, 349.51290000, -485.54550000, 3.69270000 );
                    SET_CHAR_HEADING( l_U124, 70.67930000 );
                    if (NOT (IS_CHAR_INJURED( sub_2319() )))
                    {
                        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U124, 344.49870000, -486.57770000, 3.69270000, 2, -1, 0.50000000 );
                    }
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U124 )))
            {
                if (NOT (IS_CHAR_INJURED( sub_2319() )))
                {
                    SET_CHAR_COORDINATES( sub_2319(), 343.37120000, -486.33850000, 3.69270000 );
                    SET_CHAR_HEADING( sub_2319(), 259.08680000 );
                }
            }
            if (NOT (IS_CHAR_INJURED( sub_2319() )))
            {
                if (NOT (IS_CHAR_INJURED( l_U124 )))
                {
                    TASK_TURN_CHAR_TO_FACE_CHAR( sub_2319(), l_U124 );
                }
            }
            SET_CAM_PROPAGATE( l_U178, 1 );
            SET_CAM_ACTIVE( l_U178, 1 );
            DO_SCREEN_FADE_IN( 250 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
            while ((NOT (IS_CHAR_INJURED( l_U124 ))) AND (NOT (sub_20776( l_U124 ))))
            {
                WAIT( 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U124 )))
            {
                if (NOT (IS_CHAR_INJURED( sub_2319() )))
                {
                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U124, sub_2319() );
                }
            }
            if (l_U215)
            {
                sub_12224( "PIS2_GIVE2", ref l_U202, 6, 1 );
            }
            else
            {
                sub_12224( "PIS2_GIVE", ref l_U202, 6, 1 );
            }
            l_U110 = 15;;
        }
        break;
        case 15:
        if (l_U118 == 0)
        {
            SETTIMERA( 0 );
            l_U118 = 1;
        }
        if ((TIMERA() >= 1000) AND (sub_18735()))
        {
            if (NOT (IS_CHAR_DEAD( l_U124 )))
            {
                CLEAR_CHAR_TASKS( l_U124 );
            }
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            END_CAM_COMMANDS( ref l_U181 );
            SET_WIDESCREEN_BORDERS( 0 );
            CLEAR_CHAR_TASKS( sub_2319() );
            SET_PLAYER_CONTROL( sub_1083(), 1 );
            l_U110 = 20;
        }
        if (l_U215)
        {
            if (NOT (sub_13596( l_U202 )))
            {
                l_U117 = 0;
                l_U110 = 18;
            }
            else if ((sub_14037( l_U202 )) == 1)
            {
                SET_CAM_PROPAGATE( l_U180, 1 );
                SET_CAM_ACTIVE( l_U180, 1 );
                SET_CAM_PROPAGATE( l_U178, 0 );
                SET_CAM_ACTIVE( l_U178, 0 );
                if (NOT l_U119)
                {
                    if (NOT (IS_CHAR_INJURED( sub_2319() )))
                    {
                        TASK_PLAY_ANIM( sub_2319(), "give_obj", "misssara2", 8.00000000, 0, 0, 0, 0, -2 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U124 )))
                    {
                        TASK_PLAY_ANIM( l_U124, "take_obj", "misssara2", 8.00000000, 0, 0, 0, 0, -2 );
                        ATTACH_OBJECT_TO_PED( l_U126, l_U124, 1232, l_U163, l_U166, 0 );
                    }
                    l_U122 = 1;
                    l_U119 = 1;
                }
            }
        }
        else if (NOT (sub_13596( l_U202 )))
        {
            l_U117 = 0;
            l_U110 = 18;
        }
        else if ((sub_14037( l_U202 )) == 1)
        {
            SET_CAM_PROPAGATE( l_U180, 1 );
            SET_CAM_ACTIVE( l_U180, 1 );
            SET_CAM_PROPAGATE( l_U178, 0 );
            SET_CAM_ACTIVE( l_U178, 0 );
        }
        else if ((sub_14037( l_U202 )) == 3)
        {
            SET_CAM_PROPAGATE( l_U179, 1 );
            SET_CAM_ACTIVE( l_U179, 1 );
            SET_CAM_PROPAGATE( l_U180, 0 );
            SET_CAM_ACTIVE( l_U180, 0 );
            if (NOT l_U119)
            {
                if (NOT (IS_CHAR_INJURED( sub_2319() )))
                {
                    TASK_PLAY_ANIM( sub_2319(), "give_obj", "misssara2", 8.00000000, 0, 0, 0, 0, -2 );
                }
                if (NOT (IS_CHAR_INJURED( l_U124 )))
                {
                    TASK_PLAY_ANIM( l_U124, "take_obj", "misssara2", 8.00000000, 0, 0, 0, 0, -2 );
                    ATTACH_OBJECT_TO_PED( l_U126, l_U124, 1232, l_U163, l_U166, 0 );
                }
                l_U122 = 1;
                l_U119 = 1;
            }
        };;;;
        break;
        case 17:
        if (l_U118 == 0)
        {
            SETTIMERA( 0 );
            l_U118 = 1;
        }
        if ((TIMERA() >= 1000) AND (sub_18735()))
        {
            if (NOT (IS_CHAR_DEAD( l_U124 )))
            {
                CLEAR_CHAR_TASKS( l_U124 );
            }
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            END_CAM_COMMANDS( ref l_U181 );
            SET_WIDESCREEN_BORDERS( 0 );
            CLEAR_CHAR_TASKS( sub_2319() );
            SET_PLAYER_CONTROL( sub_1083(), 1 );
            l_U110 = 20;
        }
        if (l_U215)
        {
            if (NOT (sub_13596( l_U202 )))
            {
                l_U117 = 0;
                l_U110 = 18;
            }
            else if ((sub_14037( l_U202 )) == 1)
            {
                if (NOT l_U119)
                {
                    if (NOT (IS_CHAR_INJURED( l_U124 )))
                    {
                        TASK_PLAY_ANIM( l_U124, "take_obj", "misssara2", 8.00000000, 0, 0, 0, 0, -2 );
                        ATTACH_OBJECT_TO_PED( l_U126, l_U124, 1232, l_U163, l_U166, 0 );
                    }
                    l_U119 = 1;
                }
                SET_CAM_PROPAGATE( l_U173, 1 );
                SET_CAM_ACTIVE( l_U173, 1 );
                SET_CAM_PROPAGATE( l_U177, 0 );
                SET_CAM_ACTIVE( l_U177, 0 );
            }
        }
        else if (NOT (sub_13596( l_U202 )))
        {
            l_U117 = 0;
            SET_CAM_PROPAGATE( l_U177, 1 );
            SET_CAM_ACTIVE( l_U177, 1 );
            SET_CAM_PROPAGATE( l_U173, 0 );
            SET_CAM_ACTIVE( l_U173, 0 );
            l_U110 = 18;
        }
        else if ((sub_14037( l_U202 )) == 1)
        {
            if (NOT l_U119)
            {
                if (NOT (IS_CHAR_INJURED( l_U124 )))
                {
                    TASK_PLAY_ANIM( l_U124, "take_obj", "misssara2", 8.00000000, 0, 0, 0, 0, -2 );
                    ATTACH_OBJECT_TO_PED( l_U126, l_U124, 1232, l_U163, l_U166, 0 );
                }
                l_U119 = 1;
            }
            SET_CAM_PROPAGATE( l_U176, 1 );
            SET_CAM_ACTIVE( l_U176, 1 );
            SET_CAM_PROPAGATE( l_U177, 0 );
            SET_CAM_ACTIVE( l_U177, 0 );
        }
        else if ((sub_14037( l_U202 )) == 2)
        {
            SET_CAM_PROPAGATE( l_U173, 1 );
            SET_CAM_ACTIVE( l_U173, 1 );
            SET_CAM_PROPAGATE( l_U176, 0 );
            SET_CAM_ACTIVE( l_U176, 0 );
        };;;;
        break;
        case 18:
        if (NOT l_U117)
        {
            if (NOT (IS_CHAR_DEAD( l_U124 )))
            {
                CLEAR_CHAR_TASKS( l_U124 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U124, 374.20000000, -489.69000000, 5.51000000, 2, -2, 1.50000000 );
                SETTIMERB( 0 );
                l_U117 = 1;
            }
        }
        else if (NOT (IS_CHAR_DEAD( l_U124 )))
        {
            if (((LOCATE_CHAR_ANY_MEANS_3D( l_U124, 374.20000000, -489.69000000, 5.51000000, 1.50000000, 1.50000000, 1.50000000, 0 )) || (NOT (IS_CHAR_ON_SCREEN( l_U124 )))) || (TIMERB() > 5000))
            {
                l_U110 = 19;
            }
        }
        break;
        case 19:
        if (NOT l_U116)
        {
            SET_USE_HIGHDOF( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            END_CAM_COMMANDS( ref l_U181 );
            SET_WIDESCREEN_BORDERS( 0 );
            CLEAR_CHAR_TASKS( sub_2319() );
            SET_PLAYER_CONTROL( sub_1083(), 1 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            l_U116 = 1;
        }
        if (DOES_CHAR_EXIST( l_U124 ))
        {
            DELETE_CHAR( ref l_U124 );
        }
        if (DOES_OBJECT_EXIST( l_U126 ))
        {
            DELETE_OBJECT( ref l_U126 );
        }
        l_U110 = 20;
        break;
        case 20:
        DISPLAY_HUD( 1 );
        DISPLAY_RADAR( 1 );
        if (IS_VEH_DRIVEABLE( l_U127 ))
        {
            if (IS_THIS_MODEL_A_HELI( l_U186 ))
            {
                if (NOT (IS_CHAR_INJURED( sub_2319() )))
                {
                    SET_CHAR_COORDINATES( sub_2319(), 341.43450000, -489.16960000, 3.60670000 );
                    SET_CHAR_HEADING( sub_2319(), 181.01320000 );
                }
                FREEZE_CAR_POSITION( l_U127, 0 );
            }
        }
        sub_23003();
        break;
    }
    return;
}

void sub_8452(unknown uParam0)
{
    StrCopy( ref l_U0._fU0, uParam0, 16 );
    sub_8469();
    return;
}

void sub_8469()
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

void sub_8571(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U0._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U0._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_8651( "\n PED NUMBER ", uParam0 );
    sub_8691( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_8651(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_8691(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_9229(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U64542._fU0 = uParam0;
    g_U64542._fU4 = uParam1;
    g_U64542._fU8 = uParam2;
    return;
}

void sub_9279()
{
    g_U64757++;
    if (g_U64757 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_1083(), 150 );
        SAY_AMBIENT_SPEECH( sub_2319(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    else
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_1083(), 150 );
    }
    sub_1157();
    return;
}

void sub_10064()
{
    unknown uVar2;
    unknown uVar3;

    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U125 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, GET_NUMBER_OF_CHAR_TEXTURE_VARIATIONS( l_U125, 1, 1 ), ref uVar2 );
    SET_CHAR_COMPONENT_VARIATION( l_U125, 1, 1, uVar2 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar3 );
    SET_CHAR_PROP_INDEX( l_U125, 1, uVar3 );
    return;
}

int sub_10519()
{
    int iVar2;

    if (NOT (IS_CHAR_INJURED( sub_2319() )))
    {
        GET_KEY_FOR_CHAR_IN_ROOM( sub_2319(), ref iVar2 );
        if (iVar2 == (GET_HASH_KEY( "C_RETAIL_14x10_Room01" )))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    return 0;
}

void sub_10821(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        GET_CHAR_COORDINATES( sub_2319(), ref l_U137._fU0, ref l_U137._fU4, ref l_U137._fU8 );
        GET_CHAR_COORDINATES( (uParam0^), ref l_U143._fU0, ref l_U143._fU4, ref l_U143._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_2D( l_U137._fU0, l_U137._fU4, l_U143._fU0, l_U143._fU4, ref l_U169 );
        return l_U169;
    }
    return l_U169;
}

void sub_10974(unknown uParam0)
{
    if (((NOT (IS_CHAR_INJURED( (uParam0^) ))) AND (NOT (IS_CHAR_INJURED( sub_2319() )))) AND (IS_CHAR_IN_ANY_CAR( sub_2319() )))
    {
        GET_CHAR_COORDINATES( sub_2319(), ref l_U137._fU0, ref l_U137._fU4, ref l_U137._fU8 );
        GET_CHAR_COORDINATES( (uParam0^), ref l_U143._fU0, ref l_U143._fU4, ref l_U143._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_2D( l_U137._fU0, l_U137._fU4, l_U143._fU0, l_U143._fU4, ref l_U169 );
        return l_U169;
    }
    return l_U169;
}

void sub_12224(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_12245( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

void sub_12245(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_12299( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_12299(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_12321( iParam1 )))
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
    sub_13009( ref g_U8395, ref l_U0 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_12321(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_12398( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_12398( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_12398( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_12398(unknown uParam0)
{
    return;
}

void sub_13009(int iParam0, int iParam1)
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

int sub_13359()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_13596(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_12398( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_12398( "\n speech is not playing" );
    }
    return 0;
}

void sub_14037(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_13596( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

void sub_14311(int iParam0, string sParam1)
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
        if (COMPARE_STRING( sParam1, ref g_U9174 ))
        {
            if ((g_U9172 == iParam0) AND (l_U105))
            {
                StrCopy( ref g_U9174, "", 16 );
                g_U9172 = 0;
                g_U9173 = 0;
                g_U9178 = nil;
                l_U105 = 0;
                if (l_U103)
                {
                    sub_14538();
                    l_U103 = 0;
                }
            }
            if (l_U104)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_1083(), 1 );
                l_U104 = 0;
            }
            if (l_U102)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U102 = 0;
            }
        }
    }
    return;
}

void sub_14538()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_14900(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_14925( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_14925(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    char[16] cVar9;
    char[12] cVar13;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;

    StrCopy( ref cVar9, uParam1, 16 );
    array(ref cVar13, 2);
    StrCopy( ref cVar13[0], uParam0, 16 );
    StrCopy( ref cVar13[1], "END", 16 );
    return sub_12299( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

int sub_15073(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_1083() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_1083() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_1083() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9202)))
                {
                    if (NOT sub_391())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_2319() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_15225())
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

void sub_15225()
{
    return sub_15236( 0, 0 );
}

int sub_15236(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U91._fU104 = 1;
    }
    if ((uParam1) AND (g_U555 != 9))
    {
        g_U91._fU100 = 1;
    }
    return 1;
}

int sub_15342(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_15073( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U104)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_1083(), 0 );
                l_U104 = 1;
            }
            g_U9172 = uParam0;
            l_U105 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_15623();
                l_U103 = 1;
                g_U9173 = 6;
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
                g_U9173 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U102 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U102)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U102 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_15623()
{
    return sub_15236( 1, 1 );
}

void sub_15988(unknown uParam0)
{
    ADD_SCORE( sub_1083(), uParam0 );
    return;
}

int sub_17870(unknown uParam0)
{
    float fVar3;

    GET_CHAR_SPEED( uParam0, ref fVar3 );
    if ((fVar3 < 0.50000000) || (IS_CHAR_STOPPED( uParam0 )))
    {
        return 1;
    }
    return 0;
}

int sub_18735()
{
    if ((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_20776(unknown uParam0)
{
    float fVar3;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
        {
            GET_CHAR_SPEED( uParam0, ref fVar3 );
            if (fVar3 < 0.30000000)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_23003()
{
    CLEAR_WANTED_LEVEL( sub_1083() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 50 );
    sub_23039( l_U208 );
    sub_1157();
    return;
}

void sub_23039(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_482( uParam0 );
    sub_23059( uParam0 );
    sub_27033( uParam0 );
    return;
}

void sub_23059(unknown uParam0)
{
    switch (uParam0)
    {
        case 38:
        sub_23189();
        break;
        case 39:
        sub_24151();
        break;
        case 40:
        sub_24410();
        break;
        case 48:
        sub_24593();
        break;
        case 41:
        sub_24778();
        break;
        case 42:
        sub_24974();
        break;
        case 43:
        sub_25155();
        break;
        case 44:
        sub_25338();
        break;
        case 45:
        sub_25519();
        break;
        case 46:
        sub_25698();
        break;
        case 47:
        sub_26009();
        break;
        case 49:
        sub_26209();
        break;
        case 50:
        sub_26386();
        break;
        case 51:
        sub_26584();
        break;
        default: sub_602( "Interactions_Pass: Unknown Random Interaction Character ID - tell Keith" );
    }
    sub_26859();
    sub_26932();
    return;
}

void sub_23189()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 38;
    uVar3 = sub_482( iVar2 );
    sub_23229( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_23875( 500 );
        break;
        default: sub_602( "Interactions_Badman_Pass: Unknown Badman Sequence - tell Keith" );
    }
    return;
}

void sub_23229(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_23282( iParam0, uParam1, uParam2 );
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
        sub_23414( iParam0 + 0 );
    }
    return;
}

void sub_23282(int iParam0, int iParam1, int iParam2)
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
        sub_23414( iParam0 + 0 );
    }
    return;
}

void sub_23414(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_23445( iParam0->_fU4 )))
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

int sub_23445(unknown uParam0)
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

void sub_23875(unknown uParam0)
{
    sub_23886( uParam0 );
    return;
}

void sub_23886(unknown uParam0)
{
    ADD_SCORE( sub_1083(), uParam0 );
    sub_23911( uParam0 );
    return;
}

void sub_23911(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_602( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_24151()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 39;
    uVar3 = sub_482( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_23875( 100 );
        sub_23229( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 2:
        sub_23875( 200 );
        sub_23229( ref g_U34048[uVar3]._fU8, 168, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3:
        sub_23875( 500 );
        break;
        default: sub_602( "Interactions_Brian_Pass: Unknown Brian Sequence - tell Keith" );
    }
    return;
}

void sub_24410()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 40;
    uVar3 = sub_482( iVar2 );
    sub_23229( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_23875( 0 );
        break;
        default: sub_602( "Interactions_Cherise_Pass: Unknown Cherise Sequence - tell Keith" );
    }
    return;
}

void sub_24593()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 48;
    uVar3 = sub_482( iVar2 );
    sub_23229( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_23875( 0 );
        break;
        default: sub_602( "Interactions_Clarence_Pass: Unknown Clarence Sequence - tell Keith" );
    }
    return;
}

void sub_24778()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 41;
    uVar3 = sub_482( iVar2 );
    sub_23229( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_23875( 0 );
        break;
        case 2:
        sub_23875( 0 );
        break;
        default: sub_602( "Interactions_Eddie_Pass: Unknown Eddie Sequence - tell Keith" );
    }
    return;
}

void sub_24974()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 42;
    uVar3 = sub_482( iVar2 );
    sub_23229( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_23875( 0 );
        break;
        default: sub_602( "Interactions_Gracie_Pass: Unknown Gracie Sequence - tell Keith" );
    }
    return;
}

void sub_25155()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 43;
    uVar3 = sub_482( iVar2 );
    sub_23229( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_23875( 500 );
        break;
        default: sub_602( "Interactions_Hossan_Pass: Unknown Hossan Sequence - tell Keith" );
    }
    return;
}

void sub_25338()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 44;
    uVar3 = sub_482( iVar2 );
    sub_23229( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_23875( 0 );
        break;
        default: sub_602( "Interactions_Ilyena_Pass: Unknown Ilyena Sequence - tell Keith" );
    }
    return;
}

void sub_25519()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 45;
    uVar3 = sub_482( iVar2 );
    sub_23229( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_23875( 1000 );
        break;
        default: sub_602( "Interactions_Ivan_Pass: Unknown Ivan Sequence - tell Keith" );
    }
    return;
}

void sub_25698()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 46;
    uVar3 = sub_482( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_23875( 1000 );
        sub_25785( ref g_U34048[uVar3]._fU8 );
        g_U34048[uVar3]._fU24 = 1;
        break;
        case 2:
        sub_23875( 5000 );
        sub_23229( ref g_U34048[uVar3]._fU8, 96, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3: break;
        default: sub_602( "Interactions_Jeff_Pass: Unknown Jeff Sequence - tell Keith" );
    }
    return;
}

void sub_25785(int iParam0)
{
    sub_25798( iParam0 + 0 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    return;
}

void sub_25798(int iParam0)
{
    GET_CURRENT_DATE( iParam0 + 0, iParam0 + 4 );
    return;
}

void sub_26009()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 47;
    uVar3 = sub_482( iVar2 );
    sub_23229( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_23875( 0 );
        break;
        case 2:
        sub_23875( 0 );
        break;
        default: sub_602( "Interactions_Marnie_Pass: Unknown Marnie Sequence - tell Keith" );
    }
    return;
}

void sub_26209()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 49;
    uVar3 = sub_482( iVar2 );
    sub_23229( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_23875( 500 );
        break;
        default: sub_602( "Interactions_Mel_Pass: Unknown Mel Sequence - tell Keith" );
    }
    return;
}

void sub_26386()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 50;
    uVar3 = sub_482( iVar2 );
    sub_23229( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_23875( 0 );
        break;
        case 2:
        sub_23875( 0 );
        break;
        default: sub_602( "Interactions_Pathos_Pass: Unknown Pathos Sequence - tell Keith" );
    }
    return;
}

void sub_26584()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 51;
    uVar3 = sub_482( iVar2 );
    sub_23229( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_23875( 0 );
        break;
        case 2:
        sub_23875( 1000 );
        break;
        default: sub_602( "Interactions_Sara_Pass: Unknown Sara Sequence - tell Keith" );
    }
    return;
}

void sub_26859()
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

void sub_26932()
{
    sub_26941();
    StrCopy( ref g_U9926, "RIPASS", 16 );
    return;
}

void sub_26941()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_27033(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_482( uParam0 );
    g_U34048[uVar3]._fU28 = 99;
    g_U34048[uVar3]._fU4 = 0;
    sub_5624( ref g_U34048[uVar3]._fU8 );
    g_U34048[uVar3]._fU24 = 0;
    sub_27114( uParam0 );
    return;
}

void sub_27114(unknown uParam0)
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
            sub_27393( 5, iVar4 );
            g_U64848[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_27393(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_27575( 0 );
    return;
}

void sub_27575(boolean bParam0)
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
        sub_27830();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_27830()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}
