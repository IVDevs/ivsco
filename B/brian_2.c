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
    l_U208 = 0;
    l_U209 = 0;
    l_U210 = 0;
    l_U211 = 0;
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
    l_U225 = 0;
    l_U228 = 0;
    l_U230 = 0;
    l_U231 = 0;
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
    l_U457 = 0;
    l_U492 = 0;
    l_U493 = 0;
    l_U494 = 0;
    l_U495 = 3000;
    l_U496 = 2;
    l_U517 = 0;
    l_U518 = 0;
    l_U539 = 39;
    PRINTSTRING( "********************************BRIAN2 TRIGGERED" );
    PRINTNL();
    if (sub_703( l_U539, l_U496 ))
    {
        if (IS_PLAYER_PLAYING( sub_1404() ))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_1404(), 0 )))
            {
                if (HAS_DEATHARREST_EXECUTED())
                {
                    PRINTSTRING( "brain2 failed" );
                    PRINTNL();
                    sub_1508();
                }
                while (true)
                {
                    WAIT( 0 );
                    if (NOT l_U225)
                    {
                        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
                        {
                            if (NOT l_U263)
                            {
                                if (g_U10978)
                                {
                                    sub_1508();
                                }
                            }
                            if (NOT (IS_WANTED_LEVEL_GREATER( sub_1404(), 0 )))
                            {
                                sub_2978();
                                if ((sub_3381( ref l_U272 )) || (sub_3473( ref l_U272, 22.00000000 )))
                                {
                                    sub_3650();
                                }
                                sub_4023( ref l_U277 );
                                switch (l_U197)
                                {
                                    case 0:
                                    sub_4129();
                                    break;
                                    case 1:
                                    sub_6120();
                                    break;
                                }
                            }
                            else if ((sub_3013( ref l_U272 )) < 7.00000000)
                            {
                                if (NOT g_U65019)
                                {
                                    g_U65019 = 1;
                                    l_U250 = 1;
                                }
                            }
                            sub_1508();;
                        }
                        else
                        {
                            sub_1508();
                        }
                        if (l_U266)
                        {
                            if (DOES_VEHICLE_EXIST( l_U277 ))
                            {
                                if (IS_VEH_DRIVEABLE( l_U277 ))
                                {
                                    CHANGE_CAR_COLOUR( l_U277, l_U517, l_U518 );
                                }
                            }
                        }
                    }
                    if (l_U225)
                    {
                        sub_4023( ref l_U277 );
                        sub_11845();
                        switch (l_U203)
                        {
                            case 0:
                            l_U203 = 1;
                            break;
                            case 1:
                            sub_12078();
                            break;
                            case 2:
                            sub_27211();
                            break;
                            case 3:
                            if (sub_35200( ref l_U577 ))
                            {
                                sub_3650();
                            }
                            break;
                        }
                        if ((IS_KEYBOARD_KEY_PRESSED( 31 )) AND (NOT l_U227))
                        {
                            l_U227 = 1;
                            sub_30939();
                        }
                        if ((IS_KEYBOARD_KEY_PRESSED( 45 )) AND (NOT l_U253))
                        {
                            if (sub_3191( ref l_U277 ))
                            {
                                if (NOT (IS_CAR_DEAD( l_U277 )))
                                {
                                    BEGIN_CAM_COMMANDS( ref l_U493 );
                                    CREATE_CAM( 14, ref l_U479 );
                                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U277, l_U384._fU0, l_U384._fU4, l_U384._fU8, ref l_U381._fU0, ref l_U381._fU4, ref l_U381._fU8 );
                                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                                    SET_CAM_PROPAGATE( l_U479, 1 );
                                    SET_CAM_ACTIVE( l_U479, 1 );
                                    l_U253 = 1;
                                }
                            }
                        }
                        if (l_U253)
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U277, l_U384._fU0, l_U384._fU4, l_U384._fU8, ref l_U381._fU0, ref l_U381._fU4, ref l_U381._fU8 );
                            SET_CAM_POS( l_U479, l_U381._fU0, l_U381._fU4, l_U381._fU8 );
                            SET_CAM_ROT( l_U479, l_U390._fU0, l_U390._fU4, l_U390._fU8 );
                        }
                        if ((IS_KEYBOARD_KEY_PRESSED( 30 )) AND (NOT l_U233))
                        {
                            if (sub_3191( ref l_U277 ))
                            {
                                GET_CAR_MODEL( l_U277, ref l_U180 );
                                BEGIN_CAM_COMMANDS( ref l_U493 );
                                CREATE_CAM( 14, ref l_U479 );
                                ATTACH_CAM_TO_VEHICLE( l_U479, l_U277 );
                                POINT_CAM_AT_VEHICLE( l_U479, l_U277 );
                                GET_MODEL_DIMENSIONS( l_U180, ref l_U119, ref l_U122 );
                                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                                SET_CAM_PROPAGATE( l_U479, 1 );
                                SET_CAM_ACTIVE( l_U479, 1 );
                                l_U233 = 1;
                            }
                        }
                        if (l_U233)
                        {
                            if (NOT (IS_CAR_DEAD( l_U277 )))
                            {
                                PRINTSTRING( "model max: " );
                                PRINTVECTOR( l_U122 );
                                PRINTNL();
                                PRINTSTRING( "model min: " );
                                PRINTVECTOR( l_U119 );
                                PRINTNL();
                                SET_CAM_ATTACH_OFFSET( l_U479, l_U366._fU0, l_U366._fU4, l_U366._fU8 );
                                SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U479, 1 );
                                SET_CAM_POINT_OFFSET( l_U479, l_U375._fU0, l_U375._fU4, l_U375._fU8 );
                                SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U479, 1 );
                                l_U363._fU0 = l_U366._fU0 - l_U119._fU0;
                                l_U363._fU4 = l_U366._fU4 - l_U122._fU4;
                                l_U363._fU8 = l_U366._fU8 - l_U122._fU8;
                                PRINTSTRING( "total dif: " );
                                PRINTFLOAT( l_U363._fU0 );
                                PRINTSTRING( " " );
                                PRINTFLOAT( l_U363._fU4 );
                                PRINTSTRING( " " );
                                PRINTFLOAT( l_U363._fU8 );
                                PRINTNL();
                            }
                        }
                        if ((IS_KEYBOARD_KEY_PRESSED( 32 )) AND (NOT l_U256))
                        {
                            PRINTSTRING( "**d key pressed**" );
                            PRINTNL();
                            BEGIN_CAM_COMMANDS( ref l_U493 );
                            CREATE_CAM( 14, ref l_U479 );
                            ATTACH_CAM_TO_PED( l_U479, sub_2128() );
                            POINT_CAM_AT_PED( l_U479, sub_2128() );
                            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                            SET_CAM_PROPAGATE( l_U479, 1 );
                            SET_CAM_ACTIVE( l_U479, 1 );
                            l_U256 = 1;
                        }
                        if (l_U256)
                        {
                            SET_CAM_ATTACH_OFFSET( l_U479, l_U405._fU0, l_U405._fU4, l_U405._fU8 );
                            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U479, 1 );
                            SET_CAM_POINT_OFFSET( l_U479, l_U375._fU0, l_U375._fU4, l_U375._fU8 );
                            SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U479, 1 );
                        }
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

void sub_1508()
{
    if (sub_1527( l_U539, l_U496 ))
    {
        sub_1623( l_U539, l_U496 );
        if (IS_PLAYER_PLAYING( sub_1404() ))
        {
            SET_PLAYER_CONTROL( sub_1404(), 1 );
        }
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U272, 0, 0, 0 );
            SET_CAM_BEHIND_PED( sub_2128() );
        }
        sub_2176();
        sub_2223( 0 );
    }
    CLEAR_NAMED_CUTSCENE( "Rpbri2" );
    if (l_U511[0] == 1)
    {
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1112.25700000, -283.52580000, 25.00000000, 1130.66200000, -324.00330000, -1.00000000 );
    }
    if (l_U511[1] == 1)
    {
        SWITCH_ROADS_BACK_TO_ORIGINAL( 995.64840000, -549.55650000, 13.58640000, 984.96870000, -475.04270000, 14.90810000 );
    }
    if (l_U260)
    {
        SWITCH_PED_PATHS_ON( 1118.96200000, -329.50950000, 30.00000000, 1105.64700000, -281.83340000, -30.00000000 );
    }
    if (l_U257)
    {
        SWITCH_PED_PATHS_ON( 983.48730000, -518.37180000, 18.31040000, 980.05170000, -470.10850000, -30.00000000 );
    }
    if (l_U264)
    {
        SWITCH_PED_PATHS_OFF( 840.83000000, -561.52000000, 100.00000000, 902.25000000, -556.13000000, -100.00000000 );
    }
    if (l_U250)
    {
        CLEAR_HELP();
        CLEAR_PRINTS();
    }
    if (l_U507[0] == 1)
    {
        CLEAR_PRINTS();
        PRINT( "BRIAN1_PROMPT_2", 7500, 1 );
    }
    else if (l_U507[1] == 1)
    {
        CLEAR_PRINTS();
        PRINT( "BRIAN1_PROMPT_4", 7500, 1 );
    }
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2128(), 1 );
    sub_2786( ref l_U272 );
    sub_2844();
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_1527(int iParam0, int iParam1)
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

void sub_1623(unknown uParam0, unknown uParam1)
{
    if (NOT (sub_1527( uParam0, uParam1 )))
    {
        sub_923( "Interactions_Ended: Interaction for this character not active" );
        return;
    }
    sub_1719();
    if (g_U813)
    {
        sub_1811();
    }
    else
    {
        sub_1929();
    }
    g_U10978 = 0;
    return;
}

void sub_1719()
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

void sub_1811()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1857();
    return;
}

void sub_1857()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1929()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1975();
    return;
}

void sub_1975()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_2128()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2176()
{
    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    return;
}

void sub_2223(unknown uParam0)
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

void sub_2786(unknown uParam0)
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

void sub_2844()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

int sub_2978()
{
    if (l_U239)
    {
        if (IS_HINT_RUNNING())
        {
            if (((sub_3013( ref l_U272 )) > 18.00000000) || (sub_3178()))
            {
                HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U272, 0, 0, 0 );
                l_U239 = 0;
                return 1;
            }
        }
    }
    return 0;
}

void sub_3013(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    float Result;

    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    vVar6 = {0.00000000, 0.00000000, 0.00000000};
    Result = 0.00000000;
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        GET_CHAR_COORDINATES( sub_2128(), ref vVar3.x, ref vVar3.y, ref vVar3.z );
        GET_CHAR_COORDINATES( (uParam0^), ref vVar6.x, ref vVar6.y, ref vVar6.z );
        GET_DISTANCE_BETWEEN_COORDS_3D( vVar3.x, vVar3.y, vVar3.z, vVar6.x, vVar6.y, vVar6.z, ref Result );
        return Result;
    }
    return Result;
}

int sub_3178()
{
    if (sub_3191( ref l_U277 ))
    {
        GET_CAR_SPEED( l_U277, ref l_U464 );
        if (l_U464 > 15.00000000)
        {
            return 1;
        }
    }
    return 0;
}

int sub_3191(unknown uParam0)
{
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2128() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2128(), uParam0 );
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

int sub_3381(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam0^), sub_2128(), 0 ))
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

