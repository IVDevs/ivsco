void main()
{
    int I;
    unknown uVar3;

    l_U177 = 0;
    l_U197 = 0;
    l_U198 = 31;
    l_U199 = 0;
    l_U200 = 0;
    l_U201 = 0;
    l_U1322 = 1;
    l_U1323 = 0;
    l_U1325 = 0;
    l_U1326 = 0;
    l_U1328 = 1;
    l_U1329 = -1;
    l_U1331 = -109247258;
    l_U1335 = "C_RUS_18x12_Room02";
    l_U1339 = {-1.60000000, -6.00000000, 1.40000000};
    l_U1342 = {2.00000000, 2.50000000, 1.50000000};
    l_U1345 = {893.67100000, -442.88300000, 16.76020000};
    l_U1348 = {-5.50000000, 0.50000000, 0.00000000};
    l_U1351 = {6.50000000, 5.75000000, 2.50000000};
    StrCopy( ref l_U1354, "blank", 16 );
    StrCopy( ref l_U1358, "blank", 16 );
    l_U1378 = 0;
    l_U1385 = 4.00000000;
    l_U1394 = -0.40000000;
    l_U1404 = -1;
    l_U1405 = 0;
    l_U1406 = 0;
    l_U1407 = 0;
    l_U1408 = 0;
    l_U1409 = 0;
    l_U1410 = 0;
    l_U1411 = 0;
    l_U1412 = 0;
    l_U1418 = 0;
    l_U1419 = 0;
    l_U1389 = {l_U1423._fU4[0]};
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_376();
    }
    while (l_U1322)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            switch (l_U199)
            {
                case 0:
                GET_INTERIOR_AT_COORDS( l_U1389._fU0, l_U1389._fU4, l_U1389._fU8, ref l_U1334 );
                if (l_U1334 != nil)
                {
                    sub_2774();
                    sub_10278();
                    l_U199 = 1;
                }
                break;
                case 1:
                if (NOT g_U8353)
                {
                    if (g_U15654[57])
                    {
                        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 377940039, 892.30000000, -444.40000000, 16.10000000, 0, 0.00000000 );
                        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -532546678, 892.30000000, -441.40000000, 16.10000000, 0, 0.00000000 );
                        l_U199 = 5;
                    }
                    else
                    {
                        l_U199 = 2;
                    }
                }
                else
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 377940039, 892.30000000, -444.40000000, 16.10000000, 0, 0.00000000 );
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -532546678, 892.30000000, -441.40000000, 16.10000000, 0, 0.00000000 );
                    l_U199 = 5;
                }
                break;
                case 2:
                if (l_U1334 == nil)
                {
                    GET_INTERIOR_AT_COORDS( l_U1389._fU0, l_U1389._fU4, l_U1389._fU8, ref l_U1334 );
                }
                else if ((LOCATE_CHAR_ON_FOOT_3D( sub_516(), l_U1345._fU0, l_U1345._fU4, l_U1345._fU8, 1.60000000, 1.60000000, 2.00000000, 0 )) || ((LOCATE_CHAR_ON_FOOT_3D( sub_516(), l_U1389._fU0 + l_U1348._fU0, l_U1389._fU4 + l_U1348._fU4, l_U1389._fU8 + l_U1348._fU8, l_U1351._fU0, l_U1351._fU4, l_U1351._fU8, 0 )) AND (sub_11537( sub_516(), l_U1335 ))))
                {
                    if (sub_11609( l_U1335, l_U1389 ))
                    {
                        if (NOT sub_11847())
                        {
                            if ((g_U15654[57]) || (g_U8353))
                            {
                                l_U199 = 5;
                            }
                            else
                            {
                                sub_11933();
                            }
                        }
                        else if (g_U64723)
                        {
                            l_U199 = 4;
                        }
                        else
                        {
                            sub_11933();
                        }
                    }
                }
                break;
                case 4:
                if (sub_16036())
                {
                    g_U8353 = 1;
                    l_U199 = 1;
                }
                break;
                case 5:
                l_U1422 = 0;
                if (sub_11609( l_U1335, l_U1389 ))
                {
                    if (sub_11933())
                    {
                        for ( l_U1384 = 0; l_U1384 < 31; l_U1384++ )
                        {
                            if ((LOCATE_CHAR_ON_FOOT_3D( sub_516(), l_U283[l_U1384]._fU8._fU0, l_U283[l_U1384]._fU8._fU4, l_U283[l_U1384]._fU8._fU8, l_U283[l_U1384]._fU32._fU0, l_U283[l_U1384]._fU32._fU4, l_U283[l_U1384]._fU32._fU8, 0 )) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHOP_H_EXIT" ))))
                            {
                                if (NOT (sub_19576( ref g_U8380, ProtectedGet(l_U1327), ref l_U1329 )))
                                {
                                    switch (l_U283[l_U1384]._fU72)
                                    {
                                        case 4:
                                        switch (l_U1384)
                                        {
                                            case 0:
                                            if (2)
                                            {
                                                sub_29767();
                                                l_U198 = l_U1384;
                                                l_U199 = 8;
                                            }
                                            break;
                                            break;
                                            1;
                                            ref l_U1327;
                                            sub_20038( l_U283[l_U1384]._fU44, l_U283[l_U1384]._fU56, l_U283[l_U1384]._fU68, ref l_U1313, ProtectedGet(l_U283[l_U1384]._fU100), l_U283[l_U1384]._fU4, l_U1334, ref l_U1324, l_U1368, ref l_U1369, ref l_U1383, ref l_U1327, 1, 1, l_U283[l_U1384]._fU104, l_U283[l_U1384]._fU116, l_U283[l_U1384]._fU128, 0, ref l_U1328 );
                                            break;
                                            case 1:
                                            case 2:
                                            case 3:
                                            if (2)
                                            {
                                                sub_29767();
                                                l_U198 = l_U1384;
                                                l_U199 = 8;
                                            }
                                            break;
                                            break;
                                            1;
                                            ref l_U1327;
                                            sub_20038( l_U283[l_U1384]._fU44, l_U283[l_U1384]._fU56, l_U283[l_U1384]._fU68, ref l_U1317, ProtectedGet(l_U283[l_U1384]._fU100), l_U283[l_U1384]._fU4, l_U1334, ref l_U1324, l_U1368, ref l_U1369, ref l_U1383, ref l_U1327, 1, 1, l_U283[l_U1384]._fU104, l_U283[l_U1384]._fU116, l_U283[l_U1384]._fU128, 0, ref l_U1328 );
                                            break;
                                            default: PRINTSTRING( "baddness... " );
                                        }
                                        break;
                                        case 3:
                                        if (2)
                                        {
                                            sub_29767();
                                            l_U198 = l_U1384;
                                            l_U199 = 7;
                                        }
                                        break;
                                        break;
                                        1;
                                        ref l_U1327;
                                        sub_30344( l_U283[l_U1384]._fU44, l_U283[l_U1384]._fU56, l_U283[l_U1384]._fU68, l_U283[l_U1384]._fU80, ProtectedGet(l_U283[l_U1384]._fU100), l_U283[l_U1384]._fU4, l_U1334, ref l_U1324, l_U1368, ref l_U1369, ref l_U1383, ref l_U1327, 1, 1, l_U1358, l_U283[l_U1384]._fU104, l_U283[l_U1384]._fU116, l_U283[l_U1384]._fU128, 0, ref l_U1328 );
                                        break;
                                        case 2:
                                        if (2)
                                        {
                                            sub_29767();
                                            l_U198 = l_U1384;
                                            l_U199 = 6;
                                        }
                                        break;
                                        break;
                                        1;
                                        ref l_U1327;
                                        sub_31410( l_U283[l_U1384]._fU44, l_U283[l_U1384]._fU56, l_U283[l_U1384]._fU68, l_U283[l_U1384]._fU76, ProtectedGet(l_U283[l_U1384]._fU100), l_U283[l_U1384]._fU4, l_U1334, ref l_U1324, l_U1368, ref l_U1369, ref l_U1383, ref l_U1327, 1, 1, l_U1358, l_U283[l_U1384]._fU104, l_U283[l_U1384]._fU116, l_U283[l_U1384]._fU128, 0, ref l_U1328 );
                                        break;
                                        case 0:
                                        if (sub_33586( l_U283[l_U1384]._fU44, l_U283[l_U1384]._fU56, l_U283[l_U1384]._fU68, ProtectedGet(l_U283[l_U1384]._fU100), l_U283[l_U1384]._fU4, l_U1334, ref l_U1383, l_U283[l_U1384]._fU104, l_U283[l_U1384]._fU116, l_U283[l_U1384]._fU128, ref l_U1328 ))
                                        {
                                            sub_29767();
                                            l_U198 = l_U1384;
                                            l_U199 = 9;
                                        }
                                        break;
                                        case 1:
                                        if (sub_35746( l_U283[l_U1384]._fU44, l_U283[l_U1384]._fU56, l_U283[l_U1384]._fU68, ProtectedGet(l_U283[l_U1384]._fU100), l_U283[l_U1384]._fU4, l_U1334, ref l_U1383, l_U283[l_U1384]._fU104, l_U283[l_U1384]._fU116, l_U283[l_U1384]._fU128, ref l_U1328 ))
                                        {
                                            sub_29767();
                                            l_U198 = l_U1384;
                                            l_U199 = 10;
                                        }
                                        break;
                                        default:
                                        sub_10320( "  ** clothes_info[" );
                                        sub_10563( l_U1384 );
                                        sub_10320( "]." );
                                        SCRIPT_ASSERT( "ped_comp in binco_brook_s.sc not found!" );
                                        sub_21259();
                                    }
                                }
                                l_U1422 = 1;
                            }
                        }
                    }
                    else if (IS_HELP_MESSAGE_BEING_DISPLAYED())
                    {
                        for ( I = 0; I < 31; I++ )
                        {
                            if (NOT (IS_STRING_NULL( l_U283[I]._fU4 )))
                            {
                                if (((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", l_U283[I]._fU4 )) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", l_U283[I]._fU4 ))) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_R3", l_U283[I]._fU4 )))
                                {
                                    CLEAR_HELP();
                                }
                            }
                            sub_749( 2, "BLANK" );
                        }
                    }
                    if (NOT l_U1422)
                    {
                        if ((((((IS_HELP_MESSAGE_BEING_DISPLAYED()) AND (NOT (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( ref g_U8380, ProtectedGet(l_U1327) )))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHOP_CS_01" )))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHOP_CS_02" )))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHOP_CS_05" )))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHOP_H_EXIT" ))))
                        {
                            for ( I = 0; I < 31; I++ )
                            {
                                if (NOT (IS_STRING_NULL( l_U283[I]._fU4 )))
                                {
                                    if (((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", l_U283[I]._fU4 )) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", l_U283[I]._fU4 ))) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_R3", l_U283[I]._fU4 )))
                                    {
                                        CLEAR_HELP();
                                    }
                                }
                                sub_749( 2, "BLANK" );
                            }
                        }
                        sub_749( 2, uVar3 );
                        l_U1328 = 1;
                    }
                    if ((NOT g_U8354) AND (g_U15654[57]))
                    {
                        if (NOT (sub_11537( sub_516(), l_U1335 )))
                        {
                            PRINT_HELP( "SHOP_H_EXIT" );
                            g_U8354 = 1;
                        }
                    }
                }
                break;
                case 6:
                if (2)
                {
                    l_U199 = 5;
                }
                break;
                break;
                1;
                ref l_U1327;
                sub_37968( l_U283[l_U198], l_U1379, ref l_U1327, 1, 1, ref l_U1368, ref l_U1369, 0, l_U1383, l_U1362, l_U1330 );
                break;
                case 7:
                if (2)
                {
                    l_U199 = 5;
                }
                break;
                break;
                1;
                ref l_U1327;
                sub_42128( l_U283[l_U198], l_U1379, ref l_U1327, 1, 1, ref l_U1368, ref l_U1369, 0, l_U1383, l_U1362, l_U1330 );
                break;
                case 8:
                switch (l_U198)
                {
                    case 0:
                    if (2)
                    {
                        l_U199 = 5;
                    }
                    break;
                    break;
                    1;
                    ref l_U1327;
                    sub_43597( ref l_U1327, 1, 1, ref l_U1368, ref l_U1369, 0, l_U1383, l_U1362, l_U1330 );
                    l_U1379;
                    ref l_U1313;
                    break;
                    case 1:
                    case 2:
                    case 3:
                    if (2)
                    {
                        l_U199 = 5;
                    }
                    break;
                    break;
                    1;
                    ref l_U1327;
                    sub_43597( ref l_U1327, 1, 1, ref l_U1368, ref l_U1369, 0, l_U1383, l_U1362, l_U1330 );
                    l_U1379;
                    ref l_U1317;
                    break;
                    default: PRINTSTRING( "more baddness... " );
                }
                break;
                break;
                case 9:
                if (sub_45915( 0, l_U1383, l_U1362 ))
                {
                    l_U199 = 5;
                }
                break;
                case 10:
                if (sub_52920( 0, l_U1383, l_U1362 ))
                {
                    l_U199 = 5;
                }
                break;
            }
        }
        else
        {
            l_U1322 = 0;
        }
    }
    sub_376();
    return;
}

void sub_376()
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1330 );
    sub_396();
    REMOVE_DECISION_MAKER( l_U1332 );
    REMOVE_DECISION_MAKER( l_U1333 );
    REMOVE_ANIMS( "clothing" );
    if (NOT (IS_CHAR_DEAD( sub_516() )))
    {
        FREEZE_CHAR_POSITION( sub_516(), 0 );
        if ((IS_PLAYER_PLAYING( sub_583() )) AND (l_U1323))
        {
            SET_PLAYER_CONTROL( sub_583(), 1 );
            l_U1323 = 0;
        }
    }
    sub_675( ref l_U1369, ref l_U1368, ref l_U1354, ref l_U1358, 0, IS_THIS_A_MINIGAME_SCRIPT() );
    StrCopy( ref g_U8380, "blank", 16 );
    UNREGISTER_SCRIPT_WITH_AUDIO();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_396()
{
    int I;

    if (l_U37 != 0)
    {
        for ( I = 0; I <= (l_U37 - 1); I++ )
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U4[I] );
        }
    }
    l_U37 = 0;
    return;
}

void sub_516()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_583()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_675(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5)
{
    if (DOES_CAM_EXIST( (uParam0^) ))
    {
        if (IS_CAM_PROPAGATING( (uParam0^) ))
        {
            SET_CAM_PROPAGATE( (uParam0^), 0 );
            SET_CAM_ACTIVE( (uParam0^), 0 );
        }
        DESTROY_CAM( (uParam0^) );
    }
    sub_749( 5, uParam2 );
    sub_749( 2, uParam3 );
    sub_749( 2, "BLANK" );
    if (bParam5)
    {
        if (g_U8228)
        {
            sub_1129( sub_516(), l_U178 );
            sub_2314();
            g_U8228 = 0;
        }
    }
    if (g_U8220 != 6)
    {
        sub_2357();
        g_U8220 = 6;
    }
    return;
}

void sub_749(int iParam0, string sParam1)
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
            if ((g_U9172 == iParam0) AND (l_U3))
            {
                StrCopy( ref g_U9174, "", 16 );
                g_U9172 = 0;
                g_U9173 = 0;
                g_U9178 = nil;
                l_U3 = 0;
                if (l_U1)
                {
                    sub_970();
                    l_U1 = 0;
                }
            }
            if (l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_583(), 1 );
                l_U2 = 0;
            }
            if (l_U0)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U0 = 0;
            }
        }
    }
    return;
}

void sub_970()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_1129(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18)
{
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        sub_1158( uParam0, ref uVar21, 0 );
        if (uParam1._fU0 != uVar21._fU0)
        {
            if (uParam1._fU0 != 10)
            {
                if (uParam1._fU0 < 0)
                {
                    CLEAR_CHAR_PROP( sub_516(), 0 );
                }
                else
                {
                    SET_CHAR_PROP_INDEX( sub_516(), 0, uParam1._fU0 );
                }
            }
            else
            {
                CLEAR_CHAR_PROP( uParam0, 0 );
                if (((GET_CHAR_DRAWABLE_VARIATION( sub_516(), 8 )) != 1) || ((GET_CHAR_TEXTURE_VARIATION( sub_516(), 8 )) != 0))
                {
                    SET_CHAR_COMPONENT_VARIATION( sub_516(), 8, 1, 0 );
                }
            }
        }
        if (uParam1._fU4 != uVar21._fU4)
        {
            if (uParam1._fU4 < 0)
            {
                CLEAR_CHAR_PROP( sub_516(), 1 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( uParam0, 1, uParam1._fU4 );
            }
        }
        if ((uParam1._fU8 != uVar21._fU8) || (uParam1._fU40 != uVar21._fU40))
        {
            SET_CHAR_COMPONENT_VARIATION( uParam0, 0, uParam1._fU8, uParam1._fU40 );
        }
        if ((uParam1._fU12 != uVar21._fU12) || (uParam1._fU44 != uVar21._fU44))
        {
            SET_CHAR_COMPONENT_VARIATION( uParam0, 1, uParam1._fU12, uParam1._fU44 );
        }
        if ((uParam1._fU16 != uVar21._fU16) || (uParam1._fU48 != uVar21._fU48))
        {
            SET_CHAR_COMPONENT_VARIATION( uParam0, 2, uParam1._fU16, uParam1._fU48 );
        }
        if ((uParam1._fU20 != uVar21._fU20) || (uParam1._fU52 != uVar21._fU52))
        {
            SET_CHAR_COMPONENT_VARIATION( uParam0, 3, uParam1._fU20, uParam1._fU52 );
        }
        if ((uParam1._fU24 != uVar21._fU24) || (uParam1._fU56 != uVar21._fU56))
        {
            SET_CHAR_COMPONENT_VARIATION( uParam0, 4, uParam1._fU24, uParam1._fU56 );
        }
        if ((uParam1._fU28 != uVar21._fU28) || (uParam1._fU60 != uVar21._fU60))
        {
            SET_CHAR_COMPONENT_VARIATION( uParam0, 5, uParam1._fU28, uParam1._fU60 );
        }
        if ((uParam1._fU32 != uVar21._fU32) || (uParam1._fU64 != uVar21._fU64))
        {
            SET_CHAR_COMPONENT_VARIATION( uParam0, 6, uParam1._fU32, uParam1._fU64 );
        }
        if ((uParam1._fU36 != uVar21._fU36) || (uParam1._fU68 != uVar21._fU68))
        {
            SET_CHAR_COMPONENT_VARIATION( uParam0, 7, uParam1._fU36, uParam1._fU68 );
        }
    }
    return;
}

void sub_1158(unknown uParam0, int iParam1, boolean bParam2)
{
    int iVar5;
    int iVar6;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_PROP_INDEX( uParam0, 0, iParam1 + 0 );
        if (iParam1->_fU0 == -1)
        {
            iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_516(), 8 );
            iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_516(), 8 );
            if ((iVar5 == 1) AND (iVar6 == 0))
            {
                iParam1->_fU0 = 10;
            }
        }
        GET_CHAR_PROP_INDEX( uParam0, 1, iParam1 + 4 );
        iParam1->_fU8 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 0 );
        iParam1->_fU12 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 1 );
        iParam1->_fU16 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 2 );
        iParam1->_fU20 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 3 );
        iParam1->_fU24 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 4 );
        iParam1->_fU28 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 5 );
        iParam1->_fU32 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 6 );
        iParam1->_fU36 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 7 );
        iParam1->_fU40 = GET_CHAR_TEXTURE_VARIATION( uParam0, 0 );
        iParam1->_fU44 = GET_CHAR_TEXTURE_VARIATION( uParam0, 1 );
        iParam1->_fU48 = GET_CHAR_TEXTURE_VARIATION( uParam0, 2 );
        iParam1->_fU52 = GET_CHAR_TEXTURE_VARIATION( uParam0, 3 );
        iParam1->_fU56 = GET_CHAR_TEXTURE_VARIATION( uParam0, 4 );
        iParam1->_fU60 = GET_CHAR_TEXTURE_VARIATION( uParam0, 5 );
        iParam1->_fU64 = GET_CHAR_TEXTURE_VARIATION( uParam0, 6 );
        iParam1->_fU68 = GET_CHAR_TEXTURE_VARIATION( uParam0, 7 );
    }
    else
    {
        iParam1->_fU0 = -1;
        iParam1->_fU4 = -1;
        iParam1->_fU8 = -1;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = -1;
        iParam1->_fU20 = -1;
        iParam1->_fU24 = -1;
        iParam1->_fU28 = -1;
        iParam1->_fU32 = -1;
        iParam1->_fU36 = -1;
        iParam1->_fU40 = -1;
        iParam1->_fU44 = -1;
        iParam1->_fU48 = -1;
        iParam1->_fU52 = -1;
        iParam1->_fU56 = -1;
        iParam1->_fU60 = -1;
        iParam1->_fU64 = -1;
        iParam1->_fU68 = -1;
    }
    if (bParam2)
    {
        if (iParam1->_fU0 == 2)
        {
            iParam1->_fU0 = -1;
        }
    }
    return;
}

void sub_2314()
{
    SET_MINIGAME_IN_PROGRESS( 0 );
    return;
}

void sub_2357()
{
    unknown uVar2;
    int iVar3;
    int I;
    unknown uVar5;

    GET_GROUP_SIZE( sub_2366(), ref uVar2, ref iVar3 );
    if (iVar3 > 0)
    {
        for ( I = 0; I < iVar3; I++ )
        {
            GET_GROUP_MEMBER( sub_2366(), I, ref uVar5 );
            if ((NOT (IS_CHAR_INJURED( uVar5 ))) AND (IS_PLAYER_PLAYING( sub_583() )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( uVar5 )))
                {
                    CLEAR_CHAR_TASKS( uVar5 );
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    TASK_GOTO_CHAR_OFFSET( uVar5, sub_516(), -1, 2.50000000, 0.00000000 );
                }
            }
        }
    }
    return;
}

void sub_2366()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2774()
{
    sub_2783();
    sub_5240();
    sub_6681();
    sub_8914();
    sub_9540();
    sub_1158( sub_516(), ref l_U178, 0 );
    StrCopy( ref g_U8380, "blank", 16 );
    if (g_U8356)
    {
        if (NOT g_U8353)
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 377940039, 892.30000000, -444.40000000, 16.10000000, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -532546678, 892.30000000, -441.40000000, 16.10000000, 1, 0.00000000 );
        }
    }
    return;
}

