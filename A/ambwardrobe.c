void main()
{
    l_U79 = 0;
    l_U80 = 0;
    l_U81 = 5;
    l_U82 = 2;
    l_U129 = 1;
    l_U130 = 0;
    l_U131 = 0;
    l_U143 = "clothing";
    l_U187 = 0.50000000;
    if (HAS_DEATHARREST_EXECUTED())
    {
        if (l_U79 == 3)
        {
            if (l_U80 < 2)
            {
                sub_113();
            }
        }
        sub_1152();
    }
    sub_1419();
    sub_2540( l_U197 );
    while (l_U129)
    {
        WAIT( 0 );
        if (sub_2888())
        {
            switch (l_U79)
            {
                case 0:
                if (sub_3012())
                {
                    sub_3152();
                    l_U130 = 1;
                    l_U79 = 1;
                }
                break;
                case 1:
                if (sub_6171())
                {
                    l_U79 = 2;
                }
                break;
                case 2:
                sub_6311( "WD_USE", "WD_CANT" );
                break;
                case 3:
                sub_8012();
                break;
            }
        }
        g_U8220 = l_U82;
    }
    sub_1152();
    return;
}

void sub_113()
{
    int I;

    if (sub_164( sub_122(), 29 ))
    {
        l_U190 = 0;
        l_U191 = 0;
        l_U192 = 0;
        l_U193 = 0;
        l_U194 = 0;
        l_U195 = 0;
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        for ( I = 0; I < l_U145; I++ )
        {
            DESTROY_CAM( l_U145[I] );
        }
        DESTROY_CAM( l_U152 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_122() );
        sub_328( ref l_U144 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_CHAR_CURRENT_WEAPON_VISIBLE( sub_122(), 1 );
        SET_CHAR_COLLISION( sub_122(), 1 );
        FREEZE_CHAR_POSITION( sub_122(), 0 );
        sub_474();
        SET_PLAYER_CONTROL( sub_499(), 1 );
        SET_WIDESCREEN_BORDERS( 0 );
        sub_554( 5, "nowt" );
        sub_884();
        while (sub_1084())
        {
            WAIT( 0 );
        }
        l_U80 = 3;
    }
    return;
}

void sub_122()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_164(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    if (iVar4 == 7)
    {
        return 1;
    }
    return 0;
}

void sub_328(unknown uParam0)
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

void sub_474()
{
    SET_MINIGAME_IN_PROGRESS( 0 );
    return;
}

void sub_499()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_554(int iParam0, string sParam1)
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
                    sub_775();
                    l_U1 = 0;
                }
            }
            if (l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_499(), 1 );
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

void sub_775()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_884()
{
    unknown uVar2;
    int iVar3;
    int I;
    unknown uVar5;

    GET_GROUP_SIZE( sub_893(), ref uVar2, ref iVar3 );
    if (iVar3 > 0)
    {
        for ( I = 0; I < iVar3; I++ )
        {
            GET_GROUP_MEMBER( sub_893(), I, ref uVar5 );
            if ((NOT (IS_CHAR_INJURED( uVar5 ))) AND (IS_PLAYER_PLAYING( sub_499() )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( uVar5 )))
                {
                    CLEAR_CHAR_TASKS( uVar5 );
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    TASK_GOTO_CHAR_OFFSET( uVar5, sub_122(), -1, 2.50000000, 0.00000000 );
                }
            }
        }
    }
    return;
}

void sub_893()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1084()
{
    if (IS_CONTROL_PRESSED( 2, 23 ))
    {
        return 1;
    }
    return 0;
}

void sub_1152()
{
    int I;

    REMOVE_ANIMS( l_U143 );
    for ( I = 0; I < 6; I++ )
    {
        if ((l_U130) AND (NOT (IS_STRING_NULL( l_U153[I] ))))
        {
            sub_1224( "iClear: " );
            sub_1243( I );
            sub_1224( ", " );
            sub_1224( l_U153[I] );
            sub_1284();
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( l_U153[I] ))
            {
                CLEAR_HELP();
            }
        }
    }
    sub_554( 2, "WD_USE" );
    g_U8220 = 6;
    if (l_U79 > 1)
    {
        AMBIENT_AUDIO_BANK_NO_LONGER_NEEDED();
    }
    UNREGISTER_SCRIPT_WITH_AUDIO();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_1224(unknown uParam0)
{
    return;
}

void sub_1243(unknown uParam0)
{
    return;
}

void sub_1284()
{
    if (g_U9231)
    {
        PRINTNL();
    }
    return;
}

void sub_1419()
{
    l_U153[2] = "WD_TORSO";
    l_U153[3] = "WD_LEGS";
    l_U153[4] = "WD_FEET";
    l_U153[0] = "WD_HEAD";
    l_U153[1] = "WD_EYES";
    l_U153[5] = "WD_BODY";
    l_U135[0] = "Brushoff_Suit_Stand";
    l_U135[1] = "Examine Glasses_b";
    l_U135[2] = "Examine Hat_b";
    l_U135[3] = "Examine Legs";
    l_U135[4] = "Examine Shirt";
    l_U135[5] = "Examine Shoes";
    l_U135[6] = "Tie_Adjust_Stand";
    l_U160[0] = {0.00000000, 0.40000000, 0.60000000};
    l_U160[1] = {0.00000000, 0.40000000, 0.55000000};
    l_U160[2] = {-0.00000000, 0.75000000, 0.25000000};
    l_U160[3] = {0.00000000, 0.85000000, -0.25000000};
    l_U160[4] = {0.00000000, 0.75000000, -0.65000000};
    l_U160[5] = {0.00000000, 1.60000000, 0.00000000};
    l_U179[0] = 0.60000000;
    l_U179[1] = 0.55000000;
    l_U179[2] = 0.25000000;
    l_U179[3] = -0.45000000;
    l_U179[4] = -0.90000000;
    l_U179[5] = -0.15000000;
    l_U186 = 45.00000000;
    l_U83[0]._fU0 = "BROOKLYN_WARDROBE";
    l_U83[0]._fU4 = {890.52500000, -497.60100000, 20.00000000};
    l_U83[0]._fU16 = 270.00000000;
    l_U83[0]._fU20 = {904.30990000, -498.31270000, 14.63890000};
    l_U83[0]._fU32 = 168.54500000;
    l_U83[1]._fU0 = "BRONX_WARDROBE";
    l_U83[1]._fU4 = {604.00720000, 1412.38400000, 18.02580000};
    l_U83[1]._fU16 = 215.00000000;
    l_U83[1]._fU20 = {589.58100000, 1398.41700000, 10.90680000};
    l_U83[1]._fU32 = 17.54190000;
    l_U83[2]._fU0 = "MANHATTAN_WARDROBE";
    l_U83[2]._fU4 = {106.55000000, 846.15000000, 45.60000000};
    l_U83[2]._fU16 = 270.00000000;
    l_U83[2]._fU20 = {119.25970000, 845.22910000, 14.65260000};
    l_U83[2]._fU32 = 166.84770000;
    l_U83[3]._fU0 = "JERSEY_WARDROBE";
    l_U83[3]._fU4 = {-970.40000000, 889.20000000, 19.50000000};
    l_U83[3]._fU16 = 180.00000000;
    l_U83[3]._fU20 = {-961.77950000, 901.54690000, 13.60570000};
    l_U83[3]._fU32 = 268.55740000;
    l_U83[4]._fU0 = "PLAYBOY_WARDROBE";
    l_U83[4]._fU4 = {-433.40000000, 1459.73000000, 39.50000000};
    l_U83[4]._fU16 = 90.00000000;
    l_U83[4]._fU20 = {-421.26020000, 1493.19000000, 18.81150000};
    l_U83[4]._fU32 = 293.53930000;
    return;
}