int sub_3473(unknown uParam0, float fParam1)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if ((sub_3013( uParam0 )) < fParam1)
            {
                if (HAS_CHAR_SPOTTED_CHAR( (uParam0^), sub_2128() ))
                {
                    if (IS_CHAR_ARMED( sub_2128(), 7 ))
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
                if (IS_CHAR_SHOOTING( sub_2128() ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_3650()
{
    sub_3663( ref l_U272 );
    if (g_U65023 < 2)
    {
        g_U65023++;
    }
    g_U65024++;
    if (g_U65024 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_1404(), 150 );
        SAY_AMBIENT_SPEECH( sub_2128(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    sub_3836( ref l_U272 );
    sub_1508();
    return;
}

void sub_3663(unknown uParam0)
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

void sub_3836(unknown uParam0)
{
    unknown uVar3;

    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if (IS_CHAR_IN_ANY_CAR( (uParam0^) ))
            {
                if (sub_3895( ref uVar3, (uParam0^) ))
                {
                    SET_CHAR_KEEP_TASK( (uParam0^), 1 );
                    TASK_LEAVE_CAR_IMMEDIATELY( (uParam0^), uVar3 );
                }
            }
        }
    }
    return;
}

int sub_3895(unknown uParam0, unknown uParam1)
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

void sub_4023(unknown uParam0)
{
    int iVar3;

    if (sub_3191( ref iVar3 ))
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

void sub_4129()
{
    switch (l_U196)
    {
        case 0:
        l_U281 = {863.23250000, -557.86260000, 12.95930000};
        l_U471 = 180.00000000;
        l_U408 = {864.02100000, -558.67440000, 12.72630000};
        l_U472 = 221.29860000;
        l_U284[0] = {1105.40800000, -320.93420000, 17.74770000};
        l_U453[0] = 316.26390000;
        l_U284[1] = {1106.67200000, -319.53050000, 17.74990000};
        l_U453[1] = 164.35090000;
        l_U291 = {1120.78100000, -320.60000000, 19.37000000};
        l_U354 = {1110.58400000, -320.83370000, 17.43600000};
        l_U465 = 22.00000000;
        l_U294 = {984.84200000, -477.94900000, 17.28400000};
        l_U378 = {-0.30534300, 1.56991100, 0.01601700};
        l_U411 = {0.11000000, 0.01000000, -0.06000000};
        l_U414 = {0.13000000, 0.05000000, 0.20000000};
        l_U417 = {0.15000000, 0.04000000, 0.02000000};
        l_U420 = {0.00000000, 52.00000000, -20.00000000};
        l_U486 = 422305098;
        l_U487[0] = -301223260;
        l_U487[1] = -1143910864;
        l_U490 = 1583680046;
        l_U491 = -785338897;
        l_U503 = 2;
        l_U502 = 0;
        for ( l_U492 = 0; l_U492 <= 1; l_U492++ )
        {
            l_U499[l_U492] = 0;
            l_U504[l_U492] = 0;
            l_U511[l_U492] = 0;
        }
        REQUEST_MODEL( l_U486 );
        REQUEST_MODEL( l_U491 );
        REQUEST_ANIMS( "missbrian_2" );
        sub_4686( "PIBAUD" );
        sub_4805( 0, sub_2128(), "NIKO", 0 );
        l_U196 = 1;
        break;
        case 1:
        if (NOT l_U246)
        {
            if ((HAS_MODEL_LOADED( l_U486 )) AND (HAS_MODEL_LOADED( l_U491 )))
            {
                CLEAR_AREA( l_U281._fU0, l_U281._fU4, l_U281._fU8, 10.00000000, 1 );
                CREATE_CHAR( 26, l_U486, l_U281._fU0, l_U281._fU4, l_U281._fU8, ref l_U272, 1 );
                SET_CHAR_PROP_INDEX( l_U272, 0, 0 );
                SET_CHAR_HEALTH( l_U272, 200 );
                SET_CHAR_MONEY( l_U272, 1000 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U272, 0 );
                SET_CHAR_NEVER_TARGETTED( l_U272, 1 );
                SET_CHAR_HEADING( l_U272, l_U471 );
                SET_CHAR_CANT_BE_DRAGGED_OUT( l_U272, 1 );
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U272, 1 );
                sub_4805( 1, l_U272, "BRIAN", 0 );
                sub_5217( ref l_U272, ref l_U278, 1 );
                SET_CHAR_COMPONENT_VARIATION( l_U272, 0, 0, 1 );
                SET_PED_DIES_WHEN_INJURED( l_U272, 1 );
                SET_BRIANS_MOOD( 1 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U272, 1 );
                sub_5415( ref l_U272, 20.00000000, 10.00000000 );
                TASK_STAND_GUARD( l_U272, l_U281, 180.00000000, 0.00000000, 0, -1 );
                CREATE_OBJECT( l_U491, l_U281._fU0, l_U281._fU4, l_U281._fU8, ref l_U522, 1 );
                ATTACH_OBJECT_TO_PED( l_U522, l_U272, 1219, l_U417, l_U420, 0 );
                l_U519 = START_PTFX_ON_OBJ( "ambient_cig_smoke", l_U522, 0.00000000, 0.10000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
                l_U246 = 1;
            }
            else
            {
                WAIT( 0 );
            }
        }
        if ((NOT l_U229) AND (l_U246))
        {
            if (HAVE_ANIMS_LOADED( "missbrian_2" ))
            {
                if (NOT (IS_CHAR_INJURED( l_U272 )))
                {
                    TASK_PLAY_ANIM( l_U272, "cantstandstill_idle", "missbrian_2", 8.00000000, 1, 0, 0, 0, -2 );
                    l_U197 = 1;
                }
            }
            else
            {
                WAIT( 0 );
            }
        }
        CREATE_WIDGET_GROUP( "camera position" );
        ADD_WIDGET_FLOAT_SLIDER( "Float x", ref l_U366._fU0, -1000.00000000, 1000.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "Float y", ref l_U366._fU4, -1000.00000000, 1000.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "Float z", ref l_U366._fU8, -1000.00000000, 1000.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "rot Float x", ref l_U342._fU0, -1000.00000000, 1000.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "rot Float y", ref l_U342._fU4, -1000.00000000, 1000.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "rot Float z", ref l_U342._fU8, -1000.00000000, 1000.00000000, 0.10000000 );
        END_WIDGET_GROUP();
        break;
    }
    return;
}

void sub_4686(unknown uParam0)
{
    StrCopy( ref l_U4._fU0, uParam0, 16 );
    sub_4703();
    return;
}

void sub_4703()
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

void sub_4805(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U4._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U4._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_4885( "\n PED NUMBER ", uParam0 );
    sub_4925( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_4885(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4925(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5217(unknown uParam0, unknown uParam1, boolean bParam2)
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

void sub_5415(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_6120()
{
    sub_6167( ref l_U272, ref l_U520, "GENERIC_FUCK_OFF", "SHIT", ref l_U269 );
    switch (l_U201)
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( l_U272 )))
        {
            if (NOT l_U207)
            {
                if (sub_3191( ref l_U277 ))
                {
                    if ((sub_3013( ref l_U272 )) < 10.00000000)
                    {
                        sub_6420();
                    }
                }
                else if (IS_CHAR_ON_FOOT( sub_2128() ))
                {
                    if ((sub_3013( ref l_U272 )) < 10.00000000)
                    {
                        sub_6420();
                    }
                }
            }
        }
        break;
        case 1: break;
    }
    if (IS_CHAR_ON_FOOT( sub_2128() ))
    {
        sub_6635( ref l_U272, ref l_U530, ref l_U281, ref l_U472, ref l_U259, 0.50000000, "cantstandstill_idle", "missbrian_2", 0, 1 );
        switch (l_U198)
        {
            case 0:
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U272, g_U65012._fU0, g_U65012._fU4, g_U65012._fU8, ref l_U303._fU0, ref l_U303._fU4, ref l_U303._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U272, g_U65015._fU0, g_U65015._fU4, g_U65015._fU8, ref l_U306._fU0, ref l_U306._fU4, ref l_U306._fU8 );
            if (IS_CHAR_IN_ANGLED_AREA_3D( sub_2128(), l_U303._fU0, l_U303._fU4, l_U303._fU8, l_U306._fU0, l_U306._fU4, l_U306._fU8, 6.00000000, 0 ))
            {
                if (sub_7153())
                {
                    SET_MISSION_FLAG( 1 );
                    sub_7222( l_U539, l_U496 );
                    l_U263 = 1;
                    CLEAR_PRINTS();
                    sub_2223( 0 );
                    SET_PLAYER_CONTROL( sub_1404(), 0 );
                    DO_SCREEN_FADE_OUT( 100 );
                    CLEAR_PRINTS();
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    if (IS_HINT_RUNNING())
                    {
                        HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U272, 0, 0, 0 );
                    }
                    LOAD_ADDITIONAL_TEXT( "PIBAUD", 6 );
                    SWITCH_PED_PATHS_OFF( 840.83000000, -561.52000000, 100.00000000, 902.25000000, -556.13000000, -100.00000000 );
                    l_U264 = 1;
                    GET_CHAR_COORDINATES( sub_2128(), ref l_U297._fU0, ref l_U297._fU4, ref l_U297._fU8 );
                    CLEAR_AREA( l_U297._fU0, l_U297._fU4, l_U297._fU8, 100.00000000, 1 );
                    CLEAR_NAMED_CUTSCENE( "Rpbri2" );
                    START_CUTSCENE_NOW( "Rpbri2" );
                    while (NOT HAS_CUTSCENE_LOADED())
                    {
                        WAIT( 0 );
                    }
                    while (NOT HAS_CUTSCENE_FINISHED())
                    {
                        WAIT( 0 );
                    }
                    sub_9839();
                    DO_SCREEN_FADE_IN( 500 );
                    SET_PLAYER_CONTROL_ADVANCED( sub_1404(), 1, 1, 1 );
                    SET_CAM_BEHIND_PED( sub_2128() );
                    CLEAR_PRINTS();
                    PRINT_NOW( "BR2_PMT7", 7500, 1 );
                    GET_GAME_TIMER( ref l_U520 );
                    l_U228 = 1;
                    l_U225 = 1;
                    l_U203 = 1;
                }
            }
            break;
            default:
        }
    }
    if ((IS_KEYBOARD_KEY_PRESSED( 30 )) AND (NOT l_U233))
    {
        BEGIN_CAM_COMMANDS( ref l_U493 );
        CREATE_CAM( 14, ref l_U479 );
        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2128(), 0.00000000, 0.00000000, 0.00000000, ref l_U339._fU0, ref l_U339._fU4, ref l_U339._fU8 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        SET_CAM_PROPAGATE( l_U479, 1 );
        SET_CAM_ACTIVE( l_U479, 1 );
        l_U233 = 1;
    }
    if (l_U233)
    {
        SET_CAM_POS( l_U479, l_U339._fU0, l_U339._fU4, l_U339._fU8 );
        SET_CAM_ROT( l_U479, l_U342._fU0, 0.00000000, l_U342._fU8 );
    }
    return;
}

void sub_6167(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (sub_6181( uParam1, 7000 ))
    {
        if ((sub_3013( uParam0 )) < 15)
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

int sub_6181(unknown uParam0, int iParam1)
{
    GET_GAME_TIMER( ref l_U113 );
    if ((l_U113 - (uParam0^)) > iParam1)
    {
        return 1;
    }
    return 0;
}

void sub_6420()
{
    if (IS_CHAR_ON_FOOT( sub_2128() ))
    {
        HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U272, 0, 0, 6000 );
    }
    l_U239 = 1;
    l_U201 = 1;
    return;
}

void sub_6635(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, boolean bParam9)
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

int sub_7153()
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

void sub_7222(unknown uParam0, unknown uParam1)
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
    sub_7585();
    sub_8356( g_U34048[uVar4]._fU32 );
    g_U34048[uVar4]._fU32 = 0;
    sub_8500( uParam0, uParam1 );
    g_U10978 = 1;
    return;
}

void sub_7585()
{
    sub_7594();
    sub_7697( ref g_U9893._fU68 );
    sub_7746();
    return;
}

void sub_7594()
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

void sub_7697(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_7746()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_7784( 1, g_U569[I] )) == 0)
        {
            sub_8035( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_8213())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_7784(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_8035(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_8120( g_U569 - 1 );
    return;
}

void sub_8120(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_8213()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_7784( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_8356(int iParam0)
{
    g_U34175._fU16._fU4 += iParam0;
    sub_8390();
    INCREMENT_INT_STAT( 286, iParam0 );
    return;
}

void sub_8390()
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

void sub_8500(unknown uParam0, int iParam1)
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
    sub_9346( cVar4 );
    return;
}

void sub_9346(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_9839()
{
    REQUEST_ANIMS( "gestures@niko" );
    SWITCH_PED_PATHS_ON( 840.83000000, -561.52000000, 100.00000000, 902.25000000, -556.13000000, -100.00000000 );
    l_U264 = 0;
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2128(), 0 );
    CLEAR_WANTED_LEVEL( sub_1404() );
    SET_WANTED_MULTIPLIER( 0.10000000 );
    REQUEST_MODEL( l_U487[0] );
    REQUEST_MODEL( l_U487[1] );
    REQUEST_MODEL( l_U490 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U524 );
    LOAD_COMBAT_DECISION_MAKER( 7, ref l_U523 );
    # -sub_C1FFC0-0xc214c8( 3, ref l_U526 );
    LOAD_COMBAT_DECISION_MAKER( 1, ref l_U527 );
    LOAD_ALL_OBJECTS_NOW();
    LOAD_ADDITIONAL_TEXT( "WI_BR2", 0 );
    sub_10078( "brian_2" );
    LOAD_SCENE( l_U281._fU0, l_U281._fU4, l_U281._fU8 );
    if (NOT (IS_CHAR_INJURED( l_U272 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U272 );
        SET_CHAR_HEADING( l_U272, l_U472 );
        SET_CHAR_COORDINATES( l_U272, l_U408._fU0, l_U408._fU4, l_U408._fU8 );
        TASK_PLAY_ANIM( l_U272, "cantstandstill_idle", "missbrian_2", 8.00000000, 1, 0, 0, 0, -2 );
        sub_10426( ref l_U272, ref l_U526, ref l_U527 );
    }
    SET_CHAR_HEADING( sub_2128(), 222.21550000 );
    SET_CHAR_COORDINATES( sub_2128(), 862.47800000, -558.73590000, 12.72630000 );
    REMOVE_BLIP( l_U278 );
    STOP_PTFX( l_U519 );
    DELETE_OBJECT( ref l_U522 );
    l_U577._fU0 = l_U272;
    l_U577._fU8 = {994.45000000, -530.98000000, 14.34000000};
    l_U577._fU20 = 0.20000000;
    l_U577._fU24 = {998.41690000, -529.10100000, 14.12980000};
    l_U577._fU36 = 208.70850000;
    l_U577._fU40 = {998.11790000, -531.37020000, 14.08990000};
    l_U577._fU52 = 31.15340000;
    l_U577._fU116[0] = {997.92000000, -523.46000000, 14.72000000};
    l_U577._fU144[0] = {6.40000000, 0.78000000, 160.05000000};
    l_U577._fU172[0] = 30.60000000;
    l_U577._fU116[1] = {996.41830000, -532.31510000, 15.32652000};
    l_U577._fU144[1] = {6.76752700, 0.00000000, -41.10856000};
    l_U577._fU172[1] = 31.20004000;
    l_U577._fU208[0] = 1;
    l_U577._fU208[1] = 0;
    l_U577._fU184[0] = 0.01000000;
    l_U577._fU196[0] = 30.00000000;
    l_U577._fU184[1] = 0.01000000;
    l_U577._fU196[1] = 150.00000000;
    l_U577._fU56 = {995.52000000, -556.28000000, 50.00000000};
    l_U577._fU68 = {985.86000000, -466.76000000, -50.00000000};
    l_U577._fU80 = {1006.29000000, -555.03000000, 50.00000000};
    l_U577._fU92 = {996.76000000, -468.20000000, -50.00000000};
    l_U577._fU104 = {1012.08000000, -530.54000000, 14.71000000};
    l_U577._fU248 = "PIB_FAIL";
    return;
}

void sub_10078(unknown uParam0)
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

void sub_10426(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_11845()
{
    if (NOT l_U271)
    {
        if (sub_11869( ref l_U272 ))
        {
            CLEAR_PRINTS();
            PRINT( "BRIAN1_PROMPT_4", 7500, 1 );
            sub_3650();
        }
        if ((sub_3013( ref l_U272 )) > 200.00000000)
        {
            CLEAR_PRINTS();
            PRINT_NOW( "BR2_PMT5", 5000, 1 );
            sub_3650();
        }
    }
    return;
}

int sub_11869(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        return IS_CHAR_INJURED( (uParam0^) );
    }
    return 0;
}

void sub_12078()
{
    if (NOT l_U241)
    {
        sub_12098();
    }
    if ((NOT (l_U499[0] == 1)) AND (l_U514[0] == 1))
    {
        if (sub_12791( ref l_U502, 1000 ))
        {
            l_U499[0] = 1;
            sub_12886();
        }
    }
    if ((IS_KEYBOARD_KEY_PRESSED( 36 )) AND (NOT l_U208))
    {
        if (NOT (IS_CHAR_INJURED( sub_2128() )))
        {
            SET_CHAR_COORDINATES( sub_2128(), 1090.92200000, -352.82710000, 15.70750000 );
            SET_CHAR_HEADING( sub_2128(), 123.15150000 );
            l_U208 = 1;
        }
    }
    switch (l_U199)
    {
        case 0:
        if (sub_14532( ref l_U272, 200 ))
        {
            sub_2223( 0 );
            CLEAR_PRINTS();
            PRINT_NOW( "BRIAN2_PROMPT_2", 7500, 1 );
            sub_3650();
        }
        sub_6635( ref l_U272, ref l_U530, ref l_U408, ref l_U471, ref l_U259, 0.50000000, "cantstandstill_idle", "missbrian_2", 1, 1 );
        sub_14775( ref l_U272, ref l_U278, "BR2_PMT10", "BR2_PMT7" );
        if (NOT l_U270)
        {
            if (sub_6181( ref l_U520, 500 ))
            {
                SAY_AMBIENT_SPEECH( l_U272, "NEED_A_VEHICLE", 1, 0, 2 );
                l_U270 = 1;
            }
        }
        if (sub_15007( l_U272 ))
        {
            if (DOES_BLIP_EXIST( l_U278 ))
            {
                CLEAR_CHAR_TASKS( l_U272 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U272, 0 );
                sub_13669( ref l_U272, ref l_U528, ref l_U525, 0 );
                CLEAR_AREA( l_U284[0]._fU0, l_U284[0]._fU4, l_U284[0]._fU8, 50.00000000, 1 );
                for ( l_U492 = 0; l_U492 <= 1; l_U492++ )
                {
                    CREATE_CHAR( 26, l_U487[l_U492], l_U284[l_U492]._fU0, l_U284[l_U492]._fU4, l_U284[l_U492]._fU8, ref l_U273[l_U492], 1 );
                    SET_CHAR_HEADING( l_U273[l_U492], l_U453[l_U492] );
                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U273[l_U492], 1 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U273[l_U492], 1 );
                    SET_CHAR_NEVER_TARGETTED( l_U273[l_U492], 1 );
                }
                sub_4805( 2, l_U273[0], "PIB_THUG", 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U273[0], 1, 0, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U273[1], 1, 1, 2 );
                if ((NOT (IS_CHAR_INJURED( l_U273[0] ))) AND (NOT (IS_CHAR_INJURED( l_U273[1] ))))
                {
                    CLEAR_SEQUENCE_TASK( l_U531 );
                    CLEAR_CHAR_TASKS( l_U273[0] );
                    OPEN_SEQUENCE_TASK( ref l_U531 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U273[1] );
                    TASK_PLAY_ANIM( 0, "street_chat_b", "missbrian_2", 8.00000000, 1, 0, 0, 1, 99999999 );
                    CLOSE_SEQUENCE_TASK( l_U531 );
                    TASK_PERFORM_SEQUENCE( l_U273[0], l_U531 );
                    CLEAR_SEQUENCE_TASK( l_U531 );
                    CLEAR_SEQUENCE_TASK( l_U532 );
                    CLEAR_CHAR_TASKS( l_U273[1] );
                    OPEN_SEQUENCE_TASK( ref l_U532 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U273[0] );
                    TASK_PLAY_ANIM( 0, "argue_b", "missbrian_2", 8.00000000, 1, 0, 0, 1, 99999999 );
                    CLOSE_SEQUENCE_TASK( l_U532 );
                    TASK_PERFORM_SEQUENCE( l_U273[1], l_U532 );
                    CLEAR_SEQUENCE_TASK( l_U532 );
                }
                REMOVE_BLIP( l_U278 );
                CLEAR_PRINTS();
                ADD_BLIP_FOR_COORD( l_U291._fU0, l_U291._fU4, l_U291._fU8, ref l_U279 );
                SET_ROUTE( l_U279, 1 );
                SET_CREATE_RANDOM_COPS( 0 );
                CLEAR_AREA_OF_COPS( l_U291._fU0, l_U291._fU4, l_U291._fU8, 100.00000000 );
                GET_GAME_TIMER( ref l_U498 );
                l_U199 = 2;
            }
        }
        break;
        case 2:
        sub_15974( ref l_U278, ref l_U279, ref l_U291, "BR2_PMT1", "BR2_PMT9", ref l_U258, 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
        if (NOT l_U258)
        {
            sub_16306( ref l_U272, ref l_U278, ref l_U291, ref l_U279, "BR2_PMT2", "BR2_PMT1", 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000, ref l_U528, ref l_U525 );
        }
        else
        {
            sub_16592( ref l_U272, ref l_U278, "BR2_PMT2", ref l_U528, ref l_U525 );
        }
        if (sub_16798( ref l_U273[0], 1114.28800000, -321.07980000, 17.16310000, 11.50000000, 4.00000000, 4.00000000 ))
        {
            CLEAR_PRINTS();
            sub_2223( 0 );
            PRINT_NOW( "BR2_PMT4", 7500, 1 );
            GET_GAME_TIMER( ref l_U577._fU220 );
            for ( l_U492 = 0; l_U492 <= 1; l_U492++ )
            {
                SET_CHAR_KEEP_TASK( l_U273[l_U492], 1 );
                TASK_SMART_FLEE_CHAR( l_U273[l_U492], sub_2128(), 100.00000000, -1 );
            }
            if (DOES_BLIP_EXIST( l_U279 ))
            {
                REMOVE_BLIP( l_U279 );
            }
            l_U271 = 1;
            l_U203 = 3;
        }
        if (NOT l_U242)
        {
            sub_17096();
        }
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2128(), l_U291._fU0, l_U291._fU4, l_U291._fU8, 100.00000000, 100.00000000, 100.00000000, 0 )))
        {
            CLEAR_AREA( l_U291._fU0, l_U291._fU4, l_U291._fU8, 10.00000000, 0 );
            CLEAR_AREA( l_U284[0]._fU0, l_U284[0]._fU4, l_U284[0]._fU8, 7.00000000, 0 );
        }
        if (DOES_BLIP_EXIST( l_U279 ))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_2128(), l_U291._fU0, l_U291._fU4, l_U291._fU8, 2.50000000, 2.50000000, 2.50000000, 1 ))
            {
                if (sub_20726() < 10.00000000)
                {
                    if (sub_20898())
                    {
                        sub_21315( ref l_U272, ref l_U277 );
                        if (sub_21771( ref l_U277 ))
                        {
                            TASK_CAR_TEMP_ACTION( sub_2128(), l_U277, 6, 100 );
                            l_U234 = 1;
                        }
                        sub_21857();
                        l_U199 = 3;
                    }
                    else if (NOT g_U65018)
                    {
                        PRINT( "BRIAN1_PROMPT_7", 7500, 1 );
                        PRINTNL();
                        g_U65018 = 1;
                    }
                }
            }
            else if (g_U65018)
            {
                CLEAR_THIS_PRINT( "BRIAN1_PROMPT_7" );
                g_U65018 = 0;
            }
        }
        break;
        case 3:
        if (IS_GROUP_MEMBER( l_U272, l_U528 ))
        {
            REMOVE_CHAR_FROM_GROUP( l_U272 );
        }
        l_U199 = 4;
        break;
        case 4:
        switch (l_U200)
        {
            case 0:
            if (NOT l_U217)
            {
                if (l_U234)
                {
                    if (sub_18575( l_U540[2] ))
                    {
                        BLOCK_CHAR_AMBIENT_ANIMS( l_U272, 1 );
                        if ((sub_23001( l_U540[2] )) == 1)
                        {
                            sub_23076();
                        }
                    }
                }
                else if (NOT (sub_18575( l_U540[2] )))
                {
                    sub_23339();
                }
            }
            break;
            case 1:
            if (NOT (IS_CHAR_INJURED( l_U272 )))
            {
                if (NOT (sub_18575( l_U540[2] )))
                {
                    l_U200 = 2;
                }
            }
            break;
            case 2:
            if (NOT (IS_CHAR_INJURED( l_U272 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U273[0] )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U273[1] )))
                    {
                        sub_23725();
                        BEGIN_CAM_COMMANDS( ref l_U493 );
                        CREATE_CAM( 14, ref l_U479 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U273[0] );
                        SET_CHAR_COORDINATES( l_U273[0], l_U284[0]._fU0, l_U284[0]._fU4, -101.00000000 );
                        SET_CHAR_HEADING( l_U273[0], 298.32560000 );
                        TASK_LOOK_AT_CHAR( l_U273[0], l_U272, -2, 0 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U273[1] );
                        SET_CHAR_COORDINATES( l_U273[1], l_U284[1]._fU0, l_U284[1]._fU4, -101.00000000 );
                        SET_CHAR_HEADING( l_U273[1], 264.14200000 );
                        TASK_LOOK_AT_CHAR( l_U273[1], l_U272, -2, 0 );
                        SET_CHAR_COORDINATES( l_U272, 1114.50000000, -320.92760000, 17.11650000 );
                        SET_CHAR_HEADING( l_U272, 95.47530000 );
                        OPEN_SEQUENCE_TASK( ref l_U530 );
                        TASK_LOOK_AT_CHAR( 0, l_U273[0], -2, 0 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1110.58400000, -321.06290000, 17.39690000, 2, -1, 0.40000000 );
                        TASK_CHAR_SLIDE_TO_COORD( 0, 1110.58400000, -321.06290000, 17.39690000, 113.03390000, 1061158912 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U273[0] );
                        CLOSE_SEQUENCE_TASK( l_U530 );
                        TASK_PERFORM_SEQUENCE( l_U272, l_U530 );
                        CLEAR_SEQUENCE_TASK( l_U530 );
                        SET_CAM_POS( l_U479, 1115.45300000, -319.85280000, 18.03590000 );
                        SET_CAM_ROT( l_U479, 5.38981500, 0.00000000, 94.78580000 );
                        SET_CAM_FOV( l_U479, 31.50003000 );
                        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                        SET_CAM_ACTIVE( l_U479, 1 );
                        SET_CAM_PROPAGATE( l_U479, 1 );
                        GET_GAME_TIMER( ref l_U510 );
                        l_U200 = 3;
                    }
                }
            }
            break;
            case 3:
            if (NOT l_U252)
            {
                if (NOT (IS_CHAR_INJURED( l_U273[0] )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U533[0] );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1109.00600000, -321.00280000, 17.50100000, 2, -1, 0.40000000 );
                    TASK_CHAR_SLIDE_TO_COORD( 0, 1109.00600000, -321.00280000, 17.50100000, 271.99640000, 1061158912 );
                    CLOSE_SEQUENCE_TASK( l_U533[0] );
                    TASK_PERFORM_SEQUENCE( l_U273[0], l_U533[0] );
                    CLEAR_SEQUENCE_TASK( l_U533[0] );
                    sub_17424( "PIB_ARR2", ref l_U540[0], 8, 1 );
                    l_U252 = 1;
                }
            }
            if (l_U252)
            {
                if ((NOT (IS_CHAR_INJURED( l_U272 ))) AND (NOT (IS_CHAR_INJURED( l_U273[0] ))))
                {
                    GET_SCRIPT_TASK_STATUS( l_U272, 29, ref l_U537 );
                    GET_SCRIPT_TASK_STATUS( l_U273[0], 29, ref l_U538 );
                    if ((l_U537 == 7) AND (l_U538 == 7))
                    {
                        CLEAR_SEQUENCE_TASK( l_U533[0] );
                        OPEN_SEQUENCE_TASK( ref l_U533[0] );
                        TASK_PLAY_ANIM( 0, "street_chat_b", "missbrian_2", 8.00000000, 0, 0, 0, 1, 3000 );
                        CLOSE_SEQUENCE_TASK( l_U533[0] );
                        TASK_PERFORM_SEQUENCE( l_U273[0], l_U533[0] );
                        CLEAR_SEQUENCE_TASK( l_U533[0] );
                        l_U200 = 4;
                    }
                }
                PRINTSTRING( "fail 0 " );
                PRINTNL();
            }
            break;
            case 4:
            if (NOT l_U214)
            {
                if (NOT (IS_CHAR_INJURED( l_U273[0] )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U272 )))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U273[0], 29, ref l_U537 );
                        if (l_U537 == 7)
                        {
                            CLEAR_SEQUENCE_TASK( l_U533[0] );
                            OPEN_SEQUENCE_TASK( ref l_U533[0] );
                            TASK_PLAY_ANIM( 0, "drugs_deal", "missbrian_2", 8.00000000, 0, 0, 0, 0, -1 );
                            CLOSE_SEQUENCE_TASK( l_U533[0] );
                            TASK_PERFORM_SEQUENCE( l_U273[0], l_U533[0] );
                            CLEAR_SEQUENCE_TASK( l_U533[0] );
                            GET_GAME_TIMER( ref l_U498 );
                            l_U214 = 1;
                            CLEAR_SEQUENCE_TASK( l_U530 );
                            OPEN_SEQUENCE_TASK( ref l_U530 );
                            TASK_PLAY_ANIM( 0, "take_obj", "missbrian_2", 8.00000000, 0, 0, 0, 0, -1 );
                            CLOSE_SEQUENCE_TASK( l_U530 );
                            TASK_PERFORM_SEQUENCE( l_U272, l_U530 );
                            CLEAR_SEQUENCE_TASK( l_U530 );
                            l_U200 = 5;
                        }
                    }
                }
            }
            break;
            case 5:
            if ((NOT (IS_CHAR_INJURED( l_U273[0] ))) AND (NOT (IS_CHAR_INJURED( l_U272 ))))
            {
                if (IS_CHAR_PLAYING_ANIM( l_U273[0], "missbrian_2", "drugs_deal" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U273[0], "missbrian_2", "drugs_deal", ref l_U473 );
                }
                if (NOT l_U267)
                {
                    if (l_U473 > 0.20000000)
                    {
                        CREATE_OBJECT_NO_OFFSET( l_U490, l_U284[0]._fU0, l_U284[0]._fU4, l_U284[0]._fU8, ref l_U521, 1 );
                        ATTACH_OBJECT_TO_PED( l_U521, l_U273[0], 1232, l_U411, l_U414, 0 );
                        l_U267 = 1;
                    }
                }
                if ((l_U267) AND (NOT l_U268))
                {
                    if (l_U473 > 0.70000000)
                    {
                        DELETE_OBJECT( ref l_U521 );
                        l_U268 = 1;
                    }
                }
                GET_SCRIPT_TASK_STATUS( l_U273[0], 29, ref l_U537 );
                GET_SCRIPT_TASK_STATUS( l_U272, 29, ref l_U538 );
                if ((l_U537 == 7) AND (l_U538 == 7))
                {
                    TASK_FLUSH_ROUTE();
                    TASK_EXTEND_ROUTE( 1116.25700000, -319.75660000, 17.23680000 );
                    OPEN_SEQUENCE_TASK( ref l_U530 );
                    TASK_LOOK_AT_CHAR( 0, l_U273[0], 50, 0 );
                    TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                    CLOSE_SEQUENCE_TASK( l_U530 );
                    TASK_PERFORM_SEQUENCE( l_U272, l_U530 );
                    CLEAR_SEQUENCE_TASK( l_U530 );
                    GET_GAME_TIMER( ref l_U498 );
                    l_U199 = 5;
                    PRINTSTRING( "walk fail 1" );
                    PRINTNL();
                }
            }
            break;
        }
        break;
        case 5:
        if (NOT l_U262)
        {
            if (sub_6181( ref l_U498, 500 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U273[0] )))
                {
                    TASK_FLUSH_ROUTE();
                    TASK_EXTEND_ROUTE( 1085.00000000, -322.00000000, 19.19000000 );
                    OPEN_SEQUENCE_TASK( ref l_U533[0] );
                    TASK_LOOK_AT_CHAR( 0, l_U272, 50, 0 );
                    TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                    CLOSE_SEQUENCE_TASK( l_U533[0] );
                    TASK_PERFORM_SEQUENCE( l_U273[0], l_U533[0] );
                    CLEAR_SEQUENCE_TASK( l_U533[0] );
                    l_U262 = 1;
                }
            }
        }
        if (NOT l_U261)
        {
            if (sub_6181( ref l_U498, 800 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U273[1] )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U533[1] );
                    TASK_LOOK_AT_CHAR( 0, l_U272, 50, 0 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1085.00000000, -322.00000000, 19.19000000, 2, -1, 1.00000000 );
                    CLOSE_SEQUENCE_TASK( l_U533[1] );
                    TASK_PERFORM_SEQUENCE( l_U273[1], l_U533[1] );
                    CLEAR_SEQUENCE_TASK( l_U533[1] );
                    l_U261 = 1;
                }
            }
        }
        if (l_U261)
        {
            if (NOT (IS_CHAR_INJURED( l_U272 )))
            {
                if (sub_6181( ref l_U498, 2000 ))
                {
                    sub_26060();
                }
            }
        }
        break;
        case 6:
        if (NOT (IS_CHAR_INJURED( l_U272 )))
        {
            if (NOT (DOES_BLIP_EXIST( l_U278 )))
            {
                if (NOT (IS_PED_IN_GROUP( l_U272 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U272, ref l_U278 );
                    SET_BLIP_AS_FRIENDLY( l_U278, 1 );
                    CLEAR_PRINTS();
                    PRINT_NOW( "BR2_PMT2", 7500, 1 );
                }
            }
            else if ((sub_3013( ref l_U272 )) < 12.00000000)
            {
                if (DOES_BLIP_EXIST( l_U278 ))
                {
                    REMOVE_BLIP( l_U278 );
                    sub_13669( ref l_U272, ref l_U528, ref l_U525, 0 );
                    CLEAR_PRINTS();
                    PRINT_NOW( "BR2_PMT6", 7500, 0 );
                }
            }
            if (NOT l_U265)
            {
                if (IS_PED_IN_GROUP( l_U272 ))
                {
                    if (sub_3191( ref l_U277 ))
                    {
                        if (IS_CHAR_SITTING_IN_CAR( l_U272, l_U277 ))
                        {
                            sub_19806( "PIB_GO2", 0, 1, ref l_U540[3], 8, 1 );
                            ADD_BLIP_FOR_COORD( l_U294._fU0, l_U294._fU4, l_U294._fU8, ref l_U280 );
                            SET_ROUTE( l_U280, 1 );
                            l_U265 = 1;
                        }
                    }
                    else if ((sub_3013( ref l_U272 )) < 4.00000000)
                    {
                        sub_19806( "PIB_GO2", 0, 1, ref l_U540[3], 8, 1 );
                        ADD_BLIP_FOR_COORD( l_U294._fU0, l_U294._fU4, l_U294._fU8, ref l_U280 );
                        SET_ROUTE( l_U280, 1 );
                        l_U265 = 1;
                    }
                }
            }
            else if (NOT (sub_18575( l_U540[3] )))
            {
                CLEAR_PRINTS();
                PRINT_NOW( "BR2_PMT8", 7500, 1 );
                GET_GAME_TIMER( ref l_U498 );
                l_U204 = 4;
                l_U203 = 2;
            }
        }
        break;
    }
    return;
}

