void main()
{
    int I;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U104 = 0;
    l_U105 = 1;
    l_U106 = 3;
    l_U108 = 0;
    l_U109 = -1;
    l_U110 = 0;
    l_U111 = 0;
    l_U112 = 0;
    l_U113 = 0;
    l_U114 = 0;
    l_U115 = 0;
    l_U116 = 0;
    l_U118 = -1;
    l_U132 = 15.00000000;
    l_U133 = 35.00000000;
    l_U134 = 16.00000000;
    l_U135 = 0.00000000;
    l_U141 = 1000.00000000;
    l_U142 = 7500.00000000;
    l_U151 = 1;
    l_U152 = 30.00000000;
    l_U153 = 30.00000000;
    l_U154 = 2.00000000;
    l_U164 = 0.00000000;
    l_U165 = 0.00000000;
    l_U177 = 1;
    l_U178 = 0;
    l_U179 = -1;
    l_U180 = 1;
    l_U181 = -1;
    l_U182 = -1;
    l_U183 = 15.00000000;
    l_U210 = 0;
    l_U211 = -1949702649;
    l_U212 = 2075870698;
    l_U217 = 0.12000000;
    l_U228 = 1;
    l_U229 = 1;
    l_U230 = 1261730469;
    l_U231 = 1789915587;
    l_U232 = 566106687;
    l_U233 = 880721856;
    l_U234 = -2063179826;
    l_U235 = -618845881;
    l_U236 = 2142892670;
    l_U237 = 1650;
    l_U238 = 512;
    l_U239 = 256;
    l_U240 = 1.00000000;
    l_U241 = 2.00000000;
    l_U242 = 2.30000000;
    l_U243 = 4.00000000;
    l_U244 = l_U241;
    l_U245 = 0;
    l_U246 = 1;
    l_U453 = 0;
    l_U454 = 0;
    l_U455 = {0.53000000, 0.99200000, 0.82000000};
    l_U458 = 0.20400000;
    l_U459 = 0.09000000;
    l_U460 = 0.85000000;
    l_U461 = 0.75000000;
    l_U462 = 0.98000000;
    l_U463 = 0.00000000;
    l_U464 = 0.60000000;
    l_U465 = 0.00000000;
    l_U466 = -1;
    l_U467 = 0;
    l_U468 = 0;
    l_U469 = 0;
    l_U470 = 0;
    l_U471 = 0;
    l_U472 = 0.00550000;
    l_U473 = 0.01100000;
    l_U474 = 0.04000000;
    l_U475 = 0.06000000;
    l_U476 = 0.08000000;
    l_U477 = 10;
    l_U478 = 0;
    l_U479 = 10;
    l_U480 = 0;
    l_U481 = 0;
    l_U482 = 0;
    l_U483 = 0;
    l_U484 = 60;
    l_U485 = 0.00000000;
    l_U486 = 0.00000000;
    l_U487 = 0.00650000;
    l_U488 = 0.01300000;
    l_U489 = 0.04000000;
    l_U490 = 0.09000000;
    l_U491 = 25;
    l_U492 = 0.00500000;
    l_U493 = 0.00900000;
    l_U494 = 0.04000000;
    l_U495 = 0.07000000;
    l_U496 = 5;
    l_U497 = 0;
    l_U498 = 0;
    l_U499 = 0;
    l_U500 = 0;
    l_U501 = 0;
    l_U502 = 0;
    l_U503 = 30;
    l_U504 = 560;
    l_U516 = 0;
    l_U521 = 0;
    l_U522 = 0;
    l_U545 = 0;
    l_U546 = 1;
    l_U547 = 1;
    l_U550 = 1;
    l_U551 = 1;
    if (NOT (DOES_OBJECT_EXIST( l_U594 )))
    {
        TERMINATE_THIS_SCRIPT();
    }
    l_U342 = l_U594;
    GET_ROOM_KEY_FROM_OBJECT( l_U342, ref l_U343 );
    l_U593 = "AH_START_01";
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_1014();
    }
    for ( I = 0; I < 5; I++ )
    {
        l_U247[I] = 0;
    }
    while (true)
    {
        WAIT( 0 );
        if (NOT (DOES_OBJECT_EXIST( l_U342 )))
        {
            sub_1014();
        }
        else if (NOT (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U342 )))
        {
            l_U245 = 10;
        }
        switch (l_U245)
        {
            case 0:
            if (sub_1886())
            {
                l_U245 = 1;
            }
            break;
            case 1:
            sub_4256();
            sub_4481();
            break;
            case 2:
            if (LOCATE_CHAR_ANY_MEANS_OBJECT_3D( sub_4304(), l_U342, 5.00000000, 5.00000000, 5.00000000, 0 ))
            {
                l_U524 = sub_8624();
                if (NOT (IS_CHAR_INJURED( l_U524 )))
                {
                    l_U245 = 3;
                }
            }
            else
            {
                l_U245 = 1;
                l_U592 = 1;
                SET_PLAYER_CONTROL( sub_1580(), 1 );
                CLEAR_HELP();
            }
            break;
            case 3:
            sub_9857();
            PLAY_SOUND_FROM_OBJECT( -1, "AIR_HOCKEY_SCORING_START_NEW_GAME", l_U342 );
            l_U592 = 0;
            l_U245 = 4;
            break;
            case 4:
            if (IS_CONTROL_JUST_PRESSED( 2, 0 ))
            {
                if (l_U551 == 0)
                {
                    l_U551 = 1;
                }
                else
                {
                    l_U551 = 0;
                }
                sub_10377( l_U551 );
            }
            if (l_U546)
            {
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "AH_RULES_1" )))
                {
                    PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "AH_RULES_1", "NULL" );
                }
            }
            else
            {
                CLEAR_HELP();
            }
            sub_13114();
            if (sub_14226( l_U545 ))
            {
                sub_14331();
                if (IS_CHAR_INJURED( l_U524 ))
                {
                    if (l_U245 != 9)
                    {
                        sub_25105( 3 );
                    }
                    l_U245 = 9;
                }
            }
            else
            {
                l_U245 = 9;
            }
            if (NOT l_U592)
            {
                l_U592 = IS_CONTROL_JUST_PRESSED( 2, 23 );
                if (l_U592)
                {
                    l_U245 = 8;
                }
            }
            break;
            case 5:
            sub_25264();
            break;
            case 6:
            WAIT( 500 );
            if (l_U517[0] >= 7)
            {
                INCREMENT_INT_STAT( 137, 1 );
                sub_25105( 0 );
                sub_29321( 2 );
                l_U245 = 7;
            }
            else if (l_U517[1] >= 7)
            {
                sub_25105( 1 );
                l_U245 = 7;
            }
            else
            {
                sub_29961( -1 );
                sub_12717();
                sub_10377( l_U549 );
                sub_13114();
                l_U245 = 4;
            }
            break;
            case 7:
            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "AH_REMATCH" )))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "AH_REMATCH", "NULL" );
                if ((l_U470 > 2) AND (l_U524 != l_U523))
                {
                    l_U246 = 28;
                }
            }
            sub_21886();
            sub_30488();
            if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
            {
                CLEAR_HELP();
                l_U245 = 9;
            }
            else if ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 2, 137 )))
            {
                CLEAR_HELP();
                l_U245 = 3;
            }
            break;
            case 8:
            sub_14331();
            sub_13114();
            if (NOT l_U592)
            {
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "AH_QUIT_HELP" )))
                {
                    PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "AH_QUIT_HELP", "NULL" );
                    PRINT_NOW( "AH_QUIT", 7500, 0 );
                }
                if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
                {
                    CLEAR_HELP();
                    CLEAR_PRINTS();
                    sub_25105( 3 );
                    l_U245 = 9;
                }
                else if ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 2, 137 )))
                {
                    CLEAR_HELP();
                    CLEAR_PRINTS();
                    l_U245 = 4;
                }
            }
            else
            {
                l_U592 = (IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 2, 137 ));
            }
            break;
            case 9:
            sub_30938();
            l_U245 = 1;
            break;
            case 10:
            sub_1014();
            break;
        }
    }
    sub_1014();
    return;
}

void sub_1014()
{
    sub_1023();
    sub_1113();
    sub_1242();
    sub_1300( 2, l_U593 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_1023()
{
    sub_1039( ref l_U254[0] );
    sub_1039( ref l_U254[1] );
    sub_1039( ref l_U279 );
    return;
}

void sub_1039(int iParam0)
{
    if (DOES_OBJECT_EXIST( iParam0->_fU0 ))
    {
        DELETE_OBJECT( iParam0 + 0 );
    }
    return;
}

void sub_1113()
{
    sub_1129( ref l_U308[0] );
    sub_1129( ref l_U308[1] );
    sub_1129( ref l_U325[0] );
    sub_1129( ref l_U325[1] );
    sub_1129( ref l_U291[0] );
    sub_1129( ref l_U291[1] );
    return;
}

void sub_1129(int iParam0)
{
    if (DOES_OBJECT_EXIST( iParam0->_fU0 ))
    {
        DELETE_OBJECT( iParam0 + 0 );
    }
    return;
}

void sub_1242()
{
    if (DOES_CHAR_EXIST( l_U523 ))
    {
        DELETE_CHAR( ref l_U523 );
        l_U523 = nil;
    }
    return;
}

void sub_1300(int iParam0, string sParam1)
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
        if (COMPARE_STRING( sParam1, ref g_U10470 ))
        {
            if ((g_U10468 == iParam0) AND (l_U103))
            {
                StrCopy( ref g_U10470, "", 16 );
                g_U10468 = 0;
                g_U10469 = 0;
                g_U10474 = nil;
                l_U103 = 0;
                if (l_U101)
                {
                    sub_1527();
                    l_U101 = 0;
                }
            }
            if (l_U102)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_1580(), 1 );
                l_U102 = 0;
            }
            if (l_U100)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U100 = 0;
            }
        }
    }
    return;
}

void sub_1527()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_1580()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_1886()
{
    if (sub_1895())
    {
        sub_3876();
        return 1;
    }
    return 0;
}

int sub_1895()
{
    float fVar2;
    float fVar3;

    REQUEST_MODEL( l_U230 );
    REQUEST_MODEL( l_U231 );
    REQUEST_MODEL( l_U232 );
    REQUEST_MODEL( l_U233 );
    REQUEST_MODEL( l_U234 );
    REQUEST_MODEL( l_U236 );
    REQUEST_MODEL( l_U235 );
    if (((((((NOT (HAS_MODEL_LOADED( l_U230 ))) || (NOT (HAS_MODEL_LOADED( l_U231 )))) || (NOT (HAS_MODEL_LOADED( l_U232 )))) || (NOT (HAS_MODEL_LOADED( l_U233 )))) || (NOT (HAS_MODEL_LOADED( l_U234 )))) || (NOT (HAS_MODEL_LOADED( l_U236 )))) || (NOT (HAS_MODEL_LOADED( l_U235 ))))
    {
        return 0;
    }
    sub_2136( 0.30000000, 0.50000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, l_U232, ref l_U254[0] );
    sub_2136( -0.30000000, -0.50000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, l_U233, ref l_U254[1] );
    sub_2136( 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, l_U231, ref l_U279 );
    sub_2581( -l_U455._fU0, -l_U455._fU4, 0.00000000, -l_U455._fU0, l_U455._fU4, 0.00000000, 1.00000000, 0.00000000, 0.00000000, ref l_U344[0] );
    sub_2581( -l_U455._fU0, l_U455._fU4, 0.00000000, -l_U458, l_U455._fU4, 0.00000000, 0.00000000, -1.00000000, 0.00000000, ref l_U344[1] );
    sub_2581( l_U458, l_U455._fU4, 0.00000000, l_U455._fU0, l_U455._fU4, 0.00000000, 0.00000000, -1.00000000, 0.00000000, ref l_U344[2] );
    sub_2581( l_U455._fU0, l_U455._fU4, 0.00000000, l_U455._fU0, -l_U455._fU4, 0.00000000, -1.00000000, 0.00000000, 0.00000000, ref l_U344[3] );
    sub_2581( l_U455._fU0, -l_U455._fU4, 0.00000000, l_U458, -l_U455._fU4, 0.00000000, 0.00000000, 1.00000000, 0.00000000, ref l_U344[4] );
    sub_2581( -l_U458, -l_U455._fU4, 0.00000000, -l_U455._fU0, -l_U455._fU4, 0.00000000, 0.00000000, 1.00000000, 0.00000000, ref l_U344[5] );
    sub_2581( -l_U458, -l_U455._fU4 - l_U459, 0.00000000, l_U458, -l_U455._fU4 - l_U459, 0.00000000, 0.00000000, 1.00000000, 0.00000000, ref l_U344[6] );
    sub_2581( -l_U458, l_U455._fU4 + l_U459, 0.00000000, l_U458, l_U455._fU4 + l_U459, 0.00000000, 0.00000000, -1.00000000, 0.00000000, ref l_U344[7] );
    sub_2581( -l_U458, -l_U455._fU4 - l_U459, 0.00000000, -l_U458, -l_U455._fU4, 0.00000000, 1.00000000, 0.00000000, 0.00000000, ref l_U344[8] );
    sub_2581( -l_U458, l_U455._fU4 + l_U459, 0.00000000, -l_U458, l_U455._fU4, 0.00000000, 1.00000000, 0.00000000, 0.00000000, ref l_U344[9] );
    sub_2581( l_U458, -l_U455._fU4 - l_U459, 0.00000000, l_U458, -l_U455._fU4, 0.00000000, -1.00000000, 0.00000000, 0.00000000, ref l_U344[10] );
    sub_2581( l_U458, l_U455._fU4 + l_U459, 0.00000000, l_U458, l_U455._fU4, 0.00000000, -1.00000000, 0.00000000, 0.00000000, ref l_U344[11] );
    GET_OBJECT_HEADING( l_U342, ref fVar2 );
    if ((ROUND( fVar2 )) != 90)
    {
        fVar2 = 0.00000000;
    }
    fVar3 = 0.01000000;
    if (# -NULL-0xc27bfa())
    {
        fVar3 = 0.05000000;
    }
    sub_3492( 0, fVar3, 1.60500000, 0, 0, 0 - fVar2, l_U234, ref l_U291[0] );
    sub_3492( 0, -fVar3, 1.60500000, 0, 0, 180 - fVar2, l_U234, ref l_U291[1] );
    sub_3492( -0.10000000, fVar3, 1.60500000, 0, 0, 0 - fVar2, l_U236, ref l_U308[0] );
    sub_3492( 0.10000000, -fVar3, 1.60500000, 0, 0, 180 - fVar2, l_U236, ref l_U308[1] );
    sub_3492( 0.04000000, fVar3, 1.60500000, 0, 0, 0 - fVar2, l_U235, ref l_U325[0] );
    sub_3492( -0.04000000, -fVar3, 1.60500000, 0, 0, 180 - fVar2, l_U235, ref l_U325[1] );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U234 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U236 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U235 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U230 );
    return 1;
}

