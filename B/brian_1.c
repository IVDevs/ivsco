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
    l_U204 = 0;
    l_U205 = 0;
    l_U206 = 0;
    l_U207 = 0;
    l_U210 = 0;
    l_U212 = 0;
    l_U213 = 0;
    l_U214 = 0;
    l_U215 = 0;
    l_U217 = 0;
    l_U219 = 0;
    l_U220 = 0;
    l_U221 = 0;
    l_U223 = 0;
    l_U224 = 0;
    l_U225 = 0;
    l_U226 = 0;
    l_U227 = 0;
    l_U228 = 0;
    l_U229 = 0;
    l_U230 = 0;
    l_U280 = 0;
    l_U293 = 0;
    l_U294 = 0;
    l_U295 = 3000;
    l_U296 = 1;
    l_U304 = 39;
    if (sub_362( l_U304, l_U296 ))
    {
        if (IS_PLAYER_PLAYING( sub_1063() ))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_1063(), 0 )))
            {
                if (HAS_DEATHARREST_EXECUTED())
                {
                    sub_1137();
                }
                while (true)
                {
                    WAIT( 0 );
                    if (NOT l_U213)
                    {
                        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
                        {
                            if (NOT l_U226)
                            {
                                if (g_U10978)
                                {
                                    sub_1137();
                                }
                            }
                            if (NOT (IS_WANTED_LEVEL_GREATER( sub_1063(), 0 )))
                            {
                                sub_2243( ref l_U235 );
                                sub_2432();
                                if ((sub_2760( ref l_U231 )) || (sub_2852( ref l_U231, 22.00000000 )))
                                {
                                    sub_3029();
                                }
                                switch (l_U197)
                                {
                                    case 0:
                                    sub_3079();
                                    break;
                                    case 1:
                                    sub_4145();
                                    break;
                                }
                            }
                            else if ((sub_2467( ref l_U231 )) < 7.00000000)
                            {
                                if (NOT g_U65019)
                                {
                                    g_U65019 = 1;
                                    l_U228 = 1;
                                }
                            }
                            sub_1137();;
                        }
                        else
                        {
                            sub_1137();
                        }
                    }
                }
            }
            else
            {
                PRINTSTRING( "fail 3" );
                PRINTNL();
                TERMINATE_THIS_SCRIPT();
            }
        }
        else
        {
            PRINTSTRING( "fail 5" );
            PRINTNL();
            TERMINATE_THIS_SCRIPT();
        }
    }
    else
    {
        PRINTSTRING( "fail 6" );
        PRINTNL();
        TERMINATE_THIS_SCRIPT();
    }
    return;
}

void sub_362(unknown uParam0, unknown uParam1)
{
    if (sub_371())
    {
        return 0;
    }
    return sub_418( uParam0, uParam1 );
}

int sub_371()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

boolean sub_418(unknown uParam0, int iParam1)
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
    uVar4 = sub_462( uParam0 );
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
        if (sub_739( g_U34048[uVar4]._fU8 ))
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

