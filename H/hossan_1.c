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
    l_U212 = 0;
    l_U213 = 0;
    l_U214 = 0;
    l_U215 = 0;
    l_U216 = 0;
    l_U217 = 0;
    l_U218 = 0;
    l_U219 = 0;
    l_U220 = 0;
    l_U221 = 0;
    l_U222 = 0;
    l_U223 = 0;
    l_U224 = 0;
    l_U228 = 0;
    l_U229 = 0;
    l_U232 = 0;
    l_U233 = 0;
    l_U234 = 0;
    l_U235 = 0;
    l_U236 = 0;
    l_U237 = 0;
    l_U238 = 0;
    l_U239 = 0;
    l_U240 = 0;
    l_U241 = 0;
    l_U242 = 0;
    l_U243 = 0;
    l_U244 = 0;
    l_U245 = 0;
    l_U246 = 0;
    l_U247 = 0;
    l_U248 = 0;
    l_U249 = 0;
    l_U250 = 0;
    l_U251 = 0;
    l_U252 = 0;
    l_U253 = 0;
    l_U254 = 0;
    l_U255 = 0;
    l_U256 = 0;
    l_U257 = 0;
    l_U258 = 0;
    l_U259 = 0;
    l_U260 = 0;
    l_U261 = 0;
    l_U262 = 0;
    l_U263 = 0;
    l_U264 = 0;
    l_U265 = 0;
    l_U266 = 0;
    l_U267 = 0;
    l_U268 = 0;
    l_U269 = 0;
    l_U270 = 0;
    l_U271 = 0;
    l_U272 = 0;
    l_U273 = 0;
    l_U274 = 0;
    l_U275 = 0;
    l_U276 = 0;
    l_U277 = 0;
    l_U278 = 0;
    l_U279 = 0;
    l_U280 = 0;
    l_U281 = 0;
    l_U282 = 0;
    l_U368 = {0.00000000, 0.00000000, 0.00000000};
    l_U371 = {0.00000000, -1.00000000, 0.00000000};
    l_U374 = {-10.00000000, 0.00000000, 0.00000000};
    l_U377 = {-1.00000000, 0.00000000, 0.00000000};
    l_U386 = {-0.30534300, 1.56991100, 0.01601700};
    l_U430 = 0;
    l_U462 = 0;
    l_U463 = 1;
    l_U464 = 0;
    l_U466 = 0;
    l_U482 = 0;
    l_U485 = 0;
    l_U502 = 43;
    if (sub_703( l_U502, l_U463 ))
    {
        if (IS_PLAYER_PLAYING( sub_1404() ))
        {
            sub_1451( ref l_U517 );
            if ((l_U517._fU8._fU0 >= 6) || (l_U517._fU8._fU0 <= 20))
            {
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_1404(), 0 )))
                {
                    if (HAS_DEATHARREST_EXECUTED())
                    {
                        sub_1582();
                    }
                    while (true)
                    {
                        WAIT( 0 );
                        if (NOT l_U236)
                        {
                            if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
                            {
                                if (NOT l_U276)
                                {
                                    if (g_U10978)
                                    {
                                        sub_1582();
                                    }
                                }
                                if (NOT (IS_WANTED_LEVEL_GREATER( sub_1404(), 0 )))
                                {
                                    sub_3133();
                                    if ((sub_3536( ref l_U283 )) || (sub_3628( ref l_U283, 22.00000000 )))
                                    {
                                        sub_3805();
                                    }
                                    sub_4178( ref l_U290 );
                                    switch (l_U212)
                                    {
                                        case 0:
                                        sub_4284();
                                        break;
                                        case 1:
                                        sub_6080();
                                        break;
                                    }
                                }
                                else if ((sub_3168( ref l_U283 )) < 7.00000000)
                                {
                                    if (NOT g_U65019)
                                    {
                                        g_U65019 = 1;
                                        l_U261 = 1;
                                    }
                                }
                                sub_1582();;
                            }
                            else
                            {
                                sub_1582();
                            }
                        }
                        if (l_U236)
                        {
                            if (NOT l_U277)
                            {
                                if (sub_12137( ref l_U283 ))
                                {
                                    CLEAR_PRINTS();
                                    sub_2297( 0 );
                                    PRINT_NOW( "HOS1_PROMPT_4", 7500, 1 );
                                    sub_3805();
                                }
                                if ((sub_3168( ref l_U283 )) > 150.00000000)
                                {
                                    CLEAR_PRINTS();
                                    sub_2297( 0 );
                                    PRINT_NOW( "HOS1_GOD4", 7500, 1 );
                                    sub_3805();
                                }
                                sub_12294();
                                if (l_U270)
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U284 )))
                                    {
                                        if (((sub_3168( ref l_U284 )) > 200.00000000) AND (NOT (IS_CHAR_ON_SCREEN( l_U284 ))))
                                        {
                                            if (IS_PED_IN_GROUP( l_U283 ))
                                            {
                                                sub_2297( 0 );
                                                sub_12531( "PIH_LOSE", ref l_U503[0], 8, 1 );
                                            }
                                            l_U277 = 1;
                                            l_U216 = 5;
                                        }
                                    }
                                }
                            }
                            sub_4178( ref l_U290 );
                            switch (l_U216)
                            {
                                case 0:
                                sub_13581();
                                break;
                                case 1:
                                sub_23378();
                                break;
                                case 2:
                                sub_29530( ref l_U284 );
                                sub_30179();
                                break;
                                case 3:
                                sub_31952();
                                break;
                                case 4:
                                sub_32574();
                                break;
                                case 5:
                                if (DOES_BLIP_EXIST( l_U294 ))
                                {
                                    REMOVE_BLIP( l_U294 );
                                }
                                if (NOT (IS_CHAR_INJURED( l_U283 )))
                                {
                                    if (NOT (sub_15732( l_U503[0] )))
                                    {
                                        CLEAR_PRINTS();
                                        sub_2297( 0 );
                                        PRINT_NOW( "HOS1_GOD6", 7500, 1 );
                                        GET_GAME_TIMER( ref l_U521._fU220 );
                                        l_U216 = 6;
                                    }
                                }
                                else
                                {
                                    CLEAR_PRINTS();
                                    sub_2297( 0 );
                                    PRINT_NOW( "HOS1_PROMPT_3", 7500, 1 );
                                    sub_3805();
                                }
                                break;
                                case 6:
                                if (sub_42131( ref l_U521 ))
                                {
                                    sub_3805();
                                }
                                break;
                            }
                            if ((IS_KEYBOARD_KEY_PRESSED( 31 )) AND (NOT l_U231))
                            {
                                l_U231 = 1;
                                sub_36905();
                            }
                            if ((IS_KEYBOARD_KEY_PRESSED( 30 )) AND (NOT l_U231))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U284 )))
                                {
                                    SET_CHAR_HEALTH( l_U284, 13 );
                                    l_U231 = 1;
                                }
                            }
                        }
                        GET_CHAR_COORDINATES( sub_2202(), ref l_U298._fU0, ref l_U298._fU4, ref l_U298._fU8 );
                        LOCATE_CHAR_ANY_MEANS_3D( sub_2202(), l_U298._fU0, l_U298._fU4, l_U298._fU8, l_U431, l_U432, l_U433, 0 );
                        sub_4178( ref l_U290 );
                        if (l_U273)
                        {
                            SET_OBJECT_HEADING( l_U196._fU0, l_U196._fU56 );
                            SET_OBJECT_COORDINATES( l_U196._fU0, l_U196._fU8._fU0, l_U196._fU8._fU4, l_U196._fU8._fU8 );
                        }
                    }
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

void sub_703(unknown uParam0, unknown uParam1)
{
    if (sub_712())
    {
        return 0;
    }
    return sub_759( uParam0, uParam1 );
}

int sub_712()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

boolean sub_759(unknown uParam0, int iParam1)
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
    uVar4 = sub_803( uParam0 );
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
        if (sub_1080( g_U34048[uVar4]._fU8 ))
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

int sub_803(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_814( uParam0 )))
    {
        sub_923( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 38;
}

int sub_814(unknown uParam0)
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

void sub_923(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_1080(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_1249( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_1249(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

void sub_1404()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1451(int iParam0)
{
    sub_1464( iParam0 + 0 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    return;
}

void sub_1464(int iParam0)
{
    GET_CURRENT_DATE( iParam0 + 0, iParam0 + 4 );
    return;
}

void sub_1582()
{
    if (sub_1601( l_U502, l_U463 ))
    {
        sub_1697( l_U502, l_U463 );
        if (IS_PLAYER_PLAYING( sub_1404() ))
        {
            SET_PLAYER_CONTROL( sub_1404(), 1 );
        }
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U283, 0, 0, 0 );
            SET_CAM_BEHIND_PED( sub_2202() );
        }
        sub_2250();
        sub_2297( 0 );
        if (DOES_BLIP_EXIST( l_U295 ))
        {
            REMOVE_BLIP( l_U295 );
        }
    }
    CLEAR_NAMED_CUTSCENE( "rpho1" );
    sub_2481();
    if (l_U261)
    {
        CLEAR_HELP();
        CLEAR_PRINTS();
    }
    if (l_U474[0] == 1)
    {
        CLEAR_PRINTS();
        PRINT( "HOS1_PROMPT_2", 7500, 1 );
    }
    else if (l_U474[1] == 1)
    {
        CLEAR_PRINTS();
        PRINT( "HOS1_PROMPT_4", 7500, 1 );
    }
    if (l_U263)
    {
        SWITCH_ROADS_BACK_TO_ORIGINAL( -530.95000000, -152.62000000, 100.00000000, -512.73000000, -617.61000000, -100.00000000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -392.04000000, -354.98000000, 100.00000000, -512.73000000, -617.61000000, -100.00000000 );
    }
    SWITCH_PED_PATHS_ON( -381.14640000, -170.44780000, 50.59280000, -432.32310000, -176.16680000, -50.54600000 );
    SWITCH_PED_PATHS_ON( -381.14640000, -170.44780000, 50.59280000, -376.43730000, -206.22790000, -50.26160000 );
    sub_2941( ref l_U283 );
    sub_2999();
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_1601(int iParam0, int iParam1)
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

void sub_1697(unknown uParam0, unknown uParam1)
{
    if (NOT (sub_1601( uParam0, uParam1 )))
    {
        sub_923( "Interactions_Ended: Interaction for this character not active" );
        return;
    }
    sub_1793();
    if (g_U813)
    {
        sub_1885();
    }
    else
    {
        sub_2003();
    }
    g_U10978 = 0;
    return;
}

void sub_1793()
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

void sub_1885()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1931();
    return;
}

void sub_1931()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_2003()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_2049();
    return;
}

void sub_2049()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_2202()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2250()
{
    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    return;
}

void sub_2297(unknown uParam0)
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

void sub_2481()
{
    if (l_U105)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED KILL_CHASE_HINT_CAM()" );
    }
    if (IS_HINT_RUNNING())
    {
        HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
    }
    l_U103 = 0;
    l_U102 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_2941(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            REMOVE_CHAR_FROM_GROUP( (uParam0^) );
        }
    }
    return;
}

void sub_2999()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

int sub_3133()
{
    if (l_U237)
    {
        if (IS_HINT_RUNNING())
        {
            if (((sub_3168( ref l_U283 )) > 18.00000000) || (sub_3333()))
            {
                HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U283, 0, 0, 0 );
                l_U237 = 0;
                return 1;
            }
        }
    }
    return 0;
}

void sub_3168(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    float Result;

    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    vVar6 = {0.00000000, 0.00000000, 0.00000000};
    Result = 0.00000000;
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        GET_CHAR_COORDINATES( sub_2202(), ref vVar3.x, ref vVar3.y, ref vVar3.z );
        GET_CHAR_COORDINATES( (uParam0^), ref vVar6.x, ref vVar6.y, ref vVar6.z );
        GET_DISTANCE_BETWEEN_COORDS_3D( vVar3.x, vVar3.y, vVar3.z, vVar6.x, vVar6.y, vVar6.z, ref Result );
        return Result;
    }
    return Result;
}

int sub_3333()
{
    if (sub_3346( ref l_U290 ))
    {
        GET_CAR_SPEED( l_U290, ref l_U425 );
        if (l_U425 > 15.00000000)
        {
            return 1;
        }
    }
    return 0;
}

int sub_3346(unknown uParam0)
{
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2202() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2202(), uParam0 );
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

int sub_3536(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam0^), sub_2202(), 0 ))
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

int sub_3628(unknown uParam0, float fParam1)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if ((sub_3168( uParam0 )) < fParam1)
            {
                if (HAS_CHAR_SPOTTED_CHAR( (uParam0^), sub_2202() ))
                {
                    if (IS_CHAR_ARMED( sub_2202(), 7 ))
                    {
                        if (IS_PLAYER_TARGETTING_CHAR( sub_1404(), (uParam0^) ))
                        {
                            return 1;
                        }
                        if (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_1404(), (uParam0^) ))
                        {
                            return 1;
                        }
                    }
                }
                if (IS_CHAR_SHOOTING( sub_2202() ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_3805()
{
    sub_3818( ref l_U283 );
    if (g_U65027 < 2)
    {
        g_U65027++;
    }
    g_U65028++;
    if (g_U65028 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_1404(), 150 );
        SAY_AMBIENT_SPEECH( sub_2202(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    sub_3991( ref l_U283 );
    sub_1582();
    return;
}

void sub_3818(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 0 );
        }
    }
    return;
}

void sub_3991(unknown uParam0)
{
    unknown uVar3;

    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if (IS_CHAR_IN_ANY_CAR( (uParam0^) ))
            {
                if (sub_4050( ref uVar3, (uParam0^) ))
                {
                    SET_CHAR_KEEP_TASK( (uParam0^), 1 );
                    TASK_LEAVE_CAR_IMMEDIATELY( (uParam0^), uVar3 );
                }
            }
        }
    }
    return;
}