void sub_2783()
{
    sub_2861( 0, 3.30000000, -2.30000000, 1.40000000, 1.10000000, 0.90000000, 1.50000000, 3.90000000, -2.10000000, 1.40000000, 886.55080000, -438.63370000, 14.86010000, 360.00000000 );
    sub_2861( 1, 2.15000000, -5.75000000, 1.40000000, 0.70000000, 1.05000000, 1.50000000, 1.50000000, -6.30000000, 1.40000000, 889.46870000, -439.42720000, 14.86010000, 270.00000000 );
    sub_2861( 2, 3.70000000, -5.20000000, 1.40000000, 1.25000000, 0.50000000, 1.50000000, 3.90000000, -5.20000000, 1.40000000, 889.30960000, -437.99200000, 14.86010000, 360.00000000 );
    sub_2861( 3, 3.30000000, -4.50000000, 1.40000000, 0.55000000, 0.90000000, 1.50000000, 3.90000000, -5.20000000, 1.40000000, 889.40860000, -438.49200000, 14.86010000, 360.00000000 );
    sub_2861( 4, -4.00000000, -3.60000000, 1.40000000, 0.75000000, 1.25000000, 1.50000000, -4.20000000, -3.60000000, 1.40000000, 887.99300000, -444.45670000, 14.86010000, 180.00000000 );
    sub_2861( 5, -6.50000000, -1.90000000, 1.40000000, 1.25000000, 1.25000000, 1.50000000, -7.20000000, -1.90000000, 1.40000000, 886.03130000, -446.80920000, 14.86010000, 180.00000000 );
    sub_2861( 6, -6.50000000, 0.55000000, 1.40000000, 0.50000000, 1.00000000, 1.50000000, -7.40000000, 0.80000000, 1.40000000, 883.48800000, -447.09710000, 14.86010000, 81.36000000 );
    sub_2861( 7, -6.50000000, 1.55000000, 1.40000000, 0.50000000, 1.00000000, 1.50000000, -7.40000000, 0.80000000, 1.40000000, 883.28800000, -447.02710000, 14.86010000, 360.00000000 );
    sub_2861( 8, -6.50000000, 2.55000000, 1.40000000, 0.50000000, 1.00000000, 1.50000000, -7.40000000, 2.30000000, 1.40000000, 881.77180000, -447.65280000, 14.86010000, 318.60000000 );
    sub_2861( 9, -6.70000000, 3.45000000, 1.40000000, 0.40000000, 0.80000000, 1.50000000, -7.40000000, 3.90000000, 1.40000000, 880.65670000, -447.66370000, 14.86010000, 360.00000000 );
    sub_2861( 10, -6.70000000, 4.25000000, 1.40000000, 0.40000000, 0.80000000, 1.50000000, -7.40000000, 3.90000000, 1.40000000, 880.15770000, -447.46470000, 14.86010000, 311.76000000 );
    sub_2861( 11, -7.00000000, 5.40000000, 1.40000000, 0.75000000, 0.50000000, 1.50000000, -7.40000000, 3.90000000, 1.40000000, 879.55770000, -447.76470000, 14.86010000, 335.00000000 );
    sub_2861( 12, -6.10000000, 5.40000000, 1.40000000, 0.75000000, 0.40000000, 1.50000000, -6.30000000, 5.80000000, 1.40000000, 879.62430000, -447.51200000, 14.86010000, 287.64000000 );
    sub_2861( 13, -5.25000000, 5.40000000, 1.40000000, 0.75000000, 0.45000000, 1.50000000, -6.30000000, 5.80000000, 1.40000000, 879.62430000, -446.51200000, 14.86010000, 270.00000000 );
    sub_2861( 14, -4.40000000, 5.40000000, 1.40000000, 0.75000000, 0.40000000, 1.50000000, -4.80000000, 5.80000000, 1.40000000, 879.62430000, -445.61200000, 14.86010000, 270.00000000 );
    sub_2861( 15, -3.20000000, 5.30000000, 1.40000000, 0.75000000, 0.80000000, 1.50000000, -3.30000000, 5.80000000, 1.40000000, 879.62430000, -444.63640000, 14.86010000, 270.00000000 );
    sub_2861( 16, -1.80000000, 5.30000000, 1.40000000, 0.75000000, 0.60000000, 1.50000000, 1.40000000, 5.80000000, 1.40000000, 879.62430000, -443.12100000, 14.86010000, 270.00000000 );
    sub_2861( 17, -0.60000000, 5.30000000, 1.40000000, 0.75000000, 0.60000000, 1.50000000, 1.40000000, 5.80000000, 1.40000000, 879.62430000, -441.82100000, 14.86010000, 206.28000000 );
    sub_2861( 18, 0.60000000, 5.30000000, 1.40000000, 0.75000000, 0.60000000, 1.50000000, 2.90000000, 5.80000000, 1.40000000, 879.62430000, -440.49660000, 14.86010000, 300.00000000 );
    sub_2861( 19, -1.40000000, -0.60000000, 1.40000000, 1.70000000, 0.65000000, 1.50000000, -0.90000000, -0.80000000, 1.40000000, 884.94960000, -443.20320000, 14.86010000, 265.00000000 );
    sub_2861( 20, -1.40000000, 2.50000000, 1.40000000, 1.40000000, 0.65000000, 1.50000000, -0.90000000, 1.60000000, 1.40000000, 883.11180000, -443.20320000, 14.86010000, 265.00000000 );
    sub_2861( 21, 0.00000000, -0.60000000, 1.40000000, 1.70000000, 0.65000000, 1.50000000, -0.90000000, 2.90000000, 1.40000000, 884.94960000, -440.99840000, 14.86010000, 310.00000000 );
    sub_2861( 22, 0.00000000, 2.50000000, 1.40000000, 1.40000000, 0.65000000, 1.50000000, -0.30000000, 2.90000000, 1.40000000, 882.05420000, -440.99840000, 14.86010000, 310.00000000 );
    sub_2861( 23, 1.30000000, -0.10000000, 1.40000000, 1.00000000, 0.60000000, 1.50000000, -0.90000000, -0.80000000, 1.40000000, 884.84960000, -440.30320000, 14.86010000, 136.08000000 );
    sub_2861( 24, 2.40000000, -0.60000000, 1.40000000, 0.50000000, 0.50000000, 1.50000000, -0.90000000, 2.90000000, 1.40000000, 884.94960000, -438.35620000, 14.86010000, 310.00000000 );
    sub_2861( 25, 2.40000000, 0.40000000, 1.40000000, 0.50000000, 0.50000000, 1.50000000, -0.30000000, 2.90000000, 1.40000000, 883.81180000, -438.35620000, 14.86010000, 150.84000000 );
    sub_2861( 26, 3.55000000, 0.60000000, 1.40000000, 0.60000000, 0.60000000, 1.50000000, -0.90000000, 1.60000000, 1.40000000, 883.73480000, -438.04510000, 14.86010000, 180.00000000 );
    sub_2861( 27, 3.55000000, 1.80000000, 1.40000000, 0.60000000, 0.60000000, 1.50000000, -0.90000000, 1.60000000, 1.40000000, 882.83380000, -438.14510000, 14.86010000, 208.44000000 );
    sub_2861( 28, -3.60000000, 3.10000000, 1.40000000, 1.30000000, 1.30000000, 1.50000000, -3.60000000, 3.00000000, 1.40000000, 880.33730000, -444.14280000, 14.86020000, 199.80000000 );
    sub_2861( 29, -3.70000000, -1.55000000, 1.40000000, 1.30000000, 1.30000000, 1.50000000, -3.70000000, -1.55500000, 1.40000000, 886.88420000, -443.88750000, 14.86010000, 296.28000000 );
    sub_2861( 30, -0.75000000, -3.35000000, 1.40000000, 1.00000000, 1.30000000, 1.50000000, -0.75500000, -2.95500000, 1.40000000, 888.34280000, -442.77800000, 14.86010000, 0.00000000 );
    return;
}

void sub_2861(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13)
{
    l_U283[uParam0]._fU20 = {uParam1};
    l_U283[uParam0]._fU32 = {uParam4};
    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U1334, l_U283[uParam0]._fU20, ref l_U283[uParam0]._fU8 );
    l_U283[uParam0]._fU44 = {uParam7};
    l_U283[uParam0]._fU56 = {uParam10};
    l_U283[uParam0]._fU68 = uParam13;
    return;
}

void sub_5240()
{
    sub_5288( 0, 887.37380000, -437.51570000, 15.33330000, -11.61380000, -0.00000000, 142.78080000, 45.00000000 );
    sub_5288( 1, 889.96040000, -440.62840000, 15.17990000, -5.40710000, -0.00000000, 14.99760000, 45.00000000 );
    sub_5288( 2, 890.20290000, -438.89840000, 15.27450000, -4.81610000, -0.00000000, 46.66220000, 45.00000000 );
    sub_5288( 3, 889.98360000, -437.61470000, 15.20750000, -19.17140000, -0.00000000, 141.82150000, 45.00000000 );
    sub_5288( 4, 887.74300000, -445.36600000, 16.41000000, -0.00000000, 0.00000000, -17.61970000, 45.00000000 );
    sub_5288( 5, 885.78100000, -447.73900000, 16.44000000, -0.00000000, 0.00000000, -15.61970000, 45.00000000 );
    sub_5288( 6, 882.22420000, -446.08840000, 16.19200000, -2.88130000, -0.00000000, -129.52450000, 45.00000000 );
    sub_5288( 7, 884.67430000, -445.82060000, 16.03310000, 1.52540000, 0.00000000, 130.29370000, 45.00000000 );
    sub_5288( 8, 882.90160000, -446.87070000, 16.19080000, -1.06890000, 0.00000000, 129.72920000, 45.00000000 );
    sub_5288( 9, 881.71510000, -446.33680000, 16.27750000, -6.31340000, 0.00000000, 144.79260000, 45.00000000 );
    sub_5288( 10, 881.87700000, -446.53170000, 16.13120000, -1.38030000, -0.00000000, 127.53280000, 45.00000000 );
    sub_5288( 11, 880.57140000, -446.54710000, 16.19460000, -2.82760000, -0.00000000, 139.81290000, 45.00000000 );
    sub_5288( 12, 880.98850000, -446.92630000, 16.22140000, -4.05850000, -0.00000000, 115.47170000, 45.00000000 );
    sub_5288( 13, 881.02810000, -446.86690000, 16.28350000, -7.35730000, 0.00000000, 76.35370000, 45.00000000 );
    sub_5288( 14, 880.94430000, -446.11930000, 16.20920000, -1.29170000, -0.00000000, 72.99700000, 45.00000000 );
    sub_5288( 15, 880.98320000, -445.54110000, 16.23680000, -1.14890000, -0.00000000, 52.44150000, 45.00000000 );
    sub_5288( 16, 880.99540000, -444.03410000, 16.18310000, -1.47830000, 0.00000000, 54.58680000, 45.00000000 );
    sub_5288( 17, 880.51270000, -443.11550000, 16.12830000, -0.62840000, -0.00000000, 36.84500000, 45.00000000 );
    sub_5288( 18, 881.50190000, -440.64800000, 16.18430000, -3.46290000, -0.00000000, 84.68120000, 45.00000000 );
    sub_5288( 19, 887.69180000, -443.60670000, 15.66380000, -0.00400000, 0.00000000, 72.43540000, 45.00000000 );
    sub_5288( 20, 885.74800000, -443.56170000, 15.91160000, -4.56790000, -0.00000000, 77.65140000, 45.00000000 );
    sub_5288( 21, 887.63660000, -440.20030000, 15.70070000, -0.23050000, -0.00000000, 111.40480000, 45.00000000 );
    sub_5288( 22, 884.75760000, -440.22490000, 15.96060000, -3.67760000, -0.00000000, 105.52310000, 45.00000000 );
    sub_5288( 23, 882.37380000, -441.00780000, 15.84000000, -2.04930000, -0.00000000, -69.20680000, 45.00000000 );
    sub_5288( 24, 887.74730000, -438.07470000, 15.68770000, -0.89600000, 0.00000000, 95.58960000, 45.00000000 );
    sub_5288( 25, 881.75820000, -439.77580000, 15.96640000, -4.35970000, 0.00000000, -52.81070000, 45.00000000 );
    sub_5288( 26, 882.90330000, -439.35700000, 16.18190000, -0.41620000, -0.00000000, -29.20620000, 45.00000000 );
    sub_5288( 27, 883.20280000, -439.52230000, 16.26300000, -4.24870000, -0.00000000, 16.98330000, 45.00000000 );
    sub_5288( 28, 880.07030000, -446.66920000, 15.89730000, -4.39390000, 0.00000000, -3.82640000, 45.00000000 );
    sub_5288( 29, 889.38820000, -444.31630000, 15.68370000, 0.38010000, -0.00000000, 84.19290000, 45.00000000 );
    sub_5288( 30, 888.99070000, -440.17920000, 15.75850000, -1.46250000, 0.00000000, 165.90310000, 45.00000000 );
    return;
}

void sub_5288(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    l_U283[uParam0]._fU104 = {uParam1};
    l_U283[uParam0]._fU116 = {uParam4};
    l_U283[uParam0]._fU128 = uParam7;
    return;
}

void sub_6681()
{
    sub_6723( 0, "binco_SNEAKS_a", 7, 12, "clo_SSHOES" );
    sub_6723( 1, "binco_BOOTS_a", 7, 14, "clo_BSHOES" );
    sub_6723( 2, "binco_BOOTS_b", 0, 14, "clo_BSHOES" );
    sub_6723( 3, "binco_BOOTS_c", 0, 14, "clo_BSHOES" );
    sub_7109( 4, "binco_GLASSES", 0, 12, "clo_GLASSES" );
    sub_7331( 5, "binco_CAP", 0, 8, "clo_HAT" );
    sub_7564( 6, "binco_LEFT_0a", 10, 24, "clo_TORSO_10_1" );
    sub_7564( 7, "binco_LEFT_0b", 11, 24, "clo_TORSO_10_2" );
    sub_7564( 8, "binco_LEFT_0c", 9, 24, "clo_TORSO_10_0" );
    sub_7564( 9, "binco_LEFT_1a", 7, 26, "clo_TORSO_3_1" );
    sub_7564( 10, "binco_LEFT_1b", 8, 26, "clo_TORSO_3_2" );
    sub_7564( 11, "binco_LEFT_1c", 6, 26, "clo_TORSO_3_0" );
    sub_7564( 12, "binco_REAR_0a", 5, 26, "clo_TORSO_2_2" );
    sub_7564( 13, "binco_REAR_0b", 3, 26, "clo_TORSO_2_0" );
    sub_7564( 14, "binco_REAR_1", 4, 26, "clo_TORSO_2_1" );
    sub_7564( 15, "binco_REAR_2", 2, 36, "clo_TORSO_0_2" );
    sub_7564( 16, "binco_REAR_3a", 14, 36, "clo_TORSO_14_2" );
    sub_7564( 17, "binco_REAR_3b", 12, 36, "clo_TORSO_14_0" );
    sub_7564( 18, "binco_REAR_4", 13, 36, "clo_TORSO_14_1" );
    sub_8267( 19, "binco_LEGSa_L_0", 3, 24, "clo_LEGS_0_3" );
    sub_8267( 20, "binco_LEGSa_L_1", 0, 24, "clo_LEGS_0_0" );
    sub_8267( 21, "binco_LEGSa_R_0", 2, 24, "clo_LEGS_0_2" );
    sub_8267( 22, "binco_LEGSa_R_1", 1, 24, "clo_LEGS_0_1" );
    sub_8267( 23, "binco_LEGSb_L", 6, 24, "clo_LEGS_7_1" );
    sub_8267( 24, "binco_LEGSb_R_0", 7, 24, "clo_LEGS_7_2" );
    sub_8267( 25, "binco_LEGSb_R_1", 5, 24, "clo_LEGS_7_0" );
    sub_7564( 26, "binco_RIGHT_0", 0, 36, "clo_TORSO_0_0" );
    sub_7564( 27, "binco_RIGHT_1", 1, 36, "clo_TORSO_0_1" );
    sub_8267( 28, "binco_JEANS_BLUE_a", 4, 24, "clo_LEGS_1_0" );
    sub_8267( 29, "binco_JEANS_BLUE_b", 4, 24, "clo_LEGS_1_0" );
    sub_8267( 30, "binco_JEANS_BLUE_c", 4, 24, "clo_LEGS_1_0" );
    return;
}

void sub_6723(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    l_U283[uParam0]._fU0 = uParam1;
    l_U283[uParam0]._fU4 = uParam4;
    l_U283[uParam0]._fU76 = 45;
    l_U283[uParam0]._fU80 = 26;
    l_U283[uParam0]._fU84 = uParam2;
    l_U283[uParam0]._fU88 = 4;
    l_U283[uParam0]._fU92 = 3;
    l_U283[uParam0]._fU96 = 20;
    l_U283[uParam0]._fU72 = 4;
    ProtectedSet(l_U283[uParam0]._fU100, uParam3);
    l_U1317[0] = 0;
    l_U1317[1] = 1;
    l_U1317[2] = 2;
    l_U1317[3] = 3;
    l_U1313[0] = 4;
    l_U1313[1] = 5;
    l_U1313[2] = 6;
    return;
}

void sub_7109(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    l_U283[uParam0]._fU0 = uParam1;
    l_U283[uParam0]._fU4 = uParam4;
    l_U283[uParam0]._fU76 = 45;
    l_U283[uParam0]._fU80 = 26;
    l_U283[uParam0]._fU84 = 20;
    l_U283[uParam0]._fU88 = 4;
    l_U283[uParam0]._fU92 = uParam2;
    l_U283[uParam0]._fU96 = 20;
    l_U283[uParam0]._fU72 = 1;
    ProtectedSet(l_U283[uParam0]._fU100, uParam3);
    l_U1310[0] = 0;
    l_U1310[1] = 2;
    return;
}

void sub_7331(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    l_U283[uParam0]._fU0 = uParam1;
    l_U283[uParam0]._fU4 = uParam4;
    l_U283[uParam0]._fU76 = 45;
    l_U283[uParam0]._fU80 = 26;
    l_U283[uParam0]._fU84 = 20;
    l_U283[uParam0]._fU88 = uParam2;
    l_U283[uParam0]._fU92 = 3;
    l_U283[uParam0]._fU96 = 20;
    l_U283[uParam0]._fU72 = 0;
    ProtectedSet(l_U283[uParam0]._fU100, uParam3);
    l_U1307[0] = 0;
    l_U1307[1] = 1;
    return;
}

void sub_7564(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    l_U283[uParam0]._fU0 = uParam1;
    l_U283[uParam0]._fU4 = uParam4;
    l_U283[uParam0]._fU76 = uParam2;
    l_U283[uParam0]._fU80 = 26;
    l_U283[uParam0]._fU84 = 20;
    l_U283[uParam0]._fU88 = 4;
    l_U283[uParam0]._fU92 = 3;
    l_U283[uParam0]._fU96 = 20;
    l_U283[uParam0]._fU72 = 2;
    ProtectedSet(l_U283[uParam0]._fU100, uParam3);
    return;
}

void sub_8267(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    l_U283[uParam0]._fU0 = uParam1;
    l_U283[uParam0]._fU4 = uParam4;
    l_U283[uParam0]._fU76 = 45;
    l_U283[uParam0]._fU80 = uParam2;
    l_U283[uParam0]._fU84 = 20;
    l_U283[uParam0]._fU88 = 4;
    l_U283[uParam0]._fU92 = 3;
    l_U283[uParam0]._fU96 = 20;
    l_U283[uParam0]._fU72 = 3;
    ProtectedSet(l_U283[uParam0]._fU100, uParam3);
    return;
}

void sub_8914()
{
    l_U202[0]._fU0 = {0.17000000, 0.11000000, -0.01000000};
    l_U202[0]._fU12 = {1.90000000, -7.30000000, 0.30000000};
    l_U202[0]._fU24 = {0.16000000, 0.10000000, 0};
    l_U202[0]._fU36 = {18.46000000, 23.48000000, -22.68000000};
    l_U202[0]._fU48 = "Hat_russian_Take_Off_L";
    l_U202[0]._fU52 = "Hat_russian_Put_on_L";
    l_U202[0]._fU56 = "Hat_russian_Take_Off_R";
    l_U202[0]._fU60 = "Hat_russian_Put_on_R";
    l_U202[0]._fU64 = 0.42000000;
    l_U202[0]._fU68 = 0.64000000;
    l_U202[0]._fU72 = 0.15000000;
    l_U202[0]._fU76 = 0.46000000;
    l_U202[1]._fU0 = {0.18000000, 0.09000000, -0.13000000};
    l_U202[1]._fU12 = {1.05000000, -0.60000000, 1.52000000};
    l_U202[1]._fU24 = {0.15000000, 0.11000000, 0.13000000};
    l_U202[1]._fU36 = {-1.73000000, -0.65000000, -1.79000000};
    l_U202[1]._fU48 = "Hat_Take_Off_L";
    l_U202[1]._fU52 = "Hat_Put_on_L";
    l_U202[1]._fU56 = "Hat_Take_Off_R";
    l_U202[1]._fU60 = "Hat_Put_on_R";
    l_U202[1]._fU64 = 0.40900000;
    l_U202[1]._fU68 = 0.63000000;
    l_U202[1]._fU72 = 0.15000000;
    l_U202[1]._fU76 = 0.45800000;
    return;
}

void sub_9540()
{
    l_U202[2]._fU0 = {0.11200000, 0.10200000, -0.08800000};
    l_U202[2]._fU12 = {0.64090000, -0.00000000, 1.42630000};
    l_U202[2]._fU24 = {0.10300000, 0.09400000, 0.07900000};
    l_U202[2]._fU36 = {-2.28000000, 0.50500000, -2.10000000};
    l_U202[2]._fU48 = "specs_take_off_l";
    l_U202[2]._fU52 = "specs_put_on_l";
    l_U202[2]._fU56 = "specs_take_off_r";
    l_U202[2]._fU60 = "specs_put_on_r";
    l_U202[2]._fU64 = 0.35000000;
    l_U202[2]._fU68 = 0.75000000;
    l_U202[2]._fU72 = 0.25000000;
    l_U202[2]._fU76 = 0.72500000;
    l_U202[3]._fU0 = {0.12180000, 0.09900000, 0.00120000};
    l_U202[3]._fU12 = {0.64090000, -0.00000000, 1.42630000};
    l_U202[3]._fU24 = {0.14440000, 0.09800000, 0.03880000};
    l_U202[3]._fU36 = {-2.28000000, 0.50500000, -2.10000000};
    l_U202[3]._fU48 = "specs_take_off_l";
    l_U202[3]._fU52 = "specs_put_on_l";
    l_U202[3]._fU56 = "specs_take_off_r";
    l_U202[3]._fU60 = "specs_put_on_r";
    l_U202[3]._fU64 = 0.35000000;
    l_U202[3]._fU68 = 0.75000000;
    l_U202[3]._fU72 = 0.25000000;
    l_U202[3]._fU76 = 0.72500000;
    return;
}

void sub_10278()
{
    sub_10292( l_U1331 );
    GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref l_U1379 );
    GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref l_U1380 );
    while (NOT sub_10436())
    {
        WAIT( 0 );
    }
    # -sub_C1FFC0-0xc214c8( 1, ref l_U1332 );
    LOAD_COMBAT_DECISION_MAKER( 0, ref l_U1333 );
    CREATE_CHAR( 5, l_U1331, 888.82510000, -447.78480000, 15.86010000, ref l_U1330, 1 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U1330, l_U1335 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U1330 );
    SET_CHAR_HEADING( l_U1330, 37.94300000 );
    SET_CHAR_DECISION_MAKER( l_U1330, l_U1332 );
    SET_COMBAT_DECISION_MAKER( l_U1330, l_U1333 );
    SET_CURRENT_CHAR_WEAPON( l_U1330, 0, 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U1330, 888.82510000, -447.78480000, 15.86010000, 2.00000000 );
    g_U8357 = 0;
    sub_10827( "" );
    sub_10954( 0, sub_516(), "NIKO", 0 );
    sub_10954( 1, l_U1330, "SHOP_GIRL", 0 );
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    return;
}

void sub_10292(unknown uParam0)
{
    sub_10320( "REQUEST_A_MODEL(" );
    sub_10320( GET_MODEL_NAME_FOR_DEBUG( uParam0 ) );
    sub_10320( ")\n" );
    REQUEST_MODEL( uParam0 );
    l_U4[l_U37] = uParam0;
    l_U37++;
    return;
}

void sub_10320(unknown uParam0)
{
    return;
}

int sub_10436()
{
    int I;

    if (l_U37 != 0)
    {
        for ( I = 0; I <= (l_U37 - 1); I++ )
        {
            if (NOT (HAS_MODEL_LOADED( l_U4[I] )))
            {
                REQUEST_MODEL( l_U4[I] );
                sub_10320( "REQUEST_MODEL(" );
                sub_10320( GET_MODEL_NAME_FOR_DEBUG( l_U4[I] ) );
                sub_10320( ") [" );
                sub_10563( I );
                sub_10320( "]\n" );
                return 0;
            }
        }
    }
    return 1;
}

void sub_10563(unknown uParam0)
{
    return;
}

void sub_10827(unknown uParam0)
{
    StrCopy( ref l_U79._fU0, uParam0, 16 );
    sub_10846();
    return;
}

void sub_10846()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U79._fU16[I]._fU0 = nil;
        StrCopy( ref l_U79._fU16[I]._fU4, "", 32 );
        l_U79._fU344[I] = 0;
    }
    return;
}

