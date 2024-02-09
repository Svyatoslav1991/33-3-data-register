#include <vector>
#include <algorithm>

template <typename KeyType, typename ValueType>
class Registry
{
private:
	std::vector<std::pair<KeyType, ValueType>> m_data;

public:
	void add(KeyType key, ValueType value) noexcept;
	void remove(KeyType key) noexcept;
	void print() const noexcept;
	void find(KeyType key) const noexcept;
};

//-------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------

template<typename KeyType, typename ValueType>
inline void Registry<KeyType, ValueType>::add(KeyType key, ValueType value) noexcept
{
	m_data.emplace_back(key, value);
}

//-------------------------------------------------------------------------------------------

template<typename KeyType, typename ValueType>
inline void Registry<KeyType, ValueType>::remove(KeyType key) noexcept
{
	m_data.erase(std::remove_if(m_data.begin(), m_data.end(), [key](const auto& p) {
		return p.first == key;
	}), m_data.end());
}

//-------------------------------------------------------------------------------------------

template<typename KeyType, typename ValueType>
inline void Registry<KeyType, ValueType>::print() const noexcept
{
	if (m_data.empty())
	{
		std::cout << "Data register is empty\n";
	}
	else
	{
		for (const auto& p : m_data)
		{
			std::cout << p.first << "\t" << p.second << "\n";
		}
	}
}

//-------------------------------------------------------------------------------------------

template<typename KeyType, typename ValueType>
inline void Registry<KeyType, ValueType>::find(KeyType key) const noexcept
{
	auto it = std::find_if(m_data.begin(), m_data.end(), [key](const auto& p) {
		return p.first == key;
	});

	if (it == m_data.end())
	{
		std::cout << "The data registry does not have such a key\n";
	}
	else
	{
		std::cout << "Elements with key " << key << ":\n";
		while (it != m_data.end())
		{
			if (it->first == key)
			{
				std::cout << it->second << "\n";
			}
			++it;
		}
	}
}