int sub_462(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_473( uParam0 )))
    {
        sub_582( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 38;
}

int sub_473(unknown uParam0)
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

void sub_582(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_739(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_908( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_908(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

void sub_1063()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1137()
{
    if (sub_1156( l_U304, l_U296 ))
    {
        sub_1252( l_U304, l_U296 );
        sub_1685();
        sub_1732( 0 );
        if (IS_PLAYER_PLAYING( sub_1063() ))
        {
            SET_PLAYER_CONTROL( sub_1063(), 1 );
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U231 )))
    {
        FREEZE_CHAR_POSITION( l_U231, 0 );
    }
    CLEAR_THIS_PRINT( "BRIAN1_PROMPT_1" );
    CLEAR_NAMED_CUTSCENE( "Rpbri1" );
    if (l_U228)
    {
        CLEAR_HELP();
        CLEAR_PRINTS();
    }
    if (l_U297[0] == 1)
    {
        CLEAR_PRINTS();
        PRINT( "BRIAN1_PROMPT_8", 7500, 1 );
    }
    else if (l_U297[1] == 1)
    {
        CLEAR_PRINTS();
        PRINT( "BRIAN1_PROMPT_8", 7500, 1 );
    }
    sub_2105();
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_1156(int iParam0, int iParam1)
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

void sub_1252(unknown uParam0, unknown uParam1)
{
    if (NOT (sub_1156( uParam0, uParam1 )))
    {
        sub_582( "Interactions_Ended: Interaction for this character not active" );
        return;
    }
    sub_1348();
    if (g_U813)
    {
        sub_1440();
    }
    else
    {
        sub_1558();
    }
    g_U10978 = 0;
    return;
}

void sub_1348()
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
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1558()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1604();
    return;
}

void sub_1604()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1685()
{
    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    return;
}

void sub_1732(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8392 >= 4) AND (g_U8392 <= 8))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_2105()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_2243(unknown uParam0)
{
    int iVar3;

    if (sub_2253( ref iVar3 ))
    {
        if (NOT (IS_CAR_A_MISSION_CAR( iVar3 )))
        {
            if ((uParam0^) != iVar3)
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( uParam0 );
                (uParam0^) = iVar3;
                SET_CAR_AS_MISSION_CAR( (uParam0^) );
            }
        }
    }
    return;
}

int sub_2253(unknown uParam0)
{
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2262() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2262(), uParam0 );
        if (NOT ((uParam0^) == nil))
        {
            if (IS_VEH_DRIVEABLE( (uParam0^) ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_2262()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_2432()
{
    if (l_U224)
    {
        if (IS_HINT_RUNNING())
        {
            if (((sub_2467( ref l_U231 )) > 18.00000000) || (sub_2632()))
            {
                HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U231, 0, 0, 0 );
                l_U224 = 0;
                return 1;
            }
        }
    }
    return 0;
}

void sub_2467(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    float Result;

    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    vVar6 = {0.00000000, 0.00000000, 0.00000000};
    Result = 0.00000000;
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        GET_CHAR_COORDINATES( sub_2262(), ref vVar3.x, ref vVar3.y, ref vVar3.z );
        GET_CHAR_COORDINATES( (uParam0^), ref vVar6.x, ref vVar6.y, ref vVar6.z );
        GET_DISTANCE_BETWEEN_COORDS_3D( vVar3.x, vVar3.y, vVar3.z, vVar6.x, vVar6.y, vVar6.z, ref Result );
        return Result;
    }
    return Result;
}

int sub_2632()
{
    if (sub_2253( ref l_U235 ))
    {
        GET_CAR_SPEED( l_U235, ref l_U284 );
        if (l_U284 > 15.00000000)
        {
            return 1;
        }
    }
    return 0;
}

int sub_2760(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam0^), sub_2262(), 0 ))
            {
                return 1;
            }
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int sub_2852(unknown uParam0, float fParam1)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if ((sub_2467( uParam0 )) < fParam1)
            {
                if (HAS_CHAR_SPOTTED_CHAR( (uParam0^), sub_2262() ))
                {
                    if (IS_CHAR_ARMED( sub_2262(), 7 ))
                    {
                        if (IS_PLAYER_TARGETTING_CHAR( sub_1063(), (uParam0^) ))
                        {
                            return 1;
                        }
                        if (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_1063(), (uParam0^) ))
                        {
                            return 1;
                        }
                    }
                }
                if (IS_CHAR_SHOOTING( sub_2262() ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_3029()
{
    sub_1137();
    return;
}

void sub_3079()
{
    switch (l_U196)
    {
        case 0:
        l_U240 = {823.23690000, -299.90040000, 14.91340000};
        l_U279 = 272;
        l_U267 = {0.15000000, 0.03000000, 0.01000000};
        l_U270 = {1.37000000, 1.07000000, -0.07000000};
        l_U291 = 422305098;
        l_U292 = -525076767;
        REQUEST_MODEL( l_U291 );
        REQUEST_MODEL( l_U292 );
        REQUEST_ANIMS( "missbrian_1" );
        l_U196 = 1;
        break;
        case 1:
        if (NOT l_U219)
        {
            if (HAS_MODEL_LOADED( l_U291 ))
            {
                CLEAR_AREA( 823.33220000, -300.60860000, 14.86690000, 5.00000000, 1 );
                CREATE_CHAR( 26, l_U291, l_U240._fU0, l_U240._fU4, l_U240._fU8, ref l_U231, 1 );
                SET_CHAR_PROP_INDEX( l_U231, 0, 0 );
                SET_CHAR_HEADING( l_U231, l_U279 );
                SET_CHAR_HEALTH( l_U231, 200 );
                TASK_LOOK_AT_CHAR( l_U231, sub_2262(), -2, 0 );
                if (NOT g_U65022)
                {
                    SET_CHAR_MONEY( l_U231, 1000 );
                    g_U65022 = 1;
                }
                SET_CHAR_NEVER_TARGETTED( l_U231, 1 );
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U231, 1 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U231, 1 );
                sub_3511( ref l_U231, ref l_U236, 1 );
                sub_3655( "PIBAUD" );
                sub_3775( 1, l_U231, "BRIAN", 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U231, 0, 0, 0 );
                SET_PED_DIES_WHEN_INJURED( l_U231, 1 );
                SET_BRIANS_MOOD( 0 );
                SETTIMERA( 0 );
                TASK_STAND_GUARD( l_U231, l_U240, l_U279, 0.00000000, 0, -1 );
                l_U219 = 1;
            }
            else
            {
                WAIT( 0 );
            }
        }
        if ((NOT l_U218) AND (l_U219))
        {
            if (HAVE_ANIMS_LOADED( "missbrian_1" ))
            {
                TASK_PLAY_ANIM( l_U231, "friendly_idle", "missbrian_1", 8.00000000, 1, 0, 0, 0, -2 );
                l_U197 = 1;
            }
            else
            {
                WAIT( 0 );
            }
        }
        break;
    }
    return;
}

void sub_3511(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            ADD_BLIP_FOR_CHAR( (uParam0^), uParam1 );
            if (bParam2)
            {
                CHANGE_BLIP_SPRITE( (uParam1^), 63 );
            }
            else
            {
                CHANGE_BLIP_SPRITE( (uParam1^), 64 );
            }
            SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
            CHANGE_BLIP_SCALE( (uParam1^), 1.00000000 );
            CHANGE_BLIP_DISPLAY( (uParam1^), 2 );
        }
    }
    return;
}