void sub_2136(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, int iParam6, int iParam7)
{
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    iParam7->_fU4 = {uParam0};
    iParam7->_fU16 = {uParam3};
    iParam7->_fU36 = {0.00000000, 0.00000000, 0.00000000};
    uVar10 = {sub_2189( uParam0 )};
    CREATE_OBJECT_NO_OFFSET( iParam6, uVar10._fU0, uVar10._fU4, uVar10._fU8, iParam7 + 0, 1 );
    SET_OBJECT_ROTATION( iParam7->_fU0, ref iParam7->_fU16->_fU0, ref iParam7->_fU16->_fU4, ref iParam7->_fU16->_fU8 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( iParam7->_fU0, l_U343 );
    if (iParam6 == l_U231)
    {
        iParam7->_fU28 = 0.05000000;
        iParam7->_fU32 = 0.01000000;
    }
    else if ((iParam6 == l_U232) || (iParam6 == l_U233))
    {
        iParam7->_fU28 = 0.07500000;
        iParam7->_fU32 = 0.25000000;
    }
    return;
}

void sub_2189(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown Result;
    unknown uVar6;
    unknown uVar7;

    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U342, uParam0._fU0, uParam0._fU4, uParam0._fU8 + l_U455._fU8, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    return Result;
}

void sub_2581(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, vector vParam6, int iParam9)
{
    iParam9->_fU0 = {uParam0};
    iParam9->_fU12 = {uParam3};
    iParam9->_fU24 = {vParam6 / (VMAG( vParam6 ))};
    return;
}

void sub_3492(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7)
{
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    iParam7->_fU4 = {uParam0};
    iParam7->_fU16 = {uParam3};
    iParam7->_fU28 = 0;
    uVar10 = {sub_2189( uParam0 )};
    CREATE_OBJECT_NO_OFFSET( uParam6, uVar10._fU0, uVar10._fU4, uVar10._fU8, iParam7 + 0, 1 );
    SET_OBJECT_ROTATION( iParam7->_fU0, uParam3._fU0, uParam3._fU4, uParam3._fU8 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( iParam7->_fU0, l_U343 );
    return;
}

void sub_3876()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    switch (sub_3887( 0, 3 ))
    {
        case 0:
        iVar2 = 1520019648;
        break;
        case 1:
        iVar2 = -777611283;
        break;
        default:
        iVar2 = -443930964;
        break;
    }
    GET_OBJECT_COORDINATES( l_U342, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U342, 1.50000000, 0, 0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    REQUEST_MODEL( iVar2 );
    while (NOT (HAS_MODEL_LOADED( iVar2 )))
    {
        WAIT( 0 );
    }
    CREATE_CHAR( 25, iVar2, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U523, 1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U523 );
    FORCE_FULL_VOICE( l_U523 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U523, 1 );
    SET_ROOM_FOR_CHAR_BY_KEY( l_U523, l_U343 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( iVar2 );
    GET_HEADING_FROM_VECTOR_2D( uVar6._fU0 - uVar3._fU0, uVar6._fU4 - uVar3._fU4, ref uVar9 );
    SET_CHAR_HEADING( l_U523, uVar9 );
    TASK_STAND_GUARD( l_U523, uVar3, uVar9, 3, 0, -2 );
    return;
}

void sub_3887(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_4256()
{
    if (NOT (IS_CHAR_INJURED( l_U523 )))
    {
        if ((((((NOT (IS_CHAR_HEALTH_GREATER( l_U523, 150 ))) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U523, sub_4304(), 0 ))) || (IS_CHAR_RESPONDING_TO_EVENT( l_U523, 31 ))) || (IS_CHAR_RESPONDING_TO_EVENT( l_U523, 49 ))) || (IS_CHAR_RESPONDING_TO_EVENT( l_U523, 75 ))) || (IS_WANTED_LEVEL_GREATER( sub_1580(), 0 )))
        {
            TASK_SMART_FLEE_CHAR_PREFERRING_PAVEMENTS( l_U523, sub_4304(), 200.00000000, -2 );
            SET_CHAR_KEEP_TASK( l_U523, 1 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U523 );
            l_U523 = nil;
        }
    }
    return;
}

void sub_4304()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4481()
{
    string sVar2;
    boolean[3] bVar3;

    if (sub_4490())
    {
        sub_6347();
        if ((LOCATE_CHAR_ANY_MEANS_OBJECT_3D( sub_4304(), l_U342, 5.00000000, 5.00000000, 5.00000000, 0 )) AND (sub_7205( 2, 0 )))
        {
            array(ref bVar3, 3);
            bVar3[0] = NOT (IS_CHAR_INJURED( l_U541[0] ));
            bVar3[1] = NOT (IS_CHAR_INJURED( l_U541[1] ));
            bVar3[2] = NOT (IS_CHAR_INJURED( l_U541[2] ));
            if (l_U545 == 1)
            {
                if (bVar3[0])
                {
                    sVar2 = "AH_START_07";
                    l_U524 = l_U541[0];
                }
                else if (bVar3[1])
                {
                    sVar2 = "AH_START_08";
                    l_U524 = l_U541[1];
                }
                else if (bVar3[2])
                {
                    sVar2 = "AH_START_09";
                    l_U524 = l_U541[2];
                };;;
            }
            else
            {
                sVar2 = "AH_START_01";
                if (l_U545 == 0)
                {
                    l_U524 = l_U523;
                }
            }
            if (NOT (IS_STRING_NULL( l_U593 )))
            {
                if (NOT (COMPARE_STRING( l_U593, sVar2 )))
                {
                    sub_1300( 2, l_U593 );
                    l_U593 = sVar2;
                }
            }
            else
            {
                l_U593 = sVar2;
            }
            if ((sub_7813( 2, l_U593, 0 )) AND (IS_CONTROL_JUST_PRESSED( 0, 23 )))
            {
                if (l_U545 == 0)
                {
                    l_U245 = 3;
                    l_U592 = 1;
                }
                else if (l_U545 == 1)
                {
                    l_U245 = 3;
                    l_U592 = 1;
                }
                else
                {
                    SET_PLAYER_CONTROL( sub_1580(), 0 );
                    l_U245 = 2;
                    l_U592 = 1;
                }
            }
            else
            {
                l_U524 = nil;
            }
        }
        else
        {
            sub_1300( 2, l_U593 );
        }
    }
    else
    {
        sub_1300( 2, l_U593 );
    }
    return;
}

int sub_4490()
{
    unknown uVar2;

    if (l_U592)
    {
        l_U592 = IS_CONTROL_JUST_PRESSED( 0, 23 );
        return 0;
    }
    if (g_U12303)
    {
        if (NOT (sub_4538( 0 )))
        {
            return 0;
        }
    }
    if (NOT sub_5019())
    {
        return 0;
    }
    if (IS_BIT_SET( g_U10959._fU0, 4 ))
    {
        return 0;
    }
    if (IS_PLAYER_PLAYING( sub_1580() ))
    {
        if (IS_WANTED_LEVEL_GREATER( sub_1580(), 0 ))
        {
            return 0;
        }
    }
    l_U545 = sub_5159( ref l_U541[0], ref l_U541[1], ref l_U541[2] );
    if ((((IS_CHAR_INJURED( l_U523 )) AND (IS_CHAR_INJURED( l_U541[0] ))) AND (IS_CHAR_INJURED( l_U541[1] ))) AND (IS_CHAR_INJURED( l_U541[2] )))
    {
        return 0;
    }
    if (sub_6266( ref uVar2 ))
    {
        if (l_U545 == 0)
        {
            return 0;
        }
    }
    return 1;
}

int sub_4538(int iParam0)
{
    unknown uVar3;

    if (g_U26739._fU0 == 19)
    {
        return 0;
    }
    if (sub_4567( iParam0 ))
    {
        return 0;
    }
    if (sub_4626( g_U26739._fU0 ))
    {
        if (NOT (sub_4658( g_U26739._fU0, iParam0 )))
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

int sub_4567(int iParam0)
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

int sub_4626(unknown uParam0)
{
    return 0;
}

int sub_4658(unknown uParam0, unknown uParam1)
{
    return 1;
}

int sub_5019()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U20912)
    {
        return 0;
    }
    return 1;
}

void sub_5159(unknown uParam0, unknown uParam1, unknown uParam2)
{
    l_U545 = 0;
    (uParam0^) = sub_5175( 1 );
    if ((uParam0^) == nil)
    {
        (uParam0^) = sub_5724( 0 );
    }
    (uParam1^) = sub_5175( 6 );
    if ((uParam1^) == nil)
    {
        (uParam1^) = sub_5724( 1 );
    }
    (uParam2^) = sub_5175( 7 );
    if ((uParam2^) == nil)
    {
        (uParam2^) = sub_5724( 2 );
    }
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (sub_5935( sub_4304(), (uParam0^) ))
        {
            l_U545++;
        }
        else
        {
            (uParam0^) = nil;
        }
    }
    if (NOT (IS_CHAR_INJURED( (uParam1^) )))
    {
        if (sub_5935( sub_4304(), (uParam1^) ))
        {
            l_U545++;
        }
        else
        {
            (uParam1^) = nil;
        }
    }
    if (NOT (IS_CHAR_INJURED( (uParam2^) )))
    {
        if (sub_5935( sub_4304(), (uParam2^) ))
        {
            l_U545++;
        }
        else
        {
            (uParam2^) = nil;
        }
    }
    return l_U545;
}

void sub_5175(unknown uParam0)
{
    unknown Result;
    unknown uVar4;
    int iVar5;
    int I;

    Result = nil;
    if (IS_PLAYER_PLAYING( sub_1580() ))
    {
        if (DOES_GROUP_EXIST( sub_5205() ))
        {
            GET_GROUP_SIZE( sub_5205(), ref uVar4, ref iVar5 );
            if (iVar5 > 0)
            {
                for ( I = 0; I < iVar5; I++ )
                {
                    GET_GROUP_MEMBER( sub_5205(), I, ref Result );
                    if (NOT (IS_CHAR_INJURED( Result )))
                    {
                        if (IS_CHAR_MODEL( Result, sub_5328( uParam0 ) ))
                        {
                            return Result;
                        }
                    }
                }
            }
        }
    }
    Result = nil;
    return Result;
}

void sub_5205()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_5328(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -451718857;
        case 1: return 870892404;
        case 2: return -411638179;
        case 3: return -727962858;
        case 4: return -900623157;
        case 5: return 954215094;
        case 6: return 1728056212;
        case 7: return 1825562762;
        case 8: return -411638179;
        case 16: return 170756246;
        case 17: return -73790512;
        case 13: return 349841464;
        case 15: return -239294183;
    }
    sub_5627( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_5627(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_5724(int iParam0)
{
    if ((iParam0 < 0) || (iParam0 >= 3))
    {
        SCRIPT_ASSERT( "Minigames_Get_Biker_Friend_Index: Minigame Biker Index out of range" );
        return nil;
    }
    return g_U38857[iParam0]._fU0;
}

int sub_5935(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if ((NOT (IS_CHAR_INJURED( uParam0 ))) AND (NOT (IS_CHAR_INJURED( uParam1 ))))
    {
        if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam1 ))))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar4 );
            GET_KEY_FOR_CHAR_IN_ROOM( uParam1, ref iVar5 );
            if (iVar4 == iVar5)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_6266(unknown uParam0)
{
    (uParam0^) = g_U26739._fU0;
    if (g_U26739._fU0 == 19)
    {
        return 0;
    }
    return 1;
}

void sub_6347()
{
    sub_6356();
    sub_6501( ref g_U10959._fU32 );
    g_U10959._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_6575();
    return;
}

void sub_6356()
{
    CLEAR_BIT( ref g_U10959._fU0, 2 );
    CLEAR_BIT( ref g_U10959._fU0, 3 );
    CLEAR_BIT( ref g_U10959._fU0, 4 );
    CLEAR_BIT( ref g_U10959._fU0, 5 );
    CLEAR_BIT( ref g_U10959._fU0, 6 );
    CLEAR_BIT( ref g_U10959._fU0, 8 );
    CLEAR_BIT( ref g_U10959._fU0, 9 );
    CLEAR_BIT( ref g_U10959._fU0, 10 );
    g_U10959._fU12 = 0;
    return;
}

void sub_6501(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_6575()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_6613( 1, g_U572[I] )) == 0)
        {
            sub_6864( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_7042())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U94._fU404 = 1000;
    }
    g_U94._fU404 = 1000;
    return;
}