int sub_4050(unknown uParam0, unknown uParam1)
{
    if (IS_CHAR_IN_ANY_CAR( uParam1 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam1, uParam0 );
        if (NOT ((uParam0^) == nil))
        {
            if (NOT (IS_CAR_DEAD( (uParam0^) )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_4178(unknown uParam0)
{
    int iVar3;

    if (sub_3346( ref iVar3 ))
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

void sub_4284()
{
    switch (l_U213)
    {
        case 0:
        l_U307 = {-385.40250000, -173.60310000, 13.60650000};
        l_U424 = 3.34520000;
        l_U437 = 31.81990000;
        l_U395 = {-386.63850000, -173.64720000, 13.57590000};
        l_U438 = 22.22000000;
        l_U398 = {-395.93940000, -173.03920000, 13.12770000};
        l_U328 = {-492.47020000, -359.51710000, 4.62390000};
        l_U426 = 128.33120000;
        l_U392 = {-493.81000000, -358.46340000, 4.63950000};
        l_U434 = 70.75550000;
        l_U325 = {-501.23390000, -350.05930000, 7.15800000};
        l_U196._fU8 = {-427.03020000, -180.51640000, 7.96420000};
        l_U380 = {-427.38400000, -194.19700000, 11.47800000};
        l_U196._fU8 = {-383.91300000, -173.18850000, 14.00770000};
        l_U196._fU56 = 0.00000000;
        l_U439 = 271.24740000;
        l_U401 = {-386.65160000, -168.88230000, 13.47240000};
        l_U477 = 0;
        l_U371 = {0.00000000, -1.00000000, 0.00000000};
        l_U410 = -0.50000000;
        l_U455 = 980768434;
        l_U454 = -1821258883;
        l_U456 = -1041692462;
        l_U458 = -525076767;
        l_U196._fU4 = 310135142;
        REQUEST_ANIMS( "misshossan1" );
        REQUEST_MODEL( l_U455 );
        REQUEST_MODEL( l_U196._fU4 );
        sub_4776( "PIHAUD" );
        sub_4895( 0, sub_2202(), "NIKO", 0 );
        CREATE_WIDGET_GROUP( "Hossan table position" );
        ADD_WIDGET_TOGGLE( "activate Hossan table position", ref l_U273 );
        ADD_WIDGET_FLOAT_SLIDER( "table pos x", ref l_U196._fU8._fU0, -1000.00000000, 1000.00000000, 0.01000000 );
        ADD_WIDGET_FLOAT_SLIDER( "table pos y", ref l_U196._fU8._fU4, -1000.00000000, 1000.00000000, 0.01000000 );
        ADD_WIDGET_FLOAT_SLIDER( "table pos z", ref l_U196._fU8._fU8, -1000.00000000, 1000.00000000, 0.01000000 );
        ADD_WIDGET_FLOAT_SLIDER( "binoculars heading", ref l_U196._fU56, -1000.00000000, 1000.00000000, 0.01000000 );
        END_WIDGET_GROUP();
        l_U213 = 1;
        break;
        case 1:
        if (NOT l_U234)
        {
            if (HAS_MODEL_LOADED( l_U455 ))
            {
                CLEAR_AREA( l_U307._fU0, l_U307._fU4, l_U307._fU8, 10.00000000, 1 );
                CREATE_CHAR( 26, l_U455, l_U307._fU0, l_U307._fU4, l_U307._fU8, ref l_U283, 1 );
                SET_CHAR_HEADING( l_U283, l_U424 );
                SET_CHAR_HEALTH( l_U283, 200 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U283, 0 );
                SET_CHAR_NEVER_TARGETTED( l_U283, 1 );
                SET_CHAR_CANT_BE_DRAGGED_OUT( l_U283, 1 );
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U283, 1 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U283, 1 );
                TASK_STAND_GUARD( l_U283, l_U307, l_U424, 0.00000000, 0, -1 );
                sub_4895( 1, l_U283, "HOSSAN", 0 );
                sub_5584( ref l_U283, ref l_U293, 1 );
                SET_PED_DIES_WHEN_INJURED( l_U283, 1 );
                sub_5746( ref l_U283, 20.00000000, 10.00000000 );
                TASK_LOOK_AT_CHAR( l_U283, sub_2202(), -2, 0 );
                l_U234 = 1;
            }
            else
            {
                WAIT( 0 );
            }
        }
        if ((NOT l_U235) AND (l_U234))
        {
            if ((HAVE_ANIMS_LOADED( "misshossan1" )) AND (HAS_MODEL_LOADED( l_U196._fU4 )))
            {
                TASK_PLAY_ANIM( l_U283, "friendly_idle", "misshossan1", 8.00000000, 1, 0, 0, 0, -2 );
                CREATE_OBJECT_NO_OFFSET( l_U196._fU4, l_U196._fU8._fU0, l_U196._fU8._fU4, l_U196._fU8._fU8, ref l_U196._fU0, 1 );
                SET_OBJECT_HEADING( l_U196._fU0, l_U196._fU56 );
                l_U235 = 1;
                l_U212 = 1;
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

void sub_4776(unknown uParam0)
{
    StrCopy( ref l_U4._fU0, uParam0, 16 );
    sub_4793();
    return;
}

void sub_4793()
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

void sub_4895(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U4._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U4._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_4975( "\n PED NUMBER ", uParam0 );
    sub_5015( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_4975(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5015(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5584(unknown uParam0, unknown uParam1, boolean bParam2)
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

void sub_5746(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), uParam1 );
            SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), uParam2 );
        }
    }
    return;
}

void sub_6080()
{
    sub_6128( ref l_U283, ref l_U486, "GENERIC_HI", "WAIT_FOR_ME", ref l_U279 );
    switch (l_U214)
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( l_U283 )))
        {
            if (NOT l_U239)
            {
                if (sub_3346( ref l_U290 ))
                {
                    if ((sub_3168( ref l_U283 )) < 10.00000000)
                    {
                        sub_6381();
                    }
                }
                else if (IS_CHAR_ON_FOOT( sub_2202() ))
                {
                    if ((sub_3168( ref l_U283 )) < 10.00000000)
                    {
                        sub_6381();
                    }
                }
            }
        }
        break;
        case 1: break;
    }
    if (IS_CHAR_ON_FOOT( sub_2202() ))
    {
        sub_6590( ref l_U283, ref l_U495, ref l_U307, ref l_U424, ref l_U274, 0.50000000, "friendly_idle", "misshossan1", 0, 1 );
        switch (l_U215)
        {
            case 0:
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U283, g_U65012._fU0, g_U65012._fU4, g_U65012._fU8, ref l_U319._fU0, ref l_U319._fU4, ref l_U319._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U283, g_U65015._fU0, g_U65015._fU4, g_U65015._fU8, ref l_U322._fU0, ref l_U322._fU4, ref l_U322._fU8 );
            if (IS_CHAR_IN_ANGLED_AREA_3D( sub_2202(), l_U319._fU0, l_U319._fU4, l_U319._fU8, l_U322._fU0, l_U322._fU4, l_U322._fU8, 6.00000000, 0 ))
            {
                if (sub_7108())
                {
                    CLEAR_PRINTS();
                    sub_2297( 0 );
                    SET_PLAYER_CONTROL( sub_1404(), 0 );
                    SET_MISSION_FLAG( 1 );
                    sub_7203( l_U502, l_U463 );
                    l_U276 = 1;
                    DO_SCREEN_FADE_OUT( 100 );
                    CLEAR_PRINTS();
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    if (IS_HINT_RUNNING())
                    {
                        HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U283, 0, 0, 0 );
                    }
                    LOAD_ADDITIONAL_TEXT( "PIHAUD", 6 );
                    SWITCH_PED_PATHS_OFF( -378.94000000, -170.68000000, 100.00000000, -451.08000000, -176.07000000, -100.00000000 );
                    SWITCH_PED_PATHS_OFF( -381.14640000, -170.44780000, 100.00000000, -376.43730000, -223.77000000, -100.00000000 );
                    GET_CHAR_COORDINATES( sub_2202(), ref l_U298._fU0, ref l_U298._fU4, ref l_U298._fU8 );
                    CLEAR_AREA( l_U298._fU0, l_U298._fU4, l_U298._fU8, 100.00000000, 1 );
                    SET_OBJECT_HEADING( l_U196._fU0, l_U196._fU56 );
                    SET_OBJECT_COORDINATES( l_U196._fU0, l_U196._fU8._fU0, l_U196._fU8._fU4, l_U196._fU8._fU8 );
                    CLEAR_NAMED_CUTSCENE( "rpho1" );
                    START_CUTSCENE_NOW( "rpho1" );
                    while (NOT HAS_CUTSCENE_LOADED())
                    {
                        WAIT( 0 );
                    }
                    while (NOT HAS_CUTSCENE_FINISHED())
                    {
                        WAIT( 0 );
                    }
                    sub_9911( ref l_U290, ref l_U401, ref l_U439, 20.00000000 );
                    sub_10051();
                    sub_11845( 1 );
                    DO_SCREEN_FADE_IN( 1000 );
                    l_U236 = 1;
                    l_U216 = 0;
                }
            }
            break;
            default:
        }
    }
    return;
}

void sub_6128(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (sub_6142( uParam1, 7000 ))
    {
        if ((sub_3168( uParam0 )) < 15)
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

int sub_6142(unknown uParam0, int iParam1)
{
    GET_GAME_TIMER( ref l_U113 );
    if ((l_U113 - (uParam0^)) > iParam1)
    {
        return 1;
    }
    return 0;
}

void sub_6381()
{
    if (IS_CHAR_ON_FOOT( sub_2202() ))
    {
        HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U283, 0, 0, 6000 );
        l_U237 = 1;
    }
    l_U214 = 1;
    return;
}

void sub_6590(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, boolean bParam9)
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

int sub_7108()
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

void sub_7203(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (g_U10978)
    {
        sub_923( "Interactions_Started: Already on a mission" );
        return;
    }
    uVar4 = sub_803( uParam0 );
    if (g_U34175._fU4)
    {
        sub_923( "Interactions_Started: Another interaction is already taking place" );
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
        sub_923( "Interactions_Started: This Random Character has been set to NOT allowToActivate" );
        return;
    }
    g_U34175._fU4 = 1;
    g_U34175._fU8 = uParam0;
    g_U34175._fU12 = uParam1;
    sub_7566();
    sub_8337( g_U34048[uVar4]._fU32 );
    g_U34048[uVar4]._fU32 = 0;
    sub_8481( uParam0, uParam1 );
    g_U10978 = 1;
    return;
}

void sub_7566()
{
    sub_7575();
    sub_7678( ref g_U9893._fU68 );
    sub_7727();
    return;
}

void sub_7575()
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

void sub_7678(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_7727()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_7765( 1, g_U569[I] )) == 0)
        {
            sub_8016( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_8194())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_7765(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_8016(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_8101( g_U569 - 1 );
    return;
}

void sub_8101(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_8194()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_7765( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_8337(int iParam0)
{
    g_U34175._fU16._fU4 += iParam0;
    sub_8371();
    INCREMENT_INT_STAT( 286, iParam0 );
    return;
}

void sub_8371()
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

void sub_8481(unknown uParam0, int iParam1)
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
    sub_9327( cVar4 );
    return;
}

void sub_9327(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_9911(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    GET_CHAR_COORDINATES( sub_2202(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (LOCATE_CAR_3D( (uParam0^), uVar6._fU0, uVar6._fU4, uVar6._fU8, uParam3, uParam3, uParam3, 0 ))
            {
                SET_CAR_HEADING( (uParam0^), (uParam2^) );
                SET_CAR_COORDINATES( (uParam0^), iParam1->_fU0, iParam1->_fU4, iParam1->_fU8 );
            }
        }
    }
    return;
}

void sub_10051()
{
    SWITCH_PED_PATHS_ON( -381.14640000, -170.44780000, 50.59280000, -432.32310000, -176.16680000, -50.54600000 );
    SWITCH_PED_PATHS_ON( -381.14640000, -170.44780000, 50.59280000, -376.43730000, -206.22790000, -50.26160000 );
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2202(), 0 );
    CLEAR_WANTED_LEVEL( sub_1404() );
    SET_WANTED_MULTIPLIER( 0.10000000 );
    REQUEST_CAR_RECORDING( 976 );
    SUPPRESS_CAR_MODEL( l_U456 );
    REQUEST_MODEL( l_U456 );
    REQUEST_MODEL( l_U454 );
    REQUEST_MODEL( l_U458 );
    REQUEST_ANIMS( "misshossan1" );
    REQUEST_ANIMS( "gestures@niko" );
    REQUEST_CAR_RECORDING( 997 );
    GET_WEAPONTYPE_MODEL( 7, ref l_U457 );
    REQUEST_MODEL( l_U457 );
    LOAD_COMBAT_DECISION_MAKER( 7, ref l_U487 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U489 );
    LOAD_COMBAT_DECISION_MAKER( 1, ref l_U488 );
    # -sub_C1FFC0-0xc214c8( 3, ref l_U491 );
    LOAD_COMBAT_DECISION_MAKER( 1, ref l_U492 );
    LOAD_ADDITIONAL_TEXT( "WI_HOS1", 0 );
    sub_10406( "hossan_1" );
    LOAD_ALL_OBJECTS_NOW();
    LOAD_SCENE( l_U307._fU0, l_U307._fU4, l_U307._fU8 );
    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U487, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_FIRE_RATE( l_U487, 2 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U487, 25 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U489, 2 );
    if (NOT (IS_CHAR_INJURED( l_U283 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U283 );
        SET_CHAR_HEADING( l_U283, 115.27670000 );
        SET_CHAR_COORDINATES( l_U283, -388.27720000, -172.86400000, 13.53540000 );
        sub_10751( ref l_U283, ref l_U491, ref l_U492 );
    }
    SET_CHAR_HEADING( sub_2202(), 55.86840000 );
    SET_CHAR_COORDINATES( sub_2202(), -385.59520000, -173.62090000, 13.60170000 );
    REMOVE_BLIP( l_U293 );
    TASK_FLUSH_ROUTE();
    TASK_EXTEND_ROUTE( l_U398._fU0, l_U398._fU4, l_U398._fU8 );
    OPEN_SEQUENCE_TASK( ref l_U495 );
    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U398._fU0, l_U398._fU4, l_U398._fU8, 2, -1, 0.40000000 );
    TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2202() );
    TASK_LOOK_AT_CHAR( 0, sub_2202(), -2, 0 );
    CLOSE_SEQUENCE_TASK( l_U495 );
    TASK_PERFORM_SEQUENCE( l_U283, l_U495 );
    CLEAR_SEQUENCE_TASK( l_U495 );
    l_U521._fU0 = l_U283;
    l_U521._fU8 = {-423.66540000, -219.83820000, 8.06540000};
    l_U521._fU20 = 181.04900000;
    l_U521._fU24 = {-428.72740000, -212.42280000, 8.41530000};
    l_U521._fU36 = 183.13560000;
    l_U521._fU40 = {-429.98850000, -213.99230000, 8.30180000};
    l_U521._fU52 = 16.61340000;
    l_U521._fU116[0] = {-421.60080000, -226.55180000, 9.60822200};
    l_U521._fU144[0] = {-4.26930900, -3.42823100, 32.61373000};
    l_U521._fU172[0] = 36.30002000;
    l_U521._fU116[1] = {-429.34210000, -214.87250000, 9.71173600};
    l_U521._fU144[1] = {-0.69125100, -0.00000000, 13.87849000};
    l_U521._fU172[1] = 36.00002000;
    l_U521._fU208[0] = 0;
    l_U521._fU208[1] = 1;
    l_U521._fU184[0] = 0.01000000;
    l_U521._fU196[0] = 150.00000000;
    l_U521._fU184[1] = 0.01000000;
    l_U521._fU196[1] = 10.00000000;
    l_U521._fU56 = {-376.15000000, -189.93000000, 100.00000000};
    l_U521._fU68 = {-445.30000000, -239.81000000, -100.00000000};
    l_U521._fU80 = {-380.76000000, -170.68000000, 100.00000000};
    l_U521._fU92 = {-445.38000000, -227.89000000, -100.00000000};
    l_U521._fU104 = {-442.85000000, -225.78000000, 7.00240000};
    l_U521._fU248 = "PIH_LOST";
    return;
}

void sub_10406(unknown uParam0)
{
    string sVar3;

    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    StrCopy( ref g_U9232, uParam0, 32 );
    sVar3 = "text_link_mission";
    if (IS_NETWORK_SESSION())
    {
        sVar3 = "txtlnkmiss_net";
    }
    while (NOT (HAS_SCRIPT_LOADED( sVar3 )))
    {
        REQUEST_SCRIPT( sVar3 );
        WAIT( 0 );
    }
    g_U9240 = START_NEW_SCRIPT( sVar3, 1024 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( sVar3 );
    return;
}

void sub_10751(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_CHAR_DECISION_MAKER( (uParam0^), (uParam1^) );
            SET_COMBAT_DECISION_MAKER( (uParam0^), (uParam2^) );
            N_1061756705( (uParam1^), 12 );
            N_1061756705( (uParam1^), 9 );
            N_1061756705( (uParam1^), 7 );
            N_1061756705( (uParam1^), 15 );
            N_1061756705( (uParam1^), 31 );
            N_1061756705( (uParam1^), 43 );
            N_1061756705( (uParam1^), 36 );
            N_1061756705( (uParam1^), 37 );
            N_1061756705( (uParam1^), 13 );
            N_1061756705( (uParam1^), 56 );
            N_1061756705( (uParam1^), 79 );
            N_1061756705( (uParam1^), 11 );
            N_1061756705( (uParam1^), 20 );
            N_1061756705( (uParam1^), 46 );
            N_1061756705( (uParam1^), 44 );
            N_1061756705( (uParam1^), 125 );
            N_1061756705( (uParam1^), 17 );
            ADD_CHAR_DECISION_MAKER_EVENT_RESPONSE( (uParam1^), 31, 413, 0, 100, 100, 100, 0, 1 );
            ADD_CHAR_DECISION_MAKER_EVENT_RESPONSE( (uParam1^), 31, 412, 0, 10, 10, 10, 0, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 0 );
        }
    }
    return;
}

void sub_11845(boolean bParam0)
{
    CLEAR_PRINTS();
    CLEAR_HELP();
    sub_2297( 0 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    SET_WIDESCREEN_BORDERS( 0 );
    if (IS_PLAYER_PLAYING( sub_1404() ))
    {
        SET_INTERP_IN_OUT_VEHICLE_ENABLED_THIS_FRAME( 0 );
        SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
        SET_CAM_BEHIND_PED( sub_2202() );
        if (bParam0)
        {
            CLEAR_CHAR_TASKS( sub_2202() );
        }
        SET_PLAYER_CONTROL( sub_1404(), 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_2202(), 0 );
    }
    ALLOW_EMERGENCY_SERVICES( 1 );
    return;
}

int sub_12137(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        return IS_CHAR_INJURED( (uParam0^) );
    }
    return 0;
}

void sub_12294()
{
    if (DOES_CHAR_EXIST( l_U284 ))
    {
        if (IS_CHAR_INJURED( l_U284 ))
        {
            if (IS_CHAR_IN_WATER( l_U284 ))
            {
                CLEAR_PRINTS();
                sub_2297( 0 );
                PRINT_NOW( "HOS1_GOD14", 7500, 1 );
                GET_GAME_TIMER( ref l_U521._fU220 );
                l_U277 = 1;
                l_U216 = 6;
            }
        }
    }
    return;
}

void sub_12531(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_12552( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

void sub_12552(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_12606( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_12606(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_12628( iParam1 )))
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
    sub_13316( ref g_U8395, ref l_U4 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_12628(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_12705( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_12705( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_12705( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_12705(unknown uParam0)
{
    return;
}

void sub_13316(int iParam0, int iParam1)
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

void sub_13581()
{
    switch (l_U217)
    {
        case 0:
        GET_SCRIPT_TASK_STATUS( l_U283, 29, ref l_U498 );
        if (l_U498 == 7)
        {
            GET_GAME_TIMER( ref l_U467 );
            l_U217 = 1;
        }
        break;
        case 1:
        if (sub_13684( ref l_U283, 200 ))
        {
            sub_2297( 0 );
            CLEAR_PRINTS();
            PRINT_NOW( "HOS1_PROMPT_2", 7500, 1 );
            sub_3805();
        }
        sub_6590( ref l_U283, ref l_U495, ref l_U398, ref l_U438, ref l_U274, 0.50000000, "friendly_idle", "misshossan1", 1, 0 );
        sub_13922( ref l_U283, ref l_U293, "HOS1_GOD18", "HOS1_GOD17" );
        if (NOT l_U280)
        {
            if (NOT (IS_CHAR_INJURED( l_U283 )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U293 )))
                {
                    if ((sub_3168( ref l_U283 )) >= 30.00000000)
                    {
                        ADD_BLIP_FOR_CHAR( l_U283, ref l_U293 );
                        SET_BLIP_AS_FRIENDLY( l_U293, 1 );
                        CLEAR_PRINTS();
                        PRINT_NOW( "HOS1_PROMPT_5", 7500, 1 );
                    }
                }
                else if ((sub_3168( ref l_U283 )) < 10.00000000)
                {
                    if (DOES_BLIP_EXIST( l_U293 ))
                    {
                        REMOVE_BLIP( l_U293 );
                    }
                }
            }
            if ((sub_3168( ref l_U283 )) < 30)
            {
                CLEAR_PRINTS();
                PRINT_NOW( "HOS1_GOD17", 7500, 1 );
                SAY_AMBIENT_SPEECH( l_U283, "NEED_A_VEHICLE", 1, 0, 2 );
                l_U280 = 1;
            }
        }
        if (sub_14358( l_U283 ))
        {
            if (DOES_BLIP_EXIST( l_U293 ))
            {
                CLEAR_CHAR_TASKS( l_U283 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U283, 0 );
                sub_14497( ref l_U283, ref l_U493, ref l_U490, 0 );
                CLEAR_AREA( l_U328._fU0, l_U328._fU4, l_U328._fU8, 20.00000000, 1 );
                l_U263 = 1;
                CLEAR_PRINTS();
                REMOVE_BLIP( l_U293 );
                ADD_BLIP_FOR_COORD( l_U325._fU0, l_U325._fU4, l_U325._fU8, ref l_U295 );
                SET_ROUTE( l_U295, 1 );
                sub_14986( ref l_U295, -550.74630000, -308.98700000, 5.35480000, 93.97000000 );
                GET_GAME_TIMER( ref l_U467 );
                l_U217 = 2;
            }
        }
        break;
        case 2:
        sub_15064();
        if (DOES_BLIP_EXIST( l_U295 ))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_2202(), l_U325._fU0, l_U325._fU4, l_U325._fU8, 2.50000000, 2.50000000, 2.50000000, 1 ))
            {
                if ((sub_3168( ref l_U283 )) < 10.00000000)
                {
                    if (sub_19385())
                    {
                        sub_19802( ref l_U283, ref l_U290 );
                        if (sub_20258( ref l_U290 ))
                        {
                            TASK_CAR_TEMP_ACTION( sub_2202(), l_U290, 6, 100 );
                            l_U243 = 1;
                        }
                        sub_20344();
                    }
                }
                else if (NOT g_U65018)
                {
                    PRINT( "HOS1_GOD19", 7500, 1 );
                    PRINTNL();
                    g_U65018 = 1;
                }
            }
            else if (g_U65018)
            {
                CLEAR_THIS_PRINT( "HOS1_GOD19" );
                g_U65018 = 0;
            }
        }
        if (l_U216 != 1)
        {
            sub_23026( ref l_U283, ref l_U293, ref l_U325, ref l_U295, "HOS1_GOD16", "HOS1_GOD1", 1, -550.74630000, -308.98700000, 5.35480000, 93.97000000, ref l_U493, ref l_U490 );
        }
        break;
    }
    if ((IS_KEYBOARD_KEY_PRESSED( 36 )) AND (NOT l_U225[0]))
    {
        SET_CHAR_COORDINATES( sub_2202(), -488.69240000, -345.80510000, 3.76810000 );
        SET_CHAR_HEADING( sub_2202(), 287.99660000 );
        l_U225[0] = 1;
    }
    return;
}

int sub_13684(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            GET_CHAR_HEALTH( (uParam0^), ref iVar4 );
            iVar5 = ROUND( uParam1 * 0.80000000 );
            if (iVar4 < iVar5)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_13922(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT (DOES_BLIP_EXIST( (uParam1^) )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2202() ))
        {
            ADD_BLIP_FOR_CHAR( (uParam0^), uParam1 );
            SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
            CLEAR_PRINTS();
            PRINT_NOW( uParam2, 7500, 1 );
        }
    }
    else if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2202() )))
    {
        if (DOES_BLIP_EXIST( (uParam1^) ))
        {
            REMOVE_BLIP( (uParam1^) );
        }
        CLEAR_PRINTS();
        PRINT_NOW( uParam3, 7500, 1 );
    }
    return;
}

int sub_14358(unknown uParam0)
{
    if ((sub_3168( ref uParam0 )) < 10.00000000)
    {
        return 1;
    }
    if ((IS_PLAYER_PRESSING_HORN( sub_1404() )) AND ((sub_3168( ref uParam0 )) < (10.00000000 * 2.00000000)))
    {
        return 1;
    }
    return 0;
}

void sub_14497(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    switch (uParam3)
    {
        case 0:
        if (DOES_GROUP_EXIST( (uParam1^) ))
        {
            REMOVE_GROUP( (uParam1^) );
        }
        if (IS_PED_IN_GROUP( (uParam0^) ))
        {
            REMOVE_CHAR_FROM_GROUP( (uParam0^) );
        }
        if (DOES_DECISION_MAKER_EXIST( (uParam2^) ))
        {
            REMOVE_DECISION_MAKER( (uParam2^) );
        }
        if (sub_14610( uParam0, uParam1 ))
        {
            COPY_GROUP_CHAR_DECISION_MAKER( 65537, uParam2 );
            SET_GROUP_CHAR_DECISION_MAKER( (uParam0^), (uParam2^) );
        }
        break;
        case 1:
        if (DOES_GROUP_EXIST( (uParam1^) ))
        {
            REMOVE_GROUP( (uParam1^) );
        }
        if (IS_PED_IN_GROUP( (uParam0^) ))
        {
            REMOVE_CHAR_FROM_GROUP( (uParam0^) );
        }
        if (DOES_DECISION_MAKER_EXIST( (uParam2^) ))
        {
            REMOVE_DECISION_MAKER( (uParam2^) );
        }
        if (sub_14610( uParam0, uParam1 ))
        {
            COPY_GROUP_CHAR_DECISION_MAKER( 65536, uParam2 );
            SET_GROUP_CHAR_DECISION_MAKER( (uParam0^), (uParam2^) );
        }
        break;
    }
    return;
}

int sub_14610(unknown uParam0, unknown uParam1)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            GET_PLAYER_GROUP( sub_1404(), uParam1 );
            SET_GROUP_MEMBER( (uParam1^), (uParam0^) );
            return 1;
        }
    }
    return 0;
}