void sub_2540(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22)
{
    boolean bVar25;
    int I;
    int iVar27;
    float fVar28;
    float fVar29;

    bVar25 = false;
    iVar27 = 99;
    fVar29 = 1E8;
    for ( I = 0; I < 5; I++ )
    {
        fVar28 = VDIST( uParam0._fU4[0], l_U83[I]._fU4 );
        if (fVar28 < fVar29)
        {
            iVar27 = I;
            fVar29 = fVar28;
            bVar25 = true;
        }
    }
    if (bVar25)
    {
        l_U81 = iVar27;
        if (l_U81 == 0)
        {
            if (sub_2681())
            {
                l_U129 = 0;
            }
        }
        if (l_U81 == 4)
        {
            g_U8332[17] = 1;
        }
        else
        {
            g_U8332[17] = 0;
        }
        if (l_U129)
        {
            REQUEST_ANIMS( l_U143 );
        }
    }
    else
    {
        SCRIPT_ASSERT( "SELECT_WARDROBE_LOCATION() - NOT bFound_a_wardrobe" );
    }
    return;
}

void sub_2681()
{
    int Result;

    Result = 1;
    if (g_U15654[33])
    {
        Result = 1;
    }
    else
    {
        Result = 0;
    }
    return Result;
}

int sub_2888()
{
    if (IS_PLAYER_PLAYING( sub_499() ))
    {
        if (NOT (IS_CHAR_DEAD( sub_122() )))
        {
            if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
            {
                return 1;
            }
        }
    }
    l_U129 = 0;
    return 0;
}

int sub_3012()
{
    int iVar2;

    GET_INTERIOR_FROM_CHAR( sub_122(), ref iVar2 );
    if (NOT (iVar2 == nil))
    {
        if (LOCATE_CHAR_ON_FOOT_3D( sub_122(), l_U83[l_U81]._fU4._fU0, l_U83[l_U81]._fU4._fU4, l_U83[l_U81]._fU4._fU8, 5.00000000, 5.00000000, 5.00000000, 0 ))
        {
            REGISTER_SCRIPT_WITH_AUDIO( 0 );
            return 1;
        }
    }
    return 0;
}

void sub_3152()
{
    sub_3167( ref l_U72._fU0 );
    sub_4297( ref l_U72._fU4 );
    sub_5024( ref l_U72._fU8 );
    sub_5625( ref l_U72._fU12 );
    sub_5922( ref l_U72._fU16 );
    l_U72._fU20 = -1;
    l_U72._fU24 = -1;
    return;
}