void sub_12098()
{
    for ( l_U492 = 0; l_U492 <= (l_U503 - 1); l_U492++ )
    {
        if (DOES_CHAR_EXIST( l_U273[l_U492] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U273[l_U492] )))
            {
                if (((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U273[l_U492], sub_2128(), 0 )) || ((IS_PLAYER_TARGETTING_CHAR( sub_1404(), l_U273[l_U492] )) AND (HAS_CHAR_SPOTTED_CHAR( l_U273[l_U492], sub_2128() )))) || (IS_CHAR_RESPONDING_TO_EVENT( l_U273[l_U492], 9 )))
                {
                    CLEAR_PRINTS();
                    sub_2223( 0 );
                    GET_GAME_TIMER( ref l_U577._fU220 );
                    PRINT( "BR2_PMT11", 7500, 1 );
                    sub_12332();
                    if (DOES_BLIP_EXIST( l_U279 ))
                    {
                        REMOVE_BLIP( l_U279 );
                    }
                    l_U271 = 1;
                    l_U203 = 3;
                }
            }
            else
            {
                CLEAR_PRINTS();
                sub_2223( 0 );
                GET_GAME_TIMER( ref l_U577._fU220 );
                PRINT( "BR2_PMT11", 7500, 1 );
                sub_12332();
                if (DOES_BLIP_EXIST( l_U279 ))
                {
                    REMOVE_BLIP( l_U279 );
                }
                l_U271 = 1;
                l_U203 = 3;
            }
        }
    }
    return;
}

