main()
{
    float square(float);
    float a, b;

    printf("Enter any number: ");
    scanf("%f", &a);

    b = square(a);
    printf("Square of %f is %f", a, b);
}

float square(float x) {
    float y;
    y = x * x;
    return y;
}