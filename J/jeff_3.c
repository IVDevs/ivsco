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
    l_U224 = 0;
    l_U225 = 0;
    l_U227 = 0;
    l_U228 = 0;
    l_U229 = 0;
    l_U230 = 0;
    l_U232 = 0;
    l_U233 = 0;
    l_U234 = 0;
    l_U235 = 0;
    l_U236 = 0;
    l_U237 = 0;
    l_U238 = 0;
    l_U240 = 0;
    l_U241 = 0;
    l_U242 = 0;
    l_U244 = 0;
    l_U245 = 0;
    l_U246 = 0;
    l_U247 = 0;
    l_U248 = 0;
    l_U251 = 0;
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
    l_U363 = 0;
    l_U366 = 0;
    l_U367 = 0;
    l_U368 = 0;
    l_U369 = 0;
    l_U370 = 0;
    l_U372 = 0;
    l_U373 = 0;
    l_U381 = 0;
    l_U395 = 0;
    l_U396 = 0;
    l_U397 = 3000;
    l_U399 = 3;
    l_U401 = 0;
    l_U409 = 0;
    l_U427 = 46;
    if (sub_532( l_U427, l_U399 ))
    {
        if (IS_PLAYER_PLAYING( sub_1233() ))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_1233(), 0 )))
            {
                if (HAS_DEATHARREST_EXECUTED())
                {
                    sub_1307();
                }
                while (true)
                {
                    WAIT( 0 );
                    if (NOT l_U247)
                    {
                        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
                        {
                            if (NOT l_U265)
                            {
                                if (g_U10978)
                                {
                                    sub_1307();
                                }
                            }
                            sub_2472();
                            if (sub_2891( ref l_U278, ref l_U380 ))
                            {
                                sub_2955();
                            }
                            if ((sub_3124( ref l_U268 )) || (sub_3216( ref l_U268, 22.00000000 )))
                            {
                                sub_2955();
                            }
                            sub_3402( ref l_U277 );
                            if (NOT (IS_WANTED_LEVEL_GREATER( sub_1233(), 0 )))
                            {
                                switch (l_U213)
                                {
                                    case 0:
                                    sub_3602();
                                    PRINTSTRING( "jeff3 - initialise mission" );
                                    PRINTNL();
                                    break;
                                    case 1:
                                    sub_6208();
                                    break;
                                }
                            }
                            else if ((sub_2507( ref l_U268 )) < 7.00000000)
                            {
                                if (NOT g_U65019)
                                {
                                    g_U65019 = 1;
                                    l_U260 = 1;
                                }
                            }
                            sub_1307();;
                        }
                        else
                        {
                            sub_1307();
                        }
                        if ((IS_KEYBOARD_KEY_PRESSED( 30 )) AND (NOT l_U257))
                        {
                            l_U257 = 1;
                        }
                        if (l_U257)
                        {
                            SET_OBJECT_COORDINATES( l_U278, l_U306._fU0, l_U306._fU4, l_U306._fU8 );
                        }
                    }
                    if (l_U247)
                    {
                        sub_3402( ref l_U277 );
                        if (sub_11892( ref l_U271 ))
                        {
                            sub_11943();
                        }
                        if (sub_16940( ref l_U273 ))
                        {
                            sub_11943();
                        }
                        if (l_U264)
                        {
                            if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2576(), -116.18190000, -230.58100000, 11.74390000, 25.00000000, 25.00000000, 25.00000000, 0 ))) || (sub_17068( ref l_U400, 60000 )))
                            {
                                sub_11943();
                            }
                        }
                        switch (l_U214)
                        {
                            case 0:
                            l_U214 = 1;
                            break;
                            case 1:
                            sub_17168();
                            break;
                        }
                        if (IS_KEYBOARD_KEY_PRESSED( 31 ))
                        {
                            sub_11943();
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

void sub_532(unknown uParam0, unknown uParam1)
{
    if (sub_541())
    {
        return 0;
    }
    return sub_588( uParam0, uParam1 );
}

int sub_541()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

boolean sub_588(unknown uParam0, int iParam1)
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
    uVar4 = sub_632( uParam0 );
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
        if (sub_909( g_U34048[uVar4]._fU8 ))
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

int sub_632(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_643( uParam0 )))
    {
        sub_752( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 38;
}

int sub_643(unknown uParam0)
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

void sub_752(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_909(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_1078( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_1078(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

void sub_1233()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1307()
{
    if (sub_1326( l_U427, l_U399 ))
    {
        sub_1422( l_U427, l_U399 );
        if (IS_PLAYER_PLAYING( sub_1233() ))
        {
            SET_PLAYER_CONTROL( sub_1233(), 1 );
        }
        sub_1885();
        sub_1932( 0 );
    }
    if (l_U405[0] == 1)
    {
        SWITCH_ROADS_BACK_TO_ORIGINAL( -68.61550000, -228.22470000, 13.57420000, -119.29060000, -241.13790000, 11.74830000 );
    }
    SWITCH_PED_PATHS_ON( -61.05000000, -222.43000000, 100.00000000, -122.32000000, -227.83000000, -100.00000000 );
    SWITCH_PED_PATHS_ON( -120.14000000, -229.36000000, 100.00000000, -124.92000000, -170.79000000, -100.00000000 );
    CLEAR_NAMED_CUTSCENE( "rpJef3" );
    if (l_U260)
    {
        CLEAR_HELP();
        CLEAR_PRINTS();
    }
    if (l_U402[0] == 1)
    {
        CLEAR_PRINTS();
        PRINT( "JEFF1_PROMPT_2", 7500, 1 );
    }
    else if (l_U402[1] == 1)
    {
        CLEAR_PRINTS();
        PRINT( "JEFF1_PROMPT_4", 7500, 1 );
    }
    sub_2357();
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_1326(int iParam0, int iParam1)
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

void sub_1422(unknown uParam0, unknown uParam1)
{
    if (NOT (sub_1326( uParam0, uParam1 )))
    {
        sub_752( "Interactions_Ended: Interaction for this character not active" );
        return;
    }
    sub_1518();
    if (g_U813)
    {
        sub_1610();
    }
    else
    {
        sub_1728();
    }
    g_U10978 = 0;
    return;
}

void sub_1518()
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

void sub_1610()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1656();
    return;
}

void sub_1656()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1728()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1774();
    return;
}

void sub_1774()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1885()
{
    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    return;
}

void sub_1932(unknown uParam0)
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

void sub_2357()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

int sub_2472()
{
    if (l_U246)
    {
        if (IS_HINT_RUNNING())
        {
            if (((sub_2507( ref l_U268 )) > 18.00000000) || (sub_2708()))
            {
                HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U268, 0, 0, 0 );
                l_U246 = 0;
                return 1;
            }
        }
    }
    return 0;
}

void sub_2507(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    float Result;

    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    vVar6 = {0.00000000, 0.00000000, 0.00000000};
    Result = 0.00000000;
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        GET_CHAR_COORDINATES( sub_2576(), ref vVar3.x, ref vVar3.y, ref vVar3.z );
        GET_CHAR_COORDINATES( (uParam0^), ref vVar6.x, ref vVar6.y, ref vVar6.z );
        GET_DISTANCE_BETWEEN_COORDS_3D( vVar3.x, vVar3.y, vVar3.z, vVar6.x, vVar6.y, vVar6.z, ref Result );
        return Result;
    }
    return Result;
}

void sub_2576()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_2708()
{
    if (IS_CHAR_IN_ANY_CAR( sub_2576() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2576(), ref l_U275 );
        if (NOT (l_U275 == nil))
        {
            if (NOT (IS_CAR_DEAD( l_U275 )))
            {
                GET_CAR_SPEED( l_U275, ref l_U375 );
                if (l_U375 > 15.00000000)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_2891(unknown uParam0, unknown uParam1)
{
    float fVar4;

    if (DOES_OBJECT_EXIST( (uParam0^) ))
    {
        GET_OBJECT_HEALTH( (uParam0^), ref fVar4 );
        if (fVar4 < (uParam1^))
        {
            return 1;
        }
    }
    return 0;
}

void sub_2955()
{
    sub_2968( ref l_U268 );
    g_U65041++;
    if (g_U65041 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_1233(), 150 );
        SAY_AMBIENT_SPEECH( sub_2576(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    sub_1307();
    return;
}

void sub_2968(unknown uParam0)
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

int sub_3124(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam0^), sub_2576(), 0 ))
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

int sub_3216(unknown uParam0, float fParam1)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if ((sub_2507( uParam0 )) < fParam1)
            {
                if (HAS_CHAR_SPOTTED_CHAR( (uParam0^), sub_2576() ))
                {
                    if (IS_CHAR_ARMED( sub_2576(), 7 ))
                    {
                        if (IS_PLAYER_TARGETTING_CHAR( sub_1233(), (uParam0^) ))
                        {
                            return 1;
                        }
                        if (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_1233(), (uParam0^) ))
                        {
                            return 1;
                        }
                    }
                }
                if (IS_CHAR_SHOOTING( sub_2576() ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_3402(unknown uParam0)
{
    int iVar3;

    if (sub_3412( ref iVar3 ))
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

int sub_3412(unknown uParam0)
{
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2576() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2576(), uParam0 );
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

void sub_3602()
{
    switch (l_U212)
    {
        case 0:
        l_U306 = {-113.81700000, -222.62800000, 11.84960000};
        l_U285 = {-114.01140000, -222.62920000, 11.83390000};
        l_U351 = {-93.35250000, -231.84600000, 12.75700000};
        l_U378 = 88.86620000;
        l_U318 = {0.00000000, 0.00000000, 5.00000000};
        l_U321 = {0.00000000, 0.20000000, 0.00000000};
        l_U321 = {0.00000000, 0.00000000, 0.00000000};
        l_U324 = {-113.27170000, -234.03730000, 11.86540000};
        l_U339 = {0.00000000, -0.30000000, 0.70000000};
        l_U342 = {0.00000000, 0.00000000, 0.00000000};
        l_U374 = 0.00000000;
        l_U196._fU20 = {0.17000000, 0.08000000, -0.04000000};
        l_U196._fU44 = {1.62000000, 0.22000000, 1.32000000};
        l_U196._fU56 = 0.00000000;
        l_U357 = {0.00000000, 0.00000000, 0.00000000};
        l_U360 = {0.00000000, 0.00000000, 0.00000000};
        l_U354 = {0.50000000, 0.50000000, 0.00000000};
        l_U379 = 0.50000000;
        l_U377 = 1.20000000;
        l_U367 = 9.00000000;
        for ( l_U408 = 0; l_U408 <= 1; l_U408++ )
        {
            l_U405[l_U408] = 0;
        }
        l_U388 = 390357829;
        l_U389 = 395385234;
        l_U392 = -71980543;
        l_U393 = -1896659641;
        l_U394 = 1171614426;
        l_U196._fU4 = -596812191;
        REQUEST_MODEL( l_U388 );
        REQUEST_MODEL( l_U389 );
        REQUEST_MODEL( l_U196._fU4 );
        REQUEST_ANIMS( "missjeff3" );
        sub_4183( 46 );
        sub_4287( "PIJAUD", 6 );
        sub_4439( "PIJAUD" );
        sub_4558( 0, sub_2576(), "NIKO", 0 );
        l_U212 = 1;
        break;
        case 1:
        PRINTSTRING( "ANIMS LOADED" );
        PRINTNL();
        if (NOT l_U253)
        {
            if (HAS_MODEL_LOADED( l_U389 ))
            {
                CLEAR_AREA( l_U306._fU0, l_U306._fU4, l_U306._fU8, 10.00000000, 1 );
                CREATE_OBJECT( l_U389, l_U306._fU0, l_U306._fU4, l_U306._fU8, ref l_U278, 1 );
                SET_OBJECT_HEADING( l_U278, 0 );
                GET_OBJECT_HEALTH( l_U278, ref l_U380 );
                CREATE_WIDGET_GROUP( "bench position" );
                ADD_WIDGET_FLOAT_SLIDER( "Float x", ref l_U306._fU0, -1000.00000000, 1000.00000000, 0.20000000 );
                ADD_WIDGET_FLOAT_SLIDER( "Float y", ref l_U306._fU4, -1000.00000000, 1000.00000000, 0.20000000 );
                ADD_WIDGET_FLOAT_SLIDER( "Float z", ref l_U306._fU8, -1000.00000000, 1000.00000000, 0.20000000 );
                END_WIDGET_GROUP();
                CREATE_WIDGET_GROUP( "Binocular position" );
                ADD_WIDGET_FLOAT_SLIDER( "binocular pos x", ref l_U357._fU0, -1000.00000000, 1000.00000000, 0.01000000 );
                ADD_WIDGET_FLOAT_SLIDER( "binocular pos y", ref l_U357._fU4, -1000.00000000, 1000.00000000, 0.01000000 );
                ADD_WIDGET_FLOAT_SLIDER( "binocular pos z", ref l_U357._fU8, -1000.00000000, 1000.00000000, 0.01000000 );
                ADD_WIDGET_FLOAT_SLIDER( "binoculars rot x", ref l_U360._fU0, -1000.00000000, 1000.00000000, 0.01000000 );
                ADD_WIDGET_FLOAT_SLIDER( "binoculars rot y", ref l_U360._fU4, -1000.00000000, 1000.00000000, 0.01000000 );
                ADD_WIDGET_FLOAT_SLIDER( "binoculars rot z", ref l_U360._fU8, -1000.00000000, 1000.00000000, 0.01000000 );
                ADD_WIDGET_FLOAT_SLIDER( "binoculars heading", ref l_U381, -1000.00000000, 1000.00000000, 0.01000000 );
                END_WIDGET_GROUP();
                l_U253 = 1;
                PRINTSTRING( "bench loaded" );
                PRINTNL();
            }
            else
            {
                WAIT( 0 );
            }
        }
        if ((l_U253) AND (NOT l_U252))
        {
            if (((HAS_MODEL_LOADED( l_U388 )) AND (HAS_MODEL_LOADED( l_U196._fU4 ))) AND (HAVE_ANIMS_LOADED( "missjeff3" )))
            {
                CREATE_CHAR( 26, l_U388, l_U285._fU0, l_U285._fU4, l_U285._fU8, ref l_U268, 1 );
                SET_CHAR_HEADING( l_U268, 180 );
                SET_PED_DIES_WHEN_INJURED( l_U268, 1 );
                SET_CHAR_HEALTH( l_U268, 200 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U268, 0 );
                SET_CHAR_NEVER_TARGETTED( l_U268, 1 );
                SET_CHAR_CANT_BE_DRAGGED_OUT( l_U268, 1 );
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U268, 1 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U268, 1 );
                sub_5675( ref l_U268, ref l_U279, 1 );
                SET_CHAR_MONEY( l_U268, 1000 );
                sub_4558( 1, l_U268, "PI_JEFF", 0 );
                SET_CHAR_VISIBLE( l_U268, 0 );
                CREATE_OBJECT( l_U196._fU4, l_U285._fU0, l_U285._fU4, l_U285._fU8, ref l_U196._fU0, 1 );
                ATTACH_OBJECT_TO_PED( l_U196._fU0, l_U268, 1232, l_U196._fU20, l_U196._fU44, 0 );
                OPEN_SEQUENCE_TASK( ref l_U417 );
                TASK_SIT_DOWN_ON_OBJECT( 0, 2, 0, l_U278, l_U342, l_U374, -2, 1 );
                CLOSE_SEQUENCE_TASK( l_U417 );
                TASK_PERFORM_SEQUENCE( l_U268, l_U417 );
                CLEAR_SEQUENCE_TASK( l_U417 );
                l_U252 = 1;
            }
            else
            {
                WAIT( 0 );
            }
        }
        if (l_U252)
        {
            if (IS_CHAR_SITTING_IDLE( l_U268 ))
            {
                CHANGE_CHAR_SIT_IDLE_ANIM( l_U268, "missjeff3", "sit_binocular_idle", 1 );
                SET_CHAR_VISIBLE( l_U268, 1 );
                l_U213 = 1;
            }
        }
        else
        {
            WAIT( 0 );
        }
        break;
    }
    return;
}

void sub_4183(unknown uParam0)
{
    if (g_U15946[uParam0]._fU132._fU0)
    {
        switch (g_U91._fU0)
        {
            case 1013:
            g_U91._fU92 = 1;
            break;
            default:
        }
        g_U15946[uParam0]._fU132._fU0 = 0;
    }
    return;
}

void sub_4287(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_4323())
            {
                REQUEST_ADDITIONAL_TEXT( uParam0, uParam1 );
            }
            WAIT( 0 );
        }
        else
        {
            bVar4 = false;
        }
    }
    return;
}

int sub_4323()
{
    int I;

    for ( I = 0; I <= (8 - 1); I++ )
    {
        if (IS_STREAMING_ADDITIONAL_TEXT( I ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_4439(unknown uParam0)
{
    StrCopy( ref l_U4._fU0, uParam0, 16 );
    sub_4456();
    return;
}

void sub_4456()
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

void sub_4558(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U4._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U4._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_4638( "\n PED NUMBER ", uParam0 );
    sub_4678( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_4638(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4678(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5675(unknown uParam0, unknown uParam1, boolean bParam2)
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

void sub_6208()
{
    switch (l_U216)
    {
        case 0:
        if (NOT l_U239)
        {
            if ((sub_2507( ref l_U268 )) < 10.00000000)
            {
                if (NOT (IS_CHAR_INJURED( l_U268 )))
                {
                    sub_6313( "PIJ_SPYING", ref l_U421, 4, 1 );
                    if (IS_CHAR_ON_FOOT( sub_2576() ))
                    {
                        HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U268, 0, 0, 6000 );
                        l_U246 = 1;
                    }
                    l_U239 = 1;
                    l_U216 = 1;
                }
            }
        }
        break;
        case 1: break;
    }
    if (IS_CHAR_ON_FOOT( sub_2576() ))
    {
        switch (l_U217)
        {
            case 0:
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U268, g_U65012._fU0, g_U65012._fU4, g_U65012._fU8, ref l_U288._fU0, ref l_U288._fU4, ref l_U288._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U268, g_U65015._fU0, g_U65015._fU4, g_U65015._fU8, ref l_U291._fU0, ref l_U291._fU4, ref l_U291._fU8 );
            if (IS_CHAR_IN_ANGLED_AREA_3D( sub_2576(), l_U288._fU0, l_U288._fU4, l_U288._fU8, l_U291._fU0, l_U291._fU4, l_U291._fU8, 6.00000000, 0 ))
            {
                if (sub_7567())
                {
                    CLEAR_PRINTS();
                    sub_1932( 0 );
                    SET_PLAYER_CONTROL( sub_1233(), 0 );
                    SET_MISSION_FLAG( 1 );
                    sub_7662( l_U427, l_U399 );
                    l_U265 = 1;
                    DO_SCREEN_FADE_OUT( 100 );
                    CLEAR_PRINTS();
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    if (IS_HINT_RUNNING())
                    {
                        HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U268, 0, 0, 0 );
                    }
                    SWITCH_PED_PATHS_OFF( -61.05000000, -222.43000000, 100.00000000, -122.32000000, -227.83000000, -100.00000000 );
                    SWITCH_PED_PATHS_OFF( -120.14000000, -229.36000000, 100.00000000, -124.92000000, -170.79000000, -100.00000000 );
                    if (DOES_OBJECT_EXIST( l_U196._fU0 ))
                    {
                        DELETE_OBJECT( ref l_U196._fU0 );
                    }
                    GET_CHAR_COORDINATES( sub_2576(), ref l_U282._fU0, ref l_U282._fU4, ref l_U282._fU8 );
                    CLEAR_AREA( l_U282._fU0, l_U282._fU4, l_U282._fU8, 100.00000000, 1 );
                    SET_CHAR_COORDINATES( sub_2576(), -109.13960000, -223.80550000, 13.00000000 );
                    if (NOT (IS_CHAR_INJURED( l_U268 )))
                    {
                        CLEAR_CHAR_TASKS( l_U268 );
                        SET_CHAR_COORDINATES( l_U268, -108.89900000, -225.48460000, 13.00000000 );
                    }
                    if (DOES_VEHICLE_EXIST( l_U277 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U277 ))
                        {
                            SET_CAR_HEADING( l_U277, 91.05210000 );
                            SET_CAR_COORDINATES( l_U277, -96.08440000, -229.06400000, 13.53000000 );
                        }
                    }
                    if (DOES_OBJECT_EXIST( l_U278 ))
                    {
                        DELETE_OBJECT( ref l_U278 );
                    }
                    CREATE_OBJECT( l_U389, l_U306._fU0, l_U306._fU4, l_U306._fU8, ref l_U278, 1 );
                    SET_OBJECT_HEADING( l_U278, 0 );
                    CLEAR_AREA( l_U282._fU0, l_U282._fU4, l_U282._fU8, 100.00000000, 1 );
                    CLEAR_NAMED_CUTSCENE( "rpJef3" );
                    START_CUTSCENE_NOW( "rpJef3" );
                    while (NOT HAS_CUTSCENE_LOADED())
                    {
                        WAIT( 0 );
                    }
                    while (NOT HAS_CUTSCENE_FINISHED())
                    {
                        WAIT( 0 );
                    }
                    sub_10588();
                    DO_SCREEN_FADE_IN( 500 );
                    START_PLAYBACK_RECORDED_CAR( l_U273, 979 );
                    SET_PLAYBACK_SPEED( l_U273, 1.00000000 );
                    SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U273, 700 );
                    GET_GAME_TIMER( ref l_U400 );
                    GET_GAME_TIMER( ref l_U410 );
                    l_U264 = 1;
                    SOUND_CAR_HORN( l_U273, 3000 );
                    l_U214 = 1;
                }
            }
            break;
            default:
        }
    }
    return;
}

void sub_6313(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_6334( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

void sub_6334(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_6388( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_6388(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_6410( iParam1 )))
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
    sub_7098( ref g_U8395, ref l_U4 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_6410(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_6487( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_6487( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_6487( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_6487(unknown uParam0)
{
    return;
}

void sub_7098(int iParam0, int iParam1)
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

int sub_7567()
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

void sub_7662(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (g_U10978)
    {
        sub_752( "Interactions_Started: Already on a mission" );
        return;
    }
    uVar4 = sub_632( uParam0 );
    if (g_U34175._fU4)
    {
        sub_752( "Interactions_Started: Another interaction is already taking place" );
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
        sub_752( "Interactions_Started: This Random Character has been set to NOT allowToActivate" );
        return;
    }
    g_U34175._fU4 = 1;
    g_U34175._fU8 = uParam0;
    g_U34175._fU12 = uParam1;
    sub_8025();
    sub_8796( g_U34048[uVar4]._fU32 );
    g_U34048[uVar4]._fU32 = 0;
    sub_8940( uParam0, uParam1 );
    g_U10978 = 1;
    return;
}

void sub_8025()
{
    sub_8034();
    sub_8137( ref g_U9893._fU68 );
    sub_8186();
    return;
}

void sub_8034()
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

void sub_8137(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_8186()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_8224( 1, g_U569[I] )) == 0)
        {
            sub_8475( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_8653())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_8224(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_8475(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_8560( g_U569 - 1 );
    return;
}

void sub_8560(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_8653()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_8224( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_8796(int iParam0)
{
    g_U34175._fU16._fU4 += iParam0;
    sub_8830();
    INCREMENT_INT_STAT( 286, iParam0 );
    return;
}

void sub_8830()
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

void sub_8940(unknown uParam0, int iParam1)
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
    sub_9786( cVar4 );
    return;
}

void sub_9786(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_10588()
{
    SWITCH_PED_PATHS_ON( -61.05000000, -222.43000000, 100.00000000, -122.32000000, -227.83000000, -100.00000000 );
    SWITCH_PED_PATHS_ON( -120.14000000, -229.36000000, 100.00000000, -124.92000000, -170.79000000, -100.00000000 );
    CLEAR_WANTED_LEVEL( sub_1233() );
    SET_WANTED_MULTIPLIER( 0.10000000 );
    REQUEST_MODEL( l_U392 );
    REQUEST_MODEL( l_U393 );
    REQUEST_MODEL( l_U394 );
    REQUEST_MODEL( -1175077216 );
    REQUEST_CAR_RECORDING( 979 );
    LOAD_ALL_OBJECTS_NOW();
    LOAD_ADDITIONAL_TEXT( "WI_JEF3", 0 );
    sub_10797( "jeff_3" );
    l_U247 = 1;
    LOAD_SCENE( l_U285._fU0, l_U285._fU4, l_U285._fU8 );
    SWITCH_ROADS_OFF( -68.61550000, -228.22470000, 13.57420000, -119.29060000, -241.13790000, 11.74830000 );
    l_U405[0] = 1;
    CLEAR_AREA( -68.23350000, -233.17930000, 14.76100000, 20.00000000, 1 );
    CLEAR_AREA( -111.47130000, -233.61370000, 12.92750000, 25.00000000, 1 );
    CLEAR_AREA( l_U351._fU0, l_U351._fU4, l_U351._fU8, 40.00000000, 1 );
    CREATE_CAR( l_U393, l_U351._fU0, l_U351._fU4, l_U351._fU8, ref l_U273, 1 );
    SET_CAR_HEADING( l_U273, l_U378 );
    CREATE_CHAR_INSIDE_CAR( l_U273, 26, l_U392, ref l_U271 );
    SET_CHAR_SUFFERS_CRITICAL_HITS( l_U271, 0 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U271, 1 );
    sub_4558( 2, l_U271, "JEFF_KILLER", 0 );
    if (NOT (IS_CHAR_INJURED( l_U268 )))
    {
        SET_CHAR_COORDINATES( sub_2576(), -108.61180000, -223.38750000, 12.00410000 );
        SET_CHAR_HEADING( sub_2576(), 172.00000000 );
        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U268, 0 );
        CLEAR_AREA( l_U324._fU0, l_U324._fU4, l_U324._fU8, 20.00000000, 1 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U268 );
        SET_CHAR_COORDINATES( l_U268, -112.69420000, -228.71070000, 11.73110000 );
        SET_CHAR_HEADING( l_U268, 180.82690000 );
        TASK_FLUSH_ROUTE();
        TASK_EXTEND_ROUTE( -113.43940000, -231.02050000, 11.85480000 );
        OPEN_SEQUENCE_TASK( ref l_U417 );
        TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
        TASK_PLAY_ANIM( 0, "Jeff_hit", "missjeff3", 8.00000000, 0, 0, 0, 0, -1 );
        CLOSE_SEQUENCE_TASK( l_U417 );
        TASK_PERFORM_SEQUENCE( l_U268, l_U417 );
        CLEAR_SEQUENCE_TASK( l_U417 );
        SET_CAM_BEHIND_PED( sub_2576() );
        GET_GAME_TIMER( ref l_U400 );
    }
    return;
}

void sub_10797(unknown uParam0)
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

int sub_11892(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        return IS_CHAR_INJURED( (uParam0^) );
    }
    return 0;
}

void sub_11943()
{
    sub_11957( l_U427 );
    CLEAR_WANTED_LEVEL( sub_1233() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 50 );
    CREATE_EMERGENCY_SERVICES_CAR( l_U394, l_U285._fU0, l_U285._fU4, l_U285._fU8 );
    sub_1307();
    return;
}

void sub_11957(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_632( uParam0 );
    sub_11977( uParam0 );
    sub_15951( uParam0 );
    return;
}

void sub_11977(unknown uParam0)
{
    switch (uParam0)
    {
        case 38:
        sub_12107();
        break;
        case 39:
        sub_13069();
        break;
        case 40:
        sub_13328();
        break;
        case 48:
        sub_13511();
        break;
        case 41:
        sub_13696();
        break;
        case 42:
        sub_13892();
        break;
        case 43:
        sub_14073();
        break;
        case 44:
        sub_14256();
        break;
        case 45:
        sub_14437();
        break;
        case 46:
        sub_14616();
        break;
        case 47:
        sub_14927();
        break;
        case 49:
        sub_15127();
        break;
        case 50:
        sub_15304();
        break;
        case 51:
        sub_15502();
        break;
        default: sub_752( "Interactions_Pass: Unknown Random Interaction Character ID - tell Keith" );
    }
    sub_15777();
    sub_15850();
    return;
}

void sub_12107()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 38;
    uVar3 = sub_632( iVar2 );
    sub_12147( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_12793( 500 );
        break;
        default: sub_752( "Interactions_Badman_Pass: Unknown Badman Sequence - tell Keith" );
    }
    return;
}

void sub_12147(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_12200( iParam0, uParam1, uParam2 );
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
        sub_12332( iParam0 + 0 );
    }
    return;
}

void sub_12200(int iParam0, int iParam1, int iParam2)
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
        sub_12332( iParam0 + 0 );
    }
    return;
}

void sub_12332(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_12363( iParam0->_fU4 )))
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

int sub_12363(unknown uParam0)
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

void sub_12793(unknown uParam0)
{
    sub_12804( uParam0 );
    return;
}

void sub_12804(unknown uParam0)
{
    ADD_SCORE( sub_1233(), uParam0 );
    sub_12829( uParam0 );
    return;
}

void sub_12829(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_752( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_13069()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 39;
    uVar3 = sub_632( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_12793( 100 );
        sub_12147( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 2:
        sub_12793( 200 );
        sub_12147( ref g_U34048[uVar3]._fU8, 168, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3:
        sub_12793( 500 );
        break;
        default: sub_752( "Interactions_Brian_Pass: Unknown Brian Sequence - tell Keith" );
    }
    return;
}

void sub_13328()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 40;
    uVar3 = sub_632( iVar2 );
    sub_12147( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_12793( 0 );
        break;
        default: sub_752( "Interactions_Cherise_Pass: Unknown Cherise Sequence - tell Keith" );
    }
    return;
}

void sub_13511()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 48;
    uVar3 = sub_632( iVar2 );
    sub_12147( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_12793( 0 );
        break;
        default: sub_752( "Interactions_Clarence_Pass: Unknown Clarence Sequence - tell Keith" );
    }
    return;
}

void sub_13696()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 41;
    uVar3 = sub_632( iVar2 );
    sub_12147( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_12793( 0 );
        break;
        case 2:
        sub_12793( 0 );
        break;
        default: sub_752( "Interactions_Eddie_Pass: Unknown Eddie Sequence - tell Keith" );
    }
    return;
}

void sub_13892()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 42;
    uVar3 = sub_632( iVar2 );
    sub_12147( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_12793( 0 );
        break;
        default: sub_752( "Interactions_Gracie_Pass: Unknown Gracie Sequence - tell Keith" );
    }
    return;
}

void sub_14073()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 43;
    uVar3 = sub_632( iVar2 );
    sub_12147( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_12793( 500 );
        break;
        default: sub_752( "Interactions_Hossan_Pass: Unknown Hossan Sequence - tell Keith" );
    }
    return;
}

void sub_14256()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 44;
    uVar3 = sub_632( iVar2 );
    sub_12147( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_12793( 0 );
        break;
        default: sub_752( "Interactions_Ilyena_Pass: Unknown Ilyena Sequence - tell Keith" );
    }
    return;
}

void sub_14437()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 45;
    uVar3 = sub_632( iVar2 );
    sub_12147( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_12793( 1000 );
        break;
        default: sub_752( "Interactions_Ivan_Pass: Unknown Ivan Sequence - tell Keith" );
    }
    return;
}

void sub_14616()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 46;
    uVar3 = sub_632( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_12793( 1000 );
        sub_14703( ref g_U34048[uVar3]._fU8 );
        g_U34048[uVar3]._fU24 = 1;
        break;
        case 2:
        sub_12793( 5000 );
        sub_12147( ref g_U34048[uVar3]._fU8, 96, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3: break;
        default: sub_752( "Interactions_Jeff_Pass: Unknown Jeff Sequence - tell Keith" );
    }
    return;
}

void sub_14703(int iParam0)
{
    sub_14716( iParam0 + 0 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    return;
}

void sub_14716(int iParam0)
{
    GET_CURRENT_DATE( iParam0 + 0, iParam0 + 4 );
    return;
}

void sub_14927()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 47;
    uVar3 = sub_632( iVar2 );
    sub_12147( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_12793( 0 );
        break;
        case 2:
        sub_12793( 0 );
        break;
        default: sub_752( "Interactions_Marnie_Pass: Unknown Marnie Sequence - tell Keith" );
    }
    return;
}

void sub_15127()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 49;
    uVar3 = sub_632( iVar2 );
    sub_12147( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_12793( 500 );
        break;
        default: sub_752( "Interactions_Mel_Pass: Unknown Mel Sequence - tell Keith" );
    }
    return;
}

void sub_15304()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 50;
    uVar3 = sub_632( iVar2 );
    sub_12147( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_12793( 0 );
        break;
        case 2:
        sub_12793( 0 );
        break;
        default: sub_752( "Interactions_Pathos_Pass: Unknown Pathos Sequence - tell Keith" );
    }
    return;
}

void sub_15502()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 51;
    uVar3 = sub_632( iVar2 );
    sub_12147( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_12793( 0 );
        break;
        case 2:
        sub_12793( 1000 );
        break;
        default: sub_752( "Interactions_Sara_Pass: Unknown Sara Sequence - tell Keith" );
    }
    return;
}

void sub_15777()
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

void sub_15850()
{
    sub_15859();
    StrCopy( ref g_U9926, "RIPASS", 16 );
    return;
}

void sub_15859()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_15951(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_632( uParam0 );
    g_U34048[uVar3]._fU28 = 99;
    g_U34048[uVar3]._fU4 = 0;
    sub_8137( ref g_U34048[uVar3]._fU8 );
    g_U34048[uVar3]._fU24 = 0;
    sub_16032( uParam0 );
    return;
}

void sub_16032(unknown uParam0)
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
            sub_16311( 5, iVar4 );
            g_U64848[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_16311(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_16493( 0 );
    return;
}

void sub_16493(boolean bParam0)
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
        sub_16748();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_16748()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

int sub_16940(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (NOT (IS_VEH_DRIVEABLE( (uParam0^) )))
        {
            return 1;
        }
    }
    return 0;
}

int sub_17068(unknown uParam0, int iParam1)
{
    GET_GAME_TIMER( ref l_U113 );
    if ((l_U113 - (uParam0^)) > iParam1)
    {
        return 1;
    }
    return 0;
}

void sub_17168()
{
    if (NOT l_U258)
    {
        if (IS_SCREEN_FADED_IN())
        {
            SET_PLAYER_CONTROL( sub_1233(), 1 );
            l_U258 = 1;
        }
    }
    switch (l_U218)
    {
        case 0:
        if (NOT (IS_CAR_DEAD( l_U273 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U268 )))
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CAR( l_U268, l_U273 ))
                {
                    PLAY_AUDIO_EVENT_FROM_PED( "JEFF_3_SKID", l_U268 );
                    PLAY_AUDIO_EVENT_FROM_PED( "JEFF_3_HIT_BY_CAR", l_U268 );
                    PLAY_AUDIO_EVENT_FROM_PED( "JEFF_3_HIT_GROUND", l_U268 );
                    l_U261 = 1;
                    SET_CHAR_HEALTH( l_U268, 13 );
                    if (IS_HINT_RUNNING())
                    {
                        HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U268, 0, 0, 0 );
                    }
                    sub_17481( 1 );
                    l_U218 = 1;
                }
            }
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U271 )))
        {
            if (NOT (IS_CAR_DEAD( l_U273 )))
            {
                CLEAR_CHAR_TASKS( l_U271 );
                OPEN_SEQUENCE_TASK( ref l_U418 );
                TASK_LEAVE_CAR_DONT_CLOSE_DOOR( 0, l_U273 );
                CLOSE_SEQUENCE_TASK( l_U418 );
                TASK_PERFORM_SEQUENCE( l_U271, l_U418 );
                CLEAR_SEQUENCE_TASK( l_U418 );
                REMOVE_BLIP( l_U279 );
                CLEAR_PRINTS();
                PRINT( "JEF3_PMT2", 7500, 1 );
                l_U218 = 2;
            }
        }
        break;
        case 2:
        GET_GAME_TIMER( ref l_U400 );
        if (NOT (IS_CHAR_INJURED( l_U271 )))
        {
            if (NOT (IS_CAR_DEAD( l_U273 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U271, 29, ref l_U420 );
                if (l_U420 == 7)
                {
                    N_1363505769( l_U268, ref l_U285._fU0, ref l_U285._fU4, ref l_U285._fU8 );
                    TASK_LOOK_AT_COORD( l_U271, l_U285._fU0, l_U285._fU4, l_U285._fU8, 15000, 0 );
                    OPEN_SEQUENCE_TASK( ref l_U418 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U285._fU0, l_U285._fU4, l_U285._fU8, 2, 22000, 2.20000000 );
                    TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U285._fU0, l_U285._fU4, l_U285._fU8 );
                    TASK_USE_MOBILE_PHONE_TIMED( 0, 15000 );
                    CLOSE_SEQUENCE_TASK( l_U418 );
                    TASK_PERFORM_SEQUENCE( l_U271, l_U418 );
                    CLEAR_SEQUENCE_TASK( l_U418 );
                    PRINTVECTOR( l_U285 );
                    PRINTNL();
                    l_U218 = 3;
                }
            }
            else
            {
                l_U218 = 3;
            }
        }
        else
        {
            l_U218 = 3;
        }
        break;
        case 3:
        if (sub_18144())
        {
            l_U218 = 4;
            break;
        }
        if (NOT l_U263)
        {
            if (NOT (IS_CHAR_INJURED( l_U271 )))
            {
                switch (l_U409)
                {
                    case 0:
                    GET_SCRIPT_TASK_STATUS( l_U271, 29, ref l_U420 );
                    if (l_U420 == 1)
                    {
                        GET_SEQUENCE_PROGRESS( l_U271, ref l_U401 );
                        if (l_U401 > 1)
                        {
                            if (NOT l_U267)
                            {
                                GET_GAME_TIMER( ref l_U400 );
                                l_U267 = 1;
                            }
                            else if (sub_17068( ref l_U400, 1000 ))
                            {
                                sub_6313( "PIJ_KILL", ref l_U421, 4, 1 );
                                l_U409++;
                            }
                        }
                    }
                    break;
                    case 1:
                    if (NOT (sub_19024( l_U421 )))
                    {
                        if (IS_VEH_DRIVEABLE( l_U273 ))
                        {
                            SET_CHAR_KEEP_TASK( l_U271, 1 );
                            OPEN_SEQUENCE_TASK( ref l_U418 );
                            TASK_ENTER_CAR_AS_DRIVER( 0, l_U273, -2 );
                            TASK_CAR_DRIVE_WANDER( 0, l_U273, 20.00000000, 2 );
                            CLOSE_SEQUENCE_TASK( l_U418 );
                            TASK_PERFORM_SEQUENCE( l_U271, l_U418 );
                            CLEAR_SEQUENCE_TASK( l_U418 );
                            l_U409++;
                        }
                    }
                    break;
                    case 2:
                    GET_SCRIPT_TASK_STATUS( l_U271, 29, ref l_U420 );
                    if (l_U420 == 1)
                    {
                        GET_SEQUENCE_PROGRESS( l_U271, ref l_U401 );
                        if (l_U401 > 0)
                        {
                            l_U263 = 1;
                        }
                    }
                    break;
                }
            }
        }
        break;
        case 4:
        sub_18144();
        if (sub_17068( ref l_U400, 40000 ))
        {
            sub_11943();
        }
        break;
    }
    return;
}