int sub_6613(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_6864(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_6949( g_U572 - 1 );
    return;
}

void sub_6949(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_7042()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_6613( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_7205(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_1580() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_1580() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_1580() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U10499)))
                {
                    if (NOT sub_7301())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_4304() )) == nil)
                        {
                            if (g_U10468 <= iParam0)
                            {
                                if (g_U10469 == 0)
                                {
                                    if (sub_7386())
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

int sub_7301()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_7386()
{
    return sub_7397( 0, 0 );
}

int sub_7397(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U94._fU104 = 1;
    }
    if ((uParam1) AND (g_U558 != 9))
    {
        g_U94._fU100 = 1;
    }
    return 1;
}

int sub_7813(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_7205( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U102)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_1580(), 0 );
                l_U102 = 1;
            }
            g_U10468 = uParam0;
            l_U103 = 1;
            StrCopy( ref g_U10470, sParam1, 16 );
            g_U10474 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_8094();
                l_U101 = 1;
                g_U10469 = 6;
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
                g_U10469 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U100 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U100)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U100 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_8094()
{
    return sub_7397( 1, 1 );
}

void sub_8624()
{
    boolean[3] bVar2;
    string sVar6;
    int Result;

    if (l_U592)
    {
        l_U592 = IS_CONTROL_JUST_PRESSED( 0, 23 );
        return nil;
    }
    l_U545 = sub_5159( ref l_U541[0], ref l_U541[1], ref l_U541[2] );
    if ((((IS_CHAR_INJURED( l_U523 )) AND (IS_CHAR_INJURED( l_U541[0] ))) AND (IS_CHAR_INJURED( l_U541[1] ))) AND (IS_CHAR_INJURED( l_U541[2] )))
    {
        l_U245 = 1;
    }
    array(ref bVar2, 3);
    bVar2[0] = NOT (IS_CHAR_INJURED( l_U541[0] ));
    bVar2[1] = NOT (IS_CHAR_INJURED( l_U541[1] ));
    bVar2[2] = NOT (IS_CHAR_INJURED( l_U541[2] ));
    if ((IS_CONTROL_JUST_PRESSED( 2, 23 )) || (l_U545 < 1))
    {
        l_U592 = 1;
        SET_PLAYER_CONTROL( sub_1580(), 1 );
        CLEAR_HELP();
        l_U245 = 1;
    }
    else if (l_U545 < 2)
    {
        CLEAR_HELP();
        l_U524 = l_U523;
        l_U245 = 1;
    }
    else if (((bVar2[0]) AND (bVar2[1])) AND (bVar2[2]))
    {
        if (((IS_BUTTON_PRESSED( 0, 16 )) AND (IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 115 )) AND (NOT IS_USING_CONTROLLER())))
        {
            Result = l_U541[0];
        }
        else if (((IS_BUTTON_PRESSED( 0, 17 )) AND (IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 116 )) AND (NOT IS_USING_CONTROLLER())))
        {
            Result = l_U541[1];
        }
        else if (((IS_BUTTON_PRESSED( 0, 14 )) AND (IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 117 )) AND (NOT IS_USING_CONTROLLER())))
        {
            Result = l_U541[2];
        };;;
        sVar6 = "AH_START_02";
    }
    else if ((bVar2[0]) AND (bVar2[1]))
    {
        if (((IS_BUTTON_PRESSED( 0, 16 )) AND (IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 115 )) AND (NOT IS_USING_CONTROLLER())))
        {
            Result = l_U541[0];
        }
        else if (((IS_BUTTON_PRESSED( 0, 17 )) AND (IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 116 )) AND (NOT IS_USING_CONTROLLER())))
        {
            Result = l_U541[1];
        }
        sVar6 = "AH_START_03";
    }
    else if ((bVar2[0]) AND (bVar2[2]))
    {
        if (((IS_BUTTON_PRESSED( 0, 16 )) AND (IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 115 )) AND (NOT IS_USING_CONTROLLER())))
        {
            Result = l_U541[0];
        }
        else if (((IS_BUTTON_PRESSED( 0, 17 )) AND (IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 116 )) AND (NOT IS_USING_CONTROLLER())))
        {
            Result = l_U541[2];
        }
        sVar6 = "AH_START_04";
    }
    else if ((bVar2[1]) AND (bVar2[2]))
    {
        if (((IS_BUTTON_PRESSED( 0, 16 )) AND (IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 115 )) AND (NOT IS_USING_CONTROLLER())))
        {
            Result = l_U541[1];
        }
        else if (((IS_BUTTON_PRESSED( 0, 17 )) AND (IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 116 )) AND (NOT IS_USING_CONTROLLER())))
        {
            Result = l_U541[2];
        }
        sVar6 = "AH_START_05";
    };;;;
    if (Result == nil)
    {
        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( sVar6 )))
        {
            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( sVar6, "NULL" );
        }
    }
    else
    {
        CLEAR_HELP();
        if (Result == l_U541[0])
        {
            l_U472 = l_U487;
            l_U473 = l_U488;
            l_U474 = l_U489;
            l_U476 = l_U490;
            l_U477 = l_U491;
        }
        else if (Result == l_U541[2])
        {
            l_U472 = l_U492;
            l_U473 = l_U493;
            l_U474 = l_U494;
            l_U476 = l_U495;
            l_U477 = l_U496;
        }
        return Result;
    };;;
    return nil;
}

void sub_9857()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    CLEAR_HELP();
    if (NOT l_U453)
    {
        DO_SCREEN_FADE_OUT( 500 );
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        l_U453 = 1;
        SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
        SET_WANTED_MULTIPLIER( 0.00000000 );
        ALTER_WANTED_LEVEL( sub_1580(), 0 );
        GET_OBJECT_COORDINATES( l_U342, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        CLEAR_AREA_OF_OBJECTS( uVar2._fU0, uVar2._fU4, uVar2._fU8, 3.00000000 );
        CLEAR_AREA_OF_CARS( uVar2._fU0, uVar2._fU4, uVar2._fU8, 5.00000000 );
        sub_10031();
        sub_10554();
        sub_10865();
        if (l_U524 != l_U523)
        {
            sub_1242();
        }
        sub_11337();
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_4304(), 1 );
        if (NOT (IS_CHAR_INJURED( l_U524 )))
        {
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( l_U524, 1 );
        }
        sub_11825( "AIRHOCK", 3 );
        REQUEST_ANIMS( "MINI_AIR" );
        LOAD_ALL_OBJECTS_NOW();
        REGISTER_SCRIPT_WITH_AUDIO( 0 );
        while (NOT (REQUEST_AMBIENT_AUDIO_BANK( "EP1_SFX\AIR_HOCKEY" )))
        {
            WAIT( 0 );
        }
        if (NOT (IS_CHAR_INJURED( sub_4304() )))
        {
            if (IS_AMBIENT_SPEECH_DISABLED( sub_4304() ))
            {
                l_U454 = 1;
                STOP_PED_SPEAKING( sub_4304(), 0 );
            }
        }
        sub_12102();
        l_U551 = 1;
        WAIT( 0 );
    }
    sub_10377( l_U551 );
    l_U254[0]._fU4 = {sub_12330( -0.00200000, 0.00200000 ), 0.70000000, 0.00000000};
    l_U254[0]._fU36 = {0, 0, 0};
    l_U254[1]._fU4 = {sub_12330( -0.00200000, 0.00200000 ), -0.70000000, 0.00000000};
    l_U254[1]._fU36 = {0, 0, 0};
    l_U279._fU4 = {sub_12330( -0.00200000, 0.00200000 ), 0.30000000, 0.00000000};
    l_U279._fU36 = {0, 0, 0};
    SET_OBJECT_VISIBLE( l_U279._fU0, 1 );
    sub_12541( ref l_U254[0], l_U254[0]._fU4 );
    sub_12541( ref l_U254[1], l_U254[1]._fU4 );
    sub_12541( ref l_U279, l_U279._fU4 );
    SET_OBJECT_ROTATION( l_U254[0]._fU0, 0, 0, 0 );
    SET_OBJECT_ROTATION( l_U254[1]._fU0, 0, 0, 0 );
    SET_OBJECT_ROTATION( l_U279._fU0, 0, 0, 0 );
    l_U517[0] = 0;
    l_U517[1] = 0;
    sub_12717();
    l_U470++;
    l_U466 = 0;
    GET_GAME_TIMER( ref l_U467 );
    GET_GAME_TIMER( ref l_U468 );
    GENERATE_RANDOM_FLOAT_IN_RANGE( 5000.00000000, 10000.00000000, ref l_U512[0] );
    GENERATE_RANDOM_FLOAT_IN_RANGE( 5000.00000000, 10000.00000000, ref l_U512[1] );
    GENERATE_RANDOM_FLOAT_IN_RANGE( 5000.00000000, 10000.00000000, ref l_U512[2] );
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 500 );
        while (IS_SCREEN_FADING_IN())
        {
            WAIT( 0 );
            sub_13114();
            sub_13259();
        }
    }
    INCREMENT_INT_STAT( 136, 1 );
    l_U546 = 1;
    uVar5 = sub_3887( 0, 2 );
    sub_13921( uVar5, 0 );
    sub_13259();
    sub_13114();
    GET_GAME_TIMER( ref l_U471 );
    return;
}

void sub_10031()
{
    unknown uVar2;

    l_U552[0]._fU0 = {0.00000000, 0.00000000, 1.59000000};
    l_U552[0]._fU12 = {0.00000000, -0.00500000, 0.00000000};
    l_U552[1]._fU0 = {0.00000000, 1.25000000, 1.25000000};
    l_U552[1]._fU12 = {0.00000000, 0.25000000, 0.00000000};
    l_U552[2]._fU0 = {-3.00000000, -1.00000000, 0.50000000};
    l_U552[2]._fU12 = {0.00000000, 0.00000000, 0.00000000};
    l_U552[3]._fU0 = {0.00500000, -0.44000000, 1.51500000};
    l_U552[3]._fU12 = {0.00000000, 0.00000000, 1.55500000};
    l_U552[4]._fU0 = {-0.83500000, -2.00000000, 0.70000000};
    l_U552[4]._fU12 = {0.76000000, 1.00000000, 0.62500000};
    l_U552[5]._fU0 = {-0.70000000, 2.00000000, 0.70000000};
    l_U552[5]._fU12 = {-0.44000000, 1.00000000, 0.62500000};
    CREATE_CAM( 14, ref l_U548 );
    sub_10377( l_U550 );
    BEGIN_CAM_COMMANDS( ref uVar2 );
    SET_CAM_ACTIVE( l_U548, 1 );
    SET_CAM_PROPAGATE( l_U548, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    END_CAM_COMMANDS( ref uVar2 );
    return;
}

void sub_10377(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    l_U550 = uParam0;
    uVar3 = {sub_2189( l_U552[l_U550]._fU0 )};
    uVar6 = {sub_2189( l_U552[l_U550]._fU12 )};
    SET_CAM_POS( l_U548, uVar3._fU0, uVar3._fU4, uVar3._fU8 );
    POINT_CAM_AT_COORD( l_U548, uVar6._fU0, uVar6._fU4, uVar6._fU8 );
    return;
}

void sub_10554()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    l_U525[0] = {0.00000000, 1.30000000, 0.19000000};
    uVar2 = {sub_2189( l_U525[0] )};
    uVar5 = {sub_2189( 0, 0, 0 )};
    GET_HEADING_FROM_VECTOR_2D( uVar5._fU0 - uVar2._fU0, uVar5._fU4 - uVar2._fU4, ref l_U532[0] );
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_4304() );
    uVar8 = {sub_2189( l_U525[0] )};
    CREATE_OBJECT( l_U231, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref l_U538[0], 1 );
    SET_OBJECT_HEADING( l_U538[0], l_U532[0] );
    SET_OBJECT_VISIBLE( l_U538[0], 0 );
    SET_OBJECT_COLLISION( l_U538[0], 0 );
    FREEZE_OBJECT_POSITION_AND_DONT_LOAD_COLLISION( l_U538[0], 1 );
    ATTACH_PED_TO_OBJECT( sub_4304(), l_U538[0], 0, 0, 0, 0, 0, 0, 1, 0 );
    SET_PLAYER_CONTROL( sub_1580(), 0 );
    TASK_LOOK_AT_OBJECT( sub_4304(), l_U279._fU0, 9999999, 0 );
    return;
}

void sub_10865()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    l_U525[1] = {0.00000000, -1.30000000, 0.19000000};
    uVar2 = {sub_2189( l_U525[1] )};
    uVar5 = {sub_2189( 0, 0, 0 )};
    GET_HEADING_FROM_VECTOR_2D( uVar5._fU0 - uVar2._fU0, uVar5._fU4 - uVar2._fU4, ref l_U532[1] );
    if (l_U524 == l_U523)
    {
        if (IS_CHAR_INJURED( l_U524 ))
        {
            sub_1242();
        }
        if (NOT (DOES_CHAR_EXIST( l_U524 )))
        {
            sub_3876();
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U524 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U524 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U524, 1 );
        SET_CHAR_COORDINATES( l_U524, uVar5._fU0, uVar5._fU4 - 1.50000000, uVar5._fU8 );
        SET_CHAR_HEADING( l_U524, 0.00000000 );
        FREEZE_CHAR_POSITION( l_U524, 1 );
        uVar8 = {sub_2189( l_U525[1] )};
        CREATE_OBJECT( l_U231, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref l_U538[1], 1 );
        SET_OBJECT_HEADING( l_U538[1], l_U532[1] );
        SET_OBJECT_VISIBLE( l_U538[1], 0 );
        SET_OBJECT_COLLISION( l_U538[1], 0 );
        FREEZE_OBJECT_POSITION_AND_DONT_LOAD_COLLISION( l_U538[1], 1 );
        ATTACH_PED_TO_OBJECT( l_U524, l_U538[1], 0, 0, 0, 0, 0, 0, 1, 0 );
        TASK_LOOK_AT_OBJECT( l_U524, l_U279._fU0, 9999999, 0 );
    }
    return;
}