void sub_3655(unknown uParam0)
{
    StrCopy( ref l_U4._fU0, uParam0, 16 );
    sub_3672();
    return;
}

void sub_3672()
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

void sub_3775(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U4._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U4._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3855( "\n PED NUMBER ", uParam0 );
    sub_3895( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_3855(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3895(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4145()
{
    sub_4206( ref l_U231, ref l_U300, "GENERIC_HI_01", "GENERIC_YES_PLEASE_01", ref l_U230 );
    switch (l_U198)
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( l_U231 )))
        {
            if (sub_2253( ref l_U235 ))
            {
                if ((sub_2467( ref l_U231 )) < 10.00000000)
                {
                    GET_CHAR_COORDINATES( sub_2262(), ref l_U276._fU0, ref l_U276._fU4, ref l_U276._fU8 );
                    if (l_U276._fU0 > 818.00000000)
                    {
                        sub_4496();
                    }
                }
            }
            else if (IS_CHAR_ON_FOOT( sub_2262() ))
            {
                if ((sub_2467( ref l_U231 )) < 10.00000000)
                {
                    GET_CHAR_COORDINATES( sub_2262(), ref l_U276._fU0, ref l_U276._fU4, ref l_U276._fU8 );
                    if (l_U276._fU0 > 818.00000000)
                    {
                        sub_4496();
                    }
                }
            }
        }
        break;
        case 1: break;
    }
    if (IS_CHAR_ON_FOOT( sub_2262() ))
    {
        sub_4753( ref l_U231, ref l_U303, ref l_U240, ref l_U279, ref l_U229, 0.50000000, "friendly_idle", "missbrian_1", 0, 1 );
        switch (l_U199)
        {
            case 0:
            if (NOT (IS_CHAR_INJURED( l_U231 )))
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U231, g_U65012._fU0, g_U65012._fU4, g_U65012._fU8, ref l_U249._fU0, ref l_U249._fU4, ref l_U249._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U231, g_U65015._fU0, g_U65015._fU4, g_U65015._fU8, ref l_U252._fU0, ref l_U252._fU4, ref l_U252._fU8 );
                if (IS_CHAR_IN_ANGLED_AREA_3D( sub_2262(), l_U249._fU0, l_U249._fU4, l_U249._fU8, l_U252._fU0, l_U252._fU4, l_U252._fU8, 6.00000000, 0 ))
                {
                    if (sub_5289())
                    {
                        CLEAR_PRINTS();
                        SET_PLAYER_CONTROL( sub_1063(), 0 );
                        SET_MISSION_FLAG( 1 );
                        sub_5378( l_U304, l_U296 );
                        l_U226 = 1;
                        DO_SCREEN_FADE_OUT( 100 );
                        CLEAR_PRINTS();
                        while (NOT IS_SCREEN_FADED_OUT())
                        {
                            WAIT( 0 );
                        }
                        if (IS_HINT_RUNNING())
                        {
                            HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U231, 0, 0, 0 );
                        }
                        LOAD_ADDITIONAL_TEXT( "PIBAUD", 6 );
                        SWITCH_PED_PATHS_OFF( 822.12000000, -250.31000000, 100.00000000, 827.34020000, -453.11310000, -100.00000000 );
                        GET_CHAR_COORDINATES( sub_2262(), ref l_U243._fU0, ref l_U243._fU4, ref l_U243._fU8 );
                        CLEAR_AREA( l_U243._fU0, l_U243._fU4, l_U243._fU8, 100.00000000, 1 );
                        CLEAR_NAMED_CUTSCENE( "Rpbri1" );
                        START_CUTSCENE_NOW( "Rpbri1" );
                        if (DOES_VEHICLE_EXIST( l_U235 ))
                        {
                            if (IS_VEH_DRIVEABLE( l_U235 ))
                            {
                                if (LOCATE_CAR_3D( l_U235, l_U243._fU0, l_U243._fU4, l_U243._fU8, 9.00000000, 9.00000000, 5.00000000, 0 ))
                                {
                                    SET_CAR_HEADING( l_U235, 182.05260000 );
                                    SET_CAR_COORDINATES( l_U235, 829.48770000, -299.66810000, 14.81510000 );
                                }
                            }
                        }
                        while (NOT HAS_CUTSCENE_LOADED())
                        {
                            WAIT( 0 );
                        }
                        while (NOT HAS_CUTSCENE_FINISHED())
                        {
                            WAIT( 0 );
                        }
                        while (NOT IS_SCREEN_FADED_OUT())
                        {
                            WAIT( 0 );
                        }
                        if (DOES_CHAR_EXIST( l_U231 ))
                        {
                            DELETE_CHAR( ref l_U231 );
                        }
                        SWITCH_PED_PATHS_ON( 822.12000000, -250.31000000, 100.00000000, 827.34020000, -453.11310000, -100.00000000 );
                        LOAD_SCENE( l_U240._fU0, l_U240._fU4, l_U240._fU8 );
                        sub_8219( 1 );
                        sub_8389();
                    }
                }
            }
            break;
            default:
        }
    }
    return;
}