void sub_3167(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_122(), 1 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_122(), 1 );
    bVar8 = false;
    for ( I = 0; I < 45; I++ )
    {
        if (NOT bVar8)
        {
            sub_3237( I, ref iVar6, ref iVar7 );
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

void sub_3237(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_4297(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_122(), 2 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_122(), 2 );
    bVar8 = false;
    for ( I = 0; I < 26; I++ )
    {
        if (NOT bVar8)
        {
            sub_4365( I, ref iVar6, ref iVar7 );
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

void sub_4365(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_5024(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_122(), 5 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_122(), 5 );
    bVar8 = false;
    for ( I = 0; I < 20; I++ )
    {
        if (NOT bVar8)
        {
            sub_5092( I, ref iVar6, ref iVar7 );
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

void sub_5092(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_5625(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;
    int iVar7;
    int iVar8;

    GET_CHAR_PROP_INDEX( sub_122(), 0, ref iVar3 );
    (uParam0^) = 4;
    bVar6 = false;
    for ( I = -1; I <= 4; I++ )
    {
        if (NOT bVar6)
        {
            sub_5678( I, ref iVar5 );
            if (iVar3 == iVar5)
            {
                (uParam0^) = I;
                bVar6 = true;
            }
        }
    }
    if ((uParam0^) == -1)
    {
        iVar7 = GET_CHAR_DRAWABLE_VARIATION( sub_122(), 8 );
        iVar8 = GET_CHAR_TEXTURE_VARIATION( sub_122(), 8 );
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

void sub_5678(unknown uParam0, unknown uParam1)
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

void sub_5922(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;

    GET_CHAR_PROP_INDEX( sub_122(), 1, ref iVar3 );
    bVar6 = false;
    for ( I = -1; I <= 3; I++ )
    {
        if (NOT bVar6)
        {
            sub_5971( I, ref iVar5 );
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

void sub_5971(unknown uParam0, unknown uParam1)
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

int sub_6171()
{
    if (NOT (HAVE_ANIMS_LOADED( l_U143 )))
    {
        REQUEST_ANIMS( l_U143 );
        return 0;
        break;
    }
    if (NOT (REQUEST_AMBIENT_AUDIO_BANK( "SCRIPT_AMBIENT\WARDROBE" )))
    {
        return 0;
        break;
    }
    return 1;
}

void sub_6311(unknown uParam0, unknown uParam1)
{
    if (((IS_PLAYER_CONTROL_ON( sub_499() )) AND (sub_6332())) AND (g_U15654[57]))
    {
        if (sub_6528( 1, 1 ))
        {
            if (LOCATE_CHAR_ON_FOOT_3D( sub_122(), l_U83[l_U81]._fU4._fU0, l_U83[l_U81]._fU4._fU4, l_U83[l_U81]._fU4._fU8, 1.00000000, 1.00000000, 1.60000000, 1 ))
            {
                if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_TRI" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_NOSAV" )))
                {
                    CLEAR_HELP();
                }
                if (g_U8361)
                {
                    if (sub_6960( 2, 0 ))
                    {
                        if (sub_7247( 2, uParam0, 0 ))
                        {
                            sub_554( 2, uParam0 );
                            GET_GAME_TIMER( ref l_U189 );
                            l_U79 = 3;
                        }
                    }
                }
                else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( uParam1 )))
                {
                    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( uParam0 ))
                    {
                        CLEAR_HELP();
                    }
                    PRINT_HELP_FOREVER( uParam1 );
                }
            }
            else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( uParam1 ))
            {
                CLEAR_HELP();
            }
            sub_554( 2, uParam0 );;
        }
        else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( uParam1 ))
        {
            CLEAR_HELP();
        }
        sub_554( 2, uParam0 );;
    }
    return;
}

int sub_6332()
{
    switch (l_U81)
    {
        case 0:
        return g_U9943[0]._fU0;
        break;
        case 1:
        return g_U9943[1]._fU0;
        break;
        case 2:
        return g_U9943[2]._fU0;
        break;
        case 3:
        return g_U9943[3]._fU0;
        break;
        case 4:
        return g_U9943[4]._fU0;
        break;
        case 5:
        return 0;
        break;
    }
    return 0;
}

int sub_6528(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_122() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_122(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_122() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_122(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_122()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_122() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_122() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_499() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_499() )))
    {
        return 0;
    }
    return 1;
}

int sub_6960(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_499() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_499() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_499() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9202)))
                {
                    if (NOT sub_7056())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_122() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_7141())
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

int sub_7056()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_7141()
{
    return sub_7152( 0, 0 );
}

int sub_7152(boolean bParam0, unknown uParam1)
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

int sub_7247(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_6960( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_499(), 0 );
                l_U2 = 1;
            }
            g_U9172 = uParam0;
            l_U3 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_7522();
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

void sub_7522()
{
    return sub_7152( 1, 1 );
}

void sub_8012()
{
    switch (l_U80)
    {
        case 0:
        sub_8070( 10.00000000 );
        break;
        case 1:
        sub_11006();
        break;
        case 2:
        sub_113();
        break;
        case 3:
        l_U82 = 2;
        l_U80 = 0;
        l_U79 = 2;
        break;
    }
    return;
}

void sub_8070(unknown uParam0)
{
    int J;
    unknown uVar4;
    unknown uVar5;
    int I;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    SET_PLAYER_CONTROL( sub_499(), 0 );
    SET_WIDESCREEN_BORDERS( 1 );
    sub_8100();
    sub_8129( ref l_U144 );
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar4 );
    if (NOT (IS_CAR_DEAD( uVar4 )))
    {
        if (LOCATE_CAR_3D( uVar4, l_U83[l_U81]._fU4._fU0, l_U83[l_U81]._fU4._fU4, l_U83[l_U81]._fU4._fU8, uParam0 * 1.25000000, uParam0 * 1.25000000, uParam0 * 1.25000000, 0 ))
        {
            SET_CAR_COORDINATES( uVar4, l_U83[l_U81]._fU20._fU0, l_U83[l_U81]._fU20._fU4, l_U83[l_U81]._fU20._fU8 );
            SET_CAR_HEADING( uVar4, l_U83[l_U81]._fU32 );
            CLEAR_ROOM_FOR_CAR( uVar4 );
            PRINTSTRING( "  * repos players_last_car: " );
            PRINTVECTOR( l_U83[l_U81]._fU20 );
            PRINTSTRING( ", " );
            PRINTFLOAT( l_U83[l_U81]._fU32 );
            PRINTNL();
        }
        else
        {
            PRINTSTRING( "  * players_last_car is NOT IN AREA\n" );
        }
    }
    else
    {
        PRINTSTRING( "  * players_last_car is DEAD\n" );
    }
    CLEAR_AREA( l_U83[l_U81]._fU4._fU0, l_U83[l_U81]._fU4._fU4, l_U83[l_U81]._fU4._fU8, uParam0, 0 );
    GET_GROUND_Z_FOR_3D_COORD( l_U83[l_U81]._fU4._fU0, l_U83[l_U81]._fU4._fU4, l_U83[l_U81]._fU4._fU8, ref uVar5 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_122() );
    SET_CHAR_COORDINATES( sub_122(), l_U83[l_U81]._fU4._fU0, l_U83[l_U81]._fU4._fU4, uVar5 );
    SET_CHAR_HEADING( sub_122(), l_U83[l_U81]._fU16 );
    FREEZE_CHAR_POSITION( sub_122(), 1 );
    for ( I = 0; I < 45; I++ )
    {
        if (g_U8229[I])
        {
            l_U190++;
        }
    }
    for ( I = 0; I < 26; I++ )
    {
        if (g_U8275[I])
        {
            l_U191++;
        }
    }
    for ( I = 0; I < 20; I++ )
    {
        if (g_U8302[I])
        {
            l_U192++;
        }
    }
    for ( I = 0; I < 4; I++ )
    {
        if (g_U8323[I])
        {
            l_U193++;
        }
    }
    for ( I = 0; I < 3; I++ )
    {
        if (g_U8328[I])
        {
            l_U194++;
        }
    }
    for ( I = 0; I < 20; I++ )
    {
        if (g_U8332[I])
        {
            l_U195++;
        }
    }
    sub_3152();
    SET_CHAR_CURRENT_WEAPON_VISIBLE( sub_122(), 0 );
    for ( J = 0; J < 6; J++ )
    {
        CREATE_CAM( 14, ref l_U145[J] );
        GET_CHAR_COORDINATES( sub_122(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_122(), l_U160[J]._fU0, l_U160[J]._fU4 + l_U187, l_U160[J]._fU8, ref uVar10._fU0, ref uVar10._fU4, ref uVar10._fU8 );
        uVar7._fU8 += l_U179[J];
        SET_CAM_POS( l_U145[J], uVar10._fU0, uVar10._fU4, uVar10._fU8 );
        POINT_CAM_AT_COORD( l_U145[J], uVar7._fU0, uVar7._fU4, uVar7._fU8 );
        SET_CAM_FOV( l_U145[J], l_U186 );
        SET_CAM_ACTIVE( l_U145[J], 1 );
    }
    l_U132._fU0 = uVar7._fU0;
    l_U132._fU4 = uVar7._fU4;
    l_U132._fU8 = uVar7._fU8 + l_U179[l_U81];
    CREATE_CAM( 3, ref l_U152 );
    sub_9444();
    SET_CAM_PROPAGATE( l_U145[l_U82], 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    if (sub_1084())
    {
        while (sub_1084())
        {
            PRINTSTRING( "ambWardrobe - IS_BUTTON_PRESSED(PAD1, LEFT SHOULDER1)\n" );
            WAIT( 0 );
        }
    }
    l_U80 = 1;
    return;
}

void sub_8100()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    return;
}

void sub_8129(unknown uParam0)
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

void sub_9444()
{
    unknown uVar2;
    int iVar3;
    int I;
    unknown uVar5;
    vector vVar6;
    float fVar9;
    unknown uVar10;

    GET_GROUP_SIZE( sub_893(), ref uVar2, ref iVar3 );
    if (iVar3 > 0)
    {
        for ( I = 0; I < iVar3; I++ )
        {
            GET_GROUP_MEMBER( sub_893(), I, ref uVar5 );
            if ((NOT (IS_CHAR_INJURED( uVar5 ))) AND (IS_PLAYER_PLAYING( sub_499() )))
            {
                vVar6 = {0.00000000, 0.00000000, 0.00000000};
                fVar9 = 0.00000000;
                sub_9566( I, ref vVar6, ref fVar9, uVar10 );
                PRINTSTRING( "  * buddy " );
                PRINTINT( I );
                PRINTSTRING( " vFollower_pos: " );
                PRINTVECTOR( vVar6 );
                PRINTSTRING( ", fFollower_head: " );
                PRINTFLOAT( fVar9 );
                PRINTSTRING( ", sFollower_room: ''" );
                PRINTSTRING( uVar10 );
                PRINTSTRING( "''\n" );
                SET_CHAR_COORDINATES( uVar5, vVar6.x, vVar6.y, vVar6.z );
                SET_CHAR_HEADING( uVar5, fVar9 );
                TASK_LOOK_AT_CHAR( uVar5, sub_122(), -1, 0 );
                TASK_START_SCENARIO_AT_POSITION( uVar5, "Scenario_Standing", vVar6, fVar9 );
            }
            else if (NOT (IS_CHAR_INJURED( uVar5 )))
            {
                PRINTSTRING( "  * buddy " );
                PRINTINT( I );
                PRINTSTRING( " injured" );
            }
            else
            {
                PRINTSTRING( "  * buddy " );
                PRINTINT( I );
                PRINTSTRING( " NOT injured" );
            }
            if (IS_PLAYER_PLAYING( sub_499() ))
            {
                PRINTSTRING( ", IS_PLAYER_PLAYING(PLAYER_ID())\n" );
            }
            else
            {
                PRINTSTRING( ", NOT IS_PLAYER_PLAYING(PLAYER_ID())\n" );
            }
        }
    }
    return;
}

void sub_9566(unknown uParam0, unknown uParam1, unknown uParam2, string sParam3)
{
    switch (l_U81)
    {
        case 0:
        sParam3 = "NULL";
        switch (uParam0)
        {
            case 0:
            (uParam1^) = {892.35300000, -493.13920000, 18.42370000};
            (uParam2^) = 188.52910000;
            break;
            case 1:
            (uParam1^) = {893.76660000, -493.35610000, 18.42540000};
            (uParam2^) = 159.10940000;
            break;
            case 2:
            (uParam1^) = {894.36680000, -494.81130000, 18.40230000};
            (uParam2^) = 112.19680000;
            break;
        }
        break;
        case 1:
        sParam3 = "NULL";
        switch (uParam0)
        {
            case 0:
            (uParam1^) = {602.65380000, 1408.49800000, 16.53330000};
            (uParam2^) = 137.34260000;
            break;
            case 1:
            (uParam1^) = {601.21870000, 1409.52100000, 16.53330000};
            (uParam2^) = 190.59120000;
            break;
            case 2:
            (uParam1^) = {599.67760000, 1409.01600000, 16.53330000};
            (uParam2^) = 241.81800000;
            break;
        }
        break;
        case 2:
        sParam3 = "loftrm1";
        switch (uParam0)
        {
            case 0:
            (uParam1^) = {101.58110000, 852.48850000, 44.11390000};
            (uParam2^) = 294.10350000;
            break;
            case 1:
            (uParam1^) = {101.79780000, 854.73090000, 44.09510000};
            (uParam2^) = 194.73610000;
            break;
            case 2:
            (uParam1^) = {104.05750000, 855.98630000, 44.04600000};
            (uParam2^) = 163.30880000;
            break;
        }
        break;
        case 3:
        sParam3 = "NULL";
        switch (uParam0)
        {
            case 0:
            (uParam1^) = {-964.90640000, 891.60750000, 18.00130000};
            (uParam2^) = 207.13060000;
            break;
            case 1:
            (uParam1^) = {-966.15090000, 890.80300000, 18.29300000};
            (uParam2^) = 287.76010000;
            break;
            case 2:
            (uParam1^) = {-966.45930000, 889.48610000, 18.00130000};
            (uParam2^) = 327.35100000;
            break;
        }
        break;
        case 4:
        sParam3 = "PlayXroom";
        switch (uParam0)
        {
            case 0:
            (uParam1^) = {-423.81730000, 1461.69300000, 37.96650000};
            (uParam2^) = 128.35710000;
            break;
            case 1:
            (uParam1^) = {-424.88310000, 1461.97900000, 37.96650000};
            (uParam2^) = 171.62390000;
            break;
            case 2:
            (uParam1^) = {-417.54780000, 1468.36500000, 37.96650000};
            (uParam2^) = 151.90180000;
            break;
        }
        break;
    }
    return;
}

void sub_11006()
{
    char[16] cVar2;
    int I;
    char[16] cVar7;
    int J;
    char[16] cVar12;
    char[16] cVar16;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    int iVar24;

    if (IS_CAM_PROPAGATING( l_U145[l_U82] ))
    {
        StrCopy( ref cVar2, l_U153[l_U82], 16 );
        if (NOT (sub_11059( l_U82 )))
        {
            ConcatString(ref cVar2, "N", 16);
        }
        if (sub_11461( l_U82 ))
        {
            ConcatString(ref cVar2, "_O", 16);
        }
        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar2 )))
        {
            for ( I = 0; I < 6; I++ )
            {
                StrCopy( ref cVar7, l_U153[I], 16 );
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar7 ))
                {
                    CLEAR_HELP();
                }
                ConcatString(ref cVar7, "N", 16);
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar7 ))
                {
                    CLEAR_HELP();
                }
                StrCopy( ref cVar7, l_U153[I], 16 );
                ConcatString(ref cVar7, "_O", 16);
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar7 ))
                {
                    CLEAR_HELP();
                }
                StrCopy( ref cVar7, l_U153[I], 16 );
                ConcatString(ref cVar7, "N_O", 16);
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar7 ))
                {
                    CLEAR_HELP();
                }
            }
            PRINT_HELP_FOREVER( ref cVar2 );
        }
        if (NOT l_U131)
        {
            if ((((((((NOT (IS_BUTTON_PRESSED( 0, 10 ))) AND (NOT (IS_BUTTON_PRESSED( 0, 11 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 8 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 9 )))) AND (NOT (IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 0 )))) AND (NOT (IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 0 )))) AND (NOT (IS_GAME_KEYBOARD_NAV_UP_PRESSED( 0 )))) AND (NOT (IS_GAME_KEYBOARD_NAV_DOWN_PRESSED( 0 ))))
            {
                l_U131 = 1;
            }
        }
        else if (sub_13524())
        {
            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "WD_ACCE" )))
            {
                for ( J = 0; J < 6; J++ )
                {
                    StrCopy( ref cVar12, l_U153[J], 16 );
                    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar12 ))
                    {
                        CLEAR_HELP();
                    }
                    ConcatString(ref cVar12, "N", 16);
                    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar12 ))
                    {
                        CLEAR_HELP();
                    }
                    StrCopy( ref cVar12, l_U153[J], 16 );
                    ConcatString(ref cVar12, "_O", 16);
                    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar12 ))
                    {
                        CLEAR_HELP();
                    }
                    StrCopy( ref cVar12, l_U153[J], 16 );
                    ConcatString(ref cVar12, "N_O", 16);
                    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar12 ))
                    {
                        CLEAR_HELP();
                    }
                }
                if (NOT (sub_13790( 0, 19, 1 )))
                {
                    PRINT_HELP( "WD_ACCE" );
                }
            }
            sub_14035( 0 );
            l_U80 = 2;
        }
        else if (sub_14867( "BLANK" ))
        {
            for ( J = 0; J < 6; J++ )
            {
                StrCopy( ref cVar16, l_U153[J], 16 );
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar16 ))
                {
                    CLEAR_HELP();
                }
                ConcatString(ref cVar16, "N", 16);
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar16 ))
                {
                    CLEAR_HELP();
                }
                StrCopy( ref cVar16, l_U153[J], 16 );
                ConcatString(ref cVar16, "_O", 16);
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar16 ))
                {
                    CLEAR_HELP();
                }
                StrCopy( ref cVar16, l_U153[J], 16 );
                ConcatString(ref cVar16, "N_O", 16);
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar16 ))
                {
                    CLEAR_HELP();
                }
            }
            if (NOT (sub_13790( 0, 19, 1 )))
            {
                DO_SCREEN_FADE_OUT( 125 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                sub_14035( 19 );
                DO_SCREEN_FADE_IN( 125 );
            }
            l_U80 = 2;
        }
        sub_15210();
        sub_15722( l_U82 );
        if (sub_11059( l_U82 ))
        {
            if (((IS_BUTTON_PRESSED( 0, 10 )) || (IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 0 ))) || (sub_16640( 10 )))
            {
                if (IS_SCREEN_FADED_IN())
                {
                    if (sub_16933( l_U82, ref uVar20 ))
                    {
                        PLAY_SOUND_FROM_PED( -1, sub_17981( uVar20 ), sub_122() );
                    }
                    DO_SCREEN_FADE_OUT( 125 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    sub_18557( l_U82 );
                    DO_SCREEN_FADE_IN( 125 );
                    while (NOT IS_SCREEN_FADED_IN())
                    {
                        WAIT( 0 );
                    }
                    PLAY_SOUND_FRONTEND( -1, "FRONTEND_OTHER_INFO" );
                    l_U131 = 0;
                }
            }
            else if (((IS_BUTTON_PRESSED( 0, 11 )) || (IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 0 ))) || (sub_16640( 11 )))
            {
                if (IS_SCREEN_FADED_IN())
                {
                    if (sub_16933( l_U82, ref uVar21 ))
                    {
                        PLAY_SOUND_FROM_PED( -1, sub_17981( uVar21 ), sub_122() );
                    }
                    DO_SCREEN_FADE_OUT( 125 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    sub_21026( ref l_U82 );
                    DO_SCREEN_FADE_IN( 125 );
                    while (NOT IS_SCREEN_FADED_IN())
                    {
                        WAIT( 0 );
                    }
                    PLAY_SOUND_FRONTEND( -1, "FRONTEND_OTHER_INFO" );
                    l_U131 = 0;
                }
            }
        }
        if (((IS_BUTTON_PRESSED( 0, 8 )) || (IS_GAME_KEYBOARD_NAV_UP_PRESSED( 0 ))) || (sub_16640( 8 )))
        {
            sub_3167( ref uVar22 );
            if (NOT (sub_11552( uVar22 )))
            {
                if (l_U82 > 0)
                {
                    sub_19061( l_U82, sub_22371() );
                    l_U131 = 0;
                    while (NOT (sub_19306( l_U82 )))
                    {
                        WAIT( 0 );
                    }
                }
            }
            else
            {
                switch (l_U82)
                {
                    case 4:
                    sub_19061( l_U82, 5 );
                    l_U131 = 0;
                    l_U82 = 5;
                    while (NOT (sub_19306( l_U82 )))
                    {
                        WAIT( 0 );
                    }
                    break;
                    case 5:
                    sub_19061( l_U82, 1 );
                    l_U131 = 0;
                    l_U82 = 1;
                    while (NOT (sub_19306( l_U82 )))
                    {
                        WAIT( 0 );
                    }
                    break;
                    default:
                      case 6: if (l_U82 > 0)
                    {
                        sub_19061( l_U82, sub_22371() );
                        l_U131 = 0;
                        while (NOT (sub_19306( l_U82 )))
                        {
                            WAIT( 0 );
                        }
                    }
                }
            }
        }
        else if (((IS_BUTTON_PRESSED( 0, 9 )) || (IS_GAME_KEYBOARD_NAV_DOWN_PRESSED( 0 ))) || (sub_16640( 9 )))
        {
            sub_3167( ref uVar23 );
            if (NOT (sub_11552( uVar23 )))
            {
                if (l_U82 < 4)
                {
                    sub_19061( l_U82, sub_22739() );
                    l_U131 = 0;
                    while (NOT (sub_19306( l_U82 )))
                    {
                        WAIT( 0 );
                    }
                }
            }
            else
            {
                switch (l_U82)
                {
                    case 1:
                    sub_19061( l_U82, 5 );
                    l_U131 = 0;
                    l_U82 = 5;
                    while (NOT (sub_19306( l_U82 )))
                    {
                        WAIT( 0 );
                    }
                    break;
                    case 5:
                    sub_19061( l_U82, 4 );
                    l_U131 = 0;
                    l_U82 = 4;
                    while (NOT (sub_19306( l_U82 )))
                    {
                        WAIT( 0 );
                    }
                    break;
                    default:
                      case 6: if (l_U82 < 4)
                    {
                        sub_19061( l_U82, sub_22739() );
                        l_U131 = 0;
                        while (NOT (sub_19306( l_U82 )))
                        {
                            WAIT( 0 );
                        }
                    }
                }
            }
        };;;
    }
    else
    {
        for ( iVar24 = 0; iVar24 < l_U145; iVar24++ )
        {
            if (IS_CAM_PROPAGATING( l_U145[iVar24] ))
            {
                sub_1224( "  * iProp" );
                sub_1243( iVar24 );
                sub_1284();
            }
        }
    }
    return;
}