void sub_11337()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int[0] iVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    int iVar12;
    int I;
    unknown uVar14;

    uVar2 = {sub_2189( 0, 0, 0 )};
    array(ref iVar5, 2);
    l_U505[0] = {0.70000000, -1.95000000, 0.15000000};
    l_U505[1] = {0.70000000, 1.90000000, 0.15000000};
    iVar5[0] = {sub_2189( l_U505[0] )};
    iVar5[1] = {sub_2189( l_U505[1] )};
    iVar12 = 0;
    if (l_U545 > 0)
    {
        for ( I = 0; I < l_U541; I++ )
        {
            if ((((l_U541[I] != nil) AND (NOT (IS_CHAR_INJURED( l_U541[I] )))) AND (l_U541[I] != l_U524)) AND (iVar12 < iVar5))
            {
                if (IS_PED_IN_GROUP( l_U541[I] ))
                {
                    REMOVE_CHAR_FROM_GROUP( l_U541[I] );
                }
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U541[I] );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U541[I], 1 );
                SET_CHAR_COORDINATES_NO_OFFSET( l_U541[I], iVar5[iVar12]._fU0, iVar5[iVar12]._fU4, iVar5[iVar12]._fU8 );
                GET_HEADING_FROM_VECTOR_2D( uVar2._fU0 - iVar5[iVar12]._fU0, uVar2._fU4 - iVar5[iVar12]._fU4, ref uVar14 );
                SET_CHAR_HEADING( l_U541[I], uVar14 );
                FREEZE_CHAR_POSITION( l_U541[I], 1 );
                iVar12++;
            }
        }
    }
    return;
}

void sub_11825(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_11861())
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

int sub_11861()
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

void sub_12102()
{
    sub_12111();
    DISPLAY_RADAR( 0 );
    return;
}

void sub_12111()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    g_U12304 = 1;
    if (NOT (g_U26739._fU0 == 19))
    {
        g_U26739._fU24 = 1;
        g_U26739._fU28 = 0;
        if (NOT (g_U26739._fU8 == 12))
        {
            sub_12180();
        }
        return;
    }
    g_U12303 = 1;
    sub_12246();
    return;
}

void sub_12180()
{
    if (NOT (g_U26739._fU32 > 0))
    {
        return;
    }
    g_U26739._fU32--;
    return;
}

void sub_12246()
{
    g_U26737._fU4 = 0;
    return;
}

void sub_12330(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_FLOAT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_12541(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    uVar6 = {sub_2189( uParam1 )};
    SET_OBJECT_COORDINATES( iParam0->_fU0, uVar6._fU0, uVar6._fU4, uVar6._fU8 );
    return;
}

void sub_12717()
{
    l_U308[0]._fU28 = 0;
    l_U308[1]._fU28 = 0;
    l_U325[0]._fU28 = 0;
    l_U325[1]._fU28 = 0;
    SET_OBJECT_ROTATION( l_U308[0]._fU0, 0, l_U308[0]._fU16._fU4, l_U308[0]._fU16._fU8 );
    SET_OBJECT_ROTATION( l_U308[1]._fU0, 0, l_U308[1]._fU16._fU4, l_U308[1]._fU16._fU8 );
    SET_OBJECT_ROTATION( l_U325[0]._fU0, 0, l_U325[0]._fU16._fU4, l_U325[0]._fU16._fU8 );
    SET_OBJECT_ROTATION( l_U325[1]._fU0, 0, l_U325[1]._fU16._fU4, l_U325[1]._fU16._fU8 );
    l_U522 = 0;
    return;
}

void sub_13114()
{
    int iVar2;

    iVar2 = 25;
    if (# -NULL-0xc27bfa())
    {
        iVar2 = 80;
    }
    if (l_U550 == 1)
    {
        SET_PED_ALPHA( sub_4304(), iVar2 - (ROUND( (25.00000000 * (l_U254[0]._fU4._fU4 - l_U254[0]._fU28)) / (l_U455._fU4 - (2.00000000 * l_U254[0]._fU28)) )) );
    }
    else
    {
        SET_PED_ALPHA( sub_4304(), 255 );
    }
    return;
}

void sub_13259()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    for ( I = 0; I < 2; I++ )
    {
        l_U535[I] = 1.00000000 - (ABSF( ((ABSF( l_U254[I]._fU4._fU4 )) - l_U254[I]._fU28) / (l_U455._fU4 - (2.00000000 * l_U254[I]._fU28)) ));
        if (l_U535[I] > 0.99900000)
        {
            l_U535[I] = 0.99900000;
        }
        else if (l_U535[I] < 0.00000000)
        {
            l_U535[I] = 0.00000000;
        }
        uVar3 = {sub_2189( l_U525[I] )};
        SET_OBJECT_COORDINATES( l_U538[I], uVar3._fU0, uVar3._fU4, uVar3._fU8 );
        l_U525[I]._fU0 = l_U254[I]._fU4._fU0;
    }
    sub_13527( sub_4304(), l_U535[0] );
    sub_13527( l_U524, l_U535[1] );
    if (l_U535[1] == 0.99900000)
    {
        l_U480++;
        if (l_U480 > 30)
        {
            l_U481 = 1;
            l_U480 = 0;
        }
    }
    else
    {
        l_U480 = 0;
        if ((l_U481) AND (l_U535[1] < 0.70000000))
        {
            l_U481 = 0;
        }
    }
    return;
}

void sub_13527(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        BLOCK_CHAR_GESTURE_ANIMS( uParam0, 1 );
        if (IS_CHAR_PLAYING_ANIM( uParam0, "MINI_AIR", "strike" ))
        {
            SET_CHAR_ANIM_SPEED( uParam0, "MINI_AIR", "strike", 0.00000000 );
            SET_CHAR_HEADING( uParam0, 0 );
            SET_CHAR_ANIM_CURRENT_TIME( uParam0, "MINI_AIR", "strike", uParam1 );
            if (DOES_OBJECT_EXIST( l_U279._fU0 ))
            {
                TASK_LOOK_AT_OBJECT( uParam0, l_U279._fU0, 9999999, 0 );
            }
        }
        else
        {
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam0, "strike", "MINI_AIR", 4.00000000, 0, 0, 0, 0, 0 );
        }
    }
    return;
}

void sub_13921(int iParam0, int iParam1)
{
    if (l_U524 == l_U523)
    {
        iParam0 = 0;
    }
    if (iParam1 == 0)
    {
        if (iParam0 == iParam1)
        {
            l_U246 = 12;
        }
        else
        {
            l_U246 = 26;
        }
    }
    return;
}

int sub_14226(int iParam0)
{
    int I;

    if (iParam0 > 0)
    {
        I = 0;
        for ( I = 0; I < l_U541; I++ )
        {
            if (l_U541[I] != nil)
            {
                if (NOT (DOES_CHAR_EXIST( l_U541[I] )))
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}

void sub_14331()
{
    int iVar2;
    unknown uVar3;
    int iVar4;

    GET_GAME_TIMER( ref iVar2 );
    if ((l_U466 < 0) || ((iVar2 - l_U467) > 400))
    {
        sub_14373();
    }
    sub_17147();
    sub_13259();
    sub_21886();
    sub_23573();
    if (l_U524 != l_U523)
    {
        if (l_U466 < 0)
        {
            if ((iVar2 - l_U469) > 12000)
            {
                iVar4 = sub_3887( 0, 2 );
                if (iVar4 == 0)
                {
                    l_U246 = 10;
                }
                else
                {
                    l_U246 = 23;
                }
                l_U469 = iVar2;
            }
        }
        else if ((iVar2 - l_U468) > 8000)
        {
            l_U246 = 27;
            l_U468 = iVar2;
        }
    }
    if (l_U279._fU4._fU4 < -l_U455._fU4)
    {
        if ((l_U279._fU4._fU0 < l_U458) AND (l_U279._fU4._fU0 > -l_U458))
        {
            l_U517[0]++;
            l_U520 = 0;
            l_U245 = 5;
            l_U469 = 0;
            uVar3 = GET_SOUND_ID();
            PLAY_SOUND_FROM_OBJECT( uVar3, "AIR_HOCKEY_GOAL", l_U279._fU0 );
            SET_VARIABLE_ON_SOUND( uVar3, "speed", sub_20998( l_U465 / (2.00000000 * l_U279._fU28), 0.00000000, 1.00000000 ) );
            RELEASE_SOUND_ID( uVar3 );
        }
    }
    else if (l_U279._fU4._fU4 > l_U455._fU4)
    {
        if ((l_U279._fU4._fU0 < l_U458) AND (l_U279._fU4._fU0 > -l_U458))
        {
            l_U517[1]++;
            l_U520 = 1;
            l_U245 = 5;
            l_U469 = 0;
            uVar3 = GET_SOUND_ID();
            PLAY_SOUND_FROM_OBJECT( uVar3, "AIR_HOCKEY_GOAL", l_U279._fU0 );
            SET_VARIABLE_ON_SOUND( uVar3, "speed", sub_20998( l_U465 / (2.00000000 * l_U279._fU28), 0.00000000, 1.00000000 ) );
            RELEASE_SOUND_ID( uVar3 );
        }
    }
    if (l_U546)
    {
        GET_GAME_TIMER( ref iVar2 );
        if ((iVar2 - l_U471) >= 10000)
        {
            l_U546 = 0;
        }
    }
    return;
}

void sub_14373()
{
    unknown uVar2;
    float fVar3;

    sub_14382();
    if (l_U486 > 0.00000000)
    {
        GET_FRAME_TIME( ref uVar2 );
        l_U486 -= uVar2 * 1000.00000000;
    }
    else
    {
        sub_15438();
    }
    fVar3 = 0.20000000;
    if (l_U254[0]._fU4._fU4 < l_U254[0]._fU28)
    {
        l_U254[0]._fU4._fU4 = l_U254[0]._fU28;
        if (l_U254[0]._fU36._fU4 < 0.00000000)
        {
            l_U254[0]._fU36._fU4 = 0.00000000;
        }
    }
    else if ((l_U254[0]._fU4._fU4 < (l_U254[0]._fU28 + fVar3)) AND (l_U254[0]._fU36._fU4 < 0.00000000))
    {
        l_U254[0]._fU36._fU4 *= SIN( ((l_U254[0]._fU4._fU4 - l_U254[0]._fU28) * 90.00000000) / fVar3 );
    }
    if (l_U254[1]._fU4._fU4 > -l_U254[1]._fU28)
    {
        l_U254[1]._fU4._fU4 = -l_U254[1]._fU28;
        if (l_U254[1]._fU36._fU4 > 0.00000000)
        {
            l_U254[1]._fU36._fU4 = 0.00000000;
        }
    }
    else if ((l_U254[1]._fU4._fU4 > (-l_U254[1]._fU28 - fVar3)) AND (l_U254[1]._fU36._fU4 > 0.00000000))
    {
        l_U254[1]._fU36._fU4 *= SIN( ((-l_U254[1]._fU4._fU4 - l_U254[1]._fU28) * 90.00000000) / fVar3 );
    }
    return;
}

void sub_14382()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    int iVar6;
    float fVar7;

    if (IS_USING_CONTROLLER())
    {
        GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar3, ref uVar4, ref iVar5, ref iVar6 );
        if (NOT l_U497)
        {
            sub_14435( uVar3, uVar4, l_U237 );
            if ((((iVar5 * iVar5) + (iVar6 * iVar6)) > 12100) AND (NOT l_U498))
            {
                GET_GAME_TIMER( ref iVar2 );
                if ((iVar2 - l_U501) < 150)
                {
                    l_U498 = 1;
                    l_U499 = iVar5;
                    l_U500 = iVar6;
                    l_U497 = 1;
                    sub_14435( l_U499, l_U500, l_U504 );
                    if (l_U246 == 1)
                    {
                        PLAY_SOUND_FROM_PED( -1, "AIR_HOCKEY_SLAM", sub_4304() );
                    }
                    GET_GAME_TIMER( ref l_U502 );
                }
            }
            if ((iVar5 == 0) AND (iVar6 == 0))
            {
                l_U498 = 0;
                GET_GAME_TIMER( ref l_U501 );
            }
        }
        else
        {
            GET_GAME_TIMER( ref iVar2 );
            sub_14435( l_U499, l_U500, l_U504 );
            if ((iVar2 - l_U502) > l_U503)
            {
                l_U497 = 0;
            }
        }
    }
    else
    {
        fVar7 = l_U238 + ((l_U239 - l_U238) * GET_MOUSE_SENSITIVITY());
        GET_MOUSE_INPUT( ref iVar5, ref iVar6 );
        sub_14435( iVar5, iVar6, fVar7 );
    }
    sub_14973( ref l_U254[0] );
    return;
}

void sub_14435(int iParam0, unknown uParam1, unknown uParam2)
{
    if ((((l_U254[0]._fU4._fU0 + l_U254[0]._fU28) < l_U455._fU0) || (iParam0 > 0)) AND (((l_U254[0]._fU4._fU0 - l_U254[0]._fU28) > -l_U455._fU0) || (iParam0 < 0)))
    {
        l_U254[0]._fU36._fU0 = (-TO_FLOAT( iParam0 )) / uParam2;
    }
    if ((((l_U254[0]._fU4._fU4 + l_U254[0]._fU28) < l_U455._fU4) || (uParam1 < 0.00000000)) AND (((l_U254[0]._fU4._fU4 - l_U254[0]._fU28) > -l_U455._fU4) || (uParam1 > 0.00000000)))
    {
        l_U254[0]._fU36._fU4 = (TO_FLOAT( uParam1 )) / uParam2;
    }
    return;
}

void sub_14973(int iParam0)
{
    float fVar3;
    boolean bVar4;

    fVar3 = VDIST( iParam0->_fU4, l_U279._fU4 );
    bVar4 = false;
    if (fVar3 < ((iParam0->_fU28 + l_U279._fU28) + 0.01000000))
    {
        if (((l_U279._fU4._fU4 + l_U279._fU28) >= (l_U455._fU4 - 0.01000000)) AND ((ref iParam0->_fU36->_fU4) > 0.00000000))
        {
            bVar4 = true;
            ref iParam0->_fU36->_fU4 = 0;
        }
        if ((((l_U279._fU4._fU0 + l_U279._fU28) >= (l_U455._fU0 - 0.01000000)) AND ((ref iParam0->_fU36->_fU0) > 0.00000000)) || (((l_U279._fU4._fU0 - l_U279._fU28) <= (-l_U455._fU0 + 0.01000000)) AND ((ref iParam0->_fU36->_fU0) < 0.00000000)))
        {
            if (bVar4)
            {
                l_U279._fU36._fU4 -= 0.01000000;
            }
            ref iParam0->_fU36->_fU0 = 0;
        }
    }
    else if ((((l_U279._fU4._fU0 >= (l_U455._fU0 + 0.50000000)) || (l_U279._fU4._fU0 <= (-l_U455._fU0 - 0.50000000))) || (l_U279._fU4._fU4 >= (l_U455._fU4 + 0.50000000))) || (l_U279._fU4._fU4 <= (-l_U455._fU4 - 0.50000000)))
    {
        l_U279._fU4 = {l_U254[0]._fU4};
    }
    return;
}

void sub_15438()
{
    float fVar2;
    float fVar3;
    int iVar4;
    int iVar5;
    float fVar6;

    if (l_U466 != 1)
    {
        fVar2 = l_U254[1]._fU4._fU0 - l_U279._fU4._fU0;
    }
    else
    {
        fVar2 = l_U254[1]._fU4._fU0 - (l_U279._fU4._fU0 + l_U485);
    }
    fVar3 = l_U472;
    if (l_U279._fU4._fU4 > (l_U455._fU4 / 1.50000000))
    {
        fVar3 /= 4.00000000;
    }
    if (fVar2 > 0.00000000)
    {
        if (fVar2 > l_U254[1]._fU28)
        {
            l_U254[1]._fU36._fU0 -= fVar3;
        }
    }
    else if (fVar2 < 0.00000000)
    {
        if (fVar2 < -l_U254[1]._fU28)
        {
            l_U254[1]._fU36._fU0 += fVar3;
        }
    }
    l_U254[1]._fU36._fU0 *= 0.99900000;
    if (l_U279._fU4._fU4 > 0.00000000)
    {
        if ((ABSF( l_U254[1]._fU4._fU4 )) < (l_U455._fU4 / 3.00000000))
        {
            l_U254[1]._fU36._fU4 -= l_U473;
        }
        else if ((ABSF( l_U254[1]._fU4._fU4 )) > ((l_U455._fU4 * 2.00000000) / 3.00000000))
        {
            l_U254[1]._fU36._fU4 += l_U473;
        }
        else
        {
            l_U254[1]._fU36._fU4 *= 0.99900000;
        }
    }
    else if (l_U481)
    {
        l_U254[1]._fU36._fU4 -= l_U473;
    }
    else if (l_U478 > l_U479)
    {
        l_U254[1]._fU36._fU4 -= l_U474 * 2;
        l_U478 = 0;
    }
    else if ((ABSF( fVar2 )) < (l_U254[1]._fU28 + l_U279._fU28))
    {
        if (l_U254[1]._fU4._fU4 > l_U279._fU4._fU4)
        {
            if (l_U254[1]._fU4._fU0 < l_U279._fU4._fU0)
            {
                l_U254[1]._fU36._fU0 -= l_U472;
            }
            else
            {
                l_U254[1]._fU36._fU0 += l_U472;
            }
            if ((l_U254[1]._fU4._fU4 - l_U279._fU4._fU4) < (2.00000000 * l_U254[1]._fU28))
            {
                l_U254[1]._fU36._fU4 += l_U473;
                l_U478++;
            }
            else
            {
                l_U254[1]._fU36._fU4 -= l_U473;
                l_U478++;
            }
        }
        else if (l_U254[1]._fU4._fU4 < l_U279._fU4._fU4)
        {
            if (NOT l_U482)
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar4 );
                if (iVar4 < l_U477)
                {
                    l_U482 = 1;
                    GET_GAME_TIMER( ref l_U483 );
                }
            }
            else
            {
                GET_GAME_TIMER( ref iVar5 );
                if ((iVar5 - l_U483) > l_U484)
                {
                    l_U482 = 0;
                }
            }
            if (l_U482)
            {
                l_U254[1]._fU36._fU4 += l_U475;
            }
            else
            {
                l_U254[1]._fU36._fU4 += l_U474;
            }
        }
    }
    else
    {
        l_U254[1]._fU36._fU4 -= l_U473;
        l_U478 = 0;
    };;;;
    fVar6 = VMAG( l_U254[1]._fU36 );
    if (fVar6 > l_U476)
    {
        l_U254[1]._fU36 = {l_U254[1]._fU36 * (l_U476 / fVar6)};
    }
    return;
}