void sub_12332()
{
    if (NOT (IS_CHAR_INJURED( l_U273[0] )))
    {
        SET_CHAR_KEEP_TASK( l_U273[0], 1 );
        sub_12389( ref l_U273[0], ref l_U523 );
    }
    if (NOT (IS_CHAR_INJURED( l_U273[1] )))
    {
        SET_CHAR_KEEP_TASK( l_U273[1], 1 );
        TASK_SMART_FLEE_CHAR( l_U273[1], sub_2128(), 150.00000000, 50000 );
    }
    return;
}

void sub_12389(unknown uParam0, unknown uParam1)
{
    SET_RELATIONSHIP( 5, 0, 23 );
    SET_RELATIONSHIP( 5, 23, 0 );
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 0 );
            SET_COMBAT_DECISION_MAKER( (uParam0^), (uParam1^) );
            SET_CHAR_RELATIONSHIP_GROUP( (uParam0^), 23 );
            SET_CHAR_WILL_USE_COVER( (uParam0^), 1 );
            SET_CHAR_IS_TARGET_PRIORITY( (uParam0^), 1 );
        }
    }
    return;
}

int sub_12791(unknown uParam0, unknown uParam1)
{
    if (sub_6181( uParam0, uParam1 ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if (sub_12826())
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_12826()
{
    return IS_CONTROL_JUST_PRESSED( 2, 77 );
}

void sub_12886()
{
    DO_SCREEN_FADE_OUT( 500 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    sub_12939( ref l_U272, ref l_U277 );
    CLEAR_PRINTS();
    sub_2223( 0 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 1112.25700000, -283.52580000, 25.00000000, 1130.66200000, -324.00330000, -1.00000000 );
    l_U511[0] = 0;
    SWITCH_PED_PATHS_ON( 1118.96200000, -329.50950000, 30.00000000, 1105.64700000, -281.83340000, -1.00000000 );
    l_U260 = 0;
    if (NOT (IS_CHAR_INJURED( l_U272 )))
    {
        CLEAR_CHAR_TASKS( l_U272 );
        if (IS_GROUP_MEMBER( l_U272, l_U528 ))
        {
            REMOVE_CHAR_FROM_GROUP( l_U272 );
        }
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U272 );
        SET_CHAR_COORDINATES( l_U272, 1114.50000000, -320.92760000, 17.11650000 );
        SET_CHAR_HEADING( l_U272, 95.47530000 );
        for ( l_U492 = 0; l_U492 <= 1; l_U492++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U273[l_U492] )))
            {
                CLEAR_CHAR_TASKS( l_U273[l_U492] );
                TASK_WANDER_STANDARD( l_U273[l_U492] );
            }
        }
        sub_13669( ref l_U272, ref l_U528, ref l_U525, 0 );
        l_U199 = 6;
        sub_14035( 1 );
    }
    if (DOES_CAM_EXIST( l_U479 ))
    {
        SET_CAM_PROPAGATE( l_U479, 0 );
        SET_CAM_ACTIVE( l_U479, 0 );
    }
    if (DOES_CAM_EXIST( l_U481 ))
    {
        SET_CAM_PROPAGATE( l_U481, 0 );
        SET_CAM_ACTIVE( l_U481, 0 );
    }
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    END_CAM_COMMANDS( ref l_U493 );
    DESTROY_ALL_CAMS();
    sub_2223( 0 );
    CLEAR_PRINTS();
    SET_CAM_BEHIND_PED( sub_2128() );
    SET_PLAYER_CONTROL( sub_1404(), 1 );
    DO_SCREEN_FADE_IN( 500 );
    return;
}

