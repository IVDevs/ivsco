void main()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    int iVar9;

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
    l_U484 = 90.00000000;
    l_U487 = 418536135;
    l_U488 = 1;
    l_U489 = 0;
    l_U490 = 0;
    l_U491 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    l_U481 = {-485.02990000, 804.77520000, 9.00000000};
    l_U484 = 90.00000000;
    iVar2 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar2 );
    l_U488 = 1;
    if (iVar2 < 50)
    {
        l_U488 = 0;
    }
    l_U489 = 0;
    l_U490 = 0;
    l_U491 = 0;
    sub_212();
    while (NOT sub_314())
    {
        sub_432();
        WAIT( 1000 );
    }
    iVar9 = 1;
    sub_1084( ref uVar3, iVar9 );
    sub_1217( "MF1AUD" );
    sub_1344( 0, sub_344(), "NIKO", 0 );
    sub_1506( "MF2_CAR", ref uVar3, 5, 1 );
    sub_2473();
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U486 );
    REMOVE_BLIP( l_U485 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_212()
{
    if (DOES_BLIP_EXIST( l_U485 ))
    {
        return;
    }
    ADD_BLIP_FOR_CONTACT( l_U481._fU0, l_U481._fU4, l_U481._fU8, ref l_U485 );
    CHANGE_BLIP_SPRITE( l_U485, g_U26415[18] );
    CHANGE_BLIP_DISPLAY( l_U485, 2 );
    return;
}

void sub_314()
{
    if (IS_CAR_DEAD( l_U486 ))
    {
        return 0;
    }
    if (IS_CHAR_DEAD( sub_344() ))
    {
        return 0;
    }
    return IS_CHAR_SITTING_IN_CAR( sub_344(), l_U486 );
}

void sub_344()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_432()
{
    boolean bVar2;

    if (IS_CHAR_DEAD( sub_344() ))
    {
        return;
    }
    bVar2 = false;
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_344(), l_U481._fU0, l_U481._fU4, l_U481._fU8, 100.00000000, 100.00000000, 5.00000000, 0 ))
    {
        bVar2 = true;
    }
    if (l_U489)
    {
        sub_533( bVar2 );
        return;
    }
    if (bVar2)
    {
        if (g_U10978)
        {
            return;
        }
        if (NOT (DOES_VEHICLE_EXIST( l_U486 )))
        {
            if (NOT (HAS_MODEL_LOADED( l_U487 )))
            {
                REQUEST_MODEL( l_U487 );
                return;
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U487 );
            CREATE_CAR( l_U487, l_U481._fU0, l_U481._fU4, l_U481._fU8, ref l_U486, 1 );
            SET_CAR_HEADING( l_U486, l_U484 );
            SET_CAR_ON_GROUND_PROPERLY( l_U486 );
            SET_HAS_BEEN_OWNED_BY_PLAYER( l_U486, 1 );
            SET_NEEDS_TO_BE_HOTWIRED( l_U486, 0 );
            if (l_U488)
            {
                CHANGE_CAR_COLOUR( l_U486, 131, 0 );
                SET_EXTRA_CAR_COLOURS( l_U486, 89, 0 );
            }
            else
            {
                CHANGE_CAR_COLOUR( l_U486, 132, 0 );
                SET_EXTRA_CAR_COLOURS( l_U486, 126, 0 );
            }
            return;
        }
        if (NOT (IS_VEH_DRIVEABLE( l_U486 )))
        {
            l_U489 = 1;
            l_U490 = 0;
            l_U491 = 0;
            sub_965();
            return;
        }
        return;
    }
    if (NOT (DOES_VEHICLE_EXIST( l_U486 )))
    {
        return;
    }
    DELETE_CAR( ref l_U486 );
    return;
}

void sub_533(boolean bParam0)
{
    int iVar3;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (NOT l_U490)
    {
        if (bParam0)
        {
            return;
        }
        l_U490 = 1;
        l_U491 = iVar3 + 300000;
        return;
    }
    if (NOT (iVar3 > l_U491))
    {
        return;
    }
    if (bParam0)
    {
        l_U491 = iVar3 + 60000;
        return;
    }
    l_U489 = 0;
    l_U490 = 0;
    l_U491 = 0;
    sub_212();
    return;
}

void sub_965()
{
    if (NOT (DOES_BLIP_EXIST( l_U485 )))
    {
        return;
    }
    REMOVE_BLIP( l_U485 );
    return;
}

void sub_1084(int iParam0, unknown uParam1)
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

void sub_1217(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_1236();
    return;
}

void sub_1236()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U181._fU16[I]._fU0 = nil;
        StrCopy( ref l_U181._fU16[I]._fU4, "", 32 );
        l_U181._fU344[I] = 0;
    }
    return;
}