void sub_10954(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U79._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U79._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_11038( "\n PED NUMBER ", uParam0 );
    sub_11078( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_11038(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_11078(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_11537(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar4 );
    if (iVar4 == (GET_HASH_KEY( uParam1 )))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_11609(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;

    if (sub_11537( sub_516(), uParam0 ))
    {
        REQUEST_ANIMS( "clothing" );
        if (NOT (HAVE_ANIMS_LOADED( "clothing" )))
        {
            REQUEST_ANIMS( "clothing" );
        }
        else if (NOT l_U1412)
        {
            l_U1412 = 1;
        }
        return 1;;
    }
    else if (HAVE_ANIMS_LOADED( "clothing" ))
    {
        GET_CHAR_COORDINATES( sub_516(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_2D( uVar6._fU0, uVar6._fU4, uParam1._fU0, uParam1._fU4, ref fVar9 );
        if (fVar9 > 15.00000000)
        {
            REMOVE_ANIMS( "clothing" );
            l_U1412 = 0;
        }
    }
    return 0;
}

void sub_11847()
{
    int Result;

    Result = 0;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Roman3" )) >= 1)
    {
        Result = 1;
    }
    return Result;
}

int sub_11933()
{
    vector vVar2;
    vector vVar5;
    int iVar8;

    if (NOT (IS_CHAR_INJURED( l_U1330 )))
    {
        vVar2 = {-6.60000000, 0.50000000, 0};
        vVar5 = {5.50000000, 5.75000000, 2.50000000};
        if ((sub_11537( sub_516(), l_U1335 )) AND (LOCATE_CHAR_ON_FOOT_3D( sub_516(), l_U1389._fU0 + vVar2.x, l_U1389._fU4 + vVar2.y, l_U1389._fU8 + vVar2.z, vVar5.x + 2.50000000, vVar5.y + 2.50000000, vVar5.z + 2.50000000, 0 )))
        {
            if (sub_11537( l_U1330, l_U1335 ))
            {
                if ((IS_CHAR_IN_ANY_CAR( sub_516() )) || (IS_WANTED_LEVEL_GREATER( sub_583(), 0 )))
                {
                    if (NOT l_U1406)
                    {
                        sub_12166( 1, ref l_U1362, 0, ref l_U1330 );
                        l_U1406 = 1;
                        l_U1407 = 0;
                        l_U1411 = 1;
                    }
                    return 0;
                }
                else if (NOT g_U8361)
                {
                    if (NOT l_U1410)
                    {
                        PRINT_HELP( "CLO_CANT" );
                        l_U1410 = 1;
                    }
                    return 0;
                }
                else if (LOCATE_CHAR_ON_FOOT_3D( sub_516(), l_U1389._fU0 + vVar2.x, l_U1389._fU4 + vVar2.y, l_U1389._fU8 + vVar2.z, vVar5.x, vVar5.y, vVar5.z, 0 ))
                {
                    if (NOT l_U1406)
                    {
                        if (NOT l_U1411)
                        {
                            sub_12166( 3, ref l_U1362, 0, ref l_U1330 );
                            l_U1406 = 1;
                            l_U1407 = 0;
                        }
                    }
                }
                if ((IS_CHAR_SHOOTING( sub_516() )) || (l_U1405))
                {
                    if (sub_14604( l_U1330, 91 ))
                    {
                        sub_12166( 4, ref l_U1362, 0, ref l_U1330 );
                        CLEAR_CHAR_TASKS( l_U1330 );
                        TASK_COMBAT( l_U1330, sub_516() );
                        l_U1405 = 1;
                        WAIT( 500 );
                        PLAY_SOUND_FROM_POSITION( -1, "SHOP_ALARMS_BELL", l_U1389 );
                        l_U1411 = 1;
                    }
                }
                else
                {
                    GET_GAME_TIMER( ref iVar8 );
                    if (sub_14604( l_U1330, 114 ))
                    {
                        if (iVar8 > (l_U1382 + 5000))
                        {
                            CLEAR_CHAR_TASKS( l_U1330 );
                            TASK_START_SCENARIO_IN_PLACE( l_U1330, "Scenario_Standing", -1082130432 );
                            GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref l_U1380 );
                            GET_GAME_TIMER( ref l_U1381 );
                        }
                    }
                    else if ((sub_14604( l_U1330, 34 )) || (iVar8 > (l_U1381 + 2500)))
                    {
                        CLEAR_CHAR_TASKS( l_U1330 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( l_U1330, sub_516() );
                        GET_GAME_TIMER( ref l_U1382 );
                    }
                    if ((IS_PLAYER_TARGETTING_CHAR( sub_583(), l_U1330 )) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_583(), l_U1330 )))
                    {
                        if (NOT l_U1408)
                        {
                            if (IS_CHAR_ARMED( sub_516(), 4 ))
                            {
                                sub_12166( 7, ref l_U1362, 0, ref l_U1330 );
                            }
                            else
                            {
                                sub_12166( 6, ref l_U1362, 0, ref l_U1330 );
                            }
                            l_U1408 = 1;
                        }
                    }
                    else if (NOT (sub_15079( l_U1362 )))
                    {
                        l_U1408 = 0;
                    }
                }
                if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U1330, sub_516(), 0 )) AND (NOT l_U1409))
                {
                    sub_12166( 0, ref l_U1362, 0, ref l_U1330 );
                    l_U1409 = 1;
                    l_U1411 = 1;
                };;;
            }
            else if (NOT l_U1326)
            {
                if (NOT (sub_11537( l_U1330, l_U1335 )))
                {
                    if (sub_11537( sub_516(), l_U1335 ))
                    {
                        CLEAR_HELP();
                        PRINT_HELP( "SHOP_H_EMPTY" );
                        l_U1326 = 1;
                    }
                }
            }
            return 0;;
        }
        else if (l_U1326)
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHOP_H_EMPTY" ))
            {
                CLEAR_HELP();
            }
        }
        if (l_U1406)
        {
            if (NOT l_U1407)
            {
                if (NOT l_U1411)
                {
                    sub_12166( 2, ref l_U1362, 0, ref l_U1330 );
                    l_U1407 = 1;
                }
            }
        }
        if ((sub_15520( sub_516(), l_U1330 )) >= 25.00000000)
        {
            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CLO_CANT" )))
            {
                l_U1410 = 0;
            }
            l_U1406 = 0;
        }
        return 1;
        break;
    }
    if (NOT (sub_15079( l_U1362 )))
    {
        sub_15802( ref l_U1362, 0 );
    }
    if (NOT l_U1326)
    {
        if (DOES_CHAR_EXIST( l_U1330 ))
        {
            PRINT_HELP( "SHOP_H_DEAD" );
            l_U1326 = 1;
        }
    }
    g_U8357 = 1;
    return 0;
}

void sub_12166(int iParam0, unknown uParam1, int iParam2, unknown uParam3)
{
    char[16] cVar6;
    unknown uVar10;
    int iVar11;

    switch (iParam2)
    {
        case 0:
        StrCopy( ref cVar6, "CS1_", 16 );
        break;
        case 2:
        StrCopy( ref cVar6, "CS2_", 16 );
        break;
        case 1:
        StrCopy( ref cVar6, "CS3_", 16 );
        break;
        case 3:
        return 1;
        break;
        default:
          case 4: return 0;
    }
    switch (iParam0)
    {
        case 0:
        ConcatString(ref cVar6, "ATTACK", 16);
        break;
        case 1:
        ConcatString(ref cVar6, "GOAWAY", 16);
        break;
        case 2:
        ConcatString(ref cVar6, "GOODBYE", 16);
        break;
        case 3:
        ConcatString(ref cVar6, "GREET", 16);
        break;
        case 4:
        ConcatString(ref cVar6, "PANIC", 16);
        break;
        case 5:
        ConcatString(ref cVar6, "PURCH", 16);
        break;
        case 6:
        ConcatString(ref cVar6, "MONKEY", 16);
        break;
        case 7:
        ConcatString(ref cVar6, "TARGET", 16);
        break;
        case 8:
        ConcatString(ref cVar6, "NEG", 16);
        break;
        case 9:
        ConcatString(ref cVar6, "COMP", 16);
        break;
        case 10:
        ConcatString(ref cVar6, "ADVICE", 16);
        break;
        case 11:
        ConcatString(ref cVar6, "BARR", 16);
        break;
        case 12:
        ConcatString(ref cVar6, "WARN", 16);
        break;
        default:
          case 13: return 0;
    }
    if (NOT (IS_CHAR_DEAD( (uParam3^) )))
    {
        TASK_TURN_CHAR_TO_FACE_CHAR( (uParam3^), sub_516() );
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "finale1c" )) >= 1)
    {
        GET_GROUP_SIZE( sub_2366(), ref uVar10, ref iVar11 );
        if (iVar11 >= 1)
        {
            PRINTSTRING( "  * skipping speech ''" );
            PRINTSTRING( ref cVar6 );
            PRINTSTRING( "'' because ''finale1c'' running and with iNumber_of_player_group_followers = " );
            PRINTINT( iVar11 );
            PRINTNL();
            return 0;
        }
    }
    if ((sub_11847()) AND (iParam2 == 0))
    {
        if (NOT g_U8358)
        {
            if (iParam0 == 5)
            {
                PRINTSTRING( "  * skipping speech ''" );
                PRINTSTRING( ref cVar6 );
                PRINTSTRING( "'' because ''roman3'' running and dateSpeech = CLOTHES_SHOP_PLAYER_PURCHASES  - " );
                PRINTSTRING( "gbPKMAL_25_displayed:" );
                sub_13048( g_U8358 );
                PRINTNL();
                g_U8358 = 1;
                return 0;
            }
        }
        if (NOT g_U8355)
        {
            if (iParam0 == 3)
            {
                PRINTSTRING( "  * skipping speech ''" );
                PRINTSTRING( ref cVar6 );
                PRINTSTRING( "'' because ''roman3'' running and dateSpeech = CLOTHES_SHOP_GREETING  - " );
                PRINTSTRING( "bClothes_bought_in_roman3:" );
                sub_13048( g_U8355 );
                PRINTNL();
                return 0;
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( (uParam3^) )))
    {
        TASK_TURN_CHAR_TO_FACE_CHAR( (uParam3^), sub_516() );
    }
    sub_10320( "  * PLAY_SHOP_ASST_SPEECH(''" );
    sub_10320( ref cVar6 );
    sub_10320( "'')\n" );
    return sub_13412( ref cVar6, uParam1, 1, 0 );
}

void sub_13048(boolean bParam0)
{
    if (bParam0)
    {
        PRINTSTRING( "TRUE" );
    }
    else
    {
        PRINTSTRING( "FALSE" );
    }
    return;
}

void sub_13412(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_13435( uParam0, ref l_U79._fU0, uParam1, uParam2, uParam3 );
}

void sub_13435(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_13489( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_13489(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_13511( iParam1 )))
    {
        return 0;
    }
    l_U79._fU384 = 0;
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
    sub_14191( ref g_U8395, ref l_U79 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_13511(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_10320( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_10320( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_10320( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_14191(int iParam0, int iParam1)
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

int sub_14604(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    if (iVar4 == 7)
    {
        return 1;
    }
    return 0;
}

int sub_15079(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_10320( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_10320( "\n speech is not playing" );
    }
    return 0;
}

void sub_15520(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown Result;

    if ((NOT (DOES_CHAR_EXIST( uParam0 ))) || (NOT (DOES_CHAR_EXIST( uParam1 ))))
    {
        return 9999.00000000;
        break;
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
    }
    else
    {
        N_1363505769( uParam0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
    }
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
    }
    else
    {
        N_1363505769( uParam1, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
    }
    GET_DISTANCE_BETWEEN_COORDS_3D( uVar4._fU0, uVar4._fU4, uVar4._fU8, uVar7._fU0, uVar7._fU4, uVar7._fU8, ref Result );
    return Result;
}

void sub_15802(int iParam0, unknown uParam1)
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

int sub_16036()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
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
    int I;

    if (l_U1404 < 0)
    {
        GET_GAME_TIMER( ref l_U1404 );
    }
    else if (sub_16082( ref l_U1378, l_U200 ))
    {
        GET_GAME_TIMER( ref iVar2 );
        if (iVar2 > (l_U1404 + 2500))
        {
            l_U201 = l_U200;
            l_U200 = 5;
        }
    }
    switch (l_U200)
    {
        case 0:
        if (NOT IS_SCREEN_FADED_OUT())
        {
            if (NOT IS_SCREEN_FADING_OUT())
            {
                DO_SCREEN_FADE_OUT( 125 );
                SET_PLAYER_CONTROL( sub_583(), 0 );
                l_U1323 = 1;
            }
        }
        else
        {
            GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar3 );
            if (NOT (IS_CAR_DEAD( uVar3 )))
            {
                if ((LOCATE_CAR_3D( uVar3, l_U1345._fU0, l_U1345._fU4, l_U1345._fU8, 7.50000000, 7.50000000, 7.50000000, 0 )) || (sub_16485( uVar3, l_U1335 )))
                {
                    if (sub_16548( 0, ref uVar4, ref uVar7 ))
                    {
                        SET_CAR_COORDINATES( uVar3, uVar4._fU0, uVar4._fU4, uVar4._fU8 );
                        SET_CAR_HEADING( uVar3, uVar7 );
                    }
                }
            }
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_516() );
            TASK_TOGGLE_DUCK( sub_516(), 0 );
            SET_CHAR_COORDINATES( sub_516(), l_U1345._fU0, l_U1345._fU4, 14.86010000 );
            SET_CHAR_HEADING( sub_516(), 90.00000000 );
            OPEN_SEQUENCE_TASK( ref l_U1395 );
            TASK_PAUSE( 0, 500 );
            TASK_GO_STRAIGHT_TO_COORD( 0, 889.04720000, -442.97040000, l_U1345._fU8, 2, -1 );
            TASK_PAUSE( 0, 250 );
            TASK_START_SCENARIO_AT_POSITION( 0, "Scenario_Standing", 889.04720000 + l_U1394, -442.97040000, l_U1345._fU8, 90.00000000 );
            CLOSE_SEQUENCE_TASK( l_U1395 );
            TASK_PERFORM_SEQUENCE( sub_516(), l_U1395 );
            CLEAR_SEQUENCE_TASK( l_U1395 );
            REQUEST_INTERIOR_MODELS( -1997562918, l_U1335 );
            while (NOT (HAVE_ANIMS_LOADED( "clothing" )))
            {
                REQUEST_ANIMS( "clothing" );
                WAIT( 0 );
            }
            if (NOT (IS_CHAR_DEAD( l_U1330 )))
            {
                TASK_PLAY_ANIM_UPPER_BODY( l_U1330, "lookaround_a", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
            }
            CLEAR_AREA_OF_CHARS( 892.30000000, -444.40000000, 16.10000000, 20.00000000 );
            CLEAR_AREA_OF_OBJECTS( 892.30000000, -444.40000000, 16.10000000, 20.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 377940039, 892.30000000, -444.40000000, 16.10000000, 0, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -532546678, 892.30000000, -441.40000000, 16.10000000, 0, 0.00000000 );
            sub_17536( ref l_U1368 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            CREATE_CAM( 14, ref l_U1396[0] );
            SET_CAM_POS( l_U1396[0], 879.75540000, -442.95890000, 16.56979000 );
            SET_CAM_ROT( l_U1396[0], -6.02684600, 0.00000000, -89.05587000 );
            SET_CAM_FOV( l_U1396[0], 70.00000000 );
            CREATE_CAM( 14, ref l_U1396[1] );
            SET_CAM_POS( l_U1396[1], 880.05390000, -442.95400000, 16.53829000 );
            SET_CAM_ROT( l_U1396[1], -6.02684900, 0.00000000, -89.05587000 );
            SET_CAM_FOV( l_U1396[1], 70.00000000 );
            CREATE_CAM( 3, ref l_U1396[2] );
            CREATE_CAM( 14, ref l_U1400[0] );
            SET_CAM_POS( l_U1400[0], 890.22440000, -438.83040000, 16.89151000 );
            SET_CAM_ROT( l_U1400[0], -9.57918500, 0.00000000, 112.57860000 );
            SET_CAM_FOV( l_U1400[0], 45.00000000 );
            CREATE_CAM( 14, ref l_U1400[1] );
            SET_CAM_POS( l_U1400[1], 891.69500000, -442.77040000, 16.70820000 );
            SET_CAM_ROT( l_U1400[1], -5.04089200, -0.00000000, 90.00000000 );
            SET_CAM_FOV( l_U1400[1], 45.00000000 );
            CREATE_CAM( 3, ref l_U1400[2] );
            SET_CAM_ACTIVE( l_U1396[0], 1 );
            SET_CAM_ACTIVE( l_U1396[1], 1 );
            SET_CAM_PROPAGATE( l_U1396[2], 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U1396[2], l_U1396[0], l_U1396[1], 10000, 0 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            PRINT_HELP( "SHOP_CS_01" );
            DO_SCREEN_FADE_IN( 125 );
            SETTIMERB( 0 );
            l_U200 = 1;
        }
        break;
        case 1:
        if (NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U1396[2] )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_516() );
            SET_CHAR_COORDINATES( sub_516(), 888.64090000, -442.92180000, 14.85120000 );
            SET_CHAR_HEADING( sub_516(), 90.00000000 );
            GET_GAME_CAM( ref uVar8 );
            GET_CAM_POS( uVar8, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
            GET_CAM_ROT( uVar8, ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 );
            GET_CAM_FOV( uVar8, ref uVar15 );
            SET_CAM_POS( l_U1400[1], uVar9._fU0, uVar9._fU4, uVar9._fU8 );
            SET_CAM_ROT( l_U1400[1], uVar12._fU0, uVar12._fU4, uVar12._fU8 );
            SET_CAM_FOV( l_U1400[1], uVar15 );
            SET_CAM_PROPAGATE( l_U1396[2], 0 );
            SET_CAM_ACTIVE( l_U1400[0], 1 );
            SET_CAM_ACTIVE( l_U1400[1], 1 );
            SET_CAM_PROPAGATE( l_U1400[2], 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U1400[2], l_U1400[0], l_U1400[1], 10000, 0 );
            SET_ROOM_FOR_CHAR_BY_NAME( sub_516(), l_U1335 );
            PRINT_HELP( "SHOP_CS_02" );
            l_U200 = 4;
        }
        break;
        case 4:
        if (NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U1400[2] )))
        {
            SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 500 );
            CLEAR_CHAR_TASKS( sub_516() );
            INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
            l_U200 = 6;
        }
        break;
        case 5:
        if (l_U201 == 1)
        {
            DO_SCREEN_FADE_OUT( 125 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
        }
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_516() );
        SET_CHAR_COORDINATES( sub_516(), 889.04720000, -442.97040000, 14.86010000 );
        SET_CHAR_HEADING( sub_516(), 90.00000000 );
        CLEAR_PRINTS();
        CLEAR_HELP();
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 125 );
        }
        SET_INTERP_FROM_GAME_TO_SCRIPT( 0, 0 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_516() );
        l_U200 = 6;
        break;
        case 6:
        for ( I = 0; I < l_U1396; I++ )
        {
            SET_CAM_PROPAGATE( l_U1396[I], 0 );
            SET_CAM_ACTIVE( l_U1396[I], 0 );
            DESTROY_CAM( l_U1396[I] );
        }
        for ( I = 0; I < l_U1400; I++ )
        {
            SET_CAM_PROPAGATE( l_U1400[I], 0 );
            SET_CAM_ACTIVE( l_U1400[I], 0 );
            DESTROY_CAM( l_U1400[I] );
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        sub_18990( ref l_U1368 );
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 377940039, 892.30000000, -444.40000000, 16.10000000, 0, 0.00000000 );
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -532546678, 892.30000000, -441.40000000, 16.10000000, 0, 0.00000000 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_516(), 0 );
        SET_PLAYER_CONTROL( sub_583(), 1 );
        l_U1323 = 0;
        SET_GAME_CAM_HEADING( 0.00000000 );
        if ((NOT g_U8355) AND (g_U8356))
        {
            PRINT_HELP( "SHOP_CS_05" );
        }
        if (NOT (IS_CHAR_INJURED( l_U1330 )))
        {
            CLEAR_CHAR_TASKS( l_U1330 );
            TASK_START_SCENARIO_IN_PLACE( l_U1330, "Scenario_Standing", -1082130432 );
        }
        l_U1378 = 0;
        g_U8353 = 1;
        return 1;
        break;
    }
    return 0;
}

int sub_16082(unknown uParam0, int iParam1)
{
    if ((uParam0^))
    {
        if (((sub_16099()) AND (IS_SCREEN_FADED_IN())) AND (iParam1 > 0))
        {
            return 1;
        }
        else
        {
            (uParam0^) = 0;
        }
    }
    if (NOT sub_16099())
    {
        (uParam0^) = 1;
    }
    return 0;
}

int sub_16099()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_16485(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_KEY_FOR_CAR_IN_ROOM( uParam0, ref iVar4 );
    if (iVar4 == (GET_HASH_KEY( uParam1 )))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_16548(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    switch (uParam0)
    {
        case 0:
        (uParam1^) = {903.47300000, -443.05190000, 15.20300000};
        (uParam2^) = 180.00000000;
        return 1;
        break;
        case 1:
        (uParam1^) = {-281.72640000, 1346.18900000, 24.81270000};
        (uParam2^) = 270.00000000;
        return 1;
        break;
        case 2:
        GET_CHAR_COORDINATES( sub_516(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        switch (sub_16688( uVar5 ))
        {
            case 0:
            (uParam1^) = {22.51870000, 816.93500000, 14.33970000};
            (uParam2^) = 90.00000000;
            return 1;
            break;
            case 1:
            (uParam1^) = {9.57450000, -650.91650000, 14.41290000};
            (uParam2^) = 270.00000000;
            return 1;
            break;
            default:
            (uParam1^) = {0.00000000, 0.00000000, 0.00000000};
            (uParam2^) = 0.00000000;
            return 0;
        }
        break;
    }
    (uParam1^) = {0.00000000, 0.00000000, 0.00000000};
    (uParam2^) = 0.00000000;
    return 0;
}

void sub_16688(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;
    int Result;
    float fVar7;
    float fVar8;
    vector[2] vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;

    Result = 99;
    fVar8 = 1E8;
    array(ref vVar9, 2);
    vVar9[1] = {10.79090000, -652.65520000, 14.77060000};
    vVar9[0] = {21.83008000, 803.60000000, 13.70000000};
    for ( I = 0; I < 2; I++ )
    {
        fVar7 = VDIST( uParam0, vVar9[I] );
        if (fVar7 < fVar8)
        {
            Result = I;
            fVar8 = fVar7;
        }
    }
    return Result;
}

void sub_17536(unknown uParam0)
{
    BEGIN_CAM_COMMANDS( uParam0 );
    if ((uParam0^) != 1)
    {
        PRINTSTRING( "  ## ar_BEGIN_CAM_COMMANDS(" );
        PRINTINT( (uParam0^) );
        PRINTSTRING( ")\n" );
    }
    return;
}

void sub_18990(unknown uParam0)
{
    END_CAM_COMMANDS( uParam0 );
    if ((uParam0^) != 0)
    {
        PRINTSTRING( "  ## ar_BEGIN_CAM_COMMANDS(" );
        PRINTINT( (uParam0^) );
        PRINTSTRING( ")\n" );
    }
    return;
}

int sub_19576(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    if (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( uParam0, uParam1 ))
    {
        if ((uParam2^) < 0)
        {
            GET_GAME_TIMER( uParam2 );
        }
        GET_GAME_TIMER( ref iVar5 );
        sub_10320( "  ''" );
        sub_10320( uParam0 );
        sub_10320( "'', " );
        sub_10563( uParam1 );
        sub_10320( "    //" );
        sub_10563( iVar5 - (uParam2^) );
        sub_10320( "\n" );
        if ((iVar5 - (uParam2^)) > 2000)
        {
            CLEAR_HELP();
        }
        return 1;
    }
    (uParam2^) = -1;
    return 0;
}

int sub_20038(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, int iParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24)
{
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    int I;
    boolean bVar31;
    unknown uVar32;

    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( uParam10, uParam0, ref uVar27 );
    if ((sub_20064( 2, 0 )) AND (NOT (uParam11^)))
    {
        if (((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_POOR_F" ))) AND (NOT (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( "HELP_BOUGHT_F", iParam8 )))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_BOUGHT_F_F" ))))
        {
            if (sub_20445( 2, "BLANK", 0 ))
            {
                sub_749( 2, "BLANK" );
                (uParam11^) = 1;
            }
            if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam9 )))
            {
                sub_21117( "LB_TRYON", uParam9, uParam24 );
            }
        }
    }
    else if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam9 ))
    {
        CLEAR_HELP();
    }
    if ((uParam11^))
    {
        while (NOT (sub_21403( ref uParam12, uVar27, uParam3, uParam6, uParam23, 4, 0 )))
        {
            WAIT( 0 );
        }
        bVar31 = false;
        for ( I = 0; I < (uParam7^); I++ )
        {
            if (NOT bVar31)
            {
                if (NOT g_U8302[(uParam7^)[I]])
                {
                    uVar32 = (uParam7^)[I];
                    bVar31 = true;
                }
            }
        }
        if (NOT bVar31)
        {
            uVar32 = (uParam7^)[0];
        }
        sub_1158( sub_516(), ref l_U178, 0 );
        sub_25303( uVar32 );
        SET_PLAYER_CONTROL( sub_583(), 0 );
        TASK_PLAY_ANIM( sub_516(), "examine shoes", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
        if (NOT g_U8378)
        {
            PRINT_WITH_NUMBER_NOW( sub_25937( uVar32, 3, 0 ), iParam8, 7500, 1 );
        }
        else
        {
            PRINT_WITH_NUMBER_NOW( sub_25937( uVar32, 3, 0 ), iParam8 / 2, 7500, 1 );
        }
        if (bVar31)
        {
            PRINT_HELP_FOREVER( "HELP_BUY_F" );
        }
        else
        {
            PRINT_HELP_FOREVER_WITH_STRING( "HELP_OWN_F", sub_27606( uVar32 ) );
        }
        sub_28392( uParam23, ref uParam12, 4, uParam13, "BLANK", uParam14, uParam16, uParam19, uParam22 );
        (uParam11^) = 0;
        (uParam15^) = iParam8;
        sub_20720();
        return 1;
    }
    return 0;
}