void sub_12939(unknown uParam0, unknown uParam1)
{
    sub_12950( uParam1 );
    sub_13211( uParam0 );
    return;
}

void sub_12950(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            SET_CAR_PROOFS( (uParam0^), 0, 0, 0, 0, 0 );
            sub_13006( uParam0 );
        }
    }
    return;
}

void sub_13006(unknown uParam0)
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

void sub_13211(unknown uParam0)
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

void sub_13669(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
        if (sub_13782( uParam0, uParam1 ))
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
        if (sub_13782( uParam0, uParam1 ))
        {
            COPY_GROUP_CHAR_DECISION_MAKER( 65536, uParam2 );
            SET_GROUP_CHAR_DECISION_MAKER( (uParam0^), (uParam2^) );
        }
        break;
    }
    return;
}

int sub_13782(unknown uParam0, unknown uParam1)
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

void sub_14035(boolean bParam0)
{
    CLEAR_PRINTS();
    CLEAR_HELP();
    sub_2223( 0 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    SET_WIDESCREEN_BORDERS( 0 );
    if (IS_PLAYER_PLAYING( sub_1404() ))
    {
        SET_INTERP_IN_OUT_VEHICLE_ENABLED_THIS_FRAME( 0 );
        SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
        SET_CAM_BEHIND_PED( sub_2128() );
        if (bParam0)
        {
            CLEAR_CHAR_TASKS( sub_2128() );
        }
        SET_PLAYER_CONTROL( sub_1404(), 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_2128(), 0 );
    }
    ALLOW_EMERGENCY_SERVICES( 1 );
    DO_SCREEN_FADE_IN( 500 );
    return;
}

int sub_14532(unknown uParam0, unknown uParam1)
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

void sub_14775(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT (DOES_BLIP_EXIST( (uParam1^) )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2128() ))
        {
            ADD_BLIP_FOR_CHAR( (uParam0^), uParam1 );
            SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
            CLEAR_PRINTS();
            PRINT_NOW( uParam2, 7500, 1 );
        }
    }
    else if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2128() )))
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

int sub_15007(unknown uParam0)
{
    if ((sub_3013( ref uParam0 )) < 10.00000000)
    {
        return 1;
    }
    if ((IS_PLAYER_PRESSING_HORN( sub_1404() )) AND ((sub_3013( ref uParam0 )) < (10.00000000 * 2.00000000)))
    {
        return 1;
    }
    return 0;
}

void sub_15974(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, boolean bParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    if (IS_WANTED_LEVEL_GREATER( sub_1404(), 0 ))
    {
        if (NOT (uParam5^))
        {
            if (DOES_BLIP_EXIST( (uParam1^) ))
            {
                REMOVE_BLIP( (uParam1^) );
            }
            PRINT_NOW( uParam4, 7500, 1 );
            (uParam5^) = 1;
        }
    }
    else if ((uParam5^))
    {
        CLEAR_THIS_PRINT( uParam4 );
        (uParam5^) = 0;
        if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
        {
            ADD_BLIP_FOR_COORD( iParam2->_fU0, iParam2->_fU4, iParam2->_fU8, uParam1 );
            SET_ROUTE( (uParam1^), 1 );
            if (bParam6)
            {
                sub_16144( uParam1, uParam7, uParam10 );
            }
            CLEAR_PRINTS();
            PRINT( uParam3, 7500, 1 );
        }
    }
    return;
}

void sub_16144(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

void sub_16306(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, boolean bParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12)
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
        else if ((sub_3013( uParam0 )) < 12.00000000)
        {
            if (DOES_BLIP_EXIST( (uParam1^) ))
            {
                REMOVE_BLIP( (uParam1^) );
                sub_13669( uParam0, uParam11, uParam12, 0 );
                ADD_BLIP_FOR_COORD( iParam2->_fU0, iParam2->_fU4, iParam2->_fU8, uParam3 );
                SET_ROUTE( (uParam3^), 1 );
                if (bParam6)
                {
                    sub_16144( uParam3, uParam7, uParam10 );
                }
                CLEAR_PRINTS();
                PRINT( uParam5, 7500, 1 );
            }
        }
    }
    return;
}

void sub_16592(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    if (NOT (DOES_BLIP_EXIST( (uParam1^) )))
    {
        if (NOT (IS_PED_IN_GROUP( (uParam0^) )))
        {
            ADD_BLIP_FOR_CHAR( (uParam0^), uParam1 );
            SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
            CLEAR_PRINTS();
            PRINT( uParam2, 7500, 1 );
        }
    }
    else if (NOT (IS_PED_IN_GROUP( (uParam0^) )))
    {
        if ((sub_3013( uParam0 )) < 12.00000000)
        {
            if (DOES_BLIP_EXIST( (uParam1^) ))
            {
                REMOVE_BLIP( (uParam1^) );
            }
            sub_13669( uParam0, uParam3, uParam4, 0 );
        }
    }
    return;
}

int sub_16798(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_2128() ))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_2128(), uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam4, uParam5, uParam6, 0 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_17096()
{
    switch (l_U204)
    {
        case 0:
        if (sub_17190( ref l_U272, ref l_U277, 1 ))
        {
            sub_17424( "PIB_GO", ref l_U540[0], 8, 1 );
            l_U240 = 1;
            l_U204 = 1;
        }
        break;
        case 1:
        if (sub_17190( ref l_U272, ref l_U277, 1 ))
        {
            if (l_U243)
            {
                sub_18449( "PIB_GO", ref l_U540[0], 8, 1 );
                l_U243 = 0;
            }
            if (NOT (sub_18575( l_U540[0] )))
            {
                CLEAR_PRINTS();
                PRINT_NOW( "BR2_PMT1", 7500, 1 );
                GET_GAME_TIMER( ref l_U498 );
                l_U204 = 2;
            }
        }
        else if (NOT l_U243)
        {
            sub_18812( ref l_U540[0] );
            l_U243 = 1;
        }
        break;
        case 2:
        if (sub_17190( ref l_U272, ref l_U277, 1 ))
        {
            switch (g_U65023)
            {
                case 0:
                if (sub_6181( ref l_U498, 7500 ))
                {
                    if (sub_17424( "PIB_BANT1", ref l_U540[1], 8, 1 ))
                    {
                        l_U204 = 3;
                    }
                }
                break;
                case 1:
                if (sub_6181( ref l_U498, 7500 ))
                {
                    if (sub_17424( "PIB_BANT2", ref l_U540[1], 8, 1 ))
                    {
                        l_U204 = 3;
                    }
                }
                break;
                case 2: break;
            }
        }
        break;
        case 3:
        switch (g_U65023)
        {
            case 0:
            if (sub_17190( ref l_U272, ref l_U277, 1 ))
            {
                if (l_U243)
                {
                    sub_18449( "PIB_BANT1", ref l_U540[1], 8, 1 );
                    l_U243 = 0;
                }
                if (NOT (sub_18575( l_U540[1] )))
                {
                    l_U242 = 1;
                }
            }
            else if (NOT l_U243)
            {
                sub_18812( ref l_U540[1] );
                l_U243 = 1;
            }
            break;
            case 1:
            if (sub_17190( ref l_U272, ref l_U277, 1 ))
            {
                if (l_U243)
                {
                    sub_18449( "PIB_BANT2", ref l_U540[1], 8, 1 );
                    l_U243 = 0;
                }
                if (NOT (sub_18575( l_U540[1] )))
                {
                    l_U242 = 1;
                }
            }
            else if (NOT l_U243)
            {
                sub_18812( ref l_U540[1] );
                l_U243 = 1;
            }
            break;
            case 2: break;
        }
        break;
        case 4:
        if (sub_6181( ref l_U498, 7500 ))
        {
            if (sub_17190( ref l_U272, ref l_U277, 0 ))
            {
                CLEAR_PRINTS();
                sub_19806( "PIB_GO2", 1, 0, ref l_U540[3], 8, 1 );
                l_U204 = 5;
            }
        }
        break;
        case 5:
        if (sub_17190( ref l_U272, ref l_U277, 0 ))
        {
            if (l_U243)
            {
                sub_18449( "PIB_GO2", ref l_U540[3], 8, 1 );
                l_U243 = 0;
            }
            if (NOT (sub_18575( l_U540[3] )))
            {
                l_U204 = 6;
            }
        }
        else if (NOT l_U243)
        {
            sub_18812( ref l_U540[3] );
            l_U243 = 1;
        }
        break;
        case 6:
        if (sub_17190( ref l_U272, ref l_U277, 0 ))
        {
            switch (g_U65023)
            {
                case 0:
                if (sub_17424( "PIB_BANT3", ref l_U540[4], 8, 1 ))
                {
                    l_U204 = 7;
                }
                break;
                case 1:
                if (sub_17424( "PIB_BANT4", ref l_U540[1], 8, 1 ))
                {
                    l_U204 = 7;
                }
                break;
                case 2: break;
            }
        }
        break;
        case 7:
        switch (g_U65023)
        {
            case 0:
            if (sub_17190( ref l_U272, ref l_U277, 0 ))
            {
                if (l_U243)
                {
                    sub_18449( "PIB_BANT3", ref l_U540[4], 8, 1 );
                    l_U243 = 0;
                }
                if (NOT (sub_18575( l_U540[4] )))
                {
                    l_U204 = 6;
                    l_U244 = 1;
                }
            }
            else if (NOT l_U243)
            {
                sub_18812( ref l_U540[4] );
                l_U243 = 1;
            }
            break;
            case 1:
            if (sub_17190( ref l_U272, ref l_U277, 0 ))
            {
                if (l_U243)
                {
                    sub_18449( "PIB_BANT4", ref l_U540[4], 8, 1 );
                    l_U243 = 0;
                }
                if (NOT (sub_18575( l_U540[4] )))
                {
                    l_U204 = 6;
                    l_U244 = 1;
                }
            }
            else if (NOT l_U243)
            {
                sub_18812( ref l_U540[4] );
                l_U243 = 1;
            }
            break;
            case 2: break;
        }
        break;
    }
    return;
}

