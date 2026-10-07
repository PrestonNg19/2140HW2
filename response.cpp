int main() {

Mode mode = Mode::Heat;
int power = 0;
switch (mode)
{
case Mode::Idle:
power = 0;
break;
case Mode::Heat:
power = 1500;
break;
case Mode::Cool:
power = 900;
break;
default:
power = -1;
break;
}
cout << power << endl;

}