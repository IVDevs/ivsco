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
    l_U223 = 0;
    l_U225 = 0;
    l_U226 = 0;
    l_U227 = 0;
    l_U228 = 0;
    l_U229 = 0;
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
    l_U344 = 0;
    l_U347 = 0;
    l_U348 = 0;
    l_U349 = 0;
    l_U350 = 0;
    l_U353 = 0;
    l_U354 = 0;
    l_U375 = 0;
    l_U376 = 0;
    l_U377 = 3000;
    l_U378 = 1;
    l_U379 = 0;
    l_U380 = 0;
    l_U387 = 0;
    l_U401 = 46;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "jeff_1_mission" )) < 1)
    {
        if (sub_651( l_U401, l_U378 ))
        {
            if (g_U15654[44])
            {
                sub_1371( ref l_U415 );
                if ((l_U415._fU8._fU0 >= 9) || (l_U415._fU8._fU0 <= 14))
                {
                    if (IS_PLAYER_PLAYING( sub_1471() ))
                    {
                        if (NOT (IS_WANTED_LEVEL_GREATER( sub_1471(), 0 )))
                        {
                            if (HAS_DEATHARREST_EXECUTED())
                            {
                                sub_1545();
                            }
                            while (true)
                            {
                                WAIT( 0 );
                                if (NOT l_U219)
                                {
                                    if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
                                    {
                                        if (NOT l_U263)
                                        {
                                            if (g_U10978)
                                            {
                                                sub_1545();
                                            }
                                        }
                                        if (NOT (IS_WANTED_LEVEL_GREATER( sub_1471(), 0 )))
                                        {
                                            sub_3055();
                                            sub_3280();
                                            if ((sub_3505( ref l_U265 )) || (sub_3597( ref l_U265, 22.00000000 )))
                                            {
                                                sub_3774();
                                            }
                                            sub_4352( ref l_U273 );
                                            switch (l_U197)
                                            {
                                                case 0:
                                                sub_4533();
                                                break;
                                                case 1:
                                                sub_5713();
                                                break;
                                            }
                                        }
                                        else if ((sub_3078( ref l_U265 )) < 7.00000000)
                                        {
                                            if (NOT g_U65019)
                                            {
                                                g_U65019 = 1;
                                                l_U241 = 1;
                                            }
                                        }
                                        sub_1545();;
                                    }
                                    else
                                    {
                                        sub_1545();
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

void sub_651(unknown uParam0, unknown uParam1)
{
    if (sub_660())
    {
        return 0;
    }
    return sub_707( uParam0, uParam1 );
}

int sub_660()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

boolean sub_707(unknown uParam0, int iParam1)
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
    uVar4 = sub_751( uParam0 );
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
        if (sub_1028( g_U34048[uVar4]._fU8 ))
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

int sub_751(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_762( uParam0 )))
    {
        sub_871( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 38;
}

int sub_762(unknown uParam0)
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

void sub_871(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_1028(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_1197( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_1197(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

void sub_1371(int iParam0)
{
    sub_1384( iParam0 + 0 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    return;
}

void sub_1384(int iParam0)
{
    GET_CURRENT_DATE( iParam0 + 0, iParam0 + 4 );
    return;
}

void sub_1471()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1545()
{
    PRINTSTRING( "jeff2 cleanup" );
    PRINTNL();
    if (sub_1594( l_U401, l_U378 ))
    {
        sub_1690( l_U401, l_U378 );
        if (IS_PLAYER_PLAYING( sub_1471() ))
        {
            CLEAR_CHAR_TASKS( sub_2140() );
            SET_PLAYER_CONTROL( sub_1471(), 1 );
        }
        sub_2201();
        sub_2248( 0 );
        sub_2391( 46 );
        REMOVE_CAR_RECORDING( 977 );
    }
    sub_2248( 0 );
    if (NOT (IS_VEH_DRIVEABLE( l_U270 )))
    {
        LOCK_CAR_DOORS( l_U270, 1 );
    }
    CLEAR_NAMED_CUTSCENE( "rpJef1" );
    if (l_U243[0])
    {
        SWITCH_ROADS_BACK_TO_ORIGINAL( 44.45070000, 1183.24300000, 30.64350000, 35.21510000, 1333.11100000, -30.18090000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -16.50300000, 1258.19200000, 30.29930000, 44.83860000, 1268.65600000, -30.00000000 );
    }
    if (l_U241)
    {
        CLEAR_HELP();
        CLEAR_PRINTS();
    }
    if (l_U381[0] == 1)
    {
        CLEAR_PRINTS();
        PRINT( "BRIAN1_PROMPT_8", 7500, 1 );
    }
    else if (l_U381[1] == 1)
    {
        CLEAR_PRINTS();
        PRINT( "BRIAN1_PROMPT_8", 7500, 1 );
    }
    sub_2719();
    if (l_U243[1])
    {
        SWITCH_ROADS_BACK_TO_ORIGINAL( 34.16150000, 988.03130000, 50.51960000, 44.65180000, 946.22570000, -1.53730000 );
    }
    sub_2921();
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_1594(int iParam0, int iParam1)
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

void sub_1690(unknown uParam0, unknown uParam1)
{
    if (NOT (sub_1594( uParam0, uParam1 )))
    {
        sub_871( "Interactions_Ended: Interaction for this character not active" );
        return;
    }
    sub_1786();
    if (g_U813)
    {
        sub_1878();
    }
    else
    {
        sub_1996();
    }
    g_U10978 = 0;
    return;
}

void sub_1786()
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

void sub_1878()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1924();
    return;
}

void sub_1924()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1996()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_2042();
    return;
}

void sub_2042()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_2140()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2201()
{
    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    return;
}

void sub_2248(unknown uParam0)
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

void sub_2391(int iParam0)
{
    if (g_U91._fU72 == iParam0)
    {
        g_U91._fU72 = -1;
    }
    return;
}

void sub_2719()
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

void sub_2921()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

int sub_3055()
{
    if (l_U264)
    {
        if ((sub_3078( ref l_U265 )) > 18.00000000)
        {
            sub_2248( 0 );
            l_U264 = 0;
            l_U198 = 0;
            return 1;
        }
    }
    return 0;
}

void sub_3078(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    float Result;

    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    vVar6 = {0.00000000, 0.00000000, 0.00000000};
    Result = 0.00000000;
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        GET_CHAR_COORDINATES( sub_2140(), ref vVar3.x, ref vVar3.y, ref vVar3.z );
        GET_CHAR_COORDINATES( (uParam0^), ref vVar6.x, ref vVar6.y, ref vVar6.z );
        GET_DISTANCE_BETWEEN_COORDS_3D( vVar3.x, vVar3.y, vVar3.z, vVar6.x, vVar6.y, vVar6.z, ref Result );
        return Result;
    }
    return Result;
}

int sub_3280()
{
    if (l_U237)
    {
        if (IS_HINT_RUNNING())
        {
            if (((sub_3078( ref l_U265 )) > 18.00000000) || (sub_3326()))
            {
                HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U265, 0, 0, 0 );
                l_U237 = 0;
                return 1;
            }
        }
    }
    return 0;
}

int sub_3326()
{
    if (IS_CHAR_IN_ANY_CAR( sub_2140() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2140(), ref l_U271 );
        if (NOT (l_U271 == nil))
        {
            if (NOT (IS_CAR_DEAD( l_U271 )))
            {
                GET_CAR_SPEED( l_U271, ref l_U354 );
                if (l_U354 > 15.00000000)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_3505(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam0^), sub_2140(), 0 ))
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

int sub_3597(unknown uParam0, float fParam1)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if ((sub_3078( uParam0 )) < fParam1)
            {
                if (HAS_CHAR_SPOTTED_CHAR( (uParam0^), sub_2140() ))
                {
                    if (IS_CHAR_ARMED( sub_2140(), 7 ))
                    {
                        if (IS_PLAYER_TARGETTING_CHAR( sub_1471(), (uParam0^) ))
                        {
                            return 1;
                        }
                        if (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_1471(), (uParam0^) ))
                        {
                            return 1;
                        }
                    }
                }
                if (IS_CHAR_SHOOTING( sub_2140() ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_3774()
{
    PRINTSTRING( "jeff2 mission_failed" );
    PRINTNL();
    sub_3824( ref l_U265 );
    if (NOT (IS_CHAR_INJURED( l_U266 )))
    {
        SET_CHAR_KEEP_TASK( l_U266, 1 );
        if (IS_VEH_DRIVEABLE( l_U270 ))
        {
            if (IS_CHAR_SITTING_IN_CAR( l_U266, l_U270 ))
            {
                TASK_CAR_DRIVE_WANDER( l_U266, l_U270, 20.00000000, 2 );
                l_U250 = 1;
            }
            else
            {
                TASK_SMART_FLEE_CHAR( l_U266, sub_2140(), 100.00000000, -1 );
            }
        }
        else
        {
            TASK_SMART_FLEE_CHAR( l_U266, sub_2140(), 100.00000000, -1 );
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U267 )))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U267, 0 );
        CLEAR_CHAR_TASKS( l_U267 );
        SET_CHAR_KEEP_TASK( l_U267, 1 );
        if (NOT l_U250)
        {
            SET_CHAR_DECISION_MAKER( l_U267, l_U389 );
            sub_4130( ref l_U267, ref l_U390 );
        }
    }
    g_U65033++;
    if (g_U65033 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_1471(), 150 );
        SAY_AMBIENT_SPEECH( sub_2140(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    sub_1545();
    return;
}

void sub_3824(unknown uParam0)
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

void sub_4130(unknown uParam0, unknown uParam1)
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

void sub_4352(unknown uParam0)
{
    int iVar3;

    if (sub_4362( ref iVar3 ))
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

int sub_4362(unknown uParam0)
{
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2140() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2140(), uParam0 );
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

void sub_4533()
{
    switch (l_U196)
    {
        case 0:
        l_U287 = {28.50180000, 1275.89600000, 19.45860000};
        l_U359 = 297.80980000;
        l_U369 = 390357829;
        REQUEST_MODEL( l_U369 );
        REQUEST_ANIMS( "missjeff1" );
        sub_4652( "PIJAUD", 6 );
        sub_4804( "PIJAUD" );
        sub_4923( 0, sub_2140(), "NIKO", 0 );
        l_U196 = 1;
        break;
        case 1:
        if (NOT l_U225)
        {
            if (HAS_MODEL_LOADED( l_U369 ))
            {
                CLEAR_AREA( l_U287._fU0, l_U287._fU4, l_U287._fU8, 4.00000000, 1 );
                CREATE_CHAR( 26, l_U369, l_U287._fU0, l_U287._fU4, l_U287._fU8, ref l_U265, 1 );
                SET_CHAR_HEADING( l_U265, l_U359 );
                SET_CHAR_HEALTH( l_U265, 200 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U265, 0 );
                SET_CHAR_NEVER_TARGETTED( l_U265, 1 );
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U265, 1 );
                TASK_STAND_GUARD( l_U265, l_U287, 293.38260000, 0.00000000, 0, -1 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U265, 1 );
                sub_5303( ref l_U265, ref l_U275, 1 );
                sub_4923( 1, l_U265, "PI_JEFF", 0 );
                SET_PED_DIES_WHEN_INJURED( l_U265, 1 );
                if (NOT (IS_CHAR_INJURED( l_U265 )))
                {
                    SET_CHAR_HEADING( l_U265, 274.03470000 );
                }
                l_U225 = 1;
            }
            else
            {
                WAIT( 0 );
            }
        }
        if ((l_U225) AND (NOT l_U224))
        {
            if (HAVE_ANIMS_LOADED( "missjeff1" ))
            {
                if (NOT (IS_CHAR_INJURED( l_U265 )))
                {
                    TASK_PLAY_ANIM( l_U265, "sad_idle", "missjeff1", 8.00000000, 1, 0, 0, 0, -2 );
                    l_U224 = 1;
                    l_U197 = 1;
                }
            }
            else
            {
                WAIT( 0 );
            }
        }
        PRINTSTRING( "jeff 1 initialise done" );
        PRINTNL();
        break;
    }
    return;
}

void sub_4652(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_4688())
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

int sub_4688()
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

void sub_4804(unknown uParam0)
{
    StrCopy( ref l_U4._fU0, uParam0, 16 );
    sub_4821();
    return;
}

void sub_4821()
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

void sub_4923(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U4._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U4._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_5003( "\n PED NUMBER ", uParam0 );
    sub_5043( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_5003(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5043(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5303(unknown uParam0, unknown uParam1, boolean bParam2)
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

void sub_5713()
{
    switch (l_U198)
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( l_U265 )))
        {
            if (sub_4362( ref l_U272 ))
            {
                if ((sub_3078( ref l_U265 )) < 10.00000000)
                {
                    sub_5810();
                }
            }
            else if (IS_CHAR_ON_FOOT( sub_2140() ))
            {
                if ((sub_3078( ref l_U265 )) < 10.00000000)
                {
                    sub_5810();
                }
            }
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U265 )))
        {
            if (sub_4362( ref l_U272 ))
            {
                if ((sub_3078( ref l_U265 )) < 10.00000000)
                {
                    sub_5810();
                }
            }
            else if (IS_CHAR_ON_FOOT( sub_2140() ))
            {
                if ((sub_3078( ref l_U265 )) < 10.00000000)
                {
                    sub_5810();
                }
            }
        }
        break;
        case 2: break;
    }
    if ((l_U234) AND (NOT l_U236))
    {
        if (NOT (IS_CHAR_INJURED( l_U265 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U265, 29, ref l_U399 );
            if (l_U399 == 7)
            {
                l_U236 = 1;
            }
        }
    }
    if (IS_CHAR_ON_FOOT( sub_2140() ))
    {
        sub_7177( ref l_U265, ref l_U394, ref l_U287, ref l_U359, ref l_U253, 0.50000000, "sad_idle", "missjeff1", 0, 1 );
        switch (l_U199)
        {
            case 0:
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U265, g_U65012._fU0, g_U65012._fU4, g_U65012._fU8, ref l_U332._fU0, ref l_U332._fU4, ref l_U332._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U265, g_U65015._fU0, g_U65015._fU4, g_U65015._fU8, ref l_U335._fU0, ref l_U335._fU4, ref l_U335._fU8 );
            if (IS_CHAR_IN_ANGLED_AREA_3D( sub_2140(), l_U332._fU0, l_U332._fU4, l_U332._fU8, l_U335._fU0, l_U335._fU4, l_U335._fU8, 6.00000000, 0 ))
            {
                if (sub_7695())
                {
                    CLEAR_PRINTS();
                    sub_2248( 0 );
                    SET_PLAYER_CONTROL( sub_1471(), 0 );
                    SET_MISSION_FLAG( 1 );
                    sub_7790( l_U401, l_U378 );
                    l_U263 = 1;
                    DO_SCREEN_FADE_OUT( 100 );
                    CLEAR_PRINTS();
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    if (IS_HINT_RUNNING())
                    {
                        HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U265, 0, 0, 0 );
                    }
                    SWITCH_PED_PATHS_OFF( 32.88000000, 1270.30000000, 100.00000000, 28.21000000, 1335.78000000, -100.00000000 );
                    SWITCH_PED_PATHS_OFF( 33.72000000, 1275.32000000, 100.00000000, -21.80000000, 1270.40000000, -100.00000000 );
                    GET_CHAR_COORDINATES( sub_2140(), ref l_U284._fU0, ref l_U284._fU4, ref l_U284._fU8 );
                    CLEAR_AREA( l_U284._fU0, l_U284._fU4, l_U284._fU8, 100.00000000, 1 );
                    LOAD_ADDITIONAL_TEXT( "PIJAUD", 6 );
                    CLEAR_NAMED_CUTSCENE( "rpJef1" );
                    START_CUTSCENE_NOW( "rpJef1" );
                    while (NOT HAS_CUTSCENE_LOADED())
                    {
                        WAIT( 0 );
                    }
                    while (NOT HAS_CUTSCENE_FINISHED())
                    {
                        WAIT( 0 );
                    }
                    CLEAR_WANTED_LEVEL( sub_1471() );
                    SWITCH_PED_PATHS_OFF( 32.88000000, 1270.30000000, 100.00000000, 28.21000000, 1335.78000000, -100.00000000 );
                    SWITCH_PED_PATHS_OFF( 33.72000000, 1275.32000000, 100.00000000, -21.80000000, 1270.40000000, -100.00000000 );
                    sub_10519( "jeff_1_mission", 1 );
                    DELETE_CHAR( ref l_U265 );
                    TERMINATE_THIS_SCRIPT();
                }
            }
            break;
            default:
        }
    }
    return;
}

void sub_5810()
{
    sub_5838( "PIJ_SPYING", ref l_U402, 4, 1 );
    if (IS_CHAR_ON_FOOT( sub_2140() ))
    {
        HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U265, 0, 0, 6000 );
        l_U237 = 1;
    }
    l_U264 = 1;
    l_U198 = 2;
    return;
}

void sub_5838(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_5859( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

void sub_5859(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_5913( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_5913(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_5935( iParam1 )))
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
    sub_6623( ref g_U8395, ref l_U4 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_5935(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_6012( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_6012( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_6012( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_6012(unknown uParam0)
{
    return;
}

void sub_6623(int iParam0, int iParam1)
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

void sub_7177(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, boolean bParam9)
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

int sub_7695()
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

void sub_7790(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (g_U10978)
    {
        sub_871( "Interactions_Started: Already on a mission" );
        return;
    }
    uVar4 = sub_751( uParam0 );
    if (g_U34175._fU4)
    {
        sub_871( "Interactions_Started: Another interaction is already taking place" );
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
        sub_871( "Interactions_Started: This Random Character has been set to NOT allowToActivate" );
        return;
    }
    g_U34175._fU4 = 1;
    g_U34175._fU8 = uParam0;
    g_U34175._fU12 = uParam1;
    sub_8153();
    sub_8924( g_U34048[uVar4]._fU32 );
    g_U34048[uVar4]._fU32 = 0;
    sub_9068( uParam0, uParam1 );
    g_U10978 = 1;
    return;
}

void sub_8153()
{
    sub_8162();
    sub_8265( ref g_U9893._fU68 );
    sub_8314();
    return;
}

void sub_8162()
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

void sub_8265(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_8314()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_8352( 1, g_U569[I] )) == 0)
        {
            sub_8603( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_8781())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_8352(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_8603(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_8688( g_U569 - 1 );
    return;
}

void sub_8688(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_8781()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_8352( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_8924(int iParam0)
{
    g_U34175._fU16._fU4 += iParam0;
    sub_8958();
    INCREMENT_INT_STAT( 286, iParam0 );
    return;
}

void sub_8958()
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

void sub_9068(unknown uParam0, int iParam1)
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
    sub_9914( cVar4 );
    return;
}

void sub_9914(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_10519(unknown uParam0, boolean bParam1)
{
    REQUEST_SCRIPT( uParam0 );
    while (NOT (HAS_SCRIPT_LOADED( uParam0 )))
    {
        WAIT( 0 );
    }
    if (bParam1)
    {
        START_NEW_SCRIPT( uParam0, 8192 );
    }
    else
    {
        START_NEW_SCRIPT( uParam0, 1024 );
    }
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( uParam0 );
    return;
}