int sub_20064(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_583() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_583() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_583() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9202)))
                {
                    if (NOT sub_20160())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_516() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_20245())
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

int sub_20160()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_20245()
{
    return sub_20256( 0, 0 );
}

int sub_20256(boolean bParam0, unknown uParam1)
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

int sub_20445(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_20064( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_583(), 0 );
                l_U2 = 1;
            }
            g_U9172 = uParam0;
            l_U3 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_20720();
                l_U1 = 1;
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
                            l_U0 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U0)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U0 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_20720()
{
    return sub_20256( 1, 1 );
}

void sub_21117(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_10320( "ar_PRINT_SHOP_HELP(''" );
    sub_10320( uParam0 );
    sub_10320( "'', ''" );
    sub_10320( uParam1 );
    sub_10320( "'', " );
    sub_21198( (uParam2^) );
    sub_10320( ")    //" );
    sub_21198( IS_HELP_MESSAGE_BEING_DISPLAYED() );
    sub_21259();
    if ((uParam2^))
    {
        PRINT_HELP_FOREVER_WITH_STRING( uParam0, uParam1 );
        (uParam2^) = 0;
    }
    else
    {
        PRINT_HELP_WITH_STRING_NO_SOUND( uParam0, uParam1 );
    }
    return;
}

void sub_21198(unknown uParam0)
{
    if (g_U9231)
    {
        sub_13048( uParam0 );
    }
    return;
}

void sub_21259()
{
    if (g_U9231)
    {
        PRINTNL();
    }
    return;
}

int sub_21403(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, boolean bParam10)
{
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;

    if (NOT l_U197)
    {
        sub_21423();
        g_U8228 = 1;
        g_U8220 = uParam9;
        l_U197 = 1;
    }
    if ((NOT IS_SCREEN_FADED_OUT()) AND (NOT bParam10))
    {
        if (NOT IS_SCREEN_FADING())
        {
            DO_SCREEN_FADE_OUT( 0 );
            if (sub_21512( uParam9, ref uVar13 ))
            {
                PLAY_SOUND_FROM_PED( -1, sub_24395( uVar13 ), sub_516() );
            }
        }
        return 0;
        break;
    }
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar14 );
    if (NOT (IS_CAR_DEAD( uVar14 )))
    {
        if (LOCATE_CAR_3D( uVar14, uParam4._fU0, uParam4._fU4, uParam4._fU8, 10.00000000, 10.00000000, 10.00000000, 0 ))
        {
            if (sub_16548( uParam8, ref uVar15, ref uVar18 ))
            {
                SET_CAR_HEADING( uVar14, uVar18 );
                SET_CAR_COORDINATES( uVar14, uVar15._fU0, uVar15._fU4, uVar15._fU8 );
            }
        }
    }
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_516() );
    SET_CHAR_COORDINATES( sub_516(), uParam4._fU0, uParam4._fU4, uParam4._fU8 );
    SET_CHAR_HEADING( sub_516(), uParam7 );
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_516(), 1 );
    CLEAR_AREA_OF_OBJECTS( uParam4._fU0, uParam4._fU4, uParam4._fU8, 5.00000000 );
    l_U197 = 0;
    return 1;
}

void sub_21423()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    return;
}

int sub_21512(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;

    switch (uParam0)
    {
        case 0:
        return 0;
        break;
        case 1:
        return 0;
        break;
        case 2:
        sub_21597( ref uVar4 );
        switch (uVar4)
        {
            case 0:
            case 1:
            case 2:
            (uParam1^) = 3;
            return 1;
            break;
            case 15:
            case 16:
            case 17:
            (uParam1^) = 2;
            return 1;
            break;
            case 3:
            case 4:
            case 5:
            (uParam1^) = 1;
            return 1;
            break;
            case 6:
            case 7:
            case 8:
            (uParam1^) = 1;
            return 1;
            break;
            case 18:
            case 19:
            case 20:
            (uParam1^) = 0;
            return 1;
            break;
            case 28:
            case 29:
            case 30:
            (uParam1^) = 0;
            return 1;
            break;
            case 41:
            (uParam1^) = 0;
            return 1;
            break;
            case 42:
            (uParam1^) = 0;
            return 1;
            break;
            case 21:
            case 22:
            case 23:
            (uParam1^) = 1;
            return 1;
            break;
            case 9:
            case 10:
            case 11:
            (uParam1^) = 1;
            return 1;
            break;
            case 31:
            case 32:
            case 33:
            (uParam1^) = 0;
            return 1;
            break;
            case 34:
            case 35:
            case 36:
            case 37:
            (uParam1^) = 0;
            return 1;
            break;
            case 38:
            case 39:
            case 40:
            (uParam1^) = 0;
            return 1;
            break;
            case 12:
            case 13:
            case 14:
            (uParam1^) = 1;
            return 1;
            break;
            case 24:
            case 25:
            case 26:
            case 27:
            (uParam1^) = 0;
            return 1;
            break;
            case 43:
            case 44:
            (uParam1^) = 3;
            return 1;
            break;
        }
        break;
        case 3:
        sub_23304( ref uVar5 );
        switch (uVar5)
        {
            case 0:
            case 1:
            case 2:
            case 3:
            (uParam1^) = 4;
            return 1;
            break;
            case 4:
            (uParam1^) = 5;
            return 1;
            break;
            case 19:
            case 20:
            case 21:
            case 22:
            case 23:
            (uParam1^) = 4;
            return 1;
            break;
            case 24:
            (uParam1^) = 5;
            return 1;
            break;
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            (uParam1^) = 4;
            return 1;
            break;
            case 8:
            case 9:
            case 10:
            (uParam1^) = 5;
            return 1;
            break;
            case 11:
            case 12:
            case 13:
            (uParam1^) = 5;
            return 1;
            break;
            case 5:
            case 6:
            case 7:
            case 25:
            (uParam1^) = 5;
            return 1;
            break;
        }
        break;
        case 4:
        (uParam1^) = 6;
        return 1;
        break;
        case 5:
        (uParam1^) = 0;
        return 1;
        break;
    }
    return 0;
}

void sub_21597(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_516(), 1 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_516(), 1 );
    bVar8 = false;
    for ( I = 0; I < 45; I++ )
    {
        if (NOT bVar8)
        {
            sub_21667( I, ref iVar6, ref iVar7 );
            if ((iVar6 == iVar3) AND (iVar7 == iVar4))
            {
                (uParam0^) = I;
                bVar8 = true;
            }
        }
    }
    if (NOT bVar8)
    {
        (uParam0^) = 45;
    }
    return;
}

void sub_21667(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        (uParam2^) = 0;
        break;
        case 1:
        (uParam1^) = 0;
        (uParam2^) = 1;
        break;
        case 2:
        (uParam1^) = 0;
        (uParam2^) = 2;
        break;
        case 15:
        (uParam1^) = 1;
        (uParam2^) = 0;
        break;
        case 16:
        (uParam1^) = 1;
        (uParam2^) = 1;
        break;
        case 17:
        (uParam1^) = 1;
        (uParam2^) = 2;
        break;
        case 3:
        (uParam1^) = 2;
        (uParam2^) = 0;
        break;
        case 4:
        (uParam1^) = 2;
        (uParam2^) = 1;
        break;
        case 5:
        (uParam1^) = 2;
        (uParam2^) = 2;
        break;
        case 6:
        (uParam1^) = 3;
        (uParam2^) = 0;
        break;
        case 7:
        (uParam1^) = 3;
        (uParam2^) = 1;
        break;
        case 8:
        (uParam1^) = 3;
        (uParam2^) = 2;
        break;
        case 18:
        (uParam1^) = 4;
        (uParam2^) = 0;
        break;
        case 19:
        (uParam1^) = 4;
        (uParam2^) = 1;
        break;
        case 20:
        (uParam1^) = 4;
        (uParam2^) = 2;
        break;
        case 28:
        (uParam1^) = 5;
        (uParam2^) = 0;
        break;
        case 29:
        (uParam1^) = 5;
        (uParam2^) = 1;
        break;
        case 30:
        (uParam1^) = 5;
        (uParam2^) = 2;
        break;
        case 41:
        (uParam1^) = 6;
        (uParam2^) = 0;
        break;
        case 42:
        (uParam1^) = 8;
        (uParam2^) = 0;
        break;
        case 21:
        (uParam1^) = 9;
        (uParam2^) = 0;
        break;
        case 22:
        (uParam1^) = 9;
        (uParam2^) = 1;
        break;
        case 23:
        (uParam1^) = 9;
        (uParam2^) = 2;
        break;
        case 9:
        (uParam1^) = 10;
        (uParam2^) = 0;
        break;
        case 10:
        (uParam1^) = 10;
        (uParam2^) = 1;
        break;
        case 11:
        (uParam1^) = 10;
        (uParam2^) = 2;
        break;
        case 31:
        (uParam1^) = 11;
        (uParam2^) = 0;
        break;
        case 32:
        (uParam1^) = 11;
        (uParam2^) = 1;
        break;
        case 33:
        (uParam1^) = 11;
        (uParam2^) = 2;
        break;
        case 34:
        (uParam1^) = 12;
        (uParam2^) = 0;
        break;
        case 35:
        (uParam1^) = 12;
        (uParam2^) = 1;
        break;
        case 36:
        (uParam1^) = 12;
        (uParam2^) = 2;
        break;
        case 37:
        (uParam1^) = 12;
        (uParam2^) = 3;
        break;
        case 38:
        (uParam1^) = 13;
        (uParam2^) = 0;
        break;
        case 39:
        (uParam1^) = 13;
        (uParam2^) = 1;
        break;
        case 40:
        (uParam1^) = 13;
        (uParam2^) = 2;
        break;
        case 12:
        (uParam1^) = 14;
        (uParam2^) = 0;
        break;
        case 13:
        (uParam1^) = 14;
        (uParam2^) = 1;
        break;
        case 14:
        (uParam1^) = 14;
        (uParam2^) = 2;
        break;
        case 24:
        (uParam1^) = 15;
        (uParam2^) = 0;
        break;
        case 25:
        (uParam1^) = 15;
        (uParam2^) = 1;
        break;
        case 26:
        (uParam1^) = 15;
        (uParam2^) = 2;
        break;
        case 27:
        (uParam1^) = 15;
        (uParam2^) = 3;
        break;
        case 43:
        (uParam1^) = 16;
        (uParam2^) = 0;
        break;
        case 44:
        (uParam1^) = 16;
        (uParam2^) = 1;
        break;
        default:
          case 45:
        (uParam1^) = 2147483647;
        (uParam2^) = 2147483647;
    }
    return;
}

void sub_23304(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_516(), 2 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_516(), 2 );
    bVar8 = false;
    for ( I = 0; I < 26; I++ )
    {
        if (NOT bVar8)
        {
            sub_23372( I, ref iVar6, ref iVar7 );
            if ((iVar6 == iVar3) AND (iVar7 == iVar4))
            {
                (uParam0^) = I;
                bVar8 = true;
            }
        }
    }
    if (NOT bVar8)
    {
        (uParam0^) = 26;
    }
    return;
}

void sub_23372(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        (uParam2^) = 0;
        break;
        case 1:
        (uParam1^) = 0;
        (uParam2^) = 1;
        break;
        case 2:
        (uParam1^) = 0;
        (uParam2^) = 2;
        break;
        case 3:
        (uParam1^) = 0;
        (uParam2^) = 3;
        break;
        case 4:
        (uParam1^) = 1;
        (uParam2^) = 0;
        break;
        case 19:
        (uParam1^) = 2;
        (uParam2^) = 0;
        break;
        case 20:
        (uParam1^) = 2;
        (uParam2^) = 1;
        break;
        case 21:
        (uParam1^) = 2;
        (uParam2^) = 2;
        break;
        case 22:
        (uParam1^) = 2;
        (uParam2^) = 3;
        break;
        case 23:
        (uParam1^) = 2;
        (uParam2^) = 4;
        break;
        case 24:
        (uParam1^) = 3;
        (uParam2^) = 0;
        break;
        case 14:
        (uParam1^) = 4;
        (uParam2^) = 0;
        break;
        case 15:
        (uParam1^) = 4;
        (uParam2^) = 1;
        break;
        case 16:
        (uParam1^) = 4;
        (uParam2^) = 2;
        break;
        case 17:
        (uParam1^) = 4;
        (uParam2^) = 3;
        break;
        case 18:
        (uParam1^) = 4;
        (uParam2^) = 4;
        break;
        case 8:
        (uParam1^) = 5;
        (uParam2^) = 0;
        break;
        case 9:
        (uParam1^) = 5;
        (uParam2^) = 1;
        break;
        case 10:
        (uParam1^) = 5;
        (uParam2^) = 2;
        break;
        case 11:
        (uParam1^) = 6;
        (uParam2^) = 0;
        break;
        case 12:
        (uParam1^) = 6;
        (uParam2^) = 1;
        break;
        case 13:
        (uParam1^) = 6;
        (uParam2^) = 2;
        break;
        case 5:
        (uParam1^) = 7;
        (uParam2^) = 0;
        break;
        case 6:
        (uParam1^) = 7;
        (uParam2^) = 1;
        break;
        case 7:
        (uParam1^) = 7;
        (uParam2^) = 2;
        break;
        case 25:
        (uParam1^) = 7;
        (uParam2^) = 3;
        break;
        default:
          case 26:
        (uParam1^) = 2147483647;
        (uParam2^) = 2147483647;
    }
    return;
}

string sub_24395(unknown uParam0)
{
    char[64] cVar3;

    switch (uParam0)
    {
        case 0:
        return "WARDROBE_CHANGE_TOP";
        break;
        case 1:
        return "WARDROBE_CHANGE_TOP_ZIP";
        break;
        case 2:
        return "WARDROBE_CHANGE_JACKET_LEATHER";
        break;
        case 3:
        return "WARDROBE_CHANGE_JACKET_LEATHER_ZIP";
        break;
        case 4:
        return "WARDROBE_CHANGE_PANTS";
        break;
        case 5:
        return "WARDROBE_CHANGE_PANTS_ZIP";
        break;
        case 6:
        return "WARDROBE_CHANGE_SHOES";
        break;
        case 7:
        SCRIPT_ASSERT( "GET_CLOTHES_AUDIO(number_of_clothes_audio)" );
        return "WARDROBE_CHANGE_SHOES";
        break;
    }
    StrCopy( ref cVar3, "GET_CLOTHES_AUDIO(unknown", 64 );
    ConcatString(ref cVar3, uParam0, 64);
    ConcatString(ref cVar3, ")", 64);
    SCRIPT_ASSERT( ref cVar3 );
    return "GET_CLOTHES_AUDIO(unknown this_clothes_audio)";
}

void sub_25303(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_25316( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_516(), 5 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_516(), 5 );
    if ((iVar5 != iVar3) || (iVar6 != iVar4))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_516(), 5, iVar3, iVar4 );
    }
    return;
}

void sub_25316(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        (uParam2^) = 0;
        break;
        case 1:
        (uParam1^) = 0;
        (uParam2^) = 1;
        break;
        case 7:
        (uParam1^) = 1;
        (uParam2^) = 0;
        break;
        case 8:
        (uParam1^) = 1;
        (uParam2^) = 1;
        break;
        case 9:
        (uParam1^) = 1;
        (uParam2^) = 2;
        break;
        case 13:
        (uParam1^) = 2;
        (uParam2^) = 0;
        break;
        case 14:
        (uParam1^) = 2;
        (uParam2^) = 1;
        break;
        case 15:
        (uParam1^) = 2;
        (uParam2^) = 2;
        break;
        case 2:
        (uParam1^) = 3;
        (uParam2^) = 0;
        break;
        case 3:
        (uParam1^) = 3;
        (uParam2^) = 1;
        break;
        case 10:
        (uParam1^) = 4;
        (uParam2^) = 0;
        break;
        case 11:
        (uParam1^) = 4;
        (uParam2^) = 1;
        break;
        case 12:
        (uParam1^) = 4;
        (uParam2^) = 2;
        break;
        case 16:
        (uParam1^) = 5;
        (uParam2^) = 0;
        break;
        case 17:
        (uParam1^) = 5;
        (uParam2^) = 1;
        break;
        case 18:
        (uParam1^) = 5;
        (uParam2^) = 2;
        break;
        case 4:
        (uParam1^) = 6;
        (uParam2^) = 0;
        break;
        case 5:
        (uParam1^) = 6;
        (uParam2^) = 1;
        break;
        case 6:
        (uParam1^) = 6;
        (uParam2^) = 2;
        break;
        case 19:
        (uParam1^) = 1;
        (uParam2^) = 3;
        break;
        default:
          case 20:
        (uParam1^) = 2147483647;
        (uParam2^) = 2147483647;
    }
    return;
}

string sub_25937(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam1)
    {
        case 0:
        return "CLOTHES_PRINT_POOR";
        break;
        case 1:
        return "CLOTHES_PRINT_BOUGHT";
        break;
        case 2:
        return "CLOTHES_PRINT_BUY_HELP";
        break;
        case 3:
        switch (uParam0)
        {
            case 0:
            if (NOT g_U8378)
            {
                return "buy_FEET_0_0";
            }
            else
            {
                return "buy_FEET_0_0_A";
            }
            break;
            case 1:
            if (NOT g_U8378)
            {
                return "buy_FEET_0_1";
            }
            else
            {
                return "buy_FEET_0_1_A";
            }
            break;
            case 7:
            if (NOT g_U8378)
            {
                return "buy_FEET_1_0";
            }
            else
            {
                return "buy_FEET_1_0_A";
            }
            break;
            case 8:
            if (NOT g_U8378)
            {
                return "buy_FEET_1_1";
            }
            else
            {
                return "buy_FEET_1_1_A";
            }
            break;
            case 9:
            if (NOT g_U8378)
            {
                return "buy_FEET_1_2";
            }
            else
            {
                return "buy_FEET_1_2_A";
            }
            break;
            case 13:
            if (NOT g_U8378)
            {
                return "buy_FEET_2_0";
            }
            else
            {
                return "buy_FEET_2_0_A";
            }
            break;
            case 14:
            if (NOT g_U8378)
            {
                return "buy_FEET_2_1";
            }
            else
            {
                return "buy_FEET_2_1_A";
            }
            break;
            case 15:
            if (NOT g_U8378)
            {
                return "buy_FEET_2_2";
            }
            else
            {
                return "buy_FEET_2_2_A";
            }
            break;
            case 2:
            if (NOT g_U8378)
            {
                return "buy_FEET_3_0";
            }
            else
            {
                return "buy_FEET_3_0_A";
            }
            break;
            case 3:
            if (NOT g_U8378)
            {
                return "buy_FEET_3_1";
            }
            else
            {
                return "buy_FEET_3_1_A";
            }
            break;
            case 10:
            if (NOT g_U8378)
            {
                return "buy_FEET_4_0";
            }
            else
            {
                return "buy_FEET_4_0_A";
            }
            break;
            case 11:
            if (NOT g_U8378)
            {
                return "buy_FEET_4_1";
            }
            else
            {
                return "buy_FEET_4_1_A";
            }
            break;
            case 12:
            if (NOT g_U8378)
            {
                return "buy_FEET_4_2";
            }
            else
            {
                return "buy_FEET_4_2_A";
            }
            break;
            case 16:
            if (NOT g_U8378)
            {
                return "buy_FEET_5_0";
            }
            else
            {
                return "buy_FEET_5_0_A";
            }
            break;
            case 17:
            if (NOT g_U8378)
            {
                return "buy_FEET_5_1";
            }
            else
            {
                return "buy_FEET_5_1_A";
            }
            break;
            case 18:
            if (NOT g_U8378)
            {
                return "buy_FEET_5_2";
            }
            else
            {
                return "buy_FEET_5_2_A";
            }
            break;
            case 4:
            if (NOT g_U8378)
            {
                return "buy_FEET_6_0";
            }
            else
            {
                return "buy_FEET_6_0_A";
            }
            break;
            case 5:
            if (NOT g_U8378)
            {
                return "buy_FEET_6_1";
            }
            else
            {
                return "buy_FEET_6_1_A";
            }
            break;
            case 6:
            if (NOT g_U8378)
            {
                return "buy_FEET_6_2";
            }
            else
            {
                return "buy_FEET_6_2_A";
            }
            break;
            case 19:
            return "buy_FEET_1_3";
            break;
            default:
              case 20: return "NUMBER_OF_PLAYER_CLOTHES_FEET";
        }
        break;
        default:
          case 4: return "NUMBER_OF_TORSO_PRINT";
    }
    return "get_feet_print_here()";
}

string sub_27606(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return "clo_FEET_0_0";
        break;
        case 1:
        return "clo_FEET_0_1";
        break;
        case 7:
        return "clo_FEET_1_0";
        break;
        case 8:
        return "clo_FEET_1_1";
        break;
        case 9:
        return "clo_FEET_1_2";
        break;
        case 13:
        return "clo_FEET_2_0";
        break;
        case 14:
        return "clo_FEET_2_1";
        break;
        case 15:
        return "clo_FEET_2_2";
        break;
        case 2:
        return "clo_FEET_3_0";
        break;
        case 3:
        return "clo_FEET_3_1";
        break;
        case 10:
        return "clo_FEET_4_0";
        break;
        case 11:
        return "clo_FEET_4_1";
        break;
        case 12:
        return "clo_FEET_4_2";
        break;
        case 16:
        return "clo_FEET_5_0";
        break;
        case 17:
        return "clo_FEET_5_1";
        break;
        case 18:
        return "clo_FEET_5_2";
        break;
        case 4:
        return "clo_FEET_6_0";
        break;
        case 5:
        return "clo_FEET_6_1";
        break;
        case 6:
        return "clo_FEET_6_2";
        break;
        case 19:
        return "clo_FEET_1_3";
        break;
        case 20: return "NUMBER_OF_PLAYER_CLOTHES_FEET";
    }
    SCRIPT_ASSERT( "get_feet_americanAmbiance_name - null" );
    return "null feet";
}