void sub_14986(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

void sub_15064()
{
    switch (l_U222)
    {
        case 0:
        if (sub_15302( ref l_U283, ref l_U290, 0 ))
        {
            sub_12531( "PIH_WHERE", ref l_U503[0], 8, 1 );
            l_U222 = 1;
        }
        break;
        case 1:
        if (sub_15302( ref l_U283, ref l_U290, 0 ))
        {
            if (l_U259)
            {
                sub_15606( "PIH_WHERE", ref l_U503[0], 8, 1 );
                l_U259 = 0;
            }
            if (NOT (sub_15732( l_U503[0] )))
            {
                CLEAR_PRINTS();
                PRINT( "HOS1_GOD1", 7500, 1 );
                GET_GAME_TIMER( ref l_U467 );
                l_U222 = 2;
            }
        }
        else if (NOT l_U259)
        {
            if (sub_15732( l_U503[0] ))
            {
                sub_15989( ref l_U503[0] );
                l_U259 = 1;
            }
        }
        break;
        case 2:
        if (sub_15302( ref l_U283, ref l_U290, 0 ))
        {
            switch (g_U65027)
            {
                case 0:
                if (sub_6142( ref l_U467, 7500 ))
                {
                    CLEAR_PRINTS();
                    if (sub_12531( "PIH_BANT1V1", ref l_U503[0], 8, 1 ))
                    {
                        l_U222 = 3;
                    }
                }
                break;
                case 1:
                if (sub_6142( ref l_U467, 7500 ))
                {
                    CLEAR_PRINTS();
                    if (sub_12531( "PIH_BANT1V2", ref l_U503[0], 8, 1 ))
                    {
                        l_U222 = 3;
                    }
                }
                break;
                case 2: break;
            }
        }
        break;
        case 3:
        switch (g_U65027)
        {
            case 0:
            if (sub_15302( ref l_U283, ref l_U290, 0 ))
            {
                if (l_U259)
                {
                    sub_15606( "PIH_BANT1V1", ref l_U503[0], 8, 1 );
                    l_U259 = 0;
                }
                if (NOT (sub_15732( l_U503[0] )))
                {
                    l_U222 = 26;
                }
            }
            else if (NOT l_U259)
            {
                if (sub_15732( l_U503[0] ))
                {
                    sub_15989( ref l_U503[0] );
                    l_U259 = 1;
                }
            }
            break;
            case 1:
            if (sub_15302( ref l_U283, ref l_U290, 0 ))
            {
                if (l_U259)
                {
                    sub_15606( "PIH_BANT1V2", ref l_U503[0], 8, 1 );
                    l_U259 = 0;
                }
                if (NOT (sub_15732( l_U503[0] )))
                {
                    l_U222 = 26;
                }
            }
            else if (NOT l_U259)
            {
                if (sub_15732( l_U503[0] ))
                {
                    sub_15989( ref l_U503[0] );
                    l_U259 = 1;
                }
            }
            break;
            case 2: break;
        }
        break;
        case 4:
        sub_2297( 0 );
        sub_12531( "PIH_ARR", ref l_U503[0], 8, 1 );
        break;
        case 5:
        if (sub_15302( ref l_U283, ref l_U290, 0 ))
        {
            if (l_U259)
            {
                sub_15606( "PIH_ARR", ref l_U503[0], 8, 1 );
                l_U259 = 0;
            }
            if (NOT (sub_15732( l_U503[0] )))
            {
                l_U222 = 26;
            }
        }
        else if (NOT l_U259)
        {
            if (sub_15732( l_U503[0] ))
            {
                sub_15989( ref l_U503[0] );
                l_U259 = 1;
            }
        }
        break;
        case 6:
        sub_2297( 0 );
        if (sub_12531( "PIH_TALKS", ref l_U503[0], 8, 1 ))
        {
            l_U222 = 7;
        }
        break;
        case 7:
        if (NOT (sub_15732( l_U503[0] )))
        {
            ;
        }
        break;
        case 8:
        sub_2297( 0 );
        if (sub_12531( "PIH_GETIM", ref l_U503[0], 8, 1 ))
        {
            l_U222 = 9;
        }
        break;
        case 9:
        if (NOT (sub_15732( l_U503[0] )))
        {
            ;
        }
        break;
        case 10:
        if (NOT (sub_15732( l_U503[0] )))
        {
            CLEAR_PRINTS();
            PRINT_NOW( "HOS1_GOD3", 7500, 1 );
            l_U222 = 11;
        }
        break;
        case 11:
        if (sub_15302( ref l_U283, ref l_U290, 0 ))
        {
            switch (g_U65027)
            {
                case 0:
                if (sub_6142( ref l_U467, 7500 ))
                {
                    CLEAR_PRINTS();
                    sub_2297( 0 );
                    if (sub_12531( "PIH_BANT2V1", ref l_U503[0], 8, 1 ))
                    {
                        l_U222 = 12;
                    }
                }
                break;
                case 1:
                if (sub_6142( ref l_U467, 7500 ))
                {
                    CLEAR_PRINTS();
                    sub_2297( 0 );
                    if (sub_12531( "PIH_BANT2V2", ref l_U503[0], 8, 1 ))
                    {
                        l_U222 = 12;
                    }
                }
                break;
                case 2: break;
            }
        }
        break;
        case 12:
        switch (g_U65027)
        {
            case 0:
            if (sub_15302( ref l_U283, ref l_U290, 0 ))
            {
                if (l_U259)
                {
                    sub_15606( "PIH_BANT2V1", ref l_U503[0], 8, 1 );
                    l_U259 = 0;
                }
                if (NOT (sub_15732( l_U503[0] )))
                {
                    STOP_PED_SPEAKING( sub_2202(), 0 );
                    l_U222 = 25;
                }
            }
            else if (NOT l_U259)
            {
                if (sub_15732( l_U503[0] ))
                {
                    sub_15989( ref l_U503[0] );
                    l_U259 = 1;
                }
            }
            break;
            case 1:
            if (sub_15302( ref l_U283, ref l_U290, 0 ))
            {
                if (l_U259)
                {
                    sub_15606( "PIH_BANT2V2", ref l_U503[0], 8, 1 );
                    l_U259 = 0;
                }
                if (NOT (sub_15732( l_U503[0] )))
                {
                    STOP_PED_SPEAKING( sub_2202(), 0 );
                    l_U222 = 25;
                }
            }
            else if (NOT l_U259)
            {
                if (sub_15732( l_U503[0] ))
                {
                    sub_15989( ref l_U503[0] );
                    l_U259 = 1;
                }
            }
            break;
            case 2:
            l_U222 = 25;
            break;
        }
        break;
        case 13:
        if (sub_15302( ref l_U283, ref l_U290, 0 ))
        {
            sub_2297( 0 );
            if (sub_12531( "PIH_LOSE", ref l_U503[0], 8, 1 ))
            {
                l_U222 = 14;
            }
        }
        break;
        case 14:
        if (sub_15302( ref l_U283, ref l_U290, 0 ))
        {
            if (l_U259)
            {
                sub_15606( "PIH_LOSE", ref l_U503[0], 8, 1 );
                l_U259 = 0;
            }
            if (NOT (sub_15732( l_U503[0] )))
            {
                ;
            }
        }
        else if (NOT l_U259)
        {
            if (sub_15732( l_U503[0] ))
            {
                sub_15989( ref l_U503[0] );
                l_U259 = 1;
            }
        }
        break;
        case 15:
        sub_2297( 0 );
        if (sub_12531( "PIH_LOST", ref l_U503[0], 8, 1 ))
        {
            l_U222 = 16;
        }
        break;
        case 16:
        if (NOT (sub_15732( l_U503[0] )))
        {
            ;
        }
        break;
        case 17:
        if (sub_15302( ref l_U283, ref l_U290, 0 ))
        {
            sub_2297( 0 );
            if (sub_12531( "PIH_RUN", ref l_U503[0], 8, 1 ))
            {
                l_U222 = 26;
            }
        }
        break;
        case 18:
        if (sub_15302( ref l_U283, ref l_U290, 0 ))
        {
            sub_2297( 0 );
            sub_12531( "PIH_CASH", ref l_U503[0], 8, 1 );
            l_U222 = 19;
        }
        break;
        case 19:
        if (sub_15302( ref l_U283, ref l_U290, 0 ))
        {
            if (NOT (sub_15732( l_U503[0] )))
            {
                sub_2297( 0 );
                sub_12531( "PIH_GOHOME", ref l_U503[0], 8, 1 );
                l_U222 = 20;
            }
        }
        break;
        case 20:
        if (sub_15302( ref l_U283, ref l_U290, 0 ))
        {
            if (NOT (sub_15732( l_U503[0] )))
            {
                if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "HOS1_GOD13", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
                {
                    CLEAR_PRINTS();
                    PRINT_NOW( "HOS1_GOD13", 7500, 1 );
                }
                GET_GAME_TIMER( ref l_U467 );
                l_U222 = 22;
            }
        }
        break;
        case 22:
        if (sub_15302( ref l_U283, ref l_U290, 0 ))
        {
            if (sub_6142( ref l_U467, 7500 ))
            {
                switch (g_U65027)
                {
                    case 0:
                    if (sub_6142( ref l_U467, 7500 ))
                    {
                        CLEAR_PRINTS();
                        sub_2297( 0 );
                        if (sub_12531( "PIH_BANT3V1", ref l_U503[0], 8, 1 ))
                        {
                            l_U222 = 23;
                        }
                    }
                    break;
                    case 1:
                    if (sub_6142( ref l_U467, 7500 ))
                    {
                        CLEAR_PRINTS();
                        sub_2297( 0 );
                        if (sub_12531( "PIH_BANT3V2", ref l_U503[0], 8, 1 ))
                        {
                            l_U222 = 23;
                        }
                    }
                    break;
                    case 2: break;
                }
            }
        }
        break;
        case 23:
        switch (g_U65027)
        {
            case 0:
            if (sub_15302( ref l_U283, ref l_U290, 0 ))
            {
                if (l_U259)
                {
                    sub_15606( "PIH_BANT3V1", ref l_U503[0], 8, 1 );
                    l_U259 = 0;
                }
                if (NOT (sub_15732( l_U503[0] )))
                {
                    l_U222 = 26;
                }
            }
            else if (NOT l_U259)
            {
                if (sub_15732( l_U503[0] ))
                {
                    sub_15989( ref l_U503[0] );
                    l_U259 = 1;
                }
            }
            break;
            case 1:
            if (sub_15302( ref l_U283, ref l_U290, 0 ))
            {
                if (l_U259)
                {
                    sub_15606( "PIH_BANT3V2", ref l_U503[0], 8, 1 );
                    l_U259 = 0;
                }
                if (NOT (sub_15732( l_U503[0] )))
                {
                    l_U222 = 26;
                }
            }
            else if (NOT l_U259)
            {
                if (sub_15732( l_U503[0] ))
                {
                    sub_15989( ref l_U503[0] );
                    l_U259 = 1;
                }
            }
            break;
        }
        break;
        case 24:
        sub_2297( 0 );
        if (sub_12531( "PIH_PHOME", ref l_U503[0], 8, 1 ))
        {
            ;
        }
        break;
        case 25:
        if (sub_15302( ref l_U283, ref l_U290, 0 ))
        {
            if ((sub_3168( ref l_U284 )) > 50)
            {
                if (sub_6142( ref l_U485, 30000 ))
                {
                    sub_12531( "PIH_2FAR", ref l_U503[0], 8, 1 );
                    GET_GAME_TIMER( ref l_U485 );
                }
            }
        }
        break;
        case 26: break;
    }
    return;
}

int sub_15302(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (IS_PED_IN_GROUP( (uParam0^) ))
        {
            if (bParam2)
            {
                if (IS_WANTED_LEVEL_GREATER( sub_1404(), 0 ))
                {
                    GET_GAME_TIMER( ref l_U118 );
                    return 0;
                }
                if (NOT (sub_6142( ref l_U118, 3000 )))
                {
                    return 0;
                }
            }
            if ((IS_CHAR_ON_FOOT( (uParam0^) )) AND (IS_CHAR_ON_FOOT( sub_2202() )))
            {
                return 1;
            }
            if (DOES_VEHICLE_EXIST( (uParam1^) ))
            {
                if (IS_VEH_DRIVEABLE( (uParam1^) ))
                {
                    if ((IS_CHAR_SITTING_IN_CAR( (uParam0^), (uParam1^) )) AND (IS_CHAR_SITTING_IN_CAR( sub_2202(), (uParam1^) )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_15606(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_15627( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

int sub_15627(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_12606( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_15732(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_12705( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_12705( "\n speech is not playing" );
    }
    return 0;
}

int sub_15989(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_12705( "\n already paused" );
    }
    else if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_12705( "\n CONVERSATION PAUSED AT LINE " );
            sub_16145( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_12705( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_12705( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_12705( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_16145(unknown uParam0)
{
    return;
}

int sub_19385()
{
    if (sub_19396( 1, 1 ))
    {
        CLEAR_PRINTS();
        CLEAR_HELP();
        sub_2297( 0 );
        DISPLAY_HUD( 0 );
        DISPLAY_RADAR( 0 );
        SET_WIDESCREEN_BORDERS( 1 );
        SET_PLAYER_CONTROL( sub_1404(), 0 );
        CLEAR_CHAR_TASKS( sub_2202() );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_2202(), 1 );
        ALLOW_EMERGENCY_SERVICES( 0 );
        return 1;
    }
    return 0;
}

int sub_19396(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_2202() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2202(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_2202() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2202(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2202()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2202() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2202() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_1404() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_1404() )))
    {
        return 0;
    }
    return 1;
}

void sub_19802(unknown uParam0, unknown uParam1)
{
    sub_19820( 1, 1 );
    sub_19889( uParam0 );
    sub_19988( 1, ref l_U179, 1, 1 );
    sub_20096( uParam1 );
    return;
    break;
    2;
    1;
    ref l_U115;
    2;
    1;
    ref l_U178;
    2;
    1;
    ref l_U179;
    1;
    ref l_U178;
    1;
    1;
    ref l_U115;
    uParam1;
    2;
    1;
    ref l_U114;
    ref l_U114;
    uParam0;
    break;
}

void sub_19820(unknown uParam0, unknown uParam1)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            GET_CHAR_HEALTH( (uParam0^), uParam1 );
        }
    }
    return;
}

void sub_19889(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_CHAR_HEALTH( (uParam0^), 200 );
            SET_CHAR_PROOFS( (uParam0^), 1, 1, 1, 1, 1 );
        }
    }
    return;
}

void sub_19988(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            GET_CAR_HEALTH( (uParam0^), uParam1 );
            (uParam2^) = GET_ENGINE_HEALTH( (uParam0^) );
            (uParam3^) = GET_PETROL_TANK_HEALTH( (uParam0^) );
        }
    }
    return;
}

void sub_20096(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (ProtectedGet(l_U115) < 500)
            {
                SET_CAR_HEALTH( (uParam0^), 500 );
            }
            if (ProtectedGet(l_U178) < 500)
            {
                SET_ENGINE_HEALTH( (uParam0^), 500.00000000 );
            }
            if (ProtectedGet(l_U179) < 500.00000000)
            {
                SET_PETROL_TANK_HEALTH( (uParam0^), 500.00000000 );
            }
            SET_CAR_PROOFS( (uParam0^), 1, 1, 1, 1, 1 );
        }
    }
    return;
}

int sub_20258(unknown uParam0)
{
    if (sub_3346( uParam0 ))
    {
        if (IS_CHAR_SITTING_IN_CAR( sub_2202(), (uParam0^) ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_20344()
{
    l_U216 = 1;
    REMOVE_BLIP( l_U295 );
    if (l_U243)
    {
        if (IS_VEH_DRIVEABLE( l_U290 ))
        {
            SET_WIDESCREEN_BORDERS( 1 );
            if (NOT (IS_CHAR_SITTING_IN_CAR( l_U283, l_U290 )))
            {
                CLEAR_CHAR_TASKS( l_U283 );
                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U283, l_U290, 0 );
            }
            SET_CAR_HEADING( l_U290, 238.89140000 );
            SET_CAR_COORDINATES( l_U290, -501.19680000, -348.49620000, 4.77600000 );
            TASK_LOOK_AT_CHAR( sub_2202(), l_U283, -2, 0 );
            sub_2297( 0 );
            l_U222 = 4;
            sub_15064();
            sub_20541();
            if (sub_21570())
            {
                SET_CAM_POS( l_U451, -497.28160000, -348.47810000, 5.91628900 );
                SET_CAM_ROT( l_U451, -1.81200600, 1.89437600, 90.33130000 );
                SET_CAM_FOV( l_U451, 30.00004000 );
            }
            else
            {
                sub_21711();
                GET_CAR_MODEL( l_U290, ref l_U180 );
                GET_MODEL_DIMENSIONS( l_U180, ref l_U119, ref l_U122 );
                l_U125._fU0 = l_U119._fU0 / l_U128._fU0;
                l_U125._fU4 = l_U122._fU4 / l_U131._fU4;
                l_U125._fU8 = l_U122._fU8 / l_U131._fU8;
                l_U166._fU0 = l_U134[0]._fU0 * l_U125._fU0;
                l_U166._fU4 = l_U134[0]._fU4 * l_U125._fU4;
                l_U166._fU8 = l_U134[0]._fU8 * l_U125._fU8;
                l_U169._fU0 = l_U150[0]._fU0 * l_U125._fU0;
                l_U169._fU4 = l_U150[0]._fU4 * l_U125._fU4;
                l_U169._fU8 = l_U150[0]._fU8 * l_U125._fU8;
                ATTACH_CAM_TO_VEHICLE( l_U451, l_U290 );
                POINT_CAM_AT_VEHICLE( l_U451, l_U290 );
                SET_CAM_ATTACH_OFFSET( l_U451, l_U166._fU0, l_U166._fU4, l_U166._fU8 );
                SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U451, 1 );
                SET_CAM_POINT_OFFSET( l_U451, l_U169._fU0, l_U169._fU4, l_U169._fU8 );
                SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U451, 1 );
                SET_CAM_FOV( l_U451, l_U172[0] );
            }
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            SET_CAM_ACTIVE( l_U451, 1 );
            SET_CAM_PROPAGATE( l_U451, 1 );
            GET_GAME_TIMER( ref l_U470 );
            l_U483 = 3000;
            l_U218 = 2;
        }
    }
    else
    {
        sub_20541();
        if (DOES_VEHICLE_EXIST( l_U290 ))
        {
            if (IS_VEH_DRIVEABLE( l_U290 ))
            {
                CLEAR_AREA( -503.00700000, -346.76570000, 4.79740000, 4.00000000, 1 );
                if (NOT (sub_22471( l_U290 )))
                {
                    SET_CAR_HEADING( l_U290, 141.18700000 );
                    SET_CAR_COORDINATES( l_U290, -503.00700000, -346.76570000, 4.79740000 );
                }
            }
        }
        REMOVE_CHAR_FROM_GROUP( l_U283 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U283 );
        SET_CHAR_HEADING( l_U283, 131.65490000 );
        SET_CHAR_COORDINATES( l_U283, -501.39720000, -350.73600000, 4.74750000 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2202() );
        SET_CHAR_HEADING( sub_2202(), 336.58540000 );
        SET_CHAR_COORDINATES( sub_2202(), -502.41090000, -351.81870000, 4.73330000 );
        CLEAR_AREA( -502.41090000, -351.81870000, 4.73330000, 50.00000000, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        SET_CAM_ACTIVE( l_U450, 1 );
        SET_CAM_PROPAGATE( l_U450, 1 );
        GET_GAME_TIMER( ref l_U467 );
        l_U483 = 500;
        GET_GAME_TIMER( ref l_U470 );
        l_U218 = 1;
    }
    return;
}

void sub_20541()
{
    if (DOES_OBJECT_EXIST( l_U196._fU0 ))
    {
        DELETE_OBJECT( ref l_U196._fU0 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U196._fU4 );
    }
    SWITCH_ROADS_OFF( -530.95000000, -152.62000000, 100.00000000, -512.73000000, -617.61000000, -100.00000000 );
    SWITCH_ROADS_OFF( -392.04000000, -354.98000000, 100.00000000, -512.73000000, -617.61000000, -100.00000000 );
    l_U263 = 1;
    CLEAR_AREA( -502.41090000, -351.81870000, 4.73330000, 500.00000000, 1 );
    BEGIN_CAM_COMMANDS( ref l_U464 );
    CREATE_CAM( 14, ref l_U451 );
    CREATE_CAM( 14, ref l_U450 );
    CREATE_CAM( 14, ref l_U441 );
    CREATE_CAM( 14, ref l_U442 );
    CREATE_CAM( 14, ref l_U443 );
    CREATE_CAM( 14, ref l_U444 );
    CREATE_CAM( 14, ref l_U445 );
    CREATE_CAM( 14, ref l_U446 );
    CREATE_CAM( 14, ref l_U447 );
    CREATE_CAM( 14, ref l_U452 );
    CREATE_CAM( 14, ref l_U453 );
    CREATE_CAM( 3, ref l_U448 );
    l_U479[0] = 1;
    SET_CAM_POS( l_U450, -503.52410000, -351.52660000, 6.53923500 );
    SET_CAM_ROT( l_U450, -11.99968000, 0.00000000, -84.25822000 );
    SET_CAM_FOV( l_U450, 30.90004000 );
    SET_CAM_POS( l_U442, -491.58440000, -360.37040000, 5.82248600 );
    SET_CAM_ROT( l_U442, -7.04405200, -0.00000000, 17.97009000 );
    SET_CAM_FOV( l_U442, 30.70000000 );
    SET_CAM_POS( l_U443, -488.11120000, -358.79030000, 4.82003600 );
    SET_CAM_ROT( l_U443, 7.96742400, -0.00000000, 106.20570000 );
    SET_CAM_FOV( l_U443, 30.90004000 );
    SET_CAM_POS( l_U444, -493.68900000, -355.73650000, 6.08344500 );
    SET_CAM_ROT( l_U444, 2.80552900, 0.00000000, 161.03860000 );
    SET_CAM_FOV( l_U444, 30.60004000 );
    SET_CAM_POS( l_U445, -493.15160000, -353.80570000, 5.60901300 );
    SET_CAM_ROT( l_U445, 2.80553100, -0.00000000, 166.42440000 );
    SET_CAM_FOV( l_U445, 36.90002000 );
    SET_CAM_POS( l_U446, -504.46350000, -348.61590000, 6.10990600 );
    SET_CAM_ROT( l_U446, -4.81684100, -0.00000000, -121.24710000 );
    SET_CAM_FOV( l_U446, 35.70002000 );
    SET_CAM_POS( l_U447, -488.99410000, -370.14230000, 5.21582400 );
    SET_CAM_ROT( l_U447, 5.00595300, -0.00000000, 5.15886100 );
    SET_CAM_FOV( l_U447, 38.10002000 );
    SET_CAM_POS( l_U452, -502.00780000, -360.76390000, 5.11107300 );
    SET_CAM_ROT( l_U452, 6.11464100, 0.00000000, -18.83132000 );
    SET_CAM_FOV( l_U452, 31.80003000 );
    SET_CAM_POS( l_U453, -502.00780000, -360.76390000, 5.11107300 );
    SET_CAM_ROT( l_U453, 6.11464100, 0.00000000, -73.14752000 );
    SET_CAM_FOV( l_U453, 31.80003000 );
    STOP_PED_SPEAKING( l_U283, 1 );
    return;
}

int sub_21570()
{
    unknown uVar2;
    unknown uVar3;

    if (sub_3346( ref uVar2 ))
    {
        GET_CAR_MODEL( uVar2, ref uVar3 );
        if (IS_THIS_MODEL_A_BIKE( uVar3 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_21711()
{
    l_U128 = {-0.99465700, -2.12410000, -0.38183600};
    l_U131 = {-0.99465700, 2.43009000, 0.68398300};
    l_U134[0] = {-1.30000000, 4.00000000, 0.70000000};
    l_U134[1] = {-1.30000000, 4.00000000, 0.50000000};
    l_U134[2] = {3.60000000, 3.10000000, 0.50000000};
    l_U150[0] = {0.00000000, 0.00000000, 0.00000000};
    l_U150[1] = {-0.60000000, 0.00000000, 0.40000000};
    l_U172[0] = 32;
    l_U172[1] = 32;
    l_U172[2] = 34.70000000;
    return;
}

int sub_22471(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2239))
    {
        return 1;
    }
    return 0;
}

void sub_23026(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, boolean bParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (DOES_BLIP_EXIST( (uParam3^) ))
        {
            if (NOT (IS_PED_IN_GROUP( (uParam0^) )))
            {
                REMOVE_BLIP( (uParam3^) );
                ADD_BLIP_FOR_CHAR( (uParam0^), uParam1 );
                SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
                CLEAR_PRINTS();
                PRINT( uParam4, 7500, 1 );
            }
        }
        else if ((sub_3168( uParam0 )) < 12.00000000)
        {
            if (DOES_BLIP_EXIST( (uParam1^) ))
            {
                REMOVE_BLIP( (uParam1^) );
                sub_14497( uParam0, uParam11, uParam12, 0 );
                ADD_BLIP_FOR_COORD( iParam2->_fU0, iParam2->_fU4, iParam2->_fU8, uParam3 );
                SET_ROUTE( (uParam3^), 1 );
                if (bParam6)
                {
                    sub_14986( uParam3, uParam7, uParam10 );
                }
                CLEAR_PRINTS();
                PRINT( uParam5, 7500, 1 );
            }
        }
    }
    return;
}

void sub_23378()
{
    if (l_U479[0] == 1)
    {
        if (NOT (l_U471[0] == 1))
        {
            if (sub_23425( ref l_U470, 1000 ))
            {
                l_U471[0] = 1;
                l_U218 = 18;
            }
        }
    }
    BLOCK_CHAR_AMBIENT_ANIMS( sub_2202(), 1 );
    BLOCK_CHAR_AMBIENT_ANIMS( l_U283, 1 );
    switch (l_U218)
    {
        case 0: break;
        case 1:
        if (IS_SCREEN_FADED_IN())
        {
            l_U222 = 4;
            sub_15064();
            l_U218 = 2;
        }
        break;
        case 2:
        if (l_U243)
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U283, 1 );
            BLOCK_CHAR_AMBIENT_ANIMS( sub_2202(), 1 );
        }
        if (NOT (sub_15732( l_U503[0] )))
        {
            if (l_U243)
            {
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U290, 2.00000000, 2.00000000, 0.00000000, ref l_U362._fU0, ref l_U362._fU4, ref l_U362._fU8 );
                sub_23826();
            }
            else
            {
                sub_24074();
            }
        }
        break;
        case 3:
        if (sub_6142( ref l_U467, l_U483 ))
        {
            if (l_U243)
            {
                SET_CAM_ACTIVE( l_U451, 0 );
                SET_CAM_PROPAGATE( l_U451, 0 );
            }
            else
            {
                SET_CAM_ACTIVE( l_U450, 0 );
                SET_CAM_PROPAGATE( l_U450, 0 );
            }
            sub_24325();
            sub_24733();
            SET_CAM_INTERP_STYLE_CORE( l_U448, l_U452, l_U453, 8000, 0 );
            SET_CAM_PROPAGATE( l_U448, 1 );
            SET_CAM_ACTIVE( l_U448, 1 );
            GET_GAME_TIMER( ref l_U467 );
            l_U218 = 7;
        }
        break;
        case 7:
        GET_SCRIPT_TASK_STATUS( l_U283, 29, ref l_U498 );
        if (l_U498 == 7)
        {
            if (NOT (IS_CHAR_INJURED( l_U284 )))
            {
                WAIT( 7 );
                SET_CAM_ACTIVE( l_U448, 0 );
                SET_CAM_PROPAGATE( l_U448, 0 );
                SET_CAM_ACTIVE( l_U452, 0 );
                SET_CAM_PROPAGATE( l_U452, 0 );
                SET_CAM_ACTIVE( l_U453, 0 );
                SET_CAM_PROPAGATE( l_U453, 0 );
                if (NOT (IS_CHAR_INJURED( l_U283 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U283 );
                    SET_CHAR_COORDINATES( l_U283, -494.90000000, -357.90000000, -101.00000000 );
                    SET_CHAR_HEADING( l_U283, 261.81880000 );
                }
                if (NOT (IS_CHAR_INJURED( l_U284 )))
                {
                    TASK_LOOK_AT_CHAR( l_U283, l_U284, -2, 0 );
                }
                if (NOT l_U243)
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2202() );
                    SET_CHAR_COORDINATES( sub_2202(), -499.93610000, -349.17350000, -101.00000000 );
                    SET_CHAR_HEADING( sub_2202(), 211.13340000 );
                }
                if (NOT (IS_CHAR_INJURED( l_U284 )))
                {
                    TASK_LOOK_AT_CHAR( sub_2202(), l_U284, -2, 0 );
                }
                SET_CAM_INTERP_STYLE_CORE( l_U448, l_U444, l_U445, 18000, 0 );
                SET_CAM_ACTIVE( l_U448, 1 );
                SET_CAM_PROPAGATE( l_U448, 1 );
                GET_GAME_TIMER( ref l_U467 );
                l_U218 = 8;
            }
        }
        break;
        case 8:
        if (sub_6142( ref l_U467, 400 ))
        {
            sub_12531( "PIH_TALKS", ref l_U503[0], 8, 1 );
            l_U218 = 10;
        }
        break;
        case 9:
        if (sub_15732( l_U503[0] ))
        {
            if ((sub_25634( l_U503[0] )) > 0)
            {
                l_U218 = 10;
            }
        }
        break;
        case 10:
        if (NOT (IS_CHAR_INJURED( l_U284 )))
        {
            if (NOT (sub_15732( l_U503[0] )))
            {
                CLEAR_CHAR_TASKS( l_U284 );
                OPEN_SEQUENCE_TASK( ref l_U497 );
                TASK_PLAY_ANIM( 0, "headbutt", "misshossan1", 8.00000000, 0, 0, 0, 0, -1 );
                CLOSE_SEQUENCE_TASK( l_U497 );
                TASK_PERFORM_SEQUENCE( l_U284, l_U497 );
                CLEAR_SEQUENCE_TASK( l_U497 );
                GET_GAME_TIMER( ref l_U478 );
                l_U218 = 11;
            }
        }
        break;
        case 11:
        GET_CAM_POS( l_U448, ref l_U404._fU0, ref l_U404._fU4, ref l_U404._fU8 );
        GET_CAM_ROT( l_U448, ref l_U407._fU0, ref l_U407._fU4, ref l_U407._fU8 );
        GET_CAM_FOV( l_U448, ref l_U440 );
        GET_CHAR_COORDINATES( l_U283, ref l_U356._fU0, ref l_U356._fU4, ref l_U356._fU8 );
        PRINTVECTOR( l_U356 );
        PRINTNL();
        BLOCK_CHAR_AMBIENT_ANIMS( l_U283, 1 );
        if (NOT (IS_CHAR_INJURED( l_U284 )))
        {
            GET_CHAR_ANIM_CURRENT_TIME( l_U284, "misshossan1", "headbutt", ref l_U435 );
            PRINTFLOAT( l_U435 );
            if (l_U435 > 0.27000000)
            {
                SET_CAM_ACTIVE( l_U448, 0 );
                SET_CAM_PROPAGATE( l_U448, 0 );
                SET_CAM_ACTIVE( l_U444, 0 );
                SET_CAM_PROPAGATE( l_U444, 0 );
                SET_CAM_ACTIVE( l_U445, 0 );
                SET_CAM_PROPAGATE( l_U445, 0 );
                SET_CAM_POS( l_U445, l_U404._fU0, l_U404._fU4, l_U404._fU8 );
                SET_CAM_ROT( l_U445, l_U407._fU0, l_U407._fU4, l_U407._fU8 );
                SET_CAM_FOV( l_U445, l_U440 );
                SET_CAM_ACTIVE( l_U445, 1 );
                SET_CAM_PROPAGATE( l_U445, 1 );
                PLAY_AUDIO_EVENT_FROM_PED( "HOSSAN_1_HEADBUTT", l_U283 );
                HANDLE_AUDIO_ANIM_EVENT( l_U283, "PAIN_LOW" );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U283, 0.00000000, 0.00000000, 1.00000000, ref l_U368._fU0, ref l_U368._fU4, ref l_U368._fU8 );
                SWITCH_PED_TO_RAGDOLL( l_U283, 0, 22000, 1, 1, 1, 0 );
                CREATE_NM_MESSAGE( 1, 79 );
                SEND_NM_MESSAGE( l_U283 );
                CREATE_NM_MESSAGE( 1, 198 );
                SET_NM_MESSAGE_VEC3( 211, l_U368 );
                SET_NM_MESSAGE_VEC3( 212, l_U374 );
                SET_NM_MESSAGE_VEC3( 213, l_U377 );
                SET_NM_MESSAGE_INT( 201, 12 );
                SET_NM_MESSAGE_INT( 207, 1 );
                SET_NM_MESSAGE_BOOL( 202, 0 );
                SET_NM_MESSAGE_BOOL( 203, 1 );
                SET_NM_MESSAGE_BOOL( 204, 0 );
                SET_NM_MESSAGE_BOOL( 205, 0 );
                SET_NM_MESSAGE_FLOAT( 206, 1.50000000 );
                SET_NM_MESSAGE_FLOAT( 200, 15 );
                SEND_NM_MESSAGE( l_U283 );
                CREATE_NM_MESSAGE( 1, 119 );
                SET_NM_MESSAGE_VEC3( 121, -496.68000000, -357.71000000, 5.20000000 );
                SET_NM_MESSAGE_FLOAT( 122, 0.50000000 );
                SET_NM_MESSAGE_BOOL( 123, 1 );
                SEND_NM_MESSAGE( l_U283 );
                l_U218 = 12;
            }
        }
        break;
        case 12:
        if (NOT (IS_CHAR_INJURED( l_U284 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U284, 29, ref l_U498 );
            if (l_U498 == 7)
            {
                if (NOT (IS_CAR_DEAD( l_U288 )))
                {
                    SET_NEXT_DESIRED_MOVE_STATE( 3 );
                    OPEN_SEQUENCE_TASK( ref l_U497 );
                    TASK_ENTER_CAR_AS_DRIVER( 0, l_U288, -1 );
                    CLOSE_SEQUENCE_TASK( l_U497 );
                    TASK_PERFORM_SEQUENCE( l_U284, l_U497 );
                    CLEAR_SEQUENCE_TASK( l_U497 );
                    GET_GAME_TIMER( ref l_U467 );
                    GET_GAME_TIMER( ref l_U467 );
                    l_U218 = 13;
                }
            }
        }
        break;
        case 13:
        if (NOT l_U275)
        {
            if (sub_6142( ref l_U467, 1000 ))
            {
                SWITCH_PED_TO_ANIMATED( l_U283, 0 );
                sub_26912( ref l_U292 );
                sub_26912( ref l_U291 );
                sub_26981( ref l_U286 );
                sub_26981( ref l_U285 );
                GET_GAME_TIMER( ref l_U467 );
                l_U275 = 1;
            }
        }
        else if (sub_6142( ref l_U467, 500 ))
        {
            SET_CAM_ACTIVE( l_U448, 0 );
            SET_CAM_PROPAGATE( l_U448, 0 );
            SET_CAM_ACTIVE( l_U444, 0 );
            SET_CAM_PROPAGATE( l_U444, 0 );
            SET_CAM_ACTIVE( l_U445, 0 );
            SET_CAM_PROPAGATE( l_U445, 0 );
            CLEAR_CHAR_TASKS( l_U283 );
            SET_CHAR_HEADING( l_U283, 47.93910000 );
            if (NOT (IS_CHAR_INJURED( l_U284 )))
            {
                if (IS_VEH_DRIVEABLE( l_U288 ))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U284 );
                    WARP_CHAR_INTO_CAR( l_U284, l_U288 );
                }
            }
            TASK_LOOK_AT_CHAR( l_U283, sub_2202(), -2, 0 );
            SET_NEXT_DESIRED_MOVE_STATE( 3 );
            if (l_U243)
            {
                if (IS_VEH_DRIVEABLE( l_U290 ))
                {
                    OPEN_SEQUENCE_TASK( ref l_U495 );
                    TASK_ENTER_CAR_AS_PASSENGER( 0, l_U290, -1, 0 );
                    CLOSE_SEQUENCE_TASK( l_U495 );
                    TASK_PERFORM_SEQUENCE( l_U283, l_U495 );
                    CLEAR_SEQUENCE_TASK( l_U495 );
                }
            }
            else
            {
                TASK_FLUSH_ROUTE();
                TASK_EXTEND_ROUTE( -499.25600000, -350.10750000, 4.75300000 );
                OPEN_SEQUENCE_TASK( ref l_U495 );
                TASK_FOLLOW_POINT_ROUTE( 0, 3, 0 );
                CLOSE_SEQUENCE_TASK( l_U495 );
                TASK_PERFORM_SEQUENCE( l_U283, l_U495 );
                CLEAR_SEQUENCE_TASK( l_U495 );
            }
            SET_CAM_ACTIVE( l_U446, 1 );
            SET_CAM_PROPAGATE( l_U446, 1 );
            GET_GAME_TIMER( ref l_U467 );
            l_U218 = 15;
        }
        break;
        case 15:
        if (NOT l_U281)
        {
            if (NOT (IS_CHAR_INJURED( l_U284 )))
            {
                if (IS_VEH_DRIVEABLE( l_U288 ))
                {
                    GET_SCRIPT_TASK_STATUS( l_U284, 29, ref l_U498 );
                    if (l_U498 == 7)
                    {
                        SET_CAR_ENGINE_ON( l_U288, 1, 1 );
                        CLEAR_CHAR_TASKS( l_U284 );
                        GIVE_WEAPON_TO_CHAR( l_U284, 7, 30000, 0 );
                        START_PLAYBACK_RECORDED_CAR( l_U288, 997 );
                        GET_GAME_TIMER( ref l_U467 );
                        l_U281 = 1;
                    }
                }
            }
        }
        else if (sub_6142( ref l_U467, 3000 ))
        {
            SET_CAM_BEHIND_PED( sub_2202() );
            SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 2000 );
            l_U218 = 16;
        }
        break;
        case 16:
        if ((NOT IS_CAM_INTERPOLATING()) || (l_U471[0] == 1))
        {
            if (NOT (IS_CHAR_INJURED( l_U284 )))
            {
                if (NOT (IS_CAR_DEAD( l_U288 )))
                {
                    SET_CAM_ACTIVE( l_U447, 0 );
                    SET_CAM_PROPAGATE( l_U447, 0 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    END_CAM_COMMANDS( ref l_U464 );
                    DESTROY_ALL_CAMS();
                    sub_27851( ref l_U283, ref l_U290 );
                    SET_CHAR_NEVER_TARGETTED( l_U284, 0 );
                    SET_CHAR_IS_TARGET_PRIORITY( l_U284, 1 );
                    ADD_BLIP_FOR_CHAR( l_U284, ref l_U294 );
                    sub_14497( ref l_U283, ref l_U493, ref l_U490, 0 );
                    STOP_PED_SPEAKING( l_U283, 1 );
                    SWITCH_ROADS_BACK_TO_ORIGINAL( -530.95000000, -152.62000000, 100.00000000, -512.73000000, -617.61000000, -100.00000000 );
                    SWITCH_ROADS_BACK_TO_ORIGINAL( -392.04000000, -354.98000000, 100.00000000, -512.73000000, -617.61000000, -100.00000000 );
                    l_U263 = 0;
                    if (l_U471[0] == 1)
                    {
                        sub_28420( 1 );
                    }
                    else
                    {
                        sub_11845( 1 );
                    }
                    GET_GAME_TIMER( ref l_U467 );
                    if (l_U243)
                    {
                        SET_WIDESCREEN_BORDERS( 0 );
                    }
                    sub_12531( "PIH_GETIM", ref l_U503[0], 8, 1 );
                    l_U222 = 10;
                    l_U270 = 1;
                    l_U479[0] = 0;
                    l_U216 = 2;
                }
            }
        }
        break;
        case 18:
        if (NOT IS_SCREEN_FADED_OUT())
        {
            if (NOT IS_SCREEN_FADING_OUT())
            {
                CLEAR_PRINTS();
                sub_2297( 0 );
                DO_SCREEN_FADE_OUT( 500 );
            }
        }
        else if (IS_PED_IN_GROUP( l_U283 ))
        {
            REMOVE_CHAR_FROM_GROUP( l_U283 );
        }
        if (NOT l_U272)
        {
            CLEAR_AREA( l_U328._fU0, l_U328._fU4, l_U328._fU8, 5.00000000, 1 );
            CREATE_CAR( l_U456, l_U328._fU0, l_U328._fU4, l_U328._fU8, ref l_U288, 1 );
            SET_CAR_HEADING( l_U288, l_U426 );
            TURN_OFF_VEHICLE_EXTRA( l_U288, 1, 1 );
            CHANGE_CAR_COLOUR( l_U288, 5, 1 );
            SET_VEHICLE_DIRT_LEVEL( l_U288, 2.00000000 );
            SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U288, 0 );
            GET_CAR_HEALTH( l_U288, ref l_U468 );
            CREATE_CHAR( 26, l_U454, l_U328._fU0, l_U328._fU4, l_U328._fU8, ref l_U284, 1 );
            sub_4895( 2, l_U284, "EMPLOYER", 0 );
            STOP_PED_SPEAKING( l_U284, 1 );
        }
        if (NOT (IS_CHAR_INJURED( l_U284 )))
        {
            if (IS_VEH_DRIVEABLE( l_U288 ))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U284 );
                if (IS_CHAR_IN_ANY_CAR( l_U284 ))
                {
                    WARP_CHAR_FROM_CAR_TO_CAR( l_U284, l_U288, -1 );
                }
                else
                {
                    WARP_CHAR_INTO_CAR( l_U284, l_U288 );
                }
                GIVE_WEAPON_TO_CHAR( l_U284, 7, 30000, 0 );
            }
        }
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U283 );
        if (l_U243)
        {
            if (IS_CHAR_SITTING_IN_ANY_CAR( l_U283 ))
            {
                WARP_CHAR_FROM_CAR_TO_CAR( l_U283, l_U290, 0 );
            }
            else
            {
                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U283, l_U290, 0 );
            }
        }
        sub_29234( ref l_U288, 997, 0.35000000 );
        if (DOES_VEHICLE_EXIST( l_U292 ))
        {
            if (IS_VEH_DRIVEABLE( l_U292 ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U292 ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U292 );
                }
            }
        }
        sub_26912( ref l_U292 );
        sub_26981( ref l_U286 );
        if (DOES_VEHICLE_EXIST( l_U291 ))
        {
            if (IS_VEH_DRIVEABLE( l_U291 ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U291 ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U291 );
                }
            }
        }
        sub_26912( ref l_U291 );
        sub_26981( ref l_U285 );
        l_U218 = 16;;
        break;
    }
    return;
}

