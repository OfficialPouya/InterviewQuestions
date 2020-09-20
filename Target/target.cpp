/*
Write a shopping cart class that has the following functions
1. adding and removing item 
2. finding total cost 
3. change quantity
*/

class shopping_cart{
    public:
        shopping_cart();
        void add_new_item(items *t_item);
        double total_cost();
        void remove_item(items *t_item);
        void change_quant(items *t_item, int item_quant);
        void apply_cupons(string cupon_code);
    private:
        items *item_list[250];
    
}

class items{
    public:
        items ();
        items (string item_name, double item_price, item_quant)
        //getter and setter
    private:
        string item_name;
        double item_price;
        int item_quant;
}



shopping_cart::shopping_cart(){
    for(int i=0; i<200; i++){
        items[i] = NULL;
    }
}

shopping_cart::add_new_item(items *t_item){
    int i=0;
    while(items[i]!=NULL){
        items[i]=t_item;
        i++
        break;
    }
}

shopping_cart::remove_item(items *t_item){
    int i=0;
    while(items[i]!=t_item){
        i++;
    }
    item[i] = NULL;
}