int sub_11059(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        if (l_U193 > 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
        case 1:
        if (l_U194 > 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
        case 2:
        if ((l_U190 > 1) || (l_U195 > 0))
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
        case 3:
        if (l_U191 > 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
        case 4:
        if (l_U192 > 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
        case 5:
        if ((l_U195 > 0) || (l_U190 > 1))
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
        case 6:
        SCRIPT_ASSERT( "OWN_SEVERAL_OF_CLOTHES_ENUM(NUMBER_OF_SHOP_CAM)" );
        return 0;
    }
    SCRIPT_ASSERT( "OWN_SEVERAL_OF_CLOTHES_ENUM(other)" );
    return 0;
}

int sub_11461(unknown uParam0)
{
    unknown uVar3;

    switch (uParam0)
    {
        case 0:
        return 0;
        break;
        case 1:
        sub_3167( ref uVar3 );
        if (sub_11552( uVar3 ))
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
        case 2:
        return 0;
        break;
        case 3:
        return 0;
        break;
        case 4:
        sub_3167( ref uVar3 );
        if (sub_11552( uVar3 ))
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
        case 5:
        return 0;
        break;
        case 6:
        SCRIPT_ASSERT( "PLAYER_LOOKING_AT_FEET_OR_EYES_WHILE_WEARING_OUTFIT(NUMBER_OF_SHOP_CAM)" );
        return 0;
    }
    SCRIPT_ASSERT( "PLAYER_LOOKING_AT_FEET_OR_EYES_WHILE_WEARING_OUTFIT(other)" );
    return 0;
}

int sub_11552(int iParam0)
{
    int I;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    for ( I = 0; I < 20; I++ )
    {
        if ((((I != 0) AND (I != 19)) AND (I != 1)) AND (I != 18))
        {
            sub_11600( I, ref uVar4 );
            if (iParam0 == uVar4._fU0)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_11600(unknown uParam0, int iParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    switch (uParam0)
    {
        case 19:
        iParam1->_fU0 = l_U72._fU0;
        iParam1->_fU4 = l_U72._fU4;
        iParam1->_fU8 = l_U72._fU8;
        iParam1->_fU12 = l_U72._fU12;
        iParam1->_fU16 = l_U72._fU16;
        iParam1->_fU20 = l_U72._fU20;
        iParam1->_fU24 = l_U72._fU24;
        break;
        case 0:
        sub_3167( iParam1 + 0 );
        sub_4297( iParam1 + 4 );
        sub_5024( iParam1 + 8 );
        sub_5625( iParam1 + 12 );
        sub_5922( iParam1 + 16 );
        iParam1->_fU20 = -1;
        iParam1->_fU24 = -1;
        break;
        case 18:
        GENERATE_RANDOM_INT_IN_RANGE( 0, 45, ref uVar4 );
        GENERATE_RANDOM_INT_IN_RANGE( 0, 26, ref uVar5 );
        GENERATE_RANDOM_INT_IN_RANGE( 0, 20, ref uVar6 );
        GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref uVar7 );
        GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref uVar8 );
        iParam1->_fU0 = uVar4;
        iParam1->_fU4 = uVar5;
        iParam1->_fU8 = uVar6;
        iParam1->_fU12 = uVar7;
        iParam1->_fU16 = uVar8;
        GENERATE_RANDOM_INT_IN_RANGE( -1, 1, iParam1 + 20 );
        GENERATE_RANDOM_INT_IN_RANGE( -1, 1, iParam1 + 24 );
        break;
        case 1:
        iParam1->_fU0 = 0;
        iParam1->_fU4 = 0;
        iParam1->_fU8 = 0;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = -1;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 2:
        iParam1->_fU0 = 28;
        iParam1->_fU4 = 19;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 3:
        iParam1->_fU0 = 29;
        iParam1->_fU4 = 20;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 4:
        iParam1->_fU0 = 30;
        iParam1->_fU4 = 21;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 5:
        iParam1->_fU0 = 31;
        iParam1->_fU4 = 19;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 6:
        iParam1->_fU0 = 32;
        iParam1->_fU4 = 20;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 7:
        iParam1->_fU0 = 33;
        iParam1->_fU4 = 21;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 8:
        iParam1->_fU0 = 34;
        iParam1->_fU4 = 19;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 9:
        iParam1->_fU0 = 35;
        iParam1->_fU4 = 20;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 10:
        iParam1->_fU0 = 36;
        iParam1->_fU4 = 21;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 11:
        iParam1->_fU0 = 37;
        iParam1->_fU4 = 21;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 12:
        iParam1->_fU0 = 38;
        iParam1->_fU4 = 19;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 13:
        iParam1->_fU0 = 39;
        iParam1->_fU4 = 20;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 14:
        iParam1->_fU0 = 40;
        iParam1->_fU4 = 21;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 15:
        iParam1->_fU0 = 41;
        iParam1->_fU4 = 24;
        iParam1->_fU8 = 7;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 16:
        iParam1->_fU0 = 42;
        iParam1->_fU4 = 24;
        iParam1->_fU8 = 0;
        iParam1->_fU12 = 4;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 17:
        iParam1->_fU0 = 44;
        iParam1->_fU4 = 25;
        iParam1->_fU8 = 19;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = -1;
        iParam1->_fU20 = 1;
        iParam1->_fU24 = 0;
        break;
        default:
          case 20:
        iParam1->_fU0 = 45;
        iParam1->_fU4 = 26;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = 4;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = -1;
        iParam1->_fU24 = -1;
    }
    return;
}

int sub_13524()
{
    if ((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_13790(unknown uParam0, unknown uParam1, boolean bParam2)
{
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
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;

    sub_11600( uParam0, ref uVar5 );
    sub_11600( uParam1, ref uVar12 );
    if ((uVar5._fU0 != uVar12._fU0) AND (NOT ((uVar5._fU0 == 45) || (uVar12._fU0 == 45))))
    {
        return 0;
    }
    if ((uVar5._fU4 != uVar12._fU4) AND (NOT ((uVar5._fU4 == 26) || (uVar12._fU4 == 26))))
    {
        return 0;
    }
    if ((uVar5._fU8 != uVar12._fU8) AND (NOT ((uVar5._fU8 == 20) || (uVar12._fU8 == 20))))
    {
        return 0;
    }
    if (bParam2)
    {
        if ((uVar5._fU12 != uVar12._fU12) AND (NOT ((uVar5._fU12 == 4) || (uVar12._fU12 == 4))))
        {
            return 0;
        }
        if ((uVar5._fU16 != uVar12._fU16) AND (NOT ((uVar5._fU16 == 3) || (uVar12._fU16 == 3))))
        {
            return 0;
        }
    }
    return 1;
}

void sub_14035(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    sub_11600( uParam0, ref uVar3 );
    if (uVar3._fU0 < 45)
    {
        sub_14069( uVar3._fU0 );
    }
    if (uVar3._fU4 < 26)
    {
        sub_14173( uVar3._fU4 );
    }
    if (uVar3._fU8 < 20)
    {
        sub_14277( uVar3._fU8 );
    }
    if (uVar3._fU12 < 4)
    {
        sub_14381( uVar3._fU12 );
    }
    if (uVar3._fU16 < 3)
    {
        sub_14406( uVar3._fU16 );
    }
    switch (uVar3._fU20)
    {
        case 0:
        SET_CHAR_COMPONENT_VARIATION( sub_122(), 4, 0, 0 );
        break;
        case 1:
        SET_CHAR_COMPONENT_VARIATION( sub_122(), 4, 0, 0 );
        break;
    }
    switch (uVar3._fU24)
    {
        case 0:
        SET_CHAR_COMPONENT_VARIATION( sub_122(), 3, 0, 0 );
        break;
        case 1:
        SET_CHAR_COMPONENT_VARIATION( sub_122(), 3, 0, 0 );
        break;
    }
    return;
}

void sub_14069(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_3237( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_122(), 1 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_122(), 1 );
    if ((iVar5 != iVar3) || (iVar6 != iVar4))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_122(), 1, iVar3, iVar4 );
    }
    return;
}

void sub_14173(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_4365( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_122(), 2 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_122(), 2 );
    if ((iVar5 != iVar3) || (iVar6 != iVar4))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_122(), 2, iVar3, iVar4 );
    }
    return;
}

void sub_14277(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_5092( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_122(), 5 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_122(), 5 );
    if ((iVar5 != iVar3) || (iVar6 != iVar4))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_122(), 5, iVar3, iVar4 );
    }
    return;
}

void sub_14381(int iParam0)
{
    int iVar3;
    int iVar4;

    if (iParam0 == 3)
    {
        sub_14381( -1 );
        sub_14406( -1 );
        if (((GET_CHAR_DRAWABLE_VARIATION( sub_122(), 8 )) != 1) || ((GET_CHAR_TEXTURE_VARIATION( sub_122(), 8 )) != 0))
        {
            SET_CHAR_COMPONENT_VARIATION( sub_122(), 8, 1, 0 );
        }
    }
    else
    {
        sub_5678( iParam0, ref iVar3 );
        GET_CHAR_PROP_INDEX( sub_122(), 0, ref iVar4 );
        if (((GET_CHAR_DRAWABLE_VARIATION( sub_122(), 8 )) != 0) || ((GET_CHAR_TEXTURE_VARIATION( sub_122(), 8 )) != 0))
        {
            SET_CHAR_COMPONENT_VARIATION( sub_122(), 8, 0, 0 );
        }
        if (iVar4 != iVar3)
        {
            if (iVar3 < 0)
            {
                CLEAR_CHAR_PROP( sub_122(), 0 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( sub_122(), 0, iVar3 );
            }
        }
    }
    return;
}

void sub_14406(unknown uParam0)
{
    int iVar3;
    int iVar4;

    sub_5971( uParam0, ref iVar3 );
    GET_CHAR_PROP_INDEX( sub_122(), 1, ref iVar4 );
    if (iVar4 != iVar3)
    {
        if (iVar3 < 0)
        {
            CLEAR_CHAR_PROP( sub_122(), 1 );
        }
        else
        {
            SET_CHAR_PROP_INDEX( sub_122(), 1, iVar3 );
        }
    }
    return;
}

int sub_14867(unknown uParam0)
{
    if (sub_6960( 5, 0 ))
    {
        if (sub_7247( 5, uParam0, 0 ))
        {
            sub_554( 5, uParam0 );
            return 1;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_499() )))
    {
        sub_554( 5, uParam0 );
        return 1;
    }
    return 0;
}

void sub_15210()
{
    int iVar2;
    string sVar3;
    int iVar4;
    int iVar5;

    GET_GAME_TIMER( ref l_U188 );
    switch (l_U82)
    {
        case 0:
        sub_5625( ref iVar4 );
        if (iVar4 != -1)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref iVar2 );
            sVar3 = l_U135[2];
        }
        else
        {
            iVar2 = 2147483647;
            sVar3 = "nowt";
        }
        break;
        case 1:
        sub_5922( ref iVar5 );
        if (iVar5 != -1)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref iVar2 );
            sVar3 = l_U135[1];
        }
        else
        {
            iVar2 = 2147483647;
            sVar3 = "nowt";
        }
        break;
        case 2:
        GENERATE_RANDOM_INT_IN_RANGE( 5000, 7500, ref iVar2 );
        sVar3 = l_U135[4];
        break;
        case 3:
        GENERATE_RANDOM_INT_IN_RANGE( 5000, 7500, ref iVar2 );
        sVar3 = l_U135[3];
        break;
        case 4:
        GENERATE_RANDOM_INT_IN_RANGE( 2500, 5000, ref iVar2 );
        sVar3 = l_U135[5];
        break;
        case 5:
        GENERATE_RANDOM_INT_IN_RANGE( 5000, 7500, ref iVar2 );
        if ((iVar2 mod 2) == 0)
        {
            sVar3 = l_U135[0];
        }
        else
        {
            sVar3 = l_U135[6];
        }
        break;
        default:
          case 6:
        iVar2 = 2147483647;
        sVar3 = "nowt";
    }
    if ((GET_HASH_KEY( sVar3 )) != (GET_HASH_KEY( "nowt" )))
    {
        if (IS_CHAR_PLAYING_ANIM( sub_122(), l_U143, sVar3 ))
        {
            GET_GAME_TIMER( ref l_U189 );
        }
    }
    if ((l_U188 > (l_U189 + iVar2)) AND ((l_U189 + iVar2) > 0))
    {
        TASK_PLAY_ANIM( sub_122(), sVar3, l_U143, 4.00000000, 0, 0, 0, 0, -1 );
    }
    return;
}