void sub_28392(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12)
{
    sub_17536( uParam1 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    SET_USE_HIGHDOF( 1 );
    CREATE_CAM( 14, uParam3 );
    SET_CAM_POS( (uParam3^), uParam6._fU0, uParam6._fU4, uParam6._fU8 );
    SET_CAM_ROT( (uParam3^), uParam9._fU0, uParam9._fU4, uParam9._fU8 );
    SET_CAM_FOV( (uParam3^), uParam12 );
    SET_CAM_ACTIVE( (uParam3^), 1 );
    SET_CAM_NEAR_DOF( (uParam3^), 0.50000000 );
    SET_CAM_FAR_DOF( (uParam3^), 5.00000000 );
    FREEZE_CHAR_POSITION( sub_516(), 0 );
    SET_PLAYER_CONTROL( sub_583(), 0 );
    SET_EVERYONE_IGNORE_PLAYER( sub_583(), 1 );
    SET_CAM_PROPAGATE( (uParam3^), 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    GET_GAME_TIMER( uParam5 );
    g_U8220 = uParam2;
    sub_749( 2, "BLANK" );
    sub_749( 2, uParam4 );
    sub_28635( uParam0 );
    if ((IS_SCREEN_FADED_OUT()) || (IS_SCREEN_FADING_OUT()))
    {
        DO_SCREEN_FADE_IN( 0 );
    }
    while (sub_29662())
    {
        WAIT( 0 );
    }
    return;
}

void sub_28635(unknown uParam0)
{
    unknown uVar3;
    int iVar4;
    int I;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    vector vVar11;
    float fVar14;

    GET_GROUP_SIZE( sub_2366(), ref uVar3, ref iVar4 );
    if (iVar4 > 0)
    {
        for ( I = 0; I < iVar4; I++ )
        {
            GET_GROUP_MEMBER( sub_2366(), I, ref uVar10 );
            if ((NOT (IS_CHAR_INJURED( uVar10 ))) AND (IS_PLAYER_PLAYING( sub_583() )))
            {
                vVar11 = {0.00000000, 0.00000000, 0.00000000};
                fVar14 = 0.00000000;
                sub_28760( uParam0, I, ref vVar11, ref fVar14 );
                SET_CHAR_COORDINATES( uVar10, vVar11.x, vVar11.y, vVar11.z );
                SET_CHAR_HEADING( uVar10, fVar14 );
                TASK_LOOK_AT_CHAR( uVar10, sub_516(), -1, 0 );
                TASK_START_SCENARIO_AT_POSITION( uVar10, "Scenario_Standing", vVar11, fVar14 );
            }
        }
    }
    return;
}

void sub_28760(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    switch (uParam0)
    {
        case 0:
        switch (uParam1)
        {
            case 0:
            (uParam2^) = {890.49650000, -444.29400000, 14.86020000};
            (uParam3^) = 99.11680000;
            break;
            case 1:
            (uParam2^) = {890.65440000, -442.71360000, 14.86020000};
            (uParam3^) = 133.18220000;
            break;
            case 2:
            (uParam2^) = {891.08420000, -441.97070000, 14.87890000};
            (uParam3^) = 121.98810000;
            break;
            default:
            (uParam2^) = {890.49650000, -444.29400000, 14.86020000};
            (uParam3^) = 99.11680000;
        }
        break;
        case 1:
        switch (uParam1)
        {
            case 0:
            (uParam2^) = {-281.89270000, 1356.71500000, 24.63260000};
            (uParam3^) = 21.38890000;
            break;
            case 1:
            (uParam2^) = {-280.27220000, 1356.26300000, 24.63270000};
            (uParam3^) = 32.86620000;
            break;
            case 2:
            (uParam2^) = {-278.69550000, 1356.63500000, 24.63260000};
            (uParam3^) = 10.83960000;
            break;
            default:
            (uParam2^) = {-278.69550000, 1356.63500000, 24.63260000};
            (uParam3^) = 10.83960000;
        }
        break;
        case 2:
        GET_CHAR_COORDINATES( sub_516(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        switch (sub_16688( uVar6 ))
        {
            case 0:
            switch (uParam1)
            {
                case 0:
                (uParam2^) = {23.41800000, 807.56090000, 13.76190000};
                (uParam3^) = 202.32040000;
                break;
                case 1:
                (uParam2^) = {21.89330000, 806.71130000, 13.76190000};
                (uParam3^) = 143.10150000;
                break;
                case 2:
                (uParam2^) = {22.42110000, 806.66620000, 13.76190000};
                (uParam3^) = 192.01780000;
                break;
                default:
                (uParam2^) = {22.42110000, 806.66620000, 13.76190000};
                (uParam3^) = 192.01780000;
            }
            break;
            case 1:
            switch (uParam1)
            {
                case 0:
                (uParam2^) = {11.98550000, -661.31180000, 13.86160000};
                (uParam3^) = 196.52500000;
                break;
                case 1:
                (uParam2^) = {11.19710000, -661.58840000, 13.86160000};
                (uParam3^) = 202.11210000;
                break;
                case 2:
                (uParam2^) = {10.10630000, -661.25280000, 13.86160000};
                (uParam3^) = 197.13490000;
                break;
                default:
                (uParam2^) = {10.10630000, -661.25280000, 13.86160000};
                (uParam3^) = 197.13490000;
            }
            break;
        }
        break;
    }
    return;
}

int sub_29662()
{
    if (IS_CONTROL_PRESSED( 2, 23 ))
    {
        return 1;
    }
    return 0;
}

void sub_29767()
{
    if (NOT (IS_CHAR_DEAD( l_U1330 )))
    {
        SET_CHAR_HEADING( l_U1330, 37.94300000 );
        SET_CHAR_COORDINATES( l_U1330, 888.82510000, -447.78480000, 14.86010000 );
        CLEAR_CHAR_TASKS( l_U1330 );
        l_U1405 = 0;
    }
    return;
}

int sub_30344(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, int iParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28)
{
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;

    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( uParam10, uParam0, ref uVar31 );
    if ((NOT g_U8355) AND (NOT g_U15654[57]))
    {
        if (g_U8275[uParam7])
        {
            if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_R3", uParam9 )))
            {
                sub_21117( "LB_TRYON_R3", uParam9, uParam28 );
            }
            return 0;
        }
    }
    if ((sub_20064( 2, 0 )) AND (NOT (uParam11^)))
    {
        if (((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_POOR_L" ))) AND (NOT (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( "HELP_BOUGHT_L", iParam8 )))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_BOUGHT_L_F" ))))
        {
            if (sub_20445( 2, "BLANK", 0 ))
            {
                sub_749( 2, "BLANK" );
                (uParam11^) = 1;
            }
            if (NOT g_U8275[uParam7])
            {
                if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam9 )))
                {
                    sub_21117( "LB_TRYON", uParam9, uParam28 );
                }
            }
            else if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", uParam9 )))
            {
                sub_21117( "LB_TRYON_B", uParam9, uParam28 );
            }
        }
    }
    else if (((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam9 )) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", uParam9 ))) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_R3", uParam9 )))
    {
        CLEAR_HELP();
    }
    if ((uParam11^))
    {
        while (NOT (sub_21403( ref uParam12, uVar31, uParam3, uParam6, uParam27, 3, 0 )))
        {
            WAIT( 0 );
        }
        sub_1158( sub_516(), ref l_U178, 0 );
        sub_30878( uParam7 );
        TASK_PLAY_ANIM( sub_516(), "examine legs", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
        if (NOT g_U8378)
        {
            PRINT_WITH_NUMBER_NOW( "BUY_TROUSERS", iParam8, 7500, 1 );
        }
        else
        {
            PRINT_WITH_NUMBER_NOW( "BUY_TROUSERS_A", iParam8 / 2, 7500, 1 );
        }
        PRINT_HELP_FOREVER( "HELP_BUY_L" );
        sub_28392( uParam27, ref uParam12, 3, uParam13, ref uParam16, uParam14, uParam20, uParam23, uParam26 );
        (uParam11^) = 0;
        (uParam15^) = iParam8;
        return 1;
    }
    return 0;
}

void sub_30878(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_23372( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_516(), 2 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_516(), 2 );
    if ((iVar5 != iVar3) || (iVar6 != iVar4))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_516(), 2, iVar3, iVar4 );
    }
    return;
}

int sub_31410(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, int iParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28)
{
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;

    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( uParam10, uParam0, ref uVar31 );
    if ((NOT g_U8355) AND (NOT g_U15654[57]))
    {
        if (g_U8229[uParam7])
        {
            if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_R3", uParam9 )))
            {
                sub_21117( "LB_TRYON_R3", uParam9, uParam28 );
            }
            return 0;
        }
    }
    if ((sub_20064( 2, 0 )) AND (NOT (uParam11^)))
    {
        if (((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( sub_31552( uParam7, 0, 0 ) ))) AND (NOT (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( sub_31552( uParam7, 1, 0 ), iParam8 )))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( sub_31552( uParam7, 1, 1 ) ))))
        {
            if (sub_20445( 2, "BLANK", 0 ))
            {
                sub_749( 2, "BLANK" );
                (uParam11^) = 1;
            }
            if (NOT g_U8229[uParam7])
            {
                if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam9 )))
                {
                    sub_21117( "LB_TRYON", uParam9, uParam28 );
                }
            }
            else if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", uParam9 )))
            {
                sub_21117( "LB_TRYON_B", uParam9, uParam28 );
            }
        }
    }
    else if (((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam9 )) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", uParam9 ))) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_R3", uParam9 )))
    {
        CLEAR_HELP();
    }
    if ((uParam11^))
    {
        while (NOT (sub_21403( ref uParam12, uVar31, uParam3, uParam6, uParam27, 2, 0 )))
        {
            WAIT( 0 );
        }
        sub_1158( sub_516(), ref l_U178, 0 );
        sub_33116( uParam7 );
        TASK_PLAY_ANIM( sub_516(), "examine shirt", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
        if (NOT g_U8378)
        {
            PRINT_WITH_NUMBER_NOW( sub_31552( uParam7, 3, 0 ), iParam8, 7500, 1 );
        }
        else
        {
            PRINT_WITH_NUMBER_NOW( sub_31552( uParam7, 3, 0 ), iParam8 / 2, 7500, 1 );
        }
        PRINT_HELP_FOREVER( sub_31552( uParam7, 2, 0 ) );
        sub_28392( uParam27, ref uParam12, 2, uParam13, ref uParam16, uParam14, uParam20, uParam23, uParam26 );
        (uParam11^) = 0;
        (uParam15^) = iParam8;
        return 1;
    }
    return 0;
}

string sub_31552(unknown uParam0, unknown uParam1, boolean bParam2)
{
    int iVar5;

    switch (uParam0)
    {
        case 0:
        case 1:
        case 2:
        iVar5 = 0;
        break;
        case 3:
        case 4:
        case 5:
        iVar5 = 0;
        break;
        case 6:
        case 7:
        case 8:
        iVar5 = 0;
        break;
        case 9:
        case 10:
        case 11:
        iVar5 = 0;
        break;
        case 12:
        case 13:
        case 14:
        iVar5 = 0;
        break;
        case 15:
        case 16:
        case 17:
        iVar5 = 0;
        break;
        case 18:
        case 19:
        case 20:
        iVar5 = 1;
        break;
        case 21:
        case 22:
        case 23:
        iVar5 = 0;
        break;
        case 24:
        case 25:
        case 26:
        case 27:
        iVar5 = 2;
        break;
        case 28:
        case 29:
        case 30:
        iVar5 = 3;
        break;
        case 31:
        case 32:
        case 33:
        iVar5 = 3;
        break;
        case 34:
        case 35:
        case 36:
        case 37:
        iVar5 = 3;
        break;
        case 38:
        case 39:
        case 40:
        iVar5 = 3;
        break;
        case 41:
        case 42:
        case 43:
        case 44:
        iVar5 = 4;
        break;
        case 45: iVar5 = 5;
    }
    switch (iVar5)
    {
        case 0:
        switch (uParam1)
        {
            case 0:
            return "HELP_POOR_T";
            break;
            case 1:
            if (NOT bParam2)
            {
                return "HELP_BOUGHT_T";
            }
            else
            {
                return "HELP_BOUGHT_T_F";
            }
            break;
            case 2:
            return "HELP_BUY_T";
            break;
            case 3:
            if (NOT g_U8378)
            {
                return "BUY_JACKET";
            }
            else
            {
                return "BUY_JACKET_A";
            }
            break;
        }
        break;
        case 1:
        switch (uParam1)
        {
            case 0:
            return "HELP_POOR_S";
            break;
            case 1:
            if (NOT bParam2)
            {
                return "HELP_BOUGHT_S";
            }
            else
            {
                return "HELP_BOUGHT_S_F";
            }
            break;
            case 2:
            return "HELP_BUY_S";
            break;
            case 3:
            if (NOT g_U8378)
            {
                return "BUY_SHIRT";
            }
            else
            {
                return "BUY_SHIRT_A";
            }
            break;
        }
        break;
        case 2:
        switch (uParam1)
        {
            case 0:
            return "HELP_POOR_J";
            break;
            case 1:
            if (NOT bParam2)
            {
                return "HELP_BOUGHT_J";
            }
            else
            {
                return "HELP_BOUGHT_J_F";
            }
            break;
            case 2:
            return "HELP_BUY_J";
            break;
            case 3:
            if (NOT g_U8378)
            {
                return "BUY_SWEATER";
            }
            else
            {
                return "BUY_SWEATER_A";
            }
            break;
        }
        break;
    }
    return "somethings gone wrong in get_torso_print_here()";
}

void sub_33116(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_21667( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_516(), 1 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_516(), 1 );
    if ((iVar5 != iVar3) || (iVar6 != iVar4))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_516(), 1, iVar3, iVar4 );
    }
    return;
}

int sub_33586(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18)
{
    int I;
    boolean bVar22;
    unknown uVar23;

    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( uParam9, uParam0, ref l_U1386 );
    if ((sub_20064( 2, 0 )) AND (NOT l_U1324))
    {
        if (((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_POOR_H" ))) AND (NOT (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( "HELP_BOUGHT_H", iParam7 )))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_BOUGHT_H_F" ))))
        {
            if (sub_20445( 2, "BLANK", 0 ))
            {
                sub_749( 2, "BLANK" );
                l_U1324 = 1;
                l_U1325 = 1;
            }
            if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam8 )))
            {
                sub_21117( "LB_TRYON", uParam8, uParam18 );
            }
        }
    }
    else if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam8 )) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", uParam8 )))
    {
        CLEAR_HELP();
    }
    if (l_U1324)
    {
        while (NOT (sub_21403( ref l_U1368, l_U1386, uParam3, uParam6, 0, 0, 1 )))
        {
            WAIT( 0 );
        }
        bVar22 = false;
        for ( I = 0; I < l_U1307; I++ )
        {
            if (NOT bVar22)
            {
                if (NOT g_U8323[l_U1307[I]])
                {
                    uVar23 = l_U1307[I];
                    bVar22 = true;
                }
            }
        }
        if (NOT bVar22)
        {
            uVar23 = l_U1307[0];
        }
        sub_1158( sub_516(), ref l_U178, 0 );
        sub_34043( uVar23 );
        SET_PLAYER_CONTROL( sub_583(), 0 );
        TASK_PLAY_ANIM( sub_516(), "Examine Hat_b", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
        if (NOT g_U8378)
        {
            PRINT_WITH_NUMBER_NOW( sub_34655( uVar23, 3, 0 ), iParam7, 7500, 1 );
        }
        else
        {
            PRINT_WITH_NUMBER_NOW( sub_34655( uVar23, 3, 0 ), iParam7 / 2, 7500, 1 );
        }
        if (bVar22)
        {
            PRINT_HELP( "HELP_BUY_H" );
        }
        else
        {
            PRINT_HELP_FOREVER_WITH_STRING( "HELP_OWN_H", sub_35204( uVar23 ) );
        }
        sub_28392( 0, ref l_U1368, 0, ref l_U1369, "BLANK", uParam10, uParam11, uParam14, uParam17 );
        l_U1324 = 0;
        ProtectedSet(l_U1327, iParam7);
        sub_20720();
        return 1;
    }
    return 0;
}

void sub_34043(int iParam0)
{
    int iVar3;
    int iVar4;

    if (iParam0 == 3)
    {
        sub_34043( -1 );
        sub_34068( -1 );
        if (((GET_CHAR_DRAWABLE_VARIATION( sub_516(), 8 )) != 1) || ((GET_CHAR_TEXTURE_VARIATION( sub_516(), 8 )) != 0))
        {
            SET_CHAR_COMPONENT_VARIATION( sub_516(), 8, 1, 0 );
        }
    }
    else
    {
        sub_34323( iParam0, ref iVar3 );
        GET_CHAR_PROP_INDEX( sub_516(), 0, ref iVar4 );
        if (((GET_CHAR_DRAWABLE_VARIATION( sub_516(), 8 )) != 0) || ((GET_CHAR_TEXTURE_VARIATION( sub_516(), 8 )) != 0))
        {
            SET_CHAR_COMPONENT_VARIATION( sub_516(), 8, 0, 0 );
        }
        if (iVar4 != iVar3)
        {
            if (iVar3 < 0)
            {
                CLEAR_CHAR_PROP( sub_516(), 0 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( sub_516(), 0, iVar3 );
            }
        }
    }
    return;
}

void sub_34068(unknown uParam0)
{
    int iVar3;
    int iVar4;

    sub_34080( uParam0, ref iVar3 );
    GET_CHAR_PROP_INDEX( sub_516(), 1, ref iVar4 );
    if (iVar4 != iVar3)
    {
        if (iVar3 < 0)
        {
            CLEAR_CHAR_PROP( sub_516(), 1 );
        }
        else
        {
            SET_CHAR_PROP_INDEX( sub_516(), 1, iVar3 );
        }
    }
    return;
}

void sub_34080(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case -1:
        (uParam1^) = -1;
        break;
        case 0:
        (uParam1^) = 0;
        break;
        case 1:
        (uParam1^) = 1;
        break;
        case 2:
        (uParam1^) = 2;
        break;
        default:
          case 3: (uParam1^) = 2147483647;
    }
    return;
}

void sub_34323(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case -1:
        (uParam1^) = -1;
        break;
        case 0:
        (uParam1^) = 0;
        break;
        case 1:
        (uParam1^) = 1;
        break;
        case 2:
        (uParam1^) = 2;
        break;
        case 3:
        (uParam1^) = 99;
        break;
        default:
          case 4: (uParam1^) = 2147483647;
    }
    return;
}

string sub_34655(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    switch (uParam1)
    {
        case 0:
        return "CLOTHES_PRINT_POOR";
        break;
        case 1:
        return "CLOTHES_PRINT_BOUGHT";
        break;
        case 2:
        return "CLOTHES_PRINT_BUY_HELP";
        break;
        case 3:
        switch (uParam0)
        {
            case 0:
            if (NOT g_U8378)
            {
                return "buy_HEAD_0";
            }
            else
            {
                return "buy_HEAD_0_A";
            }
            break;
            case 1:
            if (NOT g_U8378)
            {
                return "buy_HEAD_1";
            }
            else
            {
                return "buy_HEAD_1_A";
            }
            break;
            case 2:
            return "buy_HEAD_2";
            break;
            case 3:
            return "buy_HEAD_3";
            break;
            case -1:
            default:
              case 4: return "NUMBER_OF_PLAYER_CLOTHES_FEET";
        }
        break;
        default:
          case 4: return "NUMBER_OF_TORSO_PRINT";
    }
    return "get_head_print_here";
}

string sub_35204(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return "clo_HEAD_0";
        break;
        case 1:
        return "clo_HEAD_1";
        break;
        case 2:
        return "clo_HEAD_2";
        break;
        case 3:
        return "clo_HEAD_3";
        break;
        case -1:
        return "clo_HEAD_NONE";
        break;
        case 4: return "NUMBER_OF_PLAYER_CLOTHES_HEAD";
    }
    SCRIPT_ASSERT( "get_head_americanAmbiance_name - null" );
    return "null head";
}

int sub_35746(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18)
{
    int I;
    boolean bVar22;
    unknown uVar23;

    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( uParam9, uParam0, ref l_U1386 );
    if ((sub_20064( 2, 0 )) AND (NOT l_U1324))
    {
        if (((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_POOR_G" ))) AND (NOT (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( "HELP_BOUGHT_G", iParam7 )))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_BOUGHT_G_F" ))))
        {
            if (sub_20445( 2, "BLANK", 0 ))
            {
                sub_749( 2, "BLANK" );
                l_U1324 = 1;
                l_U1325 = 1;
            }
            if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam8 )))
            {
                sub_21117( "LB_TRYON", uParam8, uParam18 );
            }
        }
    }
    else if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam8 )) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", uParam8 )))
    {
        CLEAR_HELP();
    }
    if (l_U1324)
    {
        while (NOT (sub_21403( ref l_U1368, l_U1386, uParam3, uParam6, 0, 1, 1 )))
        {
            WAIT( 0 );
        }
        bVar22 = false;
        for ( I = 0; I < l_U1310; I++ )
        {
            if (NOT bVar22)
            {
                if (NOT g_U8328[l_U1310[I]])
                {
                    uVar23 = l_U1310[I];
                    bVar22 = true;
                }
            }
        }
        if (NOT bVar22)
        {
            uVar23 = l_U1310[0];
        }
        sub_1158( sub_516(), ref l_U178, 0 );
        sub_34068( uVar23 );
        SET_PLAYER_CONTROL( sub_583(), 0 );
        TASK_PLAY_ANIM( sub_516(), "Examine Glasses_b", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
        if (NOT g_U8378)
        {
            PRINT_WITH_NUMBER_NOW( sub_36290( uVar23, 3, 0 ), iParam7, 7500, 1 );
        }
        else
        {
            PRINT_WITH_NUMBER_NOW( sub_36290( uVar23, 3, 0 ), iParam7 / 2, 7500, 1 );
        }
        if (bVar22)
        {
            PRINT_HELP( "HELP_BUY_G" );
        }
        else
        {
            PRINT_HELP_FOREVER_WITH_STRING( "HELP_OWN_G", sub_36851( uVar23 ) );
        }
        sub_28392( 0, ref l_U1368, 1, ref l_U1369, "BLANK", uParam10, uParam11, uParam14, uParam17 );
        l_U1324 = 0;
        ProtectedSet(l_U1327, iParam7);
        sub_20720();
        return 1;
    }
    return 0;
}

string sub_36290(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam1)
    {
        case 0:
        return "CLOTHES_PRINT_POOR";
        break;
        case 1:
        return "CLOTHES_PRINT_BOUGHT";
        break;
        case 2:
        return "CLOTHES_PRINT_BUY_HELP";
        break;
        case 3:
        switch (uParam0)
        {
            case 0:
            if (NOT g_U8378)
            {
                return "buy_EYES_0";
            }
            else
            {
                return "buy_EYES_0_A";
            }
            break;
            case 1:
            if (NOT g_U8378)
            {
                return "buy_EYES_2";
            }
            else
            {
                return "buy_EYES_2_A";
            }
            break;
            case 2:
            if (NOT g_U8378)
            {
                return "buy_EYES_2";
            }
            else
            {
                return "buy_EYES_2_A";
            }
            break;
            case -1:
            default:
              case 3: return "NUMBER_OF_PLAYER_CLOTHES_FEET";
        }
        break;
        default:
          case 4:
        return "NUMBER_OF_TORSO_PRINT";
        break;
    }
    return "get_eyes_print_here()";
}

