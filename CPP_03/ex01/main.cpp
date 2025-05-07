#include "ScavTrap.hpp"

int main() {
    // اختبار بناء ScavTrap والدوال الأساسية
    ScavTrap scav("Serena");
    scav.attack("Enemy");
    scav.takeDamage(30);
    scav.beRepaired(20);
    scav.guardGate();

    // اختبار استنفاد الطاقة
    for (int i = 0; i < 50; i++) {
        scav.attack("Enemy");
    }

    // اختبار التدمير
    {
        ScavTrap temp("Temp");
    }

    return 0;
}