void sub_17147()
{
    int I;
    int iVar3;
    boolean bVar4;
    boolean bVar5;
    boolean bVar6;
    float fVar7;
    vector vVar8;
    vector vVar11;
    vector vVar14;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    unknown uVar21;
    float fVar22;

    iVar3 = 0;
    GET_FRAME_TIME( ref fVar7 );
    fVar7 *= 30.00000000;
    vVar8 = {l_U254[0]._fU36};
    vVar11 = {l_U254[1]._fU36};
    vVar14 = {l_U279._fU36};
    l_U247[1] = 0;
    l_U247[2] = 0;
    l_U247[3] = 0;
    l_U247[0] = 0;
    sub_12541( ref l_U279, l_U279._fU4 );
    sub_12541( ref l_U254[0], l_U254[0]._fU4 );
    sub_12541( ref l_U254[1], l_U254[1]._fU4 );
    fVar17 = 0.00000000;
    while (((fVar17 + 0.05000000) < fVar7) AND (iVar3 < 25))
    {
        fVar18 = fVar7 - fVar17;
        bVar4 = false;
        bVar5 = false;
        bVar6 = false;
        if (sub_17387( ref l_U279, ref l_U344, l_U460, ref fVar18 ))
        {
            l_U247[1] = 1;
            bVar4 = true;
            iVar3++;
        }
        else if (sub_18604( ref l_U254[0], 0.00000000, ref fVar18 ))
        {
            l_U247[2] = 1;
            bVar5 = true;
            iVar3++;
        }
        else if (sub_18604( ref l_U254[1], 0.00000000, ref fVar18 ))
        {
            l_U247[3] = 1;
            bVar6 = true;
            iVar3++;
        }
        else if (sub_19417( ref l_U254[1], ref l_U279, ref fVar18 ))
        {
            bVar4 = true;
            bVar6 = true;
            iVar3++;
            l_U247[0] = 1;
            if (l_U482)
            {
                l_U244 = l_U242;
            }
            else
            {
                l_U244 = l_U241;
            }
            if (l_U466 > -1)
            {
                l_U466 = -1;
                GET_GAME_TIMER( ref l_U469 );
                l_U467 = 0;
            }
        }
        else if (sub_19417( ref l_U254[0], ref l_U279, ref fVar18 ))
        {
            bVar4 = true;
            bVar5 = true;
            iVar3++;
            fVar19 = VMAG( l_U254[0]._fU36 );
            fVar20 = VMAG( vVar14 );
            if (l_U497)
            {
                l_U244 = l_U243;
                sub_20337( 60, 200 );
            }
            else if (fVar19 > 0.03000000)
            {
                l_U244 = l_U242;
            }
            else if (fVar19 < 0.00050000)
            {
                l_U279._fU36 = {l_U279._fU36 / 2.00000000};
            }
            else if (fVar19 < 0.01000000)
            {
                l_U244 = l_U240;
            }
            else
            {
                l_U244 = l_U241;
            };;;;
            if ((fVar19 > 0.01000000) || (fVar20 > 0.01000000))
            {
                sub_20337( 30, 100 );
            }
            l_U247[0] = 1;
            if (l_U466 > -1)
            {
                l_U466 = -1;
                GET_GAME_TIMER( ref l_U469 );
                l_U467 = 0;
            }
        };;;;;
        if (NOT bVar5)
        {
            l_U254[0]._fU4 = {l_U254[0]._fU4 + (l_U254[0]._fU36 * fVar18)};
        }
        if (NOT bVar6)
        {
            l_U254[1]._fU4 = {l_U254[1]._fU4 + (l_U254[1]._fU36 * fVar18)};
        }
        if (NOT bVar4)
        {
            l_U279._fU4 = {l_U279._fU4 + (l_U279._fU36 * fVar18)};
        }
        fVar17 += fVar18;
    }
    if (l_U253)
    {
        if ((((NOT l_U247[0]) AND (NOT l_U247[1])) AND (NOT l_U247[2])) AND (NOT l_U247[3]))
        {
            l_U253 = 0;
        }
    }
    else if (l_U247[0])
    {
        uVar21 = GET_SOUND_ID();
        if (l_U497)
        {
            PLAY_SOUND_FROM_OBJECT( -1, "AIR_HOCKEY_SLAM_HIT", l_U279._fU0 );
        }
        else
        {
            PLAY_SOUND_FROM_OBJECT( uVar21, "AIR_HOCKEY_HIT_PUCK", l_U279._fU0 );
            SET_VARIABLE_ON_SOUND( uVar21, "speed", sub_20998( (VMAG( l_U279._fU36 - vVar14 )) / (3.00000000 * l_U279._fU28), 0.00000000, 1.00000000 ) );
        }
        RELEASE_SOUND_ID( uVar21 );
        l_U253 = 1;
    }
    if (l_U247[1])
    {
        uVar21 = GET_SOUND_ID();
        PLAY_SOUND_FROM_OBJECT( uVar21, "AIR_HOCKEY_PUCK_HIT_WALL", l_U279._fU0 );
        SET_VARIABLE_ON_SOUND( uVar21, "speed", sub_20998( (VMAG( l_U279._fU36 - vVar14 )) / (3.00000000 * l_U279._fU28), 0.00000000, 1.00000000 ) );
        RELEASE_SOUND_ID( uVar21 );
        l_U253 = 1;
    }
    if (l_U247[2])
    {
        uVar21 = GET_SOUND_ID();
        PLAY_SOUND_FROM_OBJECT( uVar21, "AIR_HOCKEY_HIT_WALL", l_U254[0]._fU0 );
        SET_VARIABLE_ON_SOUND( uVar21, "speed", sub_20998( (VMAG( l_U254[0]._fU36 - vVar8 )) / l_U254[0]._fU28, 0.00000000, 1.00000000 ) );
        RELEASE_SOUND_ID( uVar21 );
        l_U253 = 1;
    }
    if (l_U247[3])
    {
        uVar21 = GET_SOUND_ID();
        PLAY_SOUND_FROM_OBJECT( uVar21, "AIR_HOCKEY_HIT_WALL", l_U254[1]._fU0 );
        SET_VARIABLE_ON_SOUND( uVar21, "speed", sub_20998( (VMAG( l_U254[1]._fU36 - vVar11 )) / l_U254[1]._fU28, 0.00000000, 1.00000000 ) );
        RELEASE_SOUND_ID( uVar21 );
        l_U253 = 1;
    }
    fVar22 = VMAG( l_U279._fU36 );
    if (fVar22 > (l_U244 * l_U279._fU28))
    {
        l_U279._fU36 = {l_U279._fU36 * ((l_U244 * l_U279._fU28) / fVar22)};
    }
    l_U279._fU36 = {l_U279._fU36 * l_U462};
    if (NOT bVar4)
    {
        l_U465 = VMAG( l_U279._fU36 );
    }
    for ( I = 0; I < 2; I++ )
    {
        fVar22 = VMAG( l_U254[I]._fU36 );
        if (fVar22 >= (2.50000000 * l_U254[I]._fU28))
        {
            l_U254[I]._fU36 = {l_U254[I]._fU36 * ((2.50000000 * l_U254[I]._fU28) / fVar22)};
        }
        if (I == 0)
        {
            l_U254[I]._fU36 = {l_U254[I]._fU36 * l_U463};
        }
        else
        {
            l_U254[I]._fU36 = {l_U254[I]._fU36 * l_U464};
        }
    }
    return;
}

