void main()
{
    WAIT( 1000 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        TERMINATE_THIS_SCRIPT();
    }
    WAIT( 0 );
    return;
}