void sub_17481(boolean bParam0)
{
    CLEAR_PRINTS();
    CLEAR_HELP();
    sub_1932( 0 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    SET_WIDESCREEN_BORDERS( 0 );
    if (IS_PLAYER_PLAYING( sub_1233() ))
    {
        SET_INTERP_IN_OUT_VEHICLE_ENABLED_THIS_FRAME( 0 );
        SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
        SET_CAM_BEHIND_PED( sub_2576() );
        if (bParam0)
        {
            CLEAR_CHAR_TASKS( sub_2576() );
        }
        SET_PLAYER_CONTROL( sub_1233(), 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_2576(), 0 );
    }
    ALLOW_EMERGENCY_SERVICES( 1 );
    return;
}

int sub_18144()
{
    if (NOT l_U266)
    {
        switch (l_U219)
        {
            case 0:
            if (NOT (IS_CHAR_INJURED( l_U271 )))
            {
                if ((sub_3124( ref l_U271 )) || (sub_3216( ref l_U271, 22.00000000 )))
                {
                    if (IS_VEH_DRIVEABLE( l_U273 ))
                    {
                        if (NOT (IS_CHAR_SITTING_IN_CAR( sub_2576(), l_U273 )))
                        {
                            sub_1932( 0 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U271, 1 );
                            OPEN_SEQUENCE_TASK( ref l_U418 );
                            TASK_ENTER_CAR_AS_DRIVER( 0, l_U273, -1 );
                            TASK_CAR_MISSION_PED_TARGET( 0, l_U273, sub_2576(), 8, 25, 2, 200, -1 );
                            CLOSE_SEQUENCE_TASK( l_U418 );
                            TASK_PERFORM_SEQUENCE( l_U271, l_U418 );
                            CLEAR_SEQUENCE_TASK( l_U418 );
                            l_U219 = 1;
                            return 1;
                        }
                        else
                        {
                            sub_18417( ref l_U271 );
                            return 1;
                        }
                    }
                    else
                    {
                        sub_18417( ref l_U271 );
                        return 1;
                    }
                }
                else if (IS_VEH_DRIVEABLE( l_U273 ))
                {
                    if (IS_CHAR_SITTING_IN_CAR( sub_2576(), l_U273 ))
                    {
                        sub_18417( ref l_U271 );
                        return 1;
                    }
                }
                else if (NOT (IS_VEH_DRIVEABLE( l_U273 )))
                {
                    sub_18417( ref l_U271 );
                    return 1;
                };;;
            }
            break;
            case 1:
            GET_SCRIPT_TASK_STATUS( l_U271, 29, ref l_U420 );
            if (l_U420 == 1)
            {
                GET_SEQUENCE_PROGRESS( l_U271, ref l_U401 );
                if (l_U401 == 0)
                {
                    if (NOT (IS_VEH_DRIVEABLE( l_U273 )))
                    {
                        sub_18417( ref l_U271 );
                    }
                }
            }
            else if (l_U420 == 7)
            {
                l_U219 = 2;
            }
            break;
            case 2:
            if (NOT (IS_CHAR_INJURED( l_U271 )))
            {
                if (IS_CHAR_ON_FOOT( l_U271 ))
                {
                    sub_18417( ref l_U271 );
                }
            }
            break;
        }
    }
    return 0;
}

void sub_18417(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( l_U271 )))
    {
        sub_1932( 0 );
        SET_CHAR_KEEP_TASK( l_U271, 1 );
        TASK_SMART_FLEE_CHAR( l_U271, sub_2576(), 100.00000000, -1 );
        l_U266 = 1;
    }
    return;
}

int sub_19024(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_6487( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_6487( "\n speech is not playing" );
    }
    return 0;
}
