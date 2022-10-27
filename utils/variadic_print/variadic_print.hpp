#ifndef VARIADIC_PRINTER_HPP
#define VARIADIC_PRINTER_HPP


#include <ostream>


/*
    TODO: 
         * проверка наличия перегрузки оператора << для класса,
           оборачиваемого в "add_symbol". Иначе static_assert.
         * сделать класс "add_symbol" невидимым в глобальной области.
*/


template <class C>
class __add_symbol final
{

    private:

        const C & _c_ref;
        char _symbol;
    
    public:
        
        __add_symbol() = delete;
        __add_symbol(char symbol, const C & c_ref) : _c_ref(c_ref), _symbol(symbol) { }
        __add_symbol(const __add_symbol & origin) : _c_ref(origin._c_ref), _symbol(origin._symbol) { }

        ~__add_symbol() noexcept { }

        friend std::ostream & operator<<(std::ostream & os, const __add_symbol<C> & obj)
        { return os << obj._c_ref << obj._symbol; }

};


template<typename ... Args>
void variadic_print(char separate_symb, Args ... args)
{ (std::cout << ... << __add_symbol<Args>(separate_symb, args)) << '\n'; }


#endif /* VARIADIC_PRINTER_HPP */
