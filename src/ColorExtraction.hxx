/**
 * @file ColorExtraction.hxx
 * @author Thomas Lindemeier
 * @brief
 * @date 2019-04-14
 */
#ifndef PAINT_MIXER_COLOR_EXTRACTION_H
#define PAINT_MIXER_COLOR_EXTRACTION_H

#include <ColorConverter/ColorConverter.hxx>

#include "Types.hxx"

namespace PaintMixer
{

void ExtractColorPaletteAharoni(
  const cv::Mat_<color::ColorConverter<float>::vec3>& sRGB,
  std::vector<color::ColorConverter<float>::vec3>&    linearRGB_colors,
  uint32_t                                            k);
} // namespace PaintMixer
#endif // PAINT_MIXER_COLOR_EXTRACTION_H