void sub_1344(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_1428( "\n PED NUMBER ", uParam0 );
    sub_1468( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_1428(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_1468(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_1506(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_1529( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_1529(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_1583( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_1583(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_1605( iParam1 )))
    {
        return 0;
    }
    l_U181._fU384 = 0;
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
    sub_2297( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_1605(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_1682( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_1682( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_1682( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_1682(unknown uParam0)
{
    return;
}

void sub_2297(int iParam0, int iParam1)
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

void sub_2473()
{
    sub_2482();
    return;
}

void sub_2482()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_2500();
    sub_2559( iVar2, iVar3, iVar4 );
    return;
}

void sub_2500()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_2559(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 18;
    sub_2592( iVar5, uParam0, uParam1, uParam2, "Contact_21" );
    return;
}

void sub_2592(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_2688( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_2688( ref cVar9 );
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
            sub_2688( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_2688( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_2688( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_2688( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_3265( iParam0, iVar7 );;;
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
                sub_3683( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_3683( 0, 4 );
            }
        }
    }
    if (NOT (sub_3772( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_4279(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_4279() );
    }
    sub_13030();
    bVar27 = true;
    uVar28 = sub_3265( iParam0, iVar7 );
    uVar29 = sub_13672( iParam0 );
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
                sub_14203( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_14633();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_14718( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_14775( iParam0 );
                sub_14910( 0 );
                sub_14991( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_15096();
        }
    }
    if (bParam2)
    {
        sub_14633();
        sub_15184();
        sub_14910( 0 );
    }
    if (bParam3)
    {
        sub_14633();
        sub_15224();
        sub_14910( 0 );
        sub_14991( uVar29, 0 );
    }
    sub_15275();
    return;
}

void sub_2688(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_3265(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_3339( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_3339(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_3683(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_3772(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_3980( uParam1 );
        break;
        case 1:
        bVar8 = sub_6084( uParam1 );
        break;
        case 2:
        bVar8 = sub_6310( uParam1 );
        break;
        case 3:
        bVar8 = sub_6460( uParam1 );
        break;
        case 4:
        bVar8 = sub_6738( uParam1 );
        break;
        case 5:
        bVar8 = sub_7041( uParam1 );
        break;
        case 6:
        bVar8 = sub_7240( uParam1 );
        break;
        case 7:
        bVar8 = sub_7466( uParam1 );
        break;
        case 8:
        bVar8 = sub_7701( uParam1 );
        break;
        case 9:
        bVar8 = sub_8076( uParam1 );
        break;
        case 10:
        bVar8 = sub_8323( uParam1 );
        break;
        case 11:
        bVar8 = sub_8462( uParam1 );
        break;
        case 12:
        bVar8 = sub_8761( uParam1 );
        break;
        case 13:
        bVar8 = sub_8989( uParam1 );
        break;
        case 14:
        bVar8 = sub_9276( uParam1 );
        break;
        case 15:
        bVar8 = sub_9558( uParam1 );
        break;
        case 16:
        bVar8 = sub_9840( uParam1 );
        break;
        case 17:
        bVar8 = sub_10041( uParam1 );
        break;
        case 18:
        bVar8 = sub_10114( uParam1 );
        break;
        case 19:
        bVar8 = sub_10328( uParam1 );
        break;
        case 20:
        bVar8 = sub_10581( uParam1 );
        break;
        case 21:
        bVar8 = sub_10828( uParam1 );
        break;
        case 22:
        bVar8 = sub_11029( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_5689( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_3265( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_11352( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_3980(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4259( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_4259( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_4259( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_4259( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_4259( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_4259( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_4259( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_4259( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_4259( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_4259( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_4259( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_4259( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_4259( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_4259( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_4259( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_4259( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_4259( iVar3, 0, 3, 1, 0, 0 );
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
        sub_4259( iVar3, 0, sub_5567(), sub_5833(), 0, 0 );
        break;
        default:
        sub_5992( "Friend 1", 1 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5992( "Friend 1", 0 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_4259(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_4270( uParam1 );
    sub_4470( uParam0, 0, uParam2 );
    sub_4470( uParam0, 1, uParam3 );
    sub_4470( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_2500();
    return;
}

void sub_4270(unknown uParam0)
{
    ADD_SCORE( sub_4279(), uParam0 );
    sub_4321( uParam0 );
    return;
}

void sub_4279()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_4321(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_3339( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_4470(unknown uParam0, int iParam1, int iParam2)
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
        sub_4627( uParam0 );
    }
    return;
}

void sub_4627(unknown uParam0)
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

int sub_5567()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_5689( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_5689(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_5833()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_5689( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_5992(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_6084(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4259( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_4259( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_4259( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_4259( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_5992( "Contact 2", 1 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5992( "Contact 2", 0 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6310(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_4259( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_5992( "Girl 3", 1 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5992( "Girl 3", 0 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6460(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4259( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_4259( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_4259( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_4259( iVar3, 0, sub_5567(), sub_5833(), 0, 0 );
        break;
        default:
        sub_5992( "Friend 4", 1 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5992( "Friend 4", 0 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6738(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4259( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_4259( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_4259( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_4259( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_4259( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_4259( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_4259( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_5992( "Contact 5", 1 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5992( "Contact 5", 0 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7041(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4259( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_4259( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_4259( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_5992( "Contact 7", 1 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5992( "Contact 7", 0 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7240(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4259( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_4259( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_4259( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_4259( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_5992( "Contact 7b", 1 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5992( "Contact 7b", 0 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7466(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4259( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_4259( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_4259( iVar3, 0, sub_5567(), sub_5833(), 0, 0 );
        break;
        default:
        sub_5992( "Friend 8", 1 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5992( "Friend 8", 0 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7701(unknown uParam0)
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
        sub_4259( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_4259( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_4259( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_4259( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_4259( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_4259( iVar3, 0, sub_5567(), sub_5833(), 0, 0 );
        break;
        default:
        sub_5992( "Friend 9", 1 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5992( "Friend 9", 0 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8076(unknown uParam0)
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
        sub_4259( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_4259( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_4259( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_4259( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_5992( "Contact 10", 1 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_5992( "Contact 10", 0 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8323(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4259( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_5992( "Girl 11", 1 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5992( "Girl 11", 0 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8462(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4259( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_4259( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_4259( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_4259( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_4259( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_4259( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_5992( "Contact 12", 1 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5992( "Contact 12", 0 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8761(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4259( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_4259( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_4259( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_4259( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_5992( "Contact 13", 1 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5992( "Contact 13", 0 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8989(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4259( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_4259( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_4259( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_4259( iVar3, 0, sub_5567(), sub_5833(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_5992( "Friend 15", 1 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5992( "Friend 15", 0 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9276(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4259( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_4259( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_4259( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_4259( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_4259( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_4259( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_5992( "Contact 16", 1 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5992( "Contact 16", 0 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9558(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4259( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_4259( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_4259( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_4259( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_4259( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_5992( "Contact 18", 1 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5992( "Contact 18", 0 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9840(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4259( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_4259( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_4259( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_5992( "Contact 19", 1 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5992( "Contact 19", 0 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10041(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_5992( "Girl 20", 0 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10114(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4259( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_4259( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_4259( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_5992( "Contact 21", 1 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5992( "Contact 21", 0 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10328(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4259( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_4259( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_4259( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_4259( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_4259( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_5992( "Contact 22", 1 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5992( "Contact 22", 0 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10581(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_4259( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_4259( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_4259( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_4259( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_5992( "Contact 24", 1 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5992( "Contact 24", 0 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10828(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4259( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_4259( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_4259( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_5992( "Contact 25", 1 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5992( "Contact 25", 0 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11029(unknown uParam0)
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
        sub_4259( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_5992( "Girl 26", 1 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_5992( "Girl 26", 0 );
        sub_4259( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_11352(int iParam0, int iParam1)
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
    if (sub_11400( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_12131( iParam1 );
    }
    return;
}

int sub_11400(int iParam0, int iParam1)
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
            sub_11540( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_11540(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_11722( 0 );
    return;
}

void sub_11722(boolean bParam0)
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
        sub_11977();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_11977()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_12131(int iParam0)
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
        sub_12464( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_12464( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_12464( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_12464( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_12464( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_12464( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_12464( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_12464( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_12464( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_12464( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_12464( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_12464( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_12464( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_12464( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_12464( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_12464( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_12464( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_12464( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_12464( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_12464(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_13030()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_13068( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_13068( 1, g_U569[I] )) != 0)
            {
                sub_13354( I );
            }
        }
    }
    if (NOT sub_13520())
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

int sub_13068(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_13354(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_13439( g_U569 - 1 );
    return;
}

void sub_13439(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_13520()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_13068( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_13672(unknown uParam0)
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
    sub_3339( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_14203(unknown uParam0, unknown uParam1)
{
    sub_14222( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_14222(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_14633()
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

int sub_14718(int iParam0, int iParam1)
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

void sub_14775(unknown uParam0)
{
    sub_14784();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_14784()
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

void sub_14910(unknown uParam0)
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

void sub_14991(int iParam0, boolean bParam1)
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

void sub_15096()
{
    sub_15105();
    return;
}

void sub_15105()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_15184()
{
    sub_15105();
    return;
}

void sub_15224()
{
    sub_15105();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_15275()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_15297();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_15297()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}
