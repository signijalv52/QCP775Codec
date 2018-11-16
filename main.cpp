#include <iostream>
#include <QTextCodec>

class QCP775Codec: public QTextCodec
{
private:
  ushort char_to_unicode(unsigned char code) const
  {
    if (code < 128)
      return (ushort)code;
    switch(code)
    {
      case 128: return 0x0106;
      case 129: return 0x00FC;
      case 130: return 0x00E9;
      case 131: return 0x0101;
      case 132: return 0x00E4;
      case 133: return 0x0123;
      case 134: return 0x00E5;
      case 135: return 0x0107;
      case 136: return 0x0142;
      case 137: return 0x0113;
      case 138: return 0x0156;
      case 139: return 0x0157;
      case 140: return 0x012B;
      case 141: return 0x0179;
      case 142: return 0x00C4;
      case 143: return 0x00C5;
      case 144: return 0x00C9;
      case 145: return 0x00E6;
      case 146: return 0x00C6;
      case 147: return 0x014D;
      case 148: return 0x00F6;
      case 149: return 0x0122;
      case 150: return 0x00A2;
      case 151: return 0x015A;
      case 152: return 0x015B;
      case 153: return 0x00D6;
      case 154: return 0x00DC;
      case 155: return 0x00F8;
      case 156: return 0x00A3;
      case 157: return 0x00D8;
      case 158: return 0x00D7;
      case 159: return 0x00A4;
      case 160: return 0x0100;
      case 161: return 0x012A;
      case 162: return 0x00F3;
      case 163: return 0x017B;
      case 164: return 0x017C;
      case 165: return 0x017A;
      case 166: return 0x201D;
      case 167: return 0x00A6;
      case 168: return 0x00A9;
      case 169: return 0x00AE;
      case 170: return 0x00AC;
      case 171: return 0x00BD;
      case 172: return 0x00BC;
      case 173: return 0x0141;
      case 174: return 0x00AB;
      case 175: return 0x00BB;
      case 176: return 0x2591;
      case 177: return 0x2592;
      case 178: return 0x2593;
      case 179: return 0x2502;
      case 180: return 0x2524;
      case 181: return 0x0104;
      case 182: return 0x010C;
      case 183: return 0x0118;
      case 184: return 0x0116;
      case 185: return 0x2563;
      case 186: return 0x2551;
      case 187: return 0x2557;
      case 188: return 0x255D;
      case 189: return 0x012E;
      case 190: return 0x0160;
      case 191: return 0x2510;
      case 192: return 0x2514;
      case 193: return 0x2534;
      case 194: return 0x252C;
      case 195: return 0x251C;
      case 196: return 0x2500;
      case 197: return 0x253C;
      case 198: return 0x0172;
      case 199: return 0x016A;
      case 200: return 0x255A;
      case 201: return 0x2554;
      case 202: return 0x2569;
      case 203: return 0x2566;
      case 204: return 0x2560;
      case 205: return 0x2550;
      case 206: return 0x256C;
      case 207: return 0x017D;
      case 208: return 0x0105;
      case 209: return 0x010D;
      case 210: return 0x0119;
      case 211: return 0x0117;
      case 212: return 0x012F;
      case 213: return 0x0161;
      case 214: return 0x0173;
      case 215: return 0x016B;
      case 216: return 0x017E;
      case 217: return 0x2518;
      case 218: return 0x250C;
      case 219: return 0x2588;
      case 220: return 0x2584;
      case 221: return 0x258C;
      case 222: return 0x2590;
      case 223: return 0x2580;
      case 224: return 0x00D3;
      case 225: return 0x00DF;
      case 226: return 0x014C;
      case 227: return 0x0143;
      case 228: return 0x00F5;
      case 229: return 0x00D5;
      case 230: return 0x00B5;
      case 231: return 0x0144;
      case 232: return 0x0136;
      case 233: return 0x0137;
      case 234: return 0x013B;
      case 235: return 0x013C;
      case 236: return 0x0146;
      case 237: return 0x0112;
      case 238: return 0x0145;
      case 239: return 0x2019;
      case 240: return 0x00AD;
      case 241: return 0x00B1;
      case 242: return 0x201C;
      case 243: return 0x00BE;
      case 244: return 0x00B6;
      case 245: return 0x00A7;
      case 246: return 0x00F7;
      case 247: return 0x201E;
      case 248: return 0x00B0;
      case 249: return 0x2219;
      case 250: return 0x00B7;
      case 251: return 0x00B9;
      case 252: return 0x00B3;
      case 253: return 0x00B2;
      case 254: return 0x25A0;
      case 255: return 0x00A0;
      default: return (ushort)'?';
    }
  }
  char unicode_to_char(ushort code) const
  {
    if (code < 128)
      return (char)code;
    switch(code)
    {
      case 0x0106: return 128;
      case 0x00FC: return 129;
      case 0x00E9: return 130;
      case 0x0101: return 131;
      case 0x00E4: return 132;
      case 0x0123: return 133;
      case 0x00E5: return 134;
      case 0x0107: return 135;
      case 0x0142: return 136;
      case 0x0113: return 137;
      case 0x0156: return 138;
      case 0x0157: return 139;
      case 0x012B: return 140;
      case 0x0179: return 141;
      case 0x00C4: return 142;
      case 0x00C5: return 143;
      case 0x00C9: return 144;
      case 0x00E6: return 145;
      case 0x00C6: return 146;
      case 0x014D: return 147;
      case 0x00F6: return 148;
      case 0x0122: return 149;
      case 0x00A2: return 150;
      case 0x015A: return 151;
      case 0x015B: return 152;
      case 0x00D6: return 153;
      case 0x00DC: return 154;
      case 0x00F8: return 155;
      case 0x00A3: return 156;
      case 0x00D8: return 157;
      case 0x00D7: return 158;
      case 0x00A4: return 159;
      case 0x0100: return 160;
      case 0x012A: return 161;
      case 0x00F3: return 162;
      case 0x017B: return 163;
      case 0x017C: return 164;
      case 0x017A: return 165;
      case 0x201D: return 166;
      case 0x00A6: return 167;
      case 0x00A9: return 168;
      case 0x00AE: return 169;
      case 0x00AC: return 170;
      case 0x00BD: return 171;
      case 0x00BC: return 172;
      case 0x0141: return 173;
      case 0x00AB: return 174;
      case 0x00BB: return 175;
      case 0x2591: return 176;
      case 0x2592: return 177;
      case 0x2593: return 178;
      case 0x2502: return 179;
      case 0x2524: return 180;
      case 0x0104: return 181;
      case 0x010C: return 182;
      case 0x0118: return 183;
      case 0x0116: return 184;
      case 0x2563: return 185;
      case 0x2551: return 186;
      case 0x2557: return 187;
      case 0x255D: return 188;
      case 0x012E: return 189;
      case 0x0160: return 190;
      case 0x2510: return 191;
      case 0x2514: return 192;
      case 0x2534: return 193;
      case 0x252C: return 194;
      case 0x251C: return 195;
      case 0x2500: return 196;
      case 0x253C: return 197;
      case 0x0172: return 198;
      case 0x016A: return 199;
      case 0x255A: return 200;
      case 0x2554: return 201;
      case 0x2569: return 202;
      case 0x2566: return 203;
      case 0x2560: return 204;
      case 0x2550: return 205;
      case 0x256C: return 206;
      case 0x017D: return 207;
      case 0x0105: return 208;
      case 0x010D: return 209;
      case 0x0119: return 210;
      case 0x0117: return 211;
      case 0x012F: return 212;
      case 0x0161: return 213;
      case 0x0173: return 214;
      case 0x016B: return 215;
      case 0x017E: return 216;
      case 0x2518: return 217;
      case 0x250C: return 218;
      case 0x2588: return 219;
      case 0x2584: return 220;
      case 0x258C: return 221;
      case 0x2590: return 222;
      case 0x2580: return 223;
      case 0x00D3: return 224;
      case 0x00DF: return 225;
      case 0x014C: return 226;
      case 0x0143: return 227;
      case 0x00F5: return 228;
      case 0x00D5: return 229;
      case 0x00B5: return 230;
      case 0x0144: return 231;
      case 0x0136: return 232;
      case 0x0137: return 233;
      case 0x013B: return 234;
      case 0x013C: return 235;
      case 0x0146: return 236;
      case 0x0112: return 237;
      case 0x0145: return 238;
      case 0x2019: return 239;
      case 0x00AD: return 240;
      case 0x00B1: return 241;
      case 0x201C: return 242;
      case 0x00BE: return 243;
      case 0x00B6: return 244;
      case 0x00A7: return 245;
      case 0x00F7: return 246;
      case 0x201E: return 247;
      case 0x00B0: return 248;
      case 0x2219: return 249;
      case 0x00B7: return 250;
      case 0x00B9: return 251;
      case 0x00B3: return 252;
      case 0x00B2: return 253;
      case 0x25A0: return 254;
      case 0x00A0: return 255;
      default: return '?';
    }
  }
public:
  ~QCP775Codec() {}
  //-----------------------------------------------------
  QString convertToUnicode(const char* chars, int len, ConverterState*) const override
  {
    QString result;
    int i;
    for(i = 0; i < len; i++)
      result.append(QChar(this->char_to_unicode(chars[i])));
    return result;
  }
  //-----------------------------------------------------
  QByteArray convertFromUnicode(const QChar* chars, int len, ConverterState*) const override
  {
    QByteArray result;
    int i;
    for(i = 0; i < len; i++)
      result.append(1, this->unicode_to_char(chars[i].unicode()) );
    return result;
  }
  //-----------------------------------------------------
  QByteArray name() const override
  {
    return "CP775";
  }
  //-----------------------------------------------------
  QList<QByteArray> aliases() const override
  {
    QList<QByteArray> list;
    list << "CP775";
    return list;
  }
  //-----------------------------------------------------
  int mibEnum() const override
  {
    return 2087;
  }
};

int main(int, char **)
{
/*
foreach (QByteArray codecName,  QTextCodec::availableCodecs())
{
    QString codecNameStr(codecName);
    std::cout << codecNameStr.toLocal8Bit().data();
    std::cout << "\n";
}
*/
  QCP775Codec * CP775Codec;
  CP775Codec = new QCP775Codec();

  QTextCodec::setCodecForLocale(CP775Codec);
  std::cout<< QString::fromUtf8("ĒēŪūĪīÕõĀāŠšĶķĻļŽžČčŅņ\n").toLocal8Bit().data();
}