int sub_17387(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    float fVar6;
    int I;

    for ( I = 0; I < (uParam1^); I++ )
    {
        if ((I == 6) || (I == 7))
        {
            fVar6 = 0.10000000;
        }
        else
        {
            fVar6 = uParam2;
        }
        if (sub_17452( uParam0, ref (uParam1^)[I], fVar6, uParam3 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_17452(int iParam0, int iParam1, unknown uParam2, unknown uParam3)
{
    vector vVar6;
    float fVar9;
    unknown uVar10;
    float fVar11;
    vector vVar12;
    vector vVar15;
    float fVar18;
    float fVar19;
    float fVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    vector vVar27;
    float fVar30;
    float fVar31;

    vVar6 = {iParam0->_fU36 * (uParam3^)};
    fVar9 = VMAG( vVar6 );
    uVar10 = sub_17516( iParam1->_fU0 + (iParam1->_fU24 * iParam0->_fU28), iParam1->_fU24 );
    fVar11 = (sub_17516( iParam1->_fU24, iParam0->_fU4 )) - uVar10;
    if (fVar11 < 0.00000000)
    {
        vVar12 = {iParam1->_fU0 - iParam0->_fU4};
        vVar12 = {vVar12 / (VMAG( vVar12 ))};
        vVar15 = {iParam1->_fU12 - iParam0->_fU4};
        vVar15 = {vVar15 / (VMAG( vVar15 ))};
        fVar18 = sub_17516( vVar12, vVar15 );
        if ((fVar18 < 0.00000000) AND (fVar18 > -1.00000000))
        {
            iParam0->_fU4 = {iParam0->_fU4 - (iParam1->_fU24 * fVar11)};
            (uParam3^) = 0.00000000;
            return 1;
        }
    }
    else
    {
        fVar19 = sub_17516( iParam1->_fU24, vVar6 );
        if (fVar19 < 0.00000000)
        {
            fVar20 = -fVar11 / fVar19;
            if (fVar20 < 1.00000000)
            {
                uVar21 = {iParam1->_fU12 - iParam1->_fU0};
                uVar24 = {iParam0->_fU4 - iParam1->_fU0};
                fVar30 = sub_17516( uVar24, uVar21 );
                if (fVar30 <= 0.00000000)
                {
                    if (sub_17908( iParam0->_fU4, vVar6 / fVar9, iParam1->_fU0, iParam0->_fU28, ref fVar20 ))
                    {
                        if (fVar20 <= fVar9)
                        {
                            iParam0->_fU4 = {iParam0->_fU4 + ((vVar6 * fVar20) / fVar9)};
                            vVar27 = {iParam0->_fU4 - iParam1->_fU0};
                            vVar27 = {vVar27 / (VMAG( vVar27 ))};
                            iParam0->_fU36 = {iParam0->_fU36 - (((vVar27 * 2.00000000) * (sub_17516( iParam0->_fU36, vVar27 ))) * uParam2)};
                            (uParam3^) *= fVar20;
                            return 1;
                        }
                    }
                    return 0;
                }
                fVar31 = sub_17516( uVar21, uVar21 );
                if (fVar31 <= fVar30)
                {
                    if (sub_17908( iParam0->_fU4, vVar6 / fVar9, iParam1->_fU12, iParam0->_fU28, ref fVar20 ))
                    {
                        if (fVar20 <= fVar9)
                        {
                            iParam0->_fU4 = {iParam0->_fU4 + ((vVar6 * fVar20) / fVar9)};
                            vVar27 = {iParam0->_fU4 - iParam1->_fU12};
                            vVar27 = {vVar27 / (VMAG( vVar27 ))};
                            iParam0->_fU36 = {iParam0->_fU36 - (((vVar27 * 2.00000000) * (sub_17516( iParam0->_fU36, vVar27 ))) * uParam2)};
                            (uParam3^) *= fVar20 / fVar9;
                            return 1;
                        }
                    }
                    return 0;
                }
                iParam0->_fU4 = {iParam0->_fU4 + (vVar6 * fVar20)};
                iParam0->_fU36 = {iParam0->_fU36 - (((iParam1->_fU24 * 2.00000000) * (sub_17516( iParam0->_fU36, iParam1->_fU24 ))) * uParam2)};
                (uParam3^) *= fVar20;
                return 1;
            }
        }
    }
    return 0;
}

float sub_17516(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return ((uParam0._fU0 * uParam3._fU0) + (uParam0._fU4 * uParam3._fU4)) + (uParam0._fU8 * uParam3._fU8);
}

int sub_17908(vector vParam0, unknown uParam3, unknown uParam4, unknown uParam5, vector vParam6, unknown uParam9, unknown uParam10)
{
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    unknown uVar20;

    uVar13 = VMAG2( uParam3 );
    uVar14 = {vParam0 - vParam6};
    fVar17 = 2.00000000 * (sub_17516( uParam3, uVar14 ));
    fVar18 = (VMAG2( uVar14 )) - (uParam9 * uParam9);
    fVar19 = (fVar17 * fVar17) - ((4.00000000 * uVar13) * fVar18);
    if (fVar19 < 0.00000000)
    {
        return 0;
    }
    uVar20 = SQRT( fVar19 );
    (uParam10^) = (-fVar17 - uVar20) / (2.00000000 * uVar13);
    return 1;
}

int sub_18604(int iParam0, unknown uParam1, unknown uParam2)
{
    vector vVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    float fVar11;
    float fVar12;
    float fVar13;

    vVar5 = {iParam0->_fU36 * (uParam2^)};
    uVar8 = {iParam0->_fU4 + vVar5};
    if ((uVar8._fU0 + iParam0->_fU28) > l_U455._fU0)
    {
        fVar12 = vVar5.x / (VMAG( vVar5 ));
        fVar13 = ((l_U455._fU0 - iParam0->_fU28) - (ref iParam0->_fU4->_fU0)) / fVar12;
        fVar11 = fVar13 / (VMAG( vVar5 ));
        iParam0->_fU4 = {iParam0->_fU4 + (vVar5 * fVar11)};
        ref iParam0->_fU36->_fU0 *= -uParam1;
        ref iParam0->_fU4->_fU0 = l_U455._fU0 - iParam0->_fU28;
        (uParam2^) *= fVar11;
        return 1;
    }
    else if ((uVar8._fU0 - iParam0->_fU28) < -l_U455._fU0)
    {
        fVar12 = vVar5.x / (VMAG( vVar5 ));
        fVar13 = ((-l_U455._fU0 + iParam0->_fU28) - (ref iParam0->_fU4->_fU0)) / fVar12;
        fVar11 = fVar13 / (VMAG( vVar5 ));
        iParam0->_fU4 = {iParam0->_fU4 + (vVar5 * fVar11)};
        ref iParam0->_fU36->_fU0 *= -uParam1;
        ref iParam0->_fU4->_fU0 = -l_U455._fU0 + iParam0->_fU28;
        (uParam2^) *= fVar11;
        return 1;
    }
    else if ((uVar8._fU4 + iParam0->_fU28) > l_U455._fU4)
    {
        fVar12 = vVar5.y / (VMAG( vVar5 ));
        fVar13 = ((l_U455._fU4 - iParam0->_fU28) - (ref iParam0->_fU4->_fU4)) / fVar12;
        fVar11 = fVar13 / (VMAG( vVar5 ));
        iParam0->_fU4 = {iParam0->_fU4 + (vVar5 * fVar11)};
        ref iParam0->_fU36->_fU4 *= -uParam1;
        ref iParam0->_fU4->_fU4 = l_U455._fU4 - iParam0->_fU28;
        (uParam2^) *= fVar11;
        return 1;
    }
    else if ((uVar8._fU4 - iParam0->_fU28) < -l_U455._fU4)
    {
        fVar12 = vVar5.y / (VMAG( vVar5 ));
        fVar13 = ((-l_U455._fU4 + iParam0->_fU28) - (ref iParam0->_fU4->_fU4)) / fVar12;
        fVar11 = fVar13 / (VMAG( vVar5 ));
        iParam0->_fU4 = {iParam0->_fU4 + (vVar5 * fVar11)};
        ref iParam0->_fU36->_fU4 *= -uParam1;
        ref iParam0->_fU4->_fU4 = -l_U455._fU4 + iParam0->_fU28;
        (uParam2^) *= fVar11;
        return 1;
    };;;;
    return 0;
}

int sub_19417(int iParam0, int iParam1, unknown uParam2)
{
    float fVar5;
    float fVar6;
    vector vVar7;
    float fVar10;
    vector vVar11;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    float fVar17;
    unknown uVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    vector vVar24;
    vector vVar27;
    unknown uVar30;
    unknown uVar31;
    float fVar32;
    vector vVar33;
    vector vVar36;

    fVar5 = VDIST( iParam0->_fU4, iParam1->_fU4 );
    fVar6 = iParam1->_fU28 + iParam0->_fU28;
    if (fVar5 < (fVar6 * 0.95000000))
    {
        ref iParam1->_fU36->_fU0 *= 1.75000000;
        ref iParam1->_fU36->_fU4 *= 1.75000000;
    }
    vVar7 = {(iParam0->_fU36 * (uParam2^)) - (iParam1->_fU36 * (uParam2^))};
    fVar10 = VMAG( vVar7 );
    if (fVar10 < (fVar5 - fVar6))
    {
        return 0;
    }
    vVar11 = {vVar7 / fVar10};
    uVar14 = {iParam1->_fU4 - iParam0->_fU4};
    fVar17 = sub_17516( vVar11, uVar14 );
    if (fVar17 <= 0.00000000)
    {
        return 0;
    }
    uVar18 = VMAG( uVar14 );
    fVar19 = (uVar18 * uVar18) - (fVar17 * fVar17);
    fVar20 = fVar6 * fVar6;
    if (fVar19 >= fVar20)
    {
        return 0;
    }
    fVar21 = fVar20 - fVar19;
    if (fVar21 < 0)
    {
        return 0;
    }
    fVar22 = fVar17 - (SQRT( fVar21 ));
    if (fVar10 < fVar22)
    {
        return 0;
    }
    vVar7 = {(vVar7 * fVar22) / fVar10};
    fVar23 = (VMAG( vVar7 )) / fVar10;
    if (fVar23 > 1.00000000)
    {
        fVar23 = 0.50000000;
    }
    vVar24 = {iParam0->_fU36 * fVar23};
    vVar27 = {iParam1->_fU36 * fVar23};
    iParam0->_fU4 = {iParam0->_fU4 + (vVar24 * (uParam2^))};
    iParam1->_fU4 = {iParam1->_fU4 + (vVar27 * (uParam2^))};
    vVar11 = {iParam0->_fU4 - iParam1->_fU4};
    vVar11 = {vVar11 / (VMAG( vVar11 ))};
    uVar30 = sub_17516( iParam0->_fU36, vVar11 );
    uVar31 = sub_17516( iParam1->_fU36, vVar11 );
    fVar32 = (2.00000000 * (uVar30 - uVar31)) / (iParam0->_fU32 + iParam1->_fU32);
    vVar33 = {iParam0->_fU36 - ((vVar11 * fVar32) * iParam1->_fU32)};
    vVar36 = {iParam1->_fU36 + ((vVar11 * fVar32) * iParam0->_fU32)};
    iParam0->_fU36 = {vVar33 * l_U461};
    iParam1->_fU36 = {vVar36 * l_U461};
    (uParam2^) *= fVar23;
    return 1;
}

void sub_20337(int iParam0, unknown uParam1)
{
    int iVar4;

    GET_GAME_TIMER( ref iVar4 );
    if (iVar4 > l_U516)
    {
        SHAKE_PAD( 0, iParam0, uParam1 );
        if (iParam0 < 250)
        {
            iParam0 = 250;
        }
        l_U516 = iVar4 + iParam0;
    }
    return;
}

void sub_20998(float fParam0, float Result, float fParam2)
{
    if (fParam0 < Result)
    {
        return Result;
    }
    else if (fParam0 > fParam2)
    {
        return fParam2;
    }
    return fParam0;
}

void sub_21886()
{
    if (((NOT (IS_CHAR_INJURED( sub_4304() ))) AND (DOES_CHAR_EXIST( l_U524 ))) AND (NOT (IS_CHAR_INJURED( l_U524 ))))
    {
        if ((NOT (IS_AMBIENT_SPEECH_PLAYING( l_U524 ))) AND (NOT (IS_AMBIENT_SPEECH_PLAYING( sub_4304() ))))
        {
            switch (l_U246)
            {
                case 0:
                l_U246 = 1;
                break;
                case 2:
                SAY_AMBIENT_SPEECH( sub_4304(), "AIR_HOCKEY_SCORE_FAST", 1, 1, 2 );
                l_U246 = 0;
                break;
                case 3:
                SAY_AMBIENT_SPEECH( sub_4304(), "AIR_HOCKEY_SCORE_MED", 1, 1, 2 );
                l_U246 = 0;
                break;
                case 4:
                SAY_AMBIENT_SPEECH( sub_4304(), "AIR_HOCKEY_SCORE_SLOW", 1, 1, 2 );
                l_U246 = 0;
                break;
                case 5:
                SAY_AMBIENT_SPEECH( sub_4304(), "AIR_HOCKEY_LET_PUCK_IN_FAST", 1, 1, 2 );
                l_U246 = 0;
                break;
                case 6:
                SAY_AMBIENT_SPEECH( sub_4304(), "AIR_HOCKEY_LET_PUCK_IN_MED", 1, 1, 2 );
                l_U246 = 0;
                break;
                case 7:
                SAY_AMBIENT_SPEECH( sub_4304(), "AIR_HOCKEY_LET_PUCK_IN_SLOW", 1, 1, 2 );
                l_U246 = 0;
                break;
                case 12:
                SAY_AMBIENT_SPEECH( sub_4304(), "AIR_HOCKEY_I_SERVE", 1, 1, 2 );
                l_U246 = 0;
                break;
                case 13:
                SAY_AMBIENT_SPEECH( sub_4304(), "AIR_HOCKEY_YOU_SERVE", 1, 1, 2 );
                l_U246 = 0;
                break;
                case 14:
                SAY_AMBIENT_SPEECH( sub_4304(), "AIR_HOCKEY_SERVE_HURRY_UP_RESP", 1, 1, 2 );
                l_U246 = 0;
                break;
                case 8:
                SAY_AMBIENT_SPEECH( sub_4304(), "AIR_HOCKEY_WIN", 1, 1, 2 );
                l_U246 = 0;
                break;
                case 9:
                SAY_AMBIENT_SPEECH( sub_4304(), "AIR_HOCKEY_LOSE", 1, 1, 2 );
                l_U246 = 0;
                break;
                case 10:
                SAY_AMBIENT_SPEECH( sub_4304(), "AIR_HOCKEY_TAUNT", 1, 1, 2 );
                l_U246 = 24;
                break;
                case 11:
                SAY_AMBIENT_SPEECH( sub_4304(), "AIR_HOCKEY_TAUNT_RESP", 1, 1, 2 );
                l_U246 = 0;
                break;
                case 15:
                SAY_AMBIENT_SPEECH( l_U524, "AIR_HOCKEY_SCORE_FAST", 1, 1, 2 );
                l_U246 = 0;
                break;
                case 16:
                SAY_AMBIENT_SPEECH( l_U524, "AIR_HOCKEY_SCORE_MED", 1, 1, 2 );
                l_U246 = 0;
                break;
                case 17:
                SAY_AMBIENT_SPEECH( l_U524, "AIR_HOCKEY_SCORE_SLOW", 1, 1, 2 );
                l_U246 = 0;
                break;
                case 18:
                SAY_AMBIENT_SPEECH( l_U524, "AIR_HOCKEY_LET_PUCK_IN_FAST", 1, 1, 2 );
                l_U246 = 0;
                break;
                case 19:
                SAY_AMBIENT_SPEECH( l_U524, "AIR_HOCKEY_LET_PUCK_IN_MED", 1, 1, 2 );
                l_U246 = 0;
                break;
                case 20:
                SAY_AMBIENT_SPEECH( l_U524, "AIR_HOCKEY_LET_PUCK_IN_SLOW", 1, 1, 2 );
                l_U246 = 0;
                break;
                case 21:
                SAY_AMBIENT_SPEECH( l_U524, "AIR_HOCKEY_WIN", 1, 1, 2 );
                l_U246 = 0;
                break;
                case 22:
                SAY_AMBIENT_SPEECH( l_U524, "AIR_HOCKEY_LOSE", 1, 1, 2 );
                l_U246 = 0;
                break;
                case 25:
                SAY_AMBIENT_SPEECH( l_U524, "AIR_HOCKEY_I_SERVE", 1, 1, 2 );
                l_U246 = 0;
                break;
                case 26:
                SAY_AMBIENT_SPEECH( l_U524, "AIR_HOCKEY_YOU_SERVE", 1, 1, 2 );
                l_U246 = 0;
                break;
                case 27:
                SAY_AMBIENT_SPEECH( l_U524, "AIR_HOCKEY_SERVE_HURRY_UP", 1, 1, 2 );
                l_U246 = 14;
                break;
                case 23:
                SAY_AMBIENT_SPEECH( l_U524, "AIR_HOCKEY_TAUNT", 1, 1, 2 );
                l_U246 = 11;
                break;
                case 24:
                SAY_AMBIENT_SPEECH( l_U524, "AIR_HOCKEY_TAUNT_RESP", 1, 1, 2 );
                l_U246 = 0;
                break;
                case 28:
                SAY_AMBIENT_SPEECH( l_U524, "AIR_HOCKEY_BORED", 1, 1, 2 );
                l_U246 = 0;
                break;
            }
        }
    }
    return;
}

void sub_23573()
{
    float fVar2;
    int I;

    if (l_U545 > 0)
    {
        GET_FRAME_TIME( ref fVar2 );
        fVar2 *= 1000.00000000;
        if (NOT (HAVE_ANIMS_LOADED( "MINI_AIR" )))
        {
            REQUEST_ANIMS( "MINI_AIR" );
        }
        else
        {
            for ( I = 0; I < l_U541; I++ )
            {
                if (((l_U541[I] != nil) AND (NOT (IS_CHAR_INJURED( l_U541[I] )))) AND (l_U541[I] != l_U524))
                {
                    if (NOT (sub_23735( l_U541[I] )))
                    {
                        sub_23956( l_U541[I], -1 );
                    }
                    if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U541[I] )))
                    {
                        if (l_U512[I] > 15000.00000000)
                        {
                            sub_24315( l_U541[I] );
                            GENERATE_RANDOM_FLOAT_IN_RANGE( -5000.00000000, 5000.00000000, ref l_U512[I] );
                        }
                    }
                    l_U512[I] += fVar2;
                }
            }
        }
    }
    return;
}

int sub_23735(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if ((((NOT (IS_CHAR_PLAYING_ANIM( uParam0, "MINI_AIR", "cheer_on_fight_A" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, "MINI_AIR", "cheer_on_fight_B" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, "MINI_AIR", "cheer_on_fight_C" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, "MINI_AIR", "cheer_on_fight_D" ))))
        {
            return 0;
        }
    }
    return 1;
}

void sub_23956(unknown uParam0, int iParam1)
{
    if (iParam1 == -1)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref iParam1 );
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        switch (iParam1)
        {
            case 0:
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam0, "cheer_on_fight_A", "MINI_AIR", 4.00000000, 0, 0, 0, 0, -1 );
            break;
            case 1:
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam0, "cheer_on_fight_B", "MINI_AIR", 4.00000000, 0, 0, 0, 0, -1 );
            break;
            case 2:
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam0, "cheer_on_fight_C", "MINI_AIR", 4.00000000, 0, 0, 0, 0, -1 );
            break;
            case 3:
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam0, "cheer_on_fight_D", "MINI_AIR", 4.00000000, 0, 0, 0, 0, -1 );
            break;
        }
    }
    return;
}

