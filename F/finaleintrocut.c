void main()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;

    l_U4 = 0;
    l_U5 = 1;
    l_U6 = 3;
    l_U8 = 0;
    l_U25 = -1;
    l_U29 = 0;
    l_U30 = 1;
    l_U31 = 1;
    l_U39 = 150.00000000;
    l_U129 = 0;
    l_U130 = 150.00000000;
    l_U180 = 0;
    SET_MISSION_FLAG( 1 );
    if ((NOT IS_SCREEN_FADED_OUT()) AND (NOT IS_SCREEN_FADING_OUT()))
    {
        DO_SCREEN_FADE_OUT( 500 );
    }
    LOAD_ADDITIONAL_TEXT( "FIN1AAU", 6 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar2 );
    if (NOT (IS_CAR_DEAD( uVar2 )))
    {
        GET_CAR_COORDINATES( uVar2, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        uVar6 = {g_U9387[36]._fU0};
        fVar9 = sub_220( uVar3, uVar6 );
        if (fVar9 < 10.00000000)
        {
            SET_CAR_HEADING( uVar2, 0.00000000 );
            SET_CAR_COORDINATES( uVar2, -1605.27900000, 22.51330000, 9.05590000 );
            SET_CAR_ON_GROUND_PROPERLY( uVar2 );
        }
    }
    START_CUTSCENE_NOW( "FIN_1" );
    while (NOT HAS_CUTSCENE_LOADED())
    {
        WAIT( 0 );
    }
    while (NOT HAS_CUTSCENE_FINISHED())
    {
        WAIT( 0 );
    }
    CLEAR_NAMED_CUTSCENE( "FIN_1" );
    if (NOT (IS_CHAR_DEAD( sub_429() )))
    {
        SET_CHAR_COORDINATES( sub_429(), -1585.73900000, 26.68580000, 9.04700000 );
        SET_CHAR_HEADING( sub_429(), 94.50780000 );
        SET_GAME_CAM_HEADING( 0.00000000 );
    }
    DO_SCREEN_FADE_IN( 500 );
    while (NOT IS_SCREEN_FADED_IN())
    {
        WAIT( 0 );
    }
    if (IS_PLAYER_PLAYING( sub_576() ))
    {
        SET_PLAYER_CONTROL( sub_576(), 1 );
    }
    sub_632();
    sub_13644( "FINALE INTRO CUTSCENE: should never reach ENDSCRIPT" );
    return;
}

void sub_220(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

void sub_429()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_576()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_632()
{
    sub_641();
    sub_13558();
    return;
}

void sub_641()
{
    sub_650();
    return;
}

void sub_650()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_668();
    sub_727( iVar2, iVar3, iVar4 );
    return;
}

void sub_668()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_727(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    sub_758( iVar5, uParam0, uParam1, uParam2, "Friend_1" );
    return;
}

