// blade:__DIR__"obj/blade.c" ��һ��

#include <weapon.h>

inherit BLADE;

void create()
{
    set_name("����",({"blade"}));
	set_weight(5500);
	if( clonep() )
		set_default_object(__FILE__);
	else{
		set("unit", "��");
		set("long", "����һ����ͨ�ľ�����������ûʲô���ء�\n");
		set("value", 450);
		set("material", "iron");
                set("wield_msg", "$N���һ�����λε�$n�������С�\n");
                set("unwield_msg", "$N�����е�$n��������ĵ��ʡ�\n");
        }
	init_blade(14);
	setup();
}
