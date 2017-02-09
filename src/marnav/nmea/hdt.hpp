#ifndef MARNAV__NMEA__HDT__HPP
#define MARNAV__NMEA__HDT__HPP

#include <marnav/nmea/sentence.hpp>
#include <marnav/utils/optional.hpp>

namespace marnav
{
namespace nmea
{
MARNAV_NMEA_DECLARE_SENTENCE_PARSE_FUNC(hdt)

/// @brief HDM - Heading - True
///
/// Actual vessel heading in degrees true produced by any device or system producing true
/// heading.
///
/// @code
///        1   2
///        |   |
/// $--HDT,x.x,T*hh<CR><LF>
/// @endcode
///
/// Field Number:
/// 1. Heading Degrees true
/// 2. Heading Degrees true reference
///    - T = true
///
class hdt : public sentence
{
	MARNAV_NMEA_SENTENCE_FRIENDS(hdt)

public:
	constexpr static const sentence_id ID = sentence_id::HDT;
	constexpr static const char * TAG = "HDT";

	hdt();
	hdt(const hdt &) = default;
	hdt & operator=(const hdt &) = default;
	hdt(hdt &&) = default;
	hdt & operator=(hdt &&) = default;

protected:
	hdt(talker talk, fields::const_iterator first, fields::const_iterator last);
	virtual std::vector<std::string> get_data() const override;

private:
	utils::optional<double> heading;
	utils::optional<reference> heading_true;

public:
	decltype(heading) get_heading() const { return heading; }
	decltype(heading_true) get_heading_true() const { return heading_true; }

	void set_heading(double t) noexcept;
};
}
}

#endif