int sub_23425(unknown uParam0, unknown uParam1)
{
    if (sub_6142( uParam0, uParam1 ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if (sub_23460())
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_23460()
{
    return IS_CONTROL_JUST_PRESSED( 2, 77 );
}

void sub_23826()
{
    if (NOT (IS_CHAR_INJURED( l_U283 )))
    {
        REMOVE_CHAR_FROM_GROUP( l_U283 );
        CLEAR_SEQUENCE_TASK( l_U495 );
        OPEN_SEQUENCE_TASK( ref l_U495 );
        TASK_LEAVE_CAR( 0, l_U290 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -494.90000000, -357.90000000, 4.64672000, 2, -1, 0.40000000 );
        TASK_CHAR_SLIDE_TO_COORD( 0, -494.90000000, -357.90000000, 4.64672000, 261.81880000, 1061158912 );
        CLOSE_SEQUENCE_TASK( l_U495 );
        TASK_PERFORM_SEQUENCE( l_U283, l_U495 );
        CLEAR_SEQUENCE_TASK( l_U495 );
        GET_GAME_TIMER( ref l_U467 );
        l_U218 = 3;
        if (sub_21570())
        {
            GET_GAME_TIMER( ref l_U467 );
            l_U483 = 5500;
        }
        l_U264 = 1;
    }
    return;
}

void sub_24074()
{
    CLEAR_SEQUENCE_TASK( l_U495 );
    OPEN_SEQUENCE_TASK( ref l_U495 );
    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -494.60530000, -357.18710000, 4.64770000, 2, -1, 0.40000000 );
    TASK_CHAR_SLIDE_TO_COORD( 0, -494.60530000, -357.18710000, 4.64770000, 216.58210000, 1061158912 );
    CLOSE_SEQUENCE_TASK( l_U495 );
    TASK_PERFORM_SEQUENCE( l_U283, l_U495 );
    CLEAR_SEQUENCE_TASK( l_U495 );
    l_U264 = 1;
    l_U218 = 3;
    return;
}

void sub_24325()
{
    GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref l_U460, ref l_U484 );
    if (l_U460 == 0)
    {
        l_U460 = l_U456;
    }
    if (CAN_CREATE_RANDOM_CHAR( 1, 0 ))
    {
        CREATE_CAR( l_U460, -541.93970000, -320.40120000, 5.28090000, ref l_U292, 1 );
        SET_CAR_HEADING( l_U292, 248.07370000 );
        SET_CAR_ENGINE_ON( l_U292, 1, 1 );
        CREATE_RANDOM_CHAR_AS_DRIVER( l_U292, ref l_U286 );
        CHANGE_CAR_COLOUR( l_U292, 0, 0 );
        START_PLAYBACK_RECORDED_CAR( l_U292, 976 );
        SET_PLAYBACK_SPEED( l_U292, 1.00000000 );
        SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U292, 3500 );
    }
    GET_CURRENT_POLICE_CAR_MODEL( ref l_U459 );
    GET_CURRENT_BASIC_COP_MODEL( ref l_U461 );
    if (NOT (l_U459 == 0))
    {
        if (NOT (l_U461 == 0))
        {
            CREATE_CAR( l_U459, -541.93970000, -320.40120000, 5.28090000, ref l_U291, 1 );
            SET_CAR_HEADING( l_U291, 248.07370000 );
            SET_CAR_ENGINE_ON( l_U291, 1, 1 );
            CREATE_CHAR_INSIDE_CAR( l_U291, 26, l_U461, ref l_U285 );
            SWITCH_CAR_SIREN( l_U291, 1 );
            START_PLAYBACK_RECORDED_CAR( l_U291, 976 );
            SET_PLAYBACK_SPEED( l_U291, 1.00000000 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U291, 2000 );
        }
    }
    return;
}

