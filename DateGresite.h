
#include <exception>

class DateGresite : public std::exception {
public:
  DateGresite () noexcept {}
  DateGresite (const DateGresite&) noexcept = default;
  DateGresite& operator= (const DateGresite&) noexcept = default;
  virtual ~DateGresite() noexcept = default;
  virtual const char* what() const noexcept {
    return "Datele nu se potrivesc.(Masa nu e ocupata, dar are clienti!?)";
  }
};
