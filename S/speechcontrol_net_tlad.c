void main()
{
    sub_9();
    return;
}

void sub_9()
{
    THIS_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
    while (true)
    {
        WAIT( 0 );
        if (ALLOW_ONE_TIME_ONLY_COMMANDS_TO_RUN())
        {
            g_U8944 = 0;
            g_U8945 = 0;
            g_U8946 = 0;
        }
        switch (g_U8946)
        {
            case 1:
            if (NOT (COMPARE_STRING( ref g_U8947._fU0, "" )))
            {
                if (g_U9045._fU0 < 4)
                {
                    if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( ref g_U8947._fU0, 7 )))
                    {
                        if (NOT sub_169())
                        {
                            REQUEST_ADDITIONAL_TEXT( ref g_U8947._fU0, 7 );
                        }
                        break;
                    }
                }
                else if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( ref g_U8947._fU0, 6 )))
                {
                    if (NOT sub_169())
                    {
                        REQUEST_ADDITIONAL_TEXT( ref g_U8947._fU0, 6 );
                    }
                    break;
                }
            }
            NEW_SCRIPTED_CONVERSATION();
            sub_317();
            sub_2458();
            g_U8946 = 2;
            case 2:
            if (IS_MISSION_COMPLETE_PLAYING())
            {
                break;
            }
            switch (g_U9045._fU0)
            {
                case 1:
                case 4:
                START_SCRIPT_CONVERSATION( 0, 0 );
                break;
                default:
                START_SCRIPT_CONVERSATION( 1, g_U8947._fU388 );
                break;
            }
            g_U8946 = 3;
            break;
            case 3:
            if (NOT IS_SCRIPTED_CONVERSATION_ONGOING())
            {
                g_U8946 = 0;
            }
            break;
            case 4:
            if (NOT (COMPARE_STRING( ref g_U94._fU144, "" )))
            {
                if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( ref g_U94._fU144, 6 )))
                {
                    if (NOT sub_169())
                    {
                        REQUEST_ADDITIONAL_TEXT( ref g_U94._fU144, 6 );
                    }
                    break;
                }
            }
            sub_317();
            g_U8946 = 5;
            break;
            default:
            SETTIMERA( 0 );
            break;
        }
    }
    return;
}

int sub_169()
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

void sub_317()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    char[16] cVar11;
    char[64] cVar15;
    int iVar31;
    int iVar32;
    int iVar33;
    int iVar34;
    int iVar35;
    int iVar36;
    boolean bVar37;
    int iVar38;

    iVar31 = 1;
    iVar32 = 0;
    iVar36 = -1;
    bVar37 = false;
    switch (g_U8946)
    {
        case 1:
        iVar36 = g_U9045._fU8;
        bVar37 = g_U9045._fU20;
        NEW_SCRIPTED_CONVERSATION();
        break;
        case 4:
        NEW_MOBILE_PHONE_CALL();
        break;
        default:
        SCRIPT_ASSERT( "speechControl is trying to build a conversation but isn't in the correct state. - Tell Simon." );
        break;
    }
    for ( I = 0; I <= (g_U9051 - 1); I++ )
    {
        if ((NOT (COMPARE_STRING( ref g_U9051[I], "END" ))) AND (NOT (COMPARE_STRING( ref g_U9051[I], "" ))))
        {
            iVar31 = 1;
            cVar11 = {g_U9051[I]};
            ConcatString(ref cVar11, "SL", 16);
            if (NOT (DOES_TEXT_LABEL_EXIST( ref cVar11 )))
            {
                sub_651( "\n ****** " );
                sub_651( ref cVar11 );
                sub_651( " - dosent exist, tell simon, usually means speakers and listeners not added to excel sheet. \n" );
                StrCopy( ref cVar11, "PLACEHOLDERSL", 16 );
            }
            iVar38 = GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( ref cVar11 );
            uVar7 = {g_U9051[I]};
            ConcatString(ref uVar7, "A", 16);
            if (DOES_TEXT_LABEL_EXIST( ref uVar7 ))
            {
                if (iVar32 >= iVar36)
                {
                    iVar33 = GET_NTH_INTEGER_IN_STRING( ref cVar11, 0 );
                    sub_880( ref iVar33, 0, 8 );
                    iVar34 = GET_NTH_INTEGER_IN_STRING( ref cVar11, 1 );
                    iVar35 = GET_NTH_INTEGER_IN_STRING( ref cVar11, 2 );
                    sub_880( ref iVar35, 0, 6 );
                    StrCopy( ref cVar15, GET_STRING_FROM_TEXT_FILE( ref uVar7 ), 64 );
                    sub_1047( iVar33, iVar34, iVar35, ref cVar15, ref g_U9051[I] );
                    if (bVar37)
                    {
                        return;
                    }
                }
                iVar32++;
            }
            else
            {
                sub_1330( ref uVar3, ref g_U9051[I], iVar31, -1, -1 );
                sub_1430( ref uVar7, ref uVar3, "A", -1, -1 );
                while (DOES_TEXT_LABEL_EXIST( ref uVar7 ))
                {
                    if (iVar32 >= iVar36)
                    {
                        if (((iVar31 * 3) - 3) < iVar38)
                        {
                            iVar33 = GET_NTH_INTEGER_IN_STRING( ref cVar11, (iVar31 * 3) - 3 );
                            sub_880( ref iVar33, 0, 8 );
                        }
                        else
                        {
                            sub_651( "\n *****************************************************" );
                            sub_651( "\n **********" );
                            sub_651( ref cVar11 );
                            sub_651( " IS NOT LONG ENOUGH" );
                            sub_651( "\n *****************************************************" );
                            iVar33 = 0;
                        }
                        if (((iVar31 * 3) - 2) < iVar38)
                        {
                            iVar34 = GET_NTH_INTEGER_IN_STRING( ref cVar11, (iVar31 * 3) - 2 );
                        }
                        else
                        {
                            sub_651( "\n *****************************************************" );
                            sub_651( "\n **********" );
                            sub_651( ref cVar11 );
                            sub_651( " IS NOT LONG ENOUGH" );
                            sub_651( "\n *****************************************************" );
                            iVar34 = 9;
                        }
                        if (((iVar31 * 3) - 1) < iVar38)
                        {
                            iVar35 = GET_NTH_INTEGER_IN_STRING( ref cVar11, (iVar31 * 3) - 1 );
                            sub_880( ref iVar35, 0, 6 );
                        }
                        else
                        {
                            sub_651( "\n *****************************************************" );
                            sub_651( "\n **********" );
                            sub_651( ref cVar11 );
                            sub_651( " IS NOT LONG ENOUGH" );
                            sub_651( "\n *****************************************************" );
                            iVar35 = 0;
                        }
                        StrCopy( ref cVar15, GET_STRING_FROM_TEXT_FILE( ref uVar7 ), 64 );
                        sub_1047( iVar33, iVar34, iVar35, ref cVar15, ref uVar3 );
                        if (bVar37)
                        {
                            return;
                        }
                    }
                    iVar32++;
                    iVar31++;
                    sub_1330( ref uVar3, ref g_U9051[I], iVar31, -1, -1 );
                    sub_1430( ref uVar7, ref uVar3, "A", -1, -1 );
                }
                sub_2410( "\n Building conversation following labels don't exist ", ref uVar7 );
            }
        }
        else
        {
            I = g_U9051;
        }
    }
    return;
}