void sub_24733()
{
    CLEAR_AREA( l_U328._fU0, l_U328._fU4, l_U328._fU8, 5.00000000, 1 );
    CREATE_CAR( l_U456, l_U328._fU0, l_U328._fU4, l_U328._fU8, ref l_U288, 1 );
    SET_CAR_HEADING( l_U288, l_U426 );
    TURN_OFF_VEHICLE_EXTRA( l_U288, 1, 1 );
    CHANGE_CAR_COLOUR( l_U288, 5, 1 );
    SET_VEHICLE_DIRT_LEVEL( l_U288, 2.00000000 );
    SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U288, 0 );
    GET_CAR_HEALTH( l_U288, ref l_U468 );
    CREATE_CHAR( 26, l_U454, l_U392._fU0, l_U392._fU4, l_U392._fU8, ref l_U284, 1 );
    SET_CHAR_HEADING( l_U284, l_U434 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U284, 1 );
    TASK_LOOK_AT_CHAR( l_U284, l_U283, -2, 0 );
    sub_4895( 2, l_U284, "EMPLOYER", 0 );
    l_U272 = 1;
    TASK_LOOK_AT_CHAR( l_U283, l_U284, -2, 0 );
    return;
}

void sub_25634(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_15732( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

void sub_26912(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            DELETE_CAR( uParam0 );
        }
    }
    return;
}