void sub_24315(unknown uParam0)
{
    int iVar3;
    string sVar4;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref iVar3 );
    if (iVar3 == 0)
    {
        sVar4 = "WHOOP";
    }
    else if (iVar3 == 1)
    {
        sVar4 = "LAUGH";
    }
    else if (iVar3 == 2)
    {
        sVar4 = "CHEER";
    };;;
    SAY_AMBIENT_SPEECH_WITH_VOICE( uParam0, sVar4, "PAIN_VOICE", 0, 0, 0 );
    return;
}

void sub_25105(unknown uParam0)
{
    if (g_U26739._fU0 == 19)
    {
        return;
    }
    if (NOT (g_U26739._fU8 == 12))
    {
        g_U26739._fU20 = uParam0;
        if (sub_4626( g_U26739._fU0 ))
        {
            g_U26739._fU16 = uParam0;
        }
        return;
    }
    g_U26739._fU16 = uParam0;
    return;
}

void sub_25264()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    int I;
    int iVar7;

    if (sub_25273())
    {
        if (l_U517[l_U520] < 7)
        {
            l_U522 = 4;
        }
    }
    sub_23573();
    sub_21886();
    switch (l_U522)
    {
        case 0:
        SETTIMERB( 0 );
        l_U549 = l_U550;
        l_U497 = 0;
        SET_OBJECT_VISIBLE( l_U279._fU0, 0 );
        if (l_U520 == 0)
        {
            sub_10377( 4 );
        }
        else
        {
            sub_10377( 5 );
        }
        SET_PED_ALPHA( sub_4304(), 255 );
        for ( I = 0; I < 2; I++ )
        {
            uVar2 = {sub_2189( 0.00000000, l_U525[I]._fU4 * 1.15000000, l_U525[I]._fU8 )};
            SET_OBJECT_COORDINATES( l_U538[I], uVar2._fU0, uVar2._fU4, uVar2._fU8 );
        }
        l_U589 = {sub_2189( l_U552[l_U550]._fU0 )};
        SET_CAM_POS( l_U548, l_U589._fU0, l_U589._fU4, l_U589._fU8 );
        CLEAR_HELP();
        CLEAR_PRINTS();
        if (l_U547)
        {
            PRINT_HELP_FOREVER( "AH_RULES_2" );
            l_U547 = 0;
        }
        if (l_U517[0] >= 7)
        {
            PRINT_NOW( "AH_P_WIN", 7500, 0 );
        }
        else if (l_U517[1] >= 7)
        {
            PRINT_NOW( "AH_P_LOSE", 7500, 0 );
        }
        else if (l_U520 == 1)
        {
            if (l_U524 == l_U523)
            {
                PRINT_WITH_NUMBER( "AH_P_SCORE", 2, 7500, 0 );
            }
            else if (l_U524 == l_U541[0])
            {
                PRINT_NOW( "AH_S_JIM", 7500, 0 );
            }
            else if (l_U524 == l_U541[1])
            {
                PRINT_NOW( "AH_S_TERRY", 7500, 0 );
            }
            else if (l_U524 == l_U541[2])
            {
                PRINT_NOW( "AH_S_CLAY", 7500, 0 );
            };;;;
        }
        else
        {
            PRINT_NOW( "AH_S_YOU", 7500, 0 );
        };;;
        uVar5 = sub_3887( 0, 2 );
        if ((l_U517[0] < 7) AND (l_U517[1] < 7))
        {
            sub_26094( uVar5, l_U520 );
        }
        else
        {
            sub_26432( uVar5, l_U520 );
        }
        if (NOT (IS_CHAR_INJURED( l_U524 )))
        {
            TASK_CLEAR_LOOK_AT( l_U524 );
            if (l_U520 == 0)
            {
                sub_26585( l_U524, 0, -1 );
            }
            else
            {
                sub_26585( l_U524, 1, -1 );
            }
        }
        TASK_CLEAR_LOOK_AT( sub_4304() );
        if (l_U520 == 0)
        {
            sub_26585( sub_4304(), 1, -1 );
        }
        else
        {
            sub_26585( sub_4304(), 0, -1 );
        }
        l_U522 = 1;
        break;
        case 1:
        l_U589._fU0 -= 0.00020000;
        SET_CAM_POS( l_U548, l_U589._fU0, l_U589._fU4, l_U589._fU8 );
        if (TIMERB() > 1000)
        {
            l_U521 = GET_SOUND_ID();
            if (l_U520 == 0)
            {
                if (l_U517[0] >= 7)
                {
                    PLAY_SOUND_FROM_OBJECT( l_U521, "AIR_HOCKEY_SCORING_PLAYER_WINS", l_U342 );
                }
                else
                {
                    PLAY_SOUND_FROM_OBJECT( l_U521, "AIR_HOCKEY_SCORING_PLAYER_SCORES", l_U342 );
                }
            }
            else if (l_U517[1] >= 7)
            {
                PLAY_SOUND_FROM_OBJECT( l_U521, "AIR_HOCKEY_SCORING_OPPONENT_WINS", l_U342 );
            }
            else
            {
                PLAY_SOUND_FROM_OBJECT( l_U521, "AIR_HOCKEY_SCORING_OPPONENT_SCORES", l_U342 );
            }
            l_U522 = 2;
        }
        break;
        case 2:
        l_U589._fU0 -= 0.00020000;
        SET_CAM_POS( l_U548, l_U589._fU0, l_U589._fU4, l_U589._fU8 );
        sub_27644( ref l_U308[0], TO_FLOAT( l_U517[0] * 45 ) );
        sub_27644( ref l_U308[1], TO_FLOAT( l_U517[0] * 45 ) );
        sub_27644( ref l_U325[0], TO_FLOAT( l_U517[1] * 45 ) );
        sub_27644( ref l_U325[1], TO_FLOAT( l_U517[1] * 45 ) );
        if (TIMERB() > 2000)
        {
            if (NOT (IS_CHAR_INJURED( l_U524 )))
            {
                if ((NOT (sub_27872( sub_4304() ))) AND (NOT (sub_27872( l_U524 ))))
                {
                    if (l_U521 != 0)
                    {
                        while (NOT (HAS_SOUND_FINISHED( l_U521 )))
                        {
                            WAIT( 0 );
                        }
                    }
                    l_U522 = 3;
                }
            }
        }
        break;
        case 3:
        if (l_U521 != 0)
        {
            RELEASE_SOUND_ID( l_U521 );
            l_U521 = 0;
        }
        CLEAR_HELP();
        CLEAR_PRINTS();
        if (l_U546)
        {
            GET_GAME_TIMER( ref iVar7 );
            if ((iVar7 - l_U471) >= 10000)
            {
                l_U546 = 0;
            }
        }
        if (l_U517[l_U520] >= 7)
        {
            l_U245 = 6;
        }
        else
        {
            l_U245 = 4;
            uVar5 = sub_3887( 0, 2 );
            if (l_U520 == 1)
            {
                l_U279._fU4 = {sub_12330( -0.00200000, 0.00200000 ), 0.30000000, 0.00000000};
                l_U466 = 0;
                l_U486 = 0.00000000;
            }
            else
            {
                l_U279._fU4 = {sub_12330( -0.00200000, 0.00200000 ), -0.30000000, 0.00000000};
                l_U466 = 1;
                l_U485 = sub_12330( -0.10000000, 0.10000000 );
                l_U486 = 250.00000000;
            }
            l_U254[0]._fU4 = {sub_12330( -0.00200000, 0.00200000 ), 0.70000000, 0.00000000};
            l_U254[0]._fU36 = {0, 0, 0};
            l_U254[1]._fU4 = {sub_12330( -0.00200000, 0.00200000 ), -0.70000000, 0.00000000};
            l_U254[1]._fU36 = {0, 0, 0};
            l_U279._fU36 = {0, 0, 0};
            sub_12541( ref l_U254[0], l_U254[0]._fU4 );
            sub_12541( ref l_U254[1], l_U254[1]._fU4 );
            sub_12541( ref l_U279, l_U279._fU4 );
            sub_10377( l_U549 );
            SET_OBJECT_VISIBLE( l_U279._fU0, 1 );
            l_U525[0]._fU0 = l_U254[0]._fU4._fU0;
            l_U525[1]._fU0 = l_U254[1]._fU4._fU0;
            GET_GAME_TIMER( ref l_U467 );
            GET_GAME_TIMER( ref l_U468 );
            l_U308[0]._fU28 = TO_FLOAT( l_U517[0] * 45 );
            l_U308[1]._fU28 = TO_FLOAT( l_U517[0] * 45 );
            l_U325[0]._fU28 = TO_FLOAT( l_U517[1] * 45 );
            l_U325[1]._fU28 = TO_FLOAT( l_U517[1] * 45 );
            SET_OBJECT_ROTATION( l_U308[0]._fU0, l_U308[0]._fU28, l_U308[0]._fU16._fU4, l_U308[0]._fU16._fU8 );
            SET_OBJECT_ROTATION( l_U308[1]._fU0, l_U308[1]._fU28, l_U308[1]._fU16._fU4, l_U308[1]._fU16._fU8 );
            SET_OBJECT_ROTATION( l_U325[0]._fU0, l_U325[0]._fU28, l_U325[0]._fU16._fU4, l_U325[0]._fU16._fU8 );
            SET_OBJECT_ROTATION( l_U325[1]._fU0, l_U325[1]._fU28, l_U325[1]._fU16._fU4, l_U325[1]._fU16._fU8 );
            sub_13259();
            sub_13114();
        }
        l_U522 = 0;
        break;
        case 4:
        if (sub_27872( sub_4304() ))
        {
            CLEAR_CHAR_TASKS( sub_4304() );
            WAIT( 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U524 )))
        {
            if (sub_27872( l_U524 ))
            {
                CLEAR_CHAR_TASKS( l_U524 );
                WAIT( 0 );
            }
        }
        l_U522 = 3;
        break;
    }
    return;
}