void sub_15722(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    int iVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    float fVar10;
    float fVar11;

    if ((IS_CAM_ACTIVE( l_U145[uParam0] )) AND (IS_CAM_ACTIVE( l_U145[uParam0] )))
    {
        GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar3, ref uVar4, ref iVar5, ref iVar6 );
        if ((iVar5 == 0) AND (iVar6 == 0))
        {
            GET_MOUSE_INPUT( ref iVar5, ref iVar6 );
        }
        GET_CHAR_COORDINATES( sub_122(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
        if (IS_USING_CONTROLLER())
        {
            GET_CHAR_COORDINATES( sub_122(), ref l_U132._fU0, ref l_U132._fU4, ref l_U132._fU8 );
        }
        if (IS_USING_CONTROLLER())
        {
            l_U132._fU0 += (COS( l_U83[l_U81]._fU16 + 180.00000000 )) * ((TO_FLOAT( iVar5 )) / 512.00000000);
            l_U132._fU4 += (SIN( l_U83[l_U81]._fU16 + 180.00000000 )) * ((TO_FLOAT( iVar5 )) / 512.00000000);
            l_U132._fU8 += l_U179[uParam0] - ((TO_FLOAT( iVar6 )) / 512.00000000);
        }
        else
        {
            l_U132._fU0 += (TO_FLOAT( iVar5 )) / (512.00000000 * 8.00000000);
            l_U132._fU4 += (TO_FLOAT( iVar5 )) / (512.00000000 * 8.00000000);
            l_U132._fU8 += ((TO_FLOAT( iVar6 )) / (512.00000000 * 8.00000000)) * -1.00000000;
            fVar10 = uVar7._fU0 + ((COS( l_U83[l_U81]._fU16 + 180.00000000 )) * -0.50000000);
            fVar11 = uVar7._fU0 + ((COS( l_U83[l_U81]._fU16 + 180.00000000 )) * 0.50000000);
            if (l_U132._fU0 < fVar10)
            {
                l_U132._fU0 = fVar10;
            }
            else if (l_U132._fU0 > fVar11)
            {
                l_U132._fU0 = fVar11;
            }
            fVar10 = uVar7._fU4 + ((SIN( l_U83[l_U81]._fU16 + 180.00000000 )) * -0.50000000);
            fVar11 = uVar7._fU4 + ((SIN( l_U83[l_U81]._fU16 + 180.00000000 )) * 0.50000000);
            if (l_U132._fU4 < fVar10)
            {
                l_U132._fU4 = fVar10;
            }
            else if (l_U132._fU4 > fVar11)
            {
                l_U132._fU4 = fVar11;
            }
            fVar10 = (uVar7._fU8 + l_U179[uParam0]) - 0.50000000;
            fVar11 = (uVar7._fU8 + l_U179[uParam0]) + 0.50000000;
            if (l_U132._fU8 < fVar10)
            {
                l_U132._fU8 = fVar10;
            }
            else if (l_U132._fU8 > fVar11)
            {
                l_U132._fU8 = fVar11;
            }
            if (l_U81 == 4)
            {
                l_U132._fU4 = uVar7._fU4;
            }
        }
        POINT_CAM_AT_COORD( l_U145[uParam0], l_U132._fU0, l_U132._fU4, l_U132._fU8 );
    }
    return;
}

int sub_16640(unknown uParam0)
{
    int iVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar3, ref iVar4, ref uVar5, ref uVar6 );
    if ((iVar3 == 0) AND (iVar4 == 0))
    {
        GET_KEYBOARD_MOVE_INPUT( ref iVar3, ref iVar4 );
    }
    switch (uParam0)
    {
        case 8:
        if (iVar4 < 65472)
        {
            return 1;
        }
        break;
        case 9:
        if (iVar4 > 64)
        {
            return 1;
        }
        break;
        case 10:
        if (iVar3 < 65472)
        {
            return 1;
        }
        break;
        case 11:
        if (iVar3 > 64)
        {
            return 1;
        }
        break;
        default: SCRIPT_ASSERT( "ambWardrobe.MOVE_CAM_WITH_LEFT_STICK(only dpad up, down, left & right should be used" );
    }
    return 0;
}