void sub_26981(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            DELETE_CHAR( uParam0 );
        }
    }
    return;
}

void sub_27851(unknown uParam0, unknown uParam1)
{
    sub_27862( uParam1 );
    sub_28123( uParam0 );
    return;
}

void sub_27862(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            SET_CAR_PROOFS( (uParam0^), 0, 0, 0, 0, 0 );
            sub_27918( uParam0 );
        }
    }
    return;
}

void sub_27918(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (ProtectedGet(l_U115) < 500)
            {
                SET_CAR_HEALTH( (uParam0^), 500 );
            }
            else
            {
                SET_CAR_HEALTH( (uParam0^), ProtectedGet(l_U115) );
            }
            if (ProtectedGet(l_U178) < 500)
            {
                SET_ENGINE_HEALTH( (uParam0^), 500.00000000 );
            }
            else
            {
                SET_ENGINE_HEALTH( (uParam0^), ProtectedGet(l_U178) );
            }
            if (ProtectedGet(l_U179) < 500.00000000)
            {
                SET_PETROL_TANK_HEALTH( (uParam0^), 500.00000000 );
            }
            else
            {
                SET_PETROL_TANK_HEALTH( (uParam0^), ProtectedGet(l_U179) );
            }
        }
    }
    return;
}

void sub_28123(unknown uParam0)
{
    unknown uVar3;

    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_CHAR_PROOFS( (uParam0^), 0, 0, 0, 0, 0 );
            if (ProtectedGet(l_U114) < 110)
            {
                SET_CHAR_HEALTH( (uParam0^), 120 );
            }
            else
            {
                SET_CHAR_HEALTH( (uParam0^), ProtectedGet(l_U114) );
            }
        }
    }
    return;
}

void sub_28420(boolean bParam0)
{
    CLEAR_PRINTS();
    CLEAR_HELP();
    sub_2297( 0 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    SET_WIDESCREEN_BORDERS( 0 );
    if (IS_PLAYER_PLAYING( sub_1404() ))
    {
        SET_INTERP_IN_OUT_VEHICLE_ENABLED_THIS_FRAME( 0 );
        SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
        SET_CAM_BEHIND_PED( sub_2202() );
        if (bParam0)
        {
            CLEAR_CHAR_TASKS( sub_2202() );
        }
        SET_PLAYER_CONTROL( sub_1404(), 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_2202(), 0 );
    }
    ALLOW_EMERGENCY_SERVICES( 1 );
    DO_SCREEN_FADE_IN( 500 );
    return;
}

void sub_29234(unknown uParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;

    if (IS_VEH_DRIVEABLE( (uParam0^) ))
    {
        fVar5 = (GET_TOTAL_DURATION_OF_CAR_RECORDING( uParam1 )) * uParam2;
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( (uParam0^) ))
        {
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( (uParam0^), -9999999 );
        }
        else
        {
            START_PLAYBACK_RECORDED_CAR( (uParam0^), uParam1 );
        }
        SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( (uParam0^), fVar5 );
    }
    return;
}

void sub_29530(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U105)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((l_U103) AND (IS_HINT_RUNNING()))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U104 + 500))
        {
            l_U103 = 0;
        }
    }
    if (((((IS_CONTROL_PRESSED( 0, 51 )) AND (IS_CHAR_IN_ANY_CAR( sub_2202() ))) AND (NOT (IS_CHAR_DEAD( (uParam0^) )))) AND (NOT sub_712())) AND (iVar3 != 4))
    {
        if ((NOT IS_HINT_RUNNING()) AND (IS_CHAR_IN_ANY_CAR( (uParam0^) )))
        {
            if (l_U105)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U104 );
            l_U103 = 1;
            l_U102 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U102) AND (NOT l_U103))
        {
            if (l_U105)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U102 = 1;
        }
    }
    else if (l_U102)
    {
        if (l_U105)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U102 = 0;
    };;;
    return;
}

void sub_30179()
{
    sub_15064();
    sub_30283( ref l_U283, ref l_U293, ref l_U284, ref l_U294, ref l_U516, ref l_U297, "HOS1_GOD16", "HOS1_GOD3", "HOS1_GOD9", 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000, ref l_U493, ref l_U490 );
    switch (l_U219)
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( l_U284 )))
        {
            if (NOT (IS_CAR_DEAD( l_U288 )))
            {
                GET_CAR_SPEED( l_U288, ref l_U427 );
                GET_CAR_HEALTH( l_U288, ref l_U469 );
                PRINTINT( l_U469 );
                PRINTNL();
                if (sub_30829( ref l_U288, ref l_U284, ref l_U427, l_U469, 500 ))
                {
                    CLEAR_CHAR_TASKS( l_U284 );
                    OPEN_SEQUENCE_TASK( ref l_U497 );
                    TASK_LEAVE_CAR( 0, l_U288 );
                    TASK_SEEK_COVER_FROM_PED( 0, sub_2202(), 2000 );
                    CLOSE_SEQUENCE_TASK( l_U497 );
                    TASK_PERFORM_SEQUENCE( l_U284, l_U497 );
                    CLEAR_SEQUENCE_TASK( l_U497 );
                    GET_GAME_TIMER( ref l_U467 );
                    l_U251 = 1;
                    l_U222 = 17;
                    l_U219 = 1;
                }
            }
        }
        else
        {
            l_U219 = 2;
        }
        break;
        case 1:
        if (NOT l_U245)
        {
            if (NOT (IS_CHAR_INJURED( l_U284 )))
            {
                if (sub_6142( ref l_U467, 1000 ))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U284, 0 );
                    SET_RELATIONSHIP( 5, 0, 23 );
                    SET_RELATIONSHIP( 5, 23, 0 );
                    SET_COMBAT_DECISION_MAKER( l_U284, l_U489 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U284, 23 );
                    l_U245 = 1;
                }
            }
            else
            {
                l_U219 = 2;
            }
        }
        if (l_U245)
        {
            if (NOT (IS_CHAR_INJURED( l_U284 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U284, 29, ref l_U498 );
                if (l_U498 == 7)
                {
                    l_U219 = 2;
                }
            }
            else
            {
                l_U219 = 2;
            }
        }
        break;
        case 2:
        if (IS_CHAR_INJURED( l_U284 ))
        {
            if (DOES_BLIP_EXIST( l_U294 ))
            {
                REMOVE_BLIP( l_U294 );
            }
            GET_DEAD_CHAR_PICKUP_COORDS( l_U284, ref l_U346[1]._fU0, ref l_U346[1]._fU4, ref l_U346[1]._fU8 );
            CREATE_PICKUP( l_U458, 2, l_U346[1]._fU0, l_U346[1]._fU4, l_U346[1]._fU8, ref l_U516, 0 );
            if (NOT (DOES_BLIP_EXIST( l_U293 )))
            {
                ADD_BLIP_FOR_PICKUP( l_U516, ref l_U297 );
                CHANGE_BLIP_COLOUR( l_U297, 2 );
                SET_ROUTE( l_U297, 1 );
                CLEAR_PRINTS();
                PRINT( "HOS1_GOD9", 7500, 1 );
            }
            sub_2297( 0 );
            l_U222 = 26;
            sub_2481();
            l_U219 = 3;
        }
        break;
        case 3:
        if (NOT l_U278)
        {
            if (HAS_PICKUP_BEEN_COLLECTED( l_U516 ))
            {
                PLAY_SOUND( -1, "FRONTEND_GAME_PICKUP_MONEY" );
                REMOVE_PICKUP( l_U516 );
                l_U278 = 1;
                if (DOES_BLIP_EXIST( l_U297 ))
                {
                    REMOVE_BLIP( l_U297 );
                    ADD_BLIP_FOR_COORD( l_U380._fU0, l_U380._fU4, l_U380._fU8, ref l_U296 );
                    SET_ROUTE( l_U296, 1 );
                    GET_GAME_TIMER( ref l_U467 );
                    l_U222 = 18;
                    l_U216 = 4;
                }
                else
                {
                    l_U219 = 4;
                }
            }
        }
        break;
        case 4:
        if (IS_PED_IN_GROUP( l_U283 ))
        {
            ADD_BLIP_FOR_COORD( l_U380._fU0, l_U380._fU4, l_U380._fU8, ref l_U296 );
            SET_ROUTE( l_U296, 1 );
            GET_GAME_TIMER( ref l_U467 );
            l_U222 = 18;
            l_U216 = 4;
        }
        break;
    }
    if (NOT l_U267)
    {
        if (NOT (IS_CAR_DEAD( l_U288 )))
        {
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U288 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U284 )))
                {
                    CLEAR_CHAR_TASKS( l_U284 );
                    TASK_CAR_DRIVE_WANDER( l_U284, l_U288, 30.00000000, 2 );
                    l_U267 = 1;
                }
            }
        }
    }
    return;
}

void sub_30283(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, boolean bParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if ((DOES_BLIP_EXIST( (uParam3^) )) || (DOES_BLIP_EXIST( (uParam5^) )))
        {
            if (NOT (IS_PED_IN_GROUP( (uParam0^) )))
            {
                if (NOT (IS_CHAR_INJURED( (uParam2^) )))
                {
                    REMOVE_BLIP( (uParam3^) );
                }
                else if (DOES_PICKUP_EXIST( (uParam4^) ))
                {
                    REMOVE_BLIP( (uParam5^) );
                }
                ADD_BLIP_FOR_CHAR( (uParam0^), uParam1 );
                SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
                CLEAR_PRINTS();
                PRINT( uParam6, 7500, 1 );
            }
        }
        else if ((sub_3168( uParam0 )) < 12.00000000)
        {
            if (DOES_BLIP_EXIST( (uParam1^) ))
            {
                REMOVE_BLIP( (uParam1^) );
                sub_14497( uParam0, uParam14, uParam15, 0 );
                if (NOT (IS_CHAR_INJURED( (uParam2^) )))
                {
                    ADD_BLIP_FOR_CHAR( (uParam2^), uParam3 );
                    CLEAR_PRINTS();
                    PRINT( uParam7, 7500, 1 );
                }
                else if (DOES_PICKUP_EXIST( (uParam4^) ))
                {
                    ADD_BLIP_FOR_PICKUP( (uParam4^), uParam5 );
                    CHANGE_BLIP_COLOUR( (uParam5^), 2 );
                    SET_ROUTE( (uParam5^), 1 );
                    sub_2297( 0 );
                    CLEAR_PRINTS();
                    PRINT_NOW( uParam8, 7500, 1 );
                }
                if (bParam9)
                {
                    sub_14986( uParam3, uParam10, uParam13 );
                }
            }
        }
    }
    return;
}

int sub_30829(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4)
{
    if (((((((GET_PETROL_TANK_HEALTH( (uParam0^) )) < 200) || ((GET_ENGINE_HEALTH( (uParam0^) )) < 200)) || (iParam3 < 200)) || ((((uParam2^) < 0.50000000) AND ((sub_3168( uParam1 )) < 10)) AND (iParam3 < iParam4))) || (IS_CHAR_IN_CAR( sub_2202(), (uParam0^) ))) || (IS_CHAR_ON_FOOT( (uParam1^) )))
    {
        return 1;
    }
    return 0;
}

void sub_31952()
{
    switch (l_U220)
    {
        case 0:
        if (HAS_MODEL_LOADED( l_U455 ))
        {
            CREATE_CHAR( 26, l_U455, -499.55600000, -362.11470000, 4.68550000, ref l_U283, 1 );
            SET_CHAR_HEADING( l_U283, 358.86500000 );
            SET_CHAR_HEALTH( l_U283, 200 );
            SET_CHAR_SUFFERS_CRITICAL_HITS( l_U283, 0 );
            SET_CHAR_NEVER_TARGETTED( l_U283, 1 );
            SET_CHAR_CANT_BE_DRAGGED_OUT( l_U283, 1 );
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U283, 1 );
            TASK_STAND_GUARD( l_U283, -499.55600000, -362.11470000, 4.68550000, 358.86500000, 0.00000000, 0, -1 );
            sub_4895( 1, l_U283, "HOSSAN", 0 );
            ADD_BLIP_FOR_CHAR( l_U283, ref l_U293 );
            SET_BLIP_AS_FRIENDLY( l_U293, 1 );
            CLEAR_PRINTS();
            PRINT( "HOS1_GOD15", 7500, 1 );
            l_U220 = 1;
        }
        break;
        case 1:
        if ((sub_3168( ref l_U283 )) < 12.00000000)
        {
            CLEAR_CHAR_TASKS( l_U283 );
            GET_PLAYER_GROUP( sub_1404(), ref l_U493 );
            SET_GROUP_MEMBER( l_U493, l_U283 );
            SET_PLAYER_GROUP_TO_FOLLOW_ALWAYS( sub_1404(), 1 );
            if (DOES_BLIP_EXIST( l_U293 ))
            {
                REMOVE_BLIP( l_U293 );
            }
            ADD_BLIP_FOR_COORD( l_U380._fU0, l_U380._fU4, l_U380._fU8, ref l_U296 );
            SET_ROUTE( l_U296, 1 );
            l_U222 = 18;
            l_U216 = 4;
        }
        sub_32426( ref l_U283 );
        break;
    }
    sub_15064();
    return;
}