void sub_4206(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (sub_4220( uParam1, 7000 ))
    {
        if ((sub_2467( uParam0 )) < 15)
        {
            if (NOT (uParam4^))
            {
                SAY_AMBIENT_SPEECH( (uParam0^), uParam2, 1, 0, 2 );
                GET_GAME_TIMER( uParam1 );
                (uParam4^) = 1;
            }
            else
            {
                SAY_AMBIENT_SPEECH( (uParam0^), uParam3, 1, 0, 2 );
                GET_GAME_TIMER( uParam1 );
                (uParam4^) = 0;
            }
        }
    }
    return;
}

int sub_4220(unknown uParam0, int iParam1)
{
    GET_GAME_TIMER( ref l_U113 );
    if ((l_U113 - (uParam0^)) > iParam1)
    {
        return 1;
    }
    return 0;
}

void sub_4496()
{
    if (IS_CHAR_ON_FOOT( sub_2262() ))
    {
        HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U231, 0, 0, 6000 );
    }
    l_U224 = 1;
    l_U198 = 1;
    return;
}

void sub_4753(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, boolean bParam9)
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

int sub_5289()
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

void sub_5378(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (g_U10978)
    {
        sub_582( "Interactions_Started: Already on a mission" );
        return;
    }
    uVar4 = sub_462( uParam0 );
    if (g_U34175._fU4)
    {
        sub_582( "Interactions_Started: Another interaction is already taking place" );
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
        sub_582( "Interactions_Started: This Random Character has been set to NOT allowToActivate" );
        return;
    }
    g_U34175._fU4 = 1;
    g_U34175._fU8 = uParam0;
    g_U34175._fU12 = uParam1;
    sub_5741();
    sub_6512( g_U34048[uVar4]._fU32 );
    g_U34048[uVar4]._fU32 = 0;
    sub_6656( uParam0, uParam1 );
    g_U10978 = 1;
    return;
}