int sub_16933(unknown uParam0, unknown uParam1)
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
        sub_3167( ref uVar4 );
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
        sub_4297( ref uVar5 );
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

string sub_17981(unknown uParam0)
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

void sub_18557(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    boolean bVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    boolean bVar14;
    int iVar15;

    GET_GAME_TIMER( ref l_U189 );
    if (NOT (sub_164( sub_122(), 80 )))
    {
        CLEAR_CHAR_TASKS( sub_122() );
    }
    switch (uParam0)
    {
        case 2:
        sub_3167( ref iVar5 );
        iVar4 = iVar5;
        iVar3 = iVar5 - 1;
        bVar6 = false;
        while ((iVar3 >= 0) AND (NOT bVar6))
        {
            iVar5 = iVar3;
            sub_1224( "  A iTorso = " );
            sub_1243( iVar3 );
            sub_1284();
            if ((sub_18744( iVar5 )) AND (NOT (sub_11552( iVar5 ))))
            {
                sub_14069( iVar5 );
                bVar6 = true;
            }
            iVar3--;
        }
        iVar3 = 20 - 1;
        sub_18811( ref iVar7 );
        while ((NOT bVar6) AND (iVar3 >= 0))
        {
            iVar7 = iVar3;
            if (sub_18954( iVar7 ))
            {
                sub_19061( uParam0, 5 );
                l_U131 = 0;
                while (NOT (sub_19306( 5 )))
                {
                    WAIT( 0 );
                }
                sub_14035( iVar7 );
                bVar6 = true;
                l_U196 = l_U82;
                l_U82 = 5;
            }
            iVar3--;
        }
        sub_3167( ref iVar5 );
        iVar3 = 45 - 1;
        while ((iVar3 >= iVar4) AND (NOT bVar6))
        {
            iVar5 = iVar3;
            sub_1224( "  C iTorso = " );
            sub_1243( iVar3 );
            sub_1284();
            if ((sub_18744( iVar5 )) AND (NOT (sub_11552( iVar5 ))))
            {
                sub_14069( iVar5 );
                bVar6 = true;
            }
            iVar3--;
        }
        break;
        case 3:
        sub_4297( ref iVar8 );
        iVar8 = ((iVar8 + 26) - 1) mod 26;
        while (NOT (sub_19774( iVar8 )))
        {
            iVar8 = ((iVar8 + 26) - 1) mod 26;
            WAIT( 0 );
        }
        sub_14173( iVar8 );
        break;
        case 4:
        sub_5024( ref iVar9 );
        iVar9 = ((iVar9 + 20) - 1) mod 20;
        while (NOT (sub_19866( iVar9 )))
        {
            iVar9 = ((iVar9 + 20) - 1) mod 20;
            WAIT( 0 );
        }
        sub_14277( iVar9 );
        break;
        case 0:
        sub_5625( ref iVar10 );
        PRINTSTRING( "  * head: " );
        PRINTSTRING( sub_19966( iVar10 ) );
        if (iVar10 >= 0)
        {
            iVar10--;
        }
        else
        {
            iVar10 = 4 - 1;
        }
        while (NOT (sub_20209( iVar10 )))
        {
            if (iVar10 >= 0)
            {
                iVar10--;
            }
            else
            {
                iVar10 = 4 - 1;
            }
            WAIT( 0 );
        }
        PRINTSTRING( ", prev: " );
        PRINTSTRING( sub_19966( iVar10 ) );
        PRINTNL();
        sub_14381( iVar10 );
        break;
        case 1:
        sub_5922( ref iVar11 );
        if (iVar11 >= 0)
        {
            iVar11--;
        }
        else
        {
            iVar11 = 3 - 1;
        }
        while (NOT (sub_20393( iVar11 )))
        {
            if (iVar11 >= 0)
            {
                iVar11--;
            }
            else
            {
                iVar11 = 3 - 1;
            }
            WAIT( 0 );
        }
        sub_14406( iVar11 );
        break;
        case 5:
        sub_18811( ref iVar12 );
        iVar13 = iVar12 - 1;
        bVar14 = false;
        while ((iVar13 >= 0) AND (NOT bVar14))
        {
            iVar12 = iVar13;
            sub_1224( "  A prev iOutfit = " );
            sub_1243( iVar13 );
            sub_1284();
            if (sub_18954( iVar12 ))
            {
                sub_14035( iVar12 );
                bVar14 = true;
            }
            iVar13--;
        }
        iVar13 = 45 - 1;
        sub_3167( ref iVar15 );
        while ((NOT bVar14) AND (iVar13 >= 0))
        {
            iVar15 = iVar13;
            if ((sub_18744( iVar15 )) AND (NOT (sub_11552( iVar15 ))))
            {
                sub_19061( 5, l_U196 );
                l_U131 = 0;
                while (NOT (sub_19306( l_U196 )))
                {
                    WAIT( 0 );
                }
                sub_14035( 19 );
                sub_14069( iVar15 );
                bVar14 = true;
                l_U82 = l_U196;
                l_U196 = 6;
            }
            iVar13--;
        }
        break;
        default:
          case 6: SCRIPT_ASSERT( "invalid param in prev_player_clothes()" );
    }
    return;
}