void sub_758(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    char[64] cVar9;
    int iVar25;
    int iVar26;
    boolean bVar27;
    unknown uVar28;
    unknown uVar29;
    int iVar30;
    boolean bVar31;

    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U13391[iParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_854( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_854( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U13391[iParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_854( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_854( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_854( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_854( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_1431( iParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U10981[iParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U13391[iParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        g_U10981[iParam0]._fU144._fU8++;
        if ((NOT g_U10981[iParam0]._fU144._fU12) AND (g_U10981[iParam0]._fU144._fU8 >= g_U10981[iParam0]._fU144._fU4))
        {
            iVar26 = 0;
            GET_GAME_TIMER( ref iVar26 );
            g_U10981[iParam0]._fU144._fU16 = iVar26 + 60000;
        }
        if (g_U10981[iParam0]._fU144._fU8 == 1)
        {
            if (iParam0 == 3)
            {
                sub_1849( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_1849( 0, 4 );
            }
        }
    }
    if (NOT (sub_1938( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_576(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_576() );
    }
    sub_11170();
    bVar27 = true;
    uVar28 = sub_1431( iParam0, iVar7 );
    uVar29 = sub_11812( iParam0 );
    if (bParam1)
    {
        iVar30 = g_U13391[iParam0]._fU0._fU56;
        if ((iVar30 == 5) || (iVar30 == 6))
        {
            bVar27 = false;
        }
        if (NOT g_U0)
        {
            bVar31 = true;
            if (IS_BIT_SET( g_U26758[uVar28]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U9921 );
                sub_12343( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_12773();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_12858( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_12915( iParam0 );
                sub_13050( 0 );
                sub_13131( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_13236();
        }
    }
    if (bParam2)
    {
        sub_12773();
        sub_13324();
        sub_13050( 0 );
    }
    if (bParam3)
    {
        sub_12773();
        sub_13364();
        sub_13050( 0 );
        sub_13131( uVar29, 0 );
    }
    sub_13415();
    return;
}

void sub_854(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_1431(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_1505( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U32640[iParam0]._fU0;
    iVar5 = g_U32640[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U26758[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

void sub_1505(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1849(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_1938(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_2146( uParam1 );
        break;
        case 1:
        bVar8 = sub_4224( uParam1 );
        break;
        case 2:
        bVar8 = sub_4450( uParam1 );
        break;
        case 3:
        bVar8 = sub_4600( uParam1 );
        break;
        case 4:
        bVar8 = sub_4878( uParam1 );
        break;
        case 5:
        bVar8 = sub_5181( uParam1 );
        break;
        case 6:
        bVar8 = sub_5380( uParam1 );
        break;
        case 7:
        bVar8 = sub_5606( uParam1 );
        break;
        case 8:
        bVar8 = sub_5841( uParam1 );
        break;
        case 9:
        bVar8 = sub_6216( uParam1 );
        break;
        case 10:
        bVar8 = sub_6463( uParam1 );
        break;
        case 11:
        bVar8 = sub_6602( uParam1 );
        break;
        case 12:
        bVar8 = sub_6901( uParam1 );
        break;
        case 13:
        bVar8 = sub_7129( uParam1 );
        break;
        case 14:
        bVar8 = sub_7416( uParam1 );
        break;
        case 15:
        bVar8 = sub_7698( uParam1 );
        break;
        case 16:
        bVar8 = sub_7980( uParam1 );
        break;
        case 17:
        bVar8 = sub_8181( uParam1 );
        break;
        case 18:
        bVar8 = sub_8254( uParam1 );
        break;
        case 19:
        bVar8 = sub_8468( uParam1 );
        break;
        case 20:
        bVar8 = sub_8721( uParam1 );
        break;
        case 21:
        bVar8 = sub_8968( uParam1 );
        break;
        case 22:
        bVar8 = sub_9169( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_3829( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_1431( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_9492( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_2146(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2425( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_2425( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_2425( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_2425( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_2425( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_2425( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_2425( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_2425( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_2425( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_2425( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_2425( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_2425( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_2425( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_2425( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_2425( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_2425( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_2425( iVar3, 0, 3, 1, 0, 0 );
        break;
        case 3:
        case 30:
        case 14:
        case 37:
        case 18:
        case 19:
        case 17:
        case 21: break;
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        sub_2425( iVar3, 0, sub_3707(), sub_3973(), 0, 0 );
        break;
        default:
        sub_4132( "Friend 1", 1 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4132( "Friend 1", 0 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_2425(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_2436( uParam1 );
    sub_2610( uParam0, 0, uParam2 );
    sub_2610( uParam0, 1, uParam3 );
    sub_2610( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_668();
    return;
}

void sub_2436(unknown uParam0)
{
    ADD_SCORE( sub_576(), uParam0 );
    sub_2461( uParam0 );
    return;
}

void sub_2461(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1505( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_2610(unknown uParam0, int iParam1, int iParam2)
{
    g_U10981[uParam0]._fU40[iParam1] += iParam2;
    if (g_U10981[uParam0]._fU40[iParam1] < 0)
    {
        g_U10981[uParam0]._fU40[iParam1] = 0;
    }
    if (g_U10981[uParam0]._fU40[iParam1] > 100)
    {
        g_U10981[uParam0]._fU40[iParam1] = 100;
    }
    if (iParam1 == 1)
    {
        sub_2767( uParam0 );
    }
    return;
}

void sub_2767(unknown uParam0)
{
    if (g_U0)
    {
        return;
    }
    if (IS_BIT_SET( ProtectedGet(g_U64791), 11 ))
    {
        return;
    }
    if (g_U10981[uParam0]._fU40[1] < 90)
    {
        return;
    }
    switch (uParam0)
    {
        case 0:
        SET_BIT( 1, 6 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 3:
        SET_BIT( 1, 7 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 7:
        SET_BIT( 1, 8 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 8:
        SET_BIT( 1, 9 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 13:
        SET_BIT( 1, 10 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
    }
    if (((((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 1 ))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 2 )))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 3 )))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 4 )))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 5 ))))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 7 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 9 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 10 )))
    {
        return;
    }
    if (g_U10981[0]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 6 )))
        {
            return;
        }
    }
    if (g_U10981[7]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 8 )))
        {
            return;
        }
    }
    SET_BIT( 1, 11 );
    AWARD_ACHIEVEMENT( 35 );
    return;
    break;
    2;
    1;
    ref g_U64791;
    1;
    ref g_U64791;
    break;
}

int sub_3707()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_3829( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_3829(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_3973()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_3829( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_4132(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_4224(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2425( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2425( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_2425( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_2425( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_4132( "Contact 2", 1 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4132( "Contact 2", 0 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_4450(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_2425( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_4132( "Girl 3", 1 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4132( "Girl 3", 0 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_4600(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2425( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_2425( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_2425( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_2425( iVar3, 0, sub_3707(), sub_3973(), 0, 0 );
        break;
        default:
        sub_4132( "Friend 4", 1 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4132( "Friend 4", 0 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_4878(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2425( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2425( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_2425( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_2425( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_2425( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_2425( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_2425( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_4132( "Contact 5", 1 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4132( "Contact 5", 0 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_5181(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2425( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2425( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_2425( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_4132( "Contact 7", 1 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4132( "Contact 7", 0 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_5380(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2425( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2425( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_2425( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_2425( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_4132( "Contact 7b", 1 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4132( "Contact 7b", 0 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_5606(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2425( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_2425( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_2425( iVar3, 0, sub_3707(), sub_3973(), 0, 0 );
        break;
        default:
        sub_4132( "Friend 8", 1 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4132( "Friend 8", 0 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_5841(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;

    iVar3 = 8;
    bVar4 = false;
    iVar5 = 500;
    switch (uParam0)
    {
        case 0:
        sub_2425( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_2425( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_2425( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_2425( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_2425( iVar3, iVar5, 3, 1, 0, 0 );
        INCREMENT_INT_STAT_NO_MESSAGE( 109, iVar5 );
        break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        sub_2425( iVar3, 0, sub_3707(), sub_3973(), 0, 0 );
        break;
        default:
        sub_4132( "Friend 9", 1 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4132( "Friend 9", 0 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6216(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 9;
    iVar4 = 7;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_2425( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2425( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_2425( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_2425( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_4132( "Contact 10", 1 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_4132( "Contact 10", 0 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6463(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2425( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_4132( "Girl 11", 1 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4132( "Girl 11", 0 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6602(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2425( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_2425( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_2425( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_2425( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_2425( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_2425( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_4132( "Contact 12", 1 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4132( "Contact 12", 0 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6901(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2425( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2425( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_2425( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_2425( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_4132( "Contact 13", 1 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4132( "Contact 13", 0 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7129(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2425( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_2425( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_2425( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_2425( iVar3, 0, sub_3707(), sub_3973(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_4132( "Friend 15", 1 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4132( "Friend 15", 0 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7416(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2425( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2425( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_2425( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_2425( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_2425( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_2425( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_4132( "Contact 16", 1 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4132( "Contact 16", 0 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7698(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2425( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2425( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_2425( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_2425( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_2425( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_4132( "Contact 18", 1 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4132( "Contact 18", 0 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7980(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2425( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2425( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_2425( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_4132( "Contact 19", 1 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4132( "Contact 19", 0 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8181(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_4132( "Girl 20", 0 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8254(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2425( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2425( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_2425( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_4132( "Contact 21", 1 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4132( "Contact 21", 0 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8468(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2425( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_2425( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_2425( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_2425( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2425( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_4132( "Contact 22", 1 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4132( "Contact 22", 0 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8721(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_2425( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_2425( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_2425( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_2425( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_4132( "Contact 24", 1 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4132( "Contact 24", 0 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8968(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2425( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2425( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_2425( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_4132( "Contact 25", 1 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4132( "Contact 25", 0 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9169(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 22;
    iVar4 = 8;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_2425( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_4132( "Girl 26", 1 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_4132( "Girl 26", 0 );
        sub_2425( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_9492(int iParam0, int iParam1)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (iParam1 == -1)
    {
        return;
    }
    if (sub_9540( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_10271( iParam1 );
    }
    return;
}

int sub_9540(int iParam0, int iParam1)
{
    int iVar4;
    boolean bVar5;
    int iVar6;

    if (g_U0)
    {
        return 0;
    }
    if (iParam0 == -1)
    {
        return 0;
    }
    if (iParam1 == -1)
    {
        return 0;
    }
    iVar4 = g_U13391[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U26758[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U26758[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_9680( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_9680(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_9862( 0 );
    return;
}

void sub_9862(boolean bParam0)
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
        sub_10117();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_10117()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_10271(int iParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (g_U13334[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U13334[iParam0]._fU4 == g_U13334[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U13334[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U13334[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_10604( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_10604( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_10604( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_10604( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_10604( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_10604( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_10604( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_10604( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_10604( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_10604( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_10604( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_10604( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_10604( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_10604( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_10604( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_10604( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_10604( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_10604( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_10604( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_10604(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_11170()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_11208( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_11208( 1, g_U569[I] )) != 0)
            {
                sub_11494( I );
            }
        }
    }
    if (NOT sub_11660())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    if (g_U91._fU0 == 1014)
    {
        g_U91._fU92 = 1;
    }
    return;
}

int sub_11208(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_11494(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_11579( g_U569 - 1 );
    return;
}

void sub_11579(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_11660()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_11208( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_11812(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 1: return 1;
        case 2: return 2;
        case 3: return 3;
        case 4: return 4;
        case 5: return 5;
        case 6: return 6;
        case 7: return 7;
        case 8: return 8;
        case 9: return 9;
        case 10: return 10;
        case 11: return 11;
        case 12: return 12;
        case 13: return 13;
        case 14: return 14;
        case 15: return 15;
        case 16: return 16;
        case 17: return 17;
        case 18: return 18;
        case 19: return 19;
        case 20: return 22;
        case 21: return 20;
        case 22: return 21;
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_1505( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_12343(unknown uParam0, unknown uParam1)
{
    sub_12362( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_12362(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;

    switch (uParam0)
    {
        case 0:
        PLAYSTATS_INT( "SPRUNK_BOUGHT", uParam1 );
        break;
        case 1:
        PLAYSTATS_INT( "HOTDOG_BOUGHT", uParam1 );
        break;
        case 2:
        PLAYSTATS_INT( "NUTS_BOUGHT", uParam1 );
        break;
        case 3:
        PLAYSTATS_INT( "BURGERS_BOUGHT", uParam1 );
        break;
        case 7:
        PLAYSTATS_INT( "DONATE_BEGGAR", uParam1 );
        break;
        case 8:
        PLAYSTATS_INT( "DONATE_BUSKER", uParam1 );
        break;
        case 4:
        PLAYSTATS_INT( "BSHOT_BOUGHT", uParam1 );
        break;
        case 5:
        PLAYSTATS_INT( "CBELL_BOUGHT", uParam1 );
        break;
        case 6:
        PLAYSTATS_INT( "CAFE_BOUGHT", uParam1 );
        break;
        case 9: break;
    }
    return;
}

void sub_12773()
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

int sub_12858(int iParam0, int iParam1)
{
    if (iParam0 == 0)
    {
        if (iParam1 == 20)
        {
            return 1;
        }
    }
    return 0;
}

void sub_12915(unknown uParam0)
{
    sub_12924();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_12924()
{
    int I;

    I = 0;
    for ( I = 0; I < 28; I++ )
    {
        if (g_U10981[I]._fU144._fU36)
        {
            g_U10981[I]._fU28 = 1;
        }
        g_U10981[I]._fU144._fU36 = 0;
    }
    return;
}

void sub_13050(unknown uParam0)
{
    if (g_U9385)
    {
        g_U9385 = 0;
        return;
    }
    g_U9380._fU0 = 1;
    g_U9380._fU4 = uParam0;
    g_U9380._fU8 = 0;
    g_U9380._fU12 = 0;
    g_U9380._fU16 = 0;
    return;
}

void sub_13131(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 57))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U26671[iParam0] = iVar4;
    if (bParam1)
    {
        g_U26671[iParam0] += 30000;
    }
    return;
}

void sub_13236()
{
    sub_13245();
    return;
}

void sub_13245()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_13324()
{
    sub_13245();
    return;
}

void sub_13364()
{
    sub_13245();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_13415()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_13437();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_13437()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

void sub_13558()
{
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_13644(unknown uParam0)
{
    while (true)
    {
        WAIT( 0 );
        PRINTSTRING( "ERROR: FinaleINTROCUT (KEITHM): " );
        PRINTSTRING( uParam0 );
        PRINTNL();
    }
    return;
}