void sub_5741()
{
    sub_5750();
    sub_5853( ref g_U9893._fU68 );
    sub_5902();
    return;
}

void sub_5750()
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

void sub_5853(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_5902()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_5940( 1, g_U569[I] )) == 0)
        {
            sub_6191( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_6369())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_5940(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_6191(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_6276( g_U569 - 1 );
    return;
}

void sub_6276(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_6369()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_5940( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_6512(int iParam0)
{
    g_U34175._fU16._fU4 += iParam0;
    sub_6546();
    INCREMENT_INT_STAT( 286, iParam0 );
    return;
}

void sub_6546()
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

void sub_6656(unknown uParam0, int iParam1)
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
    sub_7502( cVar4 );
    return;
}

void sub_7502(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_8219(boolean bParam0)
{
    CLEAR_PRINTS();
    CLEAR_HELP();
    sub_1732( 0 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    SET_WIDESCREEN_BORDERS( 0 );
    if (IS_PLAYER_PLAYING( sub_1063() ))
    {
        SET_INTERP_IN_OUT_VEHICLE_ENABLED_THIS_FRAME( 0 );
        SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
        SET_CAM_BEHIND_PED( sub_2262() );
        if (bParam0)
        {
            CLEAR_CHAR_TASKS( sub_2262() );
        }
        SET_PLAYER_CONTROL( sub_1063(), 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_2262(), 0 );
    }
    ALLOW_EMERGENCY_SERVICES( 1 );
    DO_SCREEN_FADE_IN( 500 );
    return;
}

void sub_8389()
{
    sub_8403( l_U304 );
    CLEAR_WANTED_LEVEL( sub_1063() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 50 );
    sub_1137();
    return;
}

void sub_8403(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_462( uParam0 );
    if (NOT g_U34048[uVar3]._fU4)
    {
        sub_582( "Interactions_Move_On_To_Next_Sequence: Character not active - Tell Keith" );
        return;
    }
    sub_8525( uParam0 );
    g_U34048[uVar3]._fU28++;
    return;
}

void sub_8525(unknown uParam0)
{
    switch (uParam0)
    {
        case 38:
        sub_8655();
        break;
        case 39:
        sub_9617();
        break;
        case 40:
        sub_9876();
        break;
        case 48:
        sub_10059();
        break;
        case 41:
        sub_10244();
        break;
        case 42:
        sub_10440();
        break;
        case 43:
        sub_10621();
        break;
        case 44:
        sub_10804();
        break;
        case 45:
        sub_10985();
        break;
        case 46:
        sub_11164();
        break;
        case 47:
        sub_11475();
        break;
        case 49:
        sub_11675();
        break;
        case 50:
        sub_11852();
        break;
        case 51:
        sub_12050();
        break;
        default: sub_582( "Interactions_Pass: Unknown Random Interaction Character ID - tell Keith" );
    }
    sub_12325();
    sub_12398();
    return;
}

void sub_8655()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 38;
    uVar3 = sub_462( iVar2 );
    sub_8695( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_9341( 500 );
        break;
        default: sub_582( "Interactions_Badman_Pass: Unknown Badman Sequence - tell Keith" );
    }
    return;
}

void sub_8695(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_8748( iParam0, uParam1, uParam2 );
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
        sub_8880( iParam0 + 0 );
    }
    return;
}

void sub_8748(int iParam0, int iParam1, int iParam2)
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
        sub_8880( iParam0 + 0 );
    }
    return;
}

void sub_8880(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_8911( iParam0->_fU4 )))
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

int sub_8911(unknown uParam0)
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

void sub_9341(unknown uParam0)
{
    sub_9352( uParam0 );
    return;
}

void sub_9352(unknown uParam0)
{
    ADD_SCORE( sub_1063(), uParam0 );
    sub_9377( uParam0 );
    return;
}

