void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 0;
    l_U103 = 0;
    l_U104 = 0;
    l_U105 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    while (true)
    {
        WAIT( 1000 );
        sub_74();
    }
    return;
}

void sub_74()
{
    unknown uVar2;
    float fVar3;

    if (sub_83() == 0)
    {
        uVar2 = GET_INT_STAT( 44 );
        fVar3 = TO_FLOAT( uVar2 );
        fVar3 /= 1000;
        fVar3 /= 60;
        fVar3 /= 60;
        g_U9542 = fVar3;
    }
    else
    {
        TERMINATE_THIS_SCRIPT();
    }
    sub_199();
    return;
}

int sub_83()
{
    if (g_U9542 > 31)
    {
        return 1;
        break;
    }
    return 0;
}

void sub_199()
{
    if (sub_208() == 1)
    {
        if (g_U9542 <= 30)
        {
            AWARD_ACHIEVEMENT( 39 );
        }
    }
    return;
}

int sub_208()
{
    if ((g_U9536 == 1) AND (g_U9537 == 1))
    {
        return 1;
    }
    return 0;
}
