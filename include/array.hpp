#ifndef _OSL_ARRAY_HPP
#define _OSL_ARRAY_HPP

# include <int_types.hpp>

OSL_BEGIN_NAMESPACE

template <class _Type, u64 _size>
class array
{
public:

    using type = _Type;

    type operator[](u64 index) const {
        return _storage[index];
    }

    type &operator[](u64 index) {
        return _storage[index];
    }

    _OSL_NODISCARD _OSL_CONSTEXPR u64 size() const {
        return _size;
    }
    
protected:

    type _storage[_size];

};

OSL_END_NAMESPACE

#endif