void sub_32426(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;
    float fVar10;
    unknown uVar11;

    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        GET_CHAR_COORDINATES( sub_2202(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        GET_CHAR_COORDINATES( (uParam0^), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        fVar9 = uVar3._fU0 - uVar6._fU0;
        fVar10 = uVar3._fU4 - uVar6._fU4;
        GET_HEADING_FROM_VECTOR_2D( fVar9, fVar10, ref uVar11 );
        TASK_ACHIEVE_HEADING( (uParam0^), uVar11 );
    }
    return;
}

void sub_32574()
{
    if (NOT (l_U471[1] == 1))
    {
        if (l_U479[1] == 1)
        {
            if (sub_23425( ref l_U470, 1000 ))
            {
                l_U471[1] = 1;
                l_U221 = 12;
            }
        }
    }
    if (l_U221 != 0)
    {
        BLOCK_CHAR_AMBIENT_ANIMS( sub_2202(), 1 );
        BLOCK_CHAR_AMBIENT_ANIMS( l_U283, 1 );
    }
    switch (l_U221)
    {
        case 0:
        sub_23026( ref l_U283, ref l_U293, ref l_U380, ref l_U296, "HOS1_GOD16", "HOS1_GOD13", 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000, ref l_U493, ref l_U490 );
        if (DOES_BLIP_EXIST( l_U296 ))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_2202(), l_U380._fU0, l_U380._fU4, l_U380._fU8, 2.50000000, 2.50000000, 2.50000000, 1 ))
            {
                if ((sub_3168( ref l_U283 )) < 10.00000000)
                {
                    if (sub_19385())
                    {
                        sub_19802( ref l_U283, ref l_U290 );
                        if (sub_20258( ref l_U290 ))
                        {
                            TASK_CAR_TEMP_ACTION( sub_2202(), l_U290, 6, 100 );
                            l_U257 = 1;
                        }
                        sub_33023();
                    }
                }
                else if (NOT g_U65018)
                {
                    PRINT( "HOS1_GOD19", 7500, 1 );
                    PRINTNL();
                    g_U65018 = 1;
                }
            }
            else if (g_U65018)
            {
                CLEAR_THIS_PRINT( "BRIAN1_PROMPT_7" );
                g_U65018 = 0;
            }
        }
        break;
        case 1:
        sub_33023();
        break;
        case 2:
        if (NOT IS_CAM_INTERPOLATING())
        {
            if (IS_VEH_DRIVEABLE( l_U290 ))
            {
                SET_CAM_ACTIVE( l_U448, 0 );
                SET_CAM_PROPAGATE( l_U448, 0 );
                SET_CAM_ACTIVE( l_U443, 0 );
                SET_CAM_PROPAGATE( l_U443, 0 );
                SET_CAM_ACTIVE( l_U444, 0 );
                SET_CAM_PROPAGATE( l_U444, 0 );
                SET_CAM_POS( l_U441, -429.60490000, -186.45750000, 11.17907000 );
                SET_CAM_ROT( l_U441, -8.62652700, -1.35955000, -158.93620000 );
                SET_CAM_FOV( l_U441, 30.30004000 );
                SET_CAM_POS( l_U445, -429.60490000, -186.45750000, 11.17907000 );
                SET_CAM_ROT( l_U445, -8.62652700, -1.35955000, -158.93620000 );
                SET_CAM_FOV( l_U445, 28.30004000 );
                SET_CAM_INTERP_STYLE_CORE( l_U448, l_U441, l_U445, 7000, 0 );
                SET_CAM_ACTIVE( l_U448, 1 );
                SET_CAM_PROPAGATE( l_U448, 1 );
                CLEAR_PRINTS();
                sub_12531( "PIH_PHOME", ref l_U503[0], 8, 1 );
                GET_GAME_TIMER( ref l_U467 );
                l_U221 = 5;
            }
        }
        break;
        case 3:
        CLEAR_PRINTS();
        CLEAR_AREA( -429.53880000, -191.63290000, 9.38530000, 20.00000000, 1 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2202() );
        SET_CHAR_COORDINATES( sub_2202(), -429.86340000, -194.70320000, 9.31070000 );
        SET_CHAR_HEADING( sub_2202(), 22.00000000 );
        REMOVE_CHAR_FROM_GROUP( l_U283 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U283 );
        SET_CHAR_COORDINATES( l_U283, -429.90360000, -193.76030000, 9.34470000 );
        SET_CHAR_HEADING( l_U283, 200 );
        SET_CAM_POS( l_U441, -427.69270000, -194.50000000, 11.15224000 );
        SET_CAM_ROT( l_U441, -14.20536000, -0.00000000, 83.67870000 );
        SET_CAM_FOV( l_U441, 30.00004000 );
        SET_CAM_POS( l_U442, -429.09440000, -195.59010000, 10.81485000 );
        SET_CAM_ROT( l_U442, -3.82457900, 0.00000000, 26.68259000 );
        SET_CAM_FOV( l_U442, 30.00004000 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        SET_CAM_ACTIVE( l_U441, 1 );
        SET_CAM_PROPAGATE( l_U441, 1 );
        GET_GAME_TIMER( ref l_U467 );
        GET_GAME_TIMER( ref l_U470 );
        l_U479[1] = 1;
        l_U221 = 8;
        break;
        case 8:
        if (sub_6142( ref l_U467, 500 ))
        {
            if (sub_12531( "PIH_PHOME", ref l_U503[0], 8, 1 ))
            {
                GET_GAME_TIMER( ref l_U467 );
                l_U221 = 9;
            }
        }
        break;
        case 9:
        if (sub_15732( l_U503[0] ))
        {
            if ((sub_25634( l_U503[0] )) > 2)
            {
                if (NOT l_U282)
                {
                    GET_GAME_TIMER( ref l_U467 );
                    l_U282 = 1;
                }
                if (sub_6142( ref l_U467, 500 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U283 )))
                    {
                        SET_CAM_PROPAGATE( l_U441, 0 );
                        SET_CAM_ACTIVE( l_U441, 0 );
                        CLEAR_SEQUENCE_TASK( l_U495 );
                        OPEN_SEQUENCE_TASK( ref l_U495 );
                        TASK_PLAY_ANIM( 0, "give_obj", "misshossan1", 8.00000000, 0, 0, 0, 0, -1 );
                        CLOSE_SEQUENCE_TASK( l_U495 );
                        TASK_PERFORM_SEQUENCE( l_U283, l_U495 );
                        CLEAR_SEQUENCE_TASK( l_U495 );
                        TASK_PLAY_ANIM( sub_2202(), "take_obj", "misshossan1", 8.00000000, 0, 0, 0, 0, -1 );
                        SET_CAM_PROPAGATE( l_U442, 1 );
                        SET_CAM_ACTIVE( l_U442, 1 );
                        GET_GAME_TIMER( ref l_U467 );
                        l_U221 = 7;
                    }
                }
            }
        }
        break;
        case 5:
        if (NOT l_U256)
        {
            if (sub_15732( l_U503[0] ))
            {
                if ((sub_25634( l_U503[0] )) > 0)
                {
                    if (NOT (IS_CHAR_INJURED( l_U283 )))
                    {
                        if (NOT (IS_CAR_DEAD( l_U290 )))
                        {
                            SET_CAM_ACTIVE( l_U448, 0 );
                            SET_CAM_PROPAGATE( l_U448, 0 );
                            SET_CAM_PROPAGATE( l_U441, 0 );
                            SET_CAM_ACTIVE( l_U441, 0 );
                            SET_CAM_PROPAGATE( l_U445, 0 );
                            SET_CAM_ACTIVE( l_U445, 0 );
                            sub_21711();
                            GET_CAR_MODEL( l_U290, ref l_U180 );
                            GET_MODEL_DIMENSIONS( l_U180, ref l_U119, ref l_U122 );
                            l_U131._fU0 = -0.99465700;
                            l_U131._fU4 = 2.43009000;
                            l_U131._fU8 = 0.68398300;
                            l_U128._fU0 = -0.99465700;
                            l_U128._fU4 = -2.12410000;
                            l_U128._fU8 = -0.38183600;
                            l_U125._fU0 = l_U119._fU0 / l_U128._fU0;
                            l_U125._fU4 = l_U122._fU4 / l_U131._fU4;
                            l_U125._fU8 = (l_U122._fU8 - l_U119._fU8) / (l_U131._fU8 - l_U128._fU8);
                            BEGIN_CAM_COMMANDS( ref l_U464 );
                            CREATE_CAM( 14, ref l_U442 );
                            if (sub_21570())
                            {
                                SET_CAM_POS( l_U442, -425.98050000, -193.63620000, 10.15707000 );
                                SET_CAM_ROT( l_U442, -1.25442800, 2.02631200, 156.98120000 );
                                SET_CAM_FOV( l_U442, 30.30004000 );
                            }
                            else
                            {
                                ATTACH_CAM_TO_VEHICLE( l_U442, l_U290 );
                                POINT_CAM_AT_VEHICLE( l_U442, l_U290 );
                                l_U166._fU0 = l_U386._fU0 + l_U119._fU0;
                                l_U166._fU4 = l_U386._fU4 + l_U122._fU4;
                                l_U166._fU8 = l_U386._fU8 + l_U122._fU8;
                                SET_CAM_ATTACH_OFFSET( l_U442, l_U166._fU0, l_U166._fU4, l_U166._fU8 );
                                SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U442, 1 );
                                SET_CAM_FOV( l_U442, l_U172[0] );
                            }
                            CLEAR_AREA( l_U380._fU0, l_U380._fU4, l_U380._fU8, 10.00000000, 1 );
                            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                            SET_CAM_PROPAGATE( l_U442, 1 );
                            SET_CAM_ACTIVE( l_U442, 1 );
                            REMOVE_CHAR_FROM_GROUP( l_U283 );
                            l_U256 = 1;
                        }
                    }
                }
            }
        }
        if (l_U256)
        {
            if (NOT (IS_CHAR_INJURED( l_U283 )))
            {
                if (NOT (sub_15732( l_U503[0] )))
                {
                    sub_3346( ref l_U290 );
                    if (NOT (IS_CAR_DEAD( l_U290 )))
                    {
                        CLEAR_SEQUENCE_TASK( l_U495 );
                        OPEN_SEQUENCE_TASK( ref l_U495 );
                        TASK_LEAVE_CAR( 0, l_U290 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -415.94540000, -193.64280000, 9.52630000, 2, -1, 0.10000000 );
                        CLOSE_SEQUENCE_TASK( l_U495 );
                        TASK_PERFORM_SEQUENCE( l_U283, l_U495 );
                        CLEAR_SEQUENCE_TASK( l_U495 );
                        l_U221 = 6;
                    }
                }
            }
        }
        break;
        case 6:
        if (NOT (IS_CHAR_INJURED( l_U283 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U283, 29, ref l_U500 );
            if ((NOT (IS_CHAR_ON_SCREEN( l_U283 ))) || (l_U500 == 7))
            {
                l_U221 = 11;
            }
        }
        break;
        case 7:
        if (NOT l_U254)
        {
            if (NOT (IS_CHAR_INJURED( l_U283 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U283, 29, ref l_U500 );
                GET_SCRIPT_TASK_STATUS( sub_2202(), 29, ref l_U501 );
                if ((l_U500 == 7) AND (l_U501 == 7))
                {
                    if (NOT (sub_15732( l_U503[0] )))
                    {
                        CLEAR_SEQUENCE_TASK( l_U495 );
                        OPEN_SEQUENCE_TASK( ref l_U495 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -421.54020000, -195.04110000, 9.07700000, 2, -1, 0.10000000 );
                        CLOSE_SEQUENCE_TASK( l_U495 );
                        TASK_PERFORM_SEQUENCE( l_U283, l_U495 );
                        CLEAR_SEQUENCE_TASK( l_U495 );
                        l_U254 = 1;
                    }
                }
            }
        }
        else if (NOT (IS_CHAR_INJURED( l_U283 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U283, 29, ref l_U500 );
            if ((NOT (IS_CHAR_ON_SCREEN( l_U283 ))) || (l_U500 == 7))
            {
                l_U221 = 11;
            }
        }
        break;
        case 11:
        SET_CAM_PROPAGATE( l_U441, 0 );
        SET_CAM_ACTIVE( l_U441, 0 );
        SET_CAM_PROPAGATE( l_U442, 0 );
        SET_CAM_ACTIVE( l_U442, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        END_CAM_COMMANDS( ref l_U464 );
        DESTROY_ALL_CAMS();
        sub_27851( ref l_U283, ref l_U290 );
        if (NOT (IS_CHAR_INJURED( l_U283 )))
        {
            REMOVE_CHAR_FROM_GROUP( l_U283 );
            CLEAR_CHAR_TASKS( l_U283 );
            DELETE_CHAR( ref l_U283 );
        }
        SET_WIDESCREEN_BORDERS( 0 );
        SET_CAM_BEHIND_PED( sub_2202() );
        SET_PLAYER_CONTROL( sub_1404(), 1 );
        CLEAR_PRINTS();
        if (l_U471[1] == 1)
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        sub_36905();
        break;
        case 12:
        DO_SCREEN_FADE_OUT( 500 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        sub_2297( 0 );
        CLEAR_PRINTS();
        l_U221 = 11;
        break;
        case 13: break;
    }
    sub_15064();
    if ((IS_KEYBOARD_KEY_PRESSED( 36 )) AND (NOT l_U225[1]))
    {
        SET_CHAR_COORDINATES( sub_2202(), -425.59310000, -208.80750000, 8.38310000 );
        l_U225[1] = 1;
    }
    return;
}

void sub_33023()
{
    REMOVE_BLIP( l_U296 );
    CLEAR_AREA( l_U380._fU0, l_U380._fU4, l_U380._fU8, 100.00000000, 1 );
    BEGIN_CAM_COMMANDS( ref l_U464 );
    CREATE_CAM( 14, ref l_U441 );
    CREATE_CAM( 14, ref l_U442 );
    CREATE_CAM( 14, ref l_U443 );
    CREATE_CAM( 14, ref l_U444 );
    CREATE_CAM( 14, ref l_U445 );
    CREATE_CAM( 3, ref l_U448 );
    SET_CAM_POS( l_U443, -421.48840000, -202.09990000, 8.90257500 );
    SET_CAM_ROT( l_U443, 6.60900400, 0.00000000, 38.01208000 );
    SET_CAM_FOV( l_U443, 33.80003000 );
    SET_CAM_POS( l_U444, -421.48840000, -202.09990000, 8.90257500 );
    SET_CAM_ROT( l_U444, 6.60900400, 0.00000000, 38.01208000 );
    SET_CAM_FOV( l_U444, 31.80003000 );
    if (l_U257)
    {
        if (NOT (IS_CHAR_SITTING_IN_CAR( l_U283, l_U290 )))
        {
            CLEAR_CHAR_TASKS( l_U283 );
            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U283, l_U290, 0 );
        }
        GET_CAR_HEADING( l_U290, ref l_U428 );
        if ((l_U428 < 90) || (l_U428 > 270))
        {
            SET_CAR_HEADING( l_U290, 359.65950000 );
        }
        else
        {
            SET_CAR_HEADING( l_U290, 180.65950000 );
        }
        SET_CAR_COORDINATES( l_U290, -426.88580000, -195.96430000, 8.98020000 );
        GET_GAME_TIMER( ref l_U470 );
        l_U479[1] = 1;
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        SET_CAM_INTERP_STYLE_CORE( l_U448, l_U443, l_U444, 3000, 0 );
        SET_CAM_ACTIVE( l_U448, 1 );
        SET_CAM_PROPAGATE( l_U448, 1 );
        l_U221 = 2;
    }
    else if (DOES_VEHICLE_EXIST( l_U290 ))
    {
        if (IS_VEH_DRIVEABLE( l_U290 ))
        {
            if (LOCATE_CAR_3D( l_U290, l_U380._fU0, l_U380._fU4, l_U380._fU8, 9.00000000, 9.00000000, 5.00000000, 0 ))
            {
                CLEAR_AREA( -426.87610000, -184.85850000, 9.47430000, 4.00000000, 1 );
                SET_CAR_HEADING( l_U290, 359.65950000 );
                SET_CAR_COORDINATES( l_U290, -426.87610000, -184.85850000, 9.47430000 );
            }
        }
    }
    CLEAR_PRINTS();
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2202() );
    SET_CHAR_COORDINATES( sub_2202(), -429.86340000, -194.70320000, 9.31070000 );
    SET_CHAR_HEADING( sub_2202(), 22.00000000 );
    REMOVE_CHAR_FROM_GROUP( l_U283 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U283 );
    SET_CHAR_COORDINATES( l_U283, -429.90360000, -193.76030000, 9.34470000 );
    SET_CHAR_HEADING( l_U283, 200 );
    SET_CAM_POS( l_U441, -428.94230000, -192.88020000, 11.27055000 );
    SET_CAM_ROT( l_U441, -17.68506000, 3.49407500, 144.83530000 );
    SET_CAM_FOV( l_U441, 38.40002000 );
    SET_CAM_POS( l_U442, -428.83750000, -196.07530000, 10.58702000 );
    SET_CAM_ROT( l_U442, 2.86082000, 0.00000000, 31.08116000 );
    SET_CAM_FOV( l_U442, 34.20003000 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    SET_CAM_ACTIVE( l_U441, 1 );
    SET_CAM_PROPAGATE( l_U441, 1 );
    GET_GAME_TIMER( ref l_U467 );
    GET_GAME_TIMER( ref l_U470 );
    l_U479[1] = 1;
    l_U221 = 8;;
    TASK_LOOK_AT_CHAR( sub_2202(), l_U283, -2, 0 );
    TASK_LOOK_AT_CHAR( l_U283, sub_2202(), -2, 0 );
    return;
}

void sub_36905()
{
    sub_36919( l_U502 );
    CLEAR_WANTED_LEVEL( sub_1404() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 50 );
    sub_1582();
    return;
}

void sub_36919(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_803( uParam0 );
    sub_36939( uParam0 );
    sub_40846( uParam0 );
    return;
}

void sub_36939(unknown uParam0)
{
    switch (uParam0)
    {
        case 38:
        sub_37069();
        break;
        case 39:
        sub_38031();
        break;
        case 40:
        sub_38290();
        break;
        case 48:
        sub_38473();
        break;
        case 41:
        sub_38658();
        break;
        case 42:
        sub_38854();
        break;
        case 43:
        sub_39035();
        break;
        case 44:
        sub_39218();
        break;
        case 45:
        sub_39399();
        break;
        case 46:
        sub_39578();
        break;
        case 47:
        sub_39822();
        break;
        case 49:
        sub_40022();
        break;
        case 50:
        sub_40199();
        break;
        case 51:
        sub_40397();
        break;
        default: sub_923( "Interactions_Pass: Unknown Random Interaction Character ID - tell Keith" );
    }
    sub_40672();
    sub_40745();
    return;
}

void sub_37069()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 38;
    uVar3 = sub_803( iVar2 );
    sub_37109( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_37755( 500 );
        break;
        default: sub_923( "Interactions_Badman_Pass: Unknown Badman Sequence - tell Keith" );
    }
    return;
}

void sub_37109(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_37162( iParam0, uParam1, uParam2 );
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
        sub_37294( iParam0 + 0 );
    }
    return;
}

