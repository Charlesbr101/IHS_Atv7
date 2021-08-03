#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("Dual BSD/GPL");

int a;
module_param(a, int, 0);

static int oi(void){
    printk("Modulo inicializado com sucesso!\n");

    return 0;
}

static void tchau(void){
    printk("Modulo removido com sucesso: %d\n", a);
}

module_init(oi);
module_exit(tchau);