#include "name.hpp"

namespace marnav
{
namespace nmea
{
std::string to_name(sentence_id t)
{
	switch (t) {
		case sentence_id::NONE:
			return "<none>";
		case sentence_id::AAM:
			return "Waypoint Arrival Alarm";
		case sentence_id::ALM:
			return "GPS Almanac Data";
		case sentence_id::APB:
			return "Autopilot Sentence 'B'";
		case sentence_id::BOD:
			return "Bearing - Waypoint to Waypoint";
		case sentence_id::BWC:
			return "Bearing & Distance to Waypoint - Geat Circle";
		case sentence_id::BWR:
			return "Bearing and Distance to Waypoint - Rhumb Line";
		case sentence_id::BWW:
			return "Bearing - Waypoint to Waypoint";
		case sentence_id::DBT:
			return "Depth below transducer (II)";
		case sentence_id::DPT:
			return "Depth of Water";
		case sentence_id::DSC:
			return "Digital Selective Calling Information";
		case sentence_id::DSE:
			return "Extended DSC";
		case sentence_id::DSI:
			return "DSC Transponder Initiate";
		case sentence_id::DSR:
			return "DSC Transponder Response";
		case sentence_id::DTM:
			return "Datum Reference";
		case sentence_id::FSI:
			return "Frequency Set Information";
		case sentence_id::GBS:
			return "GPS Satellite Fault Detection";
		case sentence_id::GGA:
			return "Global Positioning System Fix Data";
		case sentence_id::GLC:
			return "Geographic Position, Loran-C";
		case sentence_id::GLL:
			return "Geographic Position - Latitude/Longitude";
		case sentence_id::GNS:
			return "Fix data";
		case sentence_id::GRS:
			return "GPS Range Residuals";
		case sentence_id::GST:
			return "GPS Pseudorange Noise Statistics";
		case sentence_id::GSA:
			return "GPS DOP and active satellites";
		case sentence_id::GSV:
			return "Satellites in view";
		case sentence_id::HDG:
			return "Heading - Deviation & Variation (vendor extension)";
		case sentence_id::HFB:
			return "Trawl Headrope to Footrope and Bottom";
		case sentence_id::HSC:
			return "Heading Steering Command";
		case sentence_id::ITS:
			return "Trawl Door Spread 2 Distance";
		case sentence_id::LCD:
			return "Loran-C Signal Data";
		case sentence_id::MSK:
			return "Control for a Beacon Receiver";
		case sentence_id::MSS:
			return "Beacon Receiver Status";
		case sentence_id::MWD:
			return "Wind Directinon and Speed";
		case sentence_id::MTW:
			return "Mean Temperature of Water (II)";
		case sentence_id::MWV:
			return "Wind Speed and Angle (II)";
		case sentence_id::OSD:
			return "Own Ship Data";
		case sentence_id::RMA:
			return "Recommended Minimum Navigation Information A";
		case sentence_id::RMB:
			return "Recommended Minimum Navigation Information B";
		case sentence_id::RMC:
			return "Recommended Minimum Navigation Information C";
		case sentence_id::ROT:
			return "Rate Of Turn";
		case sentence_id::RPM:
			return "Revolutions";
		case sentence_id::RSA:
			return "Rudder Sensor Angle";
		case sentence_id::RSD:
			return "RADAR System Data";
		case sentence_id::RTE:
			return "Routes";
		case sentence_id::SFI:
			return "Scanning Frequency Information";
		case sentence_id::STN:
			return "Multiple Data ID";
		case sentence_id::TDS:
			return "Trawl Door Spread Distance";
		case sentence_id::TFI:
			return "Trawl Filling Indicator";
		case sentence_id::TPC:
			return "Trawl Position Cartesian Coordinates";
		case sentence_id::TPR:
			return "Trawl Position Relative Vessel";
		case sentence_id::TPT:
			return "Trawl Position True";
		case sentence_id::TRF:
			return "TRANSIT Fix Data";
		case sentence_id::TLL:
			return "Target latitude and longitude";
		case sentence_id::TTM:
			return "Tracked Target Message";
		case sentence_id::VBW:
			return "Dual Ground/Water Speed";
		case sentence_id::VDM:
			return "AIS";
		case sentence_id::VDO:
			return "AIS, own ship data";
		case sentence_id::VDR:
			return "Set and Drift";
		case sentence_id::VHW:
			return "Water speed and heading (II)";
		case sentence_id::VLW:
			return "Distance Traveled through Water (II)";
		case sentence_id::VPW:
			return "Speed - Measured Parallel to Wind";
		case sentence_id::VTG:
			return "Track made good and Ground speed";
		case sentence_id::VWR:
			return "Relative Wind Speed and Angle (II)";
		case sentence_id::WCV:
			return "Waypoint Closure Velocity";
		case sentence_id::WNC:
			return "Distance - Waypoint to Waypoint";
		case sentence_id::WPL:
			return "Waypoint Location";
		case sentence_id::XDR:
			return "Transducer Measurement";
		case sentence_id::XTE:
			return "Cross-Track Error, Measured";
		case sentence_id::XTR:
			return "Cross Track Error - Dead Reckoning";
		case sentence_id::ZDA:
			return "Time & Date - UTC, day, month, year and local time zone";
		case sentence_id::ZDL:
			return "Time and Distance to Variable Point";
		case sentence_id::ZFO:
			return "UTC & Time from origin Waypoint";
		case sentence_id::ZTG:
			return "UTC & Time to Destination Waypoint";
		case sentence_id::APA:
			return "Autopilot Sentence 'A'";
		case sentence_id::BER:
			return "Bearing & Distance to Waypoint, Dead Reckoning, Rhumb Line";
		case sentence_id::BPI:
			return "Bearing & Distance to Point of Interest";
		case sentence_id::DBK:
			return "Depth Below Keel";
		case sentence_id::DBS:
			return "Depth Below Surface";
		case sentence_id::DCN:
			return "Decca Position";
		case sentence_id::DRU:
			return "Dual Doppler Auxiliary Data";
		case sentence_id::GDA:
			return "Dead Reckoning Positions";
		case sentence_id::GLA:
			return "Loran-C Positions";
		case sentence_id::GOA:
			return "OMEGA Positions";
		case sentence_id::GTD:
			return "Geographical Position, Loran-C TDs";
		case sentence_id::GXA:
			return "TRANSIT Position";
		case sentence_id::HCC:
			return "Compass Heading";
		case sentence_id::HCD:
			return "Heading and Deviation";
		case sentence_id::HDM:
			return "Heading, Magnetic";
		case sentence_id::HDT:
			return "Heading, True";
		case sentence_id::HVD:
			return "Magnetic Variation, Automatic";
		case sentence_id::HVM:
			return "Magnetic Variation, Manually Set";
		case sentence_id::IMA:
			return "Vessel Identification";
		case sentence_id::MDA:
			return "Meteorological Composite";
		case sentence_id::MHU:
			return "Humidity";
		case sentence_id::MMB:
			return "Barometer";
		case sentence_id::MTA:
			return "Air Temperature";
		case sentence_id::MWH:
			return "Wave Height";
		case sentence_id::MWS:
			return "Wind & Sea State";
		case sentence_id::OLN:
			return "Omega Lane Numbers";
		case sentence_id::R00:
			return "(Rnn) Waypoints in active route";
		case sentence_id::SBK:
			return "Loran-C Blink Status";
		case sentence_id::SCY:
			return "Loran-C Cycle Lock Status";
		case sentence_id::SCD:
			return "Loran-C ECDs";
		case sentence_id::SDB:
			return "Loran-C Signal Strength";
		case sentence_id::SGD:
			return "Position Accuracy Estimate";
		case sentence_id::SGR:
			return "Loran-C Chain Identifier";
		case sentence_id::SIU:
			return "Loran-C Stations in Use";
		case sentence_id::SLC:
			return "Loran-C Status";
		case sentence_id::SNC:
			return "Navigation Calculation Basis";
		case sentence_id::SNU:
			return "Loran-C SNR Status";
		case sentence_id::SPS:
			return "Loran-C Predicted Signal Strength";
		case sentence_id::SSF:
			return "Position Correction Offset";
		case sentence_id::STC:
			return "Time Constant";
		case sentence_id::STR:
			return "Tracking Reference";
		case sentence_id::SYS:
			return "Hybrid System Configuration";
		case sentence_id::VWT:
			return "True Wind Speed and Angle";
		case sentence_id::PGRME:
			return "Estimated Error Information (Garmin Extension)";
		case sentence_id::PGRMM:
			return "Map Datum (Garmin Extension)";
		case sentence_id::PGRMZ:
			return "Altitude (Garmin Extension)";
		case sentence_id::PMGNST:
			return "Magellan Status";
		case sentence_id::PRWIZCH:
			return "Rockwell Channel Status";
		case sentence_id::PUBX:
			return "u-blox (misc formats, depending on first field)";
		case sentence_id::TMVTD:
			return "Transas VTS / SML tracking system report";
	}
	return "-";
}

std::string to_name(selection_mode t)
{
	switch (t) {
		case selection_mode::manual:
			return "manual";
		case selection_mode::automatic:
			return "automatic";
	}
	return "-";
}

std::string to_name(status t)
{
	switch (t) {
		case status::ok:
			return "OK";
		case status::warning:
			return "Warning";
	}
	return "-";
}

std::string to_name(route t)
{
	switch (t) {
		case route::complete:
			return "complete";
		case route::working:
			return "working";
	}
	return "-";
}

std::string to_name(mode_indicator t)
{
	switch (t) {
		case mode_indicator::invalid:
			return "invalid";
		case mode_indicator::autonomous:
			return "autonomous";
		case mode_indicator::differential:
			return "differential";
		case mode_indicator::estimated:
			return "estimated";
		case mode_indicator::manual_input:
			return "manual input";
		case mode_indicator::simulated:
			return "simulated";
		case mode_indicator::data_not_valid:
			return "not valid";
		case mode_indicator::precise:
			return "precise";
	}
	return "-";
}

std::string to_name(quality t)
{
	switch (t) {
		case quality::invalid:
			return "invaild";
		case quality::gps_fix:
			return "GPS fix";
		case quality::dgps_fix:
			return "DGPS fix";
		case quality::guess:
			return "guess";
		case quality::simulation:
			return "simulation";
	}
	return "-";
}

std::string to_name(reference t)
{
	switch (t) {
		case reference::RELATIVE:
			return "relative";
		case reference::TRUE:
			return "true";
		case reference::MAGNETIC:
			return "magnetic";
	}
	return "-";
}

std::string to_name(side t)
{
	switch (t) {
		case side::left:
			return "Left";
		case side::right:
			return "Rigth";
	}
	return "-";
}

std::string to_name(type_of_point t)
{
	switch (t) {
		case type_of_point::collision:
			return "collision";
		case type_of_point::turning_point:
			return "turning_point";
		case type_of_point::reference:
			return "reference";
		case type_of_point::wheelover:
			return "wheelover";
	}
	return "-";
}

std::string to_name(unit::distance t)
{
	switch (t) {
		case unit::distance::meter:
			return "m";
		case unit::distance::feet:
			return "ft";
		case unit::distance::nm:
			return "NM";
		case unit::distance::km:
			return "km";
		case unit::distance::fathom:
			return "fathom";
	}
	return "-";
}

std::string to_name(unit::temperature t)
{
	switch (t) {
		case unit::temperature::celsius:
			return "\u00b0C";
	}
	return "-";
}

std::string to_name(unit::velocity t)
{
	switch (t) {
		case unit::velocity::knot:
			return "kn";
		case unit::velocity::kmh:
			return "km/h";
		case unit::velocity::mps:
			return "m/s";
	}
	return "-";
}
}
}