int sub_17190(unknown uParam0, unknown uParam1, boolean bParam2)
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
                if (NOT (sub_6181( ref l_U118, 3000 )))
                {
                    return 0;
                }
            }
            if ((IS_CHAR_ON_FOOT( (uParam0^) )) AND (IS_CHAR_ON_FOOT( sub_2128() )))
            {
                return 1;
            }
            if (DOES_VEHICLE_EXIST( (uParam1^) ))
            {
                if (IS_VEH_DRIVEABLE( (uParam1^) ))
                {
                    if ((IS_CHAR_SITTING_IN_CAR( (uParam0^), (uParam1^) )) AND (IS_CHAR_SITTING_IN_CAR( sub_2128(), (uParam1^) )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_17424(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_17445( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

void sub_17445(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_17499( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_17499(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_17521( iParam1 )))
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
    sub_18209( ref g_U8395, ref l_U4 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_17521(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_17598( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_17598( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_17598( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_17598(unknown uParam0)
{
    return;
}

void sub_18209(int iParam0, int iParam1)
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

void sub_18449(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_18470( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

int sub_18470(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_17499( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_18575(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_17598( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_17598( "\n speech is not playing" );
    }
    return 0;
}

int sub_18812(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_17598( "\n already paused" );
    }
    else if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_17598( "\n CONVERSATION PAUSED AT LINE " );
            sub_18968( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_17598( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_17598( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_17598( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_18968(unknown uParam0)
{
    return;
}

void sub_19806(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_19831( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_19831(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    return sub_17499( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

void sub_20726()
{
    if (NOT (IS_CHAR_INJURED( l_U272 )))
    {
        GET_CHAR_COORDINATES( sub_2128(), ref l_U297._fU0, ref l_U297._fU4, ref l_U297._fU8 );
        GET_CHAR_COORDINATES( l_U272, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( l_U297._fU0, l_U297._fU4, l_U297._fU8, l_U300._fU0, l_U300._fU4, l_U300._fU8, ref l_U457 );
        return l_U457;
    }
    return l_U457;
}

int sub_20898()
{
    if (sub_20909( 1, 1 ))
    {
        CLEAR_PRINTS();
        CLEAR_HELP();
        sub_2223( 0 );
        DISPLAY_HUD( 0 );
        DISPLAY_RADAR( 0 );
        SET_WIDESCREEN_BORDERS( 1 );
        SET_PLAYER_CONTROL( sub_1404(), 0 );
        CLEAR_CHAR_TASKS( sub_2128() );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_2128(), 1 );
        ALLOW_EMERGENCY_SERVICES( 0 );
        return 1;
    }
    return 0;
}

int sub_20909(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_2128() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2128(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_2128() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2128(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2128()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2128() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2128() )))
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

void sub_21315(unknown uParam0, unknown uParam1)
{
    sub_21333( 1, 1 );
    sub_21402( uParam0 );
    sub_21501( 1, ref l_U179, 1, 1 );
    sub_21609( uParam1 );
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

void sub_21333(unknown uParam0, unknown uParam1)
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

void sub_21402(unknown uParam0)
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

void sub_21501(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_21609(unknown uParam0)
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

int sub_21771(unknown uParam0)
{
    if (sub_3191( uParam0 ))
    {
        if (IS_CHAR_SITTING_IN_CAR( sub_2128(), (uParam0^) ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_21857()
{
    CLEAR_AREA( l_U284[0]._fU0, l_U284[0]._fU4, l_U284[0]._fU8, 100.00000000, 1 );
    if (DOES_VEHICLE_EXIST( l_U277 ))
    {
        if (IS_VEH_DRIVEABLE( l_U277 ))
        {
            if (l_U234)
            {
                if (NOT (IS_CHAR_SITTING_IN_CAR( l_U272, l_U277 )))
                {
                    CLEAR_CHAR_TASKS( l_U272 );
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U272, l_U277, 0 );
                }
                SET_CAR_COORDINATES( l_U277, 1122.47600000, -321.10310000, 17.02810000 );
                TASK_LOOK_AT_COORD( sub_2128(), 1116.22000000, -325.21000000, 18.30000000, 5000, 0 );
            }
            else if (LOCATE_CAR_3D( l_U277, 1113.62300000, -321.20320000, 17.25400000, 9.00000000, 9.00000000, 5.00000000, 0 ))
            {
                SET_CAR_HEADING( l_U277, 189.00000000 );
                SET_CAR_COORDINATES( l_U277, 1122.68300000, -324.33300000, 16.81870000 );
            }
        }
    }
    REMOVE_BLIP( l_U279 );
    l_U242 = 1;
    sub_17424( "PIB_ARRIVE", ref l_U540[2], 8, 1 );
    l_U241 = 1;
    if (NOT (IS_CHAR_INJURED( l_U272 )))
    {
        CLEAR_AREA( l_U284[0]._fU0, l_U284[0]._fU4, l_U284[0]._fU8, 100.00000000, 1 );
        SWITCH_PED_PATHS_OFF( 1118.96200000, -329.50950000, 30.00000000, 1105.64700000, -281.83340000, -1.00000000 );
        l_U260 = 1;
        SWITCH_ROADS_OFF( 1112.25700000, -283.52580000, 25.00000000, 1130.66200000, -324.00330000, -1.00000000 );
        l_U511[0] = 1;
        CLEAR_AREA( l_U291._fU0, l_U291._fU4, l_U291._fU8, 100.00000000, 1 );
        if (NOT l_U234)
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2128() );
            SET_CHAR_COORDINATES( sub_2128(), 1118.10700000, -321.74970000, 17.05060000 );
            SET_CHAR_HEADING( sub_2128(), 42.21050000 );
            REMOVE_CHAR_FROM_GROUP( l_U272 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U272 );
            SET_CHAR_COORDINATES( l_U272, 1117.21200000, -319.82120000, 17.21020000 );
            SET_CHAR_HEADING( l_U272, 213.99000000 );
        }
        BEGIN_CAM_COMMANDS( ref l_U493 );
        CREATE_CAM( 14, ref l_U481 );
        SET_CAM_POS( l_U481, 1103.27700000, -320.13240000, 18.84134000 );
        SET_CAM_ROT( l_U481, -1.32024200, -0.00000000, -92.53535000 );
        SET_CAM_FOV( l_U481, 32.20003000 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        SET_CAM_ACTIVE( l_U481, 1 );
        SET_CAM_PROPAGATE( l_U481, 1 );
        l_U254 = 1;
        GET_GAME_TIMER( ref l_U502 );
        l_U514[0] = 1;
    }
    return;
}

void sub_23001(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_18575( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

void sub_23076()
{
    if (NOT (IS_CHAR_INJURED( l_U272 )))
    {
        if (NOT (IS_CHAR_INJURED( l_U273[0] )))
        {
            if (NOT (IS_CAR_DEAD( l_U277 )))
            {
                REMOVE_CHAR_FROM_GROUP( l_U272 );
                CLEAR_SEQUENCE_TASK( l_U530 );
                CLEAR_CHAR_TASKS( l_U272 );
                OPEN_SEQUENCE_TASK( ref l_U530 );
                TASK_LEAVE_CAR( 0, l_U277 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U284[0]._fU0, l_U284[0]._fU4, l_U284[0]._fU8, 2, -1, 0.10000000 );
                CLOSE_SEQUENCE_TASK( l_U530 );
                TASK_PERFORM_SEQUENCE( l_U272, l_U530 );
                CLEAR_SEQUENCE_TASK( l_U530 );
                l_U234 = 1;
                l_U217 = 1;
                l_U200 = 1;
            }
        }
    }
    return;
}

void sub_23339()
{
    if (NOT (IS_CHAR_INJURED( l_U272 )))
    {
        if (NOT (IS_CHAR_INJURED( l_U273[0] )))
        {
            CLEAR_SEQUENCE_TASK( l_U530 );
            CLEAR_CHAR_TASKS( l_U272 );
            OPEN_SEQUENCE_TASK( ref l_U530 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U354._fU0, l_U354._fU4, l_U354._fU8, 2, -1, 1.50000000 );
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U273[0] );
            TASK_LOOK_AT_CHAR( 0, l_U273[0], 1000, 0 );
            TASK_PLAY_ANIM( 0, "street_chat_b", "missbrian_2", 8.00000000, 0, 0, 0, 0, 3000 );
            CLOSE_SEQUENCE_TASK( l_U530 );
            TASK_PERFORM_SEQUENCE( l_U272, l_U530 );
            CLEAR_SEQUENCE_TASK( l_U530 );
            l_U234 = 0;
            l_U217 = 1;
            l_U200 = 2;
        }
    }
    return;
}

void sub_23725()
{
    SET_CAM_PROPAGATE( l_U481, 0 );
    SET_CAM_ACTIVE( l_U481, 0 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    END_CAM_COMMANDS( ref l_U493 );
    DESTROY_ALL_CAMS();
    return;
}

void sub_26060()
{
    if (NOT (IS_CHAR_INJURED( l_U272 )))
    {
        CLEAR_CHAR_TASKS( l_U272 );
        sub_12939( ref l_U272, ref l_U277 );
        sub_13669( ref l_U272, ref l_U528, ref l_U525, 0 );
    }
    SWITCH_ROADS_BACK_TO_ORIGINAL( 1112.25700000, -283.52580000, 25.00000000, 1130.66200000, -324.00330000, -1.00000000 );
    l_U511[0] = 0;
    SWITCH_PED_PATHS_ON( 1118.96200000, -329.50950000, 30.00000000, 1105.64700000, -281.83340000, -1.00000000 );
    l_U260 = 0;
    for ( l_U492 = 0; l_U492 <= 1; l_U492++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U273[l_U492] )))
        {
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U273[l_U492], 0 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U273[l_U492], 0 );
            SET_CHAR_NEVER_TARGETTED( l_U273[l_U492], 0 );
            SET_CHAR_AS_ENEMY( l_U273[l_U492], 1 );
            CLEAR_CHAR_TASKS( l_U273[l_U492] );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U273[l_U492] );
            l_U273[l_U492] = nil;
        }
    }
    SET_CAM_ACTIVE( l_U479, 0 );
    SET_CAM_PROPAGATE( l_U479, 0 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    END_CAM_COMMANDS( ref l_U493 );
    DESTROY_ALL_CAMS();
    sub_26470( 1 );
    l_U499[0] = 1;
    l_U199 = 6;
    return;
}

void sub_26470(boolean bParam0)
{
    CLEAR_PRINTS();
    CLEAR_HELP();
    sub_2223( 0 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    SET_WIDESCREEN_BORDERS( 0 );
    if (IS_PLAYER_PLAYING( sub_1404() ))
    {
        SET_INTERP_IN_OUT_VEHICLE_ENABLED_THIS_FRAME( 0 );
        SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
        SET_CAM_BEHIND_PED( sub_2128() );
        if (bParam0)
        {
            CLEAR_CHAR_TASKS( sub_2128() );
        }
        SET_PLAYER_CONTROL( sub_1404(), 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_2128(), 0 );
    }
    ALLOW_EMERGENCY_SERVICES( 1 );
    return;
}

void sub_27211()
{
    if ((NOT (l_U499[1] == 1)) AND (l_U220))
    {
        if (sub_12791( ref l_U502, 1000 ))
        {
            l_U499[1] = 1;
            l_U202 = 12;
        }
    }
    switch (l_U202)
    {
        case 0:
        if (NOT l_U244)
        {
            sub_17096();
        }
        sub_16306( ref l_U272, ref l_U278, ref l_U294, ref l_U280, "BR2_PMT2", "BR2_PMT8", 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000, ref l_U528, ref l_U525 );
        if (DOES_BLIP_EXIST( l_U280 ))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_2128(), l_U294._fU0, l_U294._fU4, l_U294._fU8, 2.50000000, 2.50000000, 2.50000000, 1 ))
            {
                if ((sub_3013( ref l_U272 )) < 10.00000000)
                {
                    if (sub_20898())
                    {
                        if (sub_21771( ref l_U277 ))
                        {
                            TASK_CAR_TEMP_ACTION( sub_2128(), l_U277, 6, 100 );
                            l_U247 = 1;
                        }
                        sub_27580();
                    }
                }
                else if (NOT g_U65018)
                {
                    PRINT( "BRIAN1_PROMPT_7", 7500, 1 );
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
        case 3: break;
        case 8:
        if (sub_6181( ref l_U498, 500 ))
        {
            sub_17424( "PIB_BRIANS", ref l_U540[5], 8, 1 );
            GET_GAME_TIMER( ref l_U498 );
            l_U202 = 7;
        }
        break;
        case 5:
        BLOCK_CHAR_AMBIENT_ANIMS( l_U272, 1 );
        BLOCK_CHAR_AMBIENT_ANIMS( sub_2128(), 1 );
        if (NOT l_U245)
        {
            if (sub_6181( ref l_U498, 4500 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U272 )))
                {
                    if (NOT (IS_CAR_DEAD( l_U277 )))
                    {
                        SET_CAM_ACTIVE( l_U482, 0 );
                        SET_CAM_PROPAGATE( l_U482, 0 );
                        SET_CAM_ACTIVE( l_U484, 0 );
                        SET_CAM_PROPAGATE( l_U484, 0 );
                        SET_CAM_ACTIVE( l_U485, 0 );
                        SET_CAM_PROPAGATE( l_U485, 0 );
                        CLEAR_CHAR_TASKS( sub_2128() );
                        sub_17424( "PIB_BRIANS", ref l_U540[5], 8, 1 );
                        CLEAR_AREA( 985.45670000, -476.82810000, 14.93570000, 50.00000000, 1 );
                        sub_29277();
                        GET_CAR_MODEL( l_U277, ref l_U180 );
                        GET_MODEL_DIMENSIONS( l_U180, ref l_U119, ref l_U122 );
                        l_U125._fU0 = l_U119._fU0 / l_U128._fU0;
                        l_U125._fU4 = l_U122._fU4 / l_U131._fU4;
                        l_U125._fU8 = l_U122._fU8 / l_U131._fU8;
                        l_U166._fU0 = l_U134[1]._fU0 * l_U125._fU0;
                        l_U166._fU4 = l_U134[1]._fU4 * l_U125._fU4;
                        l_U166._fU8 = l_U134[1]._fU8 * l_U125._fU8;
                        l_U169._fU0 = l_U150[0]._fU0 * l_U125._fU0;
                        l_U169._fU4 = l_U150[0]._fU4 * l_U125._fU4;
                        l_U169._fU8 = l_U150[0]._fU8 * l_U125._fU8;
                        BEGIN_CAM_COMMANDS( ref l_U493 );
                        CREATE_CAM( 14, ref l_U479 );
                        CREATE_CAM( 14, ref l_U480 );
                        ATTACH_CAM_TO_VEHICLE( l_U480, l_U277 );
                        POINT_CAM_AT_VEHICLE( l_U480, l_U277 );
                        SET_CAM_ATTACH_OFFSET( l_U480, l_U166._fU0, l_U166._fU4, l_U166._fU8 );
                        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U480, 1 );
                        SET_CAM_POINT_OFFSET( l_U480, l_U169._fU0, l_U169._fU4, l_U169._fU8 );
                        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U480, 1 );
                        SET_CAM_FOV( l_U480, l_U172[0] );
                        if (sub_29933())
                        {
                            POINT_CAM_AT_PED( l_U480, sub_2128() );
                        }
                        else
                        {
                            POINT_CAM_AT_VEHICLE( l_U480, l_U277 );
                        }
                        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                        SET_CAM_PROPAGATE( l_U480, 1 );
                        SET_CAM_ACTIVE( l_U480, 1 );
                        REMOVE_CHAR_FROM_GROUP( l_U272 );
                        l_U245 = 1;
                    }
                }
            }
        }
        if (l_U245)
        {
            if (NOT (IS_CHAR_INJURED( l_U272 )))
            {
                PRINTSTRING( "**fail 2**" );
                PRINTNL();
                if (NOT (sub_18575( l_U540[5] )))
                {
                    sub_3191( ref l_U277 );
                    if (NOT (IS_CAR_DEAD( l_U277 )))
                    {
                        GET_CAR_HEADING( l_U277, ref l_U474 );
                        if ((l_U474 > 270) || (l_U474 < 90))
                        {
                            l_U372 = {981.36630000, -467.42000000, 15.15200000};
                        }
                        else
                        {
                            l_U372 = {981.54160000, -495.73200000, 14.70740000};
                        }
                        CLEAR_SEQUENCE_TASK( l_U530 );
                        OPEN_SEQUENCE_TASK( ref l_U530 );
                        TASK_LOOK_AT_CHAR( 0, sub_2128(), 50, 0 );
                        TASK_LEAVE_CAR( 0, l_U277 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U372._fU0, l_U372._fU4, l_U372._fU8, 2, -1, 0.10000000 );
                        CLOSE_SEQUENCE_TASK( l_U530 );
                        TASK_PERFORM_SEQUENCE( l_U272, l_U530 );
                        CLEAR_SEQUENCE_TASK( l_U530 );
                        l_U202 = 6;
                    }
                }
            }
        }
        break;
        case 6:
        if (NOT (IS_CHAR_INJURED( l_U272 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U272, 29, ref l_U537 );
            if ((NOT (IS_CHAR_ON_SCREEN( l_U272 ))) || (l_U537 == 7))
            {
                l_U202 = 11;
            }
        }
        break;
        case 7:
        if (NOT l_U232)
        {
            if (NOT (sub_18575( l_U540[5] )))
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2128(), 2.00000000, -10.00000000, 0.00000000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
                OPEN_SEQUENCE_TASK( ref l_U530 );
                TASK_LOOK_AT_CHAR( 0, sub_2128(), 50, 0 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U300._fU0, l_U300._fU4, l_U300._fU8, 2, -1, 0.10000000 );
                CLOSE_SEQUENCE_TASK( l_U530 );
                TASK_PERFORM_SEQUENCE( l_U272, l_U530 );
                CLEAR_SEQUENCE_TASK( l_U530 );
                l_U232 = 1;
            }
        }
        else if (NOT (IS_CHAR_ON_SCREEN( l_U272 )))
        {
            l_U202 = 11;
        }
        break;
        case 11:
        SET_CAM_ACTIVE( l_U482, 0 );
        SET_CAM_PROPAGATE( l_U482, 0 );
        SET_CAM_PROPAGATE( l_U479, 0 );
        SET_CAM_ACTIVE( l_U479, 0 );
        SET_CAM_PROPAGATE( l_U480, 0 );
        SET_CAM_ACTIVE( l_U480, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        END_CAM_COMMANDS( ref l_U493 );
        DESTROY_ALL_CAMS();
        SET_CAM_BEHIND_PED( sub_2128() );
        if (NOT (IS_CHAR_INJURED( l_U272 )))
        {
            if (IS_GROUP_MEMBER( l_U272, l_U528 ))
            {
                REMOVE_CHAR_FROM_GROUP( l_U272 );
            }
            CLEAR_CHAR_TASKS( l_U272 );
            DELETE_CHAR( ref l_U272 );
        }
        sub_26470( 1 );
        if (l_U499[1] == 1)
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        sub_30939();
        break;
        case 12:
        DO_SCREEN_FADE_OUT( 500 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        sub_2223( 0 );
        CLEAR_PRINTS();
        l_U202 = 11;
        break;
    }
    return;
}

void sub_27580()
{
    ADD_SCENARIO_BLOCKING_AREA( 983.82000000, -493.00000000, 100.00000000, 979.00000000, -466.00000000, -100.00000000 );
    REMOVE_BLIP( l_U280 );
    l_U220 = 1;
    GET_GAME_TIMER( ref l_U502 );
    if (l_U247)
    {
        sub_27668();
        CLEAR_AREA_OF_CARS( 981.00000000, -478.50000000, 15.40000000, 7.00000000 );
        BEGIN_CAM_COMMANDS( ref l_U493 );
        CREATE_CAM( 14, ref l_U484 );
        CREATE_CAM( 14, ref l_U485 );
        CREATE_CAM( 14, ref l_U479 );
        CREATE_CAM( 14, ref l_U480 );
        CREATE_CAM( 3, ref l_U482 );
        SET_CAM_POS( l_U484, 991.32100000, -455.75960000, 19.94131000 );
        SET_CAM_ROT( l_U484, -3.26544000, -0.00000000, 168.74990000 );
        SET_CAM_FOV( l_U484, 30.60004000 );
        SET_CAM_POS( l_U485, 991.32100000, -455.75960000, 19.94131000 );
        SET_CAM_ROT( l_U485, -3.26544000, -0.00000000, 168.74990000 );
        SET_CAM_FOV( l_U485, 28.60004000 );
        if (NOT (IS_CHAR_SITTING_IN_CAR( l_U272, l_U277 )))
        {
            CLEAR_CHAR_TASKS( l_U272 );
            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U272, l_U277, 0 );
        }
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        SET_CAM_INTERP_STYLE_CORE( l_U482, l_U484, l_U485, 5000, 0 );
        SET_CAM_ACTIVE( l_U482, 1 );
        SET_CAM_PROPAGATE( l_U482, 1 );
        GET_GAME_TIMER( ref l_U498 );
        l_U202 = 5;
    }
    else
    {
        SWITCH_PED_PATHS_OFF( 983.48730000, -518.37180000, 100.00000000, 980.05170000, -470.10850000, -100.00000000 );
        l_U257 = 1;
        CLEAR_AREA( 982.55050000, -480.77720000, 14.96400000, 100.00000000, 1 );
        if (DOES_VEHICLE_EXIST( l_U277 ))
        {
            if (IS_VEH_DRIVEABLE( l_U277 ))
            {
                if (LOCATE_CAR_3D( l_U277, l_U294._fU0, l_U294._fU4, l_U294._fU8, 10.00000000, 10.00000000, 10.00000000, 0 ))
                {
                    CLEAR_AREA( 995.02950000, -474.33940000, 14.95370000, 4.00000000, 1 );
                    SET_CAR_HEADING( l_U277, 181.00000000 );
                    SET_CAR_COORDINATES( l_U277, 984.07350000, -474.87320000, 14.91480000 );
                }
            }
        }
        REMOVE_CHAR_FROM_GROUP( l_U272 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U272 );
        SET_CHAR_COORDINATES( l_U272, 982.55050000, -480.77720000, 14.96400000 );
        SET_CHAR_HEADING( l_U272, 5.00000000 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2128() );
        SET_CHAR_COORDINATES( sub_2128(), 982.55050000, -479.66160000, 14.98160000 );
        SET_CHAR_HEADING( sub_2128(), 210.00000000 );
        BEGIN_CAM_COMMANDS( ref l_U493 );
        CREATE_CAM( 14, ref l_U479 );
        CREATE_CAM( 14, ref l_U480 );
        CREATE_CAM( 3, ref l_U482 );
        SET_CAM_POS( l_U479, 981.84900000, -478.60020000, 16.56814000 );
        SET_CAM_ROT( l_U479, -2.63960200, -0.00000000, -157.68690000 );
        SET_CAM_FOV( l_U479, 30.00004000 );
        SET_CAM_POS( l_U480, 981.84900000, -478.60020000, 16.56814000 );
        SET_CAM_ROT( l_U480, -2.63960200, -0.00000000, -157.68690000 );
        SET_CAM_FOV( l_U480, 28.00000000 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        SET_CAM_INTERP_STYLE_CORE( l_U482, l_U479, l_U480, 3000, 0 );
        SET_CAM_ACTIVE( l_U482, 1 );
        SET_CAM_PROPAGATE( l_U482, 1 );
        GET_GAME_TIMER( ref l_U498 );
        l_U202 = 8;
    }
    TASK_LOOK_AT_CHAR( sub_2128(), l_U272, -2, 0 );
    TASK_LOOK_AT_CHAR( l_U272, sub_2128(), -2, 0 );
    return;
}

void sub_27668()
{
    SWITCH_ROADS_OFF( 995.64840000, -549.55650000, 100.00000000, 984.96870000, -475.04270000, -100.00000000 );
    l_U511[1] = 1;
    l_U244 = 1;
    l_U220 = 1;
    TASK_LOOK_AT_CHAR( sub_2128(), l_U272, -2, 0 );
    TASK_LOOK_AT_CHAR( l_U272, sub_2128(), -2, 0 );
    return;
}

void sub_29277()
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

int sub_29933()
{
    unknown uVar2;
    unknown uVar3;

    if (sub_3191( ref uVar2 ))
    {
        GET_CAR_MODEL( uVar2, ref uVar3 );
        if (IS_THIS_MODEL_A_BIKE( uVar3 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_30939()
{
    sub_30953( l_U539 );
    CLEAR_WANTED_LEVEL( sub_1404() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 50 );
    sub_1508();
    return;
}

void sub_30953(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_803( uParam0 );
    if (NOT g_U34048[uVar3]._fU4)
    {
        sub_923( "Interactions_Move_On_To_Next_Sequence: Character not active - Tell Keith" );
        return;
    }
    sub_31075( uParam0 );
    g_U34048[uVar3]._fU28++;
    return;
}

void sub_31075(unknown uParam0)
{
    switch (uParam0)
    {
        case 38:
        sub_31205();
        break;
        case 39:
        sub_32167();
        break;
        case 40:
        sub_32426();
        break;
        case 48:
        sub_32609();
        break;
        case 41:
        sub_32794();
        break;
        case 42:
        sub_32990();
        break;
        case 43:
        sub_33171();
        break;
        case 44:
        sub_33354();
        break;
        case 45:
        sub_33535();
        break;
        case 46:
        sub_33714();
        break;
        case 47:
        sub_34025();
        break;
        case 49:
        sub_34225();
        break;
        case 50:
        sub_34402();
        break;
        case 51:
        sub_34600();
        break;
        default: sub_923( "Interactions_Pass: Unknown Random Interaction Character ID - tell Keith" );
    }
    sub_34875();
    sub_34948();
    return;
}

void sub_31205()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 38;
    uVar3 = sub_803( iVar2 );
    sub_31245( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_31891( 500 );
        break;
        default: sub_923( "Interactions_Badman_Pass: Unknown Badman Sequence - tell Keith" );
    }
    return;
}

void sub_31245(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_31298( iParam0, uParam1, uParam2 );
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
        sub_31430( iParam0 + 0 );
    }
    return;
}

void sub_31298(int iParam0, int iParam1, int iParam2)
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
        sub_31430( iParam0 + 0 );
    }
    return;
}

void sub_31430(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_31461( iParam0->_fU4 )))
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

int sub_31461(unknown uParam0)
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

void sub_31891(unknown uParam0)
{
    sub_31902( uParam0 );
    return;
}

void sub_31902(unknown uParam0)
{
    ADD_SCORE( sub_1404(), uParam0 );
    sub_31927( uParam0 );
    return;
}

void sub_31927(int iParam0)
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

void sub_32167()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 39;
    uVar3 = sub_803( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_31891( 100 );
        sub_31245( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 2:
        sub_31891( 200 );
        sub_31245( ref g_U34048[uVar3]._fU8, 168, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3:
        sub_31891( 500 );
        break;
        default: sub_923( "Interactions_Brian_Pass: Unknown Brian Sequence - tell Keith" );
    }
    return;
}

void sub_32426()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 40;
    uVar3 = sub_803( iVar2 );
    sub_31245( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_31891( 0 );
        break;
        default: sub_923( "Interactions_Cherise_Pass: Unknown Cherise Sequence - tell Keith" );
    }
    return;
}

void sub_32609()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 48;
    uVar3 = sub_803( iVar2 );
    sub_31245( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_31891( 0 );
        break;
        default: sub_923( "Interactions_Clarence_Pass: Unknown Clarence Sequence - tell Keith" );
    }
    return;
}

void sub_32794()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 41;
    uVar3 = sub_803( iVar2 );
    sub_31245( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_31891( 0 );
        break;
        case 2:
        sub_31891( 0 );
        break;
        default: sub_923( "Interactions_Eddie_Pass: Unknown Eddie Sequence - tell Keith" );
    }
    return;
}

void sub_32990()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 42;
    uVar3 = sub_803( iVar2 );
    sub_31245( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_31891( 0 );
        break;
        default: sub_923( "Interactions_Gracie_Pass: Unknown Gracie Sequence - tell Keith" );
    }
    return;
}

void sub_33171()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 43;
    uVar3 = sub_803( iVar2 );
    sub_31245( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_31891( 500 );
        break;
        default: sub_923( "Interactions_Hossan_Pass: Unknown Hossan Sequence - tell Keith" );
    }
    return;
}

void sub_33354()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 44;
    uVar3 = sub_803( iVar2 );
    sub_31245( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_31891( 0 );
        break;
        default: sub_923( "Interactions_Ilyena_Pass: Unknown Ilyena Sequence - tell Keith" );
    }
    return;
}

void sub_33535()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 45;
    uVar3 = sub_803( iVar2 );
    sub_31245( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_31891( 1000 );
        break;
        default: sub_923( "Interactions_Ivan_Pass: Unknown Ivan Sequence - tell Keith" );
    }
    return;
}

void sub_33714()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 46;
    uVar3 = sub_803( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_31891( 1000 );
        sub_33801( ref g_U34048[uVar3]._fU8 );
        g_U34048[uVar3]._fU24 = 1;
        break;
        case 2:
        sub_31891( 5000 );
        sub_31245( ref g_U34048[uVar3]._fU8, 96, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3: break;
        default: sub_923( "Interactions_Jeff_Pass: Unknown Jeff Sequence - tell Keith" );
    }
    return;
}

void sub_33801(int iParam0)
{
    sub_33814( iParam0 + 0 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    return;
}

void sub_33814(int iParam0)
{
    GET_CURRENT_DATE( iParam0 + 0, iParam0 + 4 );
    return;
}

void sub_34025()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 47;
    uVar3 = sub_803( iVar2 );
    sub_31245( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_31891( 0 );
        break;
        case 2:
        sub_31891( 0 );
        break;
        default: sub_923( "Interactions_Marnie_Pass: Unknown Marnie Sequence - tell Keith" );
    }
    return;
}

void sub_34225()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 49;
    uVar3 = sub_803( iVar2 );
    sub_31245( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_31891( 500 );
        break;
        default: sub_923( "Interactions_Mel_Pass: Unknown Mel Sequence - tell Keith" );
    }
    return;
}

void sub_34402()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 50;
    uVar3 = sub_803( iVar2 );
    sub_31245( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_31891( 0 );
        break;
        case 2:
        sub_31891( 0 );
        break;
        default: sub_923( "Interactions_Pathos_Pass: Unknown Pathos Sequence - tell Keith" );
    }
    return;
}

void sub_34600()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 51;
    uVar3 = sub_803( iVar2 );
    sub_31245( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_31891( 0 );
        break;
        case 2:
        sub_31891( 1000 );
        break;
        default: sub_923( "Interactions_Sara_Pass: Unknown Sara Sequence - tell Keith" );
    }
    return;
}

void sub_34875()
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

void sub_34948()
{
    sub_34957();
    StrCopy( ref g_U9926, "RIPASS", 16 );
    return;
}

void sub_34957()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

int sub_35200(int iParam0)
{
    if (NOT l_U110)
    {
        if (l_U111)
        {
            if (sub_12791( ref l_U116, 1000 ))
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
            if ((sub_3013( iParam0 + 0 )) > 200.00000000)
            {
                return 1;
            }
            if (sub_6181( iParam0 + 220, 7500 ))
            {
                sub_21315( iParam0 + 0, iParam0 + 4 );
                if (sub_35402( 0 ))
                {
                    if (sub_21771( iParam0 + 4 ))
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
                if (NOT (IS_CHAR_SITTING_IN_CAR( sub_2128(), iParam0->_fU4 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2128() );
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( sub_2128(), iParam0->_fU4, 0 );
                }
                SWITCH_ROADS_OFF( ref iParam0->_fU56->_fU0, ref iParam0->_fU56->_fU4, ref iParam0->_fU56->_fU8, ref iParam0->_fU68->_fU0, ref iParam0->_fU68->_fU4, ref iParam0->_fU68->_fU8 );
                CLEAR_AREA( iParam0->_fU116[0]._fU0, iParam0->_fU116[0]._fU4, iParam0->_fU116[0]._fU8, 100.00000000, 1 );
                FREEZE_CAR_POSITION( iParam0->_fU4, 1 );
                SET_CAR_HEADING( iParam0->_fU4, iParam0->_fU20 );
                SET_CAR_COORDINATES( iParam0->_fU4, ref iParam0->_fU8->_fU0, ref iParam0->_fU8->_fU4, -101.00000000 );
                REQUEST_COLLISION_AT_POSN( ref iParam0->_fU8->_fU0, ref iParam0->_fU8->_fU4, ref iParam0->_fU8->_fU8 );
                LOAD_SCENE( iParam0->_fU116[0]._fU0, iParam0->_fU116[0]._fU4, iParam0->_fU116[0]._fU8 );
                SET_CAR_COORDINATES( iParam0->_fU4, ref iParam0->_fU8->_fU0, ref iParam0->_fU8->_fU4, -101.00000000 );
                TASK_LOOK_AT_CHAR( sub_2128(), iParam0->_fU0, -2, 0 );
                TASK_LOOK_AT_CHAR( iParam0->_fU0, sub_2128(), -2, 0 );
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
                    POINT_CAM_AT_PED( l_U181, sub_2128() );
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
                sub_17424( iParam0->_fU248, iParam0 + 224, 8, 1 );
                l_U107 = 3;
            }
            break;
            case 2:
            SWITCH_PED_PATHS_OFF( ref iParam0->_fU80->_fU0, ref iParam0->_fU80->_fU4, ref iParam0->_fU80->_fU8, ref iParam0->_fU92->_fU0, ref iParam0->_fU92->_fU4, ref iParam0->_fU92->_fU8 );
            SWITCH_ROADS_OFF( ref iParam0->_fU56->_fU0, ref iParam0->_fU56->_fU4, ref iParam0->_fU56->_fU8, ref iParam0->_fU68->_fU0, ref iParam0->_fU68->_fU4, ref iParam0->_fU68->_fU8 );
            CLEAR_AREA( iParam0->_fU116[0]._fU0, iParam0->_fU116[0]._fU4, iParam0->_fU116[0]._fU8, 100.00000000, 1 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2128() );
            SET_CHAR_COORDINATES( sub_2128(), ref iParam0->_fU40->_fU0, ref iParam0->_fU40->_fU4, ref iParam0->_fU40->_fU8 );
            SET_CHAR_HEADING( sub_2128(), iParam0->_fU52 );
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
            TASK_LOOK_AT_CHAR( sub_2128(), iParam0->_fU0, -2, 0 );
            TASK_LOOK_AT_CHAR( iParam0->_fU0, sub_2128(), -2, 0 );
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
            sub_17424( iParam0->_fU248, iParam0 + 224, 8, 1 );
            l_U107 = 4;
            break;
            case 3:
            if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
            {
                if (NOT (sub_18575( iParam0->_fU224 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U195 );
                    TASK_LOOK_AT_CHAR( 0, sub_2128(), 50, 0 );
                    TASK_LEAVE_CAR( 0, iParam0->_fU4 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, ref iParam0->_fU104->_fU0, ref iParam0->_fU104->_fU4, ref iParam0->_fU104->_fU8, 2, -1, 0.10000000 );
                    CLOSE_SEQUENCE_TASK( l_U195 );
                    TASK_PERFORM_SEQUENCE( iParam0->_fU0, l_U195 );
                    l_U107 = 5;
                }
            }
            break;
            case 4:
            if (NOT (sub_18575( iParam0->_fU224 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U195 );
                TASK_LOOK_AT_CHAR( 0, sub_2128(), 50, 0 );
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
                SET_CAM_BEHIND_PED( sub_2128() );
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
                    sub_14035( 1 );
                }
                else
                {
                    sub_26470( 1 );
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
            sub_2223( 0 );
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

int sub_35402(boolean bParam0)
{
    int iVar3;

    if (NOT IS_SCREEN_FADED_OUT())
    {
        if (NOT IS_SCREEN_FADING())
        {
            if (IS_CHAR_IN_ANY_BOAT( sub_2128() ))
            {
                iVar3 = 0;
            }
            else
            {
                iVar3 = 1;
            }
            if (sub_20909( 1, iVar3 ))
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
        sub_2223( 0 );
        CLEAR_PRINTS();
        CLEAR_HELP();
        SET_PLAYER_CONTROL( sub_1404(), 0 );
        CLEAR_CHAR_TASKS( sub_2128() );
        DISPLAY_HUD( 0 );
        DISPLAY_RADAR( 0 );
        SET_WIDESCREEN_BORDERS( 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_2128(), 1 );
        ALLOW_EMERGENCY_SERVICES( 0 );
        return 1;
    }
    return 0;
}