void sub_651(unknown uParam0)
{
    return;
}

int sub_880(unknown uParam0, int iParam1, int iParam2)
{
    if (iParam2 < iParam1)
    {
        (uParam0^) = iParam1;
        return 1;
    }
    else if ((uParam0^) < iParam1)
    {
        (uParam0^) = iParam1;
        return 1;
    }
    else if ((uParam0^) > iParam2)
    {
        (uParam0^) = iParam2;
        return 1;
    };;;
    return 0;
}

void sub_1047(int iParam0, int iParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    switch (g_U8946)
    {
        case 1:
        if (iParam0 < 9)
        {
            g_U8947._fU344[iParam0] = 1;
        }
        if (iParam1 < 9)
        {
            g_U8947._fU344[iParam1] = 1;
        }
        ADD_LINE_TO_CONVERSATION( iParam0, uParam3, uParam4, iParam1, uParam2 );
        break;
        case 4:
        ADD_LINE_TO_MOBILE_PHONE_CALL( iParam0, uParam3, uParam4 );
        break;
        default:
        SCRIPT_ASSERT( "speechControl is trying to build a conversation but isn't in the correct state. - Tell Simon." );
        break;
    }
    return;
}

void sub_1330(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
{
    StrCopy( (uParam0^), uParam1, 16 );
    if (iParam2 != -1)
    {
        ConcatString((uParam0^), "_", 16);
        ConcatString((uParam0^), iParam2, 16);
        if (iParam3 != -1)
        {
            ConcatString((uParam0^), "_", 16);
            ConcatString((uParam0^), iParam3, 16);
            if (iParam4 != -1)
            {
                ConcatString((uParam0^), "_", 16);
                ConcatString((uParam0^), iParam4, 16);
            }
        }
    }
    return;
}

void sub_1430(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4)
{
    StrCopy( (uParam0^), uParam1, 16 );
    ConcatString((uParam0^), uParam2, 16);
    if (iParam3 != -1)
    {
        ConcatString((uParam0^), "_", 16);
        ConcatString((uParam0^), iParam3, 16);
        if (iParam4 != -1)
        {
            ConcatString((uParam0^), "_", 16);
            ConcatString((uParam0^), iParam4, 16);
        }
    }
    return;
}

void sub_2410(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_2458()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        if (g_U8947._fU344[I])
        {
            ADD_NEW_CONVERSATION_SPEAKER( I, g_U8947._fU16[I]._fU0, ref g_U8947._fU16[I]._fU4 );
        }
    }
    return;
}