string sub_36851(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return "clo_EYES_0";
        break;
        case 1:
        return "clo_EYES_1";
        break;
        case 2:
        return "clo_EYES_2";
        break;
        case -1:
        return "clo_EYES_NONE";
        break;
        case 3: return "NUMBER_OF_PLAYER_CLOTHES_EYES";
    }
    SCRIPT_ASSERT( "get_eyes_americanAmbiance_name - null" );
    return "null eyes";
}

int sub_37968(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, int iParam33, unknown uParam34, unknown uParam35, unknown uParam36, unknown uParam37, unknown uParam38, unknown uParam39, unknown uParam40, unknown uParam41, unknown uParam42, unknown uParam43, unknown uParam44, unknown uParam45)
{
    int iVar48;

    if ((sub_14604( sub_516(), 80 )) AND (sub_14604( sub_516(), 88 )))
    {
        if (TIMERA() > iParam33)
        {
            TASK_PLAY_ANIM( sub_516(), "examine shirt", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
            GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref iParam33 );
        }
    }
    else
    {
        SETTIMERA( 0 );
    }
    if (g_U8378)
    {
        PRINTSTRING( "  * ALEX_HALF_PRICE_DISCOUNT: $" );
        PRINTINT( (uParam34^) );
        iVar48 = (uParam34^) / 2;
        PRINTSTRING( " becomes $" );
        PRINTINT( iVar48 );
        PRINTSTRING( "  (50%)\n" );
    }
    else
    {
        iVar48 = (uParam34^);
    }
    if (sub_38249())
    {
        if ((NOT (IS_SCORE_GREATER( sub_583(), iVar48 - 1 ))) AND (NOT sub_38329()))
        {
            CLEAR_PRINTS();
            PRINT_HELP( sub_31552( uParam0._fU76, 0, 0 ) );
            while (NOT (sub_38458( uParam35, uParam36, "null", "LB_TRYON", uParam37, 1, ref uParam38, 0 )))
            {
                WAIT( 0 );
            }
            return 1;
        }
        else
        {
            CLEAR_PRINTS();
            if (NOT sub_41109())
            {
                iVar48 = 0;
                switch (uParam37)
                {
                    case 0:
                    StrCopy( ref g_U8380, sub_31552( uParam0._fU76, 1, 1 ), 16 );
                    break;
                    case 1:
                    StrCopy( ref g_U8384, sub_31552( uParam0._fU76, 1, 1 ), 16 );
                    break;
                    case 2:
                    StrCopy( ref g_U8388, sub_31552( uParam0._fU76, 1, 1 ), 16 );
                    break;
                }
                PRINT_HELP( sub_31552( uParam0._fU76, 1, 1 ) );
            }
            else
            {
                PRINT_HELP_WITH_NUMBER( sub_31552( uParam0._fU76, 1, 0 ), iVar48 );
                switch (uParam37)
                {
                    case 0:
                    StrCopy( ref g_U8380, sub_31552( uParam0._fU76, 1, 0 ), 16 );
                    break;
                    case 1:
                    StrCopy( ref g_U8384, sub_31552( uParam0._fU76, 1, 0 ), 16 );
                    break;
                    case 2:
                    StrCopy( ref g_U8388, sub_31552( uParam0._fU76, 1, 0 ), 16 );
                    break;
                }
            }
            sub_41477( uParam37, uParam0._fU76, iVar48, uParam39, uParam45 );
            while (NOT (sub_38458( uParam35, uParam36, "null", "LB_TRYON", uParam37, 0, ref uParam38, 0 )))
            {
                WAIT( 0 );
            }
            (uParam34^) = iVar48;
            return 1;
        }
    }
    else if (sub_41789( "null" ))
    {
        CLEAR_HELP();
        while (NOT (sub_38458( uParam35, uParam36, "null", "LB_TRYON", uParam37, 1, ref uParam38, 0 )))
        {
            WAIT( 0 );
        }
        return 1;
    }
    else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( sub_31552( uParam0._fU76, 3, 0 ), 4, "", "", "", iVar48, -1, -1, -1, -1, -1 )))
    {
        PRINT_WITH_NUMBER( sub_31552( uParam0._fU76, 3, 0 ), iVar48, 7500, 1 );
    };;;
    DISPLAY_CASH( 1 );
    return 0;
}

int sub_38249()
{
    if ((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_38329()
{
    if (g_U8356)
    {
        if (g_U8355)
        {
            return 0;
        }
        else
        {
            return 1;
        }
        break;
    }
    return 0;
}

int sub_38458(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5, unknown uParam6, boolean bParam7)
{
    unknown uVar10;
    int iVar11;

    if (((NOT IS_SCREEN_FADED_OUT()) AND (NOT bParam7)) AND (bParam5))
    {
        if (NOT IS_SCREEN_FADING())
        {
            DO_SCREEN_FADE_OUT( 0 );
            if (bParam5)
            {
                if (sub_21512( g_U8220, ref uVar10 ))
                {
                    PLAY_SOUND_FROM_PED( -1, sub_24395( uVar10 ), sub_516() );
                }
            }
        }
        return 0;
        break;
    }
    while (sub_29662())
    {
        WAIT( 0 );
    }
    sub_749( 5, uParam2 );
    sub_749( 5, "LB_LEAVE_H" );
    sub_749( 5, "BLANK" );
    sub_749( 2, uParam3 );
    sub_749( 2, "BLANK" );
    CLEAR_CHAR_TASKS( sub_516() );
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_516(), 0 );
    if (bParam5)
    {
        sub_1129( sub_516(), l_U178 );
    }
    GET_GAME_TIMER( ref iVar11 );
    INCREMENT_INT_STAT_NO_MESSAGE( 50, iVar11 - (uParam6^) );
    switch (uParam4)
    {
        case 0:
        g_U8362 += iVar11 - (uParam6^);
        break;
        case 1:
        g_U8363 += iVar11 - (uParam6^);
        break;
        case 2:
        g_U8364 += iVar11 - (uParam6^);
        break;
    }
    (uParam6^) = 0;
    REGISTER_STRING_FOR_FRONTEND_STAT( 668, sub_38831() );
    CLEAR_PRINTS();
    SET_CAM_BEHIND_PED( sub_516() );
    FREEZE_CHAR_POSITION( sub_516(), 0 );
    sub_2314();
    g_U8228 = 0;
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 0 );
    }
    SET_PLAYER_CONTROL( sub_583(), 1 );
    SET_EVERYONE_IGNORE_PLAYER( sub_583(), 0 );
    sub_970();
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    sub_18990( uParam0 );
    SET_USE_HIGHDOF( 0 );
    if (DOES_CAM_EXIST( (uParam1^) ))
    {
        if (IS_CAM_PROPAGATING( (uParam1^) ))
        {
            SET_CAM_PROPAGATE( (uParam1^), 0 );
            SET_CAM_ACTIVE( (uParam1^), 0 );
        }
        DESTROY_CAM( (uParam1^) );
    }
    sub_2357();
    g_U8220 = 6;
    return 1;
}

string sub_38831()
{
    if (CAN_THE_STAT_HAVE_STRING( 668 ))
    {
        switch (sub_38855())
        {
            case 0:
            return "BINCO";
            break;
            case 1:
            return "ZIP";
            break;
            case 2:
            return "PERSEUS";
            break;
            case 4:
            PRINTSTRING( "  ** GET_NAME_FAVOURITE_SHOP('NUMBER_OF_CLOTHES_SHOPS') **\n" );
            PRINTSTRING( "  $ L" );
            PRINTINT( g_U8365 );
            PRINTSTRING( ", M" );
            PRINTINT( g_U8366 );
            PRINTSTRING( ", H" );
            PRINTINT( g_U8367 );
            PRINTNL();
            PRINTSTRING( "  # L" );
            PRINTINT( g_U8368 );
            PRINTSTRING( ", M" );
            PRINTINT( g_U8369 );
            PRINTSTRING( ", H" );
            PRINTINT( g_U8370 );
            PRINTNL();
            PRINTSTRING( "  @ L" );
            PRINTINT( g_U8362 );
            PRINTSTRING( ", M" );
            PRINTINT( g_U8363 );
            PRINTSTRING( ", H" );
            PRINTINT( g_U8364 );
            PRINTNL();
            return "null";
            break;
        }
        PRINTSTRING( "  ** GET_NAME_FAVOURITE_SHOP(" );
        PRINTINT( sub_38855() );
        PRINTSTRING( ") **\n" );
        PRINTSTRING( "  $ L" );
        PRINTINT( g_U8365 );
        PRINTSTRING( ", M" );
        PRINTINT( g_U8366 );
        PRINTSTRING( ", H" );
        PRINTINT( g_U8367 );
        PRINTNL();
        PRINTSTRING( "  # L" );
        PRINTINT( g_U8368 );
        PRINTSTRING( ", M" );
        PRINTINT( g_U8369 );
        PRINTSTRING( ", H" );
        PRINTINT( g_U8370 );
        PRINTNL();
        PRINTSTRING( "  @ L" );
        PRINTINT( g_U8362 );
        PRINTSTRING( ", M" );
        PRINTINT( g_U8363 );
        PRINTSTRING( ", H" );
        PRINTINT( g_U8364 );
        PRINTNL();
        SCRIPT_ASSERT( "invalid get_shop_most_money()" );
        return "invalid get_shop_most_money() - ALWYN FUCKED UP AGAIN!!!";
        break;
    }
    return "GET_NAME_FAVOURITE_SHOP()";
}

void sub_38855()
{
    if ((g_U8365 > g_U8366) AND (g_U8365 > g_U8367))
    {
        return 0;
        break;
    }
    if ((g_U8366 > g_U8365) AND (g_U8366 > g_U8367))
    {
        return 1;
        break;
    }
    if ((g_U8367 > g_U8365) AND (g_U8367 > g_U8366))
    {
        return 2;
        break;
    }
    if (((g_U8365 == 0) AND (g_U8365 == 0)) AND (g_U8365 == 0))
    {
        return sub_39004( 8 );
        break;
    }
    if (((g_U8365 == g_U8366) AND (g_U8366 != g_U8367)) AND (g_U8367 != g_U8365))
    {
        return sub_39004( 5 );
        break;
    }
    if (((g_U8365 != g_U8366) AND (g_U8366 == g_U8367)) AND (g_U8367 != g_U8365))
    {
        return sub_39004( 6 );
        break;
    }
    if (((g_U8365 != g_U8366) AND (g_U8366 != g_U8367)) AND (g_U8367 == g_U8365))
    {
        return sub_39004( 7 );
        break;
    }
    return sub_39004( 8 );
}

void sub_39004(int iParam0)
{
    if (((g_U8368 > g_U8369) AND (g_U8368 > g_U8370)) AND (((iParam0 == 5) || (iParam0 == 7)) || (iParam0 == 8)))
    {
        return 0;
        break;
    }
    if (((g_U8369 > g_U8368) AND (g_U8369 > g_U8370)) AND (((iParam0 == 6) || (iParam0 == 5)) || (iParam0 == 8)))
    {
        return 1;
        break;
    }
    if (((g_U8370 > g_U8368) AND (g_U8370 > g_U8369)) AND (((iParam0 == 7) || (iParam0 == 6)) || (iParam0 == 8)))
    {
        return 2;
        break;
    }
    if (((g_U8368 == 0) AND (g_U8368 == 0)) AND (g_U8368 == 0))
    {
        return sub_39198( 8 );
        break;
    }
    if ((((g_U8368 == g_U8369) AND (g_U8369 != g_U8370)) AND (g_U8370 != g_U8368)) AND ((iParam0 == 5) || (iParam0 == 8)))
    {
        return sub_39198( 5 );
        break;
    }
    if ((((g_U8368 != g_U8369) AND (g_U8369 == g_U8370)) AND (g_U8370 != g_U8368)) AND ((iParam0 == 6) || (iParam0 == 8)))
    {
        return sub_39198( 6 );
        break;
    }
    if ((((g_U8368 != g_U8369) AND (g_U8369 != g_U8370)) AND (g_U8370 == g_U8368)) AND ((iParam0 == 7) || (iParam0 == 8)))
    {
        return sub_39198( 7 );
        break;
    }
    return sub_39198( 8 );
}

int sub_39198(int iParam0)
{
    if (((g_U8362 > g_U8363) AND (g_U8362 > g_U8364)) AND (((iParam0 == 5) || (iParam0 == 7)) || (iParam0 == 8)))
    {
        return 0;
        break;
    }
    if (((g_U8363 > g_U8362) AND (g_U8363 > g_U8364)) AND (((iParam0 == 6) || (iParam0 == 5)) || (iParam0 == 8)))
    {
        return 1;
        break;
    }
    if (((g_U8364 > g_U8362) AND (g_U8364 > g_U8363)) AND (((iParam0 == 7) || (iParam0 == 6)) || (iParam0 == 8)))
    {
        return 2;
        break;
    }
    if (((g_U8362 == 0) AND (g_U8362 == 0)) AND (g_U8362 == 0))
    {
        return 4;
        break;
    }
    if ((((g_U8362 == g_U8363) AND (g_U8363 != g_U8364)) AND (g_U8364 != g_U8362)) AND ((iParam0 == 5) || (iParam0 == 8)))
    {
        return 5;
        break;
    }
    if ((((g_U8362 != g_U8363) AND (g_U8363 == g_U8364)) AND (g_U8364 != g_U8362)) AND ((iParam0 == 6) || (iParam0 == 8)))
    {
        return 6;
        break;
    }
    if ((((g_U8362 != g_U8363) AND (g_U8363 != g_U8364)) AND (g_U8364 == g_U8362)) AND ((iParam0 == 7) || (iParam0 == 8)))
    {
        return 7;
        break;
    }
    return 8;
}

int sub_41109()
{
    if (g_U8356)
    {
        if (NOT g_U8355)
        {
            g_U8355 = 1;
            return 0;
        }
        else
        {
            return 1;
        }
        break;
    }
    return 1;
}

void sub_41477(int iParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 92, iParam2 );
    ADD_SCORE( sub_583(), -1 * iParam2 );
    g_U8229[uParam1] = 1;
    switch (iParam0)
    {
        case 0:
        g_U8365 += iParam2;
        g_U8368++;
        break;
        case 1:
        g_U8366 += iParam2;
        g_U8369++;
        break;
        case 2:
        g_U8367 += iParam2;
        g_U8370++;
        break;
    }
    if (iParam0 != 3)
    {
        PLAY_SOUND_FRONTEND( -1, "WARDROBE_BUY" );
        sub_12166( 5, ref uParam3, iParam0, ref uParam9 );
    }
    return;
}

int sub_41789(unknown uParam0)
{
    if (sub_20064( 5, 0 ))
    {
        if (sub_20445( 5, uParam0, 0 ))
        {
            sub_749( 5, uParam0 );
            return 1;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_583() )))
    {
        sub_749( 5, uParam0 );
        return 1;
    }
    return 0;
}

int sub_42128(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, int iParam33, unknown uParam34, unknown uParam35, unknown uParam36, unknown uParam37, unknown uParam38, unknown uParam39, unknown uParam40, unknown uParam41, unknown uParam42, unknown uParam43, unknown uParam44, unknown uParam45)
{
    int iVar48;

    iVar48 = (uParam34^);
    if (g_U8378)
    {
        PRINTSTRING( "  * ALEX_HALF_PRICE_DISCOUNT: $" );
        PRINTINT( iVar48 );
        iVar48 = (uParam34^) / 2;
        PRINTSTRING( " becomes $" );
        PRINTINT( iVar48 );
        PRINTSTRING( "  (50%)\n" );
    }
    if (sub_38249())
    {
        if ((NOT (IS_SCORE_GREATER( sub_583(), iVar48 - 1 ))) AND (NOT sub_38329()))
        {
            CLEAR_PRINTS();
            PRINT_HELP( "HELP_POOR_L" );
            while (NOT (sub_38458( uParam35, uParam36, "null", "LB_TRYON", uParam37, 1, ref uParam38, 0 )))
            {
                WAIT( 0 );
            }
            return 1;
        }
        else
        {
            CLEAR_PRINTS();
            if (NOT sub_41109())
            {
                iVar48 = 0;
                switch (uParam37)
                {
                    case 0:
                    StrCopy( ref g_U8380, "HELP_BOUGHT_L_F", 16 );
                    break;
                    case 1:
                    StrCopy( ref g_U8384, "HELP_BOUGHT_L_F", 16 );
                    break;
                    case 2:
                    StrCopy( ref g_U8388, "HELP_BOUGHT_L_F", 16 );
                    break;
                }
                PRINT_HELP( "HELP_BOUGHT_L_F" );
            }
            else
            {
                PRINT_HELP_WITH_NUMBER( "HELP_BOUGHT_L", iVar48 );
                switch (uParam37)
                {
                    case 0:
                    StrCopy( ref g_U8380, "HELP_BOUGHT_L", 16 );
                    break;
                    case 1:
                    StrCopy( ref g_U8384, "HELP_BOUGHT_L", 16 );
                    break;
                    case 2:
                    StrCopy( ref g_U8388, "HELP_BOUGHT_L", 16 );
                    break;
                }
            }
            sub_42765( uParam37, uParam0._fU80, iVar48, uParam39, uParam45 );
            while (NOT (sub_38458( uParam35, uParam36, "null", "LB_TRYON", uParam37, 0, ref uParam38, 0 )))
            {
                WAIT( 0 );
            }
            (uParam34^) = iVar48;
            return 1;
        }
    }
    else if (sub_41789( "null" ))
    {
        CLEAR_HELP();
        while (NOT (sub_38458( uParam35, uParam36, "null", "LB_TRYON", uParam37, 1, ref uParam38, 0 )))
        {
            WAIT( 0 );
        }
        return 1;
    }
    else if (NOT g_U8378)
    {
        if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "BUY_TROUSERS", 4, "", "", "", iVar48, -1, -1, -1, -1, -1 )))
        {
            PRINT_WITH_NUMBER( "BUY_TROUSERS", iVar48, 7500, 1 );
        }
    }
    else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "BUY_TROUSERS_A", 4, "", "", "", iVar48, -1, -1, -1, -1, -1 )))
    {
        PRINT_WITH_NUMBER( "BUY_TROUSERS_A", iVar48, 7500, 1 );
    };;;;
    if ((sub_14604( sub_516(), 80 )) AND (sub_14604( sub_516(), 88 )))
    {
        if (TIMERA() > iParam33)
        {
            TASK_PLAY_ANIM( sub_516(), "examine legs", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
            GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref iParam33 );
        }
    }
    else
    {
        SETTIMERA( 0 );
    }
    DISPLAY_CASH( 1 );
    return 0;
}

void sub_42765(int iParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 92, iParam2 );
    ADD_SCORE( sub_583(), -1 * iParam2 );
    g_U8275[uParam1] = 1;
    switch (iParam0)
    {
        case 0:
        g_U8365 += iParam2;
        g_U8368++;
        break;
        case 1:
        g_U8366 += iParam2;
        g_U8369++;
        break;
        case 2:
        g_U8367 += iParam2;
        g_U8370++;
        break;
    }
    if (iParam0 != 3)
    {
        PLAY_SOUND_FRONTEND( -1, "WARDROBE_BUY" );
        sub_12166( 5, ref uParam3, iParam0, ref uParam9 );
    }
    return;
}

int sub_43597(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13)
{
    unknown uVar16;
    int iVar17;
    string sVar18;
    int iVar19;
    unknown uVar20;
    int iVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;

    sub_43608( ref uVar16 );
    iVar17 = (uParam2^);
    if (g_U8378)
    {
        PRINTSTRING( "  * ALEX_HALF_PRICE_DISCOUNT: $" );
        PRINTINT( iVar17 );
        iVar17 = (uParam2^) / 2;
        PRINTSTRING( " becomes $" );
        PRINTINT( iVar17 );
        PRINTSTRING( "  (50%)\n" );
    }
    if (g_U8302[uVar16])
    {
        if ((NOT g_U8355) AND (NOT g_U15654[57]))
        {
            if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_R3", sub_27606( uVar16 ) )))
            {
                CLEAR_HELP();
                PRINT_HELP_FOREVER_WITH_STRING( "LB_TRYON_R3", sub_27606( uVar16 ) );
            }
            sVar18 = "LB_TRYON_R3";
        }
        else if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "HELP_OWN_F", sub_27606( uVar16 ) )))
        {
            CLEAR_HELP();
            PRINT_HELP_FOREVER_WITH_STRING( "HELP_OWN_F", sub_27606( uVar16 ) );
        }
        sVar18 = "HELP_OWN_F";;
    }
    else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_BUY_F" )))
    {
        CLEAR_HELP();
        PRINT_HELP_FOREVER( "HELP_BUY_F" );
    }
    sVar18 = "HELP_BUY_F";;
    GET_KEYBOARD_MOVE_INPUT( ref iVar19, ref uVar20 );
    if (IS_BUTTON_PRESSED( 0, 0 ))
    {
        GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar21, ref uVar22, ref uVar23, ref uVar24 );
        if (iVar21 < 65472)
        {
            sub_44207( 1, uParam0 );
        }
        else if (iVar21 >= 64)
        {
            sub_44207( 0, uParam0 );
        }
    }
    else if (((IS_BUTTON_PRESSED( 0, 10 )) || (IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 0 ))) || (iVar19 < 65472))
    {
        sub_44207( 1, uParam0 );
    }
    else if (((IS_BUTTON_PRESSED( 0, 11 )) || (IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 0 ))) || (iVar19 >= 64))
    {
        sub_44207( 0, uParam0 );
    }
    else if (sub_38249())
    {
        if (NOT ((g_U8302[uVar16]) AND (NOT ((g_U8355) || (g_U15654[57])))))
        {
            CLEAR_PRINTS();
            if (NOT sub_41109())
            {
                iVar17 = 0;
                PRINT_HELP( "HELP_BOUGHT_F_F" );
                switch (uParam5)
                {
                    case 0:
                    StrCopy( ref g_U8380, "HELP_BOUGHT_F_F", 16 );
                    break;
                    case 1:
                    StrCopy( ref g_U8384, "HELP_BOUGHT_F_F", 16 );
                    break;
                    case 2:
                    StrCopy( ref g_U8388, "HELP_BOUGHT_F_F", 16 );
                    break;
                }
                sub_44873( uParam5, uVar16, iVar17, uParam7, uParam13 );
                while (NOT (sub_38458( uParam3, uParam4, sVar18, "LB_SHOE", uParam5, 0, ref uParam6, 0 )))
                {
                    WAIT( 0 );
                }
                (uParam2^) = iVar17;
                return 1;
            }
            else if (NOT (IS_SCORE_GREATER( sub_583(), iVar17 - 1 )))
            {
                CLEAR_PRINTS();
                PRINT_HELP( "HELP_POOR_F" );
                while (NOT (sub_38458( uParam3, uParam4, sVar18, "LB_SHOE", uParam5, 1, ref uParam6, 0 )))
                {
                    WAIT( 0 );
                }
                return 1;
            }
            else
            {
                CLEAR_PRINTS();
                PRINT_HELP_WITH_NUMBER( "HELP_BOUGHT_F", iVar17 );
                switch (uParam5)
                {
                    case 0:
                    StrCopy( ref g_U8380, "HELP_BOUGHT_F", 16 );
                    break;
                    case 1:
                    StrCopy( ref g_U8384, "HELP_BOUGHT_F", 16 );
                    break;
                    case 2:
                    StrCopy( ref g_U8388, "HELP_BOUGHT_F", 16 );
                    break;
                }
                sub_44873( uParam5, uVar16, iVar17, uParam7, uParam13 );
                while (NOT (sub_38458( uParam3, uParam4, sVar18, "LB_SHOE", uParam5, 0, ref uParam6, 0 )))
                {
                    WAIT( 0 );
                }
                (uParam2^) = iVar17;
                return 1;
            }
        }
    }
    else if (sub_41789( "BLANK" ))
    {
        CLEAR_HELP();
        while (NOT (sub_38458( uParam3, uParam4, sVar18, "LB_SHOE", uParam5, 1, ref uParam6, 0 )))
        {
            WAIT( 0 );
        }
        return 1;
    }
    else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( sub_25937( uVar16, 3, 0 ), 4, "", "", "", iVar17, -1, -1, -1, -1, -1 )))
    {
        PRINT_WITH_NUMBER( sub_25937( uVar16, 3, 0 ), iVar17, 7500, 1 );
    };;;;;;
    if ((sub_14604( sub_516(), 80 )) AND (sub_14604( sub_516(), 88 )))
    {
        if (TIMERA() > iParam1)
        {
            TASK_PLAY_ANIM( sub_516(), "examine shoes", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
            GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref iParam1 );
        }
    }
    else
    {
        SETTIMERA( 0 );
    }
    DISPLAY_CASH( 1 );
    return 0;
}