void sub_9377(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_582( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_9617()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 39;
    uVar3 = sub_462( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_9341( 100 );
        sub_8695( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 2:
        sub_9341( 200 );
        sub_8695( ref g_U34048[uVar3]._fU8, 168, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3:
        sub_9341( 500 );
        break;
        default: sub_582( "Interactions_Brian_Pass: Unknown Brian Sequence - tell Keith" );
    }
    return;
}

void sub_9876()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 40;
    uVar3 = sub_462( iVar2 );
    sub_8695( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_9341( 0 );
        break;
        default: sub_582( "Interactions_Cherise_Pass: Unknown Cherise Sequence - tell Keith" );
    }
    return;
}

void sub_10059()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 48;
    uVar3 = sub_462( iVar2 );
    sub_8695( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_9341( 0 );
        break;
        default: sub_582( "Interactions_Clarence_Pass: Unknown Clarence Sequence - tell Keith" );
    }
    return;
}

void sub_10244()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 41;
    uVar3 = sub_462( iVar2 );
    sub_8695( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_9341( 0 );
        break;
        case 2:
        sub_9341( 0 );
        break;
        default: sub_582( "Interactions_Eddie_Pass: Unknown Eddie Sequence - tell Keith" );
    }
    return;
}

void sub_10440()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 42;
    uVar3 = sub_462( iVar2 );
    sub_8695( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_9341( 0 );
        break;
        default: sub_582( "Interactions_Gracie_Pass: Unknown Gracie Sequence - tell Keith" );
    }
    return;
}

void sub_10621()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 43;
    uVar3 = sub_462( iVar2 );
    sub_8695( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_9341( 500 );
        break;
        default: sub_582( "Interactions_Hossan_Pass: Unknown Hossan Sequence - tell Keith" );
    }
    return;
}

void sub_10804()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 44;
    uVar3 = sub_462( iVar2 );
    sub_8695( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_9341( 0 );
        break;
        default: sub_582( "Interactions_Ilyena_Pass: Unknown Ilyena Sequence - tell Keith" );
    }
    return;
}

void sub_10985()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 45;
    uVar3 = sub_462( iVar2 );
    sub_8695( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_9341( 1000 );
        break;
        default: sub_582( "Interactions_Ivan_Pass: Unknown Ivan Sequence - tell Keith" );
    }
    return;
}

void sub_11164()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 46;
    uVar3 = sub_462( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_9341( 1000 );
        sub_11251( ref g_U34048[uVar3]._fU8 );
        g_U34048[uVar3]._fU24 = 1;
        break;
        case 2:
        sub_9341( 5000 );
        sub_8695( ref g_U34048[uVar3]._fU8, 96, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3: break;
        default: sub_582( "Interactions_Jeff_Pass: Unknown Jeff Sequence - tell Keith" );
    }
    return;
}

void sub_11251(int iParam0)
{
    sub_11264( iParam0 + 0 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    return;
}

void sub_11264(int iParam0)
{
    GET_CURRENT_DATE( iParam0 + 0, iParam0 + 4 );
    return;
}

void sub_11475()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 47;
    uVar3 = sub_462( iVar2 );
    sub_8695( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_9341( 0 );
        break;
        case 2:
        sub_9341( 0 );
        break;
        default: sub_582( "Interactions_Marnie_Pass: Unknown Marnie Sequence - tell Keith" );
    }
    return;
}

void sub_11675()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 49;
    uVar3 = sub_462( iVar2 );
    sub_8695( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_9341( 500 );
        break;
        default: sub_582( "Interactions_Mel_Pass: Unknown Mel Sequence - tell Keith" );
    }
    return;
}

void sub_11852()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 50;
    uVar3 = sub_462( iVar2 );
    sub_8695( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_9341( 0 );
        break;
        case 2:
        sub_9341( 0 );
        break;
        default: sub_582( "Interactions_Pathos_Pass: Unknown Pathos Sequence - tell Keith" );
    }
    return;
}

void sub_12050()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 51;
    uVar3 = sub_462( iVar2 );
    sub_8695( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_9341( 0 );
        break;
        case 2:
        sub_9341( 1000 );
        break;
        default: sub_582( "Interactions_Sara_Pass: Unknown Sara Sequence - tell Keith" );
    }
    return;
}

void sub_12325()
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

void sub_12398()
{
    sub_12407();
    StrCopy( ref g_U9926, "RIPASS", 16 );
    return;
}

void sub_12407()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}
