/* C++ code produced by gperf version 3.0.4 */
/* Command-line: /usr/bin/gperf --compare-strncmp -C -m 20 ../../src/lib/tokens.gperf  */
/* Computed positions: -k'1,3-5,14,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 5 "../../src/lib/tokens.gperf"
struct xmltoken
{
  const char *name;
  int tokenId;
};

#define TOTAL_KEYWORDS 236
#define MIN_WORD_LENGTH 1
#define MAX_WORD_LENGTH 31
#define MIN_HASH_VALUE 24
#define MAX_HASH_VALUE 472
/* maximum key range = 449, duplicates = 0 */

class Perfect_Hash
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static const struct xmltoken *in_word_set (const char *str, unsigned int len);
};

inline unsigned int
Perfect_Hash::hash (register const char *str, register unsigned int len)
{
  static const unsigned short asso_values[] =
    {
      473, 473, 473, 473, 473, 473, 473, 473, 473, 473,
      473, 473, 473, 473, 473, 473, 473, 473, 473, 473,
      473, 473, 473, 473, 473, 473, 473, 473, 473, 473,
      473, 473, 473, 473, 473, 473, 473, 473, 473, 473,
      473, 473, 473, 473, 473, 473, 473, 473, 473, 152,
      131,  59,  47,  35,   5,  14, 473, 473,   8, 473,
      473, 473, 473, 473, 473, 140,  80, 104,  29,  14,
       65,  98, 113, 110, 473, 473, 104, 152, 149, 125,
       56,  38, 104,  74, 119,  14,  20,  44,  68,  74,
      473, 473, 473, 473, 473, 473, 473,   5,  26,   5,
       44,   5,   5,  65, 128,   5,  56,  17,  11,  77,
        8,  23, 125, 473,  20,  20,  14, 131,   5,  29,
        5, 188, 146, 473, 473, 473, 473, 473, 473, 473,
      473, 473, 473, 473, 473, 473, 473, 473, 473, 473,
      473, 473, 473, 473, 473, 473, 473, 473, 473, 473,
      473, 473, 473, 473, 473, 473, 473, 473, 473, 473,
      473, 473, 473, 473, 473, 473, 473, 473, 473, 473,
      473, 473, 473, 473, 473, 473, 473, 473, 473, 473,
      473, 473, 473, 473, 473, 473, 473, 473, 473, 473,
      473, 473, 473, 473, 473, 473, 473, 473, 473, 473,
      473, 473, 473, 473, 473, 473, 473, 473, 473, 473,
      473, 473, 473, 473, 473, 473, 473, 473, 473, 473,
      473, 473, 473, 473, 473, 473, 473, 473, 473, 473,
      473, 473, 473, 473, 473, 473, 473, 473, 473, 473,
      473, 473, 473, 473, 473, 473, 473, 473, 473, 473,
      473, 473, 473, 473, 473, 473
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[13]];
      /*FALLTHROUGH*/
      case 13:
      case 12:
      case 11:
      case 10:
      case 9:
      case 8:
      case 7:
      case 6:
      case 5:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static const struct xmltoken wordlist[] =
  {
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
#line 169 "../../src/lib/tokens.gperf"
    {"a:ea",XML_A_EA},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
#line 32 "../../src/lib/tokens.gperf"
    {"E",XML_E},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
#line 162 "../../src/lib/tokens.gperf"
    {"a:accent6",XML_A_ACCENT6},
    {(char*)0, 0},
#line 187 "../../src/lib/tokens.gperf"
    {"a:ln",XML_A_LN},
    {(char*)0, 0},
#line 171 "../../src/lib/tokens.gperf"
    {"a:effectStyle",XML_A_EFFECTSTYLE},
#line 242 "../../src/lib/tokens.gperf"
    {"vt:varStyle",XML_VT_VARSTYLE},
#line 240 "../../src/lib/tokens.gperf"
    {"vt:varColor6",XML_VT_VARCOLOR6},
    {(char*)0, 0},
#line 186 "../../src/lib/tokens.gperf"
    {"a:lin",XML_A_LIN},
#line 230 "../../src/lib/tokens.gperf"
    {"vt:lineEx",XML_VT_LINEEX},
    {(char*)0, 0},
#line 170 "../../src/lib/tokens.gperf"
    {"a:effectLst",XML_A_EFFECTLST},
#line 231 "../../src/lib/tokens.gperf"
    {"vt:lineStyle",XML_VT_LINESTYLE},
    {(char*)0, 0},
#line 173 "../../src/lib/tokens.gperf"
    {"a:ext",XML_A_EXT},
#line 241 "../../src/lib/tokens.gperf"
    {"vt:varColor7",XML_VT_VARCOLOR7},
#line 185 "../../src/lib/tokens.gperf"
    {"a:latin",XML_A_LATIN},
#line 174 "../../src/lib/tokens.gperf"
    {"a:extLst",XML_A_EXTLST},
#line 205 "../../src/lib/tokens.gperf"
    {"a:tint",XML_A_TINT},
    {(char*)0, 0},
#line 166 "../../src/lib/tokens.gperf"
    {"a:cs",XML_A_CS},
#line 220 "../../src/lib/tokens.gperf"
    {"vt:fillProps",XML_VT_FILLPROPS},
#line 221 "../../src/lib/tokens.gperf"
    {"vt:fillStyles",XML_VT_FILLSTYLES},
#line 165 "../../src/lib/tokens.gperf"
    {"a:clrScheme",XML_A_CLRSCHEME},
#line 180 "../../src/lib/tokens.gperf"
    {"a:fontScheme",XML_A_FONTSCHEME},
#line 27 "../../src/lib/tokens.gperf"
    {"D",XML_D},
#line 243 "../../src/lib/tokens.gperf"
    {"vt:variationClrScheme",XML_VT_VARIATIONCLRSCHEME},
#line 179 "../../src/lib/tokens.gperf"
    {"a:font",XML_A_FONT},
#line 232 "../../src/lib/tokens.gperf"
    {"vt:lineStyles",XML_VT_LINESTYLES},
    {(char*)0, 0},
#line 161 "../../src/lib/tokens.gperf"
    {"a:accent5",XML_A_ACCENT5},
#line 245 "../../src/lib/tokens.gperf"
    {"vt:variationStyleScheme",XML_VT_VARIATIONSTYLESCHEME},
#line 208 "../../src/lib/tokens.gperf"
    {"cp:keywords",XML_CP_KEYWORDS},
#line 175 "../../src/lib/tokens.gperf"
    {"a:extraClrSchemeLst",XML_A_EXTRACLRSCHEMELST},
#line 176 "../../src/lib/tokens.gperf"
    {"a:fillStyleLst",XML_A_FILLSTYLELST},
#line 218 "../../src/lib/tokens.gperf"
    {"vt:color",XML_VT_COLOR},
#line 239 "../../src/lib/tokens.gperf"
    {"vt:varColor5",XML_VT_VARCOLOR5},
#line 178 "../../src/lib/tokens.gperf"
    {"a:folHlink",XML_A_FOLHLINK},
#line 244 "../../src/lib/tokens.gperf"
    {"vt:variationClrSchemeLst",XML_VT_VARIATIONCLRSCHEMELST},
#line 227 "../../src/lib/tokens.gperf"
    {"vt:fontProps",XML_VT_FONTPROPS},
#line 228 "../../src/lib/tokens.gperf"
    {"vt:fontStyles",XML_VT_FONTSTYLES},
    {(char*)0, 0},
#line 160 "../../src/lib/tokens.gperf"
    {"a:accent4",XML_A_ACCENT4},
#line 246 "../../src/lib/tokens.gperf"
    {"vt:variationStyleSchemeLst",XML_VT_VARIATIONSTYLESCHEMELST},
#line 233 "../../src/lib/tokens.gperf"
    {"vt:schemeID",XML_VT_SCHEMEID},
#line 28 "../../src/lib/tokens.gperf"
    {"DblUnderline",XML_DBLUNDERLINE},
#line 151 "../../src/lib/tokens.gperf"
    {"VerticalAlign",XML_VERTICALALIGN},
#line 200 "../../src/lib/tokens.gperf"
    {"a:solidFill",XML_A_SOLIDFILL},
#line 238 "../../src/lib/tokens.gperf"
    {"vt:varColor4",XML_VT_VARCOLOR4},
    {(char*)0, 0},
#line 213 "../../src/lib/tokens.gperf"
    {"dc:title",XML_DC_TITLE},
#line 31 "../../src/lib/tokens.gperf"
    {"DrawingScale",XML_DRAWINGSCALE},
    {(char*)0, 0}, {(char*)0, 0},
#line 159 "../../src/lib/tokens.gperf"
    {"a:accent3",XML_A_ACCENT3},
#line 105 "../../src/lib/tokens.gperf"
    {"QuickStyleType",XML_QUICKSTYLETYPE},
#line 92 "../../src/lib/tokens.gperf"
    {"Para",XML_PARA},
    {(char*)0, 0},
#line 207 "../../src/lib/tokens.gperf"
    {"cp:coreProperties",XML_CP_COREPROPERTIES},
    {(char*)0, 0},
#line 237 "../../src/lib/tokens.gperf"
    {"vt:varColor3",XML_VT_VARCOLOR3},
#line 103 "../../src/lib/tokens.gperf"
    {"QuickStyleLineMatrix",XML_QUICKSTYLELINEMATRIX},
#line 197 "../../src/lib/tokens.gperf"
    {"a:satMod",XML_A_SATMOD},
#line 106 "../../src/lib/tokens.gperf"
    {"QuickStyleVariation",XML_QUICKSTYLEVARIATION},
#line 98 "../../src/lib/tokens.gperf"
    {"QuickStyleEffectsMatrix",XML_QUICKSTYLEEFFECTSMATRIX},
#line 97 "../../src/lib/tokens.gperf"
    {"Pos",XML_POS},
    {(char*)0, 0},
#line 100 "../../src/lib/tokens.gperf"
    {"QuickStyleFillMatrix",XML_QUICKSTYLEFILLMATRIX},
#line 40 "../../src/lib/tokens.gperf"
    {"Fill",XML_FILL},
    {(char*)0, 0},
#line 101 "../../src/lib/tokens.gperf"
    {"QuickStyleFontMatrix",XML_QUICKSTYLEFONTMATRIX},
#line 49 "../../src/lib/tokens.gperf"
    {"Font",XML_FONT},
#line 219 "../../src/lib/tokens.gperf"
    {"vt:connectorFontStyles",XML_VT_CONNECTORFONTSTYLES},
#line 210 "../../src/lib/tokens.gperf"
    {"dc:creator",XML_DC_CREATOR},
#line 217 "../../src/lib/tokens.gperf"
    {"vt:bkgnd",XML_VT_BKGND},
#line 102 "../../src/lib/tokens.gperf"
    {"QuickStyleLineColor",XML_QUICKSTYLELINECOLOR},
#line 51 "../../src/lib/tokens.gperf"
    {"Foreign",XML_FOREIGN},
#line 52 "../../src/lib/tokens.gperf"
    {"ForeignData",XML_FOREIGNDATA},
    {(char*)0, 0},
#line 116 "../../src/lib/tokens.gperf"
    {"Section",XML_SECTION},
#line 182 "../../src/lib/tokens.gperf"
    {"a:gs",XML_A_GS},
#line 99 "../../src/lib/tokens.gperf"
    {"QuickStyleFillColor",XML_QUICKSTYLEFILLCOLOR},
#line 181 "../../src/lib/tokens.gperf"
    {"a:gradFill",XML_A_GRADFILL},
#line 177 "../../src/lib/tokens.gperf"
    {"a:fmtScheme",XML_A_FMTSCHEME},
    {(char*)0, 0},
#line 225 "../../src/lib/tokens.gperf"
    {"vt:fmtSchemeEx",XML_VT_FMTSCHEMEEX},
#line 193 "../../src/lib/tokens.gperf"
    {"a:minorFont",XML_A_MINORFONT},
    {(char*)0, 0},
#line 131 "../../src/lib/tokens.gperf"
    {"SplineKnot",XML_SPLINEKNOT},
#line 132 "../../src/lib/tokens.gperf"
    {"SplineStart",XML_SPLINESTART},
#line 188 "../../src/lib/tokens.gperf"
    {"a:lnStyleLst",XML_A_LNSTYLELST},
    {(char*)0, 0},
#line 68 "../../src/lib/tokens.gperf"
    {"Line",XML_LINE},
    {(char*)0, 0}, {(char*)0, 0},
#line 107 "../../src/lib/tokens.gperf"
    {"Rel",XML_REL},
    {(char*)0, 0},
#line 211 "../../src/lib/tokens.gperf"
    {"dc:description",XML_DC_DESCRIPTION},
#line 206 "../../src/lib/tokens.gperf"
    {"cp",XML_CP},
    {(char*)0, 0}, {(char*)0, 0},
#line 85 "../../src/lib/tokens.gperf"
    {"Page",XML_PAGE},
    {(char*)0, 0},
#line 153 "../../src/lib/tokens.gperf"
    {"X",XML_X},
#line 20 "../../src/lib/tokens.gperf"
    {"Case",XML_CASE},
#line 201 "../../src/lib/tokens.gperf"
    {"a:srgbClr",XML_A_SRGBCLR},
    {(char*)0, 0},
#line 21 "../../src/lib/tokens.gperf"
    {"Cell",XML_CELL},
#line 226 "../../src/lib/tokens.gperf"
    {"vt:fmtSchemeLineStyles",XML_VT_FMTSCHEMELINESTYLES},
    {(char*)0, 0},
#line 222 "../../src/lib/tokens.gperf"
    {"vt:fmtConnectorScheme",XML_VT_FMTCONNECTORSCHEME},
#line 66 "../../src/lib/tokens.gperf"
    {"InfiniteLine",XML_INFINITELINE},
#line 223 "../../src/lib/tokens.gperf"
    {"vt:fmtConnectorSchemeEx",XML_VT_FMTCONNECTORSCHEMEEX},
#line 214 "../../src/lib/tokens.gperf"
    {"dcterms:created",XML_DCTERMS_CREATED},
#line 215 "../../src/lib/tokens.gperf"
    {"dcterms:modified",XML_DCTERMS_MODIFIED},
#line 156 "../../src/lib/tokens.gperf"
    {"Y",XML_Y},
#line 104 "../../src/lib/tokens.gperf"
    {"QuickStyleShadowColor",XML_QUICKSTYLESHADOWCOLOR},
#line 18 "../../src/lib/tokens.gperf"
    {"BottomMargin",XML_BOTTOMMARGIN},
    {(char*)0, 0},
#line 22 "../../src/lib/tokens.gperf"
    {"Char",XML_CHAR},
#line 172 "../../src/lib/tokens.gperf"
    {"a:effectStyleLst",XML_A_EFFECTSTYLELST},
    {(char*)0, 0},
#line 137 "../../src/lib/tokens.gperf"
    {"Text",XML_TEXT},
#line 194 "../../src/lib/tokens.gperf"
    {"a:objectDefaults",XML_A_OBJECTDEFAULTS},
#line 163 "../../src/lib/tokens.gperf"
    {"a:alpha",XML_A_ALPHA},
    {(char*)0, 0},
#line 158 "../../src/lib/tokens.gperf"
    {"a:accent2",XML_A_ACCENT2},
#line 14 "../../src/lib/tokens.gperf"
    {"B",XML_B},
#line 45 "../../src/lib/tokens.gperf"
    {"FillPattern",XML_FILLPATTERN},
#line 23 "../../src/lib/tokens.gperf"
    {"Character",XML_CHARACTER},
#line 203 "../../src/lib/tokens.gperf"
    {"a:theme",XML_A_THEME},
#line 115 "../../src/lib/tokens.gperf"
    {"Row",XML_ROW},
#line 236 "../../src/lib/tokens.gperf"
    {"vt:varColor2",XML_VT_VARCOLOR2},
#line 33 "../../src/lib/tokens.gperf"
    {"Ellipse",XML_ELLIPSE},
#line 192 "../../src/lib/tokens.gperf"
    {"a:majorFont",XML_A_MAJORFONT},
#line 224 "../../src/lib/tokens.gperf"
    {"vt:fmtConnectorSchemeLineStyles",XML_VT_FMTCONNECTORSCHEMELINESTYLES},
#line 199 "../../src/lib/tokens.gperf"
    {"a:shade",XML_A_SHADE},
#line 91 "../../src/lib/tokens.gperf"
    {"Pages",XML_PAGES},
    {(char*)0, 0},
#line 184 "../../src/lib/tokens.gperf"
    {"a:hlink",XML_A_HLINK},
#line 84 "../../src/lib/tokens.gperf"
    {"Overline",XML_OVERLINE},
#line 50 "../../src/lib/tokens.gperf"
    {"FontScale",XML_FONTSCALE},
    {(char*)0, 0},
#line 129 "../../src/lib/tokens.gperf"
    {"SpBefore",XML_SPBEFORE},
    {(char*)0, 0},
#line 234 "../../src/lib/tokens.gperf"
    {"vt:themeScheme",XML_VT_THEMESCHEME},
#line 46 "../../src/lib/tokens.gperf"
    {"Flags",XML_FLAGS},
#line 157 "../../src/lib/tokens.gperf"
    {"a:accent1",XML_A_ACCENT1},
    {(char*)0, 0},
#line 24 "../../src/lib/tokens.gperf"
    {"Color",XML_COLOR},
#line 26 "../../src/lib/tokens.gperf"
    {"Colors",XML_COLORS},
#line 73 "../../src/lib/tokens.gperf"
    {"LineWeight",XML_LINEWEIGHT},
#line 78 "../../src/lib/tokens.gperf"
    {"Misc",XML_MISC},
#line 235 "../../src/lib/tokens.gperf"
    {"vt:varColor1",XML_VT_VARCOLOR1},
#line 141 "../../src/lib/tokens.gperf"
    {"TextDirection",XML_TEXTDIRECTION},
#line 198 "../../src/lib/tokens.gperf"
    {"a:schemeClr",XML_A_SCHEMECLR},
    {(char*)0, 0}, {(char*)0, 0},
#line 71 "../../src/lib/tokens.gperf"
    {"LinePattern",XML_LINEPATTERN},
#line 44 "../../src/lib/tokens.gperf"
    {"FillForegndTrans",XML_FILLFOREGNDTRANS},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
#line 15 "../../src/lib/tokens.gperf"
    {"BeginArrow",XML_BEGINARROW},
#line 36 "../../src/lib/tokens.gperf"
    {"EndX",XML_ENDX},
    {(char*)0, 0}, {(char*)0, 0},
#line 204 "../../src/lib/tokens.gperf"
    {"a:themeElements",XML_A_THEMEELEMENTS},
#line 130 "../../src/lib/tokens.gperf"
    {"SpLine",XML_SPLINE},
    {(char*)0, 0},
#line 94 "../../src/lib/tokens.gperf"
    {"PinX",XML_PINX},
    {(char*)0, 0}, {(char*)0, 0},
#line 43 "../../src/lib/tokens.gperf"
    {"FillForegnd",XML_FILLFOREGND},
    {(char*)0, 0},
#line 19 "../../src/lib/tokens.gperf"
    {"C",XML_C},
#line 37 "../../src/lib/tokens.gperf"
    {"EndY",XML_ENDY},
#line 87 "../../src/lib/tokens.gperf"
    {"PageProps",XML_PAGEPROPS},
    {(char*)0, 0},
#line 195 "../../src/lib/tokens.gperf"
    {"a:outerShdw",XML_A_OUTERSHDW},
#line 88 "../../src/lib/tokens.gperf"
    {"PageScale",XML_PAGESCALE},
#line 183 "../../src/lib/tokens.gperf"
    {"a:gsLst",XML_A_GSLST},
#line 95 "../../src/lib/tokens.gperf"
    {"PinY",XML_PINY},
#line 76 "../../src/lib/tokens.gperf"
    {"Master",XML_MASTER},
#line 77 "../../src/lib/tokens.gperf"
    {"Masters",XML_MASTERS},
#line 117 "../../src/lib/tokens.gperf"
    {"Shape",XML_SHAPE},
#line 41 "../../src/lib/tokens.gperf"
    {"FillBkgnd",XML_FILLBKGND},
#line 42 "../../src/lib/tokens.gperf"
    {"FillBkgndTrans",XML_FILLBKGNDTRANS},
#line 125 "../../src/lib/tokens.gperf"
    {"ShdwPattern",XML_SHDWPATTERN},
#line 89 "../../src/lib/tokens.gperf"
    {"PageSheet",XML_PAGESHEET},
#line 155 "../../src/lib/tokens.gperf"
    {"XForm1D",XML_XFORM1D},
    {(char*)0, 0}, {(char*)0, 0},
#line 212 "../../src/lib/tokens.gperf"
    {"dc:subject",XML_DC_SUBJECT},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
#line 12 "../../src/lib/tokens.gperf"
    {"Angle",XML_ANGLE},
#line 16 "../../src/lib/tokens.gperf"
    {"BeginX",XML_BEGINX},
    {(char*)0, 0},
#line 126 "../../src/lib/tokens.gperf"
    {"Size",XML_SIZE},
#line 120 "../../src/lib/tokens.gperf"
    {"Shapes",XML_SHAPES},
    {(char*)0, 0},
#line 38 "../../src/lib/tokens.gperf"
    {"FaceName",XML_FACENAME},
#line 17 "../../src/lib/tokens.gperf"
    {"BeginY",XML_BEGINY},
#line 209 "../../src/lib/tokens.gperf"
    {"cp:lastModifiedBy",XML_CP_LASTMODIFIEDBY},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
#line 140 "../../src/lib/tokens.gperf"
    {"TextBlock",XML_TEXTBLOCK},
#line 74 "../../src/lib/tokens.gperf"
    {"LocPinX",XML_LOCPINX},
#line 63 "../../src/lib/tokens.gperf"
    {"IndFirst",XML_INDFIRST},
#line 81 "../../src/lib/tokens.gperf"
    {"NoFill",XML_NOFILL},
    {(char*)0, 0}, {(char*)0, 0},
#line 70 "../../src/lib/tokens.gperf"
    {"LineColor",XML_LINECOLOR},
#line 75 "../../src/lib/tokens.gperf"
    {"LocPinY",XML_LOCPINY},
#line 216 "../../src/lib/tokens.gperf"
    {"pp",XML_PP},
#line 39 "../../src/lib/tokens.gperf"
    {"FaceNames",XML_FACENAMES},
    {(char*)0, 0},
#line 35 "../../src/lib/tokens.gperf"
    {"EndArrow",XML_ENDARROW},
#line 110 "../../src/lib/tokens.gperf"
    {"RelLineTo",XML_RELLINETO},
#line 133 "../../src/lib/tokens.gperf"
    {"Strikethru",XML_STRIKETHRU},
    {(char*)0, 0}, {(char*)0, 0},
#line 128 "../../src/lib/tokens.gperf"
    {"SpAfter",XML_SPAFTER},
#line 202 "../../src/lib/tokens.gperf"
    {"a:sysClr",XML_A_SYSCLR},
    {(char*)0, 0},
#line 86 "../../src/lib/tokens.gperf"
    {"PageHeight",XML_PAGEHEIGHT},
    {(char*)0, 0},
#line 72 "../../src/lib/tokens.gperf"
    {"LineTo",XML_LINETO},
    {(char*)0, 0},
#line 122 "../../src/lib/tokens.gperf"
    {"ShdwForegnd",XML_SHDWFOREGND},
    {(char*)0, 0},
#line 148 "../../src/lib/tokens.gperf"
    {"TxtPinX",XML_TXTPINX},
#line 154 "../../src/lib/tokens.gperf"
    {"XForm",XML_XFORM},
#line 138 "../../src/lib/tokens.gperf"
    {"TextBkgnd",XML_TEXTBKGND},
#line 139 "../../src/lib/tokens.gperf"
    {"TextBkgndTrans",XML_TEXTBKGNDTRANS},
    {(char*)0, 0},
#line 145 "../../src/lib/tokens.gperf"
    {"TxtHeight",XML_TXTHEIGHT},
#line 149 "../../src/lib/tokens.gperf"
    {"TxtPinY",XML_TXTPINY},
#line 191 "../../src/lib/tokens.gperf"
    {"a:lumMod",XML_A_LUMMOD},
#line 82 "../../src/lib/tokens.gperf"
    {"NoLine",XML_NOLINE},
    {(char*)0, 0},
#line 53 "../../src/lib/tokens.gperf"
    {"Geom",XML_GEOM},
#line 121 "../../src/lib/tokens.gperf"
    {"ShdwBkgnd",XML_SHDWBKGND},
#line 11 "../../src/lib/tokens.gperf"
    {"A",XML_A},
#line 229 "../../src/lib/tokens.gperf"
    {"vt:fontStylesGroup",XML_VT_FONTSTYLESGROUP},
#line 93 "../../src/lib/tokens.gperf"
    {"Paragraph",XML_PARAGRAPH},
#line 64 "../../src/lib/tokens.gperf"
    {"IndLeft",XML_INDLEFT},
#line 65 "../../src/lib/tokens.gperf"
    {"IndRight",XML_INDRIGHT},
    {(char*)0, 0}, {(char*)0, 0},
#line 134 "../../src/lib/tokens.gperf"
    {"Style",XML_STYLE},
    {(char*)0, 0},
#line 113 "../../src/lib/tokens.gperf"
    {"ResizeMode",XML_RESIZEMODE},
    {(char*)0, 0},
#line 142 "../../src/lib/tokens.gperf"
    {"TextXForm",XML_TEXTXFORM},
#line 67 "../../src/lib/tokens.gperf"
    {"LeftMargin",XML_LEFTMARGIN},
#line 144 "../../src/lib/tokens.gperf"
    {"TxtAngle",XML_TXTANGLE},
#line 164 "../../src/lib/tokens.gperf"
    {"a:bgFillStyleLst",XML_A_BGFILLSTYLELST},
    {(char*)0, 0},
#line 190 "../../src/lib/tokens.gperf"
    {"a:lt2",XML_A_LT2},
#line 118 "../../src/lib/tokens.gperf"
    {"ShapeShdwOffsetX",XML_SHAPESHDWOFFSETX},
#line 96 "../../src/lib/tokens.gperf"
    {"PolylineTo",XML_POLYLINETO},
    {(char*)0, 0}, {(char*)0, 0},
#line 135 "../../src/lib/tokens.gperf"
    {"StyleSheet",XML_STYLESHEET},
#line 56 "../../src/lib/tokens.gperf"
    {"HideText",XML_HIDETEXT},
#line 119 "../../src/lib/tokens.gperf"
    {"ShapeShdwOffsetY",XML_SHAPESHDWOFFSETY},
    {(char*)0, 0}, {(char*)0, 0},
#line 90 "../../src/lib/tokens.gperf"
    {"PageWidth",XML_PAGEWIDTH},
#line 196 "../../src/lib/tokens.gperf"
    {"a:prstDash",XML_A_PRSTDASH},
#line 136 "../../src/lib/tokens.gperf"
    {"StyleSheets",XML_STYLESHEETS},
#line 79 "../../src/lib/tokens.gperf"
    {"MoveTo",XML_MOVETO},
    {(char*)0, 0},
#line 34 "../../src/lib/tokens.gperf"
    {"EllipticalArcTo",XML_ELLIPTICALARCTO},
    {(char*)0, 0}, {(char*)0, 0},
#line 13 "../../src/lib/tokens.gperf"
    {"ArcTo",XML_ARCTO},
#line 59 "../../src/lib/tokens.gperf"
    {"ImgHeight",XML_IMGHEIGHT},
    {(char*)0, 0},
#line 150 "../../src/lib/tokens.gperf"
    {"TxtWidth",XML_TXTWIDTH},
#line 112 "../../src/lib/tokens.gperf"
    {"RelQuadBezTo",XML_RELQUADBEZTO},
    {(char*)0, 0},
#line 109 "../../src/lib/tokens.gperf"
    {"RelEllipticalArcTo",XML_RELELLIPTICALARCTO},
#line 111 "../../src/lib/tokens.gperf"
    {"RelMoveTo",XML_RELMOVETO},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
#line 114 "../../src/lib/tokens.gperf"
    {"RightMargin",XML_RIGHTMARGIN},
#line 55 "../../src/lib/tokens.gperf"
    {"Height",XML_HEIGHT},
    {(char*)0, 0},
#line 168 "../../src/lib/tokens.gperf"
    {"a:dk2",XML_A_DK2},
    {(char*)0, 0}, {(char*)0, 0},
#line 47 "../../src/lib/tokens.gperf"
    {"FlipX",XML_FLIPX},
    {(char*)0, 0},
#line 146 "../../src/lib/tokens.gperf"
    {"TxtLocPinX",XML_TXTLOCPINX},
#line 189 "../../src/lib/tokens.gperf"
    {"a:lt1",XML_A_LT1},
#line 57 "../../src/lib/tokens.gperf"
    {"Highlight",XML_HIGHLIGHT},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
#line 147 "../../src/lib/tokens.gperf"
    {"TxtLocPinY",XML_TXTLOCPINY},
#line 127 "../../src/lib/tokens.gperf"
    {"SolutionXML",XML_SOLUTIONXML},
    {(char*)0, 0}, {(char*)0, 0},
#line 48 "../../src/lib/tokens.gperf"
    {"FlipY",XML_FLIPY},
    {(char*)0, 0}, {(char*)0, 0},
#line 123 "../../src/lib/tokens.gperf"
    {"ShdwOffsetX",XML_SHDWOFFSETX},
    {(char*)0, 0},
#line 69 "../../src/lib/tokens.gperf"
    {"LineCap",XML_LINECAP},
    {(char*)0, 0}, {(char*)0, 0},
#line 25 "../../src/lib/tokens.gperf"
    {"ColorEntry",XML_COLORENTRY},
#line 124 "../../src/lib/tokens.gperf"
    {"ShdwOffsetY",XML_SHDWOFFSETY},
    {(char*)0, 0}, {(char*)0, 0},
#line 62 "../../src/lib/tokens.gperf"
    {"ImgWidth",XML_IMGWIDTH},
    {(char*)0, 0}, {(char*)0, 0},
#line 152 "../../src/lib/tokens.gperf"
    {"Width",XML_WIDTH},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
#line 167 "../../src/lib/tokens.gperf"
    {"a:dk1",XML_A_DK1},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
#line 60 "../../src/lib/tokens.gperf"
    {"ImgOffsetX",XML_IMGOFFSETX},
#line 108 "../../src/lib/tokens.gperf"
    {"RelCubBezTo",XML_RELCUBBEZTO},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
#line 61 "../../src/lib/tokens.gperf"
    {"ImgOffsetY",XML_IMGOFFSETY},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
    {(char*)0, 0},
#line 54 "../../src/lib/tokens.gperf"
    {"Geometry",XML_GEOMETRY},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
    {(char*)0, 0},
#line 83 "../../src/lib/tokens.gperf"
    {"NoShow",XML_NOSHOW},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
#line 143 "../../src/lib/tokens.gperf"
    {"TopMargin",XML_TOPMARGIN},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
#line 29 "../../src/lib/tokens.gperf"
    {"DefaultTabStop",XML_DEFAULTTABSTOP},
    {(char*)0, 0},
#line 58 "../../src/lib/tokens.gperf"
    {"HorzAlign",XML_HORZALIGN},
#line 80 "../../src/lib/tokens.gperf"
    {"NURBSTo",XML_NURBSTO},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
    {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0}, {(char*)0, 0},
    {(char*)0, 0}, {(char*)0, 0},
#line 30 "../../src/lib/tokens.gperf"
    {"DoubleStrikethrough",XML_DOUBLESTRIKETHROUGH}
  };

const struct xmltoken *
Perfect_Hash::in_word_set (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (s && *str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
            return &wordlist[key];
        }
    }
  return 0;
}
#line 247 "../../src/lib/tokens.gperf"