void sub_43608(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_516(), 5 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_516(), 5 );
    bVar8 = false;
    for ( I = 0; I < 20; I++ )
    {
        if (NOT bVar8)
        {
            sub_25316( I, ref iVar6, ref iVar7 );
            if ((iVar6 == iVar3) AND (iVar7 == iVar4))
            {
                (uParam0^) = I;
                bVar8 = true;
            }
        }
    }
    if (NOT bVar8)
    {
        (uParam0^) = 20;
    }
    return;
}

void sub_44207(boolean bParam0, unknown uParam1)
{
    int I;
    int iVar5;
    int iVar6;
    int iVar7;

    if (IS_SCREEN_FADED_IN())
    {
        iVar5 = -1;
        iVar6 = -1;
        sub_43608( ref iVar7 );
        for ( I = 0; I < (uParam1^); I++ )
        {
            if (iVar7 == (uParam1^)[I])
            {
                iVar5 = I;
            }
        }
        if (bParam0)
        {
            sub_10320( "  * left (iThis_foot: " );
            sub_10563( iVar5 );
            iVar6 = iVar5 - 1;
            if (iVar6 < 0)
            {
                iVar6 += (uParam1^);
            }
        }
        else
        {
            sub_10320( "  * right (iThis_foot: " );
            sub_10563( iVar5 );
            iVar6 = iVar5 + 1;
            if (iVar6 >= (uParam1^))
            {
                iVar6 -= (uParam1^);
            }
        }
        DO_SCREEN_FADE_OUT( 125 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        CLEAR_PRINTS();
        sub_10320( "),  next: " );
        sub_10563( iVar6 );
        sub_21259();
        sub_25303( (uParam1^)[iVar6] );
        DO_SCREEN_FADE_IN( 125 );
    }
    WAIT( 0 );
    return;
}

void sub_44873(int iParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 92, iParam2 );
    ADD_SCORE( sub_583(), -1 * iParam2 );
    g_U8302[uParam1] = 1;
    switch (iParam0)
    {
        case 0:
        g_U8365 += iParam2;
        g_U8368++;
        break;
        case 1:
        g_U8366 += iParam2;
        g_U8369++;
        break;
        case 2:
        g_U8367 += iParam2;
        g_U8370++;
        break;
    }
    if (iParam0 != 3)
    {
        PLAY_SOUND_FRONTEND( -1, "WARDROBE_BUY" );
        sub_12166( 5, ref uParam3, iParam0, ref uParam9 );
    }
    return;
}

int sub_45915(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    int iVar10;
    unknown uVar11;
    string sVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    unknown uVar17;
    unknown uVar18;

    iVar10 = ProtectedGet(l_U1327);
    if (g_U8378)
    {
        PRINTSTRING( "  * ALEX_HALF_PRICE_DISCOUNT: $" );
        PRINTINT( iVar10 );
        iVar10 = ProtectedGet(l_U1327) / 2;
        PRINTSTRING( " becomes $" );
        PRINTINT( iVar10 );
        PRINTSTRING( "  (50%)\n" );
    }
    if (NOT (sub_41789( "BLANK" )))
    {
        l_U1325 = 0;
    }
    sub_46078( ref uVar11 );
    if (g_U8323[uVar11])
    {
        if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "HELP_OWN_H", sub_35204( uVar11 ) )))
        {
            CLEAR_HELP();
            CLEAR_PRINTS();
            PRINT_HELP_FOREVER_WITH_STRING( "HELP_OWN_H", sub_35204( uVar11 ) );
        }
        sVar12 = "HELP_OWN_H";
    }
    else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_BUY_H" )))
    {
        CLEAR_HELP();
        CLEAR_PRINTS();
        PRINT_HELP_FOREVER( "HELP_BUY_H" );
    }
    sVar12 = "HELP_BUY_H";;
    GET_KEYBOARD_MOVE_INPUT( ref iVar13, ref iVar14 );
    if (((IS_BUTTON_PRESSED( 0, 0 )) || (iVar13 != 0)) || (iVar14 != 0))
    {
        GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar15, ref iVar16, ref uVar17, ref uVar18 );
        if ((iVar15 == 0) AND (iVar16 == 0))
        {
            iVar15 = iVar13;
            iVar16 = iVar14;
        }
        if (iVar15 < 65472)
        {
            if (sub_46527( 1 ))
            {
                return sub_51763( sVar12, uParam0, ref uParam1 );
            }
        }
        else if (iVar15 >= 64)
        {
            if (sub_46527( 0 ))
            {
                return sub_51763( sVar12, uParam0, ref uParam1 );
            }
        }
    }
    else if ((IS_BUTTON_PRESSED( 0, 10 )) || (IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 0 )))
    {
        if (sub_46527( 1 ))
        {
            return sub_51763( sVar12, uParam0, ref uParam1 );
        }
    }
    else if ((IS_BUTTON_PRESSED( 0, 11 )) || (IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 0 )))
    {
        if (sub_46527( 0 ))
        {
            return sub_51763( sVar12, uParam0, ref uParam1 );
        }
    }
    else if (sub_38249())
    {
        CLEAR_PRINTS();
        if (NOT sub_41109())
        {
            iVar10 = 0;
            PRINT_HELP( "HELP_BOUGHT_H_F" );
            sub_52140( 0, uVar11, iVar10, uParam2, l_U1330 );
            while (NOT (sub_38458( ref l_U1368, ref l_U1369, sVar12, "LB_HEAD", uParam0, 0, ref uParam1, 1 )))
            {
                WAIT( 0 );
            }
            l_U1323 = 0;
            return 1;
        }
        else if (NOT (IS_SCORE_GREATER( sub_583(), iVar10 - 1 )))
        {
            CLEAR_PRINTS();
            PRINT_HELP( "HELP_POOR_H" );
            return sub_51763( sVar12, uParam0, ref uParam1 );
        }
        else
        {
            CLEAR_PRINTS();
            PRINT_HELP_WITH_NUMBER( "HELP_BOUGHT_H", iVar10 );
            StrCopy( ref g_U8380, "HELP_BOUGHT_H", 16 );
            sub_52140( 0, uVar11, iVar10, uParam2, l_U1330 );
            while (NOT (sub_38458( ref l_U1368, ref l_U1369, sVar12, "LB_HEAD", uParam0, 0, ref uParam1, 1 )))
            {
                WAIT( 0 );
            }
            l_U1323 = 0;
            return 1;
        }
    }
    else if ((sub_41789( "BLANK" )) AND (NOT l_U1325))
    {
        return sub_51763( sVar12, uParam0, ref uParam1 );
    }
    else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( sub_34655( uVar11, 3, 0 ), 4, "", "", "", iVar10, -1, -1, -1, -1, -1 )))
    {
        PRINT_WITH_NUMBER( sub_34655( uVar11, 3, 0 ), iVar10, 7500, 1 );
    };;;;;;
    if ((sub_14604( sub_516(), 80 )) AND (sub_14604( sub_516(), 88 )))
    {
        if (TIMERA() > l_U1379)
        {
            TASK_PLAY_ANIM( sub_516(), "Examine Hat_b", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
            GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref l_U1379 );
        }
    }
    else
    {
        SETTIMERA( 0 );
    }
    DISPLAY_CASH( 1 );
    return 0;
}

void sub_46078(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;
    int iVar7;
    int iVar8;

    GET_CHAR_PROP_INDEX( sub_516(), 0, ref iVar3 );
    (uParam0^) = 4;
    bVar6 = false;
    for ( I = -1; I <= 4; I++ )
    {
        if (NOT bVar6)
        {
            sub_34323( I, ref iVar5 );
            if (iVar3 == iVar5)
            {
                (uParam0^) = I;
                bVar6 = true;
            }
        }
    }
    if ((uParam0^) == -1)
    {
        iVar7 = GET_CHAR_DRAWABLE_VARIATION( sub_516(), 8 );
        iVar8 = GET_CHAR_TEXTURE_VARIATION( sub_516(), 8 );
        if ((iVar7 == 1) AND (iVar8 == 0))
        {
            (uParam0^) = 3;
        }
    }
    if (NOT bVar6)
    {
        (uParam0^) = 4;
    }
    return;
}

int sub_46527(boolean bParam0)
{
    if (bParam0)
    {
        if (l_U1418 < 1)
        {
            sub_46078( ref l_U1420 );
            l_U1418 = 1;
        }
        else
        {
            while (l_U1418 >= 1)
            {
                switch (l_U1420)
                {
                    case 0:
                    switch (l_U1418)
                    {
                        case 1:
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[0]._fU56 )))
                        {
                            CLEAR_HELP();
                            CLEAR_PRINTS();
                            TASK_PLAY_ANIM( sub_516(), l_U202[0]._fU56, "clothing", l_U1385, 0, 0, 0, 0, -1 );
                            if (NOT (DOES_OBJECT_EXIST( l_U1413 )))
                            {
                                CREATE_OBJECT( -1555357815, l_U283[5]._fU56._fU0 + 0.50000000, l_U283[5]._fU56._fU4, l_U283[5]._fU56._fU8, ref l_U1413, 1 );
                                ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1413, l_U1335 );
                            }
                            if (NOT (DOES_OBJECT_EXIST( l_U1414 )))
                            {
                                CREATE_OBJECT( -526280927, l_U283[5]._fU56._fU0 - 0.50000000, l_U283[5]._fU56._fU4, l_U283[5]._fU56._fU8, ref l_U1414, 1 );
                                ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1414, l_U1335 );
                            }
                            l_U1418 = 2;
                        }
                        break;
                        case 2:
                        if (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[0]._fU56 ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( sub_516(), "clothing", l_U202[0]._fU56, ref l_U1417 );
                            if (l_U1417 >= l_U202[0]._fU64)
                            {
                                sub_34043( -1 );
                                ATTACH_OBJECT_TO_PED( l_U1414, sub_516(), 1232, l_U202[0]._fU24, l_U202[0]._fU36, 0 );
                                l_U1418 = 3;
                            }
                        }
                        break;
                        case 3:
                        if (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[0]._fU56 ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( sub_516(), "clothing", l_U202[0]._fU56, ref l_U1417 );
                            if (l_U1417 >= l_U202[0]._fU68)
                            {
                                if (DOES_OBJECT_EXIST( l_U1414 ))
                                {
                                    DELETE_OBJECT( ref l_U1414 );
                                    l_U1418 = 4;
                                }
                            }
                        }
                        break;
                        case 4:
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[0]._fU56 )))
                        {
                            sub_34043( -1 );
                            TASK_PLAY_ANIM( sub_516(), l_U202[1]._fU52, "clothing", l_U1385, 0, 0, 0, 0, -1 );
                            l_U1418 = 5;
                        }
                        break;
                        case 5:
                        if (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[1]._fU52 ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( sub_516(), "clothing", l_U202[1]._fU52, ref l_U1417 );
                            if (l_U1417 >= l_U202[1]._fU72)
                            {
                                ATTACH_OBJECT_TO_PED( l_U1413, sub_516(), 1219, l_U202[1]._fU0, l_U202[1]._fU12, 0 );
                                l_U1418 = 6;
                            }
                        }
                        break;
                        case 6:
                        if (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[1]._fU52 ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( sub_516(), "clothing", l_U202[1]._fU52, ref l_U1417 );
                            if (l_U1417 >= l_U202[1]._fU76)
                            {
                                if (DOES_OBJECT_EXIST( l_U1413 ))
                                {
                                    DELETE_OBJECT( ref l_U1413 );
                                    sub_34043( 1 );
                                    l_U1418 = 7;
                                }
                            }
                        }
                        break;
                        case 7:
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[1]._fU52 )))
                        {
                            if (DOES_OBJECT_EXIST( l_U1413 ))
                            {
                                DELETE_OBJECT( ref l_U1413 );
                            }
                            if (DOES_OBJECT_EXIST( l_U1414 ))
                            {
                                DELETE_OBJECT( ref l_U1414 );
                            }
                            l_U1418 = 0;
                        }
                        break;
                    }
                    break;
                    case 1:
                    switch (l_U1418)
                    {
                        case 1:
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[1]._fU56 )))
                        {
                            CLEAR_HELP();
                            CLEAR_PRINTS();
                            TASK_PLAY_ANIM( sub_516(), l_U202[1]._fU56, "clothing", l_U1385, 0, 0, 0, 0, -1 );
                            if (NOT (DOES_OBJECT_EXIST( l_U1413 )))
                            {
                                CREATE_OBJECT( -1555357815, l_U283[5]._fU56._fU0 + 0.50000000, l_U283[5]._fU56._fU4, l_U283[5]._fU56._fU8, ref l_U1413, 1 );
                                ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1413, l_U1335 );
                            }
                            if (NOT (DOES_OBJECT_EXIST( l_U1414 )))
                            {
                                CREATE_OBJECT( -526280927, l_U283[5]._fU56._fU0 - 0.50000000, l_U283[5]._fU56._fU4, l_U283[5]._fU56._fU8, ref l_U1414, 1 );
                                ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1414, l_U1335 );
                            }
                            l_U1418 = 2;
                        }
                        break;
                        case 2:
                        if (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[1]._fU56 ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( sub_516(), "clothing", l_U202[1]._fU56, ref l_U1417 );
                            if (l_U1417 >= l_U202[1]._fU64)
                            {
                                sub_34043( -1 );
                                ATTACH_OBJECT_TO_PED( l_U1413, sub_516(), 1232, l_U202[1]._fU24, l_U202[1]._fU36, 0 );
                                l_U1418 = 3;
                            }
                        }
                        break;
                        case 3:
                        if (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[1]._fU56 ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( sub_516(), "clothing", l_U202[1]._fU56, ref l_U1417 );
                            if (l_U1417 >= l_U202[1]._fU68)
                            {
                                if (DOES_OBJECT_EXIST( l_U1413 ))
                                {
                                    DELETE_OBJECT( ref l_U1413 );
                                    l_U1418 = 4;
                                }
                            }
                        }
                        break;
                        case 4:
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[1]._fU56 )))
                        {
                            sub_34043( -1 );
                            TASK_PLAY_ANIM( sub_516(), l_U202[0]._fU52, "clothing", l_U1385, 0, 0, 0, 0, -1 );
                            l_U1418 = 5;
                        }
                        break;
                        case 5:
                        if (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[0]._fU52 ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( sub_516(), "clothing", l_U202[0]._fU52, ref l_U1417 );
                            if (l_U1417 >= l_U202[0]._fU72)
                            {
                                ATTACH_OBJECT_TO_PED( l_U1414, sub_516(), 1219, l_U202[0]._fU0, l_U202[0]._fU12, 0 );
                                l_U1418 = 6;
                            }
                        }
                        break;
                        case 6:
                        if (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[0]._fU52 ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( sub_516(), "clothing", l_U202[0]._fU52, ref l_U1417 );
                            if (l_U1417 >= l_U202[0]._fU76)
                            {
                                if (DOES_OBJECT_EXIST( l_U1414 ))
                                {
                                    DELETE_OBJECT( ref l_U1414 );
                                    sub_34043( 0 );
                                    l_U1418 = 7;
                                }
                            }
                        }
                        break;
                        case 7:
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[0]._fU52 )))
                        {
                            if (DOES_OBJECT_EXIST( l_U1413 ))
                            {
                                DELETE_OBJECT( ref l_U1413 );
                            }
                            if (DOES_OBJECT_EXIST( l_U1414 ))
                            {
                                DELETE_OBJECT( ref l_U1414 );
                            }
                            l_U1418 = 0;
                        }
                        break;
                    }
                    break;
                }
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "LB_LEAVE_H" )))
                {
                    PRINT_HELP_FOREVER( "LB_LEAVE_H" );
                }
                if (sub_41789( "LB_LEAVE_H" ))
                {
                    return 1;
                }
                WAIT( 0 );
            }
        }
    }
    else if (l_U1419 < 1)
    {
        sub_46078( ref l_U1420 );
        l_U1419 = 1;
    }
    else
    {
        while (l_U1419 >= 1)
        {
            switch (l_U1420)
            {
                case 0:
                switch (l_U1419)
                {
                    case 1:
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[0]._fU48 )))
                    {
                        CLEAR_HELP();
                        CLEAR_PRINTS();
                        TASK_PLAY_ANIM( sub_516(), l_U202[0]._fU48, "clothing", l_U1385, 0, 0, 0, 0, -1 );
                        if (NOT (DOES_OBJECT_EXIST( l_U1413 )))
                        {
                            CREATE_OBJECT( -1555357815, l_U283[5]._fU56._fU0 + 0.50000000, l_U283[5]._fU56._fU4, l_U283[5]._fU56._fU8, ref l_U1413, 1 );
                            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1413, l_U1335 );
                        }
                        if (NOT (DOES_OBJECT_EXIST( l_U1414 )))
                        {
                            CREATE_OBJECT( -526280927, l_U283[5]._fU56._fU0 - 0.50000000, l_U283[5]._fU56._fU4, l_U283[5]._fU56._fU8, ref l_U1414, 1 );
                            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1414, l_U1335 );
                        }
                        l_U1419 = 2;
                    }
                    break;
                    case 2:
                    if (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[0]._fU48 ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_516(), "clothing", l_U202[0]._fU48, ref l_U1417 );
                        if (l_U1417 >= l_U202[0]._fU64)
                        {
                            sub_34043( -1 );
                            ATTACH_OBJECT_TO_PED( l_U1414, sub_516(), 1219, l_U202[0]._fU0, l_U202[0]._fU12, 0 );
                            l_U1419 = 3;
                        }
                    }
                    break;
                    case 3:
                    if (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[0]._fU48 ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_516(), "clothing", l_U202[0]._fU48, ref l_U1417 );
                        if (l_U1417 >= l_U202[0]._fU68)
                        {
                            if (DOES_OBJECT_EXIST( l_U1414 ))
                            {
                                DELETE_OBJECT( ref l_U1414 );
                                l_U1419 = 4;
                            }
                        }
                    }
                    break;
                    case 4:
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[0]._fU48 )))
                    {
                        sub_34043( -1 );
                        TASK_PLAY_ANIM( sub_516(), l_U202[1]._fU60, "clothing", l_U1385, 0, 0, 0, 0, -1 );
                        l_U1419 = 5;
                    }
                    break;
                    case 5:
                    if (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[1]._fU60 ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_516(), "clothing", l_U202[1]._fU60, ref l_U1417 );
                        if (l_U1417 >= l_U202[0]._fU72)
                        {
                            ATTACH_OBJECT_TO_PED( l_U1413, sub_516(), 1232, l_U202[1]._fU24, l_U202[1]._fU36, 0 );
                            l_U1419 = 6;
                        }
                    }
                    break;
                    case 6:
                    if (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[1]._fU60 ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_516(), "clothing", l_U202[1]._fU60, ref l_U1417 );
                        if (l_U1417 >= l_U202[0]._fU76)
                        {
                            if (DOES_OBJECT_EXIST( l_U1413 ))
                            {
                                DELETE_OBJECT( ref l_U1413 );
                                sub_34043( 1 );
                                l_U1419 = 7;
                            }
                        }
                    }
                    break;
                    case 7:
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[1]._fU60 )))
                    {
                        if (DOES_OBJECT_EXIST( l_U1413 ))
                        {
                            DELETE_OBJECT( ref l_U1413 );
                        }
                        if (DOES_OBJECT_EXIST( l_U1414 ))
                        {
                            DELETE_OBJECT( ref l_U1414 );
                        }
                        l_U1419 = 0;
                    }
                    break;
                }
                break;
                case 1:
                switch (l_U1419)
                {
                    case 1:
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[1]._fU48 )))
                    {
                        CLEAR_HELP();
                        CLEAR_PRINTS();
                        TASK_PLAY_ANIM( sub_516(), l_U202[1]._fU48, "clothing", l_U1385, 0, 0, 0, 0, -1 );
                        if (NOT (DOES_OBJECT_EXIST( l_U1413 )))
                        {
                            CREATE_OBJECT( -1555357815, l_U283[5]._fU56._fU0 + 0.50000000, l_U283[5]._fU56._fU4, l_U283[5]._fU56._fU8, ref l_U1413, 1 );
                            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1413, l_U1335 );
                        }
                        if (NOT (DOES_OBJECT_EXIST( l_U1414 )))
                        {
                            CREATE_OBJECT( -526280927, l_U283[5]._fU56._fU0 - 0.50000000, l_U283[5]._fU56._fU4, l_U283[5]._fU56._fU8, ref l_U1414, 1 );
                            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1414, l_U1335 );
                        }
                        l_U1419 = 2;
                    }
                    break;
                    case 2:
                    if (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[1]._fU48 ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_516(), "clothing", l_U202[1]._fU48, ref l_U1417 );
                        if (l_U1417 >= l_U202[1]._fU64)
                        {
                            sub_34043( -1 );
                            ATTACH_OBJECT_TO_PED( l_U1413, sub_516(), 1219, l_U202[1]._fU0, l_U202[1]._fU12, 0 );
                            l_U1419 = 3;
                        }
                    }
                    break;
                    case 3:
                    if (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[1]._fU48 ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_516(), "clothing", l_U202[1]._fU48, ref l_U1417 );
                        if (l_U1417 >= l_U202[1]._fU68)
                        {
                            if (DOES_OBJECT_EXIST( l_U1413 ))
                            {
                                DELETE_OBJECT( ref l_U1413 );
                                l_U1419 = 4;
                            }
                        }
                    }
                    break;
                    case 4:
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[1]._fU48 )))
                    {
                        sub_34043( -1 );
                        TASK_PLAY_ANIM( sub_516(), l_U202[0]._fU60, "clothing", l_U1385, 0, 0, 0, 0, -1 );
                        l_U1419 = 5;
                    }
                    break;
                    case 5:
                    if (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[0]._fU60 ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_516(), "clothing", l_U202[0]._fU60, ref l_U1417 );
                        if (l_U1417 >= l_U202[1]._fU72)
                        {
                            ATTACH_OBJECT_TO_PED( l_U1414, sub_516(), 1232, l_U202[0]._fU24, l_U202[0]._fU36, 0 );
                            l_U1419 = 6;
                        }
                    }
                    break;
                    case 6:
                    if (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[0]._fU60 ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_516(), "clothing", l_U202[0]._fU60, ref l_U1417 );
                        if (l_U1417 >= l_U202[1]._fU76)
                        {
                            if (DOES_OBJECT_EXIST( l_U1414 ))
                            {
                                DELETE_OBJECT( ref l_U1414 );
                                sub_34043( 0 );
                                l_U1419 = 7;
                            }
                        }
                    }
                    break;
                    case 7:
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[0]._fU60 )))
                    {
                        if (DOES_OBJECT_EXIST( l_U1413 ))
                        {
                            DELETE_OBJECT( ref l_U1413 );
                        }
                        if (DOES_OBJECT_EXIST( l_U1414 ))
                        {
                            DELETE_OBJECT( ref l_U1414 );
                        }
                        l_U1419 = 0;
                    }
                    break;
                }
                break;
            }
            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "LB_LEAVE_H" )))
            {
                PRINT_HELP_FOREVER( "LB_LEAVE_H" );
            }
            if (sub_41789( "LB_LEAVE_H" ))
            {
                return 1;
            }
            WAIT( 0 );
        }
    }
    sub_749( 5, "LB_LEAVE_H" );
    return 0;
}