int sub_25273()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_26094(int iParam0, int iParam1)
{
    float fVar4;
    float fVar5;

    fVar4 = 1.00000000 * l_U279._fU28;
    fVar5 = 2.50000000 * l_U279._fU28;
    if (l_U524 == l_U523)
    {
        iParam0 = 0;
    }
    if (iParam0 == 0)
    {
        if (iParam0 == iParam1)
        {
            if (l_U465 < fVar4)
            {
                l_U246 = 4;
            }
            else if (l_U465 < fVar5)
            {
                l_U246 = 3;
            }
            else
            {
                l_U246 = 2;
            }
        }
        else if (l_U465 < fVar4)
        {
            l_U246 = 7;
        }
        else if (l_U465 < fVar5)
        {
            l_U246 = 6;
        }
        else
        {
            l_U246 = 5;
        };;;
    }
    else if (iParam0 == iParam1)
    {
        if (l_U465 < fVar4)
        {
            l_U246 = 17;
        }
        else if (l_U465 < fVar5)
        {
            l_U246 = 16;
        }
        else
        {
            l_U246 = 15;
        }
    }
    else if (l_U465 < fVar4)
    {
        l_U246 = 20;
    }
    else if (l_U465 < fVar5)
    {
        l_U246 = 19;
    }
    else
    {
        l_U246 = 18;
    };;;;
    return;
}

void sub_26432(int iParam0, int iParam1)
{
    if (l_U524 == l_U523)
    {
        iParam0 = 0;
    }
    if (iParam0 == 0)
    {
        if (iParam0 == iParam1)
        {
            l_U246 = 8;
        }
        else
        {
            l_U246 = 9;
        }
    }
    else if (iParam0 == iParam1)
    {
        l_U246 = 21;
    }
    else
    {
        l_U246 = 22;
    }
    return;
}

void sub_26585(unknown uParam0, boolean bParam1, int iParam2)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if ((l_U517[0] == 7) || (l_U517[1] == 7))
        {
            if (bParam1)
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam0, "celeb", "MINI_AIR", 6.00000000, 0, 0, 0, 0, 0 );
            }
            else
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam0, "minor_curse_02", "MINI_AIR", 6.00000000, 0, 0, 0, 0, 0 );
            }
        }
        else if (iParam2 == -1)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref iParam2 );
        }
        switch (iParam2)
        {
            case 0:
            if (bParam1)
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam0, "minor_celeb", "MINI_AIR", 6.00000000, 0, 0, 0, 0, 0 );
            }
            else
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam0, "minor_curse_02", "MINI_AIR", 6.00000000, 0, 0, 0, 0, 0 );
            }
            break;
            case 1:
            if (bParam1)
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam0, "minor_celeb_02", "MINI_AIR", 6.00000000, 0, 0, 0, 0, 0 );
            }
            else
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam0, "minor_curse_02", "MINI_AIR", 6.00000000, 0, 0, 0, 0, 0 );
            }
            break;
            case 2:
            if (bParam1)
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam0, "minor_celeb_03", "MINI_AIR", 6.00000000, 0, 0, 0, 0, 0 );
            }
            else
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam0, "minor_curse_03", "MINI_AIR", 6.00000000, 0, 0, 0, 0, 0 );
            }
            break;
        }
    }
    return;
}

void sub_27644(int iParam0, float fParam1)
{
    if (iParam0->_fU28 != fParam1)
    {
        iParam0->_fU28 += 3;
        if (iParam0->_fU28 >= 360)
        {
            iParam0->_fU28 = 0;
        }
        SET_OBJECT_ROTATION( iParam0->_fU0, iParam0->_fU28, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8 );
    }
    return;
}

int sub_27872(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if ((((((((NOT (IS_CHAR_PLAYING_ANIM( uParam0, "MINI_AIR", "minor_celeb" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, "MINI_AIR", "minor_curse" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, "MINI_AIR", "minor_celeb_02" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, "MINI_AIR", "minor_curse_02" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, "MINI_AIR", "minor_celeb_03" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, "MINI_AIR", "minor_curse_03" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, "MINI_AIR", "celeb" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, "MINI_AIR", "curse" ))))
        {
            return 0;
        }
    }
    return 1;
}

void sub_29321(unknown uParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    iVar3 = 0;
    if (NOT g_U38782[uParam0]._fU0)
    {
        iVar3 = ProtectedGet(g_U38782[uParam0]._fU8);
        if (iVar3 > 0)
        {
            sub_29390( 2, iVar3 );
            g_U38782[uParam0]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_29390(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_29560( 0 );
    return;
}

void sub_29560(boolean bParam0)
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
        if (g_U26712[I]._fU4 == g_U26712[I]._fU0)
        {
            fVar4 = g_U26712[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U26712[I]._fU0 );
            fVar6 = TO_FLOAT( g_U26712[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U26712[I]._fU8;
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
    SET_FLOAT_STAT( 133, fVar3 );
    if (bVar7)
    {
        sub_29805();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_29805()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

void sub_29961(unknown uParam0)
{
    sub_1023();
    sub_2136( sub_12330( -0.00200000, 0.00200000 ), 0.70000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, l_U232, ref l_U254[0] );
    sub_2136( sub_12330( -0.00200000, 0.00200000 ), -0.70000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, l_U233, ref l_U254[1] );
    switch (uParam0)
    {
        case 0:
        sub_2136( sub_12330( -0.00200000, 0.00200000 ), 0.30000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, l_U231, ref l_U279 );
        break;
        case 1:
        sub_2136( sub_12330( -0.00200000, 0.00200000 ), -0.30000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, l_U231, ref l_U279 );
        break;
        default:
        sub_2136( sub_12330( -0.00200000, 0.00200000 ), 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, l_U231, ref l_U279 );
        break;
    }
    sub_12541( ref l_U254[0], l_U254[0]._fU4 );
    sub_12541( ref l_U254[1], l_U254[1]._fU4 );
    sub_12541( ref l_U279, l_U279._fU4 );
    return;
}

void sub_30488()
{
    int I;

    if (l_U545 > 0)
    {
        for ( I = 0; I < l_U541; I++ )
        {
            if (((l_U541[I] != nil) AND (NOT (IS_CHAR_INJURED( l_U541[I] )))) AND (l_U541[I] != l_U524))
            {
                if (sub_23735( l_U541[I] ))
                {
                    CLEAR_CHAR_TASKS( l_U541[I] );
                }
            }
        }
    }
    return;
}

void sub_30938()
{
    int I;

    if (NOT IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_OUT( 500 );
        while (IS_SCREEN_FADING_OUT())
        {
            sub_13114();
            WAIT( 0 );
        }
    }
    sub_29961( -1 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    AMBIENT_AUDIO_BANK_NO_LONGER_NEEDED();
    UNREGISTER_SCRIPT_WITH_AUDIO();
    REMOVE_ANIMS( "MINI_AIR" );
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_4304(), 0 );
    if (NOT (IS_CHAR_INJURED( l_U524 )))
    {
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( l_U524, 0 );
    }
    sub_31106();
    sub_31247();
    sub_31447();
    if (NOT (sub_14226( l_U545 )))
    {
        I = 0;
        for ( I = 0; I < l_U541; I++ )
        {
            if (l_U541[I] != nil)
            {
                if (DOES_CHAR_EXIST( l_U541[I] ))
                {
                    DELETE_CHAR( ref l_U541[I] );
                }
            }
        }
    }
    sub_10377( l_U551 );
    sub_31948();
    sub_32045();
    l_U453 = 0;
    if (NOT (IS_CHAR_INJURED( sub_4304() )))
    {
        if (l_U454)
        {
            STOP_PED_SPEAKING( sub_4304(), 1 );
            l_U454 = 0;
        }
    }
    CLEAR_HELP();
    CLEAR_PRINTS();
    if (NOT IS_SCREEN_FADED_IN())
    {
        DO_SCREEN_FADE_IN( 500 );
        while (IS_SCREEN_FADING_IN())
        {
            WAIT( 0 );
        }
    }
    return;
}

void sub_31106()
{
    DETACH_PED( sub_4304(), 1 );
    DELETE_OBJECT( ref l_U538[0] );
    SET_PED_ALPHA( sub_4304(), 255 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_4304() );
    FREEZE_CHAR_POSITION( sub_4304(), 0 );
    SET_PLAYER_CONTROL( sub_1580(), 1 );
    SET_CHAR_HEADING( sub_4304(), l_U532[0] );
    SET_CAM_BEHIND_PED( sub_4304() );
    SET_GAME_CAM_HEADING( 0.00000000 );
    return;
}

void sub_31247()
{
    int I;

    if (l_U545 > 0)
    {
        for ( I = 0; I < l_U541; I++ )
        {
            if (((l_U541[I] != nil) AND (NOT (IS_CHAR_INJURED( l_U541[I] )))) AND (l_U541[I] != l_U524))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U541[I] );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U541[I], 0 );
                FREEZE_CHAR_POSITION( l_U541[I], 0 );
                if (NOT (IS_PED_IN_GROUP( l_U541[I] )))
                {
                    SET_GROUP_MEMBER( sub_5205(), l_U541[I] );
                }
            }
        }
    }
    return;
}

void sub_31447()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    if (NOT (IS_CHAR_INJURED( l_U524 )))
    {
        DETACH_PED( l_U524, 1 );
    }
    DELETE_OBJECT( ref l_U538[1] );
    if (NOT (IS_CHAR_INJURED( l_U524 )))
    {
        uVar7 = {sub_2189( 0, 0, 0 )};
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U342, 1.50000000, 0, 0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        SET_CHAR_HEADING( l_U524, l_U532[1] );
        GET_HEADING_FROM_VECTOR_2D( uVar7._fU0 - uVar3._fU0, uVar7._fU4 - uVar3._fU4, ref uVar6 );
        FREEZE_CHAR_POSITION( l_U524, 0 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U524, 0 );
        if (l_U524 == l_U523)
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U524 );
            OPEN_SEQUENCE_TASK( ref uVar2 );
            TASK_LOOK_AT_CHAR( 0, sub_4304(), 15000, 0 );
            TASK_STAND_STILL( 0, 2500 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar3._fU0, uVar3._fU4, uVar3._fU8, 2, -1, -1 );
            TASK_STAND_GUARD( 0, uVar3, uVar6, 1, 0, -2 );
            CLOSE_SEQUENCE_TASK( uVar2 );
            TASK_PERFORM_SEQUENCE( l_U524, uVar2 );
            CLEAR_SEQUENCE_TASK( uVar2 );
        }
        else
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U524 );
            if (NOT (IS_PED_IN_GROUP( l_U524 )))
            {
                SET_GROUP_MEMBER( sub_5205(), l_U524 );
            }
        }
    }
    l_U524 = nil;
    return;
}

void sub_31948()
{
    unknown uVar2;

    BEGIN_CAM_COMMANDS( ref uVar2 );
    if (DOES_CAM_EXIST( l_U548 ))
    {
        SET_CAM_ACTIVE( l_U548, 0 );
        SET_CAM_PROPAGATE( l_U548, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        DESTROY_CAM( l_U548 );
    }
    END_CAM_COMMANDS( ref uVar2 );
    return;
}

void sub_32045()
{
    DISPLAY_RADAR( 1 );
    SET_MINIGAME_IN_PROGRESS( 0 );
    g_U12304 = 0;
    if (g_U26739._fU0 == 19)
    {
        g_U12303 = 0;
        sub_32096();
        return;
    }
    if (NOT (g_U26739._fU8 == 12))
    {
        if (g_U26739._fU20 == 8)
        {
            g_U26739._fU20 = 3;
        }
    }
    else if (NOT (g_U26739._fU4 == 12))
    {
        if (g_U26739._fU16 == 8)
        {
            g_U26739._fU16 = 3;
        }
    }
    else
    {
        return;
    }
    g_U26739._fU28 = 1;
    return;
}

void sub_32096()
{
    g_U26737._fU4 = 1;
    return;
}
