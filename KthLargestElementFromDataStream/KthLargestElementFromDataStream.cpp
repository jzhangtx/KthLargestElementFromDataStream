// KthLargestElementFromDataStream.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

class KthLargest {
public:
    /** initialize your data structure here. */
    KthLargest(int k)
        : m_Capacity(static_cast<size_t>(k))
    {
    }

    int add(int num)
    {
        Insert(num);
        if (m_Largest.size() == m_Capacity)
            return m_Largest[0];

        return -1;
    }

private:
    size_t m_Capacity;
    std::vector<int> m_Largest;

    bool Find(const std::vector<int>& v, int num)
    {
        for (auto n : v)
            if (n == num)
                return true;

        return false;
    }

    void Insert(int num)
    {
        if (m_Largest.empty())
        {
            m_Largest.push_back(num);
            return;
        }

        //if (Find(m_Largest, num))
        //    return;

        if (m_Capacity == m_Largest.size())
        {
            if (num <= m_Largest[0])
                return;
            else if (num < m_Largest[1])
            {
                m_Largest[0] = num;
                return;
            }
            else
                m_Largest.erase(m_Largest.begin());
        }

        if (num > m_Largest[m_Largest.size() - 1])
        {
            m_Largest.push_back(num);
            return;
        }

        for (auto i = m_Largest.begin(); i != m_Largest.end(); ++i)
        {
            if (num < *i)
            {
                m_Largest.insert(i, num);
                break;
            }
        }
    }
};

int main()
{
    KthLargest k(3);

    for (int i = 0; i < 7; ++i)
    {
        int n;
        std::cin >> n;
        std::cout << k.add(n) << " ";
    }
    std::cout << std::endl;
}
