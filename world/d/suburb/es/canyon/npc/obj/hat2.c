// hat.c

#include <armor.h>

inherit HEAD;

void create()
{
	set_name("��ͭ����", ({"copper hat", "hat"}) );
	set_weight(1500);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "һ����ͭ����\n");
		set("unit", "��");
		set("value", 500);
		set("material", "copper");
		set("armor_prop/armor", 1);
		set("armor_prop/magic", 1);
	}
	setup();
}