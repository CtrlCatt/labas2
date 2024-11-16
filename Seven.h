class Seven
{
public:
    Seven(size_t size = 0, int value = 0) {
    while (size > 0) {
        data.push_back(value % 10); // Добавляем младшую цифру
        value /= 10;               // Убираем младшую цифру
        size--;
    }
}

    Seven(const Seven& other) 
    {
        data = other.data;
    };
    Seven(Seven&& other) // перемещение
    {
        data = std::move(other.data);
        other.data.clear();
    };
    ~Seven() 
    {
    
    };


    Seven operator+(Seven& other) const {
        Seven result(data.size());
        if (data.size() != other.data.size())
            throw std::runtime_error("Vectors have different sizes");
        
    
        for (size_t i = 0; i < data.size(); ++i) {
            if ((data[i] + other.data[i]) > 6) 
                throw std::runtime_error("data loss!!");
            result.data[i] = data[i] + other.data[i];
        
        }

        return result;
    }
    
    Seven operator-(Seven& other) const {
        Seven result(data.size());
        if (data.size() != other.data.size())
            throw std::runtime_error("Vectors have different sizes");
        
    
        for (size_t i = 0; i < data.size(); ++i) {
            if (data[i] < other.data[i])
                throw std::runtime_error("data loss!!");
            result.data[i] = data[i] - other.data[i];
        }

        return result;

    }

    bool operator>(Seven& other) const 
    {
    
        if (data.size() != other.data.size())
            throw std::runtime_error("Vectors have different sizes");
        for (size_t i = 0; i < data.size(); ++i)
        {
            if (data[i] > other.data[i])
                continue;
            else
                return 0;
        }
        return 1;

    }

    bool operator<(Seven& other) const 
    {
    
        if (data.size() != other.data.size())
            throw std::runtime_error("Vectors have different sizes");
        for (size_t i = 0; i < data.size(); ++i) {
        if (data[i] < other.data[i]) {
            return true;
        } else if (data[i] > other.data[i]) {
            return false;
        }
    }

    
    return false;

    }


    bool operator==(Seven& other) const {
        if (data.size() != other.data.size())
            throw std::runtime_error("Vectors have different sizes");
        
        
        for (size_t i = 0; i < data.size(); ++i) {
            if (data[i] != other.data[i])
                return false;
        }
        return true;

    }
    void print() const {
        for (auto val : data) {
            std::cout << static_cast<int>(val) << " ";
        }
        std::cout << std::endl;
    }
private:
    std::vector<unsigned char> data;
};
