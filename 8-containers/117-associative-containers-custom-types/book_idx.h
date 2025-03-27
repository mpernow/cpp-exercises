#ifndef BOOK_IDX_H
#define BOOK_IDX_H

#include <iostream>
#include <string>

class book_idx
{
    std::string author;
    std::string title;

  public:
    book_idx(const std::string &author, const std::string &title)
        : author(author), title(title)
    {
    }
    bool operator<(const book_idx &other) const
    {
        // If author is the same, order by title
        if (author == other.author)
            return title < other.title;

        return author < other.author;
    }
    friend std::ostream &operator<<(std::ostream &os, const book_idx &bkx)
    {
        os << bkx.author << ", " << bkx.title;
        return os;
    }
};

#endif  // BOOK_IDX_H
