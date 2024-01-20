#pragma once

#include "vehicle.hpp"

struct section {
  section(int, double, double);

  const int index;
  const double length;
  const double position;
};

class roundabout {
public:
  roundabout();
  roundabout(const std::vector<double>&);
  roundabout(std::vector<double>&&);

  int section_count() const;
  double total_length() const;
  double length_of(int) const;
  double position_of(int) const;
  section& section_at(int);

private:
  int _section_count;
  double _total_length;
  std::vector<section> _sections;
};