void sub_18744(unknown uParam0)
{
    return g_U8229[uParam0];
}

void sub_18811(unknown uParam0)
{
    boolean bVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int I;

    bVar3 = false;
    sub_11600( 0, ref uVar4 );
    for ( I = 0; I < 20; I++ )
    {
        if (((((I != 0) AND (I != 1)) AND (I != 18)) AND (I != 19)) AND ((NOT bVar3) == 1))
        {
            if (sub_13790( I, 0, 0 ))
            {
                (uParam0^) = I;
                bVar3 = true;
            }
        }
    }
    if (NOT bVar3)
    {
        (uParam0^) = 0;
    }
    return;
}

void sub_18954(unknown uParam0)
{
    sub_1224( "  * DOES_PLAYER_OWN_OUTFIT(" );
    sub_1243( uParam0 );
    sub_1224( ") [" );
    sub_1243( g_U8332 );
    sub_1224( "]\n" );
    return g_U8332[uParam0];
}

void sub_19061(unknown uParam0, unknown uParam1)
{
    int I;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (IS_CAM_ACTIVE( l_U145[uParam1] ))
    {
        GET_CHAR_COORDINATES( sub_122(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        uVar5._fU8 += l_U179[uParam1];
        POINT_CAM_AT_COORD( l_U145[uParam1], uVar5._fU0, uVar5._fU4, uVar5._fU8 );
        l_U132._fU0 = uVar5._fU0;
        l_U132._fU4 = uVar5._fU4;
        l_U132._fU8 = uVar5._fU8;
    }
    SET_CAM_INTERP_STYLE_CORE( l_U152, l_U145[uParam0], l_U145[uParam1], 1500, 0 );
    for ( I = 0; I < 6; I++ )
    {
        SET_CAM_PROPAGATE( l_U145[I], 0 );
    }
    SET_CAM_ACTIVE( l_U152, 1 );
    SET_CAM_PROPAGATE( l_U152, 1 );
    return;
}

int sub_19306(unknown uParam0)
{
    int I;
    char[16] cVar4;

    if (IS_SPECIFIC_CAM_INTERPOLATING( l_U152 ))
    {
        for ( I = 0; I < 6; I++ )
        {
            StrCopy( ref cVar4, l_U153[I], 16 );
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar4 ))
            {
                CLEAR_HELP();
            }
            ConcatString(ref cVar4, "N", 16);
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar4 ))
            {
                CLEAR_HELP();
            }
            StrCopy( ref cVar4, l_U153[I], 16 );
            ConcatString(ref cVar4, "_O", 16);
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar4 ))
            {
                CLEAR_HELP();
            }
            StrCopy( ref cVar4, l_U153[I], 16 );
            ConcatString(ref cVar4, "N_O", 16);
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar4 ))
            {
                CLEAR_HELP();
            }
        }
        if (NOT (sub_164( sub_122(), 80 )))
        {
            CLEAR_CHAR_TASKS( sub_122() );
        }
        return 0;
        break;
    }
    SET_CAM_PROPAGATE( l_U152, 0 );
    SET_CAM_PROPAGATE( l_U145[uParam0], 1 );
    GET_GAME_TIMER( ref l_U189 );
    return 1;
}