void sub_37162(int iParam0, int iParam1, int iParam2)
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
        sub_37294( iParam0 + 0 );
    }
    return;
}

void sub_37294(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_37325( iParam0->_fU4 )))
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

int sub_37325(unknown uParam0)
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

void sub_37755(unknown uParam0)
{
    sub_37766( uParam0 );
    return;
}

void sub_37766(unknown uParam0)
{
    ADD_SCORE( sub_1404(), uParam0 );
    sub_37791( uParam0 );
    return;
}

void sub_37791(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_923( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_38031()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 39;
    uVar3 = sub_803( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_37755( 100 );
        sub_37109( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 2:
        sub_37755( 200 );
        sub_37109( ref g_U34048[uVar3]._fU8, 168, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3:
        sub_37755( 500 );
        break;
        default: sub_923( "Interactions_Brian_Pass: Unknown Brian Sequence - tell Keith" );
    }
    return;
}

void sub_38290()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 40;
    uVar3 = sub_803( iVar2 );
    sub_37109( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_37755( 0 );
        break;
        default: sub_923( "Interactions_Cherise_Pass: Unknown Cherise Sequence - tell Keith" );
    }
    return;
}

void sub_38473()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 48;
    uVar3 = sub_803( iVar2 );
    sub_37109( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_37755( 0 );
        break;
        default: sub_923( "Interactions_Clarence_Pass: Unknown Clarence Sequence - tell Keith" );
    }
    return;
}

void sub_38658()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 41;
    uVar3 = sub_803( iVar2 );
    sub_37109( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_37755( 0 );
        break;
        case 2:
        sub_37755( 0 );
        break;
        default: sub_923( "Interactions_Eddie_Pass: Unknown Eddie Sequence - tell Keith" );
    }
    return;
}

void sub_38854()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 42;
    uVar3 = sub_803( iVar2 );
    sub_37109( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_37755( 0 );
        break;
        default: sub_923( "Interactions_Gracie_Pass: Unknown Gracie Sequence - tell Keith" );
    }
    return;
}

void sub_39035()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 43;
    uVar3 = sub_803( iVar2 );
    sub_37109( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_37755( 500 );
        break;
        default: sub_923( "Interactions_Hossan_Pass: Unknown Hossan Sequence - tell Keith" );
    }
    return;
}

void sub_39218()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 44;
    uVar3 = sub_803( iVar2 );
    sub_37109( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_37755( 0 );
        break;
        default: sub_923( "Interactions_Ilyena_Pass: Unknown Ilyena Sequence - tell Keith" );
    }
    return;
}

void sub_39399()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 45;
    uVar3 = sub_803( iVar2 );
    sub_37109( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_37755( 1000 );
        break;
        default: sub_923( "Interactions_Ivan_Pass: Unknown Ivan Sequence - tell Keith" );
    }
    return;
}

void sub_39578()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 46;
    uVar3 = sub_803( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_37755( 1000 );
        sub_1451( ref g_U34048[uVar3]._fU8 );
        g_U34048[uVar3]._fU24 = 1;
        break;
        case 2:
        sub_37755( 5000 );
        sub_37109( ref g_U34048[uVar3]._fU8, 96, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3: break;
        default: sub_923( "Interactions_Jeff_Pass: Unknown Jeff Sequence - tell Keith" );
    }
    return;
}

void sub_39822()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 47;
    uVar3 = sub_803( iVar2 );
    sub_37109( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_37755( 0 );
        break;
        case 2:
        sub_37755( 0 );
        break;
        default: sub_923( "Interactions_Marnie_Pass: Unknown Marnie Sequence - tell Keith" );
    }
    return;
}

void sub_40022()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 49;
    uVar3 = sub_803( iVar2 );
    sub_37109( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_37755( 500 );
        break;
        default: sub_923( "Interactions_Mel_Pass: Unknown Mel Sequence - tell Keith" );
    }
    return;
}

void sub_40199()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 50;
    uVar3 = sub_803( iVar2 );
    sub_37109( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_37755( 0 );
        break;
        case 2:
        sub_37755( 0 );
        break;
        default: sub_923( "Interactions_Pathos_Pass: Unknown Pathos Sequence - tell Keith" );
    }
    return;
}

void sub_40397()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 51;
    uVar3 = sub_803( iVar2 );
    sub_37109( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_37755( 0 );
        break;
        case 2:
        sub_37755( 1000 );
        break;
        default: sub_923( "Interactions_Sara_Pass: Unknown Sara Sequence - tell Keith" );
    }
    return;
}

void sub_40672()
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

void sub_40745()
{
    sub_40754();
    StrCopy( ref g_U9926, "RIPASS", 16 );
    return;
}

void sub_40754()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_40846(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_803( uParam0 );
    g_U34048[uVar3]._fU28 = 99;
    g_U34048[uVar3]._fU4 = 0;
    sub_7678( ref g_U34048[uVar3]._fU8 );
    g_U34048[uVar3]._fU24 = 0;
    sub_40927( uParam0 );
    return;
}

void sub_40927(unknown uParam0)
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
            sub_41206( 5, iVar4 );
            g_U64848[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_41206(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_41388( 0 );
    return;
}

void sub_41388(boolean bParam0)
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
        sub_41643();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_41643()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

int sub_42131(int iParam0)
{
    if (NOT l_U110)
    {
        if (l_U111)
        {
            if (sub_23425( ref l_U116, 1000 ))
            {
                l_U110 = 1;
                l_U107 = 6;
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        switch (l_U107)
        {
            case 0:
            if ((sub_3168( iParam0 + 0 )) > 200.00000000)
            {
                return 1;
            }
            if (sub_6142( iParam0 + 220, 7500 ))
            {
                sub_19802( iParam0 + 0, iParam0 + 4 );
                if (sub_42333( 0 ))
                {
                    if (sub_20258( iParam0 + 4 ))
                    {
                        l_U107 = 1;
                    }
                    else
                    {
                        l_U107 = 2;
                    }
                }
            }
            break;
            case 1:
            if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
            {
                if (NOT (IS_CHAR_SITTING_IN_CAR( iParam0->_fU0, iParam0->_fU4 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( iParam0->_fU0 );
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( iParam0->_fU0, iParam0->_fU4, 0 );
                }
                if (NOT (IS_CHAR_SITTING_IN_CAR( sub_2202(), iParam0->_fU4 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2202() );
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( sub_2202(), iParam0->_fU4, 0 );
                }
                SWITCH_ROADS_OFF( ref iParam0->_fU56->_fU0, ref iParam0->_fU56->_fU4, ref iParam0->_fU56->_fU8, ref iParam0->_fU68->_fU0, ref iParam0->_fU68->_fU4, ref iParam0->_fU68->_fU8 );
                CLEAR_AREA( iParam0->_fU116[0]._fU0, iParam0->_fU116[0]._fU4, iParam0->_fU116[0]._fU8, 100.00000000, 1 );
                FREEZE_CAR_POSITION( iParam0->_fU4, 1 );
                SET_CAR_HEADING( iParam0->_fU4, iParam0->_fU20 );
                SET_CAR_COORDINATES( iParam0->_fU4, ref iParam0->_fU8->_fU0, ref iParam0->_fU8->_fU4, -101.00000000 );
                REQUEST_COLLISION_AT_POSN( ref iParam0->_fU8->_fU0, ref iParam0->_fU8->_fU4, ref iParam0->_fU8->_fU8 );
                LOAD_SCENE( iParam0->_fU116[0]._fU0, iParam0->_fU116[0]._fU4, iParam0->_fU116[0]._fU8 );
                SET_CAR_COORDINATES( iParam0->_fU4, ref iParam0->_fU8->_fU0, ref iParam0->_fU8->_fU4, -101.00000000 );
                TASK_LOOK_AT_CHAR( sub_2202(), iParam0->_fU0, -2, 0 );
                TASK_LOOK_AT_CHAR( iParam0->_fU0, sub_2202(), -2, 0 );
                if (IS_PED_IN_GROUP( iParam0->_fU0 ))
                {
                    REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
                }
                BEGIN_CAM_COMMANDS( ref l_U117 );
                CREATE_CAM( 14, ref l_U181 );
                SET_CAM_ROT( l_U181, iParam0->_fU144[0]._fU0, iParam0->_fU144[0]._fU4, iParam0->_fU144[0]._fU8 );
                if (IS_BIG_VEHICLE( iParam0->_fU4 ))
                {
                    SET_CAM_FOV( l_U181, iParam0->_fU172[0] * 1.50000000 );
                    SET_CAM_POS( l_U181, iParam0->_fU116[0]._fU0, iParam0->_fU116[0]._fU4, iParam0->_fU116[0]._fU8 * 1.15000000 );
                    POINT_CAM_AT_PED( l_U181, sub_2202() );
                }
                else
                {
                    SET_CAM_FOV( l_U181, iParam0->_fU172[0] );
                    SET_CAM_POS( l_U181, iParam0->_fU116[0]._fU0, iParam0->_fU116[0]._fU4, iParam0->_fU116[0]._fU8 );
                }
                if (iParam0->_fU208[0])
                {
                    SET_CAM_NEAR_DOF( l_U181, iParam0->_fU184[0] );
                    SET_CAM_FAR_DOF( l_U181, iParam0->_fU196[0] );
                }
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                SET_CAM_ACTIVE( l_U181, 1 );
                SET_CAM_PROPAGATE( l_U181, 1 );
                if (iParam0->_fU208[0])
                {
                    SET_USE_HIGHDOF( 1 );
                }
                GET_GAME_TIMER( ref l_U116 );
                l_U111 = 1;
                DO_SCREEN_FADE_IN( 500 );
                sub_12531( iParam0->_fU248, iParam0 + 224, 8, 1 );
                l_U107 = 3;
            }
            break;
            case 2:
            SWITCH_PED_PATHS_OFF( ref iParam0->_fU80->_fU0, ref iParam0->_fU80->_fU4, ref iParam0->_fU80->_fU8, ref iParam0->_fU92->_fU0, ref iParam0->_fU92->_fU4, ref iParam0->_fU92->_fU8 );
            SWITCH_ROADS_OFF( ref iParam0->_fU56->_fU0, ref iParam0->_fU56->_fU4, ref iParam0->_fU56->_fU8, ref iParam0->_fU68->_fU0, ref iParam0->_fU68->_fU4, ref iParam0->_fU68->_fU8 );
            CLEAR_AREA( iParam0->_fU116[0]._fU0, iParam0->_fU116[0]._fU4, iParam0->_fU116[0]._fU8, 100.00000000, 1 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2202() );
            SET_CHAR_COORDINATES( sub_2202(), ref iParam0->_fU40->_fU0, ref iParam0->_fU40->_fU4, ref iParam0->_fU40->_fU8 );
            SET_CHAR_HEADING( sub_2202(), iParam0->_fU52 );
            REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( iParam0->_fU0 );
            SET_CHAR_COORDINATES( iParam0->_fU0, ref iParam0->_fU24->_fU0, ref iParam0->_fU24->_fU4, ref iParam0->_fU24->_fU8 );
            SET_CHAR_HEADING( iParam0->_fU0, iParam0->_fU36 );
            REQUEST_COLLISION_AT_POSN( ref iParam0->_fU8->_fU0, ref iParam0->_fU8->_fU4, ref iParam0->_fU8->_fU8 );
            LOAD_SCENE( iParam0->_fU116[0]._fU0, iParam0->_fU116[0]._fU4, iParam0->_fU116[0]._fU8 );
            SET_CHAR_COORDINATES( iParam0->_fU0, ref iParam0->_fU24->_fU0, ref iParam0->_fU24->_fU4, ref iParam0->_fU24->_fU8 );
            SET_CHAR_HEADING( iParam0->_fU0, iParam0->_fU36 );
            SET_CHAR_COORDINATES( iParam0->_fU0, ref iParam0->_fU24->_fU0, ref iParam0->_fU24->_fU4, ref iParam0->_fU24->_fU8 );
            SET_CHAR_HEADING( iParam0->_fU0, iParam0->_fU36 );
            TASK_LOOK_AT_CHAR( sub_2202(), iParam0->_fU0, -2, 0 );
            TASK_LOOK_AT_CHAR( iParam0->_fU0, sub_2202(), -2, 0 );
            BEGIN_CAM_COMMANDS( ref l_U117 );
            CREATE_CAM( 14, ref l_U181 );
            SET_CAM_POS( l_U181, iParam0->_fU116[1]._fU0, iParam0->_fU116[1]._fU4, iParam0->_fU116[1]._fU8 );
            SET_CAM_ROT( l_U181, iParam0->_fU144[1]._fU0, iParam0->_fU144[1]._fU4, iParam0->_fU144[1]._fU8 );
            SET_CAM_FOV( l_U181, iParam0->_fU172[1] );
            if (iParam0->_fU208[1])
            {
                SET_CAM_NEAR_DOF( l_U181, iParam0->_fU184[1] );
                SET_CAM_FAR_DOF( l_U181, iParam0->_fU196[1] );
            }
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            SET_CAM_ACTIVE( l_U181, 1 );
            SET_CAM_PROPAGATE( l_U181, 1 );
            if (iParam0->_fU208[1])
            {
                SET_USE_HIGHDOF( 1 );
            }
            DO_SCREEN_FADE_IN( 500 );
            sub_12531( iParam0->_fU248, iParam0 + 224, 8, 1 );
            l_U107 = 4;
            break;
            case 3:
            if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
            {
                if (NOT (sub_15732( iParam0->_fU224 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U195 );
                    TASK_LOOK_AT_CHAR( 0, sub_2202(), 50, 0 );
                    TASK_LEAVE_CAR( 0, iParam0->_fU4 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, ref iParam0->_fU104->_fU0, ref iParam0->_fU104->_fU4, ref iParam0->_fU104->_fU8, 2, -1, 0.10000000 );
                    CLOSE_SEQUENCE_TASK( l_U195 );
                    TASK_PERFORM_SEQUENCE( iParam0->_fU0, l_U195 );
                    l_U107 = 5;
                }
            }
            break;
            case 4:
            if (NOT (sub_15732( iParam0->_fU224 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U195 );
                TASK_LOOK_AT_CHAR( 0, sub_2202(), 50, 0 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, ref iParam0->_fU104->_fU0, ref iParam0->_fU104->_fU4, ref iParam0->_fU104->_fU8, 2, -1, 0.10000000 );
                CLOSE_SEQUENCE_TASK( l_U195 );
                TASK_PERFORM_SEQUENCE( iParam0->_fU0, l_U195 );
                CLEAR_SEQUENCE_TASK( l_U195 );
                l_U107 = 5;
            }
            break;
            case 5:
            if ((NOT (IS_CHAR_ON_SCREEN( iParam0->_fU0 ))) || (l_U110))
            {
                SET_CAM_ACTIVE( l_U181, 0 );
                SET_CAM_PROPAGATE( l_U181, 0 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                END_CAM_COMMANDS( ref l_U117 );
                DESTROY_ALL_CAMS();
                if (DOES_VEHICLE_EXIST( iParam0->_fU4 ))
                {
                    if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
                    {
                        FREEZE_CAR_POSITION( iParam0->_fU4, 0 );
                    }
                }
                if ((iParam0->_fU208[0]) || (iParam0->_fU208[1]))
                {
                    SET_USE_HIGHDOF( 0 );
                }
                SET_CAM_BEHIND_PED( sub_2202() );
                if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
                {
                    if (IS_PED_IN_GROUP( iParam0->_fU0 ))
                    {
                        REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
                    }
                    CLEAR_CHAR_TASKS( iParam0->_fU0 );
                    DELETE_CHAR( iParam0 + 0 );
                }
                if (l_U110)
                {
                    sub_28420( 1 );
                }
                else
                {
                    sub_11845( 1 );
                }
                return 1;
            }
            break;
            case 6:
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            l_U109 = 1;
            sub_2297( 0 );
            CLEAR_PRINTS();
            l_U107 = 5;
            break;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int sub_42333(boolean bParam0)
{
    int iVar3;

    if (NOT IS_SCREEN_FADED_OUT())
    {
        if (NOT IS_SCREEN_FADING())
        {
            if (IS_CHAR_IN_ANY_BOAT( sub_2202() ))
            {
                iVar3 = 0;
            }
            else
            {
                iVar3 = 1;
            }
            if (sub_19396( 1, iVar3 ))
            {
                if (bParam0)
                {
                    SET_PLAYER_CONTROL( sub_1404(), 0 );
                }
                DO_SCREEN_FADE_OUT( 500 );
            }
        }
    }
    else
    {
        sub_2297( 0 );
        CLEAR_PRINTS();
        CLEAR_HELP();
        SET_PLAYER_CONTROL( sub_1404(), 0 );
        CLEAR_CHAR_TASKS( sub_2202() );
        DISPLAY_HUD( 0 );
        DISPLAY_RADAR( 0 );
        SET_WIDESCREEN_BORDERS( 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_2202(), 1 );
        ALLOW_EMERGENCY_SERVICES( 0 );
        return 1;
    }
    return 0;
}