int sub_51763(unknown uParam0, unknown uParam1, unknown uParam2)
{
    CLEAR_HELP();
    if (DOES_OBJECT_EXIST( l_U1413 ))
    {
        DELETE_OBJECT( ref l_U1413 );
    }
    if (DOES_OBJECT_EXIST( l_U1414 ))
    {
        DELETE_OBJECT( ref l_U1414 );
    }
    l_U1418 = 0;
    l_U1419 = 0;
    while (NOT (sub_38458( ref l_U1368, ref l_U1369, uParam0, "LB_HEAD", uParam1, 1, uParam2, 1 )))
    {
        WAIT( 0 );
    }
    l_U1323 = 0;
    return 1;
}

void sub_52140(int iParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 92, iParam2 );
    ADD_SCORE( sub_583(), -1 * iParam2 );
    g_U8323[uParam1] = 1;
    switch (iParam0)
    {
        case 0:
        g_U8365 += iParam2;
        g_U8368++;
        break;
        case 1:
        g_U8366 += iParam2;
        g_U8369++;
        break;
        case 2:
        g_U8367 += iParam2;
        g_U8370++;
        break;
    }
    if (iParam0 != 3)
    {
        PLAY_SOUND_FRONTEND( -1, "WARDROBE_BUY" );
        sub_12166( 5, ref uParam3, iParam0, ref uParam9 );
    }
    return;
}

int sub_52920(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    int iVar10;
    unknown uVar11;
    string sVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    unknown uVar17;
    unknown uVar18;

    iVar10 = ProtectedGet(l_U1327);
    if (g_U8378)
    {
        PRINTSTRING( "  * ALEX_HALF_PRICE_DISCOUNT: $" );
        PRINTINT( iVar10 );
        iVar10 = ProtectedGet(l_U1327) / 2;
        PRINTSTRING( " becomes $" );
        PRINTINT( iVar10 );
        PRINTSTRING( "  (50%)\n" );
    }
    if (NOT (sub_41789( "BLANK" )))
    {
        l_U1325 = 0;
    }
    sub_53083( ref uVar11 );
    sub_10320( "get_eyes_americanAmbiance_name(" );
    sub_10320( sub_53228( uVar11 ) );
    sub_10320( "): ''" );
    sub_10320( sub_36851( uVar11 ) );
    sub_10320( "''\n" );
    if (g_U8328[uVar11])
    {
        if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "HELP_OWN_G", sub_36851( uVar11 ) )))
        {
            CLEAR_HELP();
            CLEAR_PRINTS();
            PRINT_HELP_FOREVER_WITH_STRING( "HELP_OWN_G", sub_36851( uVar11 ) );
        }
        sVar12 = "HELP_OWN_G";
    }
    else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_BUY_G" )))
    {
        CLEAR_HELP();
        CLEAR_PRINTS();
        PRINT_HELP_FOREVER( "HELP_BUY_G" );
    }
    sVar12 = "HELP_BUY_G";;
    GET_KEYBOARD_MOVE_INPUT( ref iVar13, ref iVar14 );
    if (((IS_BUTTON_PRESSED( 0, 0 )) || (iVar13 != 0)) || (iVar14 != 0))
    {
        GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar15, ref iVar16, ref uVar17, ref uVar18 );
        if ((iVar15 == 0) AND (iVar16 == 0))
        {
            iVar15 = iVar13;
            iVar16 = iVar14;
        }
        if (iVar15 < 65472)
        {
            if (sub_53738( 1 ))
            {
                return sub_58974( sVar12, uParam0, ref uParam1 );
            }
        }
        else if (iVar15 >= 64)
        {
            if (sub_53738( 0 ))
            {
                return sub_58974( sVar12, uParam0, ref uParam1 );
            }
        }
    }
    else if ((IS_BUTTON_PRESSED( 0, 10 )) || (IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 0 )))
    {
        if (sub_53738( 1 ))
        {
            return sub_58974( sVar12, uParam0, ref uParam1 );
        }
    }
    else if ((IS_BUTTON_PRESSED( 0, 11 )) || (IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 0 )))
    {
        if (sub_53738( 0 ))
        {
            return sub_58974( sVar12, uParam0, ref uParam1 );
        }
    }
    else if (sub_38249())
    {
        CLEAR_PRINTS();
        if (NOT sub_41109())
        {
            iVar10 = 0;
            PRINT_HELP( "HELP_BOUGHT_G_F" );
            sub_59351( 0, uVar11, iVar10, uParam2, l_U1330 );
            while (NOT (sub_38458( ref l_U1368, ref l_U1369, sVar12, "LB_EYES", uParam0, 0, ref uParam1, 1 )))
            {
                WAIT( 0 );
            }
            l_U1323 = 0;
            return 1;
        }
        else if (NOT (IS_SCORE_GREATER( sub_583(), iVar10 - 1 )))
        {
            CLEAR_PRINTS();
            PRINT_HELP( "HELP_POOR_G" );
            while (NOT (sub_38458( ref l_U1368, ref l_U1369, sVar12, "LB_EYES", uParam0, 1, ref uParam1, 1 )))
            {
                WAIT( 0 );
            }
            l_U1323 = 0;
            return 1;
        }
        else
        {
            CLEAR_PRINTS();
            PRINT_HELP_WITH_NUMBER( "HELP_BOUGHT_G", iVar10 );
            StrCopy( ref g_U8380, "HELP_BOUGHT_G", 16 );
            sub_59351( 0, uVar11, iVar10, uParam2, l_U1330 );
            while (NOT (sub_38458( ref l_U1368, ref l_U1369, sVar12, "LB_EYES", uParam0, 0, ref uParam1, 1 )))
            {
                WAIT( 0 );
            }
            l_U1323 = 0;
            return 1;
        }
    }
    else if ((sub_41789( "BLANK" )) AND (NOT l_U1325))
    {
        CLEAR_HELP();
        while (NOT (sub_38458( ref l_U1368, ref l_U1369, sVar12, "LB_EYES", uParam0, 1, ref uParam1, 1 )))
        {
            WAIT( 0 );
        }
        l_U1323 = 0;
        return 1;
    }
    else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( sub_36290( uVar11, 3, 0 ), 4, "", "", "", iVar10, -1, -1, -1, -1, -1 )))
    {
        PRINT_WITH_NUMBER( sub_36290( uVar11, 3, 0 ), iVar10, 7500, 1 );
    };;;;;;
    if ((sub_14604( sub_516(), 80 )) AND (sub_14604( sub_516(), 88 )))
    {
        if (TIMERA() > l_U1379)
        {
            TASK_PLAY_ANIM( sub_516(), "Examine Glasses_b", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
            GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref l_U1379 );
        }
    }
    else
    {
        SETTIMERA( 0 );
    }
    DISPLAY_CASH( 1 );
    return 0;
}

void sub_53083(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;

    GET_CHAR_PROP_INDEX( sub_516(), 1, ref iVar3 );
    bVar6 = false;
    for ( I = -1; I <= 3; I++ )
    {
        if (NOT bVar6)
        {
            sub_34080( I, ref iVar5 );
            if (iVar3 == iVar5)
            {
                (uParam0^) = I;
                bVar6 = true;
            }
        }
    }
    if (NOT bVar6)
    {
        (uParam0^) = 3;
    }
    return;
}

string sub_53228(unknown uParam0)
{
    switch (uParam0)
    {
        case -1:
        return "EYES_NONE";
        break;
        case 0:
        return "EYES_0";
        break;
        case 1:
        return "EYES_1_unused";
        break;
        case 2:
        return "EYES_2";
        break;
        case 3: return "NUMBER_OF_PLAYER_CLOTHES_EYES";
    }
    return "null";
}

int sub_53738(boolean bParam0)
{
    if (bParam0)
    {
        if (l_U1418 < 1)
        {
            sub_53083( ref l_U1421 );
            l_U1418 = 1;
        }
        else
        {
            while (l_U1418 >= 1)
            {
                switch (l_U1421)
                {
                    case 0:
                    switch (l_U1418)
                    {
                        case 1:
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[2]._fU56 )))
                        {
                            CLEAR_HELP();
                            CLEAR_PRINTS();
                            TASK_PLAY_ANIM( sub_516(), l_U202[2]._fU56, "clothing", l_U1385, 0, 0, 0, 0, -1 );
                            if (NOT (DOES_OBJECT_EXIST( l_U1416 )))
                            {
                                CREATE_OBJECT( 1257247272, l_U283[4]._fU56._fU0 + 0.50000000, l_U283[4]._fU56._fU4, l_U283[4]._fU56._fU8, ref l_U1416, 1 );
                                ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1416, l_U1335 );
                            }
                            if (NOT (DOES_OBJECT_EXIST( l_U1415 )))
                            {
                                CREATE_OBJECT( 2084697291, l_U283[4]._fU56._fU0 - 0.50000000, l_U283[4]._fU56._fU4, l_U283[4]._fU56._fU8, ref l_U1415, 1 );
                                ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1415, l_U1335 );
                            }
                            l_U1418 = 2;
                        }
                        break;
                        case 2:
                        if (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[2]._fU56 ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( sub_516(), "clothing", l_U202[2]._fU56, ref l_U1417 );
                            if (l_U1417 >= l_U202[2]._fU64)
                            {
                                sub_34068( -1 );
                                ATTACH_OBJECT_TO_PED( l_U1416, sub_516(), 1232, l_U202[2]._fU24, l_U202[2]._fU36, 0 );
                                l_U1418 = 3;
                            }
                        }
                        break;
                        case 3:
                        if (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[2]._fU56 ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( sub_516(), "clothing", l_U202[2]._fU56, ref l_U1417 );
                            if (l_U1417 >= l_U202[2]._fU68)
                            {
                                if (DOES_OBJECT_EXIST( l_U1416 ))
                                {
                                    DELETE_OBJECT( ref l_U1416 );
                                    sub_34068( -1 );
                                    l_U1418 = 4;
                                }
                            }
                        }
                        break;
                        case 4:
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[2]._fU56 )))
                        {
                            TASK_PLAY_ANIM( sub_516(), l_U202[2]._fU52, "clothing", l_U1385, 0, 0, 0, 0, -1 );
                            l_U1418 = 5;
                        }
                        break;
                        case 5:
                        if (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[2]._fU52 ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( sub_516(), "clothing", l_U202[2]._fU52, ref l_U1417 );
                            if (l_U1417 >= l_U202[2]._fU72)
                            {
                                ATTACH_OBJECT_TO_PED( l_U1415, sub_516(), 1219, l_U202[2]._fU0, l_U202[2]._fU12, 0 );
                                l_U1418 = 6;
                            }
                        }
                        break;
                        case 6:
                        if (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[2]._fU52 ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( sub_516(), "clothing", l_U202[2]._fU52, ref l_U1417 );
                            if (l_U1417 >= l_U202[2]._fU76)
                            {
                                if (DOES_OBJECT_EXIST( l_U1415 ))
                                {
                                    DELETE_OBJECT( ref l_U1415 );
                                    sub_34068( 2 );
                                    l_U1418 = 7;
                                }
                            }
                        }
                        break;
                        case 7:
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[2]._fU52 )))
                        {
                            if (DOES_OBJECT_EXIST( l_U1415 ))
                            {
                                DELETE_OBJECT( ref l_U1415 );
                            }
                            if (DOES_OBJECT_EXIST( l_U1416 ))
                            {
                                DELETE_OBJECT( ref l_U1416 );
                            }
                            l_U1418 = 0;
                        }
                        break;
                    }
                    break;
                    case 2:
                    switch (l_U1418)
                    {
                        case 1:
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[3]._fU56 )))
                        {
                            CLEAR_HELP();
                            CLEAR_PRINTS();
                            TASK_PLAY_ANIM( sub_516(), l_U202[3]._fU56, "clothing", l_U1385, 0, 0, 0, 0, -1 );
                            if (NOT (DOES_OBJECT_EXIST( l_U1415 )))
                            {
                                CREATE_OBJECT( 2084697291, l_U283[4]._fU56._fU0 - 0.50000000, l_U283[4]._fU56._fU4, l_U283[4]._fU56._fU8, ref l_U1415, 1 );
                                ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1415, l_U1335 );
                            }
                            if (NOT (DOES_OBJECT_EXIST( l_U1416 )))
                            {
                                CREATE_OBJECT( 1257247272, l_U283[4]._fU56._fU0 + 0.50000000, l_U283[4]._fU56._fU4, l_U283[4]._fU56._fU8, ref l_U1416, 1 );
                                ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1416, l_U1335 );
                            }
                            l_U1418 = 2;
                        }
                        break;
                        case 2:
                        if (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[3]._fU56 ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( sub_516(), "clothing", l_U202[3]._fU56, ref l_U1417 );
                            if (l_U1417 >= l_U202[3]._fU64)
                            {
                                sub_34068( -1 );
                                ATTACH_OBJECT_TO_PED( l_U1415, sub_516(), 1232, l_U202[3]._fU24, l_U202[3]._fU36, 0 );
                                l_U1418 = 3;
                            }
                        }
                        break;
                        case 3:
                        if (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[3]._fU56 ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( sub_516(), "clothing", l_U202[3]._fU56, ref l_U1417 );
                            if (l_U1417 >= l_U202[3]._fU68)
                            {
                                if (DOES_OBJECT_EXIST( l_U1415 ))
                                {
                                    DELETE_OBJECT( ref l_U1415 );
                                    sub_34068( -1 );
                                    l_U1418 = 4;
                                }
                            }
                        }
                        break;
                        case 4:
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[3]._fU56 )))
                        {
                            TASK_PLAY_ANIM( sub_516(), l_U202[3]._fU52, "clothing", l_U1385, 0, 0, 0, 0, -1 );
                            l_U1418 = 5;
                        }
                        break;
                        case 5:
                        if (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[3]._fU52 ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( sub_516(), "clothing", l_U202[3]._fU52, ref l_U1417 );
                            if (l_U1417 >= l_U202[3]._fU72)
                            {
                                ATTACH_OBJECT_TO_PED( l_U1416, sub_516(), 1219, l_U202[3]._fU0, l_U202[3]._fU12, 0 );
                                l_U1418 = 6;
                            }
                        }
                        break;
                        case 6:
                        if (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[3]._fU52 ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( sub_516(), "clothing", l_U202[3]._fU52, ref l_U1417 );
                            if (l_U1417 >= l_U202[3]._fU76)
                            {
                                if (DOES_OBJECT_EXIST( l_U1416 ))
                                {
                                    DELETE_OBJECT( ref l_U1416 );
                                    sub_34068( 0 );
                                    l_U1418 = 7;
                                }
                            }
                        }
                        break;
                        case 7:
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[3]._fU52 )))
                        {
                            if (DOES_OBJECT_EXIST( l_U1415 ))
                            {
                                DELETE_OBJECT( ref l_U1415 );
                            }
                            if (DOES_OBJECT_EXIST( l_U1416 ))
                            {
                                DELETE_OBJECT( ref l_U1416 );
                            }
                            l_U1418 = 0;
                        }
                        break;
                    }
                    break;
                }
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "LB_LEAVE_G" )))
                {
                    PRINT_HELP_FOREVER( "LB_LEAVE_G" );
                }
                if (sub_41789( "LB_LEAVE_G" ))
                {
                    return 1;
                }
                WAIT( 0 );
            }
        }
    }
    else if (l_U1419 < 1)
    {
        sub_53083( ref l_U1421 );
        l_U1419 = 1;
    }
    else
    {
        while (l_U1419 >= 1)
        {
            switch (l_U1421)
            {
                case 0:
                switch (l_U1419)
                {
                    case 1:
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[2]._fU48 )))
                    {
                        CLEAR_HELP();
                        CLEAR_PRINTS();
                        TASK_PLAY_ANIM( sub_516(), l_U202[2]._fU48, "clothing", l_U1385, 0, 0, 0, 0, -1 );
                        if (NOT (DOES_OBJECT_EXIST( l_U1415 )))
                        {
                            CREATE_OBJECT( 2084697291, l_U283[4]._fU56._fU0 - 0.50000000, l_U283[4]._fU56._fU4, l_U283[4]._fU56._fU8, ref l_U1415, 1 );
                            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1415, l_U1335 );
                        }
                        if (NOT (DOES_OBJECT_EXIST( l_U1416 )))
                        {
                            CREATE_OBJECT( 1257247272, l_U283[4]._fU56._fU0 + 0.50000000, l_U283[4]._fU56._fU4, l_U283[4]._fU56._fU8, ref l_U1416, 1 );
                            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1415, l_U1335 );
                        }
                        l_U1419 = 2;
                    }
                    break;
                    case 2:
                    if (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[2]._fU48 ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_516(), "clothing", l_U202[2]._fU48, ref l_U1417 );
                        if (l_U1417 >= l_U202[2]._fU64)
                        {
                            sub_34068( -1 );
                            ATTACH_OBJECT_TO_PED( l_U1416, sub_516(), 1219, l_U202[2]._fU0, l_U202[2]._fU12, 0 );
                            l_U1419 = 3;
                        }
                    }
                    break;
                    case 3:
                    if (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[2]._fU48 ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_516(), "clothing", l_U202[2]._fU48, ref l_U1417 );
                        if (l_U1417 >= l_U202[2]._fU68)
                        {
                            if (DOES_OBJECT_EXIST( l_U1416 ))
                            {
                                DELETE_OBJECT( ref l_U1416 );
                                l_U1419 = 4;
                            }
                        }
                    }
                    break;
                    case 4:
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[2]._fU48 )))
                    {
                        sub_34068( -1 );
                        TASK_PLAY_ANIM( sub_516(), l_U202[2]._fU60, "clothing", l_U1385, 0, 0, 0, 0, -1 );
                        l_U1419 = 5;
                    }
                    break;
                    case 5:
                    if (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[2]._fU60 ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_516(), "clothing", l_U202[2]._fU60, ref l_U1417 );
                        if (l_U1417 >= l_U202[2]._fU72)
                        {
                            ATTACH_OBJECT_TO_PED( l_U1415, sub_516(), 1232, l_U202[2]._fU24, l_U202[2]._fU36, 0 );
                            l_U1419 = 6;
                        }
                    }
                    break;
                    case 6:
                    if (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[2]._fU60 ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_516(), "clothing", l_U202[2]._fU60, ref l_U1417 );
                        if (l_U1417 >= l_U202[2]._fU76)
                        {
                            if (DOES_OBJECT_EXIST( l_U1415 ))
                            {
                                DELETE_OBJECT( ref l_U1415 );
                                sub_34068( 2 );
                                l_U1419 = 7;
                            }
                        }
                    }
                    break;
                    case 7:
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[2]._fU60 )))
                    {
                        if (DOES_OBJECT_EXIST( l_U1415 ))
                        {
                            DELETE_OBJECT( ref l_U1415 );
                        }
                        if (DOES_OBJECT_EXIST( l_U1416 ))
                        {
                            DELETE_OBJECT( ref l_U1416 );
                        }
                        l_U1419 = 0;
                    }
                    break;
                }
                break;
                case 2:
                switch (l_U1419)
                {
                    case 1:
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[3]._fU48 )))
                    {
                        CLEAR_HELP();
                        CLEAR_PRINTS();
                        TASK_PLAY_ANIM( sub_516(), l_U202[3]._fU48, "clothing", l_U1385, 0, 0, 0, 0, -1 );
                        if (NOT (DOES_OBJECT_EXIST( l_U1415 )))
                        {
                            CREATE_OBJECT( 2084697291, l_U283[4]._fU56._fU0 - 0.50000000, l_U283[4]._fU56._fU4, l_U283[4]._fU56._fU8, ref l_U1415, 1 );
                            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1415, l_U1335 );
                        }
                        if (NOT (DOES_OBJECT_EXIST( l_U1416 )))
                        {
                            CREATE_OBJECT( 1257247272, l_U283[4]._fU56._fU0 + 0.50000000, l_U283[4]._fU56._fU4, l_U283[4]._fU56._fU8, ref l_U1416, 1 );
                            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1416, l_U1335 );
                        }
                        l_U1419 = 2;
                    }
                    break;
                    case 2:
                    if (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[3]._fU48 ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_516(), "clothing", l_U202[3]._fU48, ref l_U1417 );
                        if (l_U1417 >= l_U202[3]._fU64)
                        {
                            sub_34068( -1 );
                            ATTACH_OBJECT_TO_PED( l_U1415, sub_516(), 1219, l_U202[3]._fU0, l_U202[3]._fU12, 0 );
                            l_U1419 = 3;
                        }
                    }
                    break;
                    case 3:
                    if (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[3]._fU48 ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_516(), "clothing", l_U202[3]._fU48, ref l_U1417 );
                        if (l_U1417 >= l_U202[3]._fU68)
                        {
                            if (DOES_OBJECT_EXIST( l_U1415 ))
                            {
                                DELETE_OBJECT( ref l_U1415 );
                                l_U1419 = 4;
                            }
                        }
                    }
                    break;
                    case 4:
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[3]._fU48 )))
                    {
                        sub_34068( -1 );
                        TASK_PLAY_ANIM( sub_516(), l_U202[3]._fU60, "clothing", l_U1385, 0, 0, 0, 0, -1 );
                        l_U1419 = 5;
                    }
                    break;
                    case 5:
                    if (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[3]._fU60 ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_516(), "clothing", l_U202[3]._fU60, ref l_U1417 );
                        if (l_U1417 >= l_U202[3]._fU72)
                        {
                            ATTACH_OBJECT_TO_PED( l_U1416, sub_516(), 1232, l_U202[3]._fU24, l_U202[3]._fU36, 0 );
                            l_U1419 = 6;
                        }
                    }
                    break;
                    case 6:
                    if (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[3]._fU60 ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_516(), "clothing", l_U202[3]._fU60, ref l_U1417 );
                        if (l_U1417 >= l_U202[3]._fU76)
                        {
                            if (DOES_OBJECT_EXIST( l_U1416 ))
                            {
                                DELETE_OBJECT( ref l_U1416 );
                                sub_34068( 0 );
                                l_U1419 = 7;
                            }
                        }
                    }
                    break;
                    case 7:
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_516(), "clothing", l_U202[3]._fU60 )))
                    {
                        if (DOES_OBJECT_EXIST( l_U1415 ))
                        {
                            DELETE_OBJECT( ref l_U1415 );
                        }
                        if (DOES_OBJECT_EXIST( l_U1416 ))
                        {
                            DELETE_OBJECT( ref l_U1416 );
                        }
                        l_U1419 = 0;
                    }
                    break;
                }
                break;
            }
            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "LB_LEAVE_G" )))
            {
                PRINT_HELP_FOREVER( "LB_LEAVE_G" );
            }
            if (sub_41789( "LB_LEAVE_G" ))
            {
                return 1;
            }
            WAIT( 0 );
        }
    }
    sub_749( 5, "LB_LEAVE_G" );
    return 0;
}

int sub_58974(unknown uParam0, unknown uParam1, unknown uParam2)
{
    CLEAR_HELP();
    if (DOES_OBJECT_EXIST( l_U1416 ))
    {
        DELETE_OBJECT( ref l_U1416 );
    }
    if (DOES_OBJECT_EXIST( l_U1415 ))
    {
        DELETE_OBJECT( ref l_U1415 );
    }
    l_U1418 = 0;
    l_U1419 = 0;
    while (NOT (sub_38458( ref l_U1368, ref l_U1369, uParam0, "LB_EYES", uParam1, 1, uParam2, 1 )))
    {
        WAIT( 0 );
    }
    l_U1323 = 0;
    return 1;
}

void sub_59351(int iParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 92, iParam2 );
    ADD_SCORE( sub_583(), -1 * iParam2 );
    g_U8328[uParam1] = 1;
    switch (iParam0)
    {
        case 0:
        g_U8365 += iParam2;
        g_U8368++;
        break;
        case 1:
        g_U8366 += iParam2;
        g_U8369++;
        break;
        case 2:
        g_U8367 += iParam2;
        g_U8370++;
        break;
    }
    if (iParam0 != 3)
    {
        PLAY_SOUND_FRONTEND( -1, "WARDROBE_BUY" );
        sub_12166( 5, ref uParam3, iParam0, ref uParam9 );
    }
    return;
}