void sub_19774(unknown uParam0)
{
    return g_U8275[uParam0];
}

void sub_19866(unknown uParam0)
{
    return g_U8302[uParam0];
}

string sub_19966(unknown uParam0)
{
    switch (uParam0)
    {
        case -1:
        return "HEAD_NONE";
        break;
        case 0:
        return "HEAD_0";
        break;
        case 1:
        return "HEAD_1";
        break;
        case 2:
        return "HEAD_2";
        break;
        case 3:
        return "HEAD_3";
        break;
        case 4: return "NUMBER_OF_PLAYER_CLOTHES_HEAD";
    }
    return "null";
}

void sub_20209(int iParam0)
{
    if (iParam0 < 0)
    {
        return 1;
        break;
    }
    return g_U8323[iParam0];
}

void sub_20393(int iParam0)
{
    if (iParam0 < 0)
    {
        return 1;
        break;
    }
    return g_U8328[iParam0];
}

void sub_21026(unknown uParam0)
{
    int iVar3;
    int I;
    boolean bVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int J;
    boolean bVar13;
    int iVar14;

    GET_GAME_TIMER( ref l_U189 );
    if (NOT (sub_164( sub_122(), 80 )))
    {
        CLEAR_CHAR_TASKS( sub_122() );
    }
    switch ((uParam0^))
    {
        case 2:
        sub_3167( ref iVar3 );
        bVar5 = false;
        for ( I = iVar3 + 1; I <= (45 - 2); I++ )
        {
            if (NOT bVar5)
            {
                iVar3 = I;
                sub_1224( "  D iTorso = " );
                sub_1243( I );
                sub_1284();
                if ((sub_18744( iVar3 )) AND (NOT (sub_11552( iVar3 ))))
                {
                    sub_14069( iVar3 );
                    bVar5 = true;
                }
            }
        }
        if (NOT bVar5)
        {
            sub_18811( ref iVar6 );
            for ( I = 0; I <= (20 - 1); I++ )
            {
                if (NOT bVar5)
                {
                    iVar6 = I;
                    sub_1224( "  E iTorso = " );
                    sub_1243( I );
                    sub_1284();
                    if (sub_18954( iVar6 ))
                    {
                        sub_19061( (uParam0^), 5 );
                        l_U131 = 0;
                        while (NOT (sub_19306( 5 )))
                        {
                            WAIT( 0 );
                        }
                        sub_14035( iVar6 );
                        bVar5 = true;
                        l_U196 = l_U82;
                        l_U82 = 5;
                    }
                }
            }
        }
        if (NOT bVar5)
        {
            for ( I = 0; I <= iVar3; I++ )
            {
                if (NOT bVar5)
                {
                    iVar3 = I;
                    sub_1224( "  F iTorso = " );
                    sub_1243( I );
                    sub_1284();
                    if ((sub_18744( iVar3 )) AND (NOT (sub_11552( iVar3 ))))
                    {
                        sub_14069( iVar3 );
                        bVar5 = true;
                    }
                }
            }
        }
        break;
        case 3:
        sub_4297( ref iVar7 );
        iVar7 = (iVar7 + 1) mod 26;
        while (NOT (sub_19774( iVar7 )))
        {
            iVar7 = (iVar7 + 1) mod 26;
            WAIT( 0 );
        }
        sub_14173( iVar7 );
        break;
        case 4:
        sub_5024( ref iVar8 );
        iVar8 = (iVar8 + 1) mod 20;
        while (NOT (sub_19866( iVar8 )))
        {
            iVar8 = (iVar8 + 1) mod 20;
            WAIT( 0 );
        }
        sub_14277( iVar8 );
        break;
        case 0:
        sub_5625( ref iVar9 );
        PRINTSTRING( "  * head: " );
        PRINTSTRING( sub_19966( iVar9 ) );
        iVar9 = ((iVar9 + 2) mod (4 + 1)) - 1;
        while (NOT (sub_20209( iVar9 )))
        {
            iVar9 = ((iVar9 + 2) mod (4 + 1)) - 1;
            WAIT( 0 );
        }
        PRINTSTRING( ", next: " );
        PRINTSTRING( sub_19966( iVar9 ) );
        PRINTNL();
        sub_14381( iVar9 );
        break;
        case 1:
        sub_5922( ref iVar10 );
        iVar10 = ((iVar10 + 2) mod (3 + 1)) - 1;
        while (NOT (sub_20393( iVar10 )))
        {
            iVar10 = ((iVar10 + 2) mod (3 + 1)) - 1;
            WAIT( 0 );
        }
        sub_14406( iVar10 );
        break;
        case 5:
        sub_18811( ref iVar11 );
        bVar13 = false;
        for ( J = iVar11 + 1; J <= (20 - 2); J++ )
        {
            if (NOT bVar13)
            {
                iVar11 = J;
                sub_1224( "  A next iOutfit = " );
                sub_1243( J );
                sub_1284();
                if (sub_18954( iVar11 ))
                {
                    sub_14035( iVar11 );
                    bVar13 = true;
                }
            }
        }
        if (NOT bVar13)
        {
            sub_3167( ref iVar14 );
            for ( J = 0; J <= 20; J++ )
            {
                if (NOT bVar13)
                {
                    iVar14 = J;
                    if ((sub_18744( iVar14 )) AND (NOT (sub_11552( iVar14 ))))
                    {
                        sub_19061( 5, l_U196 );
                        l_U131 = 0;
                        while (NOT (sub_19306( l_U196 )))
                        {
                            WAIT( 0 );
                        }
                        sub_14035( 19 );
                        sub_14069( iVar14 );
                        bVar13 = true;
                        l_U82 = l_U196;
                        l_U196 = 6;
                    }
                }
            }
        }
        break;
        default:
          case 6: SCRIPT_ASSERT( "invalid param in next_player_clothes()" );
    }
    return;
}

void sub_22371()
{
    l_U82 = ((l_U82 + 6) - 1) mod 6;
    return l_U82;
}

void sub_22739()
{
    l_U82 = (l_U82 + 1) mod 6;
    return l_U82;
}
