start:
S = -1;

memcpy(((&RAM[40960u])), ROM, 17591u);
PC = init_os(argc, argv);
switch (PC) { /* different entry points */
  case 0xAD8A:
    goto lAD8A;
  case 0xAD9E:
    v1603 = S;
    goto lAD9E;
  case 0xAEFD:
    v1807 = ',';
    goto lAEFF;
  case 0xB6A3:
    v3003 = S+1;
    goto lB6A3;
  case 0xB79E:
    goto lB79E;
  case 0xB7F7:
    v3251 = S;
    goto lB7F7;
  case 0xE394:
    goto lE394;
  default:
    printf("unknown entry\n");
    exit(1);
}

bb48000:
v4924 = PC;
if (v4924 == 0xA437) /* error handler */
  goto lA437;
v4925 = *((&_ZZ4mainE11case_labels[(v4924 + 4294926336u)]));
switch (v4925) {
default:
  goto not_found;
;
case 1u:
  goto lA3BB;
case 2u:
  goto lA41F;
case 3u:
  goto lA44A;
case 4u:
  goto lA451;
case 5u:
  goto lA454;
case 6u:
  goto lA45E;
case 7u:
  goto lA465;
case 8u:
  goto lA46C;
case 9u:
  goto lA474;
case 10u:
  goto lA47B;
case 11u:
  goto lA480;
case 12u:
  goto lA483;
case 13u:
  goto lA486;
case 14u:
  goto lA48D;
case 15u:
  goto lA7E1;
case 16u:
  goto lA49F;
case 17u:
  goto lA4A2;
case 18u:
  goto lA4A7;
case 19u:
  goto lA4F0;
case 20u:
  goto lA4F3;
case 21u:
  goto lA50D;
case 22u:
  goto lA52D;
case 23u:
  goto lA480;
case 24u:
  goto lA565;
case 25u:
  goto lA57C;
case 26u:
  goto lA642;
case 27u:
  goto lA65C;
case 28u:
  goto lA65E;
case 29u:
  goto lA663;
case 30u:
  goto lA67A;
case 31u:
  goto lA69C;
case 32u:
  goto lA6A7;
case 33u:
  goto lA6AA;
case 34u:
  goto lA6AD;
case 35u:
  goto lA6B6;
case 36u:
  goto lA6B9;
case 37u:
  goto lA6D4;
case 38u:
  goto lA6D7;
case 39u:
  goto lA6ED;
case 40u:
  goto lA6F6;
case 41u:
  goto lA71A;
case 42u:
  goto lA740;
case 43u:
  goto lA742;
case 44u:
  goto lA749;
case 45u:
  goto lA74C;
case 46u:
  goto lA75A;
case 47u:
  goto lA75D;
case 48u:
  goto lA772;
case 49u:
  goto lA775;
case 50u:
  goto lA778;
case 51u:
  goto lA78B;
case 52u:
  goto lA792;
case 53u:
  goto lA795;
case 54u:
  goto lA79C;
case 55u:
  goto lA79F;
case 56u:
  goto lA7A2;
case 57u:
  goto lA7A5;
case 58u:
  goto lA7B1;
case 59u:
  goto lA7E4;
case 60u:
  goto lA7E7;
case 61u:
  goto lA7AE;
case 62u:
  goto lA815;
case 63u:
  goto lA8A0;
case 64u:
  goto lA81D;
case 65u:
  goto lA82F;
case 66u:
  goto lA831;
case 67u:
  goto lA857;
case 68u:
  goto lA871;
case 69u:
  goto lA877;
case 70u:
  goto lA897;
case 71u:
  goto lA883;
case 72u:
  goto lA888;
case 73u:
  goto lA89A;
case 74u:
  goto lA7AE;
case 75u:
  goto lA8A0;
case 76u:
  goto lA8A3;
case 77u:
  goto lA8A6;
case 78u:
  goto lA8C3;
case 79u:
  goto lA8D2;
case 80u:
  goto lA8DB;
case 81u:
  goto lA8F8;
case 82u:
  goto lA8FB;
case 83u:
  goto bb48000_2e_lA928_crit_edge;
case 84u:
  goto lA92B;
case 85u:
  goto lA92E;
case 86u:
  goto lA937;
case 87u:
  goto lA93B;
case 88u:
  goto lA93E;
case 89u:
  goto lA943;
case 90u:
  goto lA94B;
case 91u:
  goto lA94E;
case 92u:
  goto lA962;
case 93u:
  goto lA965;
case 94u:
  goto lA971;
case 95u:
  goto lA9A5;
case 96u:
  goto lA9A8;
case 97u:
  goto lA9B1;
case 98u:
  goto lA9BA;
case 99u:
  goto lA9BF;
case 100u:
  goto lA9C7;
case 101u:
  goto lA9CA;
case 102u:
  goto lA9E3;
case 103u:
  goto lA9F2;
case 104u:
  goto lA9F5;
case 105u:
  goto lA9FC;
case 106u:
  goto lA9FF;
case 107u:
  goto lAA07;
case 108u:
  goto lAA11;
case 109u:
  goto lAA14;
case 110u:
  goto lAA22;
case 111u:
  goto lAA59;
case 112u:
  goto lAA64;
case 113u:
  goto lAA6F;
case 114u:
  goto lAA80;
case 115u:
  goto lABB5;
case 116u:
  goto lAA86;
case 117u:
  goto lAA89;
case 118u:
  goto lAA90;
case 119u:
  goto lAA96;
case 120u:
  goto lAA9D;
case 121u:
  goto lAAA0;
case 122u:
  goto lAAB8;
case 123u:
  goto lAABF;
case 124u:
  goto lAAC2;
case 125u:
  goto lAAC5;
case 126u:
  goto lAAC8;
case 127u:
  goto lAADC;
case 128u:
  goto lAAE5;
case 129u:
  goto lAAEC;
case 130u:
  goto lAAFD;
case 131u:
  goto lAB02;
case 132u:
  goto lAAA2;
case 133u:
  goto lAB1C;
case 134u:
  goto lAB21;
case 135u:
  goto lAB24;
case 136u:
  goto lAB30;
case 137u:
  goto lAB28;
case 138u:
  goto lAB4A;
case 139u:
  goto lAB72;
case 140u:
  goto lAB7B;
case 141u:
  goto lAB7E;
case 142u:
  goto lAB85;
case 143u:
  goto lAB88;
case 144u:
  goto lAB8D;
case 145u:
  goto lAB92;
case 146u:
  goto lABA0;
case 147u:
  goto lABA5;
case 148u:
  goto lABA8;
case 149u:
  goto lABAD;
case 150u:
  goto lABB2;
case 151u:
  goto lABB5;
case 152u:
  goto lABBA;
case 153u:
  goto lABBF;
case 154u:
  goto lABC6;
case 155u:
  goto lABCB;
case 156u:
  goto lABCE;
case 157u:
  goto lABD1;
case 158u:
  goto lABD9;
case 159u:
  goto lABE0;
case 160u:
  goto lA8F8;
case 161u:
  goto lA8FB;
case 162u:
  goto lAC00;
case 163u:
  goto lA560;
case 164u:
  goto lAC06;
case 165u:
  goto lAC18;
case 166u:
  goto lAC2F;
case 167u:
  goto lAC38;
case 168u:
  goto lAC4A;
case 169u:
  goto lAC4D;
case 170u:
  goto lAC54;
case 171u:
  goto lAC80;
case 172u:
  goto lAC83;
case 173u:
  goto lAC91;
case 174u:
  goto lAC8C;
case 175u:
  goto lAC91;
case 176u:
  goto lAC94;
case 177u:
  goto lACB0;
case 178u:
  goto lAC15;
case 179u:
  goto lACBB;
case 180u:
  goto lACD4;
case 181u:
  goto lACD7;
case 182u:
  goto lAD1E;
case 183u:
  goto lAD27;
case 184u:
  goto lAD2E;
case 185u:
  goto lAD45;
case 186u:
  goto lAD52;
case 187u:
  goto lAD55;
case 188u:
  goto lAD5A;
case 189u:
  goto lAD80;
case 190u:
  goto lAD87;
case 191u:
  goto lAD8A;
case 192u:
  goto lAD8D;
case 193u:
  goto lADB1;
case 194u:
  goto lADB4;
case 195u:
  goto lADBB;
case 196u:
  goto lADBB;
case 197u:
  goto lADF9;
case 198u:
  goto lADFD;
case 199u:
  goto lAE2B;
case 200u:
  goto lAE46;
case 201u:
  goto lAE64;
case 202u:
  goto lAE86;
case 203u:
  goto lAE8D;
case 204u:
  goto lAE95;
case 205u:
  goto lAEA5;
case 206u:
  goto lB7E2;
case 207u:
  goto bb48000_2e_lAED4_crit_edge;
  break;
case 208u:
  goto lAED7;
case 209u:
  goto lAEF4;
case 210u:
  goto lAEF7;
case 211u:
  goto lAF2B;
case 212u:
  goto lAF3E;
case 213u:
  goto lAF4B;
case 214u:
  goto lB46F;
case 215u:
  goto lAF71;
case 216u:
  goto lAF7E;
case 217u:
  goto lAF87;
case 218u:
  goto lBC3C;
case 219u:
  goto lAFAD;
case 220u:
  goto lAFB4;
case 221u:
  goto lAFB7;
case 222u:
  goto lAFBA;
case 223u:
  goto lAFBD;
case 224u:
  goto lAFCA;
case 225u:
  goto lAFD4;
case 226u:
  goto lAD8D;
case 227u:
  goto lAFE6;
case 228u:
  goto lAFE9;
case 229u:
  goto lAFF0;
case 230u:
  goto lAFFF;
case 231u:
  goto lB002;
case 232u:
  goto lB016;
case 233u:
  goto lB019;
case 234u:
  goto lB02A;
case 235u:
  goto lB037;
case 236u:
  goto lB044;
case 237u:
  goto lB081;
case 238u:
  goto lB085;
case 239u:
  goto lB088;
case 240u:
  goto lB090;
case 241u:
  goto lB097;
case 242u:
  goto lB09A;
case 243u:
  goto lB0A8;
case 244u:
  goto lB0AD;
case 245u:
  goto lB0B3;
case 246u:
  goto lB0B8;
case 247u:
  goto lB0DB;
case 248u:
  goto lB160;
case 249u:
  goto lB1B5;
case 250u:
  goto lB1B8;
case 251u:
  goto lB1BB;
case 252u:
  goto lB1CC;
case 253u:
  goto lB1E6;
case 254u:
  goto lB205;
case 255u:
  goto lB20E;
case 256u:
  goto lB256;
case 257u:
  goto lB264;
case 258u:
  goto lB267;
case 259u:
  goto lB2A0;
case 260u:
  goto lB2BC;
case 261u:
  goto lB319;
case 262u:
  goto lB33E;
case 263u:
  goto lB37D;
case 264u:
  goto lB384;
case 265u:
  goto lB387;
case 266u:
  goto lB39E;
case 267u:
  goto lB3A2;
case 268u:
  goto lB3B3;
case 269u:
  goto lB3B6;
case 270u:
  goto lB3B9;
case 271u:
  goto lB3BC;
case 272u:
  goto lB3C3;
case 273u:
  goto lB3C6;
case 274u:
  goto lB3C9;
case 275u:
  goto lB3CE;
case 276u:
  goto lB44F;
case 277u:
  goto lB3E6;
case 278u:
  goto lB3ED;
case 279u:
  goto lB3F7;
case 280u:
  goto lB400;
case 281u:
  goto lB403;
case 282u:
  goto lB423;
case 283u:
  goto lB43B;
case 284u:
  goto lB444;
case 285u:
  goto lB465;
case 286u:
  goto lB468;
case 287u:
  goto lB46D;
case 288u:
  goto lB480;
case 289u:
  goto lB4C3;
case 290u:
  goto lB4CA;
case 291u:
  goto lB51F;
case 292u:
  goto lB54B;
case 293u:
  goto lB564;
case 294u:
  goto lB5BB;
case 295u:
  goto lB62B;
case 296u:
  goto lB646;
case 297u:
  goto lB649;
case 298u:
  goto lB660;
case 299u:
  goto lB663;
case 300u:
  goto lB66A;
case 301u:
  goto lB66D;
case 302u:
  goto lB674;
case 303u:
  goto lADB8;
case 304u:
  goto lB6A6;
case 305u:
  goto lB6B1;
case 306u:
  goto lB6EC;
case 307u:
  goto lB6EF;
case 308u:
  goto lB6F6;
case 309u:
  goto lB700;
case 310u:
  goto lB703;
case 311u:
  goto lB712;
case 312u:
  goto lB719;
case 313u:
  goto lB4CA;
case 314u:
  goto lB72C;
case 315u:
  goto lB72F;
case 316u:
  goto lB737;
case 317u:
  goto lB73E;
case 318u:
  goto lB745;
case 319u:
  goto lB748;
case 320u:
  goto lB74B;
case 321u:
  goto lB764;
case 322u:
  goto lB77C;
case 323u:
  goto lB3A2;
case 324u:
  goto lB785;
case 325u:
  goto lB78B;
case 326u:
  goto lB78E;
case 327u:
  goto lB79E;
case 328u:
  goto lB7A1;
case 329u:
  goto lB7A4;
case 330u:
  goto lB7AD;
case 331u:
  goto lB7B0;
case 332u:
  goto lB7DA;
case 333u:
  goto lB7DD;
case 334u:
  goto lB7EE;
case 335u:
  goto lB7F1;
case 336u:
  goto lB79E;
case 337u:
  goto lB804;
case 338u:
  goto lB80D;
case 339u:
  goto lB816;
case 340u:
  goto lB824;
case 341u:
  goto lB827;
case 342u:
  goto lB82D;
case 343u:
  goto lB830;
case 344u:
  goto lB837;
case 345u:
  goto lB83C;
case 346u:
  goto lB853;
case 347u:
  goto lB865;
case 348u:
  goto lB86A;
case 349u:
  goto lB8A3;
case 350u:
  goto lB8D7;
case 351u:
  goto lB9EA;
case 352u:
  goto lB9ED;
case 353u:
  goto lBA04;
case 354u:
  goto lBA0B;
case 355u:
  goto lBA12;
case 356u:
  goto lBA19;
case 357u:
  goto lBA20;
case 358u:
  goto lBA24;
case 359u:
  goto lBA2B;
case 360u:
  goto lBA33;
case 361u:
  goto lBA42;
case 362u:
  goto lBA47;
case 363u:
  goto lBA4C;
case 364u:
  goto lBA51;
case 365u:
  goto lBB8F;
case 366u:
  goto lBAE5;
case 367u:
  goto lBAF4;
case 368u:
  goto lBB01;
case 369u:
  goto lBB12;
case 370u:
  goto lBB12;
case 371u:
  goto lBB17;
case 372u:
  goto lBB21;
case 373u:
  goto lBBD7;
case 374u:
  goto lBC11_2e_preheader;
case 375u:
  goto lBC26;
case 376u:
  goto lBC39;
case 377u:
  goto lBC3C;
case 378u:
  goto lBC58;
case 379u:
  goto lBCAE;
case 380u:
  goto lBCB8;
case 381u:
  goto lBCC9;
case 382u:
  goto lBCCC;
case 383u:
  goto lBCD5;
case 384u:
  goto lBD0D;
case 385u:
  goto lBD1A;
case 386u:
  goto lBD33;
case 387u:
  goto lBD55;
case 388u:
  goto lBD5E;
case 389u:
  goto lBD74;
case 390u:
  goto lBD0A;
case 391u:
  goto lBD82;
case 392u:
  goto lBD86;
case 393u:
  goto lBDC9;
case 394u:
  goto lBDD7;
case 395u:
  goto lAB1E;
case 396u:
  goto lBE07;
case 397u:
  goto lBE12;
case 398u:
  goto lBE1D;
case 399u:
  goto lBE24;
case 400u:
  goto lBE2B;
case 401u:
  goto lBE32;
case 402u:
  goto lBE35;
case 403u:
  goto lBF71;
case 404u:
  goto lBF74;
case 405u:
  goto lBF7B;
case 406u:
  goto lBF8B;
case 407u:
  goto lBF92;
case 408u:
  goto lBF99;
case 409u:
  goto lBFA1;
case 410u:
  goto lBFA6;
case 411u:
  goto lBFAD;
case 412u:
  goto lBFB0;
case 413u:
  goto lBFB4;
case 414u:
  goto lBFED;
case 415u:
  goto lBFF4;
case 416u:
  goto lE000;
case 417u:
  goto lE005;
case 418u:
  goto lE00E;
case 419u:
  goto lE011;
case 420u:
  goto lE030;
case 421u:
  goto lE033;
case 422u:
  goto lE03A;
case 423u:
  goto lE042;
case 424u:
  goto lE04A;
case 425u:
  goto lE04F;
case 426u:
  goto lE052;
case 427u:
  goto lE060;
case 428u:
  goto lE073;
case 429u:
  goto lE084;
case 430u:
  goto lE097;
case 431u:
  goto lE09A;
case 432u:
  goto lE0A1;
case 433u:
  goto lE0C5;
case 434u:
  goto lE0CC;
case 435u:
  goto lE0D3;
case 436u:
  goto lE0F2;
case 437u:
  goto lE10F;
case 438u:
  goto lE115;
case 439u:
  goto lE11B;
case 440u:
  goto lE121;
case 441u:
  goto lE127;
case 442u:
  goto lE12A;
case 443u:
  goto lE12D;
case 444u:
  goto lE130;
case 445u:
  goto lE156;
case 446u:
  goto lE159;
case 447u:
  goto lE162;
case 448u:
  goto lE165;
case 449u:
  goto lE168;
case 450u:
  goto lE16F;
case 451u:
  goto lE178;
case 452u:
  goto lE183;
case 453u:
  goto lE198;
case 454u:
  goto lA52A;
case 455u:
  goto lE1B8;
case 456u:
  goto lA677;
case 457u:
  goto lE1BE;
case 458u:
  goto lE1C1;
case 459u:
  goto lE1C4;
case 460u:
  goto lE1C7;
case 461u:
  goto lE1CA;
case 462u:
  goto lE1CF;
case 463u:
  goto lE1D9;
case 464u:
  goto lE1E0;
case 465u:
  goto lE1E3;
case 466u:
  goto lE1E6;
case 467u:
  goto lE1E9;
case 468u:
  goto lE1EC;
case 469u:
  goto lE1F3;
case 470u:
  goto lE1F6;
case 471u:
  goto lE1F9;
case 472u:
  goto lB79E;
case 473u:
  goto lE209;
case 474u:
  goto lE211;
case 475u:
  goto lE214;
case 476u:
  goto lE21E;
case 477u:
  goto lE221;
case 478u:
  goto lE224;
case 479u:
  goto lE22E;
case 480u:
  goto lE231;
case 481u:
  goto lE234;
case 482u:
  goto lE242;
case 483u:
  goto lE245;
case 484u:
  goto lE248;
case 485u:
  goto lE251;
case 486u:
  goto lE254;
case 487u:
  goto lE257;
case 488u:
  goto lE25A;
case 489u:
  goto lE25D;
case 490u:
  goto lE264;
case 491u:
  goto lE26B;
case 492u:
  goto lE26E;
case 493u:
  goto lE277;
case 494u:
  goto lE27A;
case 495u:
  goto lE27D;
case 496u:
  goto lE284;
case 497u:
  goto lE28B;
case 498u:
  goto lE293;
case 499u:
  goto lE2A0;
case 500u:
  goto lE2A7;
case 501u:
  goto lE2AD;
case 502u:
  goto lE2B4;
case 503u:
  goto lE2B7;
case 504u:
  goto lE2BE;
case 505u:
  goto lE2C5;
case 506u:
  goto lE2CC;
case 507u:
  goto lE2D5;
case 508u:
  goto lE30E;
case 509u:
  goto lE316;
case 510u:
  goto lE324;
case 511u:
  goto lE32B;
case 512u:
  goto lE337;
case 513u:
  goto lE38B;
case 514u:
  goto lE394;
case 515u:
  goto lE397;
case 516u:
  goto lE39A;
case 517u:
  goto lE39D;
case 518u:
  goto lE406;
case 519u:
  goto lE40E;
case 520u:
  goto lE429;
case 521u:
  goto lE430;
case 522u:
  goto lE43D;
case 523u:
  goto lA644;
case 524u:
  goto lE4B1;
}

lE394:
v4858 = S;
RAM[v4858 + 256u] = -29;
RAM[(v4858 - 1) + 256u] = -106;
S = (v4858 - 2);
X = 11;
Z = 0;
N = 0;
v4905 = 0;
goto lE455;

lA3B7:
  v48 = v49;
  v50 = v51;
  v52 = v53;
  v54 = v55&1;
  v56 = v57;
  v58 = v59;
  X = v58;
  A = v56;
  Z = v54;
  N = v52 >> 7;
  C = v50;
  V = v48;
  v60 = RAM[(v17 + 256u)];
  S = v18;
  v61 = RAM[(v18 + 256u)];
  v62 = (v60 + 1) + (v61 << 8);
  PC = v62;
  if ((v62 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lA38F:
  v21 = v22;
  v23 = v24;
  v25 = v23;
  v26 = RAM[(v25 + 257u)];
  v27 = v26 - 129;
  v28 = v27;
  v29 = ((v28 >> 8) & 1) ^ 1;
  v30 = v27;
  if ((v28 & 255u) == 0u) {
    goto bb2004;
  } else {
    v49 = v21;
    v51 = v29;
    v53 = v30;
    v55 = (v28 & 255u) == 0u;
    v57 = v26;
    v59 = v23;
    goto lA3B7;
  }

bb2168:
  v44 = v45;
  v46 = v43;
  v47 = (v43 >> 8) & 1;
  if (v46 == 0) {
    v49 = v44;
    v51 = v47;
    v53 = v46;
    v55 = v46 == 0;
    v57 = v46;
    v59 = v46;
    goto lA3B7;
  } else {
    v22 = v44;
    v24 = v46;
    goto lA38F;
  }

bb2156:
  if (((v25 ^ v43) & 128u) == 0u) {
    goto bb2167;
  } else {
    v45 = 1;
    goto bb2168;
  }

lA3B0:
  v43 = v23 + 18;
  if (((s8 )v23) < 0) {
    goto bb2167;
  } else {
    goto bb2156;
  }

lA3A4:
  v34 = v35;
  v36 = RAM[(v25 + 259u)];
  if (((v34 - v36) & 255u) == 0u) {
    goto bb2088;
  } else {
    goto lA3B0;
  }

bb2004:
  v31 = RAM[74];
  if (v31 == 0) {
    goto bb2021;
  } else {
    v35 = v31;
    goto lA3A4;
  }

bb2021:
  v32 = RAM[(v25 + 258u)];
  RAM[73] = v32;
  v33 = RAM[(v25 + 259u)];
  RAM[74] = v33;
  v35 = v33;
  goto lA3A4;

bb2088:
  v37 = RAM[73];
  v38 = RAM[(v25 + 258u)];
  v39 = v37 - v38;
  v40 = v39;
  v41 = ((v40 >> 8) & 1) ^ 1;
  v42 = v39;
  if ((v40 & 255u) == 0u) {
    v49 = v21;
    v51 = v41;
    v53 = v42;
    v55 = (v40 & 255u) == 0u;
    v57 = v37;
    v59 = v23;
    goto lA3B7;
  } else {
    goto lA3B0;
  }

bb2167:
  v45 = 0;
  goto bb2168;

lA38A:
  v15 = v16;
  v17 = v15 + 1;
  v18 = v15 + 2;
  v19 = v15 + 4;
  X = v19;
  Z = v19 == 0;
  N = v19 >> 7;
  v20 = V;
  v22 = v20;
  v24 = v19;
  goto lA38F;

lA749:
  v737 = S;
  RAM[v737 + 256u] = -89;
  RAM[(v737 - 1) + 256u] = 75;
  v738 = v737 - 2;
  S = v738;
  v16 = v738;
  goto lA38A;

bb9908:
  A = -1;
  Z = 0;
  N = 1;
  RAM[74] = -1;
  v939 = S;
  RAM[v939 + 256u] = -88;
  RAM[(v939 - 1) + 256u] = -38;
  v940 = v939 - 2;
  S = v940;
  v16 = v940;
  goto lA38A;

lA8D2:
  v938 = Z;
  if (v938 == 0) {
    goto lA8D1;
  } else {
    goto bb9908;
  }

lAD27:
  v1541 = A;
  RAM[73] = v1541;
  v1542 = Y;
  RAM[74] = v1542;
  v1543 = S;
  RAM[v1543 + 256u] = -83;
  RAM[(v1543 - 1) + 256u] = 45;
  v1544 = v1543 - 2;
  S = v1544;
  v16 = v1544;
  goto lA38A;

bb15322:
  Y = 0;
  Z = 1;
  N = 0;
  goto lAD27;

lAD1E:
  v1538 = Z;
  if (v1538 == 0) {
    goto lAD24;
  } else {
    goto bb15322;
  }

bb2717:
  v127 = S;
  v128 = RAM[(((v127 + 1) + 256u))];
  v129 = v127 + 2;
  S = v129;
  v130 = RAM[(v129 + 256u)];
  v131 = (v128 + 1) + (v130 << 8);
  PC = v131;
  if ((v131 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lA3F3:
  v120 = v121;
  v122 = v123;
  v124 = RAM[91];
  RAM[91] = (v124 - 1);
  v125 = RAM[89];
  RAM[89] = (v125 - 1);
  v126 = v120 - 1;
  X = v126;
  Z = (v120 == 1);
  N = v126 >> 7;
  if (v120 == 1) {
    goto bb2717;
  } else {
    v110 = v126;
    v112 = v122;
    goto lA3EC;
  }

bb2358:
  v86 = v87;
  V = v86;
  C = (((v85 >> 8) & 1) ^ 1);
  v88 = v84 + 1;
  X = v88;
  A = v78;
  Z = v79;
  N = v80;
  if (v78 == 0) {
    v121 = v88;
    v123 = v78;
    goto lA3F3;
  } else {
    goto bb2419;
  }

bb2346:
  if (((v83 ^ v82) & 128u) == 0u) {
    goto bb2357;
  } else {
    v87 = 1;
    goto bb2358;
  }

bb2283:
  v76 = v77;
  V = v76;
  v78 = v73;
  v79 = v78 == 0;
  v80 = (v78 >> 7);
  v81 = ((v75 >> 8) & 1) ^ 1;
  C = v81;
  RAM[34] = v78;
  Y = v78;
  v82 = RAM[91];
  A = v82;
  Z = v82 == 0;
  N = v82 >> 7;
  v83 = RAM[96];
  v84 = ((((v82 - 1) - v83))) + v81;
  v85 = v84;
  if (((v85 ^ v82) & 128u) == 0u) {
    goto bb2357;
  } else {
    goto bb2346;
  }

bb2271:
  if (((v71 ^ v68) & 128u) == 0u) {
    goto bb2282;
  } else {
    v77 = 1;
    goto bb2283;
  }

lA3BF:
  C = 1;
  v68 = RAM[90];
  A = v68;
  v69 = v68 == 0;
  Z = v69;
  v70 = (v68 >> 7);
  N = v70;
  v71 = RAM[95];
  v72 = v68 - 1;
  v73 = (v72 - v71) + 1;
  v74 = v68;
  v75 = v73;
  if (((v75 ^ v74) & 128u) == 0u) {
    goto bb2282;
  } else {
    goto bb2271;
  }

lA3BB:
  v66 = A;
  RAM[49] = v66;
  v67 = Y;
  RAM[50] = v67;
  goto lA3BF;

bb29046:
  v2918 = v2919;
  V = v2918;
  C = (v2917 >> 8) & 1;
  RAM[91] = v2917;
  v2920 = RAM[51];
  A = v2920;
  v2921 = RAM[52];
  X = v2921;
  Z = v2921 == 0;
  N = v2921 >> 7;
  RAM[88] = v2920;
  RAM[89] = v2921;
  v2922 = S;
  RAM[v2922 + 256u] = -74;
  RAM[(v2922 - 1) + 256u] = 42;
  S = (v2922 - 2);
  goto lA3BF;

bb29034:
  if (((v2916 ^ v2917) & 128u) == 0u) {
    goto bb29045;
  } else {
    v2919 = 1;
    goto bb29046;
  }

bb28987:
  v2913 = v2914;
  V = v2913;
  v2915 = (v2912 >> 8) & 1;
  C = v2915;
  RAM[90] = v2912;
  v2916 = RAM[96];
  A = v2916;
  Z = v2916 == 0;
  N = v2916 >> 7;
  v2917 = v2915 + v2916;
  if (((s8 )v2916) < 0) {
    goto bb29045;
  } else {
    goto bb29034;
  }

bb28975:
  if (((v2910 ^ v2912) & 128u) == 0u) {
    goto bb28986;
  } else {
    v2914 = 1;
    goto bb28987;
  }

bb28879:
  v2908 = RAM[85];
  C = 0;
  v2909 = (((v2908 & 4) >> 1));
  Y = v2909;
  RAM[85] = v2909;
  v2910 = RAM[(((((v2905 << 8u) | v2906) + v2909) & 65535u))];
  A = v2910;
  Z = v2910 == 0;
  N = v2910 >> 7;
  v2911 = RAM[95];
  v2912 = v2911 + v2910;
  if (((v2911 ^ v2910) & 128u) == 0u) {
    goto bb28975;
  } else {
    goto bb28986;
  }

lB606:
  v2905 = RAM[79];
  v2906 = RAM[78];
  v2907 = v2905 | v2906;
  A = v2907;
  Z = v2907 == 0;
  N = v2907 >> 7;
  if (v2907 == 0) {
    goto lB601;
  } else {
    goto bb28879;
  }

bb27706:
  v2795 = RAM[49];
  v2796 = v2787 - v2795;
  v2797 = v2796;
  v2798 = ((v2797 >> 8) & 1) ^ 1;
  C = v2798;
  Z = ((v2797 & 255u) == 0u);
  N = v2796 >> 7;
  if ((v2797 & 255u) == 0u) {
    goto lB606;
  } else {
    v2800 = v2798;
    goto lB57D;
  }

lB572:
  v2787 = v2788;
  v2789 = v2790;
  v2791 = RAM[50];
  v2792 = v2789 - v2791;
  v2793 = v2792;
  v2794 = ((v2793 >> 8) & 1) ^ 1;
  C = v2794;
  Z = ((v2793 & 255u) == 0u);
  N = v2792 >> 7;
  if ((v2793 & 255u) == 0u) {
    goto bb27706;
  } else {
    v2800 = v2794;
    goto lB57D;
  }

lB56E:
  v2783 = v2784;
  v2785 = v2786;
  A = v2785;
  X = v2783;
  Z = v2783 == 0;
  N = v2783 >> 7;
  v2788 = v2785;
  v2790 = v2783;
  goto lB572;

lB566:
  v2781 = A;
  RAM[88] = v2781;
  v2782 = X;
  RAM[89] = v2782;
  A = 3;
  Z = 0;
  N = 0;
  RAM[83] = 3;
  v2784 = v2782;
  v2786 = v2781;
  goto lB56E;

bb27597:
  v2775 = A;
  v2776 = RAM[47];
  v2777 = v2775 - v2776;
  v2778 = v2777;
  C = (((v2778 >> 8) & 1) ^ 1);
  Z = ((v2778 & 255u) == 0u);
  N = v2777 >> 7;
  if ((v2778 & 255u) == 0u) {
    goto lB566;
  } else {
    goto lB561;
  }

lB559:
  v2771 = X;
  v2772 = RAM[48];
  v2773 = v2771 - v2772;
  v2774 = v2773;
  C = (((v2774 >> 8) & 1) ^ 1);
  Z = ((v2774 & 255u) == 0u);
  N = v2773 >> 7;
  if ((v2774 & 255u) == 0u) {
    goto bb27597;
  } else {
    goto lB561;
  }

lB54D:
  RAM[83] = 7;
  v2769 = RAM[45];
  A = v2769;
  v2770 = RAM[46];
  X = v2770;
  Z = v2770 == 0;
  N = v2770 >> 7;
  RAM[34] = v2769;
  RAM[35] = v2770;
  goto lB559;

lB544:
  v2763 = A;
  v2764 = RAM[22];
  v2765 = v2763 - v2764;
  v2766 = v2765;
  C = (((v2766 >> 8) & 1) ^ 1);
  Z = ((v2766 & 255u) == 0u);
  N = v2765 >> 7;
  if ((v2766 & 255u) == 0u) {
    goto lB54D;
  } else {
    goto bb27516;
  }

lB52A:
  v2757 = v2758;
  v2759 = v2760;
  RAM[51] = v2759;
  RAM[52] = v2757;
  Y = 0;
  RAM[79] = 0;
  RAM[78] = 0;
  v2761 = RAM[49];
  v2762 = RAM[50];
  RAM[95] = v2761;
  RAM[96] = v2762;
  A = 25;
  X = 0;
  Z = 1;
  N = 0;
  RAM[34] = 25;
  RAM[35] = 0;
  goto lB544;

lB526:
  v2755 = RAM[55];
  X = v2755;
  v2756 = RAM[56];
  A = v2756;
  Z = v2756 == 0;
  N = v2756 >> 7;
  v2758 = v2756;
  v2760 = v2755;
  goto lB52A;

bb3008:
  A = v171;
  X = v172;
  Z = (v170 == 1);
  N = v172 >> 7;
  RAM[(v169 - 1) + 256u] = -92;
  RAM[(v169 - 2) + 256u] = 30;
  S = (v169 - 3);
  goto lB526;

lA416:
  v165 = v166;
  v167 = v168;
  v169 = v164 - v165;
  v170 = 9 - v165;
  RAM[v169 + 256u] = v167;
  v171 = RAM[(((v170 + 87u) & 255u))];
  v172 = v170 - 1;
  if (((s8 )v172) < 0) {
    goto bb3008;
  } else {
    v166 = (v165 + 1);
    v168 = v171;
    goto lA416;
  }

lA412:
  v163 = A;
  RAM[v151 + 256u] = v163;
  v164 = v151 - 1;
  S = v164;
  X = 9;
  A = v153;
  Z = v153 == 0;
  N = v153 >> 7;
  v166 = 0;
  v168 = v153;
  goto lA416;

bb2905:
  if ((v156 & 255u) == 0u) {
    goto bb2910;
  } else {
    goto lA412;
  }

lA408:
  v151 = v152;
  v153 = Y;
  v154 = RAM[52];
  v155 = v153 - v154;
  v156 = v155;
  v157 = (v156 >> 8) & 1;
  C = (v157 ^ 1);
  Z = ((v156 & 255u) == 0u);
  N = v155 >> 7;
  if (v157 == 0) {
    goto bb2905;
  } else {
    v190 = v151;
    goto lA434;
  }

lA3B8:
  v63 = v64;
  RAM[(v63 - 1) + 256u] = -93;
  RAM[(v63 - 2) + 256u] = -70;
  v65 = v63 - 3;
  S = v65;
  v152 = v65;
  goto lA408;

lA508:
  v340 = v341;
  RAM[89] = v340;
  v342 = S;
  RAM[v342 + 256u] = -91;
  v343 = v342 - 1;
  S = v343;
  RAM[v343 + 256u] = 12;
  v64 = v343;
  goto lA3B8;

bb4378:
  v334 = v335;
  V = v334;
  v336 = v333;
  A = v336;
  v337 = (v333 >> 8) & 1;
  C = v337;
  RAM[88] = v336;
  v338 = RAM[46];
  Y = v338;
  Z = v338 == 0;
  N = v338 >> 7;
  RAM[91] = v338;
  if (v337 == 0) {
    v341 = v338;
    goto lA508;
  } else {
    goto bb4421;
  }

bb4366:
  if (((v331 ^ v333) & 128u) == 0u) {
    goto bb4377;
  } else {
    v335 = 1;
    goto bb4378;
  }

bb4335:
  C = 0;
  v331 = RAM[45];
  A = v331;
  Z = v331 == 0;
  N = v331 >> 7;
  RAM[90] = v331;
  v332 = RAM[11];
  v333 = v332 + v331;
  if (((v332 ^ v331) & 128u) == 0u) {
    goto bb4366;
  } else {
    goto bb4377;
  }

lA4F3:
  v330 = RAM[512];
  A = v330;
  Z = v330 == 0;
  N = v330 >> 7;
  if (v330 == 0) {
    goto lA480;
  } else {
    goto bb4335;
  }

bb4377:
  v335 = 0;
  goto bb4378;

bb4421:
  v339 = v338 + 1;
  Y = v339;
  Z = v339 == 0;
  N = v339 >> 7;
  v341 = v339;
  goto lA508;

lB159:
  v2138 = v2139;
  RAM[88] = v2135;
  RAM[89] = v2138;
  RAM[v2104 + 256u] = -79;
  v2140 = v2104 - 1;
  S = v2140;
  RAM[v2140 + 256u] = 95;
  v64 = v2140;
  goto lA3B8;

bb21282:
  v2133 = v2134;
  V = v2133;
  v2135 = v2132;
  A = v2135;
  Z = v2135 == 0;
  N = v2135 >> 7;
  v2136 = v2132 & 256u;
  C = (v2136 >> 8u);
  if (v2136 == 0u) {
    v2139 = v2131;
    goto lB159;
  } else {
    goto bb21311;
  }

bb21270:
  if (((v2130 ^ v2132) & 128u) == 0u) {
    goto bb21281;
  } else {
    v2134 = 1;
    goto bb21282;
  }

lB143:
  v2128 = RAM[47];
  v2129 = RAM[48];
  RAM[95] = v2128;
  RAM[96] = v2129;
  v2130 = RAM[49];
  A = v2130;
  v2131 = RAM[50];
  Y = v2131;
  Z = v2131 == 0;
  N = v2131 >> 7;
  RAM[90] = v2130;
  RAM[91] = v2131;
  C = 0;
  v2132 = v2130 + 7;
  if (((s8 )v2130) < 0) {
    goto bb21281;
  } else {
    goto bb21270;
  }

lB13B:
  v2124 = v2116 - 83;
  v2125 = v2124;
  C = (((v2125 >> 8) & 1) ^ 1);
  Z = ((v2125 & 255u) == 0u);
  N = v2124 >> 7;
  if ((v2125 & 255u) == 0u) {
    goto bb21180;
  } else {
    goto lB143;
  }

lB128:
  v2114 = RAM[69];
  A = v2114;
  v2115 = RAM[70];
  Y = v2115;
  v2116 = v2114;
  v2117 = v2116 - 84;
  v2118 = v2117;
  C = (((v2118 >> 8) & 1) ^ 1);
  Z = ((v2118 & 255u) == 0u);
  N = v2117 >> 7;
  if ((v2118 & 255u) == 0u) {
    goto bb21100;
  } else {
    goto lB13B;
  }

lB11D:
  X = v2063;
  V = v2065;
  Y = 0;
  v2104 = S;
  v2105 = v2104 + 1;
  p11 = &RAM[(v2105 + 256u)];
  v2107 = *p11;
  A = v2107;
  *p11 = v2107;
  S = v2104;
  v2108 = v2107 - 42;
  v2109 = v2108;
  C = (((v2109 >> 8) & 1) ^ 1);
  Z = ((v2109 & 255u) == 0u);
  N = v2108 >> 7;
  if ((v2109 & 255u) == 0u) {
    goto lB123;
  } else {
    goto lB128;
  }

lB0EF:
  v2057 = v2058;
  v2059 = v2060;
  v2061 = v2062;
  v2063 = v2057 + v2056;
  RAM[96] = v2063;
  v2064 = v2063;
  v2066 = v2059;
  v2068 = v2061;
  goto lB0F1;

bb20807:
  v2084 = v2063 + 1;
  v2085 = v2084 == 0;
  v2086 = (v2084 >> 7);
  v2087 = v2057 + 1;
  if (v2084 == 0) {
    goto lB113_2e_loopexit;
  } else {
    v2058 = v2087;
    v2060 = v2079;
    v2062 = v2081;
    goto lB0EF;
  }

lB0F1:
  v2065 = v2066;
  v2067 = v2068;
  RAM[95] = v2067;
  v2069 = RAM[48];
  if (((v2064 - v2069) & 255u) == 0u) {
    goto bb20584;
  } else {
    goto lB0FB;
  }

bb20778:
  v2079 = v2080;
  v2081 = v2078;
  v2082 = v2078 & 256u;
  v2083 = (v2082 >> 8u);
  if (v2082 == 0u) {
    v2066 = v2079;
    v2068 = v2081;
    goto lB0F1;
  } else {
    goto bb20807;
  }

bb20766:
  if (((v2072 ^ v2078) & 128u) == 0u) {
    goto bb20777;
  } else {
    v2080 = 1;
    goto bb20778;
  }

lB109:
  v2078 = v2067 + 7;
  if (((s8 )v2067) < 0) {
    goto bb20777;
  } else {
    goto bb20766;
  }

lB0FB:
  v2071 = RAM[69];
  v2072 = v2067;
  v2073 = (v2063 << 8u) | v2072;
  v2074 = RAM[v2073];
  if (((v2071 - v2074) & 255u) == 0u) {
    goto bb20664;
  } else {
    goto lB109;
  }

bb20584:
  v2070 = RAM[47];
  if (((v2067 - v2070) & 255u) == 0u) {
    goto lB11D;
  } else {
    goto lB0FB;
  }

bb20664:
  v2075 = RAM[(((v2073 + 1u) & 65535u))];
  v2076 = v2047 - v2075;
  v2077 = v2076;
  if ((v2077 & 255u) == 0u) {
    goto lB185_2e_loopexit;
  } else {
    goto lB109;
  }

bb20777:
  v2080 = 0;
  goto bb20778;

lB0E7:
  Y = 0;
  RAM[16] = 0;
  v2055 = RAM[45];
  A = v2055;
  v2056 = RAM[46];
  X = v2056;
  Z = v2056 == 0;
  N = v2056 >> 7;
  v2058 = 0;
  v2060 = v2053;
  v2062 = v2055;
  goto lB0EF;

lB0DB:
  v2047 = X;
  RAM[70] = v2047;
  C = 1;
  v2048 = RAM[16];
  v2049 = A;
  v2050 = v2049 | v2048;
  A = v2050;
  Z = v2050 == 0;
  N = v2050 >> 7;
  v2051 = v2050 - 40;
  v2052 = v2051;
  v2053 = (((((((v2052 ^ v2050) & 128u) == 0u) | (((s8 )v2050) > -1))&1))) ? 0 : 1;
  V = v2053;
  v2054 = v2051;
  A = v2054;
  Z = v2054 == 0;
  N = v2054 >> 7;
  C = (((v2052 >> 8) & 1) ^ 1);
  if (v2054 == 0) {
    goto lB1D1;
  } else {
    goto lB0E7;
  }

lB0C4:
  v2039 = v2036 - 37;
  v2040 = v2039;
  C = (((v2040 >> 8) & 1) ^ 1);
  Z = ((v2040 & 255u) == 0u);
  N = v2039 >> 7;
  if ((v2040 & 255u) == 0u) {
    goto bb20364;
  } else {
    goto lB0DB;
  }

lB0BA:
  v2036 = A;
  v2037 = v2036 - 36;
  v2038 = v2037;
  C = (((v2038 >> 8) & 1) ^ 1);
  Z = ((v2038 & 255u) == 0u);
  N = v2037 >> 7;
  if ((v2038 & 255u) == 0u) {
    goto bb20321;
  } else {
    goto lB0C4;
  }

lB0AD:
  v2030 = C;
  if (v2030 == 0) {
    goto lB0BA;
  } else {
    goto lB0AF;
  }

lB0B8:
  v2035 = C;
  if (v2035 == 0) {
    goto lB0BA;
  } else {
    goto lB0B0;
  }

bb21127:
  v2122 = v2119 - 73;
  v2123 = v2122;
  C = (((v2123 >> 8) & 1) ^ 1);
  Z = ((v2123 & 255u) == 0u);
  N = v2122 >> 7;
  if ((v2123 & 255u) == 0u) {
    goto lAF08;
  } else {
    goto lB13B;
  }

bb21100:
  v2119 = v2115;
  v2120 = v2119 - 201;
  v2121 = v2120;
  C = (((v2121 >> 8) & 1) ^ 1);
  Z = ((v2121 & 255u) == 0u);
  N = v2120 >> 7;
  if ((v2121 & 255u) == 0u) {
    goto lB123;
  } else {
    goto bb21127;
  }

bb21180:
  v2126 = v2115 - 84;
  v2127 = v2126;
  C = (((v2127 >> 8) & 1) ^ 1);
  Z = ((v2127 & 255u) == 0u);
  N = v2126 >> 7;
  if ((v2127 & 255u) == 0u) {
    goto lAF08;
  } else {
    goto lB143;
  }

bb21281:
  v2134 = 0;
  goto bb21282;

bb21311:
  v2137 = v2131 + 1;
  Y = v2137;
  Z = v2137 == 0;
  N = v2137 >> 7;
  v2139 = v2137;
  goto lB159;

lB264:
  v2283 = S;
  RAM[v2283 + 256u] = -78;
  RAM[(v2283 - 1) + 256u] = 102;
  v2284 = v2283 - 2;
  S = v2284;
  v152 = v2284;
  goto lA408;

lB2B9:
  v2350 = S;
  RAM[v2350 + 256u] = -78;
  RAM[(v2350 - 1) + 256u] = -69;
  v2351 = v2350 - 2;
  S = v2351;
  v152 = v2351;
  goto lA408;

bb23581:
  v2345 = v2346;
  V = v2345;
  v2347 = v2344;
  A = v2347;
  Z = v2347 == 0;
  N = v2347 >> 7;
  v2348 = v2344 & 256u;
  C = (v2348 >> 8u);
  if (v2348 == 0u) {
    goto lB2B9;
  } else {
    goto bb23610;
  }

bb23569:
  if (((v2330 ^ v2344) & 128u) == 0u) {
    goto bb23580;
  } else {
    v2346 = 1;
    goto bb23581;
  }

bb23526:
  RAM[89] = v2340;
  Y = v2340;
  A = v2330;
  Z = v2330 == 0;
  N = v2330 >> 7;
  v2343 = RAM[88];
  v2344 = (v2343 + v2330) + v2342;
  if (((v2343 ^ v2330) & 128u) == 0u) {
    goto bb23569;
  } else {
    goto bb23580;
  }

bb23497:
  v2338 = v2339;
  V = v2338;
  v2340 = v2337;
  A = v2340;
  Z = v2340 == 0;
  N = v2340 >> 7;
  v2341 = v2337 & 256u;
  v2342 = (v2341 >> 8u);
  C = v2342;
  if (v2341 == 0u) {
    goto bb23526;
  } else {
    goto lA435;
  }

bb23485:
  if (((v2331 ^ v2337) & 128u) == 0u) {
    goto bb23496;
  } else {
    v2339 = 1;
    goto bb23497;
  }

bb23467:
  v2335 = RAM[89];
  v2336 = C;
  v2337 = (v2335 + v2331) + (((s16 )(s8 )v2336));
  if (((v2335 ^ v2331) & 128u) == 0u) {
    goto bb23485;
  } else {
    goto bb23496;
  }

lB2A0:
  v2330 = X;
  RAM[113] = v2330;
  v2331 = A;
  RAM[114] = v2331;
  v2332 = RAM[34];
  Y = v2332;
  v2333 = RAM[11];
  v2334 = v2333 - 1;
  RAM[11] = v2334;
  Z = (v2333 == 1);
  N = v2334 >> 7;
  if (v2333 == 1) {
    goto bb23467;
  } else {
    v2302 = v2332;
    goto lB286;
  }

bb23496:
  v2339 = 0;
  goto bb23497;

bb23580:
  v2346 = 0;
  goto bb23581;

bb23610:
  v2349 = v2340 + 1;
  Y = v2349;
  Z = v2349 == 0;
  N = v2349 >> 7;
  if (v2349 == 0) {
    goto lA435;
  } else {
    goto lB2B9;
  }

lE39A:
  v4861 = S;
  RAM[v4861 + 256u] = -29;
  RAM[(v4861 - 1) + 256u] = -100;
  v4862 = RAM[43];
  A = v4862;
  v4863 = RAM[44];
  Y = v4863;
  Z = v4863 == 0;
  N = v4863 >> 7;
  RAM[(v4861 - 2) + 256u] = -28;
  RAM[(v4861 - 3) + 256u] = 40;
  v4864 = v4861 - 4;
  S = v4864;
  v152 = v4864;
  goto lA408;

bb2910:
  v158 = A;
  v159 = RAM[51];
  v160 = v158 - v159;
  v161 = v160;
  v162 = (v161 >> 8) & 1;
  C = (v162 ^ 1);
  Z = ((v161 & 255u) == 0u);
  N = v160 >> 7;
  if (v162 == 0) {
    goto lA412;
  } else {
    v190 = v151;
    goto lA434;
  }

lB384:
  v2539 = S;
  RAM[v2539 + 256u] = -77;
  RAM[(v2539 - 1) + 256u] = -122;
  S = (v2539 - 2);
  goto lB526;

lB37D:
  v2537 = RAM[13];
  A = v2537;
  Z = v2537 == 0;
  N = v2537 >> 7;
  if (v2537 == 0) {
    goto lB384;
  } else {
    goto bb25146;
  }

bb27354:
  RAM[v2726 + 256u] = -75;
  RAM[(v2724 - 2) + 256u] = 30;
  S = (v2724 - 3);
  goto lB526;

lB516:
  X = 16;
  v2751 = RAM[15];
  A = v2751;
  Z = v2751 == 0;
  N = v2751 >> 7;
  if (((s8 )v2751) < 0) {
    goto lA437;
  } else {
    goto bb27354;
  }

lB501:
  v2736 = v2737;
  v2738 = RAM[50];
  v2739 = v2736 - v2738;
  v2740 = v2739;
  v2741 = (v2740 >> 8) & 1;
  C = (v2741 ^ 1);
  Z = ((v2740 & 255u) == 0u);
  N = v2739 >> 7;
  if (v2741 == 0) {
    goto bb27239;
  } else {
    goto lB516;
  }

bb27156:
  v2730 = v2731;
  V = v2730;
  v2732 = v2729;
  A = v2732;
  v2733 = (v2729 >> 8) & 1;
  C = v2733;
  v2734 = RAM[52];
  Y = v2734;
  Z = v2734 == 0;
  N = v2734 >> 7;
  if (v2733 == 0) {
    goto bb27197;
  } else {
    v2737 = v2734;
    goto lB501;
  }

bb27144:
  if (((v2727 ^ v2729) & 128u) == 0u) {
    goto bb27155;
  } else {
    v2731 = 1;
    goto bb27156;
  }

lB4F6:
  v2722 = v2723;
  v2724 = v2725;
  RAM[v2724 + 256u] = v2722;
  v2726 = v2724 - 1;
  S = v2726;
  v2727 = v2722 ^ -1;
  A = v2727;
  Z = (v2722 == 0xff);
  N = v2727 >> 7;
  C = 1;
  v2728 = RAM[51];
  v2729 = (v2728 + v2727) + 1;
  if (((v2728 ^ v2727) & 128u) == 0u) {
    goto bb27144;
  } else {
    goto bb27155;
  }

lB47D:
  v2655 = v2656;
  v2657 = S;
  RAM[v2657 + 256u] = -76;
  RAM[(v2657 - 1) + 256u] = 127;
  v2658 = v2657 - 2;
  S = v2658;
  v2659 = RAM[15];
  C = (v2659 & 1);
  v2660 = (v2659 >> 1);
  Z = v2660 == 0;
  N = 0;
  RAM[15] = v2660;
  v2723 = v2655;
  v2725 = v2658;
  goto lB4F6;

lB475:
  v2651 = v2652;
  v2653 = RAM[100];
  X = v2653;
  v2654 = RAM[101];
  Y = v2654;
  Z = v2654 == 0;
  N = v2654 >> 7;
  RAM[80] = v2653;
  RAM[81] = v2654;
  v2656 = v2651;
  goto lB47D;

lAA52:
  Y = 0;
  v1184 = RAM[v1164];
  A = v1184;
  Z = v1184 == 0;
  N = v1184 >> 7;
  RAM[v1117 + 256u] = -86;
  RAM[(v1117 - 1) + 256u] = 88;
  S = (v1117 - 2);
  v2652 = v1184;
  goto lB475;

bb12042:
  if ((v1177 & 255u) == 0u) {
    goto bb12047;
  } else {
    goto lAA52;
  }

lAA3D:
  Y = v1163;
  v1175 = RAM[46];
  v1176 = v1163 - v1175;
  v1177 = v1176;
  v1178 = (v1177 >> 8) & 1;
  C = (v1178 ^ 1);
  Z = ((v1177 & 255u) == 0u);
  N = v1176 >> 7;
  if (v1178 == 0) {
    goto bb12042;
  } else {
    goto lAA4B;
  }

bb11932:
  if ((v1168 & 255u) == 0u) {
    goto bb11937;
  } else {
    goto lAA3D;
  }

lAA2C:
  Y = 2;
  v1162 = RAM[100];
  v1163 = RAM[101];
  v1164 = (v1163 << 8u) | v1162;
  v1165 = RAM[(((v1164 + 2u) & 65535u))];
  A = v1165;
  v1166 = RAM[52];
  v1167 = v1165 - v1166;
  v1168 = v1167;
  v1169 = (v1168 >> 8) & 1;
  C = (v1169 ^ 1);
  Z = ((v1168 & 255u) == 0u);
  N = v1167 >> 7;
  if (v1169 == 0) {
    goto bb11932;
  } else {
    goto lAA4B;
  }

lA9DA:
  v1117 = v1118;
  v1119 = RAM[74];
  Y = v1119;
  v1120 = v1119 - 191;
  v1121 = v1120;
  C = (((v1121 >> 8) & 1) ^ 1);
  Z = ((v1121 & 255u) == 0u);
  N = v1120 >> 7;
  if ((v1121 & 255u) == 0u) {
    goto bb11513;
  } else {
    goto lAA2C;
  }

lA9BF:
  v1097 = Z;
  v1098 = S;
  v1099 = v1098 + 1;
  S = v1099;
  v1100 = RAM[(v1099 + 256u)];
  A = v1100;
  Z = v1100 == 0;
  v1101 = (v1100 >> 7);
  N = v1101;
  if (v1097 == 0) {
    v1118 = v1099;
    goto lA9DA;
  } else {
    goto lA9C2;
  }

lAC83:
  v1493 = S;
  RAM[v1493 + 256u] = -84;
  RAM[(v1493 - 1) + 256u] = -123;
  v1494 = v1493 - 2;
  S = v1494;
  v1118 = v1494;
  goto lA9DA;

bb11937:
  Y = 1;
  v1170 = RAM[(((v1164 + 1u) & 65535u))];
  A = v1170;
  v1171 = RAM[51];
  v1172 = v1170 - v1171;
  v1173 = v1172;
  v1174 = (v1173 >> 8) & 1;
  C = (v1174 ^ 1);
  Z = ((v1173 & 255u) == 0u);
  N = v1172 >> 7;
  if (v1174 == 0) {
    goto lAA3D;
  } else {
    goto lAA4B;
  }

bb12047:
  A = v1162;
  v1179 = RAM[45];
  v1180 = v1162 - v1179;
  v1181 = v1180;
  v1182 = (v1181 >> 8) & 1;
  C = (v1182 ^ 1);
  Z = ((v1181 & 255u) == 0u);
  N = v1180 >> 7;
  if (v1182 == 0) {
    goto lAA52;
  } else {
    goto lAA4B;
  }

lB4BF:
  A = v2673;
  Z = v2690;
  N = v2691;
  v2704 = S;
  RAM[v2704 + 256u] = -76;
  RAM[(v2704 - 1) + 256u] = -62;
  S = (v2704 - 2);
  v2652 = v2673;
  goto lB475;

lB4B5:
  v2700 = v2701;
  RAM[114] = v2700;
  A = v2670;
  Z = v2697;
  N = v2698;
  if (v2670 == 0) {
    goto lB4BF;
  } else {
    goto bb26818;
  }

bb26745:
  v2693 = v2694;
  V = v2693;
  v2695 = v2692;
  A = v2695;
  v2696 = (v2692 >> 8) & 1;
  C = v2696;
  RAM[113] = v2695;
  X = v2670;
  v2697 = v2670 == 0;
  Z = v2697;
  v2698 = (v2670 >> 7);
  N = v2698;
  if (v2696 == 0) {
    v2701 = v2670;
    goto lB4B5;
  } else {
    goto bb26787;
  }

bb26733:
  if (((v2677 ^ v2692) & 128u) == 0u) {
    goto bb26744;
  } else {
    v2694 = 1;
    goto bb26745;
  }

lB4A9:
  v2688 = v2689;
  RAM[97] = v2673;
  A = v2673;
  v2690 = v2673 == 0;
  Z = v2690;
  v2691 = (v2673 >> 7);
  N = v2691;
  v2692 = (v2669 + v2673) + (((s16 )(s8 )v2688));
  if (((v2669 ^ v2673) & 128u) == 0u) {
    goto bb26733;
  } else {
    goto bb26744;
  }

lB4A4:
  Y = v2673;
  A = v2678;
  v2685 = v2679 - 34;
  v2686 = v2685;
  v2687 = ((v2686 >> 8) & 1) ^ 1;
  C = v2687;
  Z = ((v2686 & 255u) == 0u);
  N = v2685 >> 7;
  if ((v2686 & 255u) == 0u) {
    v2689 = v2687;
    goto lB4A9;
  } else {
    goto lB4A8;
  }

lB497:
  v2673 = v2674;
  v2675 = v2676;
  v2677 = v2673;
  v2678 = RAM[(((v2671 + v2677) & 65535u))];
  if (v2678 == 0) {
    goto lB4A8_2e_loopexit;
  } else {
    goto bb26619;
  }

bb26648:
  v2681 = RAM[8];
  v2682 = (v2679 - v2681);
  v2683 = ((v2682 >> 8) & 1) ^ 1;
  v2684 = v2673 + 1;
  if ((v2682 & 255u) == 0u) {
    goto lB4A4;
  } else {
    v2674 = v2684;
    v2676 = v2683;
    goto lB497;
  }

bb26619:
  v2679 = v2678;
  v2680 = RAM[7];
  if (((v2679 - v2680) & 255u) == 0u) {
    goto lB4A4;
  } else {
    goto bb26648;
  }

lB48D:
  v2669 = A;
  RAM[111] = v2669;
  v2670 = Y;
  RAM[112] = v2670;
  RAM[98] = v2669;
  RAM[99] = v2670;
  Y = -1;
  Z = 0;
  N = 1;
  v2671 = (v2670 << 8u) | v2669;
  v2672 = C;
  v2674 = 0;
  v2676 = v2672;
  goto lB497;

lAC7D:
  v1491 = S;
  RAM[v1491 + 256u] = -84;
  RAM[(v1491 - 1) + 256u] = 127;
  S = (v1491 - 2);
  goto lB48D;

bb14720:
  v1486 = v1487;
  V = v1486;
  v1488 = v1485;
  A = v1488;
  Z = v1488 == 0;
  N = v1488 >> 7;
  v1489 = v1485 & 256u;
  C = (v1489 >> 8u);
  if (v1489 == 0u) {
    goto lAC7D;
  } else {
    goto bb14749;
  }

bb14708:
  if (((v1483 ^ v1485) & 128u) == 0u) {
    goto bb14719;
  } else {
    v1487 = 1;
    goto bb14720;
  }

lAC72:
  v1479 = v1480;
  v1481 = v1482;
  RAM[8] = v1481;
  v1483 = RAM[122];
  A = v1483;
  v1484 = RAM[123];
  Y = v1484;
  Z = v1484 == 0;
  N = v1484 >> 7;
  v1485 = (((s16 )(s8 )v1479)) + v1483;
  if (((s8 )v1483) < 0) {
    goto bb14719;
  } else {
    goto bb14708;
  }

lAC65:
  v1473 = A;
  RAM[7] = v1473;
  v1474 = v1473 - 34;
  v1475 = v1474;
  v1476 = ((v1475 >> 8) & 1) ^ 1;
  C = v1476;
  Z = ((v1475 & 255u) == 0u);
  N = v1474 >> 7;
  if ((v1475 & 255u) == 0u) {
    v1480 = v1476;
    v1482 = v1473;
    goto lAC72;
  } else {
    goto bb14650;
  }

bb14565:
  v1469 = RAM[17];
  Z = v1469 == 0;
  N = v1469 >> 7;
  v1470 = v1469 & 64;
  V = (v1470 >> 6);
  if (v1470 == 0) {
    goto lAC65;
  } else {
    goto bb14592;
  }

lAC54:
  v1467 = RAM[13];
  Z = v1467 == 0;
  v1468 = (v1467 >> 7);
  N = v1468;
  V = ((v1467 >> 6) & 1);
  if (v1468 == 0) {
    goto lAC89;
  } else {
    goto bb14565;
  }

lAC71:
  v1477 = v1478;
  C = 0;
  v1480 = 0;
  v1482 = v1477;
  goto lAC72;

bb14592:
  v1471 = X;
  v1472 = v1471 + 1;
  X = v1472;
  RAM[122] = v1472;
  A = 0;
  Z = 1;
  N = 0;
  RAM[7] = 0;
  v1478 = 0;
  goto lAC71;

bb14650:
  RAM[7] = 58;
  A = 44;
  Z = 0;
  N = 0;
  v1478 = 44;
  goto lAC71;

bb14719:
  v1487 = 0;
  goto bb14720;

bb14749:
  v1490 = v1484 + 1;
  Y = v1490;
  Z = v1490 == 0;
  N = v1490 >> 7;
  goto lAC7D;

lB487:
  X = 34;
  Z = 0;
  N = 0;
  RAM[7] = 34;
  RAM[8] = 34;
  goto lB48D;

lAABF:
  v1260 = S;
  RAM[v1260 + 256u] = -86;
  RAM[(v1260 - 1) + 256u] = -63;
  S = (v1260 - 2);
  goto lB487;

lAB1E:
  v1338 = S;
  RAM[v1338 + 256u] = -85;
  RAM[(v1338 - 1) + 256u] = 32;
  S = (v1338 - 2);
  goto lB487;

lA469:
  v239 = S;
  RAM[v239 + 256u] = -92;
  RAM[(v239 - 1) + 256u] = 107;
  S = (v239 - 2);
  goto lAB1E;

lA465:
  A = 105;
  Y = -93;
  Z = 0;
  N = 1;
  goto lA469;

lA84B:
  v857 = v858;
  A = -127;
  Y = -93;
  Z = 0;
  N = 1;
  if (v857 == 0) {
    goto lE386;
  } else {
    goto lA469;
  }

bb8425:
  Y = 2;
  v788 = RAM[(((v786 + 2u) & 65535u))];
  A = v788;
  Z = v788 == 0;
  N = v788 >> 7;
  C = 0;
  if (v788 == 0) {
    v858 = 0;
    goto lA84B;
  } else {
    goto lA7CE;
  }

lA7BE:
  Y = 0;
  v786 = (v783 << 8u) | v782;
  v787 = RAM[v786];
  A = v787;
  Z = v787 == 0;
  N = v787 >> 7;
  if (v787 == 0) {
    goto bb8425;
  } else {
    goto lA807;
  }

lA7B1:
  v782 = RAM[122];
  A = v782;
  v783 = RAM[123];
  Y = v783;
  v784 = v783 - 2;
  v785 = v784;
  C = (((v785 >> 8) & 1) ^ 1);
  Z = ((v785 & 255u) == 0u);
  N = v784 >> 7;
  if ((v785 & 255u) == 0u) {
    goto lA7BE;
  } else {
    goto bb8384;
  }

bb8384:
  RAM[61] = v782;
  RAM[62] = v783;
  goto lA7BE;

lA849:
  v854 = S;
  v855 = v854 + 2;
  S = v855;
  v856 = RAM[(v855 + 256u)];
  A = v856;
  Z = v856 == 0;
  N = v856 >> 7;
  v858 = v844;
  goto lA84B;

bb9019:
  v847 = RAM[122];
  A = v847;
  v848 = RAM[123];
  Y = v848;
  v849 = RAM[58];
  v850 = v849 == 0;
  v851 = (v849 >> 7);
  v852 = v849 + 1;
  X = v852;
  Z = v852 == 0;
  N = v852 >> 7;
  if (v852 == 0) {
    goto lA849;
  } else {
    goto bb9073;
  }

lA832:
  v844 = v845;
  v846 = Z;
  if (v846 == 0) {
    goto lA870;
  } else {
    goto bb9019;
  }

lA82F:
  v843 = C;
  if (v843 == 0) {
    goto lA831;
  } else {
    v845 = v843;
    goto lA832;
  }

lA831:
  C = 0;
  v845 = 0;
  goto lA832;

bb9073:
  RAM[61] = v847;
  RAM[62] = v848;
  v853 = RAM[57];
  A = v853;
  Y = v849;
  Z = v850;
  N = v851;
  RAM[59] = v853;
  RAM[60] = v849;
  goto lA849;

bb3514:
  v242 = S;
  RAM[v242 + 256u] = -92;
  RAM[(v242 - 1) + 256u] = 115;
  A = 113;
  Y = -93;
  Z = 0;
  N = 1;
  RAM[(v242 - 2) + 256u] = -67;
  RAM[(v242 - 3) + 256u] = -56;
  S = (v242 - 4);
  goto lAB1E;

lA46C:
  v240 = RAM[58];
  v241 = v240 + 1;
  Y = v241;
  Z = v241 == 0;
  N = v241 >> 7;
  if (v241 == 0) {
    goto lA474;
  } else {
    goto bb3514;
  }

lA474:
  A = 118;
  Y = -93;
  Z = 0;
  N = 1;
  v243 = S;
  RAM[v243 + 256u] = -92;
  RAM[(v243 - 1) + 256u] = 122;
  S = (v243 - 2);
  goto lAB1E;

lE38B:
  v4856 = X;
  A = v4856;
  Z = v4856 == 0;
  v4857 = (v4856 >> 7);
  N = v4857;
  if (((s8 )v4856) < 0) {
    goto lA474;
  } else {
    goto lA43A;
  }

lAB1C:
  v1337 = Z;
  if (v1337 == 0) {
    goto lAB10;
  } else {
    goto lAB1E;
  }

lAB6B:
  A = 12;
  Y = -83;
  Z = 0;
  N = 1;
  v1373 = S;
  RAM[v1373 + 256u] = -85;
  RAM[(v1373 - 1) + 256u] = 113;
  S = (v1373 - 2);
  goto lAB1E;

lAB62:
  v1372 = RAM[19];
  A = v1372;
  Z = v1372 == 0;
  N = v1372 >> 7;
  if (v1372 == 0) {
    goto lAB6B;
  } else {
    goto bb13643;
  }

lAB4D:
  v1368 = RAM[17];
  A = v1368;
  Z = v1368 == 0;
  v1369 = (v1368 >> 7);
  N = v1369;
  if (v1368 == 0) {
    goto lAB62;
  } else {
    goto bb13580;
  }

bb14839:
  v1502 = A;
  v1503 = v1502 - 44;
  v1504 = v1503;
  C = (((v1504 >> 8) & 1) ^ 1);
  Z = ((v1504 & 255u) == 0u);
  N = v1503 >> 7;
  if ((v1504 & 255u) == 0u) {
    goto lAC9D;
  } else {
    goto lAB4D;
  }

lAC94:
  v1501 = Z;
  if (v1501 == 0) {
    goto bb14839;
  } else {
    goto lAC9D;
  }

bb15275:
  A = -4;
  Y = -84;
  Z = 0;
  N = 1;
  goto lAB1E;

bb15258:
  v1532 = RAM[19];
  A = v1532;
  Z = v1532 == 0;
  N = v1532 >> 7;
  if (v1532 == 0) {
    goto bb15275;
  } else {
    goto lACFB;
  }

lACEA:
  Y = 0;
  v1531 = RAM[(((v1529 << 8u) | v1528))];
  A = v1531;
  Z = v1531 == 0;
  N = v1531 >> 7;
  if (v1531 == 0) {
    goto lACFB;
  } else {
    goto bb15258;
  }

lACDF:
  v1528 = RAM[67];
  A = v1528;
  v1529 = RAM[68];
  Y = v1529;
  v1530 = RAM[17];
  X = v1530;
  Z = v1530 == 0;
  N = v1530 >> 7;
  if (((s8 )v1530) < 0) {
    v833 = v1529;
    v835 = v1528;
    goto lA827;
  } else {
    goto lACEA;
  }

lACB0:
  v1510 = Z;
  if (v1510 == 0) {
    goto bb14932;
  } else {
    goto lACDF;
  }

bb45401:
  A = 100;
  Y = -93;
  Z = 0;
  N = 1;
  goto lAB1E;

bb45362:
  v4690 = RAM[122];
  A = v4690;
  v4691 = v4690 - 2;
  v4692 = v4691;
  C = (((v4692 >> 8) & 1) ^ 1);
  Z = ((v4692 & 255u) == 0u);
  N = v4691 >> 7;
  if ((v4692 & 255u) == 0u) {
    goto lE194;
  } else {
    goto bb45401;
  }

lE183:
  v4687 = A;
  v4688 = v4687 & 16;
  A = v4688;
  v4689 = (v4688 >> 4);
  Z = (v4689 ^ 1);
  N = 0;
  if (v4689 == 1) {
    goto lA437;
  } else {
    goto bb45362;
  }

bb45521:
  v4704 = X;
  RAM[45] = v4704;
  v4705 = Y;
  RAM[46] = v4705;
  A = 118;
  Y = -93;
  Z = 0;
  N = 1;
  v4706 = S;
  RAM[v4706 + 256u] = -31;
  RAM[(v4706 - 1) + 256u] = -79;
  S = (v4706 - 2);
  goto lAB1E;

lE1A1:
  v4701 = RAM[123];
  A = v4701;
  v4702 = v4701 - 2;
  v4703 = v4702;
  C = (((v4703 >> 8) & 1) ^ 1);
  Z = ((v4703 & 255u) == 0u);
  N = v4702 >> 7;
  if ((v4703 & 255u) == 0u) {
    goto bb45521;
  } else {
    goto lE1B5;
  }

lE198:
  v4699 = A;
  v4700 = v4699 & -65;
  A = v4700;
  Z = v4700 == 0;
  N = v4700 >> 7;
  if (v4700 == 0) {
    goto lE1A1;
  } else {
    goto bb45471;
  }

lE429:
  A = 115;
  Y = -28;
  Z = 0;
  N = 1;
  v4886 = S;
  RAM[v4886 + 256u] = -28;
  RAM[(v4886 - 1) + 256u] = 47;
  S = (v4886 - 2);
  goto lAB1E;

lE43D:
  A = 96;
  Y = -28;
  Z = 0;
  N = 1;
  v4903 = S;
  RAM[v4903 + 256u] = -28;
  RAM[(v4903 - 1) + 256u] = 67;
  S = (v4903 - 2);
  goto lAB1E;

lAEC6:
  v1788 = S;
  RAM[v1788 + 256u] = -82;
  RAM[(v1788 - 1) + 256u] = -56;
  S = (v1788 - 2);
  goto lB487;

bb17707:
  v1783 = v1784;
  V = v1783;
  v1785 = v1782;
  A = v1785;
  Z = v1785 == 0;
  N = v1785 >> 7;
  v1786 = v1782 & 256u;
  C = (v1786 >> 8u);
  if (v1786 == 0u) {
    goto lAEC6;
  } else {
    goto bb17736;
  }

bb17695:
  if (((v1780 ^ v1782) & 128u) == 0u) {
    goto bb17706;
  } else {
    v1784 = 1;
    goto bb17707;
  }

lAEBD:
  v1778 = v1779;
  v1780 = RAM[122];
  A = v1780;
  v1781 = RAM[123];
  Y = v1781;
  Z = v1781 == 0;
  N = v1781 >> 7;
  v1782 = (((s16 )(s8 )v1778)) + v1780;
  if (((s8 )v1780) < 0) {
    goto bb17706;
  } else {
    goto bb17695;
  }

bb14049:
  v1415 = S;
  RAM[v1415 + 256u] = -85;
  RAM[(v1415 - 1) + 256u] = -59;
  S = (v1415 - 2);
  v1779 = v1414;
  goto lAEBD;

lABBF:
  v1411 = A;
  v1412 = v1411 - 34;
  v1413 = v1412;
  v1414 = ((v1413 >> 8) & 1) ^ 1;
  C = v1414;
  Z = ((v1413 & 255u) == 0u);
  N = v1412 >> 7;
  if ((v1413 & 255u) == 0u) {
    goto bb14049;
  } else {
    goto lABCE;
  }

bb17635:
  v1775 = v1765 - 34;
  v1776 = v1775;
  v1777 = ((v1776 >> 8) & 1) ^ 1;
  C = v1777;
  Z = ((v1776 & 255u) == 0u);
  N = v1775 >> 7;
  if ((v1776 & 255u) == 0u) {
    v1779 = v1777;
    goto lAEBD;
  } else {
    goto lAECC;
  }

bb17608:
  v1773 = v1765 - 170;
  v1774 = v1773;
  C = (((v1774 >> 8) & 1) ^ 1);
  Z = ((v1774 & 255u) == 0u);
  N = v1773 >> 7;
  if ((v1774 & 255u) == 0u) {
    goto lAE8A;
  } else {
    goto bb17635;
  }

bb17581:
  v1771 = v1765 - 171;
  v1772 = v1771;
  C = (((v1772 >> 8) & 1) ^ 1);
  Z = ((v1772 & 255u) == 0u);
  N = v1771 >> 7;
  if ((v1772 & 255u) == 0u) {
    goto lAF0D;
  } else {
    goto bb17608;
  }

lAEAD:
  v1769 = v1765 - 46;
  v1770 = v1769;
  C = (((v1770 >> 8) & 1) ^ 1);
  Z = ((v1770 & 255u) == 0u);
  N = v1769 >> 7;
  if ((v1770 & 255u) == 0u) {
    goto lBCF3;
  } else {
    goto bb17581;
  }

lAE9A:
  v1764 = A;
  v1765 = v1764;
  v1766 = v1765 - 255;
  v1767 = v1766;
  C = (((v1767 >> 8) & 1) ^ 1);
  Z = ((v1767 & 255u) == 0u);
  N = v1766 >> 7;
  if ((v1767 & 255u) == 0u) {
    goto bb17522;
  } else {
    goto lAEAD;
  }

lAE95:
  v1763 = C;
  if (v1763 == 0) {
    goto lAE9A;
  } else {
    goto lAF28;
  }

bb17706:
  v1784 = 0;
  goto bb17707;

bb17736:
  v1787 = v1781 + 1;
  Y = v1787;
  Z = v1787 == 0;
  N = v1787 >> 7;
  goto lAEC6;

lB46F:
  A = -1;
  Y = 0;
  Z = 1;
  N = 0;
  goto lB487;

lB46D:
  v2648 = S;
  v2649 = v2648 + 2;
  S = v2649;
  v2650 = RAM[(v2649 + 256u)];
  A = v2650;
  Z = v2650 == 0;
  N = v2650 >> 7;
  goto lB46F;

lB4A8:
  C = 0;
  v2689 = 0;
  goto lB4A9;

lB4A8_2e_loopexit:
  Y = v2673;
  Z = v2678 == 0;
  N = v2678 >> 7;
  A = v2678;
  C = v2675;
  goto lB4A8;

bb26744:
  v2694 = 0;
  goto bb26745;

bb26787:
  v2699 = v2670 + 1;
  X = v2699;
  Z = v2699 == 0;
  N = v2699 >> 7;
  v2701 = v2699;
  goto lB4B5;

bb26818:
  v2702 = v2670 - 2;
  v2703 = v2702;
  C = (((v2703 >> 8) & 1) ^ 1);
  Z = ((v2703 & 255u) == 0u);
  N = v2702 >> 7;
  if ((v2703 & 255u) == 0u) {
    goto lB4BF;
  } else {
    goto lB4CA;
  }

lB65D:
  *p18 = -74;
  RAM[v2938 + 256u] = 95;
  S = v2937;
  v2652 = v2950;
  goto lB475;

bb29398:
  v2948 = v2949;
  V = v2948;
  v2950 = v2947;
  A = v2950;
  Z = v2950 == 0;
  N = v2950 >> 7;
  v2951 = v2947 & 256u;
  C = (v2951 >> 8u);
  if (v2951 == 0u) {
    goto lB65D;
  } else {
    goto bb29427;
  }

bb29386:
  if (((v2943 ^ v2947) & 128u) == 0u) {
    goto bb29397;
  } else {
    v2949 = 1;
    goto bb29398;
  }

lB649:
  v2937 = S;
  v2938 = v2937 + 1;
  v2939 = RAM[(v2938 + 256u)];
  RAM[111] = v2939;
  v2940 = v2937 + 2;
  S = v2940;
  p18 = &RAM[(v2940 + 256u)];
  v2942 = *p18;
  RAM[112] = v2942;
  Y = 0;
  v2943 = RAM[(((v2942 << 8u) | v2939))];
  A = v2943;
  Z = v2943 == 0;
  N = v2943 >> 7;
  C = 0;
  v2944 = RAM[100];
  v2945 = RAM[101];
  v2946 = RAM[(((v2945 << 8u) | v2944))];
  v2947 = v2946 + v2943;
  if (((v2946 ^ v2943) & 128u) == 0u) {
    goto bb29386;
  } else {
    goto bb29397;
  }

bb29397:
  v2949 = 0;
  goto bb29398;

lB6EF:
  v3074 = X;
  v3075 = S;
  RAM[v3075 + 256u] = v3074;
  A = 1;
  Z = 0;
  N = 0;
  RAM[(v3075 - 1) + 256u] = -74;
  RAM[(v3075 - 2) + 256u] = -11;
  S = (v3075 - 3);
  v2656 = 1;
  goto lB47D;

lB70E:
  v3112 = v3113;
  v3114 = v3115;
  RAM[v3114 + 256u] = v3112;
  RAM[(v3114 - 1) + 256u] = -73;
  RAM[(v3114 - 2) + 256u] = 17;
  S = (v3114 - 3);
  v2656 = v3112;
  goto lB47D;

lB70D:
  v3109 = v3110;
  v3111 = X;
  A = v3111;
  Z = v3111 == 0;
  N = v3111 >> 7;
  v3113 = v3111;
  v3115 = v3109;
  goto lB70E;

lB70C:
  v3105 = v3106;
  v3107 = S;
  RAM[v3107 + 256u] = v3105;
  v3108 = v3107 - 1;
  S = v3108;
  v3110 = v3108;
  goto lB70D;

lB706:
  v3092 = v3093;
  v3094 = v3095;
  v3096 = v3097;
  v3098 = v3099;
  v3100 = v3101;
  v3102 = v3103&1;
  Z = v3102;
  N = v3100 >> 7;
  if (v3098 == 0) {
    v3106 = v3100;
    goto lB70C;
  } else {
    goto bb30669;
  }

lB703:
  v3084 = A;
  v3085 = RAM[80];
  v3086 = RAM[81];
  v3087 = Y;
  v3088 = RAM[(((((v3086 << 8u) | v3085) + v3087) & 65535u))];
  v3089 = v3084 - v3088;
  v3090 = v3089;
  v3091 = ((v3090 >> 8) & 1) ^ 1;
  C = v3091;
  Z = ((v3090 & 255u) == 0u);
  N = v3089 >> 7;
  A = v3087;
  v3093 = v3087;
  v3095 = v3086;
  v3097 = v3085;
  v3099 = v3091;
  v3101 = v3087;
  v3103 = v3087 == 0;
  goto lB706;

bb30990:
  v3144 = v3145;
  V = v3144;
  v3146 = v3142;
  Z = v3146 == 0;
  N = v3146 >> 7;
  v3147 = ((v3143 >> 8) & 1) ^ 1;
  C = v3147;
  v3148 = v3146 ^ -1;
  A = v3148;
  v3093 = v3140;
  v3095 = v3139;
  v3097 = v3138;
  v3099 = v3147;
  v3101 = v3148;
  v3103 = v3146 == 0xff;
  goto lB706;

bb30967:
  if (((v3141 ^ v3137) & 128u) == 0u) {
    goto bb30989;
  } else {
    v3145 = 1;
    goto bb30990;
  }

lB72F:
  C = 0;
  v3137 = A;
  v3138 = RAM[80];
  v3139 = RAM[81];
  v3140 = Y;
  v3141 = RAM[(((((v3139 << 8u) | v3138) + v3140) & 65535u))];
  v3142 = (v3137 - 1) - v3141;
  v3143 = v3142;
  if (((v3143 ^ v3137) & 128u) == 0u) {
    goto bb30989;
  } else {
    goto bb30967;
  }

bb30989:
  v3145 = 0;
  goto bb30990;

bb30669:
  v3104 = RAM[(((((v3094 << 8u) | v3096) + v3092) & 65535u))];
  X = v3104;
  A = v3092;
  Z = v3092 == 0;
  N = v3092 >> 7;
  v3106 = v3092;
  goto lB70C;

bb31200:
  v3168 = v3169;
  V = v3168;
  v3170 = v3166;
  A = v3170;
  Z = v3170 == 0;
  N = v3170 >> 7;
  v3171 = v3167 & 256u;
  C = ((v3171 >> 8u) ^ 1);
  if (v3171 == 0u) {
    v3110 = v3161;
    goto lB70D;
  } else {
    goto bb31224;
  }

bb31177:
  if (((v3165 ^ v3159) & 128u) == 0u) {
    goto bb31199;
  } else {
    v3169 = 1;
    goto bb31200;
  }

bb31105:
  v3158 = X;
  v3159 = v3158 - 1;
  A = v3159;
  v3160 = S;
  RAM[v3160 + 256u] = v3159;
  v3161 = v3160 - 1;
  S = v3161;
  C = 0;
  X = 0;
  Z = 1;
  N = 0;
  v3162 = RAM[80];
  v3163 = RAM[81];
  v3164 = Y;
  v3165 = RAM[(((((v3163 << 8u) | v3162) + v3164) & 65535u))];
  v3166 = (v3159 - 1) - v3165;
  v3167 = v3166;
  if (((v3167 ^ v3159) & 128u) == 0u) {
    goto bb31199;
  } else {
    goto bb31177;
  }

lB74B:
  v3157 = Z;
  if (v3157 == 0) {
    goto bb31105;
  } else {
    goto lB248;
  }

bb31199:
  v3169 = 0;
  goto bb31200;

bb31224:
  v3172 = v3170 ^ -1;
  A = v3172;
  v3173 = RAM[101];
  v3174 = v3172 - v3173;
  v3175 = v3174;
  v3176 = (v3175 >> 8) & 1;
  C = (v3176 ^ 1);
  Z = ((v3175 & 255u) == 0u);
  N = v3174 >> 7;
  if (v3176 != 0) {
    v3113 = v3172;
    v3115 = v3161;
    goto lB70E;
  } else {
    goto bb31265;
  }

bb31265:
  A = v3173;
  Z = v3173 == 0;
  N = v3173 >> 7;
  v3113 = v3173;
  v3115 = v3161;
  goto lB70E;

lB51F:
  RAM[15] = 128u;
  v2752 = S;
  v2753 = v2752 + 1;
  S = v2753;
  v2754 = RAM[(v2753 + 256u)];
  A = v2754;
  Z = v2754 == 0;
  N = v2754 >> 7;
  if (v2754 == 0) {
    goto lB526;
  } else {
    v2723 = v2754;
    v2725 = v2753;
    goto lB4F6;
  }

bb27155:
  v2731 = 0;
  goto bb27156;

bb27197:
  v2735 = v2734 - 1;
  Y = v2735;
  Z = (v2734 == 1);
  N = v2735 >> 7;
  v2737 = v2735;
  goto lB501;

bb27244:
  v2742 = RAM[49];
  v2743 = (v2729 & 255) - v2742;
  v2744 = v2743;
  v2745 = (v2744 >> 8) & 1;
  C = (v2745 ^ 1);
  Z = ((v2744 & 255u) == 0u);
  N = v2743 >> 7;
  if (v2745 == 0) {
    goto lB50B;
  } else {
    goto lB516;
  }

bb27239:
  if ((v2740 & 255u) == 0u) {
    goto bb27244;
  } else {
    goto lB50B;
  }

lB62B:
  v2923 = RAM[85];
  v2924 = RAM[88];
  v2925 = RAM[78];
  v2926 = RAM[79];
  RAM[(((v2926 << 8u) | v2925) + (v2923 + 1)) & 65535u] = v2924;
  X = v2924;
  v2927 = RAM[89];
  v2928 = v2927 + 1;
  RAM[89] = v2928;
  A = v2928;
  v2929 = v2923 + 2;
  Y = v2929;
  Z = v2929 == 0;
  N = v2929 >> 7;
  v2930 = RAM[78];
  v2931 = RAM[79];
  RAM[(((v2931 << 8u) | v2930) + v2929) & 65535u] = v2928;
  v2758 = v2928;
  v2760 = v2924;
  goto lB52A;

lB54B:
  v2768 = Z;
  if (v2768 == 0) {
    goto lB54D;
  } else {
    goto lB544;
  }

lB564:
  v2780 = Z;
  if (v2780 == 0) {
    goto lB566;
  } else {
    goto lB559;
  }

bb28012:
  v2824 = v2823;
  A = v2824;
  RAM[89] = v2824;
  S = v2810;
  v2825 = RAM[(v2810 + 256u)];
  v2826 = (v2825 >> 7);
  N = v2826;
  V = ((v2825 >> 6) & 1);
  B = ((v2825 >> 4) & 1);
  D = ((v2825 >> 3) & 1);
  I = ((v2825 >> 2) & 1);
  Z = ((v2825 >> 1) & 1);
  C = (v2825 & 1);
  if (v2826 == 0) {
    v2784 = v2824;
    v2786 = v2819;
    goto lB56E;
  } else {
    goto bb28069;
  }

bb27921:
  v2817 = v2818;
  V = v2817;
  v2819 = v2816;
  v2820 = (v2816 >> 8) & 1;
  C = v2820;
  RAM[88] = v2819;
  Y = 3;
  v2821 = RAM[(((v2813 + 3u) & 65535u))];
  A = v2821;
  Z = v2821 == 0;
  N = v2821 >> 7;
  v2822 = RAM[89];
  v2823 = (v2822 + v2821) + v2820;
  if (((v2822 ^ v2821) & 128u) == 0u) {
    goto bb28000;
  } else {
    goto bb28012;
  }

bb27909:
  if (((v2814 ^ v2816) & 128u) == 0u) {
    goto bb27920;
  } else {
    v2818 = 1;
    goto bb27921;
  }

lB57D:
  v2799 = v2800;
  RAM[34] = v2787;
  RAM[35] = v2789;
  v2801 = (v2789 << 8u) | v2787;
  v2802 = RAM[v2801];
  v2803 = v2802 == 0;
  v2804 = (v2802 >> 7);
  X = v2802;
  v2805 = RAM[(((v2801 + 1u) & 65535u))];
  v2806 = V;
  v2807 = B;
  v2808 = D;
  v2809 = I;
  v2810 = S;
  RAM[v2810 + 256u] = (((((((((((((((((v2806 << 6) | (v2805 & 128u)))) | (v2807 << 4)))) | (v2808 << 3)))) | (v2809 << 2)))) | v2799))) | ((((((v2805 == 0))) << 1))));
  S = (v2810 - 1);
  Y = 2;
  v2811 = RAM[34];
  v2812 = RAM[35];
  v2813 = (v2812 << 8u) | v2811;
  v2814 = RAM[(((v2813 + 2u) & 65535u))];
  A = v2814;
  Z = v2814 == 0;
  N = v2814 >> 7;
  v2815 = RAM[88];
  v2816 = (v2815 + v2814) + (((s16 )(s8 )v2799));
  if (((v2815 ^ v2814) & 128u) == 0u) {
    goto bb27909;
  } else {
    goto bb27920;
  }

bb27920:
  v2818 = 0;
  goto bb27921;

bb28000:
  goto bb28012;

bb28069:
  A = v2802;
  Z = v2803;
  N = v2804;
  if (((s8 )v2802) < 0) {
    v2784 = v2824;
    v2786 = v2819;
    goto lB56E;
  } else {
    goto bb28086;
  }

bb28319:
  v2848 = A;
  v2849 = RAM[88];
  v2850 = v2848 - v2849;
  v2851 = v2850;
  C = (((v2851 >> 8) & 1) ^ 1);
  Z = ((v2851 & 255u) == 0u);
  N = v2850 >> 7;
  if ((v2851 & 255u) == 0u) {
    v2788 = v2848;
    v2790 = v2844;
    goto lB572;
  } else {
    goto lB5B8;
  }

lB5B0:
  v2844 = X;
  v2845 = RAM[89];
  v2846 = v2844 - v2845;
  v2847 = v2846;
  C = (((v2847 >> 8) & 1) ^ 1);
  Z = ((v2847 & 255u) == 0u);
  N = v2846 >> 7;
  if ((v2847 & 255u) == 0u) {
    goto bb28319;
  } else {
    goto lB5B8;
  }

lB5AE:
  v2842 = v2843;
  X = v2842;
  Z = v2842 == 0;
  N = v2842 >> 7;
  goto lB5B0;

bb28235:
  v2837 = v2838;
  V = v2837;
  v2839 = v2836;
  A = v2839;
  Z = v2839 == 0;
  N = v2839 >> 7;
  v2840 = (v2836 >> 8) & 1;
  C = v2840;
  RAM[34] = v2839;
  if (v2840 == 0) {
    v2843 = v2812;
    goto lB5AE;
  } else {
    goto bb28265;
  }

bb28223:
  if (((v2834 ^ v2836) & 128u) == 0u) {
    goto bb28234;
  } else {
    v2838 = 1;
    goto bb28235;
  }

bb28181:
  v2832 = v2833;
  V = v2832;
  v2834 = v2831;
  A = v2834;
  Z = v2834 == 0;
  N = v2834 >> 7;
  v2835 = (v2831 >> 8) & 1;
  C = v2835;
  v2836 = (((v2811 + (v2831 & 255)))) + v2835;
  if (((v2811 ^ v2834) & 128u) == 0u) {
    goto bb28223;
  } else {
    goto bb28234;
  }

bb28169:
  if (((v2830 ^ v2831) & 128u) == 0u) {
    goto bb28180;
  } else {
    v2833 = 1;
    goto bb28181;
  }

bb28086:
  v2827 = RAM[(((v2813 + 4u) & 65535u))];
  v2828 = (v2827 >> 7);
  Y = 0;
  C = v2828;
  v2829 = v2827 << 1;
  Z = ((v2829 & 254u) == 0u);
  N = ((v2827 >> 6) & 1);
  v2830 = v2829;
  A = v2830;
  v2831 = (v2828 + 5) + (v2829 & 254);
  if (((s8 )v2830) < 0) {
    goto bb28180;
  } else {
    goto bb28169;
  }

bb28180:
  v2833 = 0;
  goto bb28181;

bb28234:
  v2838 = 0;
  goto bb28235;

bb28265:
  v2841 = v2812 + 1;
  RAM[35] = v2841;
  Z = v2841 == 0;
  N = v2841 >> 7;
  v2843 = v2841;
  goto lB5AE;

lB5BB:
  v2853 = Z;
  if (v2853 == 0) {
    goto lB5BD;
  } else {
    goto lB5B0;
  }

bb28986:
  v2914 = 0;
  goto bb28987;

bb29045:
  v2919 = 0;
  goto bb29046;

bb2282:
  v77 = 0;
  goto bb2283;

bb2357:
  v87 = 0;
  goto bb2358;

lA3EC:
  v109 = v110;
  v111 = v112;
  v113 = v111 - 1;
  Y = v113;
  Z = (v111 == 1);
  N = v113 >> 7;
  v114 = RAM[90];
  v115 = RAM[91];
  v116 = v113;
  v117 = RAM[(((((v115 << 8u) | v114) + v116) & 65535u))];
  A = v117;
  Z = v117 == 0;
  N = v117 >> 7;
  v118 = RAM[88];
  v119 = RAM[89];
  RAM[(((v119 << 8u) | v118) + v116) & 65535u] = v117;
  if (v111 == 1) {
    v121 = v109;
    v123 = v113;
    goto lA3F3;
  } else {
    v110 = v109;
    v112 = v113;
    goto lA3EC;
  }

bb2543:
  v103 = v104;
  V = v103;
  v105 = v101;
  A = v105;
  Z = v105 == 0;
  N = v105 >> 7;
  v106 = (v102 >> 8) & 1;
  C = (v106 ^ 1);
  RAM[88] = v105;
  if (v106 != 0) {
    goto bb2568;
  } else {
    v110 = v88;
    v112 = v78;
    goto lA3EC;
  }

bb2531:
  if (((v78 ^ v100) & 128u) == 0u) {
    goto bb2542;
  } else {
    v104 = 1;
    goto bb2543;
  }

lA3DC:
  v98 = v99;
  v100 = RAM[88];
  A = v100;
  Z = v100 == 0;
  N = v100 >> 7;
  v101 = ((((v100 - 1) - v89))) + (((s16 )(s8 )v98));
  v102 = v101;
  if (((v102 ^ v100) & 128u) == 0u) {
    goto bb2542;
  } else {
    goto bb2531;
  }

bb2462:
  v92 = v93;
  V = v92;
  v94 = v90;
  A = v94;
  Z = v94 == 0;
  N = v94 >> 7;
  v95 = (v91 >> 8) & 1;
  v96 = v95 ^ 1;
  C = v96;
  RAM[90] = v94;
  if (v95 == 0) {
    v99 = v96;
    goto lA3DC;
  } else {
    goto bb2487;
  }

bb2450:
  if (((v78 ^ v68) & 128u) == 0u) {
    goto bb2461;
  } else {
    v93 = 1;
    goto bb2462;
  }

bb2419:
  A = v68;
  Z = v69;
  N = v70;
  C = 1;
  v89 = v73 & 255;
  v90 = (v72 - v89) + 1;
  v91 = v90;
  if (((v91 ^ v74) & 128u) == 0u) {
    goto bb2461;
  } else {
    goto bb2450;
  }

bb2461:
  v93 = 0;
  goto bb2462;

bb2487:
  v97 = v82 - 1;
  RAM[91] = v97;
  Z = (v82 == 1);
  N = v97 >> 7;
  C = 1;
  v99 = 1;
  goto lA3DC;

bb2542:
  v104 = 0;
  goto bb2543;

bb2568:
  v107 = RAM[89];
  v108 = v107 - 1;
  RAM[89] = v108;
  Z = (v107 == 1);
  N = v108 >> 7;
  v110 = v88;
  v112 = v78;
  goto lA3EC;

bb2856:
  v147 = RAM[(((v132 + 1) + 256u))];
  v148 = v132 + 2;
  S = v148;
  v149 = RAM[(v148 + 256u)];
  v150 = (v147 + 1) + (v149 << 8);
  PC = v150;
  if ((v150 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

bb2814:
  RAM[34] = v142;
  X = v132;
  v144 = v132 - (v139 & 255);
  v145 = v144;
  v146 = (v145 >> 8) & 1;
  C = (v146 ^ 1);
  Z = ((v145 & 255u) == 0u);
  N = v144 >> 7;
  if (v146 == 0) {
    goto bb2856;
  } else {
    goto lA435;
  }

bb2785:
  v140 = v141;
  V = v140;
  v142 = v139;
  A = v142;
  Z = v142 == 0;
  N = v142 >> 7;
  v143 = v139 & 256u;
  C = (v143 >> 8u);
  if (v143 == 0u) {
    goto bb2814;
  } else {
    goto lA435;
  }

bb2773:
  if (((v138 ^ v139) & 128u) == 0u) {
    goto bb2784;
  } else {
    v141 = 1;
    goto bb2785;
  }

lA3FB:
  v132 = v133;
  v134 = v135;
  v136 = (v134 >> 7);
  C = v136;
  v137 = v134 << 1;
  Z = ((v137 & 254u) == 0u);
  N = ((v134 >> 6) & 1);
  v138 = v137;
  A = v138;
  v139 = (((v136 | 62))) + (v137 & 254);
  if (((s8 )v138) < 0) {
    goto bb2784;
  } else {
    goto bb2773;
  }

lA753:
  v746 = S;
  A = 9;
  Z = 0;
  N = 0;
  RAM[(v746 + 2) + 256u] = -89;
  RAM[(v746 + 1) + 256u] = 89;
  S = v746;
  v133 = v746;
  v135 = 9;
  goto lA3FB;

lA74C:
  v739 = Z;
  if (v739 == 0) {
    goto lA753;
  } else {
    goto bb7744;
  }

bb7780:
  v743 = v744;
  V = v743;
  v745 = v742;
  A = v745;
  C = (v742 >> 8) & 1;
  X = v745;
  Z = v745 == 0;
  N = v745 >> 7;
  S = v745;
  goto lA753;

bb7768:
  if (((v740 ^ v742) & 128u) == 0u) {
    goto bb7779;
  } else {
    v744 = 1;
    goto bb7780;
  }

bb7744:
  v740 = X;
  A = v740;
  Z = v740 == 0;
  N = v740 >> 7;
  v741 = C;
  v742 = (v740 + 15) + (((s16 )(s8 )v741));
  if (((s8 )v740) < 0) {
    goto bb7779;
  } else {
    goto bb7768;
  }

bb7779:
  v744 = 0;
  goto bb7780;

lA883:
  A = 3;
  Z = 0;
  N = 0;
  v882 = S;
  RAM[v882 + 256u] = -88;
  RAM[(v882 - 1) + 256u] = -121;
  v883 = v882 - 2;
  S = v883;
  v133 = v883;
  v135 = 3;
  goto lA3FB;

lADAA:
  v1608 = v1609;
  v1610 = X;
  RAM[v1608 + 256u] = v1610;
  A = 1;
  Z = 0;
  N = 0;
  RAM[(v1608 - 1) + 256u] = -83;
  RAM[(v1608 - 2) + 256u] = -80;
  v1611 = v1608 - 3;
  S = v1611;
  v133 = v1611;
  v135 = 1;
  goto lA3FB;

lADA4:
  RAM[122] = (v1604 - 1);
  X = 0;
  v1607 = RAM[72];
  Z = v1607 == 0;
  N = v1607 >> 7;
  V = ((v1607 >> 6) & 1);
  v1609 = v1602;
  goto lADAA;

lAD9E:
  v1602 = v1603;
  v1604 = RAM[122];
  X = v1604;
  Z = v1604 == 0;
  N = v1604 >> 7;
  if (v1604 == 0) {
    goto bb16012;
  } else {
    goto lADA4;
  }

lA9B1:
  v1087 = RAM[14];
  v1088 = S;
  RAM[v1088 + 256u] = v1087;
  v1089 = RAM[13];
  A = v1089;
  Z = v1089 == 0;
  N = v1089 >> 7;
  RAM[(v1088 - 1) + 256u] = v1089;
  RAM[(v1088 - 2) + 256u] = -87;
  RAM[(v1088 - 3) + 256u] = -71;
  v1090 = v1088 - 4;
  S = v1090;
  v1603 = v1090;
  goto lAD9E;

bb12645:
  v1252 = S;
  RAM[v1252 + 256u] = -86;
  RAM[(v1252 - 1) + 256u] = -73;
  v1253 = v1252 - 2;
  S = v1253;
  v1603 = v1253;
  goto lAD9E;

bb12618:
  v1250 = v1239 - 59;
  v1251 = v1250;
  C = (((v1251 >> 8) & 1) ^ 1);
  Z = ((v1251 & 255u) == 0u);
  N = v1250 >> 7;
  if ((v1251 & 255u) == 0u) {
    goto lAB13;
  } else {
    goto bb12645;
  }

bb12591:
  v1248 = v1239 - 44;
  v1249 = v1248;
  C = (((v1249 >> 8) & 1) ^ 1);
  Z = ((v1249 & 255u) == 0u);
  N = v1248 >> 7;
  if ((v1249 & 255u) == 0u) {
    goto lAAE8;
  } else {
    goto bb12618;
  }

bb12564:
  v1245 = v1239 - 166;
  v1246 = (v1245 & 255u) == 0u;
  Z = v1246;
  v1247 = (v1245 >> 7);
  N = v1247;
  C = 0;
  if ((v1245 & 255u) == 0u) {
    v1301 = 0;
    v1303 = v1246;
    v1305 = v1247;
    goto lAAF8;
  } else {
    goto bb12591;
  }

bb12537:
  v1238 = A;
  v1239 = v1238;
  v1240 = v1239 - 163;
  v1241 = v1240;
  v1242 = ((v1241 >> 8) & 1) ^ 1;
  C = v1242;
  v1243 = (v1241 & 255u) == 0u;
  Z = v1243;
  v1244 = (v1240 >> 7);
  N = v1244;
  if ((v1241 & 255u) == 0u) {
    v1301 = v1242;
    v1303 = v1243;
    v1305 = v1244;
    goto lAAF8;
  } else {
    goto bb12564;
  }

lAAA2:
  v1237 = Z;
  if (v1237 == 0) {
    goto bb12537;
  } else {
    goto lAAE7;
  }

lAA96:
  v1231 = S;
  v1232 = v1231 + 1;
  S = v1232;
  v1233 = RAM[(v1232 + 256u)];
  N = v1233 >> 7;
  V = ((v1233 >> 6) & 1);
  B = ((v1233 >> 4) & 1);
  D = ((v1233 >> 3) & 1);
  I = ((v1233 >> 2) & 1);
  v1234 = (v1233 >> 1) & 1;
  Z = v1234;
  C = (v1233 & 1);
  if (v1234 == 0) {
    goto lAAA2;
  } else {
    goto lAAD7;
  }

lAAA0:
  v1236 = Z;
  if (v1236 == 0) {
    goto lAAA2;
  } else {
    goto lAAD7;
  }

lAD8A:
  v1591 = S;
  RAM[v1591 + 256u] = -83;
  RAM[(v1591 - 1) + 256u] = -116;
  v1592 = v1591 - 2;
  S = v1592;
  v1603 = v1592;
  goto lAD9E;

lA775:
  v763 = S;
  RAM[v763 + 256u] = -89;
  RAM[(v763 - 1) + 256u] = 119;
  S = (v763 - 2);
  goto lAD8A;

lA79C:
  v772 = S;
  RAM[v772 + 256u] = -89;
  RAM[(v772 - 1) + 256u] = -98;
  S = (v772 - 2);
  goto lAD8A;

lB423:
  v2603 = RAM[123];
  v2604 = S;
  RAM[v2604 + 256u] = v2603;
  v2605 = RAM[122];
  RAM[(v2604 - 1) + 256u] = v2605;
  v2606 = RAM[78];
  v2607 = RAM[79];
  v2608 = (v2607 << 8u) | v2606;
  v2609 = Y;
  v2610 = RAM[(((v2608 + v2609) & 65535u))];
  RAM[122] = v2610;
  v2611 = v2609 + 1;
  Y = v2611;
  v2612 = RAM[(((v2608 + v2611) & 65535u))];
  RAM[123] = v2612;
  v2613 = RAM[72];
  RAM[(v2604 - 2) + 256u] = v2613;
  v2614 = RAM[71];
  A = v2614;
  Z = v2614 == 0;
  N = v2614 >> 7;
  RAM[(v2604 - 3) + 256u] = v2614;
  RAM[(v2604 - 4) + 256u] = -76;
  RAM[(v2604 - 5) + 256u] = 58;
  S = (v2604 - 6);
  goto lAD8A;

lB79E:
  v3208 = S;
  RAM[v3208 + 256u] = -73;
  RAM[(v3208 - 1) + 256u] = -96;
  S = (v3208 - 2);
  goto lAD8A;

lA94B:
  v1018 = S;
  RAM[v1018 + 256u] = -87;
  RAM[(v1018 - 1) + 256u] = 77;
  S = (v1018 - 2);
  goto lB79E;

lAA86:
  v1218 = S;
  RAM[v1218 + 256u] = -86;
  RAM[(v1218 - 1) + 256u] = -120;
  S = (v1218 - 2);
  goto lB79E;

lAA80:
  v1217 = S;
  RAM[v1217 + 256u] = -86;
  RAM[(v1217 - 1) + 256u] = -126;
  S = (v1217 - 2);
  goto lAA86;

lAB85:
  v1386 = S;
  RAM[v1386 + 256u] = -85;
  RAM[(v1386 - 1) + 256u] = -121;
  S = (v1386 - 2);
  goto lB79E;

lABA5:
  v1398 = S;
  RAM[v1398 + 256u] = -85;
  RAM[(v1398 - 1) + 256u] = -89;
  S = (v1398 - 2);
  goto lB79E;

lAFBD:
  v1914 = S;
  p9 = &RAM[(((v1914 + 1) + 256u))];
  v1916 = *p9;
  X = v1916;
  v1917 = RAM[101];
  *p9 = v1917;
  v1918 = RAM[100];
  RAM[v1914 + 256u] = v1918;
  A = v1916;
  Z = v1916 == 0;
  N = v1916 >> 7;
  RAM[(v1914 - 1) + 256u] = v1916;
  RAM[(v1914 - 2) + 256u] = -81;
  RAM[(v1914 - 3) + 256u] = -55;
  S = (v1914 - 4);
  goto lB79E;

lB745:
  v3154 = S;
  RAM[v3154 + 256u] = -73;
  RAM[(v3154 - 1) + 256u] = 71;
  S = (v3154 - 2);
  goto lB79E;

lE221:
  v4764 = S;
  RAM[v4764 + 256u] = -30;
  RAM[(v4764 - 1) + 256u] = 35;
  S = (v4764 - 2);
  goto lB79E;

lB7EB:
  v3245 = v3246;
  RAM[(v3245 - 1) + 256u] = -73;
  RAM[(v3245 - 2) + 256u] = -19;
  S = (v3245 - 3);
  goto lAD8A;

lB824:
  v3275 = S;
  RAM[v3275 + 256u] = -72;
  v3276 = v3275 - 1;
  S = v3276;
  RAM[v3276 + 256u] = 38;
  v3246 = v3276;
  goto lB7EB;

lB82D:
  v3285 = S;
  RAM[v3285 + 256u] = -72;
  v3286 = v3285 - 1;
  S = v3286;
  RAM[v3286 + 256u] = 47;
  v3246 = v3286;
  goto lB7EB;

lE12A:
  v4651 = S;
  RAM[v4651 + 256u] = -31;
  RAM[(v4651 - 1) + 256u] = 44;
  S = (v4651 - 2);
  goto lAD8A;

lAEF4:
  v1800 = S;
  RAM[v1800 + 256u] = -82;
  RAM[(v1800 - 1) + 256u] = -10;
  v1801 = v1800 - 2;
  S = v1801;
  v1603 = v1801;
  goto lAD9E;

lAFB4:
  v1910 = S;
  RAM[v1910 + 256u] = -81;
  RAM[(v1910 - 1) + 256u] = -74;
  v1911 = v1910 - 2;
  S = v1911;
  v1603 = v1911;
  goto lAD9E;

lB1B5:
  v2197 = S;
  RAM[v2197 + 256u] = -79;
  RAM[(v2197 - 1) + 256u] = -73;
  v2198 = v2197 - 2;
  S = v2198;
  v1603 = v2198;
  goto lAD9E;

lE257:
  v4789 = S;
  RAM[v4789 + 256u] = -30;
  RAM[(v4789 - 1) + 256u] = 89;
  v4790 = v4789 - 2;
  S = v4790;
  v1603 = v4790;
  goto lAD9E;

lE1E3:
  v4730 = S;
  RAM[v4730 + 256u] = -31;
  RAM[(v4730 - 1) + 256u] = -27;
  S = (v4730 - 2);
  goto lE257;

bb48000_2e_lA928_crit_edge:
  v4927 = S;
  RAM[v4927 + 256u] = -87;
  RAM[(v4927 - 1) + 256u] = 42;
  v4928 = v4927 - 2;
  S = v4928;
  v1603 = v4928;
  goto lAD9E;

bb16012:
  v1605 = RAM[123];
  v1606 = v1605 - 1;
  RAM[123] = v1606;
  Z = (v1605 == 1);
  N = v1606 >> 7;
  goto lADA4;

lAE2B:
  v1699 = RAM[77];
  A = v1699;
  Z = v1699 == 0;
  N = v1699 >> 7;
  v1700 = S;
  RAM[v1700 + 256u] = v1699;
  v1701 = v1700 - 1;
  S = v1701;
  v1609 = v1701;
  goto lADAA;

bb2784:
  v141 = 0;
  goto bb2785;

lA434:
  v189 = v190;
  v191 = RAM[(((v189 + 1) + 256u))];
  v192 = v189 + 2;
  S = v192;
  v193 = RAM[(v192 + 256u)];
  v194 = (v191 + 1) + (v193 << 8);
  PC = v194;
  if ((v194 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

bb3071:
  X = 0;
  v178 = RAM[(((v173 + 10) + 256u))];
  Y = v178;
  v179 = v173 + 11;
  S = v179;
  v180 = RAM[(v179 + 256u)];
  A = v180;
  v181 = RAM[52];
  v182 = v178 - v181;
  v183 = v182;
  v184 = (v183 >> 8) & 1;
  C = (v184 ^ 1);
  Z = ((v183 & 255u) == 0u);
  N = v182 >> 7;
  if (v184 == 0) {
    goto bb3148;
  } else {
    v190 = v179;
    goto lA434;
  }

lA421:
  v174 = v175;
  v176 = RAM[((((((((v174 + v173) + 1))))) + 256u))];
  RAM[((v174 - 9) + 97u) & 255u] = v176;
  v177 = v174 + 1;
  if (v177 == 9) {
    goto bb3071;
  } else {
    v175 = v177;
    goto lA421;
  }

lA41F:
  X = -9;
  Z = 0;
  N = 1;
  v173 = S;
  v175 = 0;
  goto lA421;

bb3153:
  v185 = RAM[51];
  v186 = v180 - v185;
  v187 = v186;
  v188 = (v187 >> 8) & 1;
  C = (v188 ^ 1);
  Z = ((v187 & 255u) == 0u);
  N = v186 >> 7;
  if (v188 == 0) {
    goto lA435;
  } else {
    v190 = v179;
    goto lA434;
  }

bb3148:
  if ((v183 & 255u) == 0u) {
    goto bb3153;
  } else {
    goto lA435;
  }

lA437:
  v213 = RAM[768];
  v214 = RAM[769];
  v215 = (v214 << 8) | v213;
  PC = v215;
  if ((v215 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lA435:
  X = 16;
  Z = 0;
  N = 0;
  goto lA437;

lA435_2e_loopexit:
  v195 = v196;
  v197 = v198;
  v199 = v200;
  v201 = v202;
  v203 = v204;
  v205 = v206;
  v207 = v208;
  v209 = v210;
  v211 = v212;
  X = v211;
  A = v209;
  Z = v207 == 0;
  N = v205 >> 7;
  C = v203;
  Y = v201;
  RAM[93] = v2503;
  RAM[113] = v199;
  RAM[114] = v197;
  V = v195;
  goto lA435;

lB35F:
  v2491 = v2492;
  v2493 = v2494;
  v2495 = v2496;
  v2497 = v2498;
  v2499 = v2500;
  v2501 = v2502;
  v2503 = 16 - v2491;
  v2504 = v2501 << 1;
  v2505 = v2504;
  v2506 = (v2499 << 1) | (v2501 >> 7);
  v2507 = (v2506 >> 8);
  v2508 = v2506;
  if (v2507 == 0) {
    goto bb24876;
  } else {
    v196 = v2493;
    v198 = v2495;
    v200 = v2497;
    v202 = v2508;
    v204 = v2507;
    v206 = v2508;
    v208 = v2508;
    v210 = v2508;
    v212 = v2505;
    goto lA435_2e_loopexit;
  }

lB378:
  v2521 = v2522;
  v2523 = v2524;
  v2525 = v2526;
  v2527 = v2528;
  v2529 = v2530;
  v2531 = v2503 - 1;
  v2532 = v2491 + 1;
  if (v2503 == 1) {
    goto bb25109;
  } else {
    v2492 = v2532;
    v2494 = v2521;
    v2496 = v2512;
    v2498 = v2509;
    v2500 = v2523;
    v2502 = v2529;
    goto lB35F;
  }

bb24876:
  v2509 = v2497 << 1;
  v2510 = (v2495 << 1) | (v2497 >> 7);
  v2511 = (v2510 >> 8);
  v2512 = v2510;
  if (v2511 == 0) {
    v2522 = v2493;
    v2524 = v2508;
    v2526 = v2511;
    v2528 = v2508;
    v2530 = v2505;
    goto lB378;
  } else {
    goto bb24931;
  }

bb25051:
  v2517 = v2518;
  v2519 = v2516;
  v2520 = (v2516 >> 8) & 1;
  if (v2520 == 0) {
    v2522 = v2517;
    v2524 = v2519;
    v2526 = v2520;
    v2528 = v2519;
    v2530 = v2515;
    goto lB378;
  } else {
    v196 = v2517;
    v198 = v2512;
    v200 = v2509;
    v202 = v2519;
    v204 = v2520;
    v206 = v2519;
    v208 = v2519;
    v210 = v2519;
    v212 = v2515;
    goto lA435_2e_loopexit;
  }

bb25039:
  if (((v2508 ^ v2516) & 128u) == 0u) {
    goto bb25050;
  } else {
    v2518 = 1;
    goto bb25051;
  }

bb24973:
  v2515 = v2514;
  v2516 = (((v2486 + (v2506 & 255)))) + ((((v2514 >> 8) & 1)));
  if (((v2486 ^ v2508) & 128u) == 0u) {
    goto bb25039;
  } else {
    goto bb25050;
  }

bb24931:
  v2513 = RAM[40];
  v2514 = v2513 + (v2504 & 254);
  if (((v2513 ^ v2505) & 128u) == 0u) {
    goto bb24961;
  } else {
    goto bb24973;
  }

bb24961:
  goto bb24973;

bb25050:
  v2518 = 0;
  goto bb25051;

lB355:
  v2484 = v2485;
  v2486 = v2487;
  RAM[41] = v2486;
  A = 16;
  RAM[93] = 16;
  X = 0;
  Y = 0;
  Z = 1;
  N = 0;
  v2488 = RAM[113];
  v2489 = RAM[114];
  v2490 = V;
  v2492 = 0;
  v2494 = v2490;
  v2496 = v2489;
  v2498 = v2488;
  v2500 = 0;
  v2502 = 0;
  goto lB35F;

lB337:
  v2448 = v2449;
  RAM[40] = v2448;
  A = 0;
  Z = 1;
  N = 0;
  v2450 = S;
  RAM[v2450 + 256u] = -77;
  RAM[(v2450 - 1) + 256u] = 61;
  v2451 = v2450 - 2;
  S = v2451;
  v2485 = v2451;
  v2487 = 0;
  goto lB355;

lB331:
  v2444 = v2445;
  v2446 = RAM[70];
  A = v2446;
  Z = v2446 == 0;
  N = v2446 >> 7;
  if (((s8 )v2446) < 0) {
    goto bb24451;
  } else {
    v2449 = v2444;
    goto lB337;
  }

bb24392:
  RAM[114] = v2440;
  X = 5;
  v2443 = RAM[69];
  A = v2443;
  Z = v2443 == 0;
  N = v2443 >> 7;
  if (((s8 )v2443) < 0) {
    goto bb24421;
  } else {
    v2445 = 5;
    goto lB331;
  }

bb24349:
  v2438 = v2439;
  V = v2438;
  v2440 = v2437;
  A = v2440;
  C = (v2437 >> 8) & 1;
  RAM[113] = v2428;
  v2441 = RAM[11];
  v2442 = v2441 - 1;
  RAM[11] = v2442;
  Z = (v2441 == 1);
  N = v2442 >> 7;
  if (v2441 == 1) {
    goto bb24392;
  } else {
    v2389 = v2428;
    v2391 = v2434;
    v2393 = v2440;
    goto lB2F2;
  }

bb24337:
  if (((v2432 ^ v2437) & 128u) == 0u) {
    goto bb24348;
  } else {
    v2439 = 1;
    goto bb24349;
  }

lB320:
  v2428 = v2429;
  v2430 = v2431;
  v2432 = v2433;
  v2434 = v2435;
  v2436 = RAM[101];
  v2437 = (v2436 + v2432) + v2430;
  if (((v2436 ^ v2432) & 128u) == 0u) {
    goto bb24337;
  } else {
    goto bb24348;
  }

lB30F:
  v2414 = v2415;
  v2416 = v2392 | v2388;
  A = v2416;
  Z = v2416 == 0;
  N = v2416 >> 7;
  C = 0;
  if (v2416 == 0) {
    v2429 = v2397;
    v2431 = 0;
    v2433 = v2416;
    v2435 = v2414;
    goto lB320;
  } else {
    goto bb24207;
  }

bb24099:
  v2408 = v2390 + 2;
  Y = v2408;
  A = v2397;
  v2409 = RAM[(((v2403 + v2408) & 65535u))];
  v2410 = v2397 - v2409;
  v2411 = v2410;
  v2412 = (v2411 >> 8) & 1;
  C = (v2412 ^ 1);
  Z = ((v2411 & 255u) == 0u);
  N = v2410 >> 7;
  if (v2412 == 0) {
    goto lB245;
  } else {
    v2415 = v2408;
    goto lB30F;
  }

bb24094:
  if ((v2406 & 255u) == 0u) {
    goto bb24099;
  } else {
    goto lB245;
  }

lB2F2:
  v2388 = v2389;
  v2390 = v2391;
  v2392 = v2393;
  RAM[114] = v2392;
  v2394 = v2390 + 1;
  Y = v2394;
  v2395 = S;
  v2396 = v2395 + 1;
  v2397 = RAM[(v2396 + 256u)];
  X = v2397;
  RAM[100] = v2397;
  v2398 = v2395 + 2;
  S = v2398;
  p16 = &RAM[(v2398 + 256u)];
  v2400 = *p16;
  A = v2400;
  RAM[101] = v2400;
  v2401 = RAM[95];
  v2402 = RAM[96];
  v2403 = (v2402 << 8u) | v2401;
  v2404 = RAM[(((v2403 + v2394) & 65535u))];
  v2405 = v2400 - v2404;
  v2406 = v2405;
  v2407 = (v2406 >> 8) & 1;
  C = (v2407 ^ 1);
  Z = ((v2406 & 255u) == 0u);
  N = v2405 >> 7;
  if (v2407 == 0) {
    goto bb24094;
  } else {
    goto lB30E;
  }

lB2EA:
  v2385 = RAM[95];
  v2386 = RAM[96];
  v2387 = RAM[(((((v2386 << 8u) | v2385) + 4u) & 65535u))];
  RAM[11] = v2387;
  A = 0;
  Z = 1;
  N = 0;
  RAM[113] = 0;
  v2389 = 0;
  v2391 = 4;
  v2393 = 0;
  goto lB2F2;

lB256:
  v2277 = RAM[11];
  A = v2277;
  Y = 4;
  v2278 = RAM[95];
  v2279 = RAM[96];
  v2280 = RAM[(((((v2279 << 8u) | v2278) + 4u) & 65535u))];
  v2281 = v2277 - v2280;
  v2282 = v2281;
  C = (((v2282 >> 8) & 1) ^ 1);
  Z = ((v2282 & 255u) == 0u);
  N = v2281 >> 7;
  if ((v2282 & 255u) == 0u) {
    goto lB2EA;
  } else {
    goto lB245;
  }

bb23941:
  Y = 4;
  Z = 0;
  N = 0;
  goto lB2EA;

bb23893:
  v2381 = v2382;
  V = v2381;
  C = (((v2380 >> 8) & 1) ^ 1);
  v2383 = RAM[95];
  RAM[(((v2378 << 8u) | v2383) + 3u) & 65535u] = v2379;
  v2384 = RAM[12];
  A = v2384;
  Z = v2384 == 0;
  N = v2384 >> 7;
  if (v2384 == 0) {
    goto bb23941;
  } else {
    goto lB34B;
  }

bb23881:
  if (((v2378 ^ v2377) & 128u) == 0u) {
    goto bb23892;
  } else {
    v2382 = 1;
    goto bb23893;
  }

bb23795:
  v2373 = v2374;
  V = v2373;
  v2375 = ((v2372 >> 8) & 1) ^ 1;
  C = v2375;
  v2376 = RAM[96];
  RAM[(((v2376 << 8u) | v2370) + 2u) & 65535u] = v2371;
  v2377 = RAM[50];
  A = v2377;
  Y = 3;
  Z = 0;
  N = 0;
  v2378 = RAM[96];
  v2379 = ((((v2377 - 1) - v2378))) + v2375;
  v2380 = v2379;
  if (((v2380 ^ v2377) & 128u) == 0u) {
    goto bb23892;
  } else {
    goto bb23881;
  }

bb23783:
  if (((v2370 ^ v2369) & 128u) == 0u) {
    goto bb23794;
  } else {
    v2374 = 1;
    goto bb23795;
  }

bb23739:
  RAM[89] = v2366;
  C = 1;
  v2369 = RAM[49];
  A = v2369;
  Z = v2369 == 0;
  N = v2369 >> 7;
  v2370 = RAM[95];
  v2371 = ((((v2369 - 1) - v2370))) + 1;
  v2372 = v2371;
  if (((v2372 ^ v2369) & 128u) == 0u) {
    goto bb23794;
  } else {
    goto bb23783;
  }

lB2CD:
  v2364 = v2365;
  v2366 = RAM[89];
  RAM[89] = (v2366 - 1);
  v2367 = RAM[114];
  v2368 = v2367 - 1;
  RAM[114] = v2368;
  Z = (v2367 == 1);
  N = v2368 >> 7;
  if (v2367 == 1) {
    goto bb23739;
  } else {
    v2357 = v2364;
    v2359 = 0;
    goto lB2C8;
  }

lB2BC:
  v2352 = A;
  RAM[49] = v2352;
  v2353 = Y;
  RAM[50] = v2353;
  A = 0;
  v2354 = RAM[114];
  RAM[114] = (v2354 + 1);
  v2355 = RAM[113];
  Y = v2355;
  Z = v2355 == 0;
  N = v2355 >> 7;
  if (v2355 == 0) {
    v2365 = v2355;
    goto lB2CD;
  } else {
    v2357 = v2355;
    v2359 = 0;
    goto lB2C8;
  }

lB2CD_2e_loopexit:
  Y = 0;
  Z = (v2360 == 1);
  N = 0;
  v2365 = 0;
  goto lB2CD;

lB2C8:
  v2356 = v2357;
  v2358 = v2359;
  v2360 = v2356 - v2358;
  v2361 = RAM[88];
  v2362 = RAM[89];
  RAM[(((v2362 << 8u) | v2361) + (v2360 - 1)) & 65535u] = 0;
  v2363 = v2358 + 1;
  if (v2363 == v2356) {
    goto lB2CD_2e_loopexit;
  } else {
    v2357 = v2356;
    v2359 = v2363;
    goto lB2C8;
  }

bb23794:
  v2374 = 0;
  goto bb23795;

bb23892:
  v2382 = 0;
  goto bb23893;

lB30E:
  v2413 = v2390 + 2;
  Y = v2413;
  Z = v2413 == 0;
  N = v2413 >> 7;
  v2415 = v2413;
  goto lB30F;

bb24259:
  v2421 = v2422;
  V = v2421;
  v2423 = v2420;
  v2424 = (v2420 >> 8) & 1;
  C = v2424;
  X = v2423;
  v2425 = Y;
  A = v2425;
  v2426 = RAM[34];
  Y = v2426;
  Z = v2426 == 0;
  N = v2426 >> 7;
  v2427 = v2424;
  v2429 = v2423;
  v2431 = v2427;
  v2433 = v2425;
  v2435 = v2426;
  goto lB320;

bb24247:
  if (((v2417 ^ v2420) & 128u) == 0u) {
    goto bb24258;
  } else {
    v2422 = 1;
    goto bb24259;
  }

lB319:
  v2417 = X;
  A = v2417;
  Z = v2417 == 0;
  N = v2417 >> 7;
  v2418 = RAM[100];
  v2419 = C;
  v2420 = (v2418 + v2417) + (((s16 )(s8 )v2419));
  if (((v2418 ^ v2417) & 128u) == 0u) {
    goto bb24247;
  } else {
    goto bb24258;
  }

bb24258:
  v2422 = 0;
  goto bb24259;

bb24348:
  v2439 = 0;
  goto bb24349;

bb24421:
  X = 4;
  Z = 0;
  N = 0;
  v2445 = 4;
  goto lB331;

bb24451:
  v2447 = v2444 - 2;
  X = v2447;
  Z = ((v2444 - 1) == 1);
  N = v2447 >> 7;
  v2449 = v2447;
  goto lB337;

lB34C:
  v2473 = v2474;
  v2475 = v2476;
  v2477 = v2475 - 1;
  S = v2477;
  RAM[34] = v2473;
  v2478 = RAM[95];
  v2479 = RAM[96];
  v2480 = (v2479 << 8u) | v2478;
  v2481 = RAM[(((v2480 + v2473) & 65535u))];
  RAM[40] = v2481;
  v2482 = v2473 - 1;
  Y = v2482;
  v2483 = RAM[(((v2480 + v2482) & 65535u))];
  A = v2483;
  Z = v2483 == 0;
  N = v2483 >> 7;
  v2485 = v2477;
  v2487 = v2483;
  goto lB355;

lB296:
  v2319 = v2320;
  v2321 = v2322;
  v2323 = RAM[95];
  v2324 = RAM[96];
  RAM[(((v2324 << 8u) | v2323) + (v2301 + 1)) & 65535u] = v2321;
  v2325 = v2301 + 2;
  Y = v2325;
  A = v2319;
  Z = v2319 == 0;
  N = v2319 >> 7;
  v2326 = RAM[95];
  v2327 = RAM[96];
  RAM[(((v2327 << 8u) | v2326) + v2325) & 65535u] = v2319;
  v2328 = S;
  RAM[v2328 + 256u] = -78;
  v2329 = v2328 - 1;
  S = v2329;
  RAM[v2329 + 256u] = -97;
  v2474 = v2325;
  v2476 = v2329;
  goto lB34C;

lB286:
  v2301 = v2302;
  X = 11;
  A = 0;
  v2303 = RAM[12];
  Z = v2303 == 0;
  N = v2303 >> 7;
  v2304 = v2303 & 64;
  V = (v2304 >> 6);
  if (v2304 == 0) {
    v2320 = 11;
    v2322 = 0;
    goto lB296;
  } else {
    goto bb23221;
  }

lB27D:
  v2296 = v2297;
  RAM[113] = v2296;
  v2298 = RAM[11];
  A = v2298;
  Y = 4;
  Z = 0;
  N = 0;
  v2299 = RAM[95];
  v2300 = RAM[96];
  RAM[(((v2300 << 8u) | v2299) + 4u) & 65535u] = v2298;
  v2302 = 4;
  goto lB286;

lB274:
  v2289 = v2290;
  Y = 1;
  v2291 = RAM[70];
  A = v2291;
  Z = v2291 == 0;
  v2292 = (v2291 >> 7);
  N = v2292;
  v2293 = RAM[95];
  v2294 = RAM[96];
  RAM[(((v2294 << 8u) | v2293) + 1u) & 65535u] = v2291;
  if (v2292 == 0) {
    v2297 = v2289;
    goto lB27D;
  } else {
    goto bb23082;
  }

lB267:
  Y = 0;
  RAM[114] = 0;
  X = 5;
  v2285 = RAM[69];
  A = v2285;
  Z = v2285 == 0;
  v2286 = (v2285 >> 7);
  N = v2286;
  v2287 = RAM[95];
  v2288 = RAM[96];
  RAM[(v2288 << 8u) | v2287] = v2285;
  if (v2286 == 0) {
    v2290 = 5;
    goto lB274;
  } else {
    goto bb23027;
  }

bb23027:
  X = 4;
  Z = 0;
  N = 0;
  v2290 = 4;
  goto lB274;

bb23082:
  v2295 = v2289 - 2;
  X = v2295;
  Z = ((v2289 - 1) == 1);
  N = v2295 >> 7;
  v2297 = v2295;
  goto lB27D;

bb23339:
  v2316 = v2317;
  V = v2316;
  v2318 = v2315;
  A = v2318;
  Z = v2318 == 0;
  N = v2318 >> 7;
  C = (v2315 >> 8) & 1;
  v2320 = v2311;
  v2322 = v2318;
  goto lB296;

bb23327:
  if (((v2314 ^ v2315) & 128u) == 0u) {
    goto bb23338;
  } else {
    v2317 = 1;
    goto bb23339;
  }

bb23263:
  v2309 = v2310;
  V = v2309;
  v2311 = v2308;
  v2312 = (v2308 >> 8) & 1;
  C = v2312;
  X = v2311;
  v2313 = v2305 + 2;
  S = v2313;
  v2314 = RAM[(v2313 + 256u)];
  A = v2314;
  Z = v2314 == 0;
  N = v2314 >> 7;
  v2315 = v2312 + v2314;
  if (((s8 )v2314) < 0) {
    goto bb23338;
  } else {
    goto bb23327;
  }

bb23251:
  if (((v2307 ^ v2308) & 128u) == 0u) {
    goto bb23262;
  } else {
    v2310 = 1;
    goto bb23263;
  }

bb23221:
  v2305 = S;
  v2306 = v2305 + 1;
  S = v2306;
  v2307 = RAM[(v2306 + 256u)];
  A = v2307;
  Z = v2307 == 0;
  N = v2307 >> 7;
  C = 0;
  v2308 = v2307 + 1;
  if (((s8 )v2307) < 0) {
    goto bb23262;
  } else {
    goto bb23251;
  }

bb23262:
  v2310 = 0;
  goto bb23263;

bb23338:
  v2317 = 0;
  goto bb23339;

bb24207:
  *p16 = -77;
  S = v2396;
  RAM[v2396 + 256u] = 24;
  v2474 = v2414;
  v2476 = v2396;
  goto lB34C;

bb5024:
  X = 23;
  Z = 0;
  N = 0;
  goto lA437;

bb4979:
  v414 = X;
  RAM[v414 | 512u] = v411;
  v415 = v414 + 1;
  X = v415;
  v416 = v415 - 89;
  v417 = v416;
  v418 = (v417 >> 8) & 1;
  C = (v418 ^ 1);
  Z = ((v417 & 255u) == 0u);
  N = v416 >> 7;
  if (v418 == 0) {
    goto bb5024;
  } else {
    goto lA562;
  }

lA565:
  v411 = A;
  v412 = v411 - 13;
  v413 = v412;
  C = (((v413 >> 8) & 1) ^ 1);
  Z = ((v413 & 255u) == 0u);
  N = v412 >> 7;
  if ((v413 & 255u) == 0u) {
    goto lAACA;
  } else {
    goto bb4979;
  }

bb9168:
  X = 26;
  v860 = RAM[62];
  Y = v860;
  Z = v860 == 0;
  N = v860 >> 7;
  if (v860 == 0) {
    goto lA437;
  } else {
    goto lA862;
  }

lA857:
  v859 = Z;
  if (v859 == 0) {
    goto lA870;
  } else {
    goto bb9168;
  }

bb9958:
  X = 12;
  v945 = RAM[4514];
  Z = v945 == 0;
  N = v945 >> 7;
  V = ((v945 >> 6) & 1);
  goto lA437;

lA8DB:
  v941 = X;
  S = v941;
  v942 = A;
  v943 = v942 - 141;
  v944 = v943;
  C = (((v944 >> 8) & 1) ^ 1);
  Z = ((v944 & 255u) == 0u);
  N = v943 >> 7;
  if ((v944 & 255u) == 0u) {
    goto lA8EB;
  } else {
    goto bb9958;
  }

lA8E3:
  X = 17;
  Z = 0;
  N = 0;
  goto lA437;

lA8C3:
  v924 = C;
  if (v924 == 0) {
    goto lA8E3;
  } else {
    goto bb9772;
  }

bb13585:
  Y = -1;
  RAM[57] = v1368;
  RAM[58] = -1;
  X = 11;
  Z = 0;
  N = 0;
  goto lA437;

bb13580:
  if (v1369 == 0) {
    goto bb13585;
  } else {
    goto lAB57;
  }

lAB57:
  v1370 = RAM[63];
  A = v1370;
  v1371 = RAM[64];
  Y = v1371;
  RAM[57] = v1370;
  RAM[58] = v1371;
  X = 11;
  Z = 0;
  N = 0;
  goto lA437;

bb13643:
  X = 24;
  Z = 0;
  N = 0;
  goto lA437;

bb14982:
  X = 13;
  v1515 = v1513 + 2;
  Y = v1515;
  v1516 = RAM[122];
  v1517 = RAM[123];
  v1518 = (v1517 << 8u) | v1516;
  v1519 = RAM[(((v1518 + v1515) & 65535u))];
  A = v1519;
  Z = v1519 == 0;
  N = v1519 >> 7;
  if (v1519 == 0) {
    goto lA437;
  } else {
    goto bb15034;
  }

lACBB:
  v1513 = Y;
  Y = (v1513 + 1);
  v1514 = A;
  X = v1514;
  Z = v1514 == 0;
  N = v1514 >> 7;
  if (v1514 == 0) {
    goto bb14982;
  } else {
    goto lACD1;
  }

bb15364:
  X = 10;
  Z = 0;
  N = 0;
  goto lA437;

lAD2E:
  v1545 = Z;
  if (v1545 == 0) {
    goto bb15364;
  } else {
    goto lAD35;
  }

lAD99:
  X = 22;
  Z = 0;
  N = 0;
  goto lA437;

bb15956:
  if (v1596 != 0) {
    goto lAD99;
  } else {
    goto lAD96;
  }

lAD90:
  v1594 = RAM[13];
  Z = v1594 == 0;
  v1595 = (v1594 >> 7);
  N = v1595;
  V = ((v1594 >> 6) & 1);
  v1596 = C;
  if (v1595 == 0) {
    goto bb15956;
  } else {
    goto lAD97;
  }

lA9BA:
  v1091 = S;
  p3 = &RAM[(((v1091 + 1) + 256u))];
  v1093 = *p3;
  v1094 = C;
  v1095 = (v1093 << 1) | (((s16 )(s8 )v1094));
  C = (v1095 >> 8);
  Z = ((v1095 & 255u) == 0u);
  v1096 = v1095;
  N = v1096 >> 7;
  A = v1096;
  *p3 = -87;
  RAM[v1091 + 256u] = -66;
  S = (v1091 - 1);
  goto lAD90;

lAD8D:
  C = 0;
  v1593 = RAM[56];
  Z = v1593 == 0;
  N = v1593 >> 7;
  V = ((v1593 >> 6) & 1);
  goto lAD90;

lA772:
  v762 = S;
  RAM[v762 + 256u] = -89;
  RAM[(v762 - 1) + 256u] = 116;
  S = (v762 - 2);
  goto lAD8D;

bb16661:
  *p6 = -83;
  RAM[v1662 + 256u] = -8;
  S = (v1662 - 1);
  goto lAD8D;

lADF0:
  v1660 = v1661;
  v1662 = S;
  v1663 = v1662 + 1;
  S = v1663;
  p6 = &RAM[(v1663 + 256u)];
  v1665 = *p6;
  A = v1665;
  v1666 = RAM[v1660];
  v1667 = v1665 - v1666;
  v1668 = v1667;
  v1669 = (v1668 >> 8) & 1;
  C = (v1669 ^ 1);
  Z = ((v1668 & 255u) == 0u);
  N = v1667 >> 7;
  if (v1669 == 0) {
    v1731 = v1663;
    v1733 = v1665;
    goto lAE5D;
  } else {
    goto bb16661;
  }

bb16573:
  v1656 = v1657;
  V = v1656;
  v1658 = v1655;
  A = v1658;
  C = (v1655 >> 8) & 1;
  Y = v1658;
  Z = v1658 == 0;
  N = v1658 >> 7;
  v1659 = v1658 + 41088u;
  v1661 = v1659;
  goto lADF0;

bb16561:
  if (((v1654 ^ v1655) & 128u) == 0u) {
    goto bb16572;
  } else {
    v1657 = 1;
    goto bb16573;
  }

bb16494:
  v1648 = v1649;
  V = v1648;
  v1650 = v1647;
  v1651 = (v1650 >> 7);
  RAM[34] = v1650;
  v1652 = v1647 & 255;
  C = v1651;
  v1653 = v1652 << 1;
  Z = ((v1653 & 254u) == 0u);
  N = ((v1650 >> 6) & 1);
  v1654 = v1653;
  A = v1654;
  v1655 = (v1651 + v1652) + (v1653 & 254);
  if (((v1647 ^ v1653) & 128u) == 0u) {
    goto bb16561;
  } else {
    goto bb16572;
  }

bb16482:
  if (((v1645 ^ v1647) & 128u) == 0u) {
    goto bb16493;
  } else {
    v1649 = 1;
    goto bb16494;
  }

lADE8:
  v1647 = ((((v1642 & 255) + 255))) + v1646;
  if (((s8 )v1645) > -1) {
    goto bb16493;
  } else {
    goto bb16482;
  }

bb16443:
  v1643 = v1644;
  V = v1643;
  v1645 = v1642;
  A = v1645;
  Z = v1645 == 0;
  N = v1645 >> 7;
  v1646 = (v1642 >> 8) & 1;
  C = v1646;
  if (v1645 == 0) {
    goto lB63D;
  } else {
    goto lADE8;
  }

bb16431:
  if (((v1638 ^ v1642) & 128u) == 0u) {
    goto bb16442;
  } else {
    v1644 = 1;
    goto bb16443;
  }

bb16413:
  v1641 = RAM[13];
  v1642 = (((v1641 + (v1635 & 255)))) + v1640;
  if (((v1641 ^ v1638) & 128u) == 0u) {
    goto bb16431;
  } else {
    goto bb16442;
  }

bb16384:
  v1636 = v1637;
  V = v1636;
  v1638 = v1635;
  A = v1638;
  Z = v1638 == 0;
  N = v1638 >> 7;
  v1639 = v1635 & 256u;
  v1640 = (v1639 >> 8u);
  C = v1640;
  if (v1639 == 0u) {
    goto lAE58;
  } else {
    goto bb16413;
  }

bb16372:
  if (((v1618 ^ v1635) & 128u) == 0u) {
    goto bb16383;
  } else {
    v1637 = 1;
    goto bb16384;
  }

bb16360:
  v1635 = ((((v1616 & 255) + 7))) + (((s16 )(s8 )v1632));
  if (((s8 )v1618) < 0) {
    goto bb16383;
  } else {
    goto bb16372;
  }

bb16355:
  if (v1632 == 0) {
    goto bb16360;
  } else {
    goto lAE58;
  }

lADD7:
  v1632 = v1633;
  v1634 = RAM[77];
  X = v1634;
  Z = v1634 == 0;
  N = v1634 >> 7;
  if (v1634 == 0) {
    goto bb16355;
  } else {
    goto lAE07;
  }

lADBB:
  C = 1;
  v1615 = A;
  v1616 = v1615 - 177;
  v1617 = v1616;
  V = (((((((v1617 ^ v1615) & 128u) == 0u) | (((s8 )v1615) < 0))&1))) ? 0 : 1;
  v1618 = v1616;
  A = v1618;
  Z = v1618 == 0;
  N = v1618 >> 7;
  v1619 = v1617 & 256u;
  v1620 = (v1619 >> 8u) ^ 1;
  C = v1620;
  if (v1619 == 0u) {
    goto bb16196;
  } else {
    v1633 = v1620;
    goto lADD7;
  }

bb16196:
  v1621 = v1616 & 255;
  v1622 = v1621 - 3;
  v1623 = v1622;
  v1624 = (v1623 >> 8) & 1;
  v1625 = v1624 ^ 1;
  C = v1625;
  Z = ((v1623 & 255u) == 0u);
  N = v1622 >> 7;
  if (v1624 == 0) {
    v1633 = v1625;
    goto lADD7;
  } else {
    goto bb16223;
  }

bb16383:
  v1637 = 0;
  goto bb16384;

bb16442:
  v1644 = 0;
  goto bb16443;

bb16493:
  v1649 = 0;
  goto bb16494;

bb16572:
  v1657 = 0;
  goto bb16573;

lAE11:
  RAM[122] = (v1692 - 1);
  Y = 27;
  Z = 0;
  N = 0;
  RAM[77] = v1691;
  v1661 = 41115u;
  goto lADF0;

lAE07:
  v1689 = RAM[13];
  RAM[13] = (v1689 >> 1);
  v1690 = (v1634 << 1) | (v1689 & 1);
  C = (v1690 >> 8);
  v1691 = v1690;
  A = v1691;
  v1692 = RAM[122];
  X = v1692;
  Z = v1692 == 0;
  N = v1692 >> 7;
  if (v1692 == 0) {
    goto bb16815;
  } else {
    goto lAE11;
  }

bb16815:
  v1693 = RAM[123];
  v1694 = v1693 - 1;
  RAM[123] = v1694;
  Z = (v1693 == 1);
  N = v1694 >> 7;
  goto lAE11;

bb17240:
  RAM[v1730 + 256u] = -82;
  RAM[(v1730 - 1) + 256u] = 99;
  S = (v1730 - 2);
  goto lAD8D;

lAE5D:
  v1730 = v1731;
  v1732 = v1733;
  v1734 = v1732 - 100;
  v1735 = v1734;
  C = (((v1735 >> 8) & 1) ^ 1);
  Z = ((v1735 & 255u) == 0u);
  N = v1734 >> 7;
  if ((v1735 & 255u) == 0u) {
    goto lAE64;
  } else {
    goto bb17240;
  }

lAE5B:
  v1724 = v1725;
  v1726 = v1727;
  v1728 = v1729;
  if (v1724 == 0) {
    v1731 = v1726;
    v1733 = v1728;
    goto lAE5D;
  } else {
    v1749 = v1726;
    goto lAE80;
  }

bb16722:
  X = v1685;
  Z = v1686;
  N = v1687;
  if (v1685 == 0) {
    v1725 = v1686;
    v1727 = v1684;
    v1729 = v1685;
    goto lAE5B;
  } else {
    goto lAE66;
  }

lADFD:
  v1683 = S;
  v1684 = v1683 + 1;
  S = v1684;
  v1685 = RAM[(v1684 + 256u)];
  A = v1685;
  v1686 = v1685 == 0;
  v1687 = (v1685 >> 7);
  v1688 = RAM[75];
  Y = v1688;
  Z = v1688 == 0;
  N = v1688 >> 7;
  if (((s8 )v1688) < 0) {
    goto bb16722;
  } else {
    goto lAE19;
  }

lAE58:
  Y = -1;
  v1720 = S;
  v1721 = v1720 + 1;
  S = v1721;
  v1722 = RAM[(v1721 + 256u)];
  A = v1722;
  v1723 = v1722 == 0;
  Z = v1723;
  N = v1722 >> 7;
  v1725 = v1723;
  v1727 = v1721;
  v1729 = v1722;
  goto lAE5B;

lB1B8:
  v2199 = S;
  RAM[v2199 + 256u] = -79;
  RAM[(v2199 - 1) + 256u] = -70;
  S = (v2199 - 2);
  goto lAD8D;

lB7A1:
  v3209 = S;
  RAM[v3209 + 256u] = -73;
  RAM[(v3209 - 1) + 256u] = -93;
  S = (v3209 - 2);
  goto lB1B8;

lB6EC:
  v3073 = S;
  RAM[v3073 + 256u] = -74;
  RAM[(v3073 - 1) + 256u] = -18;
  S = (v3073 - 2);
  goto lB7A1;

lB3C3:
  v2566 = S;
  RAM[v2566 + 256u] = -77;
  RAM[(v2566 - 1) + 256u] = -59;
  S = (v2566 - 2);
  goto lAD8D;

lB3ED:
  v2580 = A;
  RAM[78] = v2580;
  v2581 = Y;
  RAM[79] = v2581;
  goto lAD8D;

lB400:
  v2587 = S;
  RAM[v2587 + 256u] = -76;
  RAM[(v2587 - 1) + 256u] = 2;
  S = (v2587 - 2);
  goto lAD8D;

lB465:
  v2645 = S;
  RAM[v2645 + 256u] = -76;
  RAM[(v2645 - 1) + 256u] = 103;
  S = (v2645 - 2);
  goto lAD8D;

lAFBA:
  v1913 = S;
  RAM[v1913 + 256u] = -81;
  RAM[(v1913 - 1) + 256u] = -68;
  S = (v1913 - 2);
  C = 1;
  goto lAD90;

lB016:
  v1950 = S;
  RAM[v1950 + 256u] = -80;
  RAM[(v1950 - 1) + 256u] = 24;
  S = (v1950 - 2);
  goto lAD90;

lB646:
  v2936 = S;
  RAM[v2936 + 256u] = -74;
  RAM[(v2936 - 1) + 256u] = 72;
  S = (v2936 - 2);
  C = 1;
  goto lAD90;

lB6A3:
  v3002 = v3003;
  RAM[(v3002 - 1) + 256u] = -74;
  RAM[(v3002 - 2) + 256u] = -91;
  S = (v3002 - 3);
  C = 1;
  goto lAD90;

lB782:
  v3193 = v3194;
  RAM[v3193 + 256u] = -73;
  v3195 = v3193 - 1;
  S = v3195;
  RAM[v3195 + 256u] = -124;
  v3003 = v3195;
  goto lB6A3;

lB77C:
  v3191 = S;
  RAM[v3191 + 256u] = -73;
  RAM[(v3191 - 1) + 256u] = 126;
  v3192 = v3191 - 2;
  S = v3192;
  v3194 = v3192;
  goto lB782;

lB78B:
  v3202 = S;
  RAM[v3202 + 256u] = -73;
  RAM[(v3202 - 1) + 256u] = -115;
  v3203 = v3202 - 2;
  S = v3203;
  v3194 = v3203;
  goto lB782;

lB7AD:
  v3212 = S;
  RAM[v3212 + 256u] = -73;
  RAM[(v3212 - 1) + 256u] = -81;
  v3213 = v3212 - 2;
  S = v3213;
  v3194 = v3213;
  goto lB782;

lE25A:
  v4791 = S;
  RAM[v4791 + 256u] = -30;
  v4792 = v4791 - 1;
  S = v4792;
  RAM[v4792 + 256u] = 92;
  v3003 = v4792;
  goto lB6A3;

lAD97:
  if (v1596 != 0) {
    goto lAD96;
  } else {
    goto lAD99;
  }

lAF08:
  X = 11;
  Z = 0;
  N = 0;
  goto lA437;

lA807:
  v819 = v787 - 58;
  v820 = v819;
  C = (((v820 >> 8) & 1) ^ 1);
  Z = ((v820 & 255u) == 0u);
  N = v819 >> 7;
  if ((v820 & 255u) == 0u) {
    goto lA7E1;
  } else {
    goto lAF08;
  }

lA80E:
  v821 = v810 - 75;
  v822 = v821;
  C = (((v822 >> 8) & 1) ^ 1);
  Z = ((v822 & 255u) == 0u);
  N = v821 >> 7;
  if ((v822 & 255u) == 0u) {
    goto bb8862;
  } else {
    goto lAF08;
  }

bb8700:
  v810 = v805 & 255;
  v811 = v810 - 35;
  v812 = v811;
  v813 = (v812 >> 8) & 1;
  C = (v813 ^ 1);
  Z = ((v812 & 255u) == 0u);
  N = v811 >> 7;
  if (v813 == 0) {
    goto lA80E;
  } else {
    goto bb8727;
  }

lA7EF:
  v803 = A;
  v804 = C;
  v805 = (v803 - 129) + (((s16 )(s8 )v804));
  v806 = v805;
  V = (((((((v806 ^ v803) & 128u) == 0u) | (((s8 )v803) < 0))&1))) ? 0 : 1;
  v807 = v805;
  A = v807;
  Z = v807 == 0;
  v808 = (v807 >> 7);
  N = v808;
  v809 = v806 & 256u;
  C = ((v809 >> 8u) ^ 1);
  if (v809 == 0u) {
    goto bb8700;
  } else {
    goto lA9A5;
  }

lA7ED:
  v802 = Z;
  if (v802 == 0) {
    goto lA7EF;
  } else {
    goto lA82B;
  }

lA7E7:
  v801 = S;
  RAM[v801 + 256u] = -89;
  RAM[(v801 - 1) + 256u] = -23;
  S = (v801 - 2);
  goto lA7ED;

lA943:
  v1017 = C;
  if (v1017 == 0) {
    goto lA8A0;
  } else {
    goto lA7ED;
  }

bb10599:
  v1030 = v1029 + 1;
  S = v1030;
  v1031 = RAM[(v1030 + 256u)];
  A = v1031;
  Z = v1031 == 0;
  N = v1031 >> 7;
  goto lA7EF;

lA957:
  v1027 = RAM[101];
  v1028 = v1027 - 1;
  RAM[101] = v1028;
  Z = (v1027 == 1);
  N = v1028 >> 7;
  v1029 = S;
  if (v1027 == 1) {
    goto bb10599;
  } else {
    goto lA95F;
  }

lA94E:
  v1019 = S;
  v1020 = A;
  RAM[v1019 + 256u] = v1020;
  S = (v1019 - 1);
  v1021 = v1020 - 141;
  v1022 = v1021;
  C = (((v1022 >> 8) & 1) ^ 1);
  Z = ((v1022 & 255u) == 0u);
  N = v1021 >> 7;
  if ((v1022 & 255u) == 0u) {
    goto lA957;
  } else {
    v1024 = v1020;
    goto lA953;
  }

lA953:
  v1023 = v1024;
  v1025 = v1023 - 137;
  v1026 = v1025;
  C = (((v1026 >> 8) & 1) ^ 1);
  Z = ((v1026 & 255u) == 0u);
  N = v1025 >> 7;
  if ((v1026 & 255u) == 0u) {
    goto lA957;
  } else {
    goto lAF08;
  }

bb10720:
  v1045 = A;
  v1046 = (v1045 - 48) + (((s16 )(s8 )v1044));
  V = (((((((v1046 ^ v1045) & 128u) == 0u) | (((s8 )v1045) > -1))&1))) ? 0 : 1;
  RAM[7] = v1046;
  v1047 = RAM[21];
  A = v1047;
  RAM[34] = v1047;
  v1048 = v1047;
  v1049 = v1048 - 25;
  v1050 = v1049;
  v1051 = (v1050 >> 8) & 1;
  C = (v1051 ^ 1);
  Z = ((v1050 & 255u) == 0u);
  N = v1049 >> 7;
  if (v1051 == 0) {
    v1024 = v1047;
    goto lA953;
  } else {
    goto bb10804;
  }

lA971:
  v1044 = C;
  if (v1044 == 0) {
    goto bb10720;
  } else {
    goto lA96A;
  }

lA96B:
  X = 0;
  Z = 1;
  N = 0;
  RAM[20] = 0;
  RAM[21] = 0;
  goto lA971;

lA49C:
  *p1 = -98;
  S = (v254 - 2);
  goto lA96B;

bb3623:
  X = -1;
  Z = 0;
  N = 1;
  RAM[58] = -1;
  v253 = C;
  v254 = S;
  RAM[v254 + 256u] = -92;
  v255 = v254 - 1;
  S = v255;
  p1 = &RAM[(v255 + 256u)];
  if (v253 == 0) {
    goto lA49C;
  } else {
    goto bb3640;
  }

lA48D:
  v252 = A;
  X = v252;
  Z = v252 == 0;
  N = v252 >> 7;
  if (v252 == 0) {
    goto lA480;
  } else {
    goto bb3623;
  }

lA6A4:
  v634 = S;
  RAM[v634 + 256u] = -90;
  RAM[(v634 - 1) + 256u] = -90;
  S = (v634 - 2);
  goto lA96B;

lA69C:
  v629 = C;
  if (v629 == 0) {
    goto lA6A4;
  } else {
    goto bb6823;
  }

bb6823:
  v630 = Z;
  if (v630 == 0) {
    goto bb6828;
  } else {
    goto lA6A4;
  }

bb6828:
  v631 = A;
  v632 = v631 - 171;
  v633 = v632;
  C = (((v633 >> 8) & 1) ^ 1);
  Z = ((v633 & 255u) == 0u);
  N = v632 >> 7;
  if ((v633 & 255u) == 0u) {
    goto lA6A4;
  } else {
    goto lA68D;
  }

lA6B6:
  v643 = S;
  RAM[v643 + 256u] = -90;
  RAM[(v643 - 1) + 256u] = -72;
  S = (v643 - 2);
  goto lA96B;

lA8A0:
  v891 = S;
  RAM[v891 + 256u] = -88;
  RAM[(v891 - 1) + 256u] = -94;
  S = (v891 - 2);
  goto lA96B;

lA89A:
  v890 = S;
  RAM[v890 + 256u] = -88;
  RAM[(v890 - 1) + 256u] = -100;
  S = (v890 - 2);
  goto lA8A0;

lA962:
  v1032 = S;
  RAM[v1032 + 256u] = -87;
  RAM[(v1032 - 1) + 256u] = 100;
  S = (v1032 - 2);
  goto lA96B;

lA965:
  v1033 = A;
  v1034 = v1033 - 44;
  v1035 = v1034;
  C = (((v1035 >> 8) & 1) ^ 1);
  Z = ((v1035 & 255u) == 0u);
  N = v1034 >> 7;
  if ((v1035 & 255u) == 0u) {
    goto lA957;
  } else {
    goto bb10664;
  }

lAB02:
  v1313 = A;
  v1314 = v1313 - 41;
  v1315 = v1314;
  C = (((v1315 >> 8) & 1) ^ 1);
  Z = ((v1315 & 255u) == 0u);
  N = v1314 >> 7;
  if ((v1315 & 255u) == 0u) {
    goto bb13100;
  } else {
    goto lAF08;
  }

bb16223:
  v1626 = RAM[77];
  v1627 = (((((((((v1621 << 1) | ((((((((((((((v1621 - 1) >> 8u))))) & 1))) ^ 1)))))))))) ^ 1))) ^ v1626;
  A = v1627;
  v1628 = v1627 - v1626;
  v1629 = v1628;
  v1630 = (v1629 >> 8) & 1;
  C = (v1630 ^ 1);
  Z = ((v1629 & 255u) == 0u);
  N = v1628 >> 7;
  if (v1630 == 0) {
    goto bb16327;
  } else {
    goto lAF08;
  }

lAEFF:
  v1806 = v1807;
  Y = 0;
  v1808 = RAM[122];
  v1809 = RAM[123];
  v1810 = RAM[(((v1809 << 8u) | v1808))];
  v1811 = v1806 - v1810;
  v1812 = v1811;
  C = (((v1812 >> 8) & 1) ^ 1);
  Z = ((v1812 & 255u) == 0u);
  N = v1811 >> 7;
  if ((v1812 & 255u) == 0u) {
    goto bb18077;
  } else {
    goto lAF08;
  }

bb7990:
  v758 = v759;
  V = v758;
  C = (v757 >> 8) & 1;
  RAM[v755 + 256u] = v757;
  v760 = RAM[58];
  RAM[(v754 - 2) + 256u] = v760;
  v761 = RAM[57];
  RAM[(v754 - 3) + 256u] = v761;
  A = -92;
  Z = 0;
  N = 1;
  RAM[(v754 - 4) + 256u] = -89;
  RAM[(v754 - 5) + 256u] = 113;
  S = (v754 - 6);
  v1807 = -92;
  goto lAEFF;

bb7978:
  if (((v756 ^ v757) & 128u) == 0u) {
    goto bb7989;
  } else {
    v759 = 1;
    goto bb7990;
  }

bb7926:
  v751 = v752;
  V = v751;
  v753 = (v750 >> 8) & 1;
  C = v753;
  v754 = S;
  RAM[v754 + 256u] = v750;
  v755 = v754 - 1;
  S = v755;
  v756 = RAM[123];
  A = v756;
  Z = v756 == 0;
  N = v756 >> 7;
  v757 = v753 + v756;
  if (((s8 )v756) < 0) {
    goto bb7989;
  } else {
    goto bb7978;
  }

bb7914:
  if (((v748 ^ v750) & 128u) == 0u) {
    goto bb7925;
  } else {
    v752 = 1;
    goto bb7926;
  }

lA75D:
  C = 0;
  v748 = Y;
  A = v748;
  Z = v748 == 0;
  N = v748 >> 7;
  v749 = RAM[122];
  v750 = v749 + v748;
  if (((v749 ^ v748) & 128u) == 0u) {
    goto bb7914;
  } else {
    goto bb7925;
  }

bb7925:
  v752 = 0;
  goto bb7926;

bb7989:
  v759 = 0;
  goto bb7990;

lA815:
  A = -92;
  Z = 0;
  N = 1;
  v824 = S;
  RAM[v824 + 256u] = -88;
  RAM[(v824 - 1) + 256u] = 25;
  S = (v824 - 2);
  v1807 = -92;
  goto lAEFF;

bb10448:
  A = -89;
  Z = 0;
  N = 1;
  v1011 = S;
  RAM[v1011 + 256u] = -87;
  RAM[(v1011 - 1) + 256u] = 54;
  S = (v1011 - 2);
  v1807 = -89;
  goto lAEFF;

lA92E:
  v1008 = A;
  v1009 = v1008 - 137;
  v1010 = v1009;
  C = (((v1010 >> 8) & 1) ^ 1);
  Z = ((v1010 & 255u) == 0u);
  N = v1009 >> 7;
  if ((v1010 & 255u) == 0u) {
    goto lA937;
  } else {
    goto bb10448;
  }

lA9A8:
  v1084 = A;
  RAM[73] = v1084;
  v1085 = Y;
  RAM[74] = v1085;
  A = -78;
  Z = 0;
  N = 1;
  v1086 = S;
  RAM[v1086 + 256u] = -87;
  RAM[(v1086 - 1) + 256u] = -80;
  S = (v1086 - 2);
  v1807 = -78;
  goto lAEFF;

bb12412:
  A = 44;
  Z = 0;
  N = 0;
  v1220 = S;
  RAM[v1220 + 256u] = -86;
  RAM[(v1220 - 1) + 256u] = -113;
  S = (v1220 - 2);
  v1807 = 44;
  goto lAEFF;

lAA89:
  v1219 = Z;
  if (v1219 == 0) {
    goto bb12412;
  } else {
    goto lAA90;
  }

lAB88:
  A = 44;
  Z = 0;
  N = 0;
  v1387 = S;
  RAM[v1387 + 256u] = -85;
  RAM[(v1387 - 1) + 256u] = -116;
  S = (v1387 - 2);
  v1807 = 44;
  goto lAEFF;

lABA8:
  A = 44;
  Z = 0;
  N = 0;
  v1399 = S;
  RAM[v1399 + 256u] = -85;
  RAM[(v1399 - 1) + 256u] = -84;
  S = (v1399 - 2);
  v1807 = 44;
  goto lAEFF;

lABC6:
  A = 59;
  Z = 0;
  N = 0;
  v1416 = S;
  RAM[v1416 + 256u] = -85;
  RAM[(v1416 - 1) + 256u] = -54;
  S = (v1416 - 2);
  v1807 = 59;
  goto lAEFF;

bb14932:
  v1511 = S;
  RAM[v1511 + 256u] = -84;
  RAM[(v1511 - 1) + 256u] = -76;
  S = (v1511 - 2);
  A = 44;
  Z = 0;
  N = 0;
  v1807 = 44;
  goto lAEFF;

lAEFC:
  v1803 = v1804;
  v1805 = RAM[11433];
  Z = v1805 == 0;
  N = v1805 >> 7;
  V = ((v1805 >> 6) & 1);
  v1807 = v1803;
  goto lAEFF;

lAEF1:
  v1799 = S;
  RAM[v1799 + 256u] = -82;
  RAM[(v1799 - 1) + 256u] = -13;
  S = (v1799 - 2);
  A = 40;
  Z = 0;
  N = 0;
  v1804 = 40;
  goto lAEFC;

lAEEA:
  v1796 = v1765 - 180;
  v1797 = v1796;
  v1798 = (v1797 >> 8) & 1;
  C = (v1798 ^ 1);
  Z = ((v1797 & 255u) == 0u);
  N = v1796 >> 7;
  if (v1798 == 0) {
    goto lAFA7;
  } else {
    goto lAEF1;
  }

lAEE3:
  v1794 = v1765 - 165;
  v1795 = v1794;
  C = (((v1795 >> 8) & 1) ^ 1);
  Z = ((v1795 & 255u) == 0u);
  N = v1794 >> 7;
  if ((v1795 & 255u) == 0u) {
    goto lB3F4;
  } else {
    goto lAEEA;
  }

lAECC:
  v1789 = v1765 - 168;
  v1790 = v1789;
  C = (((v1790 >> 8) & 1) ^ 1);
  Z = ((v1790 & 255u) == 0u);
  N = v1789 >> 7;
  if ((v1790 & 255u) == 0u) {
    goto bb17786;
  } else {
    goto lAEE3;
  }

lAFD1:
  *p8 = -45;
  S = (v1907 - 2);
  goto lAEF1;

lAFAD:
  v1903 = X;
  v1904 = v1903 - 143;
  v1905 = v1904;
  v1906 = (v1905 >> 8) & 1;
  C = (v1906 ^ 1);
  Z = ((v1905 & 255u) == 0u);
  N = v1904 >> 7;
  v1907 = S;
  RAM[v1907 + 256u] = -81;
  v1908 = v1907 - 1;
  S = v1908;
  p8 = &RAM[(v1908 + 256u)];
  if (v1906 == 0) {
    goto bb19050;
  } else {
    goto lAFD1;
  }

lB3F7:
  v2584 = RAM[79];
  v2585 = S;
  RAM[v2585 + 256u] = v2584;
  v2586 = RAM[78];
  A = v2586;
  Z = v2586 == 0;
  N = v2586 >> 7;
  RAM[(v2585 - 1) + 256u] = v2586;
  RAM[(v2585 - 2) + 256u] = -77;
  RAM[(v2585 - 3) + 256u] = -1;
  S = (v2585 - 4);
  goto lAEF1;

lAEF7:
  A = 41;
  v1802 = RAM[10409];
  Z = v1802 == 0;
  N = v1802 >> 7;
  V = ((v1802 >> 6) & 1);
  v1804 = 41;
  goto lAEFC;

bb22339:
  v2235 = Y;
  RAM[11] = v2235;
  v2236 = S;
  RAM[v2236 + 256u] = -78;
  RAM[(v2236 - 1) + 256u] = 13;
  S = (v2236 - 2);
  goto lAEF7;

lB205:
  v2232 = A;
  v2233 = v2232 - 44;
  v2234 = v2233;
  C = (((v2234 >> 8) & 1) ^ 1);
  Z = ((v2234 & 255u) == 0u);
  N = v2233 >> 7;
  if ((v2234 & 255u) == 0u) {
    goto lB1DB;
  } else {
    goto bb22339;
  }

lB3C6:
  v2567 = S;
  RAM[v2567 + 256u] = -77;
  RAM[(v2567 - 1) + 256u] = -56;
  S = (v2567 - 2);
  goto lAEF7;

lB761:
  v3177 = v3178;
  RAM[v3177 + 256u] = -73;
  RAM[(v3177 - 1) + 256u] = 99;
  S = (v3177 - 2);
  goto lAEF7;

lB700:
  v3082 = S;
  RAM[v3082 + 256u] = -73;
  RAM[(v3082 - 1) + 256u] = 2;
  v3083 = v3082 - 2;
  S = v3083;
  v3178 = v3083;
  goto lB761;

lB72C:
  v3135 = S;
  RAM[v3135 + 256u] = -73;
  RAM[(v3135 - 1) + 256u] = 46;
  v3136 = v3135 - 2;
  S = v3136;
  v3178 = v3136;
  goto lB761;

lB748:
  v3155 = S;
  RAM[v3155 + 256u] = -73;
  RAM[(v3155 - 1) + 256u] = 74;
  v3156 = v3155 - 2;
  S = v3156;
  v3178 = v3156;
  goto lB761;

lB73E:
  v3150 = A;
  v3151 = v3150 - 41;
  v3152 = v3151;
  C = (((v3152 >> 8) & 1) ^ 1);
  Z = ((v3152 & 255u) == 0u);
  N = v3151 >> 7;
  if ((v3152 & 255u) == 0u) {
    goto lB748;
  } else {
    goto bb31070;
  }

bb19050:
  *p8 = -77;
  S = (v1907 - 2);
  A = 40;
  Z = 0;
  N = 0;
  v1804 = 40;
  goto lAEFC;

lB3B9:
  v2563 = S;
  RAM[v2563 + 256u] = -77;
  RAM[(v2563 - 1) + 256u] = -69;
  S = (v2563 - 2);
  A = 40;
  Z = 0;
  N = 0;
  v1804 = 40;
  goto lAEFC;

lAFB7:
  v1912 = S;
  RAM[v1912 + 256u] = -81;
  RAM[(v1912 - 1) + 256u] = -71;
  S = (v1912 - 2);
  A = 44;
  Z = 0;
  N = 0;
  v1807 = 44;
  goto lAEFF;

lB07E:
  RAM[v2015 + 256u] = -80;
  RAM[(v2015 - 1) + 256u] = 128u;
  S = (v2015 - 2);
  A = 44;
  Z = 0;
  N = 0;
  v1807 = 44;
  goto lAEFF;

lB088:
  v2014 = Z;
  v2015 = S;
  if (v2014 == 0) {
    goto lB07E;
  } else {
    goto bb20144;
  }

lB3C9:
  A = -78;
  Z = 0;
  N = 1;
  v2568 = S;
  RAM[v2568 + 256u] = -77;
  RAM[(v2568 - 1) + 256u] = -51;
  S = (v2568 - 2);
  v1807 = -78;
  goto lAEFF;

lB3E1:
  v2575 = v2576;
  A = -91;
  Z = 0;
  N = 1;
  RAM[(v2575 - 1) + 256u] = -77;
  RAM[(v2575 - 2) + 256u] = -27;
  S = (v2575 - 3);
  v1807 = -91;
  goto lAEFF;

lB3B3:
  v2560 = S;
  RAM[v2560 + 256u] = -77;
  v2561 = v2560 - 1;
  S = v2561;
  RAM[v2561 + 256u] = -75;
  v2576 = v2561;
  goto lB3E1;

lB3F4:
  v2582 = S;
  RAM[v2582 + 256u] = -77;
  v2583 = v2582 - 1;
  S = v2583;
  RAM[v2583 + 256u] = -10;
  v2576 = v2583;
  goto lB3E1;

bb31070:
  v3153 = S;
  RAM[v3153 + 256u] = -73;
  RAM[(v3153 - 1) + 256u] = 68;
  S = (v3153 - 2);
  A = 44;
  Z = 0;
  N = 0;
  v1807 = 44;
  goto lAEFF;

lB7F1:
  v3249 = S;
  RAM[v3249 + 256u] = -73;
  RAM[(v3249 - 1) + 256u] = -13;
  S = (v3249 - 2);
  A = 44;
  Z = 0;
  N = 0;
  v1807 = 44;
  goto lAEFF;

bb32392:
  v3290 = S;
  RAM[v3290 + 256u] = -72;
  RAM[(v3290 - 1) + 256u] = 59;
  S = (v3290 - 2);
  goto lB7F1;

lB837:
  v3289 = Z;
  if (v3289 == 0) {
    goto bb32392;
  } else {
    goto lB83C;
  }

lE20E:
  v4757 = v4758;
  RAM[(v4757 - 1) + 256u] = -30;
  RAM[(v4757 - 2) + 256u] = 16;
  S = (v4757 - 3);
  A = 44;
  Z = 0;
  N = 0;
  v1807 = 44;
  goto lAEFF;

lE200:
  v4743 = v4744;
  RAM[v4743 + 256u] = -30;
  v4745 = v4743 - 1;
  S = v4745;
  RAM[v4745 + 256u] = 2;
  v4758 = v4745;
  goto lE20E;

lE1E9:
  v4733 = S;
  RAM[v4733 + 256u] = -31;
  RAM[(v4733 - 1) + 256u] = -21;
  v4734 = v4733 - 2;
  S = v4734;
  v4744 = v4734;
  goto lE200;

lE1F6:
  v4739 = S;
  RAM[v4739 + 256u] = -31;
  RAM[(v4739 - 1) + 256u] = -8;
  v4740 = v4739 - 2;
  S = v4740;
  v4744 = v4740;
  goto lE200;

lE231:
  v4769 = S;
  RAM[v4769 + 256u] = -30;
  RAM[(v4769 - 1) + 256u] = 51;
  v4770 = v4769 - 2;
  S = v4770;
  v4744 = v4770;
  goto lE200;

lE245:
  v4779 = S;
  RAM[v4779 + 256u] = -30;
  RAM[(v4779 - 1) + 256u] = 71;
  v4780 = v4779 - 2;
  S = v4780;
  v4744 = v4780;
  goto lE200;

lE254:
  v4787 = S;
  RAM[v4787 + 256u] = -30;
  v4788 = v4787 - 1;
  S = v4788;
  RAM[v4788 + 256u] = 86;
  v4758 = v4788;
  goto lE20E;

lB09A:
  v2026 = C;
  if (v2026 == 0) {
    goto lAF08;
  } else {
    goto lB09F;
  }

bb20364:
  v2041 = RAM[16];
  A = v2041;
  Z = v2041 == 0;
  N = v2041 >> 7;
  if (v2041 == 0) {
    goto bb20381;
  } else {
    goto lAF08;
  }

lB444:
  v2620 = Z;
  if (v2620 == 0) {
    goto lAF08;
  } else {
    goto lB449;
  }

lE214:
  v4760 = Z;
  if (v4760 == 0) {
    goto lE20D;
  } else {
    goto lAF08;
  }

lB245:
  X = 18;
  v2276 = RAM[3746];
  Z = v2276 == 0;
  N = v2276 >> 7;
  V = ((v2276 >> 6) & 1);
  goto lA437;

lB245_2e_loopexit:
  X = v2269;
  A = v2274;
  C = (v2275 >> 8u);
  Z = v2274 == 0;
  N = v2274 >> 7;
  V = v2272;
  Y = 3;
  goto lB245;

lB21C:
  v2248 = v2249;
  v2250 = v2251;
  v2252 = v2253;
  v2254 = v2255;
  RAM[95] = v2254;
  RAM[96] = v2252;
  v2256 = v2252;
  v2257 = RAM[50];
  if (((v2256 - v2257) & 255u) == 0u) {
    goto bb22457;
  } else {
    goto lB228;
  }

bb22780:
  v2272 = v2273;
  v2274 = v2271;
  v2275 = v2271 & 256u;
  if (v2275 == 0u) {
    v2249 = 3;
    v2251 = v2272;
    v2253 = v2274;
    v2255 = v2269;
    goto lB21C;
  } else {
    goto lB245_2e_loopexit;
  }

bb22768:
  if (((v2270 ^ v2271) & 128u) == 0u) {
    goto bb22779;
  } else {
    v2273 = 1;
    goto bb22780;
  }

bb22678:
  v2269 = v2268;
  v2270 = RAM[(((v2261 + 3u) & 65535u))];
  v2271 = (v2256 + v2270) + ((((v2268 >> 8) & 1)));
  if (((v2252 ^ v2270) & 128u) == 0u) {
    goto bb22768;
  } else {
    goto bb22779;
  }

lB237:
  v2267 = RAM[(((v2261 + 2u) & 65535u))];
  v2268 = v2254 + v2267;
  if (((v2254 ^ v2267) & 128u) == 0u) {
    goto bb22666;
  } else {
    goto bb22678;
  }

lB228:
  v2261 = (v2252 << 8u) | v2254;
  v2262 = RAM[v2261];
  v2263 = RAM[69];
  if (((v2262 - v2263) & 255u) == 0u) {
    goto bb22561;
  } else {
    goto lB237;
  }

bb22457:
  v2258 = RAM[49];
  v2259 = v2254 - v2258;
  v2260 = v2259;
  if ((v2260 & 255u) == 0u) {
    goto lB261;
  } else {
    goto lB228;
  }

bb22561:
  v2264 = RAM[70];
  v2265 = RAM[(((v2261 + 1u) & 65535u))];
  v2266 = (v2264 - v2265);
  if ((v2266 & 255u) == 0u) {
    goto lB24D;
  } else {
    goto lB237;
  }

bb22666:
  goto bb22678;

bb22779:
  v2273 = 0;
  goto bb22780;

lB20E:
  v2237 = S;
  v2238 = v2237 + 1;
  v2239 = RAM[(v2238 + 256u)];
  RAM[13] = v2239;
  v2240 = v2237 + 2;
  S = v2240;
  p15 = &RAM[(v2240 + 256u)];
  v2242 = *p15;
  RAM[14] = v2242;
  v2243 = v2242 & 127;
  RAM[12] = v2243;
  v2244 = RAM[47];
  X = v2244;
  v2245 = RAM[48];
  A = v2245;
  Z = v2245 == 0;
  N = v2245 >> 7;
  v2246 = V;
  v2247 = Y;
  v2249 = v2247;
  v2251 = v2246;
  v2253 = v2245;
  v2255 = v2244;
  goto lB21C;

lB248:
  X = 14;
  Z = 0;
  N = 0;
  goto lA437;

lA9E3:
  v1122 = A;
  v1123 = v1122 - 6;
  v1124 = v1123;
  C = (((v1124 >> 8) & 1) ^ 1);
  Z = ((v1124 & 255u) == 0u);
  N = v1123 >> 7;
  if ((v1124 & 255u) == 0u) {
    goto bb11550;
  } else {
    goto lB248;
  }

lAA22:
  v1157 = C;
  if (v1157 == 0) {
    goto lAA27;
  } else {
    goto lB248;
  }

lB1CC:
  v2207 = Z;
  if (v2207 == 0) {
    goto lB248;
  } else {
    goto lBC9B;
  }

lB1BB:
  v2200 = RAM[102];
  A = v2200;
  Z = v2200 == 0;
  N = v2200 >> 7;
  if (((s8 )v2200) < 0) {
    goto lB1CC;
  } else {
    goto lB1BF;
  }

lB78E:
  v3204 = Z;
  if (v3204 == 0) {
    goto bb31602;
  } else {
    goto lB248;
  }

lB7A4:
  v3210 = RAM[100];
  X = v3210;
  Z = v3210 == 0;
  N = v3210 >> 7;
  if (v3210 == 0) {
    goto bb31695;
  } else {
    goto lB248;
  }

lB7F7:
  v3250 = v3251;
  v3252 = RAM[102];
  A = v3252;
  Z = v3252 == 0;
  N = v3252 >> 7;
  if (((s8 )v3252) < 0) {
    goto lB248;
  } else {
    goto bb32065;
  }

lB7EE:
  v3247 = S;
  RAM[v3247 + 256u] = -73;
  RAM[(v3247 - 1) + 256u] = -16;
  v3248 = v3247 - 2;
  S = v3248;
  v3251 = v3248;
  goto lB7F7;

lB80D:
  v3264 = RAM[21];
  v3265 = S;
  RAM[v3265 + 256u] = v3264;
  v3266 = RAM[20];
  A = v3266;
  Z = v3266 == 0;
  N = v3266 >> 7;
  RAM[(v3265 - 1) + 256u] = v3266;
  RAM[(v3265 - 2) + 256u] = -72;
  RAM[(v3265 - 3) + 256u] = 21;
  v3267 = v3265 - 4;
  S = v3267;
  v3251 = v3267;
  goto lB7F7;

lE12D:
  v4652 = S;
  RAM[v4652 + 256u] = -31;
  RAM[(v4652 - 1) + 256u] = 47;
  v4653 = v4652 - 2;
  S = v4653;
  v3251 = v4653;
  goto lB7F7;

bb32065:
  v3253 = RAM[97];
  A = v3253;
  v3254 = v3253 - 145;
  v3255 = v3254;
  v3256 = (v3255 >> 8) & 1;
  C = (v3256 ^ 1);
  Z = ((v3255 & 255u) == 0u);
  N = v3254 >> 7;
  if (v3256 == 0) {
    goto lB248;
  } else {
    goto bb32104;
  }

lB9ED:
  v3648 = Z;
  if (v3648 == 0) {
    goto bb35233;
  } else {
    goto lB248;
  }

bb35233:
  v3649 = N;
  if (v3649 == 0) {
    goto lB9F4;
  } else {
    goto lB248;
  }

lB24D:
  C = (((v2266 >> 8) & 1) ^ 1);
  V = v2250;
  Y = 1;
  X = 19;
  A = v2243;
  Z = v2243 == 0;
  N = 0;
  if (v2243 == 0) {
    goto bb22883;
  } else {
    goto lA437;
  }

bb25382:
  X = 21;
  v2559 = RAM[7074];
  Z = v2559 == 0;
  N = v2559 >> 7;
  V = ((v2559 >> 6) & 1);
  goto lA437;

lB3A6:
  v2557 = RAM[58];
  v2558 = v2557 + 1;
  X = v2558;
  Z = v2558 == 0;
  N = v2558 >> 7;
  if (v2558 == 0) {
    goto bb25382;
  } else {
    goto lB34B;
  }

lAB7B:
  v1381 = S;
  RAM[v1381 + 256u] = -85;
  RAM[(v1381 - 1) + 256u] = 125;
  S = (v1381 - 2);
  goto lB3A6;

lABCE:
  v1418 = S;
  RAM[v1418 + 256u] = -85;
  RAM[(v1418 - 1) + 256u] = -48;
  S = (v1418 - 2);
  goto lB3A6;

lABB2:
  v1403 = S;
  RAM[v1403 + 256u] = -85;
  RAM[(v1403 - 1) + 256u] = -76;
  S = (v1403 - 2);
  goto lABCE;

lB3B6:
  v2562 = S;
  RAM[v2562 + 256u] = -77;
  RAM[(v2562 - 1) + 256u] = -72;
  S = (v2562 - 2);
  goto lB3A6;

lB3AE:
  X = 27;
  Z = 0;
  N = 0;
  goto lA437;

lB403:
  v2588 = S;
  v2589 = RAM[(((v2588 + 1) + 256u))];
  RAM[78] = v2589;
  v2590 = v2588 + 2;
  S = v2590;
  v2591 = RAM[(v2590 + 256u)];
  RAM[79] = v2591;
  v2592 = (v2591 << 8u) | v2589;
  v2593 = RAM[(((v2592 + 2u) & 65535u))];
  RAM[71] = v2593;
  X = v2593;
  Y = 3;
  v2594 = RAM[(((v2592 + 3u) & 65535u))];
  A = v2594;
  Z = v2594 == 0;
  N = v2594 >> 7;
  if (v2594 == 0) {
    goto lB3AE;
  } else {
    goto bb25849;
  }

bb26939:
  X = 25;
  Z = 0;
  N = 0;
  goto lA437;

lB4CA:
  v2709 = RAM[22];
  X = v2709;
  v2710 = v2709 - 34;
  v2711 = v2710;
  C = (((v2711 >> 8) & 1) ^ 1);
  Z = ((v2711 & 255u) == 0u);
  N = v2710 >> 7;
  if ((v2711 & 255u) == 0u) {
    goto bb26939;
  } else {
    goto lB4D5;
  }

lB674:
  v2962 = S;
  RAM[v2962 + 256u] = -74;
  RAM[(v2962 - 1) + 256u] = 118;
  S = (v2962 - 2);
  goto lB4CA;

lB6F6:
  v3076 = S;
  v3077 = RAM[(((v3076 + 1) + 256u))];
  Y = 0;
  v3078 = RAM[98];
  v3079 = RAM[99];
  RAM[(v3079 << 8u) | v3078] = v3077;
  v3080 = v3076 + 3;
  S = v3080;
  v3081 = RAM[(v3080 + 256u)];
  A = v3081;
  Z = v3081 == 0;
  N = v3081 >> 7;
  goto lB4CA;

bb29427:
  X = 23;
  Z = 0;
  N = 0;
  goto lA437;

lB97E:
  X = 15;
  Z = 0;
  N = 0;
  goto lA437;

lB938:
  v3516 = RAM[97];
  v3517 = v3516 + 1;
  RAM[97] = v3517;
  Z = v3517 == 0;
  N = v3517 >> 7;
  if (v3517 == 0) {
    goto lB97E;
  } else {
    goto bb34225;
  }

bb33881:
  v3466 = v3467;
  V = v3466;
  v3468 = v3465;
  A = v3468;
  Z = v3468 == 0;
  N = v3468 >> 7;
  v3469 = (v3465 >> 8) & 1;
  C = v3469;
  RAM[98] = v3468;
  if (v3469 == 0) {
    goto lB946;
  } else {
    goto lB938;
  }

bb33869:
  if (((v3463 ^ v3465) & 128u) == 0u) {
    goto bb33880;
  } else {
    v3467 = 1;
    goto bb33881;
  }

bb33814:
  v3460 = v3461;
  V = v3460;
  v3462 = (v3459 >> 8) & 1;
  C = v3462;
  RAM[99] = v3459;
  v3463 = RAM[98];
  A = v3463;
  Z = v3463 == 0;
  N = v3463 >> 7;
  v3464 = RAM[106];
  v3465 = (v3464 + v3463) + v3462;
  if (((v3464 ^ v3463) & 128u) == 0u) {
    goto bb33869;
  } else {
    goto bb33880;
  }

bb33802:
  if (((v3457 ^ v3459) & 128u) == 0u) {
    goto bb33813;
  } else {
    v3461 = 1;
    goto bb33814;
  }

bb33747:
  v3454 = v3455;
  V = v3454;
  v3456 = (v3453 >> 8) & 1;
  C = v3456;
  RAM[100] = v3453;
  v3457 = RAM[99];
  A = v3457;
  Z = v3457 == 0;
  N = v3457 >> 7;
  v3458 = RAM[107];
  v3459 = (v3458 + v3457) + v3456;
  if (((v3458 ^ v3457) & 128u) == 0u) {
    goto bb33802;
  } else {
    goto bb33813;
  }

bb33735:
  if (((v3451 ^ v3453) & 128u) == 0u) {
    goto bb33746;
  } else {
    v3455 = 1;
    goto bb33747;
  }

bb33680:
  v3448 = v3449;
  V = v3448;
  v3450 = (v3447 >> 8) & 1;
  C = v3450;
  RAM[101] = v3447;
  v3451 = RAM[100];
  A = v3451;
  Z = v3451 == 0;
  N = v3451 >> 7;
  v3452 = RAM[108];
  v3453 = (v3452 + v3451) + v3450;
  if (((v3452 ^ v3451) & 128u) == 0u) {
    goto bb33735;
  } else {
    goto bb33746;
  }

bb33668:
  if (((v3445 ^ v3447) & 128u) == 0u) {
    goto bb33679;
  } else {
    v3449 = 1;
    goto bb33680;
  }

bb33613:
  v3442 = v3443;
  V = v3442;
  v3444 = (v3441 >> 8) & 1;
  C = v3444;
  RAM[112] = v3441;
  v3445 = RAM[101];
  A = v3445;
  Z = v3445 == 0;
  N = v3445 >> 7;
  v3446 = RAM[109];
  v3447 = (v3446 + v3445) + v3444;
  if (((v3446 ^ v3445) & 128u) == 0u) {
    goto bb33668;
  } else {
    goto bb33679;
  }

bb33601:
  if (((v3438 ^ v3441) & 128u) == 0u) {
    goto bb33612;
  } else {
    v3443 = 1;
    goto bb33613;
  }

lB8FE:
  v3438 = A;
  v3439 = RAM[86];
  v3440 = C;
  v3441 = (v3439 + v3438) + (((s16 )(s8 )v3440));
  if (((v3439 ^ v3438) & 128u) == 0u) {
    goto bb33601;
  } else {
    goto bb33612;
  }

lB8A3:
  v3351 = RAM[111];
  Z = v3351 == 0;
  v3352 = (v3351 >> 7);
  N = v3352;
  V = ((v3351 >> 6) & 1);
  if (v3352 == 0) {
    goto lB8FE;
  } else {
    goto bb32940;
  }

lB865:
  v3313 = C;
  if (v3313 == 0) {
    goto lB8A3;
  } else {
    goto lB867;
  }

bb32685:
  v3326 = v3327;
  V = v3326;
  v3328 = v3324;
  A = v3328;
  Z = v3328 == 0;
  N = v3328 >> 7;
  v3329 = (v3325 >> 8) & 1;
  v3330 = v3329 ^ 1;
  C = v3330;
  if (v3328 == 0) {
    goto lB8A3;
  } else {
    goto bb32709;
  }

bb32673:
  if (((v3323 ^ v3319) & 128u) == 0u) {
    goto bb32684;
  } else {
    v3327 = 1;
    goto bb32685;
  }

bb32654:
  C = 1;
  v3323 = RAM[97];
  v3324 = ((((v3319 - 1) - v3323))) + 1;
  v3325 = v3324;
  if (((v3325 ^ v3319) & 128u) == 0u) {
    goto bb32684;
  } else {
    goto bb32673;
  }

lB877:
  v3319 = v3320;
  v3321 = v3322;
  Y = v3319;
  Z = v3319 == 0;
  N = v3319 >> 7;
  if (v3319 == 0) {
    goto lB848;
  } else {
    goto bb32654;
  }

lB86F:
  v3317 = RAM[112];
  RAM[86] = v3317;
  X = 105;
  v3318 = RAM[105];
  A = v3318;
  Z = v3318 == 0;
  N = v3318 >> 7;
  v3320 = v3318;
  v3322 = 105;
  goto lB877;

lB853:
  v3307 = RAM[102];
  v3308 = v3307 ^ -1;
  RAM[102] = v3308;
  v3309 = RAM[110];
  RAM[111] = (v3309 ^ v3308);
  v3310 = RAM[97];
  A = v3310;
  Z = v3310 == 0;
  N = v3310 >> 7;
  if (v3310 == 0) {
    goto lBBFC;
  } else {
    goto lB86F;
  }

bb43878:
  X = v4540;
  Y = v4539;
  v4541 = RAM[86];
  A = v4541;
  Z = v4541 == 0;
  N = v4541 >> 7;
  RAM[112] = v4541;
  RAM[v4531 + 256u] = -32;
  RAM[(v4530 - 2) + 256u] = 47;
  S = (v4530 - 3);
  goto lB853;

lE01E:
  v4532 = v4533;
  v4534 = 5 - v4532;
  v4535 = v4534;
  p37 = &RAM[(((v4535 + 105u) & 255u))];
  v4537 = *p37;
  p38 = &RAM[(((v4535 + 97u) & 255u))];
  v4539 = *p38;
  *p38 = v4537;
  *p37 = v4539;
  v4540 = v4534 - 1;
  if (((s8 )v4540) < 0) {
    goto bb43878;
  } else {
    v4533 = (v4532 + 1);
    goto lE01E;
  }

bb43754:
  C = 1;
  v4527 = (v4523 & 255) - 1;
  v4528 = v4527;
  V = (((((((v4528 ^ v4526) & 128u) == 0u) | (((s8 )v4526) > -1))&1))) ? 0 : 1;
  v4529 = v4527;
  A = v4529;
  C = (((v4528 >> 8) & 1) ^ 1);
  v4530 = S;
  RAM[v4530 + 256u] = v4529;
  v4531 = v4530 - 1;
  S = v4531;
  X = 5;
  Z = 0;
  N = 0;
  v4533 = 0;
  goto lE01E;

bb43725:
  v4524 = v4525;
  V = v4524;
  v4526 = v4523;
  A = v4526;
  Z = v4526 == 0;
  N = v4526 >> 7;
  C = (v4523 >> 8) & 1;
  if (v4526 == 0) {
    goto lE00B;
  } else {
    goto bb43754;
  }

bb43713:
  if (((v4522 ^ v4523) & 128u) == 0u) {
    goto bb43724;
  } else {
    v4525 = 1;
    goto bb43725;
  }

lE011:
  v4522 = RAM[7];
  A = v4522;
  Z = v4522 == 0;
  N = v4522 >> 7;
  C = 0;
  v4523 = v4522 + 129;
  if (((s8 )v4522) > -1) {
    goto bb43724;
  } else {
    goto bb43713;
  }

bb43724:
  v4525 = 0;
  goto bb43725;

lE27D:
  A = 0;
  Z = 1;
  N = 0;
  RAM[111] = 0;
  v4803 = S;
  RAM[v4803 + 256u] = -30;
  RAM[(v4803 - 1) + 256u] = -125;
  S = (v4803 - 2);
  goto lB853;

lB86A:
  v3316 = Z;
  if (v3316 == 0) {
    goto lB86F;
  } else {
    goto lBBFC;
  }

lBD86:
  v4273 = RAM[110];
  v4274 = RAM[102];
  v4275 = v4273 ^ v4274;
  A = v4275;
  RAM[111] = v4275;
  v4276 = RAM[97];
  X = v4276;
  Z = v4276 == 0;
  N = v4276 >> 7;
  if (v4276 == 0) {
    goto lBBFC;
  } else {
    goto lB86F;
  }

lBAED:
  v3807 = v3808;
  X = 0;
  Z = 1;
  N = 0;
  RAM[111] = 0;
  v3809 = S;
  RAM[v3809 + 256u] = -70;
  RAM[(v3809 - 1) + 256u] = -13;
  S = (v3809 - 2);
  v3320 = v3807;
  v3322 = 0;
  goto lB877;

bb11646:
  v1138 = v1137 + 1;
  X = v1138;
  A = v1138;
  Z = v1138 == 0;
  N = v1138 >> 7;
  v1139 = S;
  RAM[v1139 + 256u] = -86;
  RAM[(v1139 - 1) + 256u] = 6;
  S = (v1139 - 2);
  v3808 = v1138;
  goto lBAED;

lA9FF:
  v1137 = A;
  X = v1137;
  Z = v1137 == 0;
  N = v1137 >> 7;
  if (v1137 == 0) {
    goto lAA07;
  } else {
    goto bb11646;
  }

bb36749:
  v3803 = v3804;
  V = v3803;
  v3805 = v3802;
  A = v3805;
  Z = v3805 == 0;
  N = v3805 >> 7;
  v3806 = v3802 & 256u;
  C = (v3806 >> 8u);
  if (v3806 == 0u) {
    v3808 = v3805;
    goto lBAED;
  } else {
    goto lB97E;
  }

bb36737:
  if (((v3801 ^ v3802) & 128u) == 0u) {
    goto bb36748;
  } else {
    v3804 = 1;
    goto bb36749;
  }

bb36725:
  C = 0;
  v3802 = v3801 + 2;
  if (((s8 )v3801) < 0) {
    goto bb36748;
  } else {
    goto bb36737;
  }

lBAE5:
  v3801 = A;
  X = v3801;
  Z = v3801 == 0;
  N = v3801 >> 7;
  if (v3801 == 0) {
    goto lBAF8;
  } else {
    goto bb36725;
  }

bb36748:
  v3804 = 0;
  goto bb36749;

bb32684:
  v3327 = 0;
  goto bb32685;

bb33612:
  v3443 = 0;
  goto bb33613;

bb33679:
  v3449 = 0;
  goto bb33680;

bb33746:
  v3455 = 0;
  goto bb33747;

bb33813:
  v3461 = 0;
  goto bb33814;

bb33880:
  v3467 = 0;
  goto bb33881;

bb34178:
  v3512 = v3513;
  V = v3512;
  v3514 = v3511;
  A = v3514;
  Z = v3514 == 0;
  N = v3514 >> 7;
  v3515 = (v3511 >> 8) & 1;
  C = v3515;
  RAM[97] = v3514;
  if (v3515 == 0) {
    goto lB946;
  } else {
    goto lB938;
  }

bb34166:
  if (((v3510 ^ v3511) & 128u) == 0u) {
    goto bb34177;
  } else {
    v3513 = 1;
    goto bb34178;
  }

bb34142:
  v3510 = v3507 ^ -1;
  A = v3510;
  Z = (v3507 == 0xff);
  N = v3510 >> 7;
  v3511 = (v3510 + 1) + v3509;
  if (((s8 )v3507) > -1) {
    goto bb34177;
  } else {
    goto bb34166;
  }

bb34118:
  v3505 = v3506;
  V = v3505;
  v3507 = v3503;
  A = v3507;
  Z = v3507 == 0;
  N = v3507 >> 7;
  v3508 = v3504 & 256u;
  v3509 = (v3508 >> 8u) ^ 1;
  C = v3509;
  if (v3508 == 0u) {
    goto lB8F7;
  } else {
    goto bb34142;
  }

bb34106:
  if (((v3502 ^ v3500) & 128u) == 0u) {
    goto bb34117;
  } else {
    v3506 = 1;
    goto bb34118;
  }

bb34087:
  v3500 = v3501;
  C = 1;
  v3502 = RAM[97];
  v3503 = ((((v3500 - 1) - v3502))) + 1;
  v3504 = v3503;
  if (((v3504 ^ v3500) & 128u) == 0u) {
    goto bb34117;
  } else {
    goto bb34106;
  }

lB929_2e_preheader:
  v3421 = (v3419 >> 7);
  RAM[98] = v3419;
  X = v3419;
  Z = v3419 == 0;
  N = v3421;
  V = v3417;
  A = v3415;
  C = v3413;
  RAM[99] = v3411;
  RAM[100] = v3409;
  RAM[101] = v3407;
  RAM[112] = v3405;
  if (v3421 == 0) {
    v3471 = v3419;
    v3473 = v3411;
    v3475 = v3409;
    v3477 = v3407;
    v3479 = v3405;
    v3481 = v3413;
    v3483 = v3415;
    goto lB91D;
  } else {
    v3501 = v3415;
    goto bb34087;
  }

lB8DB:
  v3405 = v3406;
  v3407 = v3408;
  v3409 = v3410;
  v3411 = v3412;
  v3413 = v3414;
  v3415 = v3416;
  v3417 = v3418;
  v3419 = v3420;
  if (v3419 == 0) {
    goto bb33423;
  } else {
    goto lB929_2e_preheader;
  }

bb33500:
  v3423 = v3424;
  v3425 = v3422;
  v3426 = (v3422 & 255) - 32;
  v3427 = v3426;
  v3428 = ((v3427 >> 8) & 1) ^ 1;
  if ((v3427 & 255u) == 0u) {
    goto lB8F7_2e_loopexit;
  } else {
    v3406 = 0;
    v3408 = v3405;
    v3410 = v3407;
    v3412 = v3409;
    v3414 = v3428;
    v3416 = v3425;
    v3418 = v3423;
    v3420 = v3411;
    goto lB8DB;
  }

bb33488:
  if (((v3415 ^ v3422) & 128u) == 0u) {
    goto bb33499;
  } else {
    v3424 = 1;
    goto bb33500;
  }

bb33423:
  v3422 = (v3415 + 8) + (((s16 )(s8 )v3413));
  if (((s8 )v3415) < 0) {
    goto bb33499;
  } else {
    goto bb33488;
  }

bb33499:
  v3424 = 0;
  goto bb33500;

lB8D7:
  Y = 0;
  A = 0;
  Z = 1;
  N = 0;
  C = 0;
  v3399 = RAM[98];
  v3400 = V;
  v3401 = RAM[99];
  v3402 = RAM[100];
  v3403 = RAM[101];
  v3404 = RAM[112];
  v3406 = v3404;
  v3408 = v3403;
  v3410 = v3402;
  v3412 = v3401;
  v3414 = 0;
  v3416 = 0;
  v3418 = v3400;
  v3420 = v3399;
  goto lB8DB;

bb33348:
  v3391 = v3392;
  V = v3391;
  v3393 = v3389;
  A = v3393;
  Z = v3393 == 0;
  N = v3393 >> 7;
  v3394 = (v3390 >> 8) & 1;
  C = (v3394 ^ 1);
  RAM[98] = v3393;
  if (v3394 == 0) {
    goto lB8D7;
  } else {
    goto bb33373;
  }

bb33331:
  if (((v3388 ^ v3387) & 128u) == 0u) {
    goto bb33347;
  } else {
    v3392 = 1;
    goto bb33348;
  }

bb33270:
  v3384 = v3385;
  V = v3384;
  v3386 = ((v3383 >> 8) & 1) ^ 1;
  C = v3386;
  RAM[99] = v3382;
  v3387 = RAM[(v3356 + 1u)];
  A = v3387;
  Z = v3387 == 0;
  N = v3387 >> 7;
  v3388 = RAM[(((v3366 + 1u) & 255u))];
  v3389 = ((((v3387 - 1) - v3388))) + v3386;
  v3390 = v3389;
  if (((v3390 ^ v3387) & 128u) == 0u) {
    goto bb33347;
  } else {
    goto bb33331;
  }

bb33253:
  if (((v3381 ^ v3380) & 128u) == 0u) {
    goto bb33269;
  } else {
    v3385 = 1;
    goto bb33270;
  }

bb33192:
  v3377 = v3378;
  V = v3377;
  v3379 = ((v3376 >> 8) & 1) ^ 1;
  C = v3379;
  RAM[100] = v3375;
  v3380 = RAM[(v3356 + 2u)];
  A = v3380;
  Z = v3380 == 0;
  N = v3380 >> 7;
  v3381 = RAM[(((v3366 + 2u) & 255u))];
  v3382 = ((((v3380 - 1) - v3381))) + v3379;
  v3383 = v3382;
  if (((v3383 ^ v3380) & 128u) == 0u) {
    goto bb33269;
  } else {
    goto bb33253;
  }

bb33175:
  if (((v3374 ^ v3373) & 128u) == 0u) {
    goto bb33191;
  } else {
    v3378 = 1;
    goto bb33192;
  }

bb33114:
  v3370 = v3371;
  V = v3370;
  v3372 = ((v3369 >> 8) & 1) ^ 1;
  C = v3372;
  RAM[101] = v3368;
  v3373 = RAM[(v3356 + 3u)];
  A = v3373;
  Z = v3373 == 0;
  N = v3373 >> 7;
  v3374 = RAM[(((v3366 + 3u) & 255u))];
  v3375 = ((((v3373 - 1) - v3374))) + v3372;
  v3376 = v3375;
  if (((v3376 ^ v3373) & 128u) == 0u) {
    goto bb33191;
  } else {
    goto bb33175;
  }

bb33097:
  if (((v3367 ^ v3365) & 128u) == 0u) {
    goto bb33113;
  } else {
    v3371 = 1;
    goto bb33114;
  }

bb33031:
  v3362 = v3363;
  V = v3362;
  v3364 = (v3361 >> 8) & 1;
  C = v3364;
  RAM[112] = v3361;
  v3365 = RAM[(v3356 + 4u)];
  A = v3365;
  Z = v3365 == 0;
  N = v3365 >> 7;
  v3366 = v3353;
  v3367 = RAM[(((v3366 + 4u) & 255u))];
  v3368 = ((((v3365 - 1) - v3367))) + v3364;
  v3369 = v3368;
  if (((v3369 ^ v3365) & 128u) == 0u) {
    goto bb33113;
  } else {
    goto bb33097;
  }

bb33019:
  if (((v3359 ^ v3361) & 128u) == 0u) {
    goto bb33030;
  } else {
    v3363 = 1;
    goto bb33031;
  }

lB8AF:
  v3356 = v3357;
  C = 1;
  v3358 = A;
  v3359 = v3358 ^ -1;
  A = v3359;
  Z = (v3358 == 0xff);
  N = v3359 >> 7;
  v3360 = RAM[86];
  v3361 = (v3360 + v3359) + 1;
  if (((v3360 ^ v3359) & 128u) == 0u) {
    goto bb33019;
  } else {
    goto bb33030;
  }

bb32940:
  Y = 97;
  v3353 = X;
  v3354 = v3353 - 105;
  v3355 = v3354;
  C = (((v3355 >> 8) & 1) ^ 1);
  Z = ((v3355 & 255u) == 0u);
  N = v3354 >> 7;
  if ((v3355 & 255u) == 0u) {
    v3357 = 97u;
    goto lB8AF;
  } else {
    goto bb32978;
  }

bb32978:
  Y = 105;
  Z = 0;
  N = 0;
  v3357 = 105u;
  goto lB8AF;

bb33030:
  v3363 = 0;
  goto bb33031;

bb33113:
  v3371 = 0;
  goto bb33114;

bb33191:
  v3378 = 0;
  goto bb33192;

bb33269:
  v3385 = 0;
  goto bb33270;

bb33347:
  v3392 = 0;
  goto bb33348;

lBB8F:
  v3953 = RAM[38];
  RAM[98] = v3953;
  v3954 = RAM[39];
  RAM[99] = v3954;
  v3955 = RAM[40];
  RAM[100] = v3955;
  v3956 = RAM[41];
  A = v3956;
  Z = v3956 == 0;
  N = v3956 >> 7;
  RAM[101] = v3956;
  goto lB8D7;

lBB7E:
  Y = v3882;
  X = v3905;
  v3951 = (((((((((((((((((((((((((((v3904 << 1) & 254))) << 1))) & 252))) << 1))) & 248))) << 1))) & 240))) << 2))) & 448));
  A = v3951;
  RAM[112] = v3951;
  S = v3846;
  v3952 = RAM[(v3846 + 256u)];
  N = v3952 >> 7;
  V = ((v3952 >> 6) & 1);
  B = ((v3952 >> 4) & 1);
  D = ((v3952 >> 3) & 1);
  I = ((v3952 >> 2) & 1);
  Z = ((v3952 >> 1) & 1);
  C = (v3952 & 1);
  goto lBB8F;

lBB29:
  v3847 = v3848;
  v3849 = v3850;
  v3851 = v3852;
  v3853 = v3854;
  v3855 = v3856;
  v3857 = v3858;
  v3859 = RAM[106];
  v3860 = RAM[98];
  v3861 = v3859 - v3860;
  if ((v3861 & 255u) == 0u) {
    goto bb37068;
  } else {
    v3872 = v3859;
    v3874 = v3861;
    v3876 = (v3861 & 255u) == 0u;
    v3878 = v3861;
    goto lBB3F_2e_preheader;
  }

lBB3F:
  v3882 = v3883;
  v3884 = v3885;
  v3886 = v3887;
  v3888 = v3889;
  v3890 = v3891;
  v3892 = v3893;
  v3894 = v3895;
  v3896 = v3897;
  v3898 = v3899;
  v3900 = v3901;
  p32 = &RAM[(v3846 + 256u)];
  *p32 = (((((((((((((((((v3898 << 6) | (v3900 << 7)))) | (v3896 << 4)))) | (v3894 << 3)))) | (v3892 << 2)))) | v3888))) | (v3890 << 1));
  v3903 = (v3886 << 1) | (((s16 )(s8 )v3888));
  v3904 = v3903;
  if ((v3903 >> 8) == 0) {
    v3908 = v3884;
    v3910 = v3904;
    goto lBB4C;
  } else {
    goto bb37254;
  }

lBB4F:
  v3917 = v3918;
  v3919 = v3920;
  v3921 = v3922;
  v3923 = RAM[109];
  RAM[109] = (v3923 << 1);
  v3924 = RAM[108];
  v3925 = (v3924 << 1) | (v3923 >> 7);
  RAM[108] = v3925;
  v3926 = RAM[107];
  v3927 = (v3926 << 1) | (v3925 >> 8);
  RAM[107] = v3927;
  v3928 = RAM[106];
  v3929 = (v3928 << 1) | (v3927 >> 8);
  v3930 = (v3929 >> 8);
  v3931 = (v3929 & 255u) == 0u;
  v3932 = v3929;
  v3933 = (v3932 >> 7);
  RAM[106] = v3932;
  if ((((((v3930 == 0) ^ 1)&1)) | (v3933 == 0))&1) {
    v3883 = v3917;
    v3885 = v3907;
    v3887 = v3919;
    v3889 = v3930;
    v3891 = v3931;
    v3893 = v3915;
    v3895 = v3914;
    v3897 = v3913;
    v3899 = v3921;
    v3901 = v3933;
    goto lBB3F;
  } else {
    v3848 = v3907;
    v3850 = v3919;
    v3852 = v3915;
    v3854 = v3914;
    v3856 = v3913;
    v3858 = v3921;
    goto lBB29;
  }

lBB4C:
  v3907 = v3908;
  v3909 = v3910;
  v3911 = *p32;
  v3912 = (v3911 >> 6) & 1;
  v3913 = (v3911 >> 4) & 1;
  v3914 = (v3911 >> 3) & 1;
  v3915 = (v3911 >> 2) & 1;
  v3916 = v3911 & 1;
  if (v3916 == 0) {
    v3918 = v3882;
    v3920 = v3909;
    v3922 = v3912;
    goto lBB4F;
  } else {
    goto lBB5D;
  }

bb37254:
  v3905 = v3884 + 1;
  v3906 = (v3905 >> 7);
  RAM[(v3905 + 41u) & 255u] = v3904;
  if (v3905 == 0) {
    v3908 = v3905;
    v3910 = 64;
    goto lBB4C;
  } else {
    goto bb37278;
  }

bb37278:
  if (v3906 == 0) {
    goto lBB7E;
  } else {
    v3908 = v3905;
    v3910 = 1;
    goto lBB4C;
  }

bb37685:
  v3949 = v3950;
  RAM[106] = v3948;
  v3918 = v3909;
  v3920 = v3909;
  v3922 = v3949;
  goto lBB4F;

bb37673:
  if (((v3947 ^ v3946) & 128u) == 0u) {
    goto bb37684;
  } else {
    v3950 = 1;
    goto bb37685;
  }

bb37622:
  RAM[107] = v3944;
  v3946 = RAM[106];
  v3947 = RAM[98];
  v3948 = ((((v3946 - 1) - v3947))) + (((((((v3945 >> 8) & 1) ^ 1)))));
  if (((v3948 ^ v3946) & 128u) == 0u) {
    goto bb37684;
  } else {
    goto bb37673;
  }

bb37559:
  RAM[108] = v3940;
  v3942 = RAM[107];
  v3943 = RAM[99];
  v3944 = ((((v3942 - 1) - v3943))) + (((((((v3941 >> 8) & 1) ^ 1)))));
  v3945 = v3944;
  if (((v3945 ^ v3942) & 128u) == 0u) {
    goto bb37622;
  } else {
    goto bb37610;
  }

bb37496:
  RAM[109] = v3936;
  v3938 = RAM[108];
  v3939 = RAM[100];
  v3940 = ((((v3938 - 1) - v3939))) + (((((((v3937 >> 8) & 1) ^ 1)))));
  v3941 = v3940;
  if (((v3941 ^ v3938) & 128u) == 0u) {
    goto bb37559;
  } else {
    goto bb37547;
  }

lBB5D:
  v3934 = RAM[109];
  v3935 = RAM[101];
  v3936 = ((((v3934 - 1) - v3935))) + (((s16 )(s8 )v3916));
  v3937 = v3936;
  if (((v3937 ^ v3934) & 128u) == 0u) {
    goto bb37496;
  } else {
    goto bb37484;
  }

bb37484:
  goto bb37496;

bb37547:
  goto bb37559;

bb37610:
  goto bb37622;

bb37684:
  v3950 = 0;
  goto bb37685;

lBB3F_2e_preheader:
  v3871 = v3872;
  v3873 = v3874;
  v3875 = v3876&1;
  v3877 = v3878;
  v3879 = v3875;
  v3880 = ((v3873 >> 8) & 1) ^ 1;
  v3881 = (v3877 >> 7);
  v3883 = v3871;
  v3885 = v3847;
  v3887 = v3849;
  v3889 = v3880;
  v3891 = v3879;
  v3893 = v3851;
  v3895 = v3853;
  v3897 = v3855;
  v3899 = v3857;
  v3901 = v3881;
  goto lBB3F;

bb37068:
  v3862 = RAM[107];
  v3863 = RAM[99];
  v3864 = v3862 - v3863;
  if ((v3864 & 255u) == 0u) {
    goto bb37109;
  } else {
    v3872 = v3862;
    v3874 = v3864;
    v3876 = (v3864 & 255u) == 0u;
    v3878 = v3864;
    goto lBB3F_2e_preheader;
  }

bb37109:
  v3865 = RAM[108];
  v3866 = RAM[100];
  v3867 = v3865 - v3866;
  if ((v3867 & 255u) == 0u) {
    goto bb37150;
  } else {
    v3872 = v3865;
    v3874 = v3867;
    v3876 = (v3867 & 255u) == 0u;
    v3878 = v3867;
    goto lBB3F_2e_preheader;
  }

bb37150:
  v3868 = RAM[109];
  v3869 = RAM[101];
  v3870 = v3868 - v3869;
  v3872 = v3868;
  v3874 = v3870;
  v3876 = (v3870 & 255u) == 0u;
  v3878 = v3870;
  goto lBB3F_2e_preheader;

bb37005:
  X = -4;
  A = 1;
  Z = 0;
  N = 0;
  v3842 = V;
  v3843 = B;
  v3844 = D;
  v3845 = I;
  v3846 = S;
  v3848 = -4;
  v3850 = 1;
  v3852 = v3845;
  v3854 = v3844;
  v3856 = v3843;
  v3858 = v3842;
  goto lBB29;

lBB21:
  v3840 = RAM[97];
  v3841 = v3840 + 1;
  RAM[97] = v3841;
  Z = v3841 == 0;
  N = v3841 >> 7;
  if (v3841 == 0) {
    goto lB97E;
  } else {
    goto bb37005;
  }

lBC4F:
  v4069 = v4070;
  v4071 = v4072;
  RAM[97] = v4071;
  RAM[112] = v4069;
  RAM[102] = v4069;
  v4073 = C;
  if (v4073 == 0) {
    goto bb33373;
  } else {
    goto lB8D7;
  }

lAF7E:
  v1882 = Y;
  A = v1882;
  X = -96;
  Z = 0;
  N = 1;
  v4070 = v1882;
  v4072 = -96;
  goto lBC4F;

lBC49:
  v4067 = v4068;
  A = 0;
  Z = 1;
  N = 0;
  RAM[101] = 0;
  RAM[100] = 0;
  v4070 = 0;
  v4072 = v4067;
  goto lBC4F;

lBC44:
  v4057 = v4058;
  p33 = p34;
  v4061 = v4062;
  v4063 = *p33;
  RAM[99] = v4063;
  X = v4061;
  v4064 = C;
  v4065 = ((((((((v4057 ^ -1))))) << 1))) | (((s16 )(s8 )v4064));
  C = (v4065 >> 8);
  Z = ((v4065 & 255u) == 0u);
  v4066 = v4065;
  N = v4066 >> 7;
  A = v4066;
  v4068 = v4061;
  goto lBC49;

lB391:
  v2554 = v2555;
  X = 0;
  Z = 1;
  N = 0;
  RAM[13] = 0;
  RAM[98] = v2554;
  v4058 = v2554;
  p34 = &Y;
  v4062 = -112;
  goto lBC44;

lAED7:
  v1791 = RAM[101];
  Y = (v1791 ^ -1);
  v1792 = RAM[100];
  v1793 = v1792 ^ -1;
  A = v1793;
  Z = (v1792 == 0xff);
  N = v1793 >> 7;
  v2555 = v1793;
  goto lB391;

bb18630:
  v1867 = (v1843 << 8u) | v1842;
  v1868 = RAM[v1867];
  X = v1868;
  v1869 = RAM[(((v1867 + 1u) & 65535u))];
  Y = v1869;
  A = v1868;
  Z = v1868 == 0;
  N = v1868 >> 7;
  v2555 = v1868;
  goto lB391;

lAF5D:
  v1865 = RAM[14];
  Z = v1865 == 0;
  v1866 = (v1865 >> 7);
  N = v1866;
  V = ((v1865 >> 6) & 1);
  if (v1866 == 0) {
    goto lAF6E;
  } else {
    goto bb18630;
  }

lAF2B:
  v1842 = A;
  RAM[100] = v1842;
  v1843 = Y;
  RAM[101] = v1843;
  v1844 = RAM[69];
  X = v1844;
  v1845 = RAM[70];
  Y = v1845;
  v1846 = RAM[13];
  A = v1846;
  Z = v1846 == 0;
  N = v1846 >> 7;
  if (v1846 == 0) {
    goto lAF5D;
  } else {
    goto bb18444;
  }

lB002:
  v1943 = RAM[101];
  v1944 = RAM[11];
  v1945 = RAM[8];
  Y = (((((v1943 ^ v1944) & v1945))) ^ v1944);
  v1946 = RAM[100];
  v1947 = RAM[7];
  v1948 = (v1946 ^ v1944) & v1947;
  v1949 = v1948 ^ v1944;
  A = v1949;
  Z = (v1944 == v1948);
  N = v1949 >> 7;
  v2555 = v1949;
  goto lB391;

bb25283:
  v2551 = v2552;
  V = v2551;
  v2553 = v2549;
  A = v2553;
  Z = v2553 == 0;
  N = v2553 >> 7;
  C = (((v2550 >> 8) & 1) ^ 1);
  v2555 = v2553;
  goto lB391;

bb25271:
  if (((v2548 ^ v2547) & 128u) == 0u) {
    goto bb25282;
  } else {
    v2552 = 1;
    goto bb25283;
  }

bb25209:
  v2544 = v2545;
  V = v2544;
  v2546 = ((v2543 >> 8) & 1) ^ 1;
  C = v2546;
  Y = v2542;
  v2547 = RAM[52];
  A = v2547;
  Z = v2547 == 0;
  N = v2547 >> 7;
  v2548 = RAM[50];
  v2549 = ((((v2547 - 1) - v2548))) + v2546;
  v2550 = v2549;
  if (((v2550 ^ v2547) & 128u) == 0u) {
    goto bb25282;
  } else {
    goto bb25271;
  }

bb25197:
  if (((v2541 ^ v2540) & 128u) == 0u) {
    goto bb25208;
  } else {
    v2545 = 1;
    goto bb25209;
  }

lB387:
  C = 1;
  v2540 = RAM[51];
  A = v2540;
  Z = v2540 == 0;
  N = v2540 >> 7;
  v2541 = RAM[49];
  v2542 = ((((v2540 - 1) - v2541))) + 1;
  v2543 = v2542;
  if (((v2543 ^ v2540) & 128u) == 0u) {
    goto bb25208;
  } else {
    goto bb25197;
  }

bb25208:
  v2545 = 0;
  goto bb25209;

bb25282:
  v2552 = 0;
  goto bb25283;

lB3A2:
  A = 0;
  Z = 1;
  N = 0;
  v2555 = 0;
  goto lB391;

bb31602:
  v3205 = RAM[34];
  v3206 = RAM[35];
  v3207 = RAM[(((v3206 << 8u) | v3205))];
  A = v3207;
  Y = v3207;
  Z = v3207 == 0;
  N = v3207 >> 7;
  goto lB3A2;

lB816:
  v3268 = RAM[20];
  v3269 = RAM[21];
  v3270 = RAM[(((v3269 << 8u) | v3268))];
  Y = v3270;
  v3271 = S;
  v3272 = RAM[(((v3271 + 1) + 256u))];
  RAM[20] = v3272;
  v3273 = v3271 + 2;
  S = v3273;
  v3274 = RAM[(v3273 + 256u)];
  A = v3274;
  Z = v3274 == 0;
  N = v3274 >> 7;
  RAM[21] = v3274;
  goto lB3A2;

lBC3C:
  v4056 = A;
  RAM[98] = v4056;
  A = 0;
  Z = 1;
  N = 0;
  v4058 = v4056;
  p34 = &A;
  v4062 = -120;
  goto lBC44;

lB072:
  v2004 = v2005;
  v2006 = v2004 + 1;
  X = v2006;
  v2007 = C;
  v2008 = (v2006 << 1) | (((s16 )(s8 )v2007));
  C = (v2008 >> 8);
  v2009 = RAM[18];
  v2010 = v2008 & v2009;
  A = v2010;
  Z = v2010 == 0;
  N = v2010 >> 7;
  if (v2010 == 0) {
    goto lBC3C;
  } else {
    goto bb20086;
  }

lB061:
  v1990 = v1991;
  v1992 = v1993;
  X = v1990;
  Z = v1992 == 0;
  v1994 = (v1990 >> 7);
  N = v1994;
  if (v1994 == 0) {
    goto bb19922;
  } else {
    v2005 = v1990;
    goto lB072;
  }

lB02A:
  v1956 = A;
  v1991 = v1956;
  v1993 = v1956;
  goto lB061;

bb19905:
  Y = v1982;
  Z = (v1988 == 1);
  N = v1989 >> 7;
  X = v1989;
  A = v1986;
  C = v1984;
  v1991 = v1979;
  v1993 = v1979;
  goto lB061;

lB05B:
  v1982 = v1983;
  v1984 = v1985;
  v1986 = v1987;
  v1988 = v1981 - v1982;
  v1989 = v1988 - 1;
  if (v1988 == 1) {
    goto bb19905;
  } else {
    goto lB066;
  }

lB066:
  v1995 = v1982;
  v1996 = RAM[(((((v1967 << 8u) | v1966) + v1995) & 65535u))];
  v1997 = RAM[98];
  v1998 = RAM[99];
  v1999 = RAM[(((((v1998 << 8u) | v1997) + v1995) & 65535u))];
  v2000 = (v1996 - v1999);
  v2001 = (v2000 >> 8) & 1;
  v2002 = v2001 ^ 1;
  v2003 = v1982 + 1;
  if ((v2000 & 255u) == 0u) {
    v1983 = v2003;
    v1985 = v2002;
    v1987 = v1996;
    goto lB05B;
  } else {
    goto bb19989;
  }

lB056:
  v1977 = v1978;
  v1979 = v1980;
  RAM[102] = v1979;
  Y = -1;
  v1981 = v1977 + 1;
  X = v1981;
  Z = v1981 == 0;
  N = v1981 >> 7;
  v1983 = 0;
  v1985 = v1976;
  v1987 = v1979;
  goto lB05B;

bb19786:
  v1972 = v1973;
  V = v1972;
  v1974 = v1970;
  A = v1974;
  Z = v1974 == 0;
  N = v1974 >> 7;
  v1975 = (v1971 >> 8) & 1;
  v1976 = v1975 ^ 1;
  C = v1976;
  if (v1974 == 0) {
    v1978 = v1968;
    v1980 = v1974;
    goto lB056;
  } else {
    goto bb19810;
  }

bb19774:
  if (((v1969 ^ v1968) & 128u) == 0u) {
    goto bb19785;
  } else {
    v1973 = 1;
    goto bb19786;
  }

lB044:
  v1966 = X;
  RAM[108] = v1966;
  v1967 = Y;
  RAM[109] = v1967;
  v1968 = A;
  X = v1968;
  Z = v1968 == 0;
  N = v1968 >> 7;
  C = 1;
  v1969 = RAM[97];
  v1970 = ((((v1968 - 1) - v1969))) + 1;
  v1971 = v1970;
  if (((v1971 ^ v1968) & 128u) == 0u) {
    goto bb19785;
  } else {
    goto bb19774;
  }

bb19785:
  v1973 = 0;
  goto bb19786;

bb19810:
  A = 1;
  Z = 0;
  N = 0;
  if (v1975 == 0) {
    goto bb19826;
  } else {
    v1978 = v1968;
    v1980 = 1;
    goto lB056;
  }

bb19826:
  X = v1969;
  A = -1;
  Z = 0;
  N = 1;
  v1978 = v1969;
  v1980 = -1;
  goto lB056;

bb19922:
  C = 0;
  v2005 = v1990;
  goto lB072;

bb19989:
  Y = v1982;
  A = v1996;
  C = v2002;
  X = -1;
  Z = 0;
  N = 1;
  if (v2001 == 0) {
    v2005 = -1;
    goto lB072;
  } else {
    goto bb20005;
  }

bb20005:
  X = 1;
  Z = 0;
  N = 0;
  v2005 = 1;
  goto lB072;

bb20086:
  A = -1;
  Z = 0;
  N = 1;
  goto lBC3C;

lBD82:
  v4270 = S;
  p36 = &RAM[(((v4270 + 1) + 256u))];
  v4272 = *p36;
  A = v4272;
  Z = v4272 == 0;
  N = v4272 >> 7;
  *p36 = -67;
  RAM[v4270 + 256u] = -123;
  S = (v4270 - 1);
  goto lBC3C;

lBDCD:
  v4304 = v4305;
  v4306 = v4307;
  RAM[98] = v4306;
  RAM[99] = v4304;
  X = -112;
  Z = 0;
  N = 1;
  C = 1;
  v4308 = S;
  RAM[v4308 + 256u] = -67;
  RAM[(v4308 - 1) + 256u] = -42;
  S = (v4308 - 2);
  v4068 = -112;
  goto lBC49;

lA6E8:
  RAM[73] = v660;
  v672 = S;
  RAM[v672 + 256u] = -90;
  RAM[(v672 - 1) + 256u] = -20;
  S = (v672 - 2);
  v4305 = v659;
  v4307 = v661;
  goto lBDCD;

bb7193:
  v666 = RAM[20];
  v667 = v659 - v666;
  v668 = v667;
  v669 = ((v668 >> 8) & 1) ^ 1;
  C = v669;
  Z = ((v668 & 255u) == 0u);
  N = v667 >> 7;
  if ((v668 & 255u) == 0u) {
    goto lA6E8;
  } else {
    v671 = v669;
    goto lA6E6;
  }

lA6D7:
  v655 = Y;
  v656 = RAM[95];
  v657 = RAM[96];
  v658 = (v657 << 8u) | v656;
  v659 = RAM[(((v658 + (v655 + 1)) & 65535u))];
  X = v659;
  v660 = v655 + 2;
  Y = v660;
  v661 = RAM[(((v658 + v660) & 65535u))];
  A = v661;
  v662 = RAM[21];
  v663 = v661 - v662;
  v664 = v663;
  v665 = ((v664 >> 8) & 1) ^ 1;
  C = v665;
  Z = ((v664 & 255u) == 0u);
  N = v663 >> 7;
  if ((v664 & 255u) == 0u) {
    goto bb7193;
  } else {
    v671 = v665;
    goto lA6E6;
  }

lA6E6:
  v670 = v671;
  if (v670 == 0) {
    goto lA6E8;
  } else {
    goto lE386;
  }

lBDC9:
  v4302 = RAM[58];
  A = v4302;
  v4303 = RAM[57];
  X = v4303;
  Z = v4303 == 0;
  N = v4303 >> 7;
  v4305 = v4303;
  v4307 = v4302;
  goto lBDCD;

bb47779:
  v4899 = v4900;
  V = v4899;
  v4901 = v4897;
  A = v4901;
  Z = v4901 == 0;
  N = v4901 >> 7;
  C = (((v4898 >> 8) & 1) ^ 1);
  v4902 = S;
  RAM[v4902 + 256u] = -28;
  RAM[(v4902 - 1) + 256u] = 60;
  S = (v4902 - 2);
  v4305 = v4893;
  v4307 = v4901;
  goto lBDCD;

bb47767:
  if (((v4896 ^ v4895) & 128u) == 0u) {
    goto bb47778;
  } else {
    v4900 = 1;
    goto bb47779;
  }

bb47705:
  v4891 = v4892;
  V = v4891;
  v4893 = v4889;
  v4894 = ((v4890 >> 8) & 1) ^ 1;
  C = v4894;
  X = v4893;
  v4895 = RAM[56];
  A = v4895;
  Z = v4895 == 0;
  N = v4895 >> 7;
  v4896 = RAM[44];
  v4897 = ((((v4895 - 1) - v4896))) + v4894;
  v4898 = v4897;
  if (((v4898 ^ v4895) & 128u) == 0u) {
    goto bb47778;
  } else {
    goto bb47767;
  }

bb47693:
  if (((v4888 ^ v4887) & 128u) == 0u) {
    goto bb47704;
  } else {
    v4892 = 1;
    goto bb47705;
  }

lE430:
  v4887 = RAM[55];
  A = v4887;
  Z = v4887 == 0;
  N = v4887 >> 7;
  C = 1;
  v4888 = RAM[43];
  v4889 = ((((v4887 - 1) - v4888))) + 1;
  v4890 = v4889;
  if (((v4890 ^ v4887) & 128u) == 0u) {
    goto bb47704;
  } else {
    goto bb47693;
  }

bb47704:
  v4892 = 0;
  goto bb47705;

bb47778:
  v4900 = 0;
  goto bb47779;

lBCD5:
  v4164 = Y;
  RAM[112] = v4164;
  v4165 = RAM[102];
  RAM[102] = v4164;
  v4166 = C;
  v4167 = ((((((((((((((((v4165 ^ 128u))))) << 1))) | (((s16 )(s8 )v4166)))))) >> 8))));
  C = v4167;
  RAM[97] = -96;
  v4168 = RAM[101];
  A = v4168;
  Z = v4168 == 0;
  N = v4168 >> 7;
  RAM[7] = v4168;
  if (v4167 == 0) {
    goto bb33373;
  } else {
    goto lB8D7;
  }

lE0E3:
  RAM[102] = 0;
  v4612 = RAM[97];
  RAM[112] = v4612;
  A = 128u;
  Z = 0;
  N = 1;
  RAM[97] = 128u;
  v4613 = S;
  RAM[v4613 + 256u] = -32;
  RAM[(v4613 - 1) + 256u] = -15;
  S = (v4613 - 2);
  goto lB8D7;

lE0A1:
  v4598 = X;
  RAM[34] = v4598;
  v4599 = Y;
  RAM[35] = v4599;
  v4600 = (v4599 << 8u) | v4598;
  v4601 = RAM[(((v4600 + 4u) & 65535u))];
  RAM[98] = v4601;
  v4602 = RAM[(((v4600 + 5u) & 65535u))];
  RAM[100] = v4602;
  v4603 = RAM[(((v4600 + 8u) & 65535u))];
  RAM[99] = v4603;
  Y = 9;
  v4604 = RAM[(((v4600 + 9u) & 65535u))];
  A = v4604;
  Z = v4604 == 0;
  N = v4604 >> 7;
  RAM[101] = v4604;
  goto lE0E3;

lE0D3:
  v4608 = RAM[101];
  v4609 = RAM[98];
  RAM[101] = v4609;
  RAM[98] = v4608;
  v4610 = RAM[99];
  X = v4610;
  v4611 = RAM[100];
  A = v4611;
  Z = v4611 == 0;
  N = v4611 >> 7;
  RAM[99] = v4611;
  RAM[100] = v4610;
  goto lE0E3;

lE09A:
  v4595 = N;
  if (v4595 == 0) {
    goto bb44359;
  } else {
    goto lE0D3;
  }

lB929_2e_bb34087_crit_edge:
  A = v3487;
  C = v3496;
  V = v3485;
  Z = v3497;
  N = v3499;
  RAM[112] = v3488;
  RAM[101] = v3490;
  RAM[100] = v3492;
  RAM[99] = v3494;
  RAM[98] = v3498;
  v3501 = v3487;
  goto bb34087;

lB91D:
  v3470 = v3471;
  v3472 = v3473;
  v3474 = v3475;
  v3476 = v3477;
  v3478 = v3479;
  v3480 = v3481;
  v3482 = v3483;
  v3484 = (v3482 + 1) + (((s16 )(s8 )v3480));
  if (((s8 )v3482) < 0) {
    goto bb33929;
  } else {
    goto bb33918;
  }

bb33930:
  v3485 = v3486;
  v3487 = v3484;
  v3488 = v3478 << 1;
  v3489 = (v3476 << 1) | (v3478 >> 7);
  v3490 = v3489;
  v3491 = (v3474 << 1) | (v3489 >> 8);
  v3492 = v3491;
  v3493 = (v3472 << 1) | (v3491 >> 8);
  v3494 = v3493;
  v3495 = (v3470 << 1) | (v3493 >> 8);
  v3496 = (v3495 >> 8);
  v3497 = (v3495 & 255u) == 0u;
  v3498 = v3495;
  v3499 = (v3498 >> 7);
  if (v3499 == 0) {
    v3471 = v3498;
    v3473 = v3494;
    v3475 = v3492;
    v3477 = v3490;
    v3479 = v3488;
    v3481 = v3496;
    v3483 = v3487;
    goto lB91D;
  } else {
    goto lB929_2e_bb34087_crit_edge;
  }

bb33918:
  if (((v3482 ^ v3484) & 128u) == 0u) {
    goto bb33929;
  } else {
    v3486 = 1;
    goto bb33930;
  }

bb33929:
  v3486 = 0;
  goto bb33930;

bb34117:
  v3506 = 0;
  goto bb34118;

bb34177:
  v3513 = 0;
  goto bb34178;

lBC26:
  v4035 = Z;
  if (v4035 == 0) {
    goto lBC1A;
  } else {
    goto lB938;
  }

bb36515:
  if (v3781 == 0) {
    goto bb36520;
  } else {
    goto lB97E;
  }

bb36486:
  v3778 = v3779;
  V = v3778;
  v3780 = v3777;
  A = v3780;
  Z = v3780 == 0;
  v3781 = (v3780 >> 7);
  N = v3781;
  v3782 = v3777 & 256u;
  v3783 = (v3782 >> 8u);
  C = v3783;
  if (v3782 == 0u) {
    goto lBAC4;
  } else {
    goto bb36515;
  }

bb36474:
  if (((v3774 ^ v3777) & 128u) == 0u) {
    goto bb36485;
  } else {
    v3779 = 1;
    goto bb36486;
  }

bb36456:
  v3772 = v3773;
  v3774 = v3775;
  C = 0;
  v3776 = RAM[97];
  v3777 = v3776 + v3774;
  if (((v3776 ^ v3774) & 128u) == 0u) {
    goto bb36474;
  } else {
    goto bb36485;
  }

lBAB7:
  v3768 = v3769;
  v3770 = v3768 - 1;
  S = v3770;
  v3771 = RAM[105];
  A = v3771;
  Z = v3771 == 0;
  N = v3771 >> 7;
  if (v3771 == 0) {
    v3797 = v3770;
    goto lBADA;
  } else {
    v3773 = v3770;
    v3775 = v3771;
    goto bb36456;
  }

lBA30:
  v3666 = S;
  RAM[v3666 + 256u] = -70;
  v3667 = v3666 - 1;
  S = v3667;
  RAM[v3667 + 256u] = 50;
  v3769 = v3667;
  goto lBAB7;

lBA2B:
  v3665 = Z;
  if (v3665 == 0) {
    goto lBA30;
  } else {
    goto lBA8B;
  }

bb36957:
  v3835 = v3836;
  V = v3835;
  v3837 = v3833;
  A = v3837;
  Z = v3837 == 0;
  N = v3837 >> 7;
  C = (((v3834 >> 8) & 1) ^ 1);
  RAM[97] = v3837;
  v3838 = S;
  RAM[v3838 + 256u] = -69;
  v3839 = v3838 - 1;
  S = v3839;
  RAM[v3839 + 256u] = 32;
  v3769 = v3839;
  goto lBAB7;

bb36945:
  if ((v3832 & 128u) == 0u) {
    goto bb36956;
  } else {
    v3836 = 1;
    goto bb36957;
  }

lBB17:
  A = 0;
  Z = 1;
  N = 0;
  C = 1;
  v3832 = RAM[97];
  v3833 = -v3832;
  v3834 = v3833;
  if ((v3834 & 128u) == 0u) {
    goto bb36956;
  } else {
    goto bb36945;
  }

bb36956:
  v3836 = 0;
  goto bb36957;

lE03A:
  RAM[111] = 0;
  v4545 = S;
  p39 = &RAM[(((v4545 + 1) + 256u))];
  v4547 = *p39;
  A = v4547;
  Z = v4547 == 0;
  N = v4547 >> 7;
  *p39 = -32;
  RAM[v4545 + 256u] = 65;
  v4548 = v4545 - 1;
  S = v4548;
  if (v4547 == 0) {
    v3797 = v4548;
    goto lBADA;
  } else {
    v3773 = v4548;
    v3775 = v4547;
    goto bb36456;
  }

bb36485:
  v3779 = 0;
  goto bb36486;

lBAF4:
  v3810 = RAM[97];
  v3811 = v3810 + 1;
  RAM[97] = v3811;
  Z = v3811 == 0;
  N = v3811 >> 7;
  if (v3811 == 0) {
    goto lB97E;
  } else {
    goto lBAF8;
  }

bb40838:
  A = 100;
  v4282 = RAM[96];
  Z = v4282 == 0;
  v4283 = (v4282 >> 7);
  N = v4283;
  V = ((v4282 >> 6) & 1);
  if (v4283 == 0) {
    goto lB97E;
  } else {
    goto lBDAE;
  }

lBD91:
  v4277 = RAM[94];
  A = v4277;
  v4278 = v4277;
  v4279 = v4278 - 10;
  v4280 = v4279;
  v4281 = (v4280 >> 8) & 1;
  C = (v4281 ^ 1);
  Z = ((v4280 & 255u) == 0u);
  N = v4279 >> 7;
  if (v4281 == 0) {
    goto bb40838;
  } else {
    goto lBDA0;
  }

lBD33:
  v4214 = C;
  if (v4214 == 0) {
    goto lBD91;
  } else {
    goto lBD35;
  }

lBD1A:
  v4195 = C;
  if (v4195 == 0) {
    goto lBD33;
  } else {
    goto bb40125;
  }

lE00B:
  v4517 = S;
  RAM[v4517 + 256u] = -32;
  RAM[(v4517 - 1) + 256u] = 13;
  v4518 = v4517 - 2;
  S = v4518;
  v4519 = RAM[102];
  v4520 = v4519 ^ -1;
  A = v4520;
  Z = (v4519 == 0xff);
  N = v4520 >> 7;
  if (((s8 )v4519) > -1) {
    goto lB97E;
  } else {
    v3797 = v4518;
    goto lBADA;
  }

lE005:
  v4513 = RAM[97];
  A = v4513;
  v4514 = v4513 - 136;
  v4515 = v4514;
  v4516 = (v4515 >> 8) & 1;
  C = (v4516 ^ 1);
  Z = ((v4515 & 255u) == 0u);
  N = v4514 >> 7;
  if (v4516 == 0) {
    goto lE00B;
  } else {
    goto lE00E;
  }

lBB8A:
  X = 20;
  Z = 0;
  N = 0;
  goto lA437;

lBB12:
  v3829 = Z;
  if (v3829 == 0) {
    goto bb36905;
  } else {
    goto lBB8A;
  }

lE104:
  X = v4614;
  Z = v4614 == 0;
  N = v4614 >> 7;
  if (v4614 == 0) {
    goto bb44783;
  } else {
    goto lA437;
  }

lE0F9:
  v4614 = A;
  v4615 = v4614 - 240;
  v4616 = v4615;
  C = (((v4616 >> 8) & 1) ^ 1);
  Z = ((v4616 & 255u) == 0u);
  N = v4615 >> 7;
  if ((v4616 & 255u) == 0u) {
    goto bb44764;
  } else {
    goto lE104;
  }

lE10F:
  v4619 = C;
  if (v4619 == 0) {
    goto bb44809;
  } else {
    goto lE0F9;
  }

lE115:
  v4625 = C;
  if (v4625 == 0) {
    goto bb44844;
  } else {
    goto lE0F9;
  }

lE11B:
  v4631 = C;
  if (v4631 == 0) {
    goto bb44879;
  } else {
    goto lE0F9;
  }

lE121:
  v4639 = C;
  if (v4639 == 0) {
    goto bb44914;
  } else {
    goto lE0F9;
  }

lE127:
  v4645 = C;
  if (v4645 == 0) {
    goto bb44949;
  } else {
    goto lE0F9;
  }

lE162:
  v4669 = C;
  if (v4669 == 0) {
    goto bb45177;
  } else {
    goto lE0F9;
  }

lE178:
  v4684 = C;
  if (v4684 == 0) {
    goto bb45306;
  } else {
    goto lE0F9;
  }

lE1C4:
  v4714 = C;
  if (v4714 == 0) {
    goto bb45600;
  } else {
    goto lE0F9;
  }

lE1CF:
  v4724 = C;
  if (v4724 == 0) {
    goto lE194;
  } else {
    goto lE0F9;
  }

bb44783:
  X = 30;
  Z = 0;
  N = 0;
  goto lA437;

bb45471:
  X = 29;
  Z = 0;
  N = 0;
  goto lA437;

lA480:
  v245 = RAM[770];
  v246 = RAM[771];
  v247 = (v246 << 8) | v245;
  PC = v247;
  if ((v247 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lA55F:
  v394 = v395;
  v396 = v397;
  v398 = v399;
  v400 = v401;
  v402 = v403;
  v404 = v405;
  Y = 1;
  Z = v404;
  N = v402;
  A = v400;
  V = v398;
  C = v396;
  X = v394;
  v406 = RAM[(((v361 + 1) + 256u))];
  v407 = v361 + 2;
  S = v407;
  v408 = RAM[(v407 + 256u)];
  v409 = (v406 + 1) + (v408 << 8);
  PC = v409;
  if ((v409 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lA53C:
  v367 = v368;
  v369 = v370;
  v371 = v372;
  v373 = v374;
  v375 = v376;
  v377 = (v367 << 8u) | v369;
  v378 = RAM[(((v377 + 1u) & 65535u))];
  v379 = v378 == 0;
  v380 = (v378 >> 7);
  if (v378 == 0) {
    v395 = v371;
    v397 = v373;
    v399 = v375;
    v401 = v378;
    v403 = v380;
    v405 = v379;
    goto lA55F;
  } else {
    v382 = 0;
    goto lA544;
  }

bb4856:
  v389 = v390;
  v391 = v388;
  v392 = (v388 >> 8) & 1;
  v393 = RAM[34];
  RAM[(((v387 << 8u) | v393) + 1u) & 65535u] = v391;
  RAM[34] = v386;
  RAM[35] = v391;
  if (v392 == 0) {
    v368 = v391;
    v370 = v386;
    v372 = v386;
    v374 = v392;
    v376 = v389;
    goto lA53C;
  } else {
    v395 = v386;
    v397 = v392;
    v399 = v389;
    v401 = v391;
    v403 = 0;
    v405 = 0;
    goto lA55F;
  }

bb4844:
  if (((v387 ^ v388) & 128u) == 0u) {
    goto bb4855;
  } else {
    v390 = 1;
    goto bb4856;
  }

bb4763:
  v386 = v385;
  *((&RAM[v377])) = v386;
  v387 = RAM[35];
  v388 = ((((v385 >> 8) & 1))) + v387;
  if (((s8 )v387) < 0) {
    goto bb4855;
  } else {
    goto bb4844;
  }

bb4708:
  v384 = v381 + 6;
  v385 = (v369 + v384) + (((s16 )(s8 )v373));
  if (((v369 ^ v384) & 128u) == 0u) {
    goto bb4751;
  } else {
    goto bb4763;
  }

lA544:
  v381 = v382;
  v383 = RAM[(((v377 + (v381 + 5)) & 65535u))];
  if (v383 == 0) {
    goto bb4708;
  } else {
    v382 = (v381 + 1);
    goto lA544;
  }

bb4751:
  goto bb4763;

bb4855:
  v390 = 0;
  goto bb4856;

lA533:
  v361 = v362;
  v363 = RAM[43];
  A = v363;
  v364 = RAM[44];
  Y = v364;
  Z = v364 == 0;
  N = v364 >> 7;
  RAM[34] = v363;
  RAM[35] = v364;
  C = 0;
  v365 = V;
  v366 = X;
  v368 = v364;
  v370 = v363;
  v372 = v366;
  v374 = 0;
  v376 = v365;
  goto lA53C;

lA4F0:
  v328 = S;
  RAM[v328 + 256u] = -92;
  RAM[(v328 - 1) + 256u] = -14;
  v329 = v328 - 2;
  S = v329;
  v362 = v329;
  goto lA533;

lA52D:
  v359 = S;
  RAM[v359 + 256u] = -91;
  RAM[(v359 - 1) + 256u] = 47;
  v360 = v359 - 2;
  S = v360;
  v362 = v360;
  goto lA533;

lE1B8:
  v4709 = S;
  RAM[v4709 + 256u] = -31;
  RAM[(v4709 - 1) + 256u] = -70;
  v4710 = v4709 - 2;
  S = v4710;
  v362 = v4710;
  goto lA533;

lA579:
  v419 = v420;
  S = (v419 - 1);
  v421 = RAM[772];
  v422 = RAM[773];
  v423 = (v422 << 8) | v421;
  PC = v423;
  if ((v423 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

bb3640:
  *p1 = -104;
  v420 = v255;
  goto lA579;

lA49F:
  v257 = S;
  RAM[v257 + 256u] = -92;
  v258 = v257 - 1;
  S = v258;
  RAM[v258 + 256u] = -95;
  v420 = v258;
  goto lA579;

lA609:
  v514 = v515;
  v516 = v517;
  v518 = v519;
  Y = v518;
  X = v514;
  RAM[v518 + 509u] = v516;
  v520 = RAM[123];
  RAM[123] = (v520 - 1);
  A = -1;
  Z = 0;
  N = 1;
  RAM[122] = -1;
  v521 = S;
  v522 = RAM[(((v521 + 1) + 256u))];
  v523 = v521 + 2;
  S = v523;
  v524 = RAM[(v523 + 256u)];
  v525 = (v522 + 1) + (v524 << 8);
  PC = v525;
  if ((v525 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lA582:
  v425 = v426;
  v427 = v428;
  v429 = RAM[(v425 | 512u)];
  if (((s8 )v429) < 0) {
    goto bb5087;
  } else {
    v433 = v425;
    goto lA58E;
  }

bb5114:
  v431 = v425 + 1;
  if (v431 == 0) {
    v433 = v431;
    goto lA58E;
  } else {
    v426 = v431;
    v428 = v427;
    goto lA582;
  }

bb5087:
  v430 = (v429 - 255);
  C = (((v430 >> 8) & 1) ^ 1);
  if ((v430 & 255u) == 0u) {
    v473 = v425;
    v475 = v429;
    v477 = v427;
    goto lA5C9;
  } else {
    goto bb5114;
  }

lA5DE:
  C = 1;
  v484 = (v480 & 255) - 85;
  v485 = v484;
  V = (((((((v485 ^ v482) & 128u) == 0u) | (((s8 )v482) > -1))&1))) ? 0 : 1;
  v486 = v484;
  C = (((v485 >> 8) & 1) ^ 1);
  if (v486 == 0) {
    goto bb5685;
  } else {
    v426 = v478;
    v428 = v479;
    goto lA582;
  }

bb5610:
  v483 = (((v480 & 255) - 73));
  C = (((v483 >> 8) & 1) ^ 1);
  if ((v483 & 255u) == 0u) {
    goto lA5DC;
  } else {
    goto lA5DE;
  }

bb5562:
  C = 1;
  v480 = v474 - 58;
  v481 = v480;
  V = (((((((v481 ^ v474) & 128u) == 0u) | (((s8 )v474) > -1))&1))) ? 0 : 1;
  v482 = v480;
  C = (((v481 >> 8) & 1) ^ 1);
  if (v482 == 0) {
    goto lA5DC;
  } else {
    goto bb5610;
  }

lA5C9:
  v472 = v473;
  v474 = v475;
  v476 = v477;
  v478 = v472 + 1;
  v479 = v476 + 1;
  RAM[v479 + 507u] = v474;
  if (v474 == 0) {
    v515 = v478;
    v517 = v474;
    v519 = v479;
    goto lA609;
  } else {
    goto bb5562;
  }

lA58E:
  v432 = v433;
  v434 = v429;
  v435 = (v434 - 32);
  C = (((v435 >> 8) & 1) ^ 1);
  if ((v435 & 255u) == 0u) {
    v473 = v432;
    v475 = v429;
    v477 = v427;
    goto lA5C9;
  } else {
    goto bb5158;
  }

bb5186:
  v437 = RAM[15];
  v438 = v437 & 64;
  V = (v438 >> 6);
  if (v438 == 0) {
    goto bb5213;
  } else {
    v473 = v432;
    v475 = v429;
    v477 = v427;
    goto lA5C9;
  }

bb5158:
  RAM[8] = v429;
  v436 = (v434 - 34);
  C = (((v436 >> 8) & 1) ^ 1);
  if ((v436 & 255u) == 0u) {
    v495 = v432;
    v497 = v429;
    v499 = v427;
    goto lA5EE;
  } else {
    goto bb5186;
  }

bb5213:
  v439 = (v434 - 63);
  C = (((v439 >> 8) & 1) ^ 1);
  if ((v439 & 255u) == 0u) {
    v473 = v432;
    v475 = -103;
    v477 = v427;
    goto lA5C9;
  } else {
    goto lA5A4;
  }

bb5282:
  v442 = ((((((v440 + 452) >> 8u))))) & 1;
  C = (v442 ^ 1);
  if (v442 == 0) {
    goto lA5AC;
  } else {
    v473 = v432;
    v475 = v429;
    v477 = v427;
    goto lA5C9;
  }

lA5A4:
  v440 = v429;
  v441 = ((((((v440 + 464) >> 8u))))) & 1;
  C = (v441 ^ 1);
  if (v441 == 0) {
    goto bb5282;
  } else {
    goto lA5AC;
  }

lA5C7:
  v467 = v468;
  v469 = v470;
  v471 = RAM[113];
  v473 = v467;
  v475 = v469;
  v477 = v471;
  goto lA5C9;

bb5482:
  v466 = v464 | v452;
  v468 = v454;
  v470 = v466;
  goto lA5C7;

bb5455:
  v465 = (((v460 & 255) - 128));
  C = (((v465 >> 8) & 1) ^ 1);
  if ((v465 & 255u) == 0u) {
    goto bb5482;
  } else {
    v503 = v456;
    goto lA5F5;
  }

bb5431:
  v462 = v463;
  V = v462;
  v464 = v460;
  C = (((v461 >> 8) & 1) ^ 1);
  if (v464 == 0) {
    v445 = v452;
    v447 = v454;
    v449 = v456;
    goto lA5B6;
  } else {
    goto bb5455;
  }

bb5414:
  if (((v459 ^ v458) & 128u) == 0u) {
    goto bb5430;
  } else {
    v463 = 1;
    goto bb5431;
  }

lA5B8:
  v452 = v453;
  v454 = v455;
  v456 = v457;
  v458 = RAM[(v454 | 512u)];
  C = 1;
  v459 = RAM[(v456 + 41118u)];
  v460 = ((((v458 - 1) - v459))) + 1;
  v461 = v460;
  if (((v461 ^ v458) & 128u) == 0u) {
    goto bb5430;
  } else {
    goto bb5414;
  }

lA5B6:
  v444 = v445;
  v446 = v447;
  v448 = v449;
  v450 = v448 + 1;
  v451 = v446 + 1;
  v453 = v444;
  v455 = v451;
  v457 = v450;
  goto lA5B8;

lA5AC:
  RAM[113] = v427;
  RAM[11] = 0;
  RAM[122] = v432;
  v443 = v432 - 1;
  v445 = 0;
  v447 = v443;
  v449 = -1;
  goto lA5B6;

bb5831:
  v512 = RAM[(v510 + 41118u)];
  if (v512 == 0) {
    goto bb5853;
  } else {
    v453 = v506;
    v455 = v504;
    v457 = v509;
    goto lA5B8;
  }

lA5F9:
  v507 = v508;
  v509 = (v507 + v502) + 1;
  v510 = v509;
  v511 = RAM[(v510 + 41117u)];
  if (((s8 )v511) < 0) {
    goto bb5831;
  } else {
    v508 = (v507 + 1);
    goto lA5F9;
  }

lA5F5:
  v502 = v503;
  v504 = RAM[122];
  v505 = RAM[11];
  v506 = v505 + 1;
  RAM[11] = v506;
  v508 = 0;
  goto lA5F9;

lA5EE:
  v494 = v495;
  v496 = v497;
  v498 = v499;
  v500 = v498 + 1;
  RAM[v500 + 507u] = v496;
  v501 = v494 + 1;
  if (v501 == 0) {
    v503 = v500;
    goto lA5F5;
  } else {
    v488 = v501;
    v490 = v500;
    goto lA5E5;
  }

bb5707:
  v492 = RAM[8];
  v493 = (v491 - v492);
  C = (((v493 >> 8) & 1) ^ 1);
  if ((v493 & 255u) == 0u) {
    v473 = v487;
    v475 = v491;
    v477 = v489;
    goto lA5C9;
  } else {
    v495 = v487;
    v497 = v491;
    v499 = v489;
    goto lA5EE;
  }

lA5E5:
  v487 = v488;
  v489 = v490;
  v491 = RAM[(v487 | 512u)];
  if (v491 == 0) {
    v473 = v487;
    v475 = v491;
    v477 = v489;
    goto lA5C9;
  } else {
    goto bb5707;
  }

bb5685:
  RAM[8] = v486;
  v488 = v478;
  v490 = v479;
  goto lA5E5;

bb5430:
  v463 = 0;
  goto bb5431;

bb5853:
  v513 = RAM[(v504 | 512u)];
  if (((s8 )v513) < 0) {
    v515 = v504;
    v517 = v513;
    v519 = v509;
    goto lA609;
  } else {
    v468 = v504;
    v470 = v513;
    goto lA5C7;
  }

lA5DC:
  RAM[15] = v482;
  goto lA5DE;

lA57C:
  v424 = RAM[122];
  X = v424;
  Y = 4;
  Z = 0;
  N = 0;
  RAM[15] = 4;
  v426 = v424;
  v428 = 4;
  goto lA582;

lA641:
  v576 = S;
  v577 = RAM[(((v576 + 1) + 256u))];
  v578 = v576 + 2;
  S = v578;
  v579 = RAM[(v578 + 256u)];
  v580 = (v577 + 1) + (v579 << 8);
  PC = v580;
  if ((v580 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lA640:
  v556 = v557;
  v558 = v559;
  v560 = v561;
  v562 = v563&1;
  v564 = v565;
  Y = v564;
  Z = v562;
  N = v560 >> 7;
  A = v558;
  X = v556;
  C = 0;
  goto lA641;

lA617:
  v530 = v531;
  v532 = v533;
  RAM[95] = v532;
  RAM[96] = v530;
  v534 = (v530 << 8u) | v532;
  v535 = RAM[(((v534 + 1u) & 65535u))];
  if (v535 == 0) {
    v557 = v530;
    v559 = v535;
    v561 = v535;
    v563 = v535 == 0;
    v565 = 1;
    goto lA640;
  } else {
    goto bb5989;
  }

lA637:
  v552 = v553;
  v554 = RAM[(((v534 + 1u) & 65535u))];
  v555 = RAM[v534];
  if (v552 == 0) {
    v557 = v554;
    v559 = v555;
    v561 = v555;
    v563 = v555 == 0;
    v565 = 0;
    goto lA640;
  } else {
    v531 = v554;
    v533 = v555;
    goto lA617;
  }

bb6067:
  if ((v539 & 255u) == 0u) {
    goto lA62E;
  } else {
    v553 = v541;
    goto lA637;
  }

bb5989:
  v536 = RAM[21];
  v537 = RAM[(((v534 + 3u) & 65535u))];
  v538 = v536 - v537;
  v539 = v538;
  v540 = (v539 >> 8) & 1;
  v541 = v540 ^ 1;
  v542 = (v539 & 255u) == 0u;
  v543 = (v538 >> 7);
  if (v540 == 0) {
    goto bb6067;
  } else {
    v567 = v541;
    v569 = v536;
    v571 = v543;
    v573 = v542;
    v575 = 3;
    goto lA641_2e_loopexit;
  }

bb6154:
  if ((v547 & 255u) == 0u) {
    v567 = v549;
    v569 = v544;
    v571 = v551;
    v573 = v550;
    v575 = 2;
    goto lA641_2e_loopexit;
  } else {
    v553 = v549;
    goto lA637;
  }

lA62E:
  v544 = RAM[20];
  v545 = RAM[(((v534 + 2u) & 65535u))];
  v546 = v544 - v545;
  v547 = v546;
  v548 = (v547 >> 8) & 1;
  v549 = v548 ^ 1;
  v550 = (v547 & 255u) == 0u;
  v551 = (v546 >> 7);
  if (v548 == 0) {
    goto bb6154;
  } else {
    v567 = v549;
    v569 = v544;
    v571 = v551;
    v573 = v550;
    v575 = 2;
    goto lA641_2e_loopexit;
  }

lA613:
  v526 = v527;
  S = (v526 - 1);
  v528 = RAM[43];
  A = v528;
  v529 = RAM[44];
  X = v529;
  Z = v529 == 0;
  N = v529 >> 7;
  v531 = v529;
  v533 = v528;
  goto lA617;

lA4A2:
  v259 = Y;
  RAM[11] = v259;
  v260 = S;
  RAM[v260 + 256u] = -92;
  v261 = v260 - 1;
  S = v261;
  RAM[v261 + 256u] = -90;
  v527 = v261;
  goto lA613;

lA6A7:
  v635 = S;
  RAM[v635 + 256u] = -90;
  v636 = v635 - 1;
  S = v636;
  RAM[v636 + 256u] = -87;
  v527 = v636;
  goto lA613;

lA8C0:
  v919 = v920;
  v921 = v922;
  v923 = S;
  RAM[v923 + 256u] = -88;
  RAM[(v923 - 1) + 256u] = -62;
  S = (v923 - 2);
  v531 = v919;
  v533 = v921;
  goto lA617;

bb9675:
  v911 = v912;
  V = v911;
  v913 = v910;
  A = v913;
  v914 = (v910 >> 8) & 1;
  C = v914;
  v915 = RAM[123];
  X = v915;
  Z = v915 == 0;
  N = v915 >> 7;
  if (v914 == 0) {
    v920 = v915;
    v922 = v913;
    goto lA8C0;
  } else {
    goto bb9716;
  }

bb9663:
  if (((v908 ^ v910) & 128u) == 0u) {
    goto bb9674;
  } else {
    v912 = 1;
    goto bb9675;
  }

bb9633:
  v908 = Y;
  A = v908;
  Z = v908 == 0;
  N = v908 >> 7;
  C = 1;
  v909 = RAM[122];
  v910 = (v909 + v908) + 1;
  if (((v909 ^ v908) & 128u) == 0u) {
    goto bb9663;
  } else {
    goto bb9674;
  }

bb9609:
  v904 = v905;
  V = v904;
  v906 = v902;
  A = v906;
  Z = v906 == 0;
  N = v906 >> 7;
  v907 = v903 & 256u;
  C = ((v907 >> 8u) ^ 1);
  if (v907 == 0u) {
    goto lA8BC;
  } else {
    goto bb9633;
  }

bb9597:
  if (((v901 ^ v900) & 128u) == 0u) {
    goto bb9608;
  } else {
    v905 = 1;
    goto bb9609;
  }

bb9547:
  v897 = v898;
  V = v897;
  v899 = ((v896 >> 8) & 1) ^ 1;
  C = v899;
  v900 = RAM[58];
  A = v900;
  Z = v900 == 0;
  N = v900 >> 7;
  v901 = RAM[21];
  v902 = ((((v900 - 1) - v901))) + v899;
  v903 = v902;
  if (((v903 ^ v900) & 128u) == 0u) {
    goto bb9608;
  } else {
    goto bb9597;
  }

bb9535:
  if (((v895 ^ v894) & 128u) == 0u) {
    goto bb9546;
  } else {
    v898 = 1;
    goto bb9547;
  }

lA8A6:
  C = 1;
  v894 = RAM[57];
  A = v894;
  Z = v894 == 0;
  N = v894 >> 7;
  v895 = RAM[20];
  v896 = ((((((v894 - 1) - v895))) + 1));
  if (((v896 ^ v894) & 128u) == 0u) {
    goto bb9546;
  } else {
    goto bb9535;
  }

bb9546:
  v898 = 0;
  goto bb9547;

bb9608:
  v905 = 0;
  goto bb9609;

bb9674:
  v912 = 0;
  goto bb9675;

bb9716:
  v916 = v915 + 1;
  X = v916;
  Z = v916 == 0;
  N = v916 >> 7;
  v920 = v916;
  v922 = v913;
  goto lA8C0;

lA8BC:
  v917 = RAM[43];
  A = v917;
  v918 = RAM[44];
  X = v918;
  Z = v918 == 0;
  N = v918 >> 7;
  v920 = v918;
  v922 = v917;
  goto lA8C0;

lA641_2e_loopexit:
  v566 = v567;
  v568 = v569;
  v570 = v571;
  v572 = v573;
  v574 = v575;
  Y = v574;
  Z = v572;
  N = v570;
  A = v568;
  X = v530;
  C = v566;
  goto lA641;

lA642:
  v581 = Z;
  if (v581 == 0) {
    goto lA641;
  } else {
    goto lA644;
  }

bb6889:
  v639 = A;
  v640 = v639 - 171;
  v641 = v640;
  C = (((v641 >> 8) & 1) ^ 1);
  Z = ((v641 & 255u) == 0u);
  N = v640 >> 7;
  if ((v641 & 255u) == 0u) {
    goto bb6916;
  } else {
    goto lA641;
  }

lA6AD:
  v638 = Z;
  if (v638 == 0) {
    goto bb6889;
  } else {
    goto lA6BB;
  }

lA6B9:
  v644 = Z;
  if (v644 == 0) {
    goto lA641;
  } else {
    goto lA6BB;
  }

lA68D:
  v608 = S;
  v609 = RAM[(((v608 + 1) + 256u))];
  v610 = v608 + 2;
  S = v610;
  v611 = RAM[(v610 + 256u)];
  v612 = (v609 + 1) + (v611 << 8);
  PC = v612;
  if ((v612 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lA65E:
  v598 = Z;
  if (v598 == 0) {
    goto lA68D;
  } else {
    goto lA660;
  }

lA65C:
  A = 0;
  Z = 1;
  N = 0;
  goto lA65E;

lA67A:
  RAM[22] = 25;
  v605 = S;
  v606 = RAM[(((v605 + 1) + 256u))];
  Y = v606;
  v607 = RAM[(((v605 + 2) + 256u))];
  X = -6;
  RAM[506] = v607;
  RAM[505] = v606;
  S = -8;
  A = 0;
  Z = 1;
  N = 0;
  RAM[62] = 0;
  RAM[16] = 0;
  goto lA68D;

bb3442:
  *p0 = -92;
  RAM[v235 + 256u] = 100;
  S = (v235 - 1);
  goto lA67A;

lA45E:
  v233 = Y;
  v234 = v233 + 1;
  Y = v234;
  v235 = S;
  v236 = v235 + 1;
  S = v236;
  p0 = &RAM[(v236 + 256u)];
  v238 = *p0;
  A = v238;
  Z = v238 == 0;
  N = v238 >> 7;
  if (((s8 )v238) < 0) {
    goto bb3442;
  } else {
    goto lA456_2e_loopexit;
  }

bb6773:
  v622 = v623;
  V = v622;
  v624 = v621;
  A = v624;
  Z = v624 == 0;
  N = v624 >> 7;
  C = (v621 >> 8) & 1;
  RAM[123] = v624;
  v625 = RAM[(v613 + 256u)];
  v626 = v613 + 1;
  S = v626;
  v627 = RAM[(v626 + 256u)];
  v628 = (v625 + 1) + (v627 << 8);
  PC = v628;
  if ((v628 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

bb6761:
  if (((v620 ^ v621) & 128u) == 0u) {
    goto bb6772;
  } else {
    v623 = 1;
    goto bb6773;
  }

bb6713:
  v617 = v618;
  V = v617;
  v619 = (v616 >> 8) & 1;
  C = v619;
  RAM[122] = v616;
  v620 = RAM[44];
  A = v620;
  Z = v620 == 0;
  N = v620 >> 7;
  v621 = (v620 + 255) + v619;
  if (((s8 )v620) > -1) {
    goto bb6772;
  } else {
    goto bb6761;
  }

bb6701:
  if (((v615 ^ v616) & 128u) == 0u) {
    goto bb6712;
  } else {
    v618 = 1;
    goto bb6713;
  }

lA68E:
  v613 = v614;
  S = (v613 - 1);
  C = 0;
  v615 = RAM[43];
  A = v615;
  Z = v615 == 0;
  N = v615 >> 7;
  v616 = v615 + 255;
  if (((s8 )v615) > -1) {
    goto bb6712;
  } else {
    goto bb6701;
  }

lA659:
  v596 = S;
  RAM[v596 + 256u] = -90;
  v597 = v596 - 1;
  S = v597;
  RAM[v597 + 256u] = 91;
  v614 = v597;
  goto lA68E;

lA4ED:
  v327 = S;
  RAM[v327 + 256u] = -92;
  RAM[(v327 - 1) + 256u] = -17;
  S = (v327 - 2);
  goto lA659;

lA4A7:
  v262 = C;
  if (v262 == 0) {
    goto lA4ED;
  } else {
    goto bb3686;
  }

lA4ED_2e_loopexit:
  Y = v320;
  A = v317;
  Z = (v311 == 1);
  N = v326 >> 7;
  X = v326;
  goto lA4ED;

lA4DF:
  v309 = v310;
  v311 = v312;
  v313 = v309 + v297;
  v314 = RAM[34];
  v315 = RAM[35];
  v316 = v313;
  v317 = RAM[(((((v315 << 8u) | v314) + v316) & 65535u))];
  v318 = RAM[36];
  v319 = RAM[37];
  RAM[(((v319 << 8u) | v318) + v316) & 65535u] = v317;
  v320 = v313 + 1;
  if (v320 == 0) {
    goto bb4252;
  } else {
    v322 = v311;
    goto lA4DF_2e_backedge;
  }

lA4DF_2e_backedge:
  v321 = v322;
  v323 = v309 + 1;
  v310 = v323;
  v312 = v321;
  goto lA4DF;

bb4252:
  v324 = RAM[35];
  RAM[35] = (v324 + 1);
  v325 = RAM[37];
  RAM[37] = (v325 + 1);
  v326 = v311 - 1;
  if (v311 == 1) {
    goto lA4ED_2e_loopexit;
  } else {
    v322 = v326;
    goto lA4DF_2e_backedge;
  }

bb4157:
  v304 = v305;
  V = v304;
  v306 = v303;
  A = v306;
  Z = v306 == 0;
  N = v306 >> 7;
  v307 = v303 & 256u;
  C = (v307 >> 8u);
  if (v307 == 0u) {
    v310 = 0;
    v312 = v301;
    goto lA4DF;
  } else {
    goto bb4186;
  }

bb4145:
  if (((v297 ^ v303) & 128u) == 0u) {
    goto bb4156;
  } else {
    v305 = 1;
    goto bb4157;
  }

lA4D7:
  v301 = v302;
  C = 0;
  v303 = v277 + (v293 & 255);
  if (((v268 ^ v297) & 128u) == 0u) {
    goto bb4145;
  } else {
    goto bb4156;
  }

bb4065:
  v295 = v296;
  V = v295;
  v297 = v293;
  A = v297;
  v298 = (v294 >> 8) & 1;
  C = (v298 ^ 1);
  Y = v297;
  Z = v297 == 0;
  N = v297 >> 7;
  if (v298 == 0) {
    v302 = v292;
    goto lA4D7;
  } else {
    goto bb4101;
  }

bb4053:
  if (((v281 ^ v263) & 128u) == 0u) {
    goto bb4064;
  } else {
    v296 = 1;
    goto bb4065;
  }

bb3991:
  v290 = v291;
  V = v290;
  v292 = v289;
  X = v292;
  C = 1;
  A = v263;
  Z = v269;
  N = v270;
  v293 = (((v272 - ((((v273 + v277) & 255)))))) + 1;
  v294 = v293;
  if (((v294 ^ v264) & 128u) == 0u) {
    goto bb4064;
  } else {
    goto bb4053;
  }

bb3979:
  if (((v265 ^ v287) & 128u) == 0u) {
    goto bb3990;
  } else {
    v291 = 1;
    goto bb3991;
  }

bb3935:
  v285 = v286;
  V = v285;
  v287 = v284;
  A = v287;
  Z = v287 == 0;
  N = v287 >> 7;
  v288 = (v284 >> 8) & 1;
  C = v288;
  RAM[46] = v287;
  v289 = (((((((v284 & 255) - 1))) - v265))) + v288;
  if (((v289 ^ v287) & 128u) == 0u) {
    goto bb3990;
  } else {
    goto bb3979;
  }

bb3923:
  if (((v283 ^ v284) & 128u) == 0u) {
    goto bb3934;
  } else {
    v286 = 1;
    goto bb3935;
  }

bb3874:
  v279 = v280;
  V = v279;
  v281 = v278;
  v282 = (v278 >> 8) & 1;
  C = v282;
  RAM[45] = v281;
  RAM[36] = v281;
  v283 = RAM[46];
  A = v283;
  Z = v283 == 0;
  N = v283 >> 7;
  v284 = (v283 + 255) + v282;
  if (((s8 )v283) > -1) {
    goto bb3934;
  } else {
    goto bb3923;
  }

bb3862:
  if (((v276 ^ v278) & 128u) == 0u) {
    goto bb3873;
  } else {
    v280 = 1;
    goto bb3874;
  }

bb3825:
  v274 = v275;
  V = v274;
  v276 = v273;
  A = v276;
  Z = v276 == 0;
  N = v276 >> 7;
  C = 0;
  v277 = v268;
  v278 = v277 + (v273 & 255);
  if (((v268 ^ v276) & 128u) == 0u) {
    goto bb3862;
  } else {
    goto bb3873;
  }

bb3802:
  if (((v271 ^ v263) & 128u) == 0u) {
    goto bb3824;
  } else {
    v275 = 1;
    goto bb3825;
  }

bb3686:
  v263 = RAM[95];
  v264 = v263;
  v265 = RAM[96];
  v266 = (v265 << 8u) | v264;
  v267 = RAM[(((v266 + 1u) & 65535u))];
  RAM[35] = v267;
  v268 = RAM[45];
  RAM[34] = v268;
  RAM[37] = v265;
  A = v263;
  v269 = v263 == 0;
  v270 = (v263 >> 7);
  Y = 0;
  Z = 1;
  N = 0;
  v271 = RAM[v266];
  v272 = v263 - 1;
  v273 = (v272 - v271) + (((s16 )(s8 )v262));
  if (((v273 ^ v264) & 128u) == 0u) {
    goto bb3824;
  } else {
    goto bb3802;
  }

bb3824:
  v275 = 0;
  goto bb3825;

bb3873:
  v280 = 0;
  goto bb3874;

bb3934:
  v286 = 0;
  goto bb3935;

bb3990:
  v291 = 0;
  goto bb3991;

bb4064:
  v296 = 0;
  goto bb4065;

bb4101:
  v299 = v292 + 1;
  X = v299;
  v300 = v265 - 1;
  RAM[37] = v300;
  Z = (v265 == 1);
  N = v300 >> 7;
  v302 = v299;
  goto lA4D7;

bb4156:
  v305 = 0;
  goto bb4157;

bb4186:
  v308 = v267 - 1;
  RAM[35] = v308;
  Z = (v267 == 1);
  N = v308 >> 7;
  C = 0;
  v310 = 0;
  v312 = v301;
  goto lA4DF;

lA52A:
  v358 = S;
  RAM[v358 + 256u] = -91;
  RAM[(v358 - 1) + 256u] = 44;
  S = (v358 - 2);
  goto lA659;

lA52A_2e_loopexit:
  Y = v357;
  A = v354;
  Z = (v352 == 1);
  N = v357 >> 7;
  goto lA52A;

lA522:
  v350 = v351;
  v352 = v349 - v350;
  v353 = v352;
  v354 = RAM[(v353 + 508u)];
  v355 = RAM[95];
  v356 = RAM[96];
  RAM[(((v356 << 8u) | v355) + v353) & 65535u] = v354;
  v357 = v352 - 1;
  if (((s8 )v357) < 0) {
    goto lA52A_2e_loopexit;
  } else {
    v351 = (v350 + 1);
    goto lA522;
  }

lA50D:
  v344 = RAM[20];
  v345 = RAM[21];
  RAM[510] = v344;
  RAM[511] = v345;
  v346 = RAM[49];
  A = v346;
  v347 = RAM[50];
  RAM[45] = v346;
  RAM[46] = v347;
  v348 = RAM[11];
  v349 = v348 - 1;
  Y = v349;
  Z = (v348 == 1);
  N = v349 >> 7;
  v351 = 0;
  goto lA522;

bb6425:
  v593 = v594;
  V = v593;
  v595 = v592;
  A = v595;
  Z = v595 == 0;
  N = v595 >> 7;
  C = (v592 >> 8) & 1;
  RAM[46] = v595;
  goto lA659;

bb6413:
  if (((v591 ^ v592) & 128u) == 0u) {
    goto bb6424;
  } else {
    v594 = 1;
    goto bb6425;
  }

bb6366:
  v588 = v589;
  V = v588;
  v590 = (v587 >> 8) & 1;
  C = v590;
  RAM[45] = v587;
  v591 = RAM[44];
  A = v591;
  Z = v591 == 0;
  N = v591 >> 7;
  v592 = v590 + v591;
  if (((s8 )v591) < 0) {
    goto bb6424;
  } else {
    goto bb6413;
  }

bb6354:
  if (((v586 ^ v587) & 128u) == 0u) {
    goto bb6365;
  } else {
    v589 = 1;
    goto bb6366;
  }

lA644:
  v582 = RAM[43];
  v583 = RAM[44];
  RAM[(v583 << 8u) | v582] = 0;
  Y = 1;
  v584 = RAM[43];
  v585 = RAM[44];
  RAM[(((v585 << 8u) | v584) + 1u) & 65535u] = 0;
  v586 = RAM[43];
  A = v586;
  Z = v586 == 0;
  N = v586 >> 7;
  C = 0;
  v587 = v586 + 2;
  if (((s8 )v586) < 0) {
    goto bb6365;
  } else {
    goto bb6354;
  }

bb6365:
  v589 = 0;
  goto bb6366;

bb6424:
  v594 = 0;
  goto bb6425;

lA877:
  v877 = S;
  v878 = v877 + 1;
  S = v878;
  p2 = &RAM[(v878 + 256u)];
  v880 = *p2;
  N = v880 >> 7;
  V = ((v880 >> 6) & 1);
  B = ((v880 >> 4) & 1);
  D = ((v880 >> 3) & 1);
  I = ((v880 >> 2) & 1);
  v881 = (v880 >> 1) & 1;
  Z = v881;
  C = (v880 & 1);
  if (v881 == 0) {
    goto lA87D;
  } else {
    goto lA659;
  }

lE1B5:
  v4707 = S;
  RAM[v4707 + 256u] = -31;
  v4708 = v4707 - 1;
  S = v4708;
  RAM[v4708 + 256u] = -73;
  v614 = v4708;
  goto lA68E;

bb6712:
  v618 = 0;
  goto bb6713;

bb6772:
  v623 = 0;
  goto bb6773;

lA717:
  v693 = RAM[774];
  v694 = RAM[775];
  v695 = (v694 << 8) | v693;
  PC = v695;
  if ((v695 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

bb7352:
  v686 = RAM[95];
  v687 = RAM[96];
  v688 = (v687 << 8u) | v686;
  v689 = RAM[(((v688 + v685) & 65535u))];
  A = v689;
  Z = v689 == 0;
  N = v689 >> 7;
  if (v689 == 0) {
    goto bb7380;
  } else {
    goto lA717;
  }

lA700:
  v684 = Y;
  v685 = v684 + 1;
  Y = v685;
  Z = v685 == 0;
  N = v685 >> 7;
  if (v685 == 0) {
    goto lE386;
  } else {
    goto bb7352;
  }

lA6F6:
  v679 = A;
  v680 = v679 - 34;
  v681 = v680;
  C = (((v681 >> 8) & 1) ^ 1);
  Z = ((v681 & 255u) == 0u);
  N = v680 >> 7;
  if ((v681 & 255u) == 0u) {
    goto bb7309;
  } else {
    goto lA700;
  }

bb7309:
  v682 = RAM[15];
  v683 = v682 ^ -1;
  A = v683;
  Z = (v682 == 0xff);
  N = v683 >> 7;
  RAM[15] = v683;
  goto lA700;

lA7E1:
  v797 = RAM[776];
  v798 = RAM[777];
  v799 = (v798 << 8) | v797;
  PC = v799;
  if ((v799 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

bb8579:
  v792 = v793;
  V = v792;
  v794 = v791;
  A = v794;
  Z = v794 == 0;
  N = v794 >> 7;
  v795 = (v791 >> 8) & 1;
  C = v795;
  RAM[122] = v794;
  if (v795 == 0) {
    goto lA7E1;
  } else {
    goto bb8609;
  }

bb8567:
  if ((v791 & 128u) == 0u) {
    goto bb8578;
  } else {
    v793 = 1;
    goto bb8579;
  }

lA7CE:
  v789 = RAM[(((v786 + 3u) & 65535u))];
  RAM[57] = v789;
  Y = 4;
  v790 = RAM[(((v786 + 4u) & 65535u))];
  RAM[58] = v790;
  A = 4;
  Z = 0;
  N = 0;
  v791 = v782 + 4;
  if ((v782 & 128u) == 0u) {
    goto bb8567;
  } else {
    goto bb8578;
  }

bb8578:
  v793 = 0;
  goto bb8579;

bb8609:
  v796 = v783 + 1;
  RAM[123] = v796;
  Z = v796 == 0;
  N = v796 >> 7;
  goto lA7E1;

lA82B:
  v836 = S;
  v837 = RAM[(((v836 + 1) + 256u))];
  v838 = v836 + 2;
  S = v838;
  v839 = RAM[(v838 + 256u)];
  v840 = (v837 + 1) + (v839 << 8);
  PC = v840;
  if ((v840 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lA827:
  v832 = v833;
  v834 = v835;
  RAM[65] = v834;
  RAM[66] = v832;
  goto lA82B;

lA81D:
  C = 1;
  v825 = RAM[43];
  A = v825;
  Z = v825 == 0;
  N = v825 >> 7;
  v826 = v825 - 1;
  v827 = v826;
  V = (((((((v827 ^ v825) & 128u) == 0u) | (((s8 )v825) > -1))&1))) ? 0 : 1;
  v828 = v826;
  A = v828;
  v829 = (v827 >> 8) & 1;
  C = (v829 ^ 1);
  v830 = RAM[44];
  Y = v830;
  Z = v830 == 0;
  N = v830 >> 7;
  if (v829 == 0) {
    v833 = v830;
    v835 = v828;
    goto lA827;
  } else {
    goto bb8965;
  }

lA677:
  v604 = S;
  RAM[v604 + 256u] = -90;
  RAM[(v604 - 1) + 256u] = 121;
  S = (v604 - 2);
  goto lA81D;

lA663:
  v600 = RAM[55];
  v601 = RAM[56];
  RAM[51] = v600;
  RAM[52] = v601;
  v602 = RAM[45];
  A = v602;
  v603 = RAM[46];
  Y = v603;
  Z = v603 == 0;
  N = v603 >> 7;
  RAM[47] = v602;
  RAM[48] = v603;
  RAM[49] = v602;
  RAM[50] = v603;
  goto lA677;

bb44764:
  v4617 = Y;
  RAM[56] = v4617;
  v4618 = X;
  RAM[55] = v4618;
  goto lA663;

bb8965:
  v831 = v830 - 1;
  Y = v831;
  Z = (v830 == 1);
  N = v831 >> 7;
  v833 = v831;
  v835 = v828;
  goto lA827;

lA870:
  v864 = S;
  v865 = RAM[(((v864 + 1) + 256u))];
  v866 = v864 + 2;
  S = v866;
  v867 = RAM[(v866 + 256u)];
  v868 = (v865 + 1) + (v867 << 8);
  PC = v868;
  if ((v868 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lA862:
  v861 = RAM[61];
  RAM[122] = v861;
  RAM[123] = v860;
  v862 = RAM[59];
  A = v862;
  v863 = RAM[60];
  Y = v863;
  Z = v863 == 0;
  N = v863 >> 7;
  RAM[57] = v862;
  RAM[58] = v863;
  goto lA870;

lA8D1:
  v933 = S;
  v934 = RAM[(((v933 + 1) + 256u))];
  v935 = v933 + 2;
  S = v935;
  v936 = RAM[(v935 + 256u)];
  v937 = (v934 + 1) + (v936 << 8);
  PC = v937;
  if ((v937 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

bb9772:
  v925 = RAM[95];
  A = v925;
  Z = v925 == 0;
  N = v925 >> 7;
  v926 = (v925 - 2) + (((s16 )(s8 )v924));
  v927 = v926;
  V = (((((((v927 ^ v925) & 128u) == 0u) | (((s8 )v925) > -1))&1))) ? 0 : 1;
  v928 = ((v927 >> 8) & 1) ^ 1;
  C = v928;
  RAM[122] = v926;
  v929 = RAM[96];
  A = v929;
  Z = v929 == 0;
  N = v929 >> 7;
  v930 = (v929 - 1) + v928;
  v931 = v930;
  V = (((((((v931 ^ v929) & 128u) == 0u) | (((s8 )v929) > -1))&1))) ? 0 : 1;
  v932 = v930;
  A = v932;
  Z = v932 == 0;
  N = v932 >> 7;
  C = (((v931 >> 8) & 1) ^ 1);
  RAM[123] = v932;
  goto lA8D1;

lA905:
  v967 = S;
  v968 = RAM[(((v967 + 1) + 256u))];
  v969 = v967 + 2;
  S = v969;
  v970 = RAM[(v969 + 256u)];
  v971 = (v968 + 1) + (v970 << 8);
  PC = v971;
  if ((v971 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

bb10151:
  v955 = v956;
  V = v955;
  v957 = v954;
  A = v957;
  Z = v957 == 0;
  N = v957 >> 7;
  v958 = (v954 >> 8) & 1;
  C = v958;
  RAM[122] = v957;
  if (v958 == 0) {
    goto lA905;
  } else {
    goto bb10181;
  }

bb10139:
  if (((v952 ^ v954) & 128u) == 0u) {
    goto bb10150;
  } else {
    v956 = 1;
    goto bb10151;
  }

lA8FB:
  v952 = Y;
  A = v952;
  Z = v952 == 0;
  N = v952 >> 7;
  C = 0;
  v953 = RAM[122];
  v954 = v953 + v952;
  if (((v953 ^ v952) & 128u) == 0u) {
    goto bb10139;
  } else {
    goto bb10150;
  }

lA93E:
  v1015 = Z;
  if (v1015 == 0) {
    goto lA940;
  } else {
    goto lA8FB;
  }

lACD1:
  v1523 = S;
  RAM[v1523 + 256u] = -84;
  RAM[(v1523 - 1) + 256u] = -45;
  S = (v1523 - 2);
  goto lA8FB;

bb15034:
  v1520 = RAM[(((v1518 + (v1513 + 3)) & 65535u))];
  RAM[63] = v1520;
  v1521 = RAM[(((v1518 + (v1513 + 4)) & 65535u))];
  A = v1521;
  v1522 = v1513 + 5;
  Y = v1522;
  Z = v1522 == 0;
  N = v1522 >> 7;
  RAM[64] = v1521;
  goto lACD1;

bb10150:
  v956 = 0;
  goto bb10151;

bb10181:
  v959 = RAM[123];
  v960 = v959 + 1;
  RAM[123] = v960;
  Z = v960 == 0;
  N = v960 >> 7;
  goto lA905;

lA905_2e_loopexit:
  v961 = v962;
  v963 = v964;
  v965 = v966&1;
  X = v978;
  Y = v993;
  A = v994;
  Z = v965;
  N = v963 >> 7;
  C = v961;
  goto lA905;

lA911:
  v978 = v979;
  v980 = v981;
  v982 = v983;
  v984 = v985;
  RAM[7] = v980;
  RAM[8] = v978;
  v986 = RAM[122];
  v987 = RAM[123];
  v988 = (v987 << 8u) | v986;
  v990 = 0;
  v992 = v982;
  goto lA919;

lA919:
  v989 = v990;
  v991 = v992;
  v993 = v989 + v984;
  v994 = RAM[(((v988 + v993) & 65535u))];
  if (v994 == 0) {
    v962 = v991;
    v964 = v994;
    v966 = v994 == 0;
    goto lA905_2e_loopexit;
  } else {
    goto bb10328;
  }

bb10357:
  v1000 = v993 + 1;
  v1001 = v995 - 34;
  v1002 = v1001;
  v1003 = ((v1002 >> 8) & 1) ^ 1;
  v1004 = (v1002 & 255u) == 0u;
  v1005 = (v1001 >> 7);
  v1006 = v989 + 1;
  if ((v1002 & 255u) == 0u) {
    v979 = v980;
    v981 = v978;
    v983 = v1003;
    v985 = v1000;
    goto lA911;
  } else {
    v990 = v1006;
    v992 = v1003;
    goto lA919;
  }

bb10328:
  v995 = v994;
  v996 = v995 - v978;
  v997 = v996;
  v998 = ((v997 >> 8) & 1) ^ 1;
  v999 = v996;
  if ((v997 & 255u) == 0u) {
    v962 = v998;
    v964 = v999;
    v966 = (v997 & 255u) == 0u;
    goto lA905_2e_loopexit;
  } else {
    goto bb10357;
  }

lA90B:
  v975 = v976;
  RAM[7] = v975;
  Y = 0;
  Z = 1;
  N = 0;
  RAM[8] = 0;
  v977 = C;
  v979 = v975;
  v981 = 0;
  v983 = v977;
  v985 = 0;
  goto lA911;

lA906:
  X = 58;
  v972 = RAM[162];
  Z = v972 == 0;
  N = v972 >> 7;
  V = ((v972 >> 6) & 1);
  v976 = 58;
  goto lA90B;

lA75A:
  v747 = S;
  RAM[v747 + 256u] = -89;
  RAM[(v747 - 1) + 256u] = 92;
  S = (v747 - 2);
  goto lA906;

lA8F8:
  v951 = S;
  RAM[v951 + 256u] = -88;
  RAM[(v951 - 1) + 256u] = -6;
  S = (v951 - 2);
  goto lA906;

lA8EB:
  v946 = RAM[(((v941 + 2) + 256u))];
  RAM[57] = v946;
  v947 = RAM[(((v941 + 3) + 256u))];
  RAM[58] = v947;
  v948 = RAM[(((v941 + 4) + 256u))];
  RAM[122] = v948;
  v949 = v941 + 5;
  S = v949;
  v950 = RAM[(v949 + 256u)];
  A = v950;
  Z = v950 == 0;
  N = v950 >> 7;
  RAM[123] = v950;
  goto lA8F8;

lB3CE:
  v2569 = S;
  v2570 = A;
  RAM[v2569 + 256u] = v2570;
  v2571 = RAM[72];
  RAM[(v2569 - 1) + 256u] = v2571;
  v2572 = RAM[71];
  RAM[(v2569 - 2) + 256u] = v2572;
  v2573 = RAM[123];
  RAM[(v2569 - 3) + 256u] = v2573;
  v2574 = RAM[122];
  A = v2574;
  Z = v2574 == 0;
  N = v2574 >> 7;
  RAM[(v2569 - 4) + 256u] = v2574;
  RAM[(v2569 - 5) + 256u] = -77;
  RAM[(v2569 - 6) + 256u] = -35;
  S = (v2569 - 7);
  goto lA8F8;

bb14217:
  v1429 = S;
  RAM[v1429 + 256u] = -85;
  RAM[(v1429 - 1) + 256u] = -11;
  S = (v1429 - 2);
  goto lA906;

bb14200:
  v1428 = RAM[19];
  A = v1428;
  Z = v1428 == 0;
  N = v1428 >> 7;
  if (v1428 == 0) {
    goto bb14217;
  } else {
    goto lABD6;
  }

lABEA:
  v1427 = RAM[512];
  A = v1427;
  Z = v1427 == 0;
  N = v1427 >> 7;
  if (v1427 == 0) {
    goto bb14200;
  } else {
    goto lAC0D;
  }

lABD9:
  v1421 = RAM[19];
  A = v1421;
  Z = v1421 == 0;
  N = v1421 >> 7;
  if (v1421 == 0) {
    goto lABEA;
  } else {
    goto bb14142;
  }

lABE0:
  v1423 = A;
  v1424 = v1423 & 2;
  A = v1424;
  v1425 = (v1424 >> 1);
  Z = (v1425 ^ 1);
  N = 0;
  if (v1425 == 1) {
    goto bb14170;
  } else {
    goto lABEA;
  }

lACB8:
  v1512 = S;
  RAM[v1512 + 256u] = -84;
  RAM[(v1512 - 1) + 256u] = -70;
  S = (v1512 - 2);
  goto lA906;

lAC41:
  if (v1455 == 0) {
    goto bb14489;
  } else {
    goto lACB8;
  }

bb14417:
  v1454 = RAM[17];
  Z = v1454 == 0;
  v1455 = (v1454 >> 7);
  N = v1455;
  v1456 = v1454 & 64;
  V = (v1456 >> 6);
  if (v1456 == 0) {
    goto lAC41;
  } else {
    goto bb14444;
  }

lAC2F:
  v1453 = Z;
  if (v1453 == 0) {
    goto lAC51;
  } else {
    goto bb14417;
  }

lACD7:
  v1525 = A;
  X = v1525;
  v1526 = v1525 - 131;
  v1527 = v1526;
  C = (((v1527 >> 8) & 1) ^ 1);
  Z = ((v1527 & 255u) == 0u);
  N = v1526 >> 7;
  if ((v1527 & 255u) == 0u) {
    goto lAC51;
  } else {
    goto lACB8;
  }

lA909:
  v973 = v974;
  S = (v973 - 1);
  X = 0;
  Z = 1;
  N = 0;
  v976 = 0;
  goto lA90B;

lA8A3:
  v892 = S;
  RAM[v892 + 256u] = -88;
  v893 = v892 - 1;
  S = v893;
  RAM[v893 + 256u] = -91;
  v974 = v893;
  goto lA909;

lA93B:
  v1013 = S;
  RAM[v1013 + 256u] = -87;
  v1014 = v1013 - 1;
  S = v1014;
  RAM[v1014 + 256u] = 61;
  v974 = v1014;
  goto lA909;

lA937:
  v1012 = RAM[97];
  A = v1012;
  Z = v1012 == 0;
  N = v1012 >> 7;
  if (v1012 == 0) {
    goto lA93B;
  } else {
    goto lA940;
  }

lA96A:
  v1039 = S;
  v1040 = RAM[(((v1039 + 1) + 256u))];
  v1041 = v1039 + 2;
  S = v1041;
  v1042 = RAM[(v1041 + 256u)];
  v1043 = (v1040 + 1) + (v1042 << 8);
  PC = v1043;
  if ((v1043 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

bb10664:
  v1036 = S;
  v1037 = v1036 + 1;
  S = v1037;
  v1038 = RAM[(v1037 + 256u)];
  A = v1038;
  Z = v1038 == 0;
  N = v1038 >> 7;
  goto lA96A;

lA9CA:
  v1106 = RAM[100];
  v1107 = RAM[73];
  v1108 = RAM[74];
  RAM[(v1108 << 8u) | v1107] = v1106;
  Y = 1;
  v1109 = RAM[101];
  A = v1109;
  Z = v1109 == 0;
  N = v1109 >> 7;
  v1110 = RAM[73];
  v1111 = RAM[74];
  RAM[(((v1111 << 8u) | v1110) + 1u) & 65535u] = v1109;
  v1112 = S;
  v1113 = RAM[(((v1112 + 1) + 256u))];
  v1114 = v1112 + 2;
  S = v1114;
  v1115 = RAM[(v1114 + 256u)];
  v1116 = (v1113 + 1) + (v1115 << 8);
  PC = v1116;
  if ((v1116 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lAA6F:
  v1197 = RAM[80];
  v1198 = RAM[81];
  v1199 = RAM[(((v1198 << 8u) | v1197))];
  v1200 = RAM[73];
  v1201 = RAM[74];
  RAM[(v1201 << 8u) | v1200] = v1199;
  v1202 = RAM[80];
  v1203 = RAM[81];
  v1204 = RAM[(((((v1203 << 8u) | v1202) + 1u) & 65535u))];
  v1205 = RAM[73];
  v1206 = RAM[74];
  RAM[(((v1206 << 8u) | v1205) + 1u) & 65535u] = v1204;
  Y = 2;
  v1207 = RAM[80];
  v1208 = RAM[81];
  v1209 = RAM[(((((v1208 << 8u) | v1207) + 2u) & 65535u))];
  A = v1209;
  Z = v1209 == 0;
  N = v1209 >> 7;
  v1210 = RAM[73];
  v1211 = RAM[74];
  RAM[(((v1211 << 8u) | v1210) + 2u) & 65535u] = v1209;
  v1212 = S;
  v1213 = RAM[(((v1212 + 1) + 256u))];
  v1214 = v1212 + 2;
  S = v1214;
  v1215 = RAM[(v1214 + 256u)];
  v1216 = (v1213 + 1) + (v1215 << 8);
  PC = v1216;
  if ((v1216 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lAAE7:
  v1275 = S;
  v1276 = RAM[(((v1275 + 1) + 256u))];
  v1277 = v1275 + 2;
  S = v1277;
  v1278 = RAM[(v1277 + 256u)];
  v1279 = (v1276 + 1) + (v1278 << 8);
  PC = v1279;
  if ((v1279 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lAACA:
  v1265 = X;
  RAM[v1265 | 512u] = 0;
  X = -1;
  Y = 1;
  v1266 = RAM[19];
  A = v1266;
  Z = v1266 == 0;
  N = v1266 >> 7;
  if (v1266 == 0) {
    goto lAAD7;
  } else {
    goto lAAE7;
  }

lAAC8:
  v1264 = Z;
  if (v1264 == 0) {
    goto lAA9D;
  } else {
    goto lAACA;
  }

lAAE5:
  v1273 = A;
  v1274 = v1273 ^ -1;
  A = v1274;
  Z = (v1273 == 0xff);
  N = v1274 >> 7;
  goto lAAE7;

lAADC:
  v1269 = RAM[19];
  Z = v1269 == 0;
  v1270 = (v1269 >> 7);
  N = v1270;
  V = ((v1269 >> 6) & 1);
  if (v1270 == 0) {
    goto lAAE5;
  } else {
    goto bb12828;
  }

bb13411:
  v1354 = S;
  RAM[v1354 + 256u] = -85;
  RAM[(v1354 - 1) + 256u] = 55;
  S = (v1354 - 2);
  goto lAAE5;

lAB30:
  v1350 = Y;
  Y = (v1350 + 1);
  v1351 = A;
  v1352 = v1351 - 13;
  v1353 = v1352;
  C = (((v1353 >> 8) & 1) ^ 1);
  Z = ((v1353 & 255u) == 0u);
  N = v1352 >> 7;
  if ((v1353 & 255u) == 0u) {
    goto bb13411;
  } else {
    goto lAB28;
  }

lAB28:
  v1342 = X;
  v1343 = v1342 - 1;
  X = v1343;
  Z = (v1342 == 1);
  N = v1343 >> 7;
  if (v1342 == 1) {
    goto lAAE7;
  } else {
    goto bb13338;
  }

lAB24:
  v1340 = A;
  Y = 0;
  v1341 = v1340 + 1;
  X = v1341;
  Z = v1341 == 0;
  N = v1341 >> 7;
  goto lAB28;

lAB4A:
  v1362 = A;
  Z = v1362 == 0;
  N = v1362 >> 7;
  v1363 = S;
  v1364 = RAM[(((v1363 + 1) + 256u))];
  v1365 = v1363 + 2;
  S = v1365;
  v1366 = RAM[(v1365 + 256u)];
  v1367 = (v1364 + 1) + (v1366 << 8);
  PC = v1367;
  if ((v1367 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lAB72:
  v1374 = RAM[61];
  A = v1374;
  v1375 = RAM[62];
  Y = v1375;
  Z = v1375 == 0;
  N = v1375 >> 7;
  RAM[122] = v1374;
  RAM[123] = v1375;
  v1376 = S;
  v1377 = RAM[(((v1376 + 1) + 256u))];
  v1378 = v1376 + 2;
  S = v1378;
  v1379 = RAM[(v1378 + 256u)];
  v1380 = (v1377 + 1) + (v1379 << 8);
  PC = v1380;
  if ((v1380 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

bb13896:
  v1393 = S;
  v1394 = RAM[(((v1393 + 1) + 256u))];
  v1395 = v1393 + 2;
  S = v1395;
  v1396 = RAM[(v1395 + 256u)];
  v1397 = (v1394 + 1) + (v1396 << 8);
  PC = v1397;
  if ((v1397 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lABA0:
  v1392 = RAM[19];
  X = v1392;
  Z = v1392 == 0;
  N = v1392 >> 7;
  if (v1392 == 0) {
    goto bb13896;
  } else {
    goto lABB7;
  }

lABBA:
  X = 0;
  Z = 1;
  N = 0;
  RAM[19] = 0;
  v1406 = S;
  v1407 = RAM[(((v1406 + 1) + 256u))];
  v1408 = v1406 + 2;
  S = v1408;
  v1409 = RAM[(v1408 + 256u)];
  v1410 = (v1407 + 1) + (v1409 << 8);
  PC = v1410;
  if ((v1410 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lACFB:
  v1533 = S;
  v1534 = RAM[(((v1533 + 1) + 256u))];
  v1535 = v1533 + 2;
  S = v1535;
  v1536 = RAM[(v1535 + 256u)];
  v1537 = (v1534 + 1) + (v1536 << 8);
  PC = v1537;
  if ((v1537 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lAD96:
  v1597 = S;
  v1598 = RAM[(((v1597 + 1) + 256u))];
  v1599 = v1597 + 2;
  S = v1599;
  v1600 = RAM[(v1599 + 256u)];
  v1601 = (v1598 + 1) + (v1600 << 8);
  PC = v1601;
  if ((v1601 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lAE46:
  v1711 = RAM[101];
  v1712 = S;
  RAM[v1712 + 256u] = v1711;
  v1713 = RAM[100];
  RAM[(v1712 - 1) + 256u] = v1713;
  v1714 = RAM[99];
  RAM[(v1712 - 2) + 256u] = v1714;
  v1715 = RAM[98];
  RAM[(v1712 - 3) + 256u] = v1715;
  v1716 = RAM[97];
  A = v1716;
  Z = v1716 == 0;
  N = v1716 >> 7;
  RAM[(v1712 - 4) + 256u] = v1716;
  S = (v1712 - 5);
  v1717 = RAM[34];
  v1718 = RAM[35];
  v1719 = (v1718 << 8) | v1717;
  PC = v1719;
  if ((v1719 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lAE80:
  v1748 = v1749;
  v1750 = RAM[97];
  A = v1750;
  Z = v1750 == 0;
  N = v1750 >> 7;
  v1751 = RAM[(((v1748 + 1) + 256u))];
  v1752 = v1748 + 2;
  S = v1752;
  v1753 = RAM[(v1752 + 256u)];
  v1754 = (v1751 + 1) + (v1753 << 8);
  PC = v1754;
  if ((v1754 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lAE66:
  v1737 = S;
  v1738 = RAM[(((v1737 + 1) + 256u))];
  C = (v1738 & 1);
  RAM[18] = (v1738 >> 1);
  v1739 = RAM[(((v1737 + 2) + 256u))];
  RAM[105] = v1739;
  v1740 = RAM[(((v1737 + 3) + 256u))];
  RAM[106] = v1740;
  v1741 = RAM[(((v1737 + 4) + 256u))];
  RAM[107] = v1741;
  v1742 = RAM[(((v1737 + 5) + 256u))];
  RAM[108] = v1742;
  v1743 = RAM[(((v1737 + 6) + 256u))];
  RAM[109] = v1743;
  v1744 = v1737 + 7;
  S = v1744;
  v1745 = RAM[(v1744 + 256u)];
  RAM[110] = v1745;
  v1746 = RAM[102];
  v1747 = v1745 ^ v1746;
  A = v1747;
  Z = (v1746 == v1745);
  N = v1747 >> 7;
  RAM[111] = v1747;
  v1749 = v1744;
  goto lAE80;

lAE19:
  v1695 = RAM[(v1688 + 41088u)];
  v1696 = v1685 - v1695;
  v1697 = v1696;
  v1698 = (v1697 >> 8) & 1;
  C = (v1698 ^ 1);
  Z = ((v1697 & 255u) == 0u);
  N = v1696 >> 7;
  if (v1698 != 0) {
    goto lADF9;
  } else {
    goto lAE66;
  }

lAE64:
  v1736 = Y;
  RAM[75] = v1736;
  goto lAE66;

lAE83:
  v1755 = v1756;
  S = (v1755 - 1);
  v1757 = RAM[778];
  v1758 = RAM[779];
  v1759 = (v1758 << 8) | v1757;
  PC = v1759;
  if ((v1759 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lADB1:
  v1612 = S;
  RAM[v1612 + 256u] = -83;
  v1613 = v1612 - 1;
  S = v1613;
  RAM[v1613 + 256u] = -77;
  v1756 = v1613;
  goto lAE83;

lB63D:
  v2932 = RAM[101];
  v2933 = S;
  RAM[v2933 + 256u] = v2932;
  v2934 = RAM[100];
  A = v2934;
  Z = v2934 == 0;
  N = v2934 >> 7;
  RAM[(v2933 - 1) + 256u] = v2934;
  RAM[(v2933 - 2) + 256u] = -74;
  v2935 = v2933 - 3;
  S = v2935;
  RAM[v2935 + 256u] = 69;
  v1756 = v2935;
  goto lAE83;

lAF27:
  v1836 = RAM[(v1816 + 256u)];
  v1837 = v1816 + 1;
  S = v1837;
  v1838 = RAM[(v1837 + 256u)];
  v1839 = (v1836 + 1) + (v1838 << 8);
  PC = v1839;
  if ((v1839 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lAF14:
  v1816 = v1817;
  S = (v1816 - 1);
  C = 1;
  v1818 = RAM[100];
  A = v1818;
  Z = v1818 == 0;
  N = v1818 >> 7;
  v1819 = v1818;
  V = 0;
  C = 1;
  v1820 = RAM[101];
  A = v1820;
  Z = v1820 == 0;
  N = v1820 >> 7;
  v1821 = v1820;
  v1822 = v1821 - 160;
  v1823 = v1822;
  V = (((((((v1823 ^ v1820) & 128u) == 0u) | (((s8 )v1820) < 0))&1))) ? 0 : 1;
  v1824 = v1822;
  A = v1824;
  Z = v1824 == 0;
  N = v1824 >> 7;
  v1825 = v1823 & 256u;
  v1826 = (v1825 >> 8u) ^ 1;
  C = v1826;
  if (v1825 == 0u) {
    goto bb18249;
  } else {
    goto lAF27;
  }

bb18444:
  A = 0;
  Z = 1;
  N = 0;
  RAM[112] = 0;
  v1847 = S;
  RAM[v1847 + 256u] = -81;
  v1848 = v1847 - 1;
  S = v1848;
  RAM[v1848 + 256u] = 61;
  v1817 = v1848;
  goto lAF14;

lAF6E:
  v1870 = S;
  RAM[v1870 + 256u] = -81;
  v1871 = v1870 - 1;
  S = v1871;
  RAM[v1871 + 256u] = 112;
  v1817 = v1871;
  goto lAF14;

bb18352:
  v1833 = v1834;
  V = v1833;
  v1835 = v1831;
  A = v1835;
  Z = v1835 == 0;
  N = v1835 >> 7;
  C = (((v1832 >> 8) & 1) ^ 1);
  goto lAF27;

bb18340:
  if (((((((v1820 ^ 128u))))) & 128u) == 0u) {
    goto bb18351;
  } else {
    v1834 = 1;
    goto bb18352;
  }

bb18291:
  v1828 = v1829;
  V = v1828;
  v1830 = ((v1827 >> 8) & 1) ^ 1;
  C = v1830;
  A = -29;
  Z = 0;
  N = 1;
  v1831 = (((226 - v1821))) + v1830;
  v1832 = v1831;
  if ((v1832 & 128u) == 0u) {
    goto bb18340;
  } else {
    goto bb18351;
  }

bb18279:
  if (((((((v1818 ^ 128u))))) & 128u) == 0u) {
    goto bb18290;
  } else {
    v1829 = 1;
    goto bb18291;
  }

bb18249:
  A = -94;
  Z = 0;
  N = 1;
  v1827 = (((((161 - v1819))) + v1826));
  if ((v1827 & 128u) == 0u) {
    goto bb18279;
  } else {
    goto bb18290;
  }

bb18290:
  v1829 = 0;
  goto bb18291;

bb18351:
  v1834 = 0;
  goto bb18352;

lAF5C:
  v1860 = S;
  v1861 = RAM[(((v1860 + 1) + 256u))];
  v1862 = v1860 + 2;
  S = v1862;
  v1863 = RAM[(v1862 + 256u)];
  v1864 = (v1861 + 1) + (v1863 << 8);
  PC = v1864;
  if ((v1864 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lAF3E:
  v1849 = C;
  if (v1849 == 0) {
    goto lAF5C;
  } else {
    goto bb18471;
  }

bb18471:
  v1850 = X;
  v1851 = v1850 - 84;
  v1852 = v1851;
  C = (((v1852 >> 8) & 1) ^ 1);
  Z = ((v1852 & 255u) == 0u);
  N = v1851 >> 7;
  if ((v1852 & 255u) == 0u) {
    goto bb18498;
  } else {
    goto lAF5C;
  }

bb18498:
  v1853 = Y;
  v1854 = v1853 - 201;
  v1855 = v1854;
  C = (((v1855 >> 8) & 1) ^ 1);
  Z = ((v1855 & 255u) == 0u);
  N = v1854 >> 7;
  if ((v1855 & 255u) == 0u) {
    goto bb18525;
  } else {
    goto lAF5C;
  }

lAF87:
  v1885 = X;
  RAM[100] = v1885;
  v1886 = Y;
  RAM[99] = v1886;
  v1887 = A;
  RAM[101] = v1887;
  Y = 0;
  Z = 1;
  N = 0;
  RAM[98] = 0;
  v1888 = S;
  v1889 = RAM[(((v1888 + 1) + 256u))];
  v1890 = v1888 + 2;
  S = v1890;
  v1891 = RAM[(v1890 + 256u)];
  v1892 = (v1889 + 1) + (v1891 << 8);
  PC = v1892;
  if ((v1892 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

bb20144:
  v2016 = RAM[(((v2015 + 1) + 256u))];
  v2017 = v2015 + 2;
  S = v2017;
  v2018 = RAM[(v2017 + 256u)];
  v2019 = (v2016 + 1) + (v2018 << 8);
  PC = v2019;
  if ((v2019 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lB11C:
  v2099 = S;
  v2100 = RAM[(((v2099 + 1) + 256u))];
  v2101 = v2099 + 2;
  S = v2101;
  v2102 = RAM[(v2101 + 256u)];
  v2103 = (v2100 + 1) + (v2102 << 8);
  PC = v2103;
  if ((v2103 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lB113:
  v2088 = A;
  v2089 = v2088;
  v2090 = v2089 - 65;
  v2091 = v2090;
  v2092 = (v2091 >> 8) & 1;
  v2093 = v2092 ^ 1;
  C = v2093;
  Z = ((v2091 & 255u) == 0u);
  N = v2090 >> 7;
  if (v2092 == 0) {
    goto bb20851;
  } else {
    goto lB11C;
  }

lAE92:
  v1762 = S;
  RAM[v1762 + 256u] = -82;
  RAM[(v1762 - 1) + 256u] = -108;
  S = (v1762 - 2);
  goto lB113;

lAE8D:
  v1761 = C;
  if (v1761 == 0) {
    goto lBCF3;
  } else {
    goto lAE92;
  }

lB097:
  v2025 = S;
  RAM[v2025 + 256u] = -80;
  RAM[(v2025 - 1) + 256u] = -103;
  S = (v2025 - 2);
  goto lB113;

bb20239:
  v2029 = S;
  RAM[v2029 + 256u] = -80;
  RAM[(v2029 - 1) + 256u] = -84;
  S = (v2029 - 2);
  goto lB113;

lB0A8:
  v2028 = C;
  if (v2028 == 0) {
    goto lB0AF;
  } else {
    goto bb20239;
  }

bb20280:
  v2034 = S;
  RAM[v2034 + 256u] = -80;
  RAM[(v2034 - 1) + 256u] = -73;
  S = (v2034 - 2);
  goto lB113;

lB0B3:
  v2033 = C;
  if (v2033 == 0) {
    goto lB0B0;
  } else {
    goto bb20280;
  }

lB113_2e_loopexit:
  A = v2081;
  X = v2084;
  C = v2083;
  Z = v2085;
  N = v2086;
  V = v2079;
  Y = 0;
  goto lB113;

bb20851:
  v2094 = (v2089 - 92) + v2093;
  V = (((((((v2094 ^ v2088) & 128u) == 0u) | (((s8 )v2088) > -1))&1))) ? 0 : 1;
  v2095 = v2094;
  A = v2095;
  Z = v2095 == 0;
  N = v2095 >> 7;
  C = 1;
  v2096 = (v2094 & 255) - 165;
  v2097 = v2096;
  V = (((((((v2097 ^ v2095) & 128u) == 0u) | (((s8 )v2095) < 0))&1))) ? 0 : 1;
  v2098 = v2096;
  A = v2098;
  Z = v2098 == 0;
  N = v2098 >> 7;
  C = (((v2097 >> 8) & 1) ^ 1);
  goto lB11C;

lB123:
  A = 19;
  Y = -65;
  Z = 0;
  N = 1;
  v2110 = RAM[(v2105 + 256u)];
  v2111 = v2104 + 2;
  S = v2111;
  v2112 = RAM[(v2111 + 256u)];
  v2113 = (v2110 + 1) + (v2112 << 8);
  PC = v2113;
  if ((v2113 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lB18F:
  v2167 = v2168;
  RAM[71] = v2163;
  RAM[72] = v2167;
  v2169 = S;
  v2170 = RAM[(((v2169 + 1) + 256u))];
  v2171 = v2169 + 2;
  S = v2171;
  v2172 = RAM[(v2171 + 256u)];
  v2173 = (v2170 + 1) + (v2172 << 8);
  PC = v2173;
  if ((v2173 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

bb21619:
  v2161 = v2162;
  V = v2161;
  v2163 = v2160;
  A = v2163;
  v2164 = (v2160 >> 8) & 1;
  C = v2164;
  v2165 = RAM[96];
  Y = v2165;
  Z = v2165 == 0;
  N = v2165 >> 7;
  if (v2164 == 0) {
    v2168 = v2165;
    goto lB18F;
  } else {
    goto bb21660;
  }

bb21607:
  if (((v2159 ^ v2160) & 128u) == 0u) {
    goto bb21618;
  } else {
    v2162 = 1;
    goto bb21619;
  }

lB185:
  v2159 = RAM[95];
  A = v2159;
  Z = v2159 == 0;
  N = v2159 >> 7;
  C = 0;
  v2160 = v2159 + 2;
  if (((s8 )v2159) < 0) {
    goto bb21618;
  } else {
    goto bb21607;
  }

lB160:
  v2141 = RAM[88];
  v2142 = RAM[89];
  RAM[47] = v2141;
  RAM[48] = (v2142 + 1);
  v2143 = RAM[69];
  v2144 = RAM[95];
  v2145 = RAM[96];
  RAM[(v2145 << 8u) | v2144] = v2143;
  v2146 = RAM[70];
  v2147 = RAM[95];
  v2148 = RAM[96];
  RAM[(((v2148 << 8u) | v2147) + 1u) & 65535u] = v2146;
  A = 0;
  v2149 = RAM[95];
  v2150 = RAM[96];
  RAM[(((v2150 << 8u) | v2149) + 2u) & 65535u] = 0;
  v2151 = RAM[95];
  v2152 = RAM[96];
  RAM[(((v2152 << 8u) | v2151) + 3u) & 65535u] = 0;
  v2153 = RAM[95];
  v2154 = RAM[96];
  RAM[(((v2154 << 8u) | v2153) + 4u) & 65535u] = 0;
  v2155 = RAM[95];
  v2156 = RAM[96];
  RAM[(((v2156 << 8u) | v2155) + 5u) & 65535u] = 0;
  Y = 6;
  Z = 0;
  N = 0;
  v2157 = RAM[95];
  v2158 = RAM[96];
  RAM[(((v2158 << 8u) | v2157) + 6u) & 65535u] = 0;
  goto lB185;

lB185_2e_loopexit:
  X = v2063;
  A = v2047;
  C = (((v2077 >> 8) & 1) ^ 1);
  Z = ((v2077 & 255u) == 0u);
  N = v2076 >> 7;
  V = v2065;
  Y = 1;
  goto lB185;

bb21618:
  v2162 = 0;
  goto bb21619;

bb21660:
  v2166 = v2165 + 1;
  Y = v2166;
  Z = v2166 == 0;
  N = v2166 >> 7;
  v2168 = v2166;
  goto lB18F;

lB1A0:
  v2191 = v2192;
  RAM[88] = v2187;
  RAM[89] = v2191;
  v2193 = RAM[(v2238 + 256u)];
  v2194 = v2237 + 2;
  S = v2194;
  v2195 = RAM[(v2194 + 256u)];
  v2196 = (v2193 + 1) + (v2195 << 8);
  PC = v2196;
  if ((v2196 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

bb21809:
  v2185 = v2186;
  V = v2185;
  v2187 = v2184;
  A = v2187;
  v2188 = (v2184 >> 8) & 1;
  C = v2188;
  v2189 = RAM[96];
  Y = v2189;
  Z = v2189 == 0;
  N = v2189 >> 7;
  if (v2188 == 0) {
    v2192 = v2189;
    goto lB1A0;
  } else {
    goto bb21850;
  }

bb21797:
  if (((v2181 ^ v2184) & 128u) == 0u) {
    goto bb21808;
  } else {
    v2186 = 1;
    goto bb21809;
  }

bb21755:
  v2179 = v2180;
  V = v2179;
  v2181 = v2178;
  A = v2181;
  Z = v2181 == 0;
  N = v2181 >> 7;
  v2182 = (v2178 >> 8) & 1;
  C = v2182;
  v2183 = RAM[95];
  v2184 = (((v2183 + (v2178 & 255)))) + v2182;
  if (((v2183 ^ v2181) & 128u) == 0u) {
    goto bb21797;
  } else {
    goto bb21808;
  }

bb21743:
  if (((v2177 ^ v2178) & 128u) == 0u) {
    goto bb21754;
  } else {
    v2180 = 1;
    goto bb21755;
  }

lB194:
  S = v2237;
  v2174 = RAM[11];
  v2175 = (v2174 >> 7);
  C = v2175;
  v2176 = v2174 << 1;
  Z = ((v2176 & 254u) == 0u);
  N = ((v2174 >> 6) & 1);
  v2177 = v2176;
  A = v2177;
  v2178 = (v2175 + 5) + (v2176 & 254);
  if (((s8 )v2177) < 0) {
    goto bb21754;
  } else {
    goto bb21743;
  }

bb22883:
  RAM[v2240 + 256u] = -78;
  S = v2238;
  RAM[v2238 + 256u] = 85;
  goto lB194;

lB261:
  X = v2254;
  A = v2252;
  C = (((v2260 >> 8) & 1) ^ 1);
  Z = ((v2260 & 255u) == 0u);
  N = v2259 >> 7;
  V = v2250;
  Y = v2248;
  *p15 = -78;
  S = v2238;
  RAM[v2238 + 256u] = 99;
  goto lB194;

bb21754:
  v2180 = 0;
  goto bb21755;

bb21808:
  v2186 = 0;
  goto bb21809;

bb21850:
  v2190 = v2189 + 1;
  Y = v2190;
  Z = v2190 == 0;
  N = v2190 >> 7;
  v2192 = v2190;
  goto lB1A0;

lB34B:
  v2468 = S;
  v2469 = RAM[(((v2468 + 1) + 256u))];
  v2470 = v2468 + 2;
  S = v2470;
  v2471 = RAM[(v2470 + 256u)];
  v2472 = (v2469 + 1) + (v2471 << 8);
  PC = v2472;
  if ((v2472 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

bb24608:
  v2465 = v2466;
  V = v2465;
  v2467 = v2464;
  C = (v2464 >> 8) & 1;
  RAM[72] = v2467;
  Y = v2467;
  A = v2458;
  Z = v2459;
  N = v2460;
  goto lB34B;

bb24596:
  if (((v2462 ^ v2464) & 128u) == 0u) {
    goto bb24607;
  } else {
    v2466 = 1;
    goto bb24608;
  }

bb24541:
  v2456 = v2457;
  V = v2456;
  v2458 = v2455;
  v2459 = v2458 == 0;
  v2460 = (v2458 >> 7);
  v2461 = (v2455 >> 8) & 1;
  C = v2461;
  RAM[71] = v2458;
  v2462 = Y;
  A = v2462;
  Z = v2462 == 0;
  N = v2462 >> 7;
  v2463 = RAM[89];
  v2464 = (v2463 + v2462) + v2461;
  if (((v2463 ^ v2462) & 128u) == 0u) {
    goto bb24596;
  } else {
    goto bb24607;
  }

bb24529:
  if (((v2452 ^ v2455) & 128u) == 0u) {
    goto bb24540;
  } else {
    v2457 = 1;
    goto bb24541;
  }

lB33E:
  v2452 = X;
  A = v2452;
  Z = v2452 == 0;
  N = v2452 >> 7;
  v2453 = RAM[88];
  v2454 = C;
  v2455 = (v2453 + v2452) + (((s16 )(s8 )v2454));
  if (((v2453 ^ v2452) & 128u) == 0u) {
    goto bb24529;
  } else {
    goto bb24540;
  }

bb24540:
  v2457 = 0;
  goto bb24541;

bb24607:
  v2466 = 0;
  goto bb24608;

bb25109:
  X = v2529;
  A = v2527;
  Z = (v2503 == 1);
  N = v2531 >> 7;
  C = v2525;
  Y = v2523;
  RAM[93] = v2531;
  RAM[113] = v2509;
  RAM[114] = v2512;
  V = v2521;
  v2533 = RAM[(((v2484 + 1) + 256u))];
  v2534 = v2484 + 2;
  S = v2534;
  v2535 = RAM[(v2534 + 256u)];
  v2536 = (v2533 + 1) + (v2535 << 8);
  PC = v2536;
  if ((v2536 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lB44F:
  v2625 = S;
  v2626 = RAM[(((v2625 + 1) + 256u))];
  v2627 = RAM[78];
  v2628 = RAM[79];
  RAM[(v2628 << 8u) | v2627] = v2626;
  v2629 = RAM[(((v2625 + 2) + 256u))];
  v2630 = RAM[78];
  v2631 = RAM[79];
  RAM[(((v2631 << 8u) | v2630) + 1u) & 65535u] = v2629;
  v2632 = RAM[(((v2625 + 3) + 256u))];
  v2633 = RAM[78];
  v2634 = RAM[79];
  RAM[(((v2634 << 8u) | v2633) + 2u) & 65535u] = v2632;
  v2635 = RAM[(((v2625 + 4) + 256u))];
  v2636 = RAM[78];
  v2637 = RAM[79];
  RAM[(((v2637 << 8u) | v2636) + 3u) & 65535u] = v2635;
  v2638 = RAM[(((v2625 + 5) + 256u))];
  A = v2638;
  Y = 4;
  Z = 0;
  N = 0;
  v2639 = RAM[78];
  v2640 = RAM[79];
  RAM[(((v2640 << 8u) | v2639) + 4u) & 65535u] = v2638;
  v2641 = RAM[(((v2625 + 6) + 256u))];
  v2642 = v2625 + 7;
  S = v2642;
  v2643 = RAM[(v2642 + 256u)];
  v2644 = (v2641 + 1) + (v2643 << 8);
  PC = v2644;
  if ((v2644 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lB449:
  v2621 = S;
  v2622 = RAM[(((v2621 + 1) + 256u))];
  RAM[122] = v2622;
  v2623 = v2621 + 2;
  S = v2623;
  v2624 = RAM[(v2623 + 256u)];
  A = v2624;
  Z = v2624 == 0;
  N = v2624 >> 7;
  RAM[123] = v2624;
  goto lB44F;

lB480:
  v2661 = X;
  RAM[98] = v2661;
  v2662 = Y;
  RAM[99] = v2662;
  v2663 = A;
  RAM[97] = v2663;
  v2664 = S;
  v2665 = RAM[(((v2664 + 1) + 256u))];
  v2666 = v2664 + 2;
  S = v2666;
  v2667 = RAM[(v2666 + 256u)];
  v2668 = (v2665 + 1) + (v2667 << 8);
  PC = v2668;
  if ((v2668 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lB4D5:
  v2712 = RAM[97];
  v2713 = v2709;
  *((&RAM[v2713])) = v2712;
  v2714 = RAM[98];
  RAM[(v2713 + 1u) & 255u] = v2714;
  v2715 = RAM[99];
  A = v2715;
  RAM[(v2713 + 2u) & 255u] = v2715;
  RAM[100] = v2709;
  RAM[101] = 0;
  RAM[112] = 0;
  Y = -1;
  RAM[13] = -1;
  RAM[23] = v2709;
  v2716 = v2709 + 3;
  X = v2716;
  Z = v2716 == 0;
  N = v2716 >> 7;
  RAM[22] = v2716;
  v2717 = S;
  v2718 = RAM[(((v2717 + 1) + 256u))];
  v2719 = v2717 + 2;
  S = v2719;
  v2720 = RAM[(v2719 + 256u)];
  v2721 = (v2718 + 1) + (v2720 << 8);
  PC = v2721;
  if ((v2721 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lB50B:
  RAM[51] = v2732;
  RAM[52] = v2736;
  RAM[53] = v2732;
  RAM[54] = v2736;
  X = v2732;
  v2746 = RAM[(v2724 + 256u)];
  A = v2746;
  Z = v2746 == 0;
  N = v2746 >> 7;
  v2747 = RAM[(((v2724 + 1) + 256u))];
  v2748 = v2724 + 2;
  S = v2748;
  v2749 = RAM[(v2748 + 256u)];
  v2750 = (v2747 + 1) + (v2749 << 8);
  PC = v2750;
  if ((v2750 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lB601:
  v2899 = RAM[35];
  X = v2899;
  Y = 0;
  Z = 1;
  N = 0;
  v2900 = S;
  v2901 = RAM[(((v2900 + 1) + 256u))];
  v2902 = v2900 + 2;
  S = v2902;
  v2903 = RAM[(v2902 + 256u)];
  v2904 = (v2901 + 1) + (v2903 << 8);
  PC = v2904;
  if ((v2904 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

bb28762:
  v2894 = v2895;
  V = v2894;
  v2896 = v2893;
  A = v2896;
  Z = v2896 == 0;
  N = v2896 >> 7;
  v2897 = (v2893 >> 8) & 1;
  C = v2897;
  RAM[34] = v2896;
  if (v2897 == 0) {
    goto lB601;
  } else {
    goto bb28792;
  }

bb28750:
  if (((v2892 ^ v2893) & 128u) == 0u) {
    goto bb28761;
  } else {
    v2895 = 1;
    goto bb28762;
  }

lB5F6:
  v2888 = v2889;
  v2890 = v2891;
  v2892 = RAM[83];
  A = v2892;
  Z = v2892 == 0;
  N = v2892 >> 7;
  C = 0;
  v2893 = v2890 + v2892;
  if (((v2890 ^ v2892) & 128u) == 0u) {
    goto bb28750;
  } else {
    goto bb28761;
  }

lB5BD:
  v2854 = RAM[34];
  v2855 = RAM[35];
  v2856 = (v2855 << 8u) | v2854;
  v2857 = Y;
  v2858 = RAM[(((v2856 + v2857) & 65535u))];
  A = v2858;
  Z = v2858 == 0;
  N = v2858 >> 7;
  if (((s8 )v2858) < 0) {
    v2889 = v2855;
    v2891 = v2854;
    goto lB5F6;
  } else {
    goto bb28389;
  }

lB561:
  v2779 = S;
  RAM[v2779 + 256u] = -75;
  RAM[(v2779 - 1) + 256u] = 99;
  S = (v2779 - 2);
  goto lB5BD;

bb28389:
  v2859 = v2857 + 1;
  Y = v2859;
  v2860 = RAM[(((v2856 + v2859) & 65535u))];
  A = v2860;
  Z = v2860 == 0;
  N = v2860 >> 7;
  if (((s8 )v2860) < 0) {
    goto bb28430;
  } else {
    v2889 = v2855;
    v2891 = v2854;
    goto lB5F6;
  }

lB5C7:
  v2862 = RAM[34];
  v2863 = RAM[35];
  v2864 = (v2863 << 8u) | v2862;
  v2865 = Y;
  v2866 = RAM[(((v2864 + v2865) & 65535u))];
  A = v2866;
  Z = v2866 == 0;
  N = v2866 >> 7;
  if (v2866 == 0) {
    v2889 = v2863;
    v2891 = v2862;
    goto lB5F6;
  } else {
    goto bb28471;
  }

bb27516:
  v2767 = S;
  RAM[v2767 + 256u] = -75;
  RAM[(v2767 - 1) + 256u] = 74;
  S = (v2767 - 2);
  goto lB5C7;

lB5B8:
  v2852 = S;
  RAM[v2852 + 256u] = -75;
  RAM[(v2852 - 1) + 256u] = -70;
  S = (v2852 - 2);
  goto lB5C7;

bb28430:
  v2861 = v2857 + 2;
  Y = v2861;
  Z = v2861 == 0;
  N = v2861 >> 7;
  goto lB5C7;

bb28584:
  if ((v2873 & 255u) == 0u) {
    goto bb28589;
  } else {
    v2889 = v2863;
    v2891 = v2862;
    goto lB5F6;
  }

bb28471:
  v2867 = RAM[(((v2864 + (v2865 + 1)) & 65535u))];
  X = v2867;
  v2868 = v2865 + 2;
  Y = v2868;
  v2869 = RAM[(((v2864 + v2868) & 65535u))];
  A = v2869;
  v2870 = v2869;
  v2871 = RAM[52];
  v2872 = v2870 - v2871;
  v2873 = v2872;
  v2874 = (v2873 >> 8) & 1;
  C = (v2874 ^ 1);
  Z = ((v2873 & 255u) == 0u);
  N = v2872 >> 7;
  if (v2874 == 0) {
    goto bb28584;
  } else {
    goto lB5DC;
  }

bb28589:
  v2875 = RAM[51];
  v2876 = v2867 - v2875;
  v2877 = v2876;
  v2878 = (v2877 >> 8) & 1;
  C = (v2878 ^ 1);
  Z = ((v2877 & 255u) == 0u);
  N = v2876 >> 7;
  if (v2878 == 0) {
    v2889 = v2863;
    v2891 = v2862;
    goto lB5F6;
  } else {
    goto lB5DC;
  }

lB5DC:
  v2879 = RAM[96];
  v2880 = v2870 - v2879;
  v2881 = v2880;
  v2882 = (v2881 >> 8) & 1;
  C = (v2882 ^ 1);
  Z = ((v2881 & 255u) == 0u);
  N = v2880 >> 7;
  if (v2882 == 0) {
    goto bb28646;
  } else {
    v2889 = v2863;
    v2891 = v2862;
    goto lB5F6;
  }

bb28651:
  v2883 = RAM[95];
  v2884 = v2867 - v2883;
  v2885 = v2884;
  v2886 = (v2885 >> 8) & 1;
  C = (v2886 ^ 1);
  Z = ((v2885 & 255u) == 0u);
  N = v2884 >> 7;
  if (v2886 == 0) {
    goto lB5E6;
  } else {
    v2889 = v2863;
    v2891 = v2862;
    goto lB5F6;
  }

bb28646:
  if ((v2881 & 255u) == 0u) {
    goto bb28651;
  } else {
    goto lB5E6;
  }

lB5E6:
  RAM[95] = v2867;
  RAM[96] = v2869;
  X = v2863;
  RAM[78] = v2862;
  RAM[79] = v2863;
  v2887 = RAM[83];
  A = v2887;
  Z = v2887 == 0;
  N = v2887 >> 7;
  RAM[85] = v2887;
  v2889 = v2863;
  v2891 = v2862;
  goto lB5F6;

bb28761:
  v2895 = 0;
  goto bb28762;

bb28792:
  v2898 = v2888 + 1;
  RAM[35] = v2898;
  Z = v2898 == 0;
  N = v2898 >> 7;
  goto lB601;

lB6A2:
  v2998 = RAM[(((v2975 + 1) + 256u))];
  v2999 = v2975 + 2;
  S = v2999;
  v3000 = RAM[(v2999 + 256u)];
  v3001 = (v2998 + 1) + (v3000 << 8);
  PC = v3001;
  if ((v3001 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

bb29838:
  v2992 = v2993;
  V = v2992;
  v2994 = v2991;
  A = v2994;
  Z = v2994 == 0;
  N = v2994 >> 7;
  v2995 = (v2991 >> 8) & 1;
  C = v2995;
  RAM[53] = v2994;
  if (v2995 == 0) {
    goto lB6A2;
  } else {
    goto bb29868;
  }

bb29826:
  if (((v2988 ^ v2991) & 128u) == 0u) {
    goto bb29837;
  } else {
    v2993 = 1;
    goto bb29838;
  }

lB699:
  v2988 = v2989;
  C = 0;
  v2990 = RAM[53];
  v2991 = v2990 + v2988;
  if (((v2990 ^ v2988) & 128u) == 0u) {
    goto bb29826;
  } else {
    goto bb29837;
  }

lB68C:
  v2975 = v2976;
  v2977 = A;
  Y = v2977;
  Z = v2977 == 0;
  N = v2977 >> 7;
  if (v2977 == 0) {
    v2989 = v2977;
    goto lB699;
  } else {
    goto bb29719;
  }

lB4C3:
  v2705 = RAM[111];
  X = v2705;
  v2706 = RAM[112];
  Y = v2706;
  Z = v2706 == 0;
  N = v2706 >> 7;
  v2707 = S;
  RAM[v2707 + 256u] = -76;
  RAM[(v2707 - 1) + 256u] = -55;
  v2708 = v2707 - 2;
  S = v2708;
  RAM[34] = v2705;
  RAM[35] = v2706;
  v2976 = v2708;
  goto lB68C;

lB66A:
  v2957 = S;
  RAM[v2957 + 256u] = -74;
  RAM[(v2957 - 1) + 256u] = 108;
  v2958 = v2957 - 2;
  S = v2958;
  v2976 = v2958;
  goto lB68C;

lB67A:
  v2963 = v2964;
  v2965 = v2963 - 1;
  v2966 = RAM[111];
  v2967 = RAM[112];
  v2968 = RAM[(((v2967 << 8u) | v2966))];
  RAM[v2965 + 256u] = v2968;
  v2969 = RAM[111];
  v2970 = RAM[112];
  v2971 = (v2970 << 8u) | v2969;
  v2972 = RAM[(((v2971 + 1u) & 65535u))];
  X = v2972;
  v2973 = RAM[(((v2971 + 2u) & 65535u))];
  Y = v2973;
  S = v2965;
  v2974 = RAM[(v2965 + 256u)];
  A = v2974;
  Z = v2974 == 0;
  N = v2974 >> 7;
  RAM[34] = v2972;
  RAM[35] = v2973;
  v2976 = v2965;
  goto lB68C;

lAA59:
  v1185 = RAM[80];
  A = v1185;
  v1186 = RAM[81];
  Y = v1186;
  Z = v1186 == 0;
  N = v1186 >> 7;
  RAM[111] = v1185;
  RAM[112] = v1186;
  v1187 = S;
  RAM[v1187 + 256u] = -86;
  v1188 = v1187 - 1;
  S = v1188;
  RAM[v1188 + 256u] = 99;
  v2964 = v1188;
  goto lB67A;

lB660:
  v2952 = S;
  RAM[v2952 + 256u] = -74;
  v2953 = v2952 - 1;
  S = v2953;
  RAM[v2953 + 256u] = 98;
  v2964 = v2953;
  goto lB67A;

lB725:
  A = v3121;
  Z = v3122;
  N = v3123;
  *p20 = -73;
  RAM[v3120 + 256u] = 40;
  S = v3119;
  v2976 = v3119;
  goto lB68C;

bb30862:
  v3129 = v3130;
  V = v3129;
  v3131 = v3128;
  A = v3131;
  Z = v3131 == 0;
  N = v3131 >> 7;
  v3132 = (v3128 >> 8) & 1;
  C = v3132;
  RAM[34] = v3131;
  if (v3132 == 0) {
    goto lB725;
  } else {
    goto bb30892;
  }

bb30850:
  if (((v3126 ^ v3128) & 128u) == 0u) {
    goto bb30861;
  } else {
    v3130 = 1;
    goto bb30862;
  }

lB719:
  v3119 = S;
  v3120 = v3119 + 1;
  v3121 = RAM[(v3120 + 256u)];
  v3122 = v3121 == 0;
  v3123 = (v3121 >> 7);
  Y = v3121;
  v3124 = v3119 + 2;
  S = v3124;
  p20 = &RAM[(v3124 + 256u)];
  v3126 = *p20;
  A = v3126;
  Z = v3126 == 0;
  N = v3126 >> 7;
  C = 0;
  v3127 = RAM[34];
  v3128 = v3127 + v3126;
  if (((v3127 ^ v3126) & 128u) == 0u) {
    goto bb30850;
  } else {
    goto bb30861;
  }

bb30861:
  v3130 = 0;
  goto bb30862;

bb30892:
  v3133 = RAM[35];
  v3134 = v3133 + 1;
  RAM[35] = v3134;
  Z = v3134 == 0;
  N = v3134 >> 7;
  goto lB725;

bb29790:
  Y = 0;
  S = v2975;
  v2987 = RAM[(v2975 + 256u)];
  A = v2987;
  Z = v2987 == 0;
  N = v2987 >> 7;
  v2989 = v2987;
  goto lB699;

lB690:
  v2978 = v2979;
  v2980 = RAM[34];
  v2981 = RAM[35];
  v2982 = (((v2977 - v2978) - 1));
  v2983 = RAM[(((((v2981 << 8u) | v2980) + v2982) & 65535u))];
  v2984 = RAM[53];
  v2985 = RAM[54];
  RAM[(((v2985 << 8u) | v2984) + v2982) & 65535u] = v2983;
  v2986 = v2978 + 1;
  if (v2986 == v2977) {
    goto bb29790;
  } else {
    v2979 = v2986;
    goto lB690;
  }

bb29719:
  RAM[v2975 + 256u] = v2977;
  S = (v2975 - 1);
  v2979 = 0;
  goto lB690;

bb29837:
  v2993 = 0;
  goto bb29838;

bb29868:
  v2996 = RAM[54];
  v2997 = v2996 + 1;
  RAM[54] = v2997;
  Z = v2997 == 0;
  N = v2997 >> 7;
  goto lB6A2;

lB6D6:
  RAM[34] = v3027;
  RAM[35] = v3028;
  v3048 = RAM[(((v3019 + 1) + 256u))];
  v3049 = v3019 + 2;
  S = v3049;
  v3050 = RAM[(v3049 + 256u)];
  v3051 = (v3048 + 1) + (v3050 << 8);
  PC = v3051;
  if ((v3051 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lB6B1:
  v3012 = N;
  v3013 = V;
  v3014 = B;
  v3015 = D;
  v3016 = I;
  v3017 = Z;
  v3018 = C;
  v3019 = S;
  RAM[v3019 + 256u] = (((((((((((((((((v3013 << 6) | (v3012 << 7)))) | (v3014 << 4)))) | (v3015 << 3)))) | (v3016 << 2)))) | v3018))) | (v3017 << 1));
  v3020 = v3019 - 1;
  v3021 = RAM[34];
  v3022 = RAM[35];
  v3023 = RAM[(((v3022 << 8u) | v3021))];
  RAM[v3020 + 256u] = v3023;
  v3024 = RAM[34];
  v3025 = RAM[35];
  v3026 = (v3025 << 8u) | v3024;
  v3027 = RAM[(((v3026 + 1u) & 65535u))];
  X = v3027;
  v3028 = RAM[(((v3026 + 2u) & 65535u))];
  Y = v3028;
  v3029 = RAM[(v3020 + 256u)];
  A = v3029;
  S = v3019;
  p19 = &RAM[(v3019 + 256u)];
  v3031 = *p19;
  N = v3031 >> 7;
  V = ((v3031 >> 6) & 1);
  B = ((v3031 >> 4) & 1);
  D = ((v3031 >> 3) & 1);
  I = ((v3031 >> 2) & 1);
  v3032 = (v3031 >> 1) & 1;
  Z = v3032;
  C = (v3031 & 1);
  if (v3032 == 0) {
    goto lB6D6;
  } else {
    goto bb30170;
  }

bb30170:
  v3033 = RAM[52];
  v3034 = v3028 - v3033;
  v3035 = v3034;
  C = (((v3035 >> 8) & 1) ^ 1);
  Z = ((v3035 & 255u) == 0u);
  N = v3034 >> 7;
  if ((v3035 & 255u) == 0u) {
    goto bb30199;
  } else {
    goto lB6D6;
  }

bb30199:
  v3036 = RAM[51];
  v3037 = v3027 - v3036;
  v3038 = v3037;
  C = (((v3038 >> 8) & 1) ^ 1);
  Z = ((v3038 & 255u) == 0u);
  N = v3037 >> 7;
  if ((v3038 & 255u) == 0u) {
    goto bb30228;
  } else {
    goto lB6D6;
  }

lB6D5:
  S = v3019;
  v3047 = RAM[(v3019 + 256u)];
  A = v3047;
  Z = v3047 == 0;
  N = v3047 >> 7;
  goto lB6D6;

bb30264:
  v3041 = v3042;
  V = v3041;
  v3043 = v3040;
  A = v3043;
  Z = v3043 == 0;
  N = v3043 >> 7;
  v3044 = (v3040 >> 8) & 1;
  C = v3044;
  RAM[51] = v3043;
  if (v3044 == 0) {
    goto lB6D5;
  } else {
    goto bb30294;
  }

bb30252:
  if (((v3029 ^ v3040) & 128u) == 0u) {
    goto bb30263;
  } else {
    v3042 = 1;
    goto bb30264;
  }

bb30228:
  *p19 = v3029;
  S = v3020;
  C = 0;
  v3039 = RAM[51];
  v3040 = v3039 + v3029;
  if (((v3039 ^ v3029) & 128u) == 0u) {
    goto bb30252;
  } else {
    goto bb30263;
  }

bb30263:
  v3042 = 0;
  goto bb30264;

bb30294:
  v3045 = RAM[52];
  v3046 = v3045 + 1;
  RAM[52] = v3046;
  Z = v3046 == 0;
  N = v3046 >> 7;
  goto lB6D5;

lB6EB:
  v3069 = RAM[(v3056 + 256u)];
  v3070 = v3056 + 1;
  S = v3070;
  v3071 = RAM[(v3070 + 256u)];
  v3072 = (v3069 + 1) + (v3071 << 8);
  PC = v3072;
  if ((v3072 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lB6DB:
  v3052 = v3053;
  v3054 = v3055;
  v3056 = v3057;
  S = (v3056 - 1);
  v3058 = RAM[24];
  v3059 = v3054 - v3058;
  v3060 = v3059;
  C = (((v3060 >> 8) & 1) ^ 1);
  Z = ((v3060 & 255u) == 0u);
  N = v3059 >> 7;
  if ((v3060 & 255u) == 0u) {
    goto bb30376;
  } else {
    goto lB6EB;
  }

lAA68:
  v1189 = v1190;
  v1191 = v1192;
  v1193 = v1194;
  Z = v1193;
  N = v1191 >> 7;
  RAM[80] = v1189;
  RAM[81] = v1191;
  v1195 = S;
  RAM[v1195 + 256u] = -86;
  v1196 = v1195 - 1;
  S = v1196;
  RAM[v1196 + 256u] = 110;
  v3053 = v1189;
  v3055 = v1191;
  v3057 = v1196;
  goto lB6DB;

lAA4B:
  A = v1162;
  Z = v1162 == 0;
  N = v1162 >> 7;
  Y = v1163;
  v1183 = v1163 == 0;
  v1190 = v1162;
  v1192 = v1163;
  v1194 = v1183;
  goto lAA68;

lAA64:
  A = 97;
  Z = 0;
  N = 0;
  Y = 0;
  v1190 = 97;
  v1192 = 0;
  v1194 = 1;
  goto lAA68;

lB6AA:
  v3006 = v3007;
  v3008 = v3009;
  RAM[34] = v3008;
  RAM[35] = v3006;
  v3010 = S;
  RAM[v3010 + 256u] = -74;
  v3011 = v3010 - 1;
  S = v3011;
  RAM[v3011 + 256u] = -80;
  v3053 = v3008;
  v3055 = v3006;
  v3057 = v3011;
  goto lB6DB;

lB037:
  v1960 = A;
  RAM[97] = v1960;
  v1961 = X;
  RAM[98] = v1961;
  v1962 = Y;
  RAM[99] = v1962;
  v1963 = RAM[108];
  A = v1963;
  v1964 = RAM[109];
  Y = v1964;
  Z = v1964 == 0;
  N = v1964 >> 7;
  v1965 = S;
  RAM[v1965 + 256u] = -80;
  RAM[(v1965 - 1) + 256u] = 67;
  S = (v1965 - 2);
  v3007 = v1964;
  v3009 = v1963;
  goto lB6AA;

lB663:
  v2954 = RAM[80];
  A = v2954;
  v2955 = RAM[81];
  Y = v2955;
  Z = v2955 == 0;
  N = v2955 >> 7;
  v2956 = S;
  RAM[v2956 + 256u] = -74;
  RAM[(v2956 - 1) + 256u] = 105;
  S = (v2956 - 2);
  v3007 = v2955;
  v3009 = v2954;
  goto lB6AA;

lB66D:
  v2959 = RAM[111];
  A = v2959;
  v2960 = RAM[112];
  Y = v2960;
  Z = v2960 == 0;
  N = v2960 >> 7;
  v2961 = S;
  RAM[v2961 + 256u] = -74;
  RAM[(v2961 - 1) + 256u] = 115;
  S = (v2961 - 2);
  v3007 = v2960;
  v3009 = v2959;
  goto lB6AA;

lB6A6:
  v3004 = RAM[100];
  A = v3004;
  v3005 = RAM[101];
  Y = v3005;
  Z = v3005 == 0;
  N = v3005 >> 7;
  v3007 = v3005;
  v3009 = v3004;
  goto lB6AA;

bb11513:
  RAM[v1117 + 256u] = -87;
  RAM[(v1117 - 1) + 256u] = -30;
  S = (v1117 - 2);
  goto lB6A6;

lAB21:
  v1339 = S;
  RAM[v1339 + 256u] = -85;
  RAM[(v1339 - 1) + 256u] = 35;
  S = (v1339 - 2);
  goto lB6A6;

lAA9A:
  *p4 = -100;
  S = (v1256 - 2);
  goto lAB21;

lAAB8:
  v1254 = RAM[13];
  Z = v1254 == 0;
  v1255 = (v1254 >> 7);
  N = v1255;
  V = ((v1254 >> 6) & 1);
  v1256 = S;
  RAM[v1256 + 256u] = -86;
  v1257 = v1256 - 1;
  S = v1257;
  p4 = &RAM[(v1257 + 256u)];
  if (v1255 == 0) {
    goto bb12682;
  } else {
    goto lAA9A;
  }

lAAC2:
  v1261 = S;
  RAM[v1261 + 256u] = -86;
  RAM[(v1261 - 1) + 256u] = -60;
  S = (v1261 - 2);
  goto lAB21;

lABCB:
  v1417 = S;
  RAM[v1417 + 256u] = -85;
  RAM[(v1417 - 1) + 256u] = -51;
  S = (v1417 - 2);
  goto lAB21;

lB02E:
  A = 0;
  RAM[13] = 0;
  v1957 = RAM[77];
  v1958 = v1957 - 1;
  RAM[77] = v1958;
  Z = (v1957 == 1);
  N = v1958 >> 7;
  v1959 = S;
  RAM[v1959 + 256u] = -80;
  RAM[(v1959 - 1) + 256u] = 54;
  S = (v1959 - 2);
  goto lB6A6;

lB019:
  v1951 = C;
  if (v1951 == 0) {
    goto bb19585;
  } else {
    goto lB02E;
  }

bb25146:
  v2538 = S;
  RAM[v2538 + 256u] = -77;
  RAM[(v2538 - 1) + 256u] = -125;
  S = (v2538 - 2);
  goto lB6A6;

lB712:
  v3116 = RAM[80];
  A = v3116;
  v3117 = RAM[81];
  Y = v3117;
  Z = v3117 == 0;
  N = v3117 >> 7;
  v3118 = S;
  RAM[v3118 + 256u] = -73;
  RAM[(v3118 - 1) + 256u] = 24;
  S = (v3118 - 2);
  v3007 = v3117;
  v3009 = v3116;
  goto lB6AA;

bb30376:
  v3061 = v3052;
  v3062 = RAM[23];
  v3063 = v3061 - v3062;
  v3064 = v3063;
  v3065 = ((v3064 >> 8) & 1) ^ 1;
  C = v3065;
  Z = ((v3064 & 255u) == 0u);
  N = v3063 >> 7;
  if ((v3064 & 255u) == 0u) {
    goto bb30405;
  } else {
    goto lB6EB;
  }

bb30405:
  RAM[22] = v3052;
  v3066 = (v3061 - 4) + v3065;
  v3067 = v3066;
  V = (((((((v3067 ^ v3052) & 128u) == 0u) | (((s8 )v3052) > -1))&1))) ? 0 : 1;
  v3068 = v3066;
  A = v3068;
  C = (((v3067 >> 8) & 1) ^ 1);
  RAM[23] = v3068;
  Y = 0;
  Z = 1;
  N = 0;
  goto lB6EB;

lB764:
  v3179 = S;
  v3180 = RAM[(((v3179 + 1) + 256u))];
  v3181 = RAM[(((v3179 + 2) + 256u))];
  RAM[85] = v3181;
  v3182 = RAM[(((v3179 + 5) + 256u))];
  X = v3182;
  v3183 = v3179 + 6;
  v3184 = RAM[(v3183 + 256u)];
  RAM[80] = v3184;
  v3185 = v3179 + 7;
  p21 = &RAM[(v3185 + 256u)];
  v3187 = *p21;
  RAM[81] = v3187;
  *p21 = v3181;
  RAM[v3183 + 256u] = v3180;
  Y = 0;
  A = v3182;
  Z = v3182 == 0;
  N = v3182 >> 7;
  v3188 = RAM[(v3183 + 256u)];
  S = v3185;
  v3189 = RAM[(v3185 + 256u)];
  v3190 = (v3188 + 1) + (v3189 << 8);
  PC = v3190;
  if ((v3190 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lB785:
  X = 0;
  RAM[13] = 0;
  v3196 = A;
  Y = v3196;
  Z = v3196 == 0;
  N = v3196 >> 7;
  v3197 = S;
  v3198 = RAM[(((v3197 + 1) + 256u))];
  v3199 = v3197 + 2;
  S = v3199;
  v3200 = RAM[(v3199 + 256u)];
  v3201 = (v3198 + 1) + (v3200 << 8);
  PC = v3201;
  if ((v3201 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lB7E2:
  v3238 = RAM[113];
  X = v3238;
  v3239 = RAM[114];
  Y = v3239;
  Z = v3239 == 0;
  N = v3239 >> 7;
  RAM[122] = v3238;
  RAM[123] = v3239;
  v3240 = S;
  v3241 = RAM[(((v3240 + 1) + 256u))];
  v3242 = v3240 + 2;
  S = v3242;
  v3243 = RAM[(v3242 + 256u)];
  v3244 = (v3241 + 1) + (v3243 << 8);
  PC = v3244;
  if ((v3244 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lAC80:
  v1492 = S;
  RAM[v1492 + 256u] = -84;
  RAM[(v1492 - 1) + 256u] = -126;
  S = (v1492 - 2);
  goto lB7E2;

lB7DD:
  v3233 = S;
  v3234 = v3233 + 1;
  S = v3234;
  v3235 = RAM[(v3234 + 256u)];
  A = v3235;
  Y = 0;
  Z = 1;
  N = 0;
  v3236 = RAM[36];
  v3237 = RAM[37];
  RAM[(v3237 << 8u) | v3236] = v3235;
  goto lB7E2;

lB804:
  v3257 = RAM[100];
  A = v3257;
  v3258 = RAM[101];
  Y = v3258;
  Z = v3258 == 0;
  N = v3258 >> 7;
  RAM[20] = v3258;
  RAM[21] = v3257;
  v3259 = S;
  v3260 = RAM[(((v3259 + 1) + 256u))];
  v3261 = v3259 + 2;
  S = v3261;
  v3262 = RAM[(v3261 + 256u)];
  v3263 = (v3260 + 1) + (v3262 << 8);
  PC = v3263;
  if ((v3263 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lB827:
  v3277 = X;
  A = v3277;
  Y = 0;
  Z = 1;
  N = 0;
  v3278 = RAM[20];
  v3279 = RAM[21];
  RAM[(v3279 << 8u) | v3278] = v3277;
  v3280 = S;
  v3281 = RAM[(((v3280 + 1) + 256u))];
  v3282 = v3280 + 2;
  S = v3282;
  v3283 = RAM[(v3282 + 256u)];
  v3284 = (v3281 + 1) + (v3283 << 8);
  PC = v3284;
  if ((v3284 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lB848:
  v3297 = S;
  v3298 = RAM[(((v3297 + 1) + 256u))];
  v3299 = v3297 + 2;
  S = v3299;
  v3300 = RAM[(v3299 + 256u)];
  v3301 = (v3298 + 1) + (v3300 << 8);
  PC = v3301;
  if ((v3301 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lB848_2e_loopexit:
  A = v3296;
  Z = v3296 == 0;
  N = v3296 >> 7;
  goto lB848;

lB840:
  v3296 = (v3294 ^ v3291) & v3295;
  if (v3296 == 0) {
    goto lB840;
  } else {
    goto lB848_2e_loopexit;
  }

lB83C:
  v3291 = X;
  RAM[74] = v3291;
  Y = 0;
  Z = 1;
  N = 0;
  v3292 = RAM[20];
  v3293 = RAM[21];
  v3294 = RAM[(((v3293 << 8u) | v3292))];
  v3295 = RAM[73];
  goto lB840;

lB8FB:
  v3431 = v3432;
  RAM[102] = v3431;
  v3433 = S;
  v3434 = RAM[(((v3433 + 1) + 256u))];
  v3435 = v3433 + 2;
  S = v3435;
  v3436 = RAM[(v3435 + 256u)];
  v3437 = (v3434 + 1) + (v3436 << 8);
  PC = v3437;
  if ((v3437 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lB8F9:
  v3429 = v3430;
  RAM[97] = v3429;
  v3432 = v3429;
  goto lB8FB;

lB8F7:
  A = 0;
  Z = 1;
  N = 0;
  v3430 = 0;
  goto lB8F9;

lB7B0:
  v3214 = Z;
  if (v3214 == 0) {
    goto lB7B5;
  } else {
    goto lB8F7;
  }

lB8F7_2e_loopexit:
  RAM[98] = v3411;
  X = v3405;
  Z = ((v3427 & 255u) == 0u);
  N = v3426 >> 7;
  V = v3423;
  A = v3425;
  C = v3428;
  RAM[99] = v3409;
  RAM[100] = v3407;
  RAM[101] = v3405;
  RAM[112] = 0;
  goto lB8F7;

bb43196:
  v4474 = RAM[105];
  A = v4474;
  Z = v4474 == 0;
  N = v4474 >> 7;
  if (v4474 == 0) {
    v3430 = v4474;
    goto lB8F9;
  } else {
    goto lBF84;
  }

lBF7B:
  v4473 = Z;
  if (v4473 == 0) {
    goto bb43196;
  } else {
    goto lBFED;
  }

bb36572:
  v3788 = v3789;
  V = v3788;
  v3790 = v3787;
  A = v3790;
  Z = v3790 == 0;
  N = v3790 >> 7;
  C = (v3787 >> 8) & 1;
  RAM[97] = v3790;
  if (v3790 == 0) {
    v3432 = v3790;
    goto lB8FB;
  } else {
    goto lBACF;
  }

bb36560:
  if (((v3780 ^ v3787) & 128u) == 0u) {
    goto bb36571;
  } else {
    v3789 = 1;
    goto bb36572;
  }

lBAC6:
  v3785 = v3786;
  v3787 = ((((v3777 & 255) + 128))) + (((s16 )(s8 )v3785));
  if (((s8 )v3780) > -1) {
    goto bb36571;
  } else {
    goto bb36560;
  }

bb36520:
  C = 0;
  v3784 = RAM[5136];
  Z = v3784 == 0;
  N = v3784 >> 7;
  V = ((v3784 >> 6) & 1);
  v3786 = 0;
  goto lBAC6;

lBAC4:
  if (v3781 == 0) {
    v3797 = v3772;
    goto lBADA;
  } else {
    v3786 = v3783;
    goto lBAC6;
  }

bb36571:
  v3789 = 0;
  goto bb36572;

lBADA:
  v3796 = v3797;
  S = (v3796 + 2);
  A = 0;
  Z = 1;
  N = 0;
  RAM[97] = 0;
  v3432 = 0;
  goto lB8FB;

lB946:
  v3530 = S;
  v3531 = RAM[(((v3530 + 1) + 256u))];
  v3532 = v3530 + 2;
  S = v3532;
  v3533 = RAM[(v3532 + 256u)];
  v3534 = (v3531 + 1) + (v3533 << 8);
  PC = v3534;
  if ((v3534 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

bb34225:
  v3518 = RAM[98];
  v3519 = C;
  v3520 = (v3519 << 8) | v3518;
  RAM[98] = (v3520 >> 1);
  v3521 = RAM[99];
  v3522 = ((((v3520 & 1) << 8))) | v3521;
  RAM[99] = (v3522 >> 1);
  v3523 = RAM[100];
  v3524 = ((((v3522 & 1) << 8))) | v3523;
  RAM[100] = (v3524 >> 1);
  v3525 = RAM[101];
  v3526 = ((((v3524 & 1) << 8))) | v3525;
  RAM[101] = (v3526 >> 1);
  v3527 = RAM[112];
  v3528 = ((((v3526 & 1) << 8))) | v3527;
  C = (v3528 & 1);
  v3529 = (v3528 >> 1);
  Z = ((v3529 & 255u) == 0u);
  N = ((v3528 >> 8) & 1);
  RAM[112] = v3529;
  goto lB946;

lB97D:
  v3553 = v3554;
  v3555 = RAM[(((v3553 + 1) + 256u))];
  v3556 = v3553 + 2;
  S = v3556;
  v3557 = RAM[(v3556 + 256u)];
  v3558 = (v3555 + 1) + (v3557 << 8);
  PC = v3558;
  if ((v3558 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lB94D:
  v3535 = v3536;
  v3537 = RAM[98];
  RAM[98] = (v3537 ^ -1);
  v3538 = RAM[99];
  RAM[99] = (v3538 ^ -1);
  v3539 = RAM[100];
  RAM[100] = (v3539 ^ -1);
  v3540 = RAM[101];
  RAM[101] = (v3540 ^ -1);
  v3541 = RAM[112];
  A = (v3541 ^ -1);
  v3542 = -v3541;
  RAM[112] = v3542;
  Z = v3541 == 0;
  N = v3542 >> 7;
  if (v3541 == 0) {
    v3544 = v3535;
    goto lB96F;
  } else {
    v3554 = v3535;
    goto lB97D;
  }

bb33373:
  v3395 = S;
  RAM[v3395 + 256u] = -72;
  RAM[(v3395 - 1) + 256u] = -42;
  v3396 = v3395 - 2;
  S = v3396;
  v3397 = RAM[102];
  v3398 = v3397 ^ -1;
  A = v3398;
  Z = (v3397 == 0xff);
  N = v3398 >> 7;
  RAM[102] = v3398;
  v3536 = v3396;
  goto lB94D;

bb39555:
  X = v4128;
  A = -1;
  Z = 0;
  N = 1;
  RAM[104] = -1;
  v4131 = S;
  RAM[v4131 + 256u] = -68;
  RAM[(v4131 - 1) + 256u] = -83;
  v4132 = v4131 - 2;
  S = v4132;
  v3536 = v4132;
  goto lB94D;

bb39509:
  v4128 = v4126;
  A = v4128;
  C = (((v4127 >> 8) & 1) ^ 1);
  v4129 = RAM[102];
  Z = v4129 == 0;
  v4130 = (v4129 >> 7);
  N = v4130;
  V = ((v4129 >> 6) & 1);
  if (v4130 == 0) {
    v4135 = v4128;
    goto lBCAF;
  } else {
    goto bb39555;
  }

bb39485:
  C = 1;
  v4126 = v4123 - 160;
  v4127 = v4126;
  if (((v4127 ^ v4123) & 128u) == 0u) {
    goto bb39509;
  } else {
    goto bb39501;
  }

lBC9B:
  v4123 = RAM[97];
  A = v4123;
  v4124 = v4123 == 0;
  Z = v4124;
  v4125 = (v4123 >> 7);
  N = v4125;
  if (v4123 == 0) {
    goto lBCE9;
  } else {
    goto bb39485;
  }

lAA11:
  v1146 = S;
  RAM[v1146 + 256u] = -86;
  RAM[(v1146 - 1) + 256u] = 19;
  S = (v1146 - 2);
  goto lBC9B;

lB1BF:
  v2201 = RAM[97];
  A = v2201;
  v2202 = v2201 - 144;
  v2203 = v2202;
  v2204 = (v2203 >> 8) & 1;
  C = (v2204 ^ 1);
  Z = ((v2203 & 255u) == 0u);
  N = v2202 >> 7;
  if (v2204 == 0) {
    goto bb21970;
  } else {
    goto lBC9B;
  }

lA9C7:
  v1105 = S;
  RAM[v1105 + 256u] = -87;
  RAM[(v1105 - 1) + 256u] = -55;
  S = (v1105 - 2);
  goto lB1BF;

lAFEB:
  v1934 = v1935;
  RAM[11] = v1934;
  v1936 = S;
  RAM[v1936 + 256u] = -81;
  RAM[(v1936 - 1) + 256u] = -17;
  S = (v1936 - 2);
  goto lB1BF;

lAFE6:
  Y = -1;
  v1933 = RAM[160];
  Z = v1933 == 0;
  N = v1933 >> 7;
  V = ((v1933 >> 6) & 1);
  v1935 = -1;
  goto lAFEB;

lAFE9:
  Y = 0;
  Z = 1;
  N = 0;
  v1935 = 0;
  goto lAFEB;

lAFFF:
  v1942 = S;
  RAM[v1942 + 256u] = -80;
  RAM[(v1942 - 1) + 256u] = 1;
  S = (v1942 - 2);
  goto lB1BF;

bb48000_2e_lAED4_crit_edge:
  v4926 = S;
  RAM[v4926 + 256u] = -82;
  RAM[(v4926 - 1) + 256u] = -42;
  S = (v4926 - 2);
  goto lB1BF;

bb32104:
  RAM[v3250 + 256u] = -72;
  RAM[(v3250 - 1) + 256u] = 3;
  S = (v3250 - 2);
  goto lBC9B;

bb39809:
  v4163 = S;
  RAM[v4163 + 256u] = -68;
  RAM[(v4163 - 1) + 256u] = -44;
  S = (v4163 - 2);
  goto lBC9B;

lBCCC:
  v4159 = RAM[97];
  A = v4159;
  v4160 = v4159 - 160;
  v4161 = v4160;
  v4162 = (v4161 >> 8) & 1;
  C = (v4162 ^ 1);
  Z = ((v4161 & 255u) == 0u);
  N = v4160 >> 7;
  if (v4162 == 0) {
    goto lBCF2;
  } else {
    goto bb39809;
  }

bb43261:
  v4477 = S;
  RAM[v4477 + 256u] = -65;
  RAM[(v4477 - 1) + 256u] = -111;
  S = (v4477 - 2);
  goto lBCCC;

lBF8B:
  v4476 = RAM[110];
  A = v4476;
  Z = v4476 == 0;
  N = v4476 >> 7;
  if (((s8 )v4476) < 0) {
    goto bb43261;
  } else {
    goto lBF9E;
  }

lE00E:
  v4521 = S;
  RAM[v4521 + 256u] = -32;
  RAM[(v4521 - 1) + 256u] = 16;
  S = (v4521 - 2);
  goto lBCCC;

lE27A:
  v4802 = S;
  RAM[v4802 + 256u] = -30;
  RAM[(v4802 - 1) + 256u] = 124;
  S = (v4802 - 2);
  goto lBCCC;

lBE32:
  v4343 = S;
  RAM[v4343 + 256u] = -66;
  RAM[(v4343 - 1) + 256u] = 52;
  S = (v4343 - 2);
  goto lBC9B;

lBE12:
  v4327 = Z;
  if (v4327 == 0) {
    goto bb41452;
  } else {
    goto lBE32;
  }

bb39501:
  goto bb39509;

lB96F:
  v3543 = v3544;
  v3545 = RAM[101];
  v3546 = v3545 + 1;
  RAM[101] = v3546;
  Z = v3546 == 0;
  N = v3546 >> 7;
  if (v3546 == 0) {
    goto bb34570;
  } else {
    v3554 = v3543;
    goto lB97D;
  }

lBC23:
  v4032 = v4033;
  RAM[v4032 + 256u] = -68;
  RAM[(v4032 - 1) + 256u] = 37;
  v4034 = v4032 - 2;
  S = v4034;
  v3544 = v4034;
  goto lB96F;

bb38702:
  v4029 = RAM[112];
  v4030 = (v4029 >> 7);
  C = v4030;
  v4031 = v4029 << 1;
  Z = ((v4031 & 254u) == 0u);
  N = ((v4029 >> 6) & 1);
  RAM[112] = v4031;
  if (v4030 == 0) {
    goto lBC1A;
  } else {
    v4033 = v4026;
    goto lBC23;
  }

lBC1B:
  v4026 = v4027;
  v4028 = RAM[97];
  A = v4028;
  Z = v4028 == 0;
  N = v4028 >> 7;
  if (v4028 == 0) {
    goto lBC1A;
  } else {
    goto bb38702;
  }

bb11344:
  v1102 = v1103;
  RAM[v1102 + 256u] = -87;
  RAM[(v1102 - 1) + 256u] = -58;
  v1104 = v1102 - 2;
  S = v1104;
  v4027 = v1104;
  goto lBC1B;

lA9C2:
  if (v1101 == 0) {
    goto lBBD0;
  } else {
    v1103 = v1099;
    goto bb11344;
  }

lAC8C:
  v1496 = RAM[14];
  A = v1496;
  Z = v1496 == 0;
  v1497 = (v1496 >> 7);
  N = v1497;
  v1498 = S;
  RAM[v1498 + 256u] = -84;
  RAM[(v1498 - 1) + 256u] = -112;
  v1499 = v1498 - 2;
  S = v1499;
  if (v1497 == 0) {
    goto lBBD0;
  } else {
    v1103 = v1499;
    goto bb11344;
  }

lAE43:
  v1709 = S;
  RAM[v1709 + 256u] = -82;
  RAM[(v1709 - 1) + 256u] = 69;
  v1710 = v1709 - 2;
  S = v1710;
  v4027 = v1710;
  goto lBC1B;

lA778:
  v764 = RAM[102];
  v765 = RAM[98];
  RAM[98] = ((((v764 | 127))) & v765);
  A = -117;
  Y = -89;
  Z = 0;
  N = 1;
  RAM[34] = -117;
  RAM[35] = -89;
  goto lAE43;

lAE38:
  v1702 = v1703;
  v1704 = A;
  Y = v1704;
  v1705 = v1702 + 1;
  v1706 = RAM[(v1705 + 256u)];
  RAM[34] = (v1706 + 1);
  p7 = &RAM[(((v1702 + 2) + 256u))];
  v1708 = *p7;
  RAM[35] = v1708;
  A = v1704;
  Z = v1704 == 0;
  N = v1704 >> 7;
  *p7 = v1704;
  S = v1705;
  goto lAE43;

lA7A2:
  v775 = S;
  RAM[v775 + 256u] = -89;
  RAM[(v775 - 1) + 256u] = -92;
  v776 = v775 - 2;
  S = v776;
  v1703 = v776;
  goto lAE38;

lADFA:
  v1673 = v1674;
  RAM[v1673 + 256u] = -83;
  RAM[(v1673 - 1) + 256u] = -4;
  S = (v1673 - 2);
  v1675 = Y;
  v1676 = v1675;
  v1677 = RAM[(v1676 + 41090u)];
  v1678 = S;
  RAM[v1678 + 256u] = v1677;
  v1679 = RAM[(v1676 + 41089u)];
  RAM[(v1678 - 1) + 256u] = v1679;
  RAM[(v1678 - 2) + 256u] = -82;
  RAM[(v1678 - 3) + 256u] = 42;
  v1680 = v1678 - 4;
  S = v1680;
  v1681 = RAM[102];
  A = v1681;
  v1682 = RAM[(v1676 + 41088u)];
  X = v1682;
  Z = v1682 == 0;
  N = v1682 >> 7;
  v1703 = v1680;
  goto lAE38;

lADF9:
  v1670 = S;
  v1671 = A;
  RAM[v1670 + 256u] = v1671;
  v1672 = v1670 - 1;
  S = v1672;
  v1674 = v1672;
  goto lADFA;

lAF0F:
  v1813 = S;
  v1814 = v1813 + 2;
  S = v1814;
  v1815 = RAM[(v1814 + 256u)];
  A = v1815;
  Z = v1815 == 0;
  N = v1815 >> 7;
  v1674 = v1814;
  goto lADFA;

bb17786:
  Y = 24;
  Z = 0;
  N = 0;
  goto lAF0F;

lAF0D:
  Y = 21;
  Z = 0;
  N = 0;
  goto lAF0F;

bb36905:
  v3830 = S;
  RAM[v3830 + 256u] = -69;
  RAM[(v3830 - 1) + 256u] = 22;
  v3831 = v3830 - 2;
  S = v3831;
  v4027 = v3831;
  goto lBC1B;

lBBD4:
  v3976 = S;
  RAM[v3976 + 256u] = -69;
  RAM[(v3976 - 1) + 256u] = -42;
  v3977 = v3976 - 2;
  S = v3977;
  v4027 = v3977;
  goto lBC1B;

bb25910:
  A = v2601;
  v2602 = RAM[72];
  Y = v2602;
  Z = v2602 == 0;
  N = v2602 >> 7;
  RAM[(v2598 - 1) + 256u] = -76;
  RAM[(v2598 - 2) + 256u] = 34;
  S = (v2598 - 3);
  goto lBBD4;

lB418:
  v2595 = v2596;
  v2597 = 4 - v2595;
  v2598 = v2590 - v2595;
  v2599 = RAM[71];
  v2600 = RAM[72];
  v2601 = RAM[(((((v2600 << 8u) | v2599) + v2597) & 65535u))];
  RAM[v2598 + 256u] = v2601;
  if (((s8 )(v2597 - 1)) < 0) {
    goto bb25910;
  } else {
    v2596 = (v2595 + 1);
    goto lB418;
  }

bb25849:
  RAM[72] = v2594;
  Y = 4;
  Z = 0;
  N = 0;
  v2596 = 0;
  goto lB418;

lBBCC:
  Y = 0;
  Z = 1;
  N = 0;
  goto lBBD4;

lBBCA:
  v3972 = v3973;
  S = (v3972 - 1);
  X = 87;
  Z = 0;
  N = 0;
  goto lBBCC;

lE043:
  v4554 = v4555;
  v4556 = v4557;
  RAM[113] = v4556;
  RAM[114] = v4554;
  v4558 = S;
  RAM[v4558 + 256u] = -32;
  v4559 = v4558 - 1;
  S = v4559;
  RAM[v4559 + 256u] = 73;
  v3973 = v4559;
  goto lBBCA;

lBA12:
  A = -63;
  Y = -71;
  Z = 0;
  N = 1;
  v3658 = S;
  RAM[v3658 + 256u] = -70;
  RAM[(v3658 - 1) + 256u] = 24;
  S = (v3658 - 2);
  v4555 = -71;
  v4557 = -63;
  goto lE043;

lE2AD:
  A = -17;
  Y = -30;
  Z = 0;
  N = 1;
  v4555 = -30;
  v4557 = -17;
  goto lE043;

lE2A7:
  v4816 = S;
  v4817 = v4816 + 1;
  S = v4817;
  p40 = &RAM[(v4817 + 256u)];
  v4819 = *p40;
  A = v4819;
  Z = v4819 == 0;
  N = v4819 >> 7;
  if (((s8 )v4819) < 0) {
    goto bb46554;
  } else {
    goto lE2AD;
  }

lE324:
  A = 62;
  Y = -29;
  Z = 0;
  N = 1;
  v4837 = S;
  RAM[v4837 + 256u] = -29;
  RAM[(v4837 - 1) + 256u] = 42;
  S = (v4837 - 2);
  v4555 = -29;
  v4557 = 62;
  goto lE043;

lE316:
  v4831 = RAM[97];
  A = v4831;
  v4832 = S;
  RAM[v4832 + 256u] = v4831;
  v4833 = v4832 - 1;
  S = v4833;
  v4834 = v4831 - 129;
  v4835 = v4834;
  v4836 = (v4835 >> 8) & 1;
  C = (v4836 ^ 1);
  Z = ((v4835 & 255u) == 0u);
  N = v4834 >> 7;
  if (v4836 == 0) {
    goto bb46822;
  } else {
    goto lE324;
  }

lE30E:
  v4827 = RAM[102];
  A = v4827;
  Z = v4827 == 0;
  v4828 = (v4827 >> 7);
  N = v4828;
  v4829 = S;
  RAM[v4829 + 256u] = v4827;
  v4830 = v4829 - 1;
  S = v4830;
  if (v4828 == 0) {
    goto lE316;
  } else {
    goto bb46767;
  }

lE2B4:
  v4820 = S;
  RAM[v4820 + 256u] = -30;
  v4821 = v4820 - 1;
  S = v4821;
  RAM[v4821 + 256u] = -74;
  v3973 = v4821;
  goto lBBCA;

lE05D:
  v4563 = v4564;
  RAM[v4563 + 256u] = -32;
  RAM[(v4563 - 1) + 256u] = 95;
  S = (v4563 - 2);
  X = 92;
  v4565 = RAM[22434];
  Z = v4565 == 0;
  N = v4565 >> 7;
  V = ((v4565 >> 6) & 1);
  goto lBBCC;

lE033:
  A = -60;
  Y = -65;
  Z = 0;
  N = 1;
  v4543 = S;
  RAM[v4543 + 256u] = -32;
  RAM[(v4543 - 1) + 256u] = 57;
  v4544 = v4543 - 2;
  S = v4544;
  RAM[113] = -60;
  RAM[114] = -65;
  v4564 = v4544;
  goto lE05D;

lE04F:
  v4561 = S;
  RAM[v4561 + 256u] = -32;
  RAM[(v4561 - 1) + 256u] = 81;
  v4562 = v4561 - 2;
  S = v4562;
  v4564 = v4562;
  goto lE05D;

lBBD0:
  v3974 = RAM[73];
  X = v3974;
  v3975 = RAM[74];
  Y = v3975;
  Z = v3975 == 0;
  N = v3975 >> 7;
  goto lBBD4;

lAD52:
  v1563 = S;
  RAM[v1563 + 256u] = -83;
  RAM[(v1563 - 1) + 256u] = 84;
  S = (v1563 - 2);
  goto lBBD0;

lBF84:
  X = 78;
  Y = 0;
  Z = 1;
  N = 0;
  v4475 = S;
  RAM[v4475 + 256u] = -65;
  RAM[(v4475 - 1) + 256u] = -118;
  S = (v4475 - 2);
  goto lBBD4;

lE0F2:
  X = -117;
  Y = 0;
  Z = 1;
  N = 0;
  goto lBBD4;

lE2BE:
  X = 78;
  Y = 0;
  Z = 1;
  N = 0;
  v4823 = S;
  RAM[v4823 + 256u] = -30;
  RAM[(v4823 - 1) + 256u] = -60;
  S = (v4823 - 2);
  goto lBBD4;

lBC0C:
  v4012 = v4013;
  RAM[v4012 + 256u] = -68;
  RAM[(v4012 - 1) + 256u] = 14;
  v4014 = v4012 - 2;
  S = v4014;
  v4027 = v4014;
  goto lBC1B;

lA9FC:
  v1135 = S;
  RAM[v1135 + 256u] = -87;
  RAM[(v1135 - 1) + 256u] = -2;
  v1136 = v1135 - 2;
  S = v1136;
  v4013 = v1136;
  goto lBC0C;

lBAE2:
  v3798 = v3799;
  RAM[v3798 + 256u] = -70;
  RAM[(v3798 - 1) + 256u] = -28;
  v3800 = v3798 - 2;
  S = v3800;
  v4013 = v3800;
  goto lBC0C;

lA9F2:
  v1129 = S;
  RAM[v1129 + 256u] = -87;
  RAM[(v1129 - 1) + 256u] = -12;
  v1130 = v1129 - 2;
  S = v1130;
  v3799 = v1130;
  goto lBAE2;

bb11733:
  v1144 = S;
  RAM[v1144 + 256u] = -86;
  RAM[(v1144 - 1) + 256u] = 16;
  v1145 = v1144 - 2;
  S = v1145;
  v3799 = v1145;
  goto lBAE2;

lAA07:
  v1140 = RAM[113];
  v1141 = v1140 + 1;
  Y = v1141;
  v1142 = v1141 - 6;
  v1143 = v1142;
  C = (((v1143 >> 8) & 1) ^ 1);
  Z = ((v1143 & 255u) == 0u);
  N = v1142 >> 7;
  if ((v1143 & 255u) == 0u) {
    goto bb11733;
  } else {
    v1126 = v1141;
    goto lA9ED;
  }

lBD5B:
  v4241 = S;
  RAM[v4241 + 256u] = -67;
  RAM[(v4241 - 1) + 256u] = 93;
  v4242 = v4241 - 2;
  S = v4242;
  v3799 = v4242;
  goto lBAE2;

bb40489:
  if (v4236 == 0) {
    goto lBD5B;
  } else {
    goto lBD52;
  }

bb40464:
  v4233 = v4234;
  V = v4233;
  v4235 = v4231;
  A = v4235;
  Z = v4235 == 0;
  v4236 = (v4235 >> 7);
  N = v4236;
  C = (((v4232 >> 8) & 1) ^ 1);
  RAM[94] = v4235;
  if (v4235 == 0) {
    goto lBD62;
  } else {
    goto bb40489;
  }

bb40452:
  if (((v4230 ^ v4228) & 128u) == 0u) {
    goto bb40463;
  } else {
    v4234 = 1;
    goto bb40464;
  }

lBD49:
  v4228 = v4229;
  C = 1;
  v4230 = RAM[93];
  v4231 = ((((v4228 - 1) - v4230))) + 1;
  v4232 = v4231;
  if (((v4232 ^ v4228) & 128u) == 0u) {
    goto bb40463;
  } else {
    goto bb40452;
  }

bb40348:
  v4220 = v4221;
  V = v4220;
  v4222 = v4218;
  A = v4222;
  Z = v4222 == 0;
  N = v4222 >> 7;
  C = (((v4219 >> 8) & 1) ^ 1);
  v4229 = v4222;
  goto lBD49;

bb40336:
  if ((v4217 & 128u) == 0u) {
    goto bb40347;
  } else {
    v4221 = 1;
    goto bb40348;
  }

bb40306:
  A = 0;
  Z = 1;
  N = 0;
  C = 1;
  v4217 = RAM[94];
  v4218 = -v4217;
  v4219 = v4218;
  if ((v4219 & 128u) == 0u) {
    goto bb40347;
  } else {
    goto bb40336;
  }

lBD35:
  v4215 = RAM[96];
  Z = v4215 == 0;
  v4216 = (v4215 >> 7);
  N = v4216;
  V = ((v4215 >> 6) & 1);
  if (v4216 == 0) {
    goto lBD47;
  } else {
    goto bb40306;
  }

bb40206:
  v4206 = v4197 - 43;
  v4207 = v4206;
  C = (((v4207 >> 8) & 1) ^ 1);
  Z = ((v4207 & 255u) == 0u);
  N = v4206 >> 7;
  if ((v4207 & 255u) == 0u) {
    goto lBD30;
  } else {
    goto lBD35;
  }

bb40179:
  v4204 = v4197 - 170;
  v4205 = v4204;
  C = (((v4205 >> 8) & 1) ^ 1);
  Z = ((v4205 & 255u) == 0u);
  N = v4204 >> 7;
  if ((v4205 & 255u) == 0u) {
    goto lBD30;
  } else {
    goto bb40206;
  }

bb40152:
  v4201 = v4197 - 45;
  v4202 = v4201;
  v4203 = ((v4202 >> 8) & 1) ^ 1;
  C = v4203;
  Z = ((v4202 & 255u) == 0u);
  N = v4201 >> 7;
  if ((v4202 & 255u) == 0u) {
    v4209 = v4203;
    goto lBD2E;
  } else {
    goto bb40179;
  }

bb40125:
  v4196 = A;
  v4197 = v4196;
  v4198 = v4197 - 171;
  v4199 = v4198;
  v4200 = ((v4199 >> 8) & 1) ^ 1;
  C = v4200;
  Z = ((v4199 & 255u) == 0u);
  N = v4198 >> 7;
  if ((v4199 & 255u) == 0u) {
    v4209 = v4200;
    goto lBD2E;
  } else {
    goto bb40152;
  }

bb40347:
  v4221 = 0;
  goto bb40348;

lBD47:
  v4227 = RAM[94];
  A = v4227;
  Z = v4227 == 0;
  N = v4227 >> 7;
  v4229 = v4227;
  goto lBD49;

bb40083:
  v4192 = v4188 - 69;
  v4193 = v4192;
  C = (((v4193 >> 8) & 1) ^ 1);
  Z = ((v4193 & 255u) == 0u);
  N = v4192 >> 7;
  if ((v4193 & 255u) == 0u) {
    goto bb40110;
  } else {
    goto lBD47;
  }

lBD0F:
  v4187 = A;
  v4188 = v4187;
  v4189 = v4188 - 46;
  v4190 = v4189;
  v4191 = ((v4190 >> 8) & 1) ^ 1;
  C = v4191;
  Z = ((v4190 & 255u) == 0u);
  N = v4189 >> 7;
  if ((v4190 & 255u) == 0u) {
    goto lBD41;
  } else {
    goto bb40083;
  }

lBD06:
  v4183 = v4180 - 43;
  v4184 = v4183;
  C = (((v4184 >> 8) & 1) ^ 1);
  Z = ((v4184 & 255u) == 0u);
  N = v4183 >> 7;
  if ((v4184 & 255u) == 0u) {
    goto lBD0A;
  } else {
    goto lBD0F;
  }

bb39984:
  v4179 = A;
  v4180 = v4179;
  v4181 = v4180 - 45;
  v4182 = v4181;
  C = (((v4182 >> 8) & 1) ^ 1);
  Z = ((v4182 & 255u) == 0u);
  N = v4181 >> 7;
  if ((v4182 & 255u) == 0u) {
    goto bb40011;
  } else {
    goto lBD06;
  }

bb39979:
  X = v4177;
  Z = (v4176 == 1);
  N = v4177 >> 7;
  v4178 = C;
  if (v4178 == 0) {
    goto lBD0D;
  } else {
    goto bb39984;
  }

lBCF7:
  v4174 = v4175;
  v4176 = 10 - v4174;
  RAM[(v4176 + 93u) & 255u] = 0;
  v4177 = v4176 - 1;
  if (((s8 )v4177) < 0) {
    goto bb39979;
  } else {
    v4175 = (v4174 + 1);
    goto lBCF7;
  }

lBCF3:
  Y = 0;
  X = 10;
  Z = 0;
  N = 0;
  v4175 = 0;
  goto lBCF7;

lAC89:
  v1495 = S;
  RAM[v1495 + 256u] = -84;
  RAM[(v1495 - 1) + 256u] = -117;
  S = (v1495 - 2);
  goto lBCF3;

lB7DA:
  v3232 = S;
  RAM[v3232 + 256u] = -73;
  RAM[(v3232 - 1) + 256u] = -36;
  S = (v3232 - 2);
  goto lBCF3;

lBD0D:
  v4186 = C;
  if (v4186 == 0) {
    goto lBD6A;
  } else {
    goto lBD0F;
  }

lBD41:
  v4223 = RAM[95];
  v4224 = (v4191 << 8) | v4223;
  C = (v4224 & 1);
  v4225 = (v4224 >> 1);
  RAM[95] = v4225;
  Z = v4225 == 0;
  N = ((v4224 >> 8) & 1);
  v4226 = v4224 & 128;
  V = (v4226 >> 7);
  if (v4226 == 0) {
    goto lBD0A;
  } else {
    goto lBD47;
  }

bb40463:
  v4234 = 0;
  goto bb40464;

lBD5E:
  v4243 = RAM[94];
  v4244 = v4243 - 1;
  RAM[94] = v4244;
  Z = (v4243 == 1);
  N = v4244 >> 7;
  if (v4243 == 1) {
    goto lBD62;
  } else {
    goto lBD5B;
  }

lBD71:
  RAM[v4253 + 256u] = -67;
  RAM[(v4251 - 2) + 256u] = 115;
  v4258 = v4251 - 3;
  S = v4258;
  v3799 = v4258;
  goto lBAE2;

lBD6A:
  v4251 = S;
  v4252 = A;
  RAM[v4251 + 256u] = v4252;
  v4253 = v4251 - 1;
  S = v4253;
  v4254 = RAM[95];
  Z = v4254 == 0;
  v4255 = (v4254 >> 7);
  N = v4255;
  V = ((v4254 >> 6) & 1);
  if (v4255 == 0) {
    goto lBD71;
  } else {
    goto bb40622;
  }

bb40622:
  v4256 = RAM[93];
  v4257 = v4256 + 1;
  RAM[93] = v4257;
  Z = v4257 == 0;
  N = v4257 >> 7;
  goto lBD71;

lBE21:
  v4333 = S;
  RAM[v4333 + 256u] = -66;
  RAM[(v4333 - 1) + 256u] = 35;
  v4334 = v4333 - 2;
  S = v4334;
  v3799 = v4334;
  goto lBAE2;

lBE1D:
  v4331 = Z;
  if (v4331 == 0) {
    goto bb41493;
  } else {
    goto lBE21;
  }

bb41493:
  v4332 = N;
  if (v4332 == 0) {
    goto lBE2F;
  } else {
    goto lBE21;
  }

lBAFE:
  v3817 = v3818;
  RAM[(v3817 - 1) + 256u] = -69;
  RAM[(v3817 - 2) + 256u] = 0;
  v3819 = v3817 - 3;
  S = v3819;
  v4013 = v3819;
  goto lBC0C;

lBD52:
  v4237 = S;
  RAM[v4237 + 256u] = -67;
  v4238 = v4237 - 1;
  S = v4238;
  RAM[v4238 + 256u] = 84;
  v3818 = v4238;
  goto lBAFE;

lBD55:
  v4239 = RAM[94];
  v4240 = v4239 + 1;
  RAM[94] = v4240;
  Z = v4240 == 0;
  N = v4240 >> 7;
  if (v4240 == 0) {
    goto lBD62;
  } else {
    goto lBD52;
  }

lBE28:
  v4337 = S;
  RAM[v4337 + 256u] = -66;
  v4338 = v4337 - 1;
  S = v4338;
  RAM[v4338 + 256u] = 42;
  v3818 = v4338;
  goto lBAFE;

bb41452:
  v4328 = N;
  if (v4328 == 0) {
    goto lBE28;
  } else {
    goto lBE16;
  }

lBE24:
  v4335 = RAM[93];
  v4336 = v4335 - 1;
  RAM[93] = v4336;
  Z = (v4335 == 1);
  N = v4336 >> 7;
  if (v4335 == 1) {
    goto lBE28;
  } else {
    goto lBE16;
  }

lBD7E:
  v4266 = v4267;
  v4268 = S;
  RAM[v4268 + 256u] = v4266;
  RAM[(v4268 - 1) + 256u] = -67;
  RAM[(v4268 - 2) + 256u] = -127;
  v4269 = v4268 - 3;
  S = v4269;
  v4013 = v4269;
  goto lBC0C;

lAA27:
  v1158 = A;
  v1159 = (v1158 - 48) + (((s16 )(s8 )v1157));
  v1160 = v1159;
  V = (((((((v1160 ^ v1158) & 128u) == 0u) | (((s8 )v1158) > -1))&1))) ? 0 : 1;
  v1161 = v1159;
  A = v1161;
  Z = v1161 == 0;
  N = v1161 >> 7;
  C = (((v1160 >> 8) & 1) ^ 1);
  v4267 = v1161;
  goto lBD7E;

lBA20:
  v3660 = S;
  p31 = &RAM[(((v3660 + 1) + 256u))];
  v3662 = *p31;
  A = v3662;
  Z = v3662 == 0;
  N = v3662 >> 7;
  *p31 = -70;
  RAM[v3660 + 256u] = 35;
  S = (v3660 - 1);
  v4267 = v3662;
  goto lBD7E;

lBD74:
  v4259 = S;
  v4260 = v4259 + 1;
  S = v4260;
  p35 = &RAM[(v4260 + 256u)];
  v4262 = *p35;
  A = v4262;
  Z = v4262 == 0;
  N = v4262 >> 7;
  C = 1;
  v4263 = v4262 - 48;
  v4264 = v4263;
  V = (((((((v4264 ^ v4262) & 128u) == 0u) | (((s8 )v4262) > -1))&1))) ? 0 : 1;
  v4265 = v4263;
  A = v4265;
  Z = v4265 == 0;
  N = v4265 >> 7;
  C = (((v4264 >> 8) & 1) ^ 1);
  *p35 = -67;
  RAM[v4259 + 256u] = 122;
  S = (v4259 - 1);
  v4267 = v4265;
  goto lBD7E;

lBF71:
  v4470 = S;
  RAM[v4470 + 256u] = -65;
  RAM[(v4470 - 1) + 256u] = 115;
  v4471 = v4470 - 2;
  S = v4471;
  v4013 = v4471;
  goto lBC0C;

lE26B:
  v4796 = S;
  RAM[v4796 + 256u] = -30;
  RAM[(v4796 - 1) + 256u] = 109;
  v4797 = v4796 - 2;
  S = v4797;
  v4013 = v4797;
  goto lBC0C;

lE2B7:
  A = 0;
  Z = 1;
  N = 0;
  RAM[18] = 0;
  v4822 = S;
  RAM[v4822 + 256u] = -30;
  RAM[(v4822 - 1) + 256u] = -67;
  S = (v4822 - 2);
  goto lE26B;

lE277:
  v4800 = S;
  RAM[v4800 + 256u] = -30;
  RAM[(v4800 - 1) + 256u] = 121;
  v4801 = v4800 - 2;
  S = v4801;
  v4013 = v4801;
  goto lBC0C;

bb43610:
  v4509 = S;
  RAM[v4509 + 256u] = -65;
  RAM[(v4509 - 1) + 256u] = -4;
  v4510 = v4509 - 2;
  S = v4510;
  v4033 = v4510;
  goto lBC23;

bb43581:
  v4505 = v4506;
  V = v4505;
  v4507 = v4504;
  A = v4507;
  Z = v4507 == 0;
  N = v4507 >> 7;
  v4508 = v4504 & 256u;
  C = (v4508 >> 8u);
  if (v4508 == 0u) {
    goto lE000;
  } else {
    goto bb43610;
  }

bb43569:
  if (((v4502 ^ v4504) & 128u) == 0u) {
    goto bb43580;
  } else {
    v4506 = 1;
    goto bb43581;
  }

lBFF4:
  v4502 = RAM[112];
  A = v4502;
  Z = v4502 == 0;
  N = v4502 >> 7;
  v4503 = C;
  v4504 = (v4502 + 80) + (((s16 )(s8 )v4503));
  if (((s8 )v4502) < 0) {
    goto bb43580;
  } else {
    goto bb43569;
  }

bb43580:
  v4506 = 0;
  goto bb43581;

bb34570:
  v3547 = RAM[100];
  v3548 = v3547 + 1;
  RAM[100] = v3548;
  Z = v3548 == 0;
  N = v3548 >> 7;
  if (v3548 == 0) {
    goto bb34588;
  } else {
    v3554 = v3543;
    goto lB97D;
  }

bb34588:
  v3549 = RAM[99];
  v3550 = v3549 + 1;
  RAM[99] = v3550;
  Z = v3550 == 0;
  N = v3550 >> 7;
  if (v3550 == 0) {
    goto bb34606;
  } else {
    v3554 = v3543;
    goto lB97D;
  }

bb34606:
  v3551 = RAM[98];
  v3552 = v3551 + 1;
  RAM[98] = v3552;
  Z = v3552 == 0;
  N = v3552 >> 7;
  v3554 = v3543;
  goto lB97D;

lB9BA:
  v3640 = v3641;
  C = 0;
  v3642 = RAM[(((v3640 + 1) + 256u))];
  v3643 = v3640 + 2;
  S = v3643;
  v3644 = RAM[(v3643 + 256u)];
  v3645 = (v3642 + 1) + (v3644 << 8);
  PC = v3645;
  if ((v3645 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

bb34824:
  v3592 = ((((v3586 & 255) - 9))) + v3591;
  v3593 = v3592;
  V = (((((((v3593 ^ v3589) & 128u) == 0u) | (((s8 )v3589) > -1))&1))) ? 0 : 1;
  v3594 = v3592;
  v3595 = (v3593 >> 8) & 1;
  C = (v3595 ^ 1);
  Y = v3594;
  v3596 = RAM[112];
  A = v3596;
  Z = v3596 == 0;
  N = v3596 >> 7;
  if (v3595 == 0) {
    v3641 = v3579;
    goto lB9BA;
  } else {
    v3598 = v3579;
    v3600 = v3594;
    v3602 = v3596;
    v3604 = v3581;
    goto lB9A6;
  }

bb34790:
  v3587 = v3588;
  V = v3587;
  v3589 = v3586;
  A = v3589;
  Z = v3589 == 0;
  v3590 = (v3589 >> 7);
  N = v3590;
  v3591 = (v3586 >> 8) & 1;
  C = v3591;
  if ((((((v3590 == 0) ^ 1)&1)) | (v3589 == 0))&1) {
    v3564 = v3581;
    v3566 = v3579;
    v3568 = v3589;
    goto lB985;
  } else {
    goto bb34824;
  }

bb34778:
  if (((v3583 ^ v3586) & 128u) == 0u) {
    goto bb34789;
  } else {
    v3588 = 1;
    goto bb34790;
  }

lB999:
  v3579 = v3580;
  v3581 = v3582;
  v3583 = v3584;
  v3585 = C;
  v3586 = (v3583 + 8) + (((s16 )(s8 )v3585));
  if (((s8 )v3583) < 0) {
    goto bb34789;
  } else {
    goto bb34778;
  }

lB862:
  v3311 = S;
  RAM[v3311 + 256u] = -72;
  RAM[(v3311 - 1) + 256u] = 100;
  v3312 = v3311 - 2;
  S = v3312;
  v3580 = v3312;
  v3582 = v3339;
  v3584 = v3337;
  goto lB999;

lB897:
  v3337 = v3338;
  v3339 = v3340;
  v3341 = v3337 - 249;
  v3342 = v3341;
  C = (((v3342 >> 8) & 1) ^ 1);
  Z = ((v3342 & 255u) == 0u);
  v3343 = v3341;
  N = v3343 >> 7;
  if (((s8 )v3343) < 0) {
    goto lB862;
  } else {
    goto bb32852;
  }

bb32762:
  v3334 = v3335;
  V = v3334;
  v3336 = v3333;
  A = v3336;
  C = (v3333 >> 8) & 1;
  Y = 0;
  RAM[86] = 0;
  X = 97;
  Z = 0;
  N = 0;
  v3338 = v3336;
  v3340 = 97;
  goto lB897;

bb32750:
  if (((v3332 ^ v3333) & 128u) == 0u) {
    goto bb32761;
  } else {
    v3335 = 1;
    goto bb32762;
  }

bb32714:
  RAM[97] = v3319;
  v3331 = RAM[110];
  Y = v3331;
  RAM[102] = v3331;
  v3332 = v3328 ^ -1;
  A = v3332;
  Z = (v3328 == 0xff);
  N = v3332 >> 7;
  v3333 = v3330 + v3332;
  if (((s8 )v3328) > -1) {
    goto bb32761;
  } else {
    goto bb32750;
  }

bb32709:
  if (v3329 == 0) {
    goto bb32714;
  } else {
    goto lB893;
  }

bb32761:
  v3335 = 0;
  goto bb32762;

lB893:
  Y = 0;
  Z = 1;
  N = 0;
  RAM[112] = 0;
  v3338 = v3328;
  v3340 = v3321;
  goto lB897;

lB985:
  v3563 = v3564;
  v3565 = v3566;
  v3567 = v3568;
  v3569 = v3563;
  p23 = &RAM[(((v3569 + 4u) & 255u))];
  v3571 = *p23;
  RAM[112] = v3571;
  p24 = &RAM[(((v3569 + 3u) & 255u))];
  v3573 = *p24;
  *p23 = v3573;
  p25 = &RAM[(((v3569 + 2u) & 255u))];
  v3575 = *p25;
  *p24 = v3575;
  p26 = &RAM[(((v3569 + 1u) & 255u))];
  v3577 = *p26;
  *p25 = v3577;
  v3578 = RAM[104];
  Y = v3578;
  Z = v3578 == 0;
  N = v3578 >> 7;
  *p26 = v3578;
  v3580 = v3565;
  v3582 = v3563;
  v3584 = v3567;
  goto lB999;

lB983:
  v3559 = v3560;
  v3561 = v3562;
  X = 37;
  Z = 0;
  N = 0;
  v3564 = 37;
  v3566 = v3559;
  v3568 = v3561;
  goto lB985;

lBA33:
  RAM[38] = 0;
  RAM[39] = 0;
  RAM[40] = 0;
  RAM[41] = 0;
  v3668 = RAM[112];
  A = v3668;
  Z = v3668 == 0;
  N = v3668 >> 7;
  v3669 = S;
  RAM[v3669 + 256u] = -70;
  RAM[(v3669 - 1) + 256u] = 65;
  v3670 = v3669 - 2;
  S = v3670;
  if (v3668 == 0) {
    v3560 = v3670;
    v3562 = v3668;
    goto lB983;
  } else {
    v3683 = v3668;
    goto lBA5E;
  }

lBA42:
  v3671 = RAM[101];
  A = v3671;
  Z = v3671 == 0;
  N = v3671 >> 7;
  v3672 = S;
  RAM[v3672 + 256u] = -70;
  RAM[(v3672 - 1) + 256u] = 70;
  v3673 = v3672 - 2;
  S = v3673;
  if (v3671 == 0) {
    v3560 = v3673;
    v3562 = v3671;
    goto lB983;
  } else {
    v3683 = v3671;
    goto lBA5E;
  }

lBA47:
  v3674 = RAM[100];
  A = v3674;
  Z = v3674 == 0;
  N = v3674 >> 7;
  v3675 = S;
  RAM[v3675 + 256u] = -70;
  RAM[(v3675 - 1) + 256u] = 75;
  v3676 = v3675 - 2;
  S = v3676;
  if (v3674 == 0) {
    v3560 = v3676;
    v3562 = v3674;
    goto lB983;
  } else {
    v3683 = v3674;
    goto lBA5E;
  }

lBA4C:
  v3677 = RAM[99];
  A = v3677;
  Z = v3677 == 0;
  N = v3677 >> 7;
  v3678 = S;
  RAM[v3678 + 256u] = -70;
  RAM[(v3678 - 1) + 256u] = 80;
  v3679 = v3678 - 2;
  S = v3679;
  if (v3677 == 0) {
    v3560 = v3679;
    v3562 = v3677;
    goto lB983;
  } else {
    v3683 = v3677;
    goto lBA5E;
  }

bb39639:
  v4139 = S;
  RAM[v4139 + 256u] = -68;
  RAM[(v4139 - 1) + 256u] = -73;
  v4140 = v4139 - 2;
  S = v4140;
  v3580 = v4140;
  v3582 = 97;
  v3584 = v4134;
  goto lB999;

lBCAF:
  v4134 = v4135;
  X = 97;
  v4136 = v4134 - 249;
  v4137 = v4136;
  C = (((v4137 >> 8) & 1) ^ 1);
  Z = ((v4137 & 255u) == 0u);
  v4138 = v4136;
  N = v4138 >> 7;
  if (((s8 )v4138) < 0) {
    goto bb39639;
  } else {
    goto lBCBB;
  }

lBCAE:
  v4133 = X;
  A = v4133;
  Z = v4133 == 0;
  N = v4133 >> 7;
  v4135 = v4133;
  goto lBCAF;

bb34789:
  v3588 = 0;
  goto bb34790;

lB9B0:
  v3617 = v3618;
  v3619 = v3620;
  v3621 = v3622;
  v3623 = v3624;
  v3625 = v3626;
  v3627 = v3625;
  p28 = &RAM[(((v3627 + 2u) & 255u))];
  v3629 = *p28;
  v3630 = (v3623 << 8) | v3629;
  *p28 = (v3630 >> 1);
  p29 = &RAM[(((v3627 + 3u) & 255u))];
  v3632 = *p29;
  v3633 = ((((v3630 & 1) << 8))) | v3632;
  *p29 = (v3633 >> 1);
  p30 = &RAM[(((v3627 + 4u) & 255u))];
  v3635 = *p30;
  v3636 = ((((v3633 & 1) << 8))) | v3635;
  *p30 = (v3636 >> 1);
  v3637 = ((((v3636 & 1) << 8))) | v3621;
  C = (v3637 & 1);
  v3638 = (v3637 >> 1);
  A = v3638;
  v3639 = v3619 + 1;
  Y = v3639;
  Z = v3639 == 0;
  N = v3639 >> 7;
  if (v3639 == 0) {
    v3641 = v3617;
    goto lB9BA;
  } else {
    v3598 = v3617;
    v3600 = v3639;
    v3602 = v3638;
    v3604 = v3625;
    goto lB9A6;
  }

bb32852:
  Y = v3337;
  v3344 = RAM[112];
  A = v3344;
  p22 = &RAM[(((v3339 + 1u) & 255u))];
  v3346 = *p22;
  v3347 = v3346 & 1;
  C = v3347;
  v3348 = (v3346 >> 1);
  Z = v3348 == 0;
  N = 0;
  *p22 = v3348;
  v3349 = S;
  RAM[v3349 + 256u] = -72;
  RAM[(v3349 - 1) + 256u] = -94;
  v3350 = v3349 - 2;
  S = v3350;
  v3618 = v3350;
  v3620 = v3337;
  v3622 = v3344;
  v3624 = v3347;
  v3626 = v3339;
  goto lB9B0;

lB9AC:
  v3611 = v3612;
  v3613 = (v3607 << 8) | v3611;
  v3614 = ((((v3613 & 1) << 8))) | (v3613 >> 1);
  v3615 = v3614 & 1;
  C = v3615;
  v3616 = (v3614 >> 1);
  Z = ((v3616 & 255u) == 0u);
  N = ((v3614 >> 8) & 1);
  *p27 = v3616;
  v3618 = v3597;
  v3620 = v3599;
  v3622 = v3601;
  v3624 = v3615;
  v3626 = v3603;
  goto lB9B0;

lB9A6:
  v3597 = v3598;
  v3599 = v3600;
  v3601 = v3602;
  v3603 = v3604;
  p27 = &RAM[(((v3603 + 1u) & 255u))];
  v3606 = *p27;
  v3607 = (v3606 >> 7);
  C = v3607;
  v3608 = v3606 << 1;
  Z = ((v3608 & 254u) == 0u);
  N = ((v3606 >> 6) & 1);
  v3609 = v3608;
  *p27 = v3609;
  if (v3607 == 0) {
    v3612 = v3609;
    goto lB9AC;
  } else {
    goto bb34934;
  }

bb34934:
  v3610 = v3609 | 1;
  *p27 = v3610;
  Z = 0;
  N = v3610 >> 7;
  v3612 = v3610;
  goto lB9AC;

lBCBB:
  Y = v4134;
  v4147 = RAM[102];
  v4148 = RAM[98];
  v4149 = v4148 & 1;
  C = v4149;
  v4150 = (v4148 >> 1) | (v4147 & 128u);
  A = v4150;
  Z = v4150 == 0;
  N = v4150 >> 7;
  RAM[98] = v4150;
  v4151 = S;
  RAM[v4151 + 256u] = -68;
  RAM[(v4151 - 1) + 256u] = -56;
  v4152 = v4151 - 2;
  S = v4152;
  v3618 = v4152;
  v3620 = v4134;
  v3622 = v4150;
  v3624 = v4149;
  v3626 = 97;
  goto lB9B0;

lBA8B:
  v3747 = S;
  v3748 = RAM[(((v3747 + 1) + 256u))];
  v3749 = v3747 + 2;
  S = v3749;
  v3750 = RAM[(v3749 + 256u)];
  v3751 = (v3748 + 1) + (v3750 << 8);
  PC = v3751;
  if ((v3751 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lBA8B_2e_loopexit:
  A = v3746;
  Y = v3703;
  Z = v3746 == 0;
  N = 0;
  C = v3745;
  RAM[38] = v3737;
  RAM[39] = v3739;
  RAM[40] = v3741;
  RAM[41] = v3743;
  RAM[112] = v3744;
  goto lBA8B;

lBA61:
  v3691 = v3692;
  v3693 = v3694;
  v3695 = v3696;
  v3697 = v3698;
  v3699 = v3700;
  v3701 = v3702;
  v3703 = v3704;
  if (v3701 == 0) {
    v3727 = v3693;
    v3729 = v3695;
    v3731 = v3697;
    v3733 = v3699;
    v3735 = v3701;
    goto lBA7D;
  } else {
    goto bb35720;
  }

lBA7D:
  v3726 = v3727;
  v3728 = v3729;
  v3730 = v3731;
  v3732 = v3733;
  v3734 = v3735;
  v3736 = (v3734 << 8) | v3732;
  v3737 = (v3736 >> 1);
  v3738 = ((((v3736 << 8) & 256))) | v3730;
  v3739 = (v3738 >> 1);
  v3740 = ((((v3738 << 8) & 256))) | v3728;
  v3741 = (v3740 >> 1);
  v3742 = ((((v3740 << 8) & 256))) | v3726;
  v3743 = (v3742 >> 1);
  v3744 = (((((((((v3742 << 8) | v3691)))) >> 1))));
  v3745 = v3703 & 1;
  v3746 = (v3703 >> 1);
  if (v3746 == 0) {
    goto lBA8B_2e_loopexit;
  } else {
    v3692 = v3744;
    v3694 = v3743;
    v3696 = v3741;
    v3698 = v3739;
    v3700 = v3737;
    v3702 = v3745;
    v3704 = v3746;
    goto lBA61;
  }

bb35963:
  v3722 = v3723;
  V = v3722;
  v3724 = v3721;
  v3725 = (v3721 >> 8) & 1;
  v3727 = v3709;
  v3729 = v3714;
  v3731 = v3719;
  v3733 = v3724;
  v3735 = v3725;
  goto lBA7D;

bb35951:
  if (((v3699 ^ v3721) & 128u) == 0u) {
    goto bb35962;
  } else {
    v3723 = 1;
    goto bb35963;
  }

bb35896:
  v3717 = v3718;
  V = v3717;
  v3719 = v3716;
  v3720 = RAM[106];
  v3721 = (v3720 + v3699) + ((((v3716 >> 8) & 1)));
  if (((v3720 ^ v3699) & 128u) == 0u) {
    goto bb35951;
  } else {
    goto bb35962;
  }

bb35884:
  if (((v3697 ^ v3716) & 128u) == 0u) {
    goto bb35895;
  } else {
    v3718 = 1;
    goto bb35896;
  }

bb35829:
  v3712 = v3713;
  V = v3712;
  v3714 = v3711;
  v3715 = RAM[107];
  v3716 = (v3715 + v3697) + ((((v3711 >> 8) & 1)));
  if (((v3715 ^ v3697) & 128u) == 0u) {
    goto bb35884;
  } else {
    goto bb35895;
  }

bb35817:
  if (((v3695 ^ v3711) & 128u) == 0u) {
    goto bb35828;
  } else {
    v3713 = 1;
    goto bb35829;
  }

bb35762:
  v3707 = v3708;
  V = v3707;
  v3709 = v3706;
  v3710 = RAM[108];
  v3711 = (v3710 + v3695) + ((((v3706 >> 8) & 1)));
  if (((v3710 ^ v3695) & 128u) == 0u) {
    goto bb35817;
  } else {
    goto bb35828;
  }

bb35750:
  if (((v3693 ^ v3706) & 128u) == 0u) {
    goto bb35761;
  } else {
    v3708 = 1;
    goto bb35762;
  }

bb35720:
  v3705 = RAM[109];
  v3706 = v3705 + v3693;
  if (((v3705 ^ v3693) & 128u) == 0u) {
    goto bb35750;
  } else {
    goto bb35761;
  }

bb35761:
  v3708 = 0;
  goto bb35762;

bb35828:
  v3713 = 0;
  goto bb35829;

bb35895:
  v3718 = 0;
  goto bb35896;

bb35962:
  v3723 = 0;
  goto bb35963;

lBA5E:
  v3682 = v3683;
  v3684 = v3682 & 1;
  C = v3684;
  v3685 = (v3682 >> 1) | 128u;
  A = v3685;
  Z = 0;
  N = 1;
  v3686 = RAM[38];
  v3687 = RAM[39];
  v3688 = RAM[40];
  v3689 = RAM[41];
  v3690 = RAM[112];
  v3692 = v3690;
  v3694 = v3689;
  v3696 = v3688;
  v3698 = v3687;
  v3700 = v3686;
  v3702 = v3684;
  v3704 = v3685;
  goto lBA61;

lBA51:
  v3680 = RAM[98];
  A = v3680;
  Z = v3680 == 0;
  N = v3680 >> 7;
  v3681 = S;
  RAM[v3681 + 256u] = -70;
  RAM[(v3681 - 1) + 256u] = 85;
  S = (v3681 - 2);
  v3683 = v3680;
  goto lBA5E;

lBA8C:
  v3752 = v3753;
  v3754 = A;
  RAM[34] = v3754;
  v3755 = Y;
  RAM[35] = v3755;
  v3756 = (v3755 << 8u) | v3754;
  v3757 = RAM[(((v3756 + 4u) & 65535u))];
  RAM[109] = v3757;
  v3758 = RAM[(((v3756 + 3u) & 65535u))];
  RAM[108] = v3758;
  v3759 = RAM[(((v3756 + 2u) & 65535u))];
  RAM[107] = v3759;
  v3760 = RAM[(((v3756 + 1u) & 65535u))];
  RAM[110] = v3760;
  v3761 = RAM[102];
  RAM[111] = (v3760 ^ v3761);
  RAM[106] = (v3760 | 128u);
  Y = 0;
  v3762 = RAM[v3756];
  RAM[105] = v3762;
  v3763 = RAM[97];
  A = v3763;
  Z = v3763 == 0;
  N = v3763 >> 7;
  v3764 = RAM[(((v3752 + 1) + 256u))];
  v3765 = v3752 + 2;
  S = v3765;
  v3766 = RAM[(v3765 + 256u)];
  v3767 = (v3764 + 1) + (v3766 << 8);
  PC = v3767;
  if ((v3767 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lB850:
  v3304 = v3305;
  RAM[v3304 + 256u] = -72;
  RAM[(v3304 - 1) + 256u] = 82;
  v3306 = v3304 - 2;
  S = v3306;
  v3753 = v3306;
  goto lBA8C;

lBA0B:
  A = -68;
  Y = -71;
  Z = 0;
  N = 1;
  v3656 = S;
  RAM[v3656 + 256u] = -70;
  RAM[(v3656 - 1) + 256u] = 17;
  v3657 = v3656 - 2;
  S = v3657;
  v3305 = v3657;
  goto lB850;

lE284:
  A = -22;
  Y = -30;
  Z = 0;
  N = 1;
  v4804 = S;
  RAM[v4804 + 256u] = -30;
  RAM[(v4804 - 1) + 256u] = -118;
  v4805 = v4804 - 2;
  S = v4805;
  v3305 = v4805;
  goto lB850;

bb46931:
  A = -32;
  Y = -30;
  Z = 0;
  N = 1;
  *p41 = -29;
  RAM[v4838 + 256u] = 54;
  v4845 = v4838 - 1;
  S = v4845;
  v3305 = v4845;
  goto lB850;

lE32B:
  v4838 = S;
  v4839 = v4838 + 1;
  S = v4839;
  p41 = &RAM[(v4839 + 256u)];
  v4841 = *p41;
  A = v4841;
  v4842 = v4841 - 129;
  v4843 = v4842;
  v4844 = (v4843 >> 8) & 1;
  C = (v4844 ^ 1);
  Z = ((v4843 & 255u) == 0u);
  N = v4842 >> 7;
  if (v4844 == 0) {
    goto bb46931;
  } else {
    goto lE337;
  }

lB867:
  v3314 = S;
  RAM[v3314 + 256u] = -72;
  RAM[(v3314 - 1) + 256u] = 105;
  v3315 = v3314 - 2;
  S = v3315;
  v3753 = v3315;
  goto lBA8C;

lAD45:
  v1558 = S;
  X = v1558;
  v1559 = v1558;
  v1560 = RAM[(v1559 + 265u)];
  RAM[102] = v1560;
  v1561 = RAM[73];
  A = v1561;
  v1562 = RAM[74];
  Y = v1562;
  Z = v1562 == 0;
  N = v1562 >> 7;
  RAM[v1559 + 256u] = -83;
  RAM[(v1558 - 1) + 256u] = 81;
  S = (v1558 - 2);
  goto lB867;

lB849:
  v3302 = v3303;
  S = (v3302 - 1);
  A = 17;
  Y = -65;
  Z = 0;
  N = 1;
  goto lB867;

lBE2F:
  v4341 = S;
  RAM[v4341 + 256u] = -66;
  v4342 = v4341 - 1;
  S = v4342;
  RAM[v4342 + 256u] = 49;
  v3303 = v4342;
  goto lB849;

lBE2B:
  v4339 = RAM[93];
  v4340 = v4339 + 1;
  RAM[93] = v4340;
  Z = v4340 == 0;
  N = v4340 >> 7;
  if (v4340 == 0) {
    goto lBE2F;
  } else {
    goto lBE0B;
  }

bb46437:
  RAM[v4809 + 256u] = -30;
  v4810 = v4808 - 2;
  S = v4810;
  RAM[v4810 + 256u] = -110;
  v3303 = v4810;
  goto lB849;

lE28B:
  v4806 = RAM[102];
  A = v4806;
  Z = v4806 == 0;
  v4807 = (v4806 >> 7);
  N = v4807;
  v4808 = S;
  RAM[v4808 + 256u] = v4806;
  v4809 = v4808 - 1;
  S = v4809;
  if (v4807 == 0) {
    goto lE29D;
  } else {
    goto bb46437;
  }

lB9F4:
  v3650 = RAM[97];
  A = v3650;
  Z = v3650 == 0;
  N = v3650 >> 7;
  v3651 = C;
  v3652 = (v3650 - 128) + (((s16 )(s8 )v3651));
  v3653 = v3652;
  V = (((((((v3653 ^ v3650) & 128u) == 0u) | (((s8 )v3650) > -1))&1))) ? 0 : 1;
  C = (((v3653 >> 8) & 1) ^ 1);
  v3654 = S;
  RAM[v3654 + 256u] = v3652;
  RAM[97] = 128u;
  A = -42;
  Y = -71;
  Z = 0;
  N = 1;
  RAM[(v3654 - 1) + 256u] = -70;
  RAM[(v3654 - 2) + 256u] = 3;
  S = (v3654 - 3);
  goto lB867;

lBA19:
  A = -32;
  Y = -71;
  Z = 0;
  N = 1;
  v3659 = S;
  RAM[v3659 + 256u] = -70;
  RAM[(v3659 - 1) + 256u] = 31;
  S = (v3659 - 2);
  goto lB867;

lE07D:
  v4583 = v4584;
  RAM[113] = v4580;
  RAM[114] = v4583;
  v4585 = S;
  RAM[v4585 + 256u] = -32;
  RAM[(v4585 - 1) + 256u] = -125;
  S = (v4585 - 2);
  goto lB867;

bb44230:
  v4578 = v4579;
  V = v4578;
  v4580 = v4577;
  A = v4580;
  Z = v4580 == 0;
  N = v4580 >> 7;
  v4581 = v4577 & 256u;
  C = (v4581 >> 8u);
  if (v4581 == 0u) {
    v4584 = v4576;
    goto lE07D;
  } else {
    goto bb44259;
  }

bb44218:
  if (((v4575 ^ v4577) & 128u) == 0u) {
    goto bb44229;
  } else {
    v4579 = 1;
    goto bb44230;
  }

lE073:
  v4575 = RAM[113];
  A = v4575;
  v4576 = RAM[114];
  Y = v4576;
  Z = v4576 == 0;
  N = v4576 >> 7;
  C = 0;
  v4577 = v4575 + 5;
  if (((s8 )v4575) < 0) {
    goto bb44229;
  } else {
    goto bb44218;
  }

bb44229:
  v4579 = 0;
  goto bb44230;

bb44259:
  v4582 = v4576 + 1;
  Y = v4582;
  Z = v4582 == 0;
  N = v4582 >> 7;
  v4584 = v4582;
  goto lE07D;

lE0CC:
  A = -110;
  Y = -32;
  Z = 0;
  N = 1;
  v4607 = S;
  RAM[v4607 + 256u] = -32;
  RAM[(v4607 - 1) + 256u] = -46;
  S = (v4607 - 2);
  goto lB867;

lE264:
  A = -32;
  Y = -30;
  Z = 0;
  N = 1;
  v4795 = S;
  RAM[v4795 + 256u] = -30;
  RAM[(v4795 - 1) + 256u] = 106;
  S = (v4795 - 2);
  goto lB867;

lE2A0:
  A = -22;
  Y = -30;
  Z = 0;
  N = 1;
  v4815 = S;
  RAM[v4815 + 256u] = -30;
  RAM[(v4815 - 1) + 256u] = -90;
  S = (v4815 - 2);
  goto lB867;

lE293:
  v4811 = RAM[102];
  A = v4811;
  Z = v4811 == 0;
  N = v4811 >> 7;
  if (((s8 )v4811) < 0) {
    goto lE2A0;
  } else {
    goto bb46464;
  }

lBA28:
  v3663 = S;
  RAM[v3663 + 256u] = -70;
  RAM[(v3663 - 1) + 256u] = 42;
  v3664 = v3663 - 2;
  S = v3664;
  v3753 = v3664;
  goto lBA8C;

lBA24:
  A = -27;
  Y = -71;
  Z = 0;
  N = 1;
  goto lBA28;

lBE00:
  A = -67;
  Y = -67;
  Z = 0;
  N = 1;
  RAM[v4311 + 256u] = -66;
  RAM[(v4311 - 1) + 256u] = 6;
  S = (v4311 - 2);
  goto lBA28;

lBDF8:
  A = 0;
  v4320 = v4319 - 128;
  v4321 = v4320;
  v4322 = (v4321 >> 8) & 1;
  C = (v4322 ^ 1);
  Z = ((v4321 & 255u) == 0u);
  N = v4320 >> 7;
  if (((((((v4321 & 255u) == 0u) ^ 1)&1)) & (v4322 == 0))&1) {
    v4324 = 0;
    goto lBE09;
  } else {
    goto lBE00;
  }

lBDE7:
  v4315 = v4316;
  v4317 = Y;
  RAM[v4317 + 255u] = v4315;
  RAM[102] = v4315;
  RAM[113] = v4317;
  v4318 = v4317 + 1;
  Y = v4318;
  A = 48;
  v4319 = RAM[97];
  X = v4319;
  Z = v4319 == 0;
  N = v4319 >> 7;
  if (v4319 == 0) {
    goto lBF04;
  } else {
    goto lBDF8;
  }

lBDDF:
  v4311 = v4312;
  A = 32;
  v4313 = RAM[102];
  Z = v4313 == 0;
  v4314 = (v4313 >> 7);
  N = v4314;
  V = ((v4313 >> 6) & 1);
  if (v4314 == 0) {
    v4316 = 32;
    goto lBDE7;
  } else {
    goto bb41270;
  }

bb12682:
  *p4 = -66;
  v1259 = v1256 - 2;
  S = v1259;
  Y = 1;
  Z = 0;
  N = 0;
  v4312 = v1259;
  goto lBDDF;

lB468:
  Y = 0;
  Z = 1;
  N = 0;
  v2646 = S;
  RAM[v2646 + 256u] = -76;
  RAM[(v2646 - 1) + 256u] = 108;
  v2647 = v2646 - 2;
  S = v2647;
  v4312 = v2647;
  goto lBDDF;

lBDD7:
  v4309 = S;
  RAM[v4309 + 256u] = -67;
  RAM[(v4309 - 1) + 256u] = -39;
  v4310 = v4309 - 2;
  S = v4310;
  v4312 = v4310;
  goto lBDDF;

bb41270:
  A = 45;
  Z = 0;
  N = 0;
  v4316 = 45;
  goto lBDE7;

lBFA6:
  A = 78;
  Y = 0;
  Z = 1;
  N = 0;
  v4486 = S;
  RAM[v4486 + 256u] = -65;
  RAM[(v4486 - 1) + 256u] = -84;
  S = (v4486 - 2);
  goto lBA28;

lBFED:
  A = -65;
  Y = -65;
  Z = 0;
  N = 1;
  v4501 = S;
  RAM[v4501 + 256u] = -65;
  RAM[(v4501 - 1) + 256u] = -13;
  S = (v4501 - 2);
  goto lBA28;

lBFAD:
  v4487 = S;
  RAM[v4487 + 256u] = -65;
  RAM[(v4487 - 1) + 256u] = -81;
  S = (v4487 - 2);
  goto lBFED;

lE04A:
  A = 87;
  Z = 0;
  N = 0;
  v4560 = S;
  RAM[v4560 + 256u] = -32;
  RAM[(v4560 - 1) + 256u] = 78;
  S = (v4560 - 2);
  goto lBA28;

lE052:
  A = 87;
  Y = 0;
  Z = 1;
  N = 0;
  goto lBA28;

lE070:
  v4574 = S;
  RAM[v4574 + 256u] = -32;
  RAM[(v4574 - 1) + 256u] = 114;
  S = (v4574 - 2);
  goto lBA28;

lE06C:
  v4572 = v4573;
  RAM[113] = v4570;
  Y = v4572;
  Z = v4572 == 0;
  N = v4572 >> 7;
  goto lE070;

lE060:
  v4566 = RAM[113];
  v4567 = RAM[114];
  v4568 = Y;
  v4569 = RAM[(((((v4567 << 8u) | v4566) + v4568) & 65535u))];
  RAM[103] = v4569;
  v4570 = v4566 + 1;
  Y = v4570;
  A = v4570;
  Z = v4570 == 0;
  N = v4570 >> 7;
  if (v4570 == 0) {
    goto bb44146;
  } else {
    v4573 = v4567;
    goto lE06C;
  }

bb44146:
  v4571 = v4567 + 1;
  RAM[114] = v4571;
  Z = v4571 == 0;
  N = v4571 >> 7;
  v4573 = v4571;
  goto lE06C;

lE084:
  A = 92;
  Y = 0;
  v4586 = RAM[103];
  v4587 = v4586 - 1;
  RAM[103] = v4587;
  Z = (v4586 == 1);
  N = v4587 >> 7;
  if (v4586 == 1) {
    goto bb44324;
  } else {
    goto lE070;
  }

lE0C5:
  A = -115;
  Y = -32;
  Z = 0;
  N = 1;
  v4606 = S;
  RAM[v4606 + 256u] = -32;
  RAM[(v4606 - 1) + 256u] = -53;
  S = (v4606 - 2);
  goto lBA28;

lBB0F:
  v3827 = S;
  RAM[v3827 + 256u] = -69;
  RAM[(v3827 - 1) + 256u] = 17;
  v3828 = v3827 - 2;
  S = v3828;
  v3753 = v3828;
  goto lBA8C;

lBA04:
  A = -37;
  Y = -71;
  Z = 0;
  N = 1;
  v3655 = S;
  RAM[v3655 + 256u] = -70;
  RAM[(v3655 - 1) + 256u] = 10;
  S = (v3655 - 2);
  goto lBB0F;

lE2D5:
  A = 78;
  Y = 0;
  Z = 1;
  N = 0;
  goto lBB0F;

bb46822:
  A = -68;
  Y = -71;
  Z = 0;
  N = 1;
  RAM[v4833 + 256u] = -29;
  RAM[(v4832 - 2) + 256u] = 35;
  S = (v4832 - 3);
  goto lBB0F;

lBACF:
  v3791 = RAM[111];
  A = v3791;
  Z = v3791 == 0;
  N = v3791 >> 7;
  RAM[102] = v3791;
  v3792 = RAM[(((v3772 + 1) + 256u))];
  v3793 = v3772 + 2;
  S = v3793;
  v3794 = RAM[(v3793 + 256u)];
  v3795 = (v3792 + 1) + (v3794 << 8);
  PC = v3795;
  if ((v3795 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lBAF8:
  v3812 = S;
  v3813 = RAM[(((v3812 + 1) + 256u))];
  v3814 = v3812 + 2;
  S = v3814;
  v3815 = RAM[(v3814 + 256u)];
  v3816 = (v3813 + 1) + (v3815 << 8);
  PC = v3816;
  if ((v3816 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lBBA2:
  v3957 = v3958;
  v3959 = v3960;
  RAM[34] = v3959;
  RAM[35] = v3957;
  v3961 = (v3957 << 8u) | v3959;
  v3962 = RAM[(((v3961 + 4u) & 65535u))];
  RAM[101] = v3962;
  v3963 = RAM[(((v3961 + 3u) & 65535u))];
  RAM[100] = v3963;
  v3964 = RAM[(((v3961 + 2u) & 65535u))];
  RAM[99] = v3964;
  v3965 = RAM[(((v3961 + 1u) & 65535u))];
  RAM[102] = v3965;
  RAM[98] = (v3965 | 128u);
  Y = 0;
  v3966 = RAM[v3961];
  A = v3966;
  Z = v3966 == 0;
  N = v3966 >> 7;
  RAM[97] = v3966;
  RAM[112] = 0;
  v3967 = S;
  v3968 = RAM[(((v3967 + 1) + 256u))];
  v3969 = v3967 + 2;
  S = v3969;
  v3970 = RAM[(v3969 + 256u)];
  v3971 = (v3968 + 1) + (v3970 << 8);
  PC = v3971;
  if ((v3971 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lA78B:
  A = -68;
  Y = -71;
  Z = 0;
  N = 1;
  v766 = S;
  RAM[v766 + 256u] = -89;
  RAM[(v766 - 1) + 256u] = -111;
  S = (v766 - 2);
  v3958 = -71;
  v3960 = -68;
  goto lBBA2;

bb15466:
  v1554 = v1555;
  V = v1554;
  C = (v1553 >> 8) & 1;
  RAM[36] = v1553;
  p5 = &RAM[(v1546 + 256u)];
  v1557 = *p5;
  A = v1557;
  Y = 1;
  Z = 0;
  N = 0;
  *p5 = -83;
  RAM[v1552 + 256u] = 68;
  S = (v1546 - 2);
  v3958 = 1;
  v3960 = v1557;
  goto lBBA2;

bb15454:
  if (((v1550 ^ v1553) & 128u) == 0u) {
    goto bb15465;
  } else {
    v1555 = 1;
    goto bb15466;
  }

bb15412:
  v1548 = v1549;
  V = v1548;
  v1550 = v1547;
  A = v1550;
  Z = v1550 == 0;
  N = v1550 >> 7;
  v1551 = (v1547 >> 8) & 1;
  C = v1551;
  RAM[v1546 + 256u] = v1550;
  v1552 = v1546 - 1;
  S = v1552;
  v1553 = ((((v1547 & 255) + 6))) + v1551;
  if (((s8 )v1550) < 0) {
    goto bb15465;
  } else {
    goto bb15454;
  }

bb15400:
  if (((v1546 ^ v1547) & 128u) == 0u) {
    goto bb15411;
  } else {
    v1549 = 1;
    goto bb15412;
  }

lAD35:
  v1546 = X;
  S = v1546;
  A = v1546;
  Z = v1546 == 0;
  N = v1546 >> 7;
  C = 0;
  v1547 = v1546 + 4;
  if (((s8 )v1546) < 0) {
    goto bb15411;
  } else {
    goto bb15400;
  }

bb15411:
  v1549 = 0;
  goto bb15412;

bb15465:
  v1555 = 0;
  goto bb15466;

bb17522:
  A = -88;
  Y = -82;
  Z = 0;
  N = 1;
  v1768 = S;
  RAM[v1768 + 256u] = -82;
  RAM[(v1768 - 1) + 256u] = -92;
  S = (v1768 - 2);
  v3958 = -82;
  v3960 = -88;
  goto lBBA2;

lAFA0:
  v1899 = RAM[100];
  A = v1899;
  v1900 = RAM[101];
  Y = v1900;
  Z = v1900 == 0;
  N = v1900 >> 7;
  v3958 = v1900;
  v3960 = v1899;
  goto lBBA2;

lAF71:
  v1872 = C;
  if (v1872 == 0) {
    goto lAFA0;
  } else {
    goto bb18751;
  }

bb18778:
  v1877 = Y;
  v1878 = v1877 - 73;
  v1879 = v1878;
  C = (((v1879 >> 8) & 1) ^ 1);
  Z = ((v1879 & 255u) == 0u);
  N = v1878 >> 7;
  if ((v1879 & 255u) == 0u) {
    goto bb18805;
  } else {
    goto lAFA0;
  }

bb18751:
  v1873 = X;
  v1874 = v1873;
  v1875 = v1874 - 84;
  v1876 = v1875;
  C = (((v1876 >> 8) & 1) ^ 1);
  Z = ((v1876 & 255u) == 0u);
  N = v1875 >> 7;
  if ((v1876 & 255u) == 0u) {
    goto bb18778;
  } else {
    goto lAF92;
  }

lAF92:
  v1893 = v1874 - 83;
  v1894 = v1893;
  C = (((v1894 >> 8) & 1) ^ 1);
  Z = ((v1894 & 255u) == 0u);
  N = v1893 >> 7;
  if ((v1894 & 255u) == 0u) {
    goto bb18910;
  } else {
    goto lAFA0;
  }

bb18910:
  v1895 = Y;
  v1896 = v1895 - 84;
  v1897 = v1896;
  C = (((v1897 >> 8) & 1) ^ 1);
  Z = ((v1897 & 255u) == 0u);
  N = v1896 >> 7;
  if ((v1897 & 255u) == 0u) {
    goto bb18937;
  } else {
    goto lAFA0;
  }

lBB07:
  v3820 = v3821;
  v3822 = v3823;
  v3824 = v3825;
  RAM[111] = v3820;
  v3826 = S;
  RAM[v3826 + 256u] = -69;
  RAM[(v3826 - 1) + 256u] = 11;
  S = (v3826 - 2);
  v3958 = v3822;
  v3960 = v3824;
  goto lBBA2;

lBB01:
  A = -7;
  Y = -70;
  X = 0;
  Z = 1;
  N = 0;
  v3821 = 0;
  v3823 = -70;
  v3825 = -7;
  goto lBB07;

lE26E:
  A = -27;
  Y = -30;
  v4798 = RAM[110];
  X = v4798;
  Z = v4798 == 0;
  N = v4798 >> 7;
  v4799 = S;
  RAM[v4799 + 256u] = -30;
  RAM[(v4799 - 1) + 256u] = 118;
  S = (v4799 - 2);
  v3821 = v4798;
  v3823 = -30;
  v3825 = -27;
  goto lBB07;

lBF74:
  A = 17;
  Y = -65;
  Z = 0;
  N = 1;
  v4472 = S;
  RAM[v4472 + 256u] = -65;
  RAM[(v4472 - 1) + 256u] = 122;
  S = (v4472 - 2);
  v3958 = -65;
  v3960 = 17;
  goto lBBA2;

lE0BE:
  A = -117;
  Y = 0;
  Z = 1;
  N = 0;
  v4605 = S;
  RAM[v4605 + 256u] = -32;
  RAM[(v4605 - 1) + 256u] = -60;
  S = (v4605 - 2);
  v3958 = 0;
  v3960 = -117;
  goto lBBA2;

bb44359:
  v4596 = Z;
  if (v4596 == 0) {
    goto lE0BE;
  } else {
    goto bb44364;
  }

lE2C5:
  A = 87;
  Y = 0;
  Z = 1;
  N = 0;
  v4824 = S;
  RAM[v4824 + 256u] = -30;
  RAM[(v4824 - 1) + 256u] = -53;
  S = (v4824 - 2);
  v3958 = 0;
  v3960 = 87;
  goto lBBA2;

lBBD7:
  v3978 = X;
  RAM[34] = v3978;
  v3979 = Y;
  RAM[35] = v3979;
  v3980 = RAM[101];
  RAM[(((v3979 << 8u) | v3978) + 4u) & 65535u] = v3980;
  v3981 = RAM[100];
  v3982 = RAM[34];
  v3983 = RAM[35];
  RAM[(((v3983 << 8u) | v3982) + 3u) & 65535u] = v3981;
  v3984 = RAM[99];
  v3985 = RAM[34];
  v3986 = RAM[35];
  RAM[(((v3986 << 8u) | v3985) + 2u) & 65535u] = v3984;
  v3987 = RAM[102];
  v3988 = RAM[98];
  v3989 = RAM[34];
  v3990 = RAM[35];
  RAM[(((v3990 << 8u) | v3989) + 1u) & 65535u] = ((((v3987 | 127))) & v3988);
  Y = 0;
  v3991 = RAM[97];
  A = v3991;
  Z = v3991 == 0;
  N = v3991 >> 7;
  v3992 = RAM[34];
  v3993 = RAM[35];
  RAM[(v3993 << 8u) | v3992] = v3991;
  RAM[112] = 0;
  v3994 = S;
  v3995 = RAM[(((v3994 + 1) + 256u))];
  v3996 = v3994 + 2;
  S = v3996;
  v3997 = RAM[(v3996 + 256u)];
  v3998 = (v3995 + 1) + (v3997 << 8);
  PC = v3998;
  if ((v3998 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

bb38581:
  X = 0;
  A = v4005;
  Z = (v4003 == 1);
  N = 0;
  RAM[112] = 0;
  v4007 = S;
  v4008 = RAM[(((v4007 + 1) + 256u))];
  v4009 = v4007 + 2;
  S = v4009;
  v4010 = RAM[(v4009 + 256u)];
  v4011 = (v4008 + 1) + (v4010 << 8);
  PC = v4011;
  if ((v4011 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lBC02:
  v4001 = v4002;
  v4003 = 5 - v4001;
  v4004 = v4003;
  v4005 = RAM[(((v4004 + 104u) & 255u))];
  RAM[(v4004 + 96u) & 255u] = v4005;
  v4006 = v4001 + 1;
  if (v4006 == 5) {
    goto bb38581;
  } else {
    v4002 = v4006;
    goto lBC02;
  }

lBBFE:
  v4000 = A;
  RAM[102] = v4000;
  X = 5;
  Z = 0;
  N = 0;
  v4002 = 0;
  goto lBC02;

lBBFC:
  v3999 = RAM[110];
  A = v3999;
  Z = v3999 == 0;
  N = v3999 >> 7;
  goto lBBFE;

lAFF0:
  v1937 = RAM[100];
  v1938 = RAM[11];
  RAM[7] = (v1937 ^ v1938);
  v1939 = RAM[101];
  v1940 = v1939 ^ v1938;
  A = v1940;
  Z = (v1938 == v1939);
  N = v1940 >> 7;
  RAM[8] = v1940;
  v1941 = S;
  RAM[v1941 + 256u] = -81;
  RAM[(v1941 - 1) + 256u] = -2;
  S = (v1941 - 2);
  goto lBBFC;

lBF9E:
  v4483 = S;
  RAM[v4483 + 256u] = -65;
  RAM[(v4483 - 1) + 256u] = -96;
  S = (v4483 - 2);
  goto lBBFE;

lBF99:
  v4480 = Z;
  if (v4480 == 0) {
    goto lBF9E;
  } else {
    goto bb43308;
  }

bb43308:
  v4481 = Y;
  A = v4481;
  v4482 = RAM[7];
  Y = v4482;
  Z = v4482 == 0;
  N = v4482 >> 7;
  goto lBF9E;

lBC1A:
  v4021 = S;
  v4022 = RAM[(((v4021 + 1) + 256u))];
  v4023 = v4021 + 2;
  S = v4023;
  v4024 = RAM[(v4023 + 256u)];
  v4025 = (v4022 + 1) + (v4024 << 8);
  PC = v4025;
  if ((v4025 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

bb38664:
  X = 0;
  A = v4019;
  Z = (v4017 == 1);
  N = 0;
  RAM[112] = 0;
  goto lBC1A;

lBC11:
  v4015 = v4016;
  v4017 = 6 - v4015;
  v4018 = v4017;
  v4019 = RAM[(((v4018 + 96u) & 255u))];
  RAM[(v4018 + 104u) & 255u] = v4019;
  v4020 = v4015 + 1;
  if (v4020 == 6) {
    goto bb38664;
  } else {
    v4016 = v4020;
    goto lBC11;
  }

lBC11_2e_preheader:
  X = 6;
  Z = 0;
  N = 0;
  v4016 = 0;
  goto lBC11;

lE000:
  v4511 = A;
  RAM[86] = v4511;
  v4512 = S;
  RAM[v4512 + 256u] = -32;
  RAM[(v4512 - 1) + 256u] = 4;
  S = (v4512 - 2);
  goto lBC11_2e_preheader;

lBC38:
  v4048 = v4049;
  v4050 = RAM[(((v4048 + 1) + 256u))];
  v4051 = v4048 + 2;
  S = v4051;
  v4052 = RAM[(v4051 + 256u)];
  v4053 = (v4050 + 1) + (v4052 << 8);
  PC = v4053;
  if ((v4053 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lBC2B:
  v4036 = v4037;
  v4038 = RAM[97];
  A = v4038;
  Z = v4038 == 0;
  N = v4038 >> 7;
  if (v4038 == 0) {
    v4049 = v4036;
    goto lBC38;
  } else {
    v4040 = v4036;
    goto lBC2F;
  }

lA79F:
  v773 = S;
  RAM[v773 + 256u] = -89;
  RAM[(v773 - 1) + 256u] = -95;
  v774 = v773 - 2;
  S = v774;
  v4037 = v774;
  goto lBC2B;

lA795:
  v768 = A;
  v769 = v768 - 169;
  v770 = v769;
  C = (((v770 >> 8) & 1) ^ 1);
  Z = ((v770 & 255u) == 0u);
  N = v769 >> 7;
  if ((v770 & 255u) == 0u) {
    goto bb8230;
  } else {
    goto lA79F;
  }

lB9EA:
  v3646 = S;
  RAM[v3646 + 256u] = -71;
  RAM[(v3646 - 1) + 256u] = -20;
  v3647 = v3646 - 2;
  S = v3647;
  v4037 = v3647;
  goto lBC2B;

lBFA1:
  v4484 = Y;
  A = v4484;
  Z = v4484 == 0;
  N = v4484 >> 7;
  v4485 = S;
  RAM[v4485 + 256u] = v4484;
  RAM[(v4485 - 1) + 256u] = -65;
  RAM[(v4485 - 2) + 256u] = -91;
  S = (v4485 - 3);
  goto lB9EA;

lBC39:
  v4054 = S;
  RAM[v4054 + 256u] = -68;
  RAM[(v4054 - 1) + 256u] = 59;
  v4055 = v4054 - 2;
  S = v4055;
  v4037 = v4055;
  goto lBC2B;

lBC5D:
  v4081 = v4082;
  v4083 = v4084;
  RAM[37] = v4081;
  v4085 = RAM[36];
  v4086 = (v4081 << 8u) | v4085;
  v4087 = RAM[v4086];
  A = v4087;
  Y = 1;
  X = v4087;
  Z = v4087 == 0;
  N = v4087 >> 7;
  if (v4087 == 0){
    v4037 = v4083;
    goto lBC2B;
  } else {
    goto bb39048;
  }

lAD55:
  Y = 1;
  Z = 0;
  N = 0;
  v1564 = S;
  RAM[v1564 + 256u] = -83;
  RAM[(v1564 - 1) + 256u] = 89;
  v1565 = v1564 - 2;
  S = v1565;
  v4082 = 1;
  v4084 = v1565;
  goto lBC5D;

bb19585:
  v1952 = RAM[110];
  v1953 = RAM[106];
  RAM[106] = ((((v1952 | 127))) & v1953);
  A = 105;
  Y = 0;
  Z = 1;
  N = 0;
  v1954 = S;
  RAM[v1954 + 256u] = -80;
  RAM[(v1954 - 1) + 256u] = 41;
  v1955 = v1954 - 2;
  S = v1955;
  RAM[36] = 105;
  v4082 = 0;
  v4084 = v1955;
  goto lBC5D;

bb21970:
  A = -91;
  Y = -79;
  Z = 0;
  N = 1;
  v2205 = S;
  RAM[v2205 + 256u] = -79;
  RAM[(v2205 - 1) + 256u] = -53;
  v2206 = v2205 - 2;
  S = v2206;
  RAM[36] = -91;
  v4082 = -79;
  v4084 = v2206;
  goto lBC5D;

lBE0B:
  A = -72;
  Y = -67;
  Z = 0;
  N = 1;
  v4325 = S;
  RAM[v4325 + 256u] = -66;
  RAM[(v4325 - 1) + 256u] = 17;
  v4326 = v4325 - 2;
  S = v4326;
  RAM[36] = -72;
  v4082 = -67;
  v4084 = v4326;
  goto lBC5D;

lBE09:
  v4323 = v4324;
  RAM[93] = v4323;
  goto lBE0B;

lBE07:
  A = -9;
  Z = 0;
  N = 1;
  v4324 = -9;
  goto lBE09;

lBE16:
  A = -77;
  Y = -67;
  Z = 0;
  N = 1;
  v4329 = S;
  RAM[v4329 + 256u] = -66;
  RAM[(v4329 - 1) + 256u] = 28;
  v4330 = v4329 - 2;
  S = v4330;
  RAM[36] = -77;
  v4082 = -67;
  v4084 = v4330;
  goto lBC5D;

lBF92:
  A = 78;
  Y = 0;
  Z = 1;
  N = 0;
  v4478 = S;
  RAM[v4478 + 256u] = -65;
  RAM[(v4478 - 1) + 256u] = -104;
  v4479 = v4478 - 2;
  S = v4479;
  RAM[36] = 78;
  v4082 = 0;
  v4084 = v4479;
  goto lBC5D;

lE097:
  v4593 = S;
  RAM[v4593 + 256u] = -32;
  RAM[(v4593 - 1) + 256u] = -103;
  v4594 = v4593 - 2;
  S = v4594;
  v4037 = v4594;
  goto lBC2B;

lBC31:
  v4042 = v4043;
  v4044 = v4045;
  v4046 = C;
  v4047 = (((((((((v4044 << 1) | (((s16 )(s8 )v4046)))))) >> 8))));
  C = v4047;
  A = -1;
  Z = 0;
  N = 1;
  if (v4047 == 0) {
    goto bb38814;
  } else {
    v4049 = v4042;
    goto lBC38;
  }

lBC2F:
  v4039 = v4040;
  v4041 = RAM[102];
  A = v4041;
  Z = v4041 == 0;
  N = v4041 >> 7;
  v4043 = v4039;
  v4045 = v4041;
  goto lBC31;

bb39048:
  v4088 = RAM[(((v4086 + 1u) & 65535u))];
  v4089 = RAM[102];
  v4090 = v4088 ^ v4089;
  A = v4090;
  Z = (v4089 == v4088);
  N = v4090 >> 7;
  if (((s8 )v4090) < 0) {
    v4040 = v4083;
    goto lBC2F;
  } else {
    goto bb39090;
  }

lBC92:
  v4120 = v4121;
  A = v4089;
  Z = v4089 == 0;
  N = v4089 >> 7;
  if (v4120 == 0){
    v4043 = v4083;
    v4045 = v4089;
    goto lBC31;
  } else {
    goto bb39456;
  }

bb39090:
  v4091 = RAM[97];
  v4092 = v4087 - v4091;
  v4093 = v4092;
  v4094 = ((v4093 >> 8) & 1) ^ 1;
  C = v4094;
  Z = ((v4093 & 255u) == 0u);
  N = v4092 >> 7;
  if ((v4093 & 255u) == 0u) {
    goto bb39119;
  } else {
    v4121 = v4094;
    goto lBC92;
  }

bb39119:
  v4095 = v4088 | 128u;
  A = v4095;
  v4096 = RAM[98];
  v4097 = v4095 - v4096;
  v4098 = v4097;
  v4099 = ((v4098 >> 8) & 1) ^ 1;
  C = v4099;
  Z = ((v4098 & 255u) == 0u);
  N = v4097 >> 7;
  if ((v4098 & 255u) == 0u) {
    goto bb39184;
  } else {
    v4121 = v4099;
    goto lBC92;
  }

bb39184:
  Y = 2;
  v4100 = RAM[(((v4086 + 2u) & 65535u))];
  A = v4100;
  v4101 = RAM[99];
  v4102 = v4100 - v4101;
  v4103 = v4102;
  v4104 = ((v4103 >> 8) & 1) ^ 1;
  C = v4104;
  Z = ((v4103 & 255u) == 0u);
  N = v4102 >> 7;
  if ((v4103 & 255u) == 0u) {
    goto bb39249;
  } else {
    v4121 = v4104;
    goto lBC92;
  }

bb39249:
  Y = 3;
  v4105 = RAM[(((v4086 + 3u) & 65535u))];
  A = v4105;
  v4106 = RAM[100];
  v4107 = v4105 - v4106;
  v4108 = v4107;
  v4109 = ((v4108 >> 8) & 1) ^ 1;
  C = v4109;
  Z = ((v4108 & 255u) == 0u);
  N = v4107 >> 7;
  if ((v4108 & 255u) == 0u) {
    goto bb39314;
  } else {
    v4121 = v4109;
    goto lBC92;
  }

bb39416:
  v4116 = v4117;
  V = v4116;
  v4118 = v4114;
  A = v4118;
  Z = v4118 == 0;
  N = v4118 >> 7;
  v4119 = ((v4115 >> 8) & 1) ^ 1;
  C = v4119;
  if (v4118 == 0){
    goto lBCBA;
  } else {
    v4121 = v4119;
    goto lBC92;
  }

bb39404:
  if (((v4113 ^ v4112) & 128u) == 0u) {
    goto bb39415;
  } else {
    v4117 = 1;
    goto bb39416;
  }

bb39314:
  Y = 4;
  v4110 = RAM[112];
  v4111 = ((((((((((((((127 - v4110)))))) >> 8u))))) & 1))) ^ 1;
  C = v4111;
  v4112 = RAM[(((v4086 + 4u) & 65535u))];
  A = v4112;
  Z = v4112 == 0;
  N = v4112 >> 7;
  v4113 = RAM[101];
  v4114 = ((((v4112 - 1) - v4113))) + v4111;
  v4115 = v4114;
  if (((v4115 ^ v4112) & 128u) == 0u) {
    goto bb39415;
  } else {
    goto bb39404;
  }

bb39415:
  v4117 = 0;
  goto bb39416;

bb39456:
  v4122 = v4089 ^ -1;
  A = v4122;
  Z = (v4089 == 0xff);
  N = v4122 >> 7;
  v4043 = v4083;
  v4045 = v4122;
  goto lBC31;

bb38814:
  A = 1;
  Z = 0;
  N = 0;
  v4049 = v4042;
  goto lBC38;

lBC58:
  v4074 = RAM[102];
  C = (v4074 & 1);
  v4075 = (v4074 >> 1);
  Z = v4075 == 0;
  N = 0;
  RAM[102] = v4075;
  v4076 = S;
  v4077 = RAM[(((v4076 + 1) + 256u))];
  v4078 = v4076 + 2;
  S = v4078;
  v4079 = RAM[(v4078 + 256u)];
  v4080 = (v4077 + 1) + (v4079 << 8);
  PC = v4080;
  if ((v4080 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lBCBA:
  v4142 = S;
  v4143 = RAM[(((v4142 + 1) + 256u))];
  v4144 = v4142 + 2;
  S = v4144;
  v4145 = RAM[(v4144 + 256u)];
  v4146 = (v4143 + 1) + (v4145 << 8);
  PC = v4146;
  if ((v4146 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lBCB8:
  v4141 = Y;
  RAM[104] = v4141;
  goto lBCBA;

lBCC9:
  v4153 = Y;
  RAM[104] = v4153;
  v4154 = S;
  v4155 = RAM[(((v4154 + 1) + 256u))];
  v4156 = v4154 + 2;
  S = v4156;
  v4157 = RAM[(v4156 + 256u)];
  v4158 = (v4155 + 1) + (v4157 << 8);
  PC = v4158;
  if ((v4158 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lBCF2:
  v4169 = S;
  v4170 = RAM[(((v4169 + 1) + 256u))];
  v4171 = v4169 + 2;
  S = v4171;
  v4172 = RAM[(v4171 + 256u)];
  v4173 = (v4170 + 1) + (v4172 << 8);
  PC = v4173;
  if ((v4173 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lBCE9:
  RAM[98] = v4123;
  RAM[99] = v4123;
  RAM[100] = v4123;
  RAM[101] = v4123;
  Y = v4123;
  Z = v4124;
  N = v4125;
  goto lBCF2;

bb40569:
  v4246 = S;
  v4247 = RAM[(((v4246 + 1) + 256u))];
  v4248 = v4246 + 2;
  S = v4248;
  v4249 = RAM[(v4248 + 256u)];
  v4250 = (v4247 + 1) + (v4249 << 8);
  PC = v4250;
  if ((v4250 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lBD62:
  v4245 = RAM[103];
  A = v4245;
  Z = v4245 == 0;
  N = v4245 >> 7;
  if (((s8 )v4245) < 0) {
    goto lBFB4;
  } else {
    goto bb40569;
  }

lBF0C:
  A = 0;
  Y = 1;
  Z = 0;
  N = 0;
  v4465 = S;
  v4466 = RAM[(((v4465 + 1) + 256u))];
  v4467 = v4465 + 2;
  S = v4467;
  v4468 = RAM[(v4467 + 256u)];
  v4469 = (v4466 + 1) + (v4468 << 8);
  PC = v4469;
  if ((v4469 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

bb43015:
  v4460 = v4461;
  V = v4460;
  C = (v4459 >> 8) & 1;
  v4462 = v4432;
  RAM[v4462 + 259u] = v4459;
  RAM[v4462 + 258u] = v4452;
  A = 0;
  Z = 1;
  N = 0;
  RAM[v4462 + 260u] = 0;
  goto lBF0C;

bb43003:
  if (((v4456 ^ v4459) & 128u) == 0u) {
    goto bb43014;
  } else {
    v4461 = 1;
    goto bb43015;
  }

bb42991:
  X = v4452;
  Z = v4456 == 0;
  N = v4456 >> 7;
  A = v4456;
  C = v4458;
  V = v4455;
  v4459 = ((((v4453 & 255) + 58))) + v4458;
  if (((s8 )v4456) < 0) {
    goto bb43014;
  } else {
    goto bb43003;
  }

lBEEF:
  v4446 = v4447;
  v4448 = v4449;
  v4450 = v4451;
  v4452 = v4446 + 48;
  v4453 = (v4450 - 11) + (((s16 )(s8 )v4448));
  v4454 = v4453;
  v4455 = (((((((v4454 ^ v4450) & 128u) == 0u) | (((s8 )v4450) > -1))&1))) ? 0 : 1;
  v4456 = v4453;
  v4457 = v4454 & 256u;
  v4458 = (v4457 >> 8u) ^ 1;
  if (v4457 == 0u){
    v4447 = (v4446 + 1);
    v4449 = v4458;
    v4451 = v4456;
    goto lBEEF;
  } else {
    goto bb42991;
  }

lBEE3:
  v4441 = v4442;
  v4443 = v4444;
  v4445 = v4432;
  RAM[v4445 + 257u] = v4443;
  RAM[v4445 + 256u] = 69;
  A = v4441;
  X = 47;
  Z = 0;
  N = 0;
  C = 1;
  v4447 = 0;
  v4449 = 1;
  v4451 = v4441;
  goto lBEEF;

bb42795:
  if (v4435 == 0){
    v4442 = v4434;
    v4444 = 43;
    goto lBEE3;
  } else {
    goto bb42800;
  }

lBED3:
  v4432 = v4433;
  A = 43;
  v4434 = RAM[94];
  X = v4434;
  Z = v4434 == 0;
  v4435 = (v4434 >> 7);
  N = v4435;
  if (v4434 == 0){
    v4464 = v4432;
    goto lBF07;
  } else {
    goto bb42795;
  }

bb42727:
  v4429 = v4426 - 1;
  Y = v4429;
  A = v4427;
  v4430 = v4428 - 46;
  v4431 = v4430;
  C = (((v4431 >> 8) & 1) ^ 1);
  Z = ((v4431 & 255u) == 0u);
  N = v4430 >> 7;
  if ((v4431 & 255u) == 0u) {
    v4433 = v4429;
    goto lBED3;
  } else {
    goto bb42754;
  }

lBEC6:
  v4424 = v4425;
  v4426 = v4415 - v4424;
  v4427 = RAM[(v4426 + 255u)];
  v4428 = v4427;
  if (((v4428 - 48) & 255u) == 0u) {
    v4425 = (v4424 + 1);
    goto lBEC6;
  } else {
    goto bb42727;
  }

lBEC4:
  v4422 = v4423;
  A = v4418;
  C = (((v4422 >> 8) & 1) ^ 1);
  V = v4408;
  X = v4418;
  Y = v4415;
  Z = v4415 == 0;
  N = v4415 >> 7;
  v4425 = 0;
  goto lBEC6;

lBE6A:
  v4380 = v4381;
  v4382 = v4383;
  v4384 = RAM[101];
  v4385 = v4382;
  v4386 = RAM[(v4385 + 48921u)];
  v4387 = v4386 + v4384;
  if (((v4386 ^ v4384) & 128u) == 0u) {
    goto bb41962;
  } else {
    goto bb41974;
  }

bb42248:
  if ((v4398 >> 7) == 0) {
    v4381 = v4398;
    v4383 = v4382;
    goto lBE6A;
  } else {
    goto lBE90;
  }

bb42205:
  v4397 = (v4396 >> 8) & 1;
  RAM[98] = v4396;
  v4398 = v4380 + 1;
  if (v4397 == 0){
    goto bb42248;
  } else {
    goto lBE8E;
  }

bb42128:
  RAM[99] = v4393;
  v4394 = RAM[98];
  v4395 = RAM[(v4385 + 48918u)];
  v4396 = (v4395 + v4394) + ((((v4393 >> 8) & 1)));
  if (((v4395 ^ v4394) & 128u) == 0u) {
    goto bb42193;
  } else {
    goto bb42205;
  }

bb42051:
  RAM[100] = v4390;
  v4391 = RAM[99];
  v4392 = RAM[(v4385 + 48919u)];
  v4393 = (v4392 + v4391) + ((((v4390 >> 8) & 1)));
  if (((v4392 ^ v4391) & 128u) == 0u) {
    goto bb42116;
  } else {
    goto bb42128;
  }

bb41974:
  RAM[101] = v4387;
  v4388 = RAM[100];
  v4389 = RAM[(v4385 + 48920u)];
  v4390 = (v4389 + v4388) + ((((v4387 >> 8) & 1)));
  if (((v4389 ^ v4388) & 128u) == 0u) {
    goto bb42039;
  } else {
    goto bb42051;
  }

bb41962:
  goto bb41974;

bb42039:
  goto bb42051;

bb42116:
  goto bb42128;

bb42193:
  goto bb42205;

lBE8E:
  if ((v4398 >> 7) == 0) {
    goto lBE90;
  } else {
    v4381 = v4398;
    v4383 = v4382;
    goto lBE6A;
  }

bb42632:
  v4421 = v4419 - 60;
  if ((v4421 & 255u) == 0u) {
    v4423 = v4421;
    goto lBEC4;
  } else {
    v4381 = v4418;
    v4383 = v4417;
    goto lBE6A;
  }

lBEB2:
  v4415 = v4416;
  RAM[113] = v4415;
  v4417 = RAM[71];
  v4418 = (v4410 & 128u) ^ 128u;
  v4419 = v4417;
  v4420 = v4419 - 36;
  if ((v4420 & 255u) == 0u) {
    v4423 = v4420;
    goto lBEC4;
  } else {
    goto bb42632;
  }

bb42362:
  v4408 = v4409;
  v4410 = v4407;
  RAM[71] = (v4382 + 4);
  v4411 = RAM[113];
  v4412 = v4411 + 1;
  RAM[v4412 + 255u] = (v4410 & 127);
  v4413 = RAM[93];
  RAM[93] = (v4413 - 1);
  if (v4413 == 1){
    goto bb42513;
  } else {
    v4416 = v4412;
    goto lBEB2;
  }

bb42350:
  if (((v4405 ^ v4407) & 128u) == 0u) {
    goto bb42361;
  } else {
    v4409 = 1;
    goto bb42362;
  }

lBE97:
  v4403 = v4404;
  v4405 = v4406;
  v4407 = (v4405 + 47) + (((s16 )(s8 )v4403));
  if (((s8 )v4405) < 0) {
    goto bb42361;
  } else {
    goto bb42350;
  }

lBE90:
  if (v4397 == 0){
    v4404 = v4397;
    v4406 = v4398;
    goto lBE97;
  } else {
    goto bb42278;
  }

bb42314:
  v4401 = v4400;
  v4402 = (v4400 >> 8) & 1;
  v4404 = v4402;
  v4406 = v4401;
  goto lBE97;

bb42278:
  v4399 = -2 - v4380;
  v4400 = (v4399 + 10) + v4397;
  if (((s8 )v4398) > -1) {
    goto bb42314;
  } else {
    goto bb42302;
  }

bb42302:
  goto bb42314;

bb42361:
  v4409 = 0;
  goto bb42362;

bb42513:
  v4414 = v4411 + 2;
  RAM[v4414 + 255u] = 46;
  v4416 = v4414;
  goto lBEB2;

lBE6A_2e_preheader:
  v4378 = v4379;
  X = 128u;
  Z = 0;
  N = 1;
  v4381 = 128u;
  v4383 = v4378;
  goto lBE6A;

lAF4B:
  v1858 = Y;
  RAM[94] = v1858;
  RAM[113] = (v1858 - 1);
  RAM[93] = 6;
  Y = 36;
  Z = 0;
  N = 0;
  v1859 = S;
  RAM[v1859 + 256u] = -81;
  RAM[(v1859 - 1) + 256u] = 88;
  S = (v1859 - 2);
  v4379 = 36;
  goto lBE6A_2e_preheader;

lBE66:
  Y = 0;
  Z = 1;
  N = 0;
  v4379 = 0;
  goto lBE6A_2e_preheader;

lBE48:
  v4363 = v4364;
  v4365 = v4366;
  v4367 = v4368;
  v4369 = (v4367 - 3) + (((s16 )(s8 )v4365));
  v4370 = v4369;
  V = (((((((v4370 ^ v4367) & 128u) == 0u) | (((s8 )v4367) > -1))&1))) ? 0 : 1;
  C = (((v4370 >> 8) & 1) ^ 1);
  RAM[94] = v4369;
  RAM[93] = v4363;
  A = v4363;
  v4371 = v4363 == 0;
  Z = v4371;
  v4372 = (v4363 >> 7);
  N = v4372;
  if ((((((v4363 == 0) ^ 1)&1)) & (v4372 == 0))&1) {
    goto lBE66;
  } else {
    goto lBE53;
  }

bb41647:
  v4350 = v4345 & 255;
  v4351 = v4350 - 11;
  v4352 = v4351;
  v4353 = (v4352 >> 8) & 1;
  v4354 = v4353 ^ 1;
  C = v4354;
  Z = ((v4352 & 255u) == 0u);
  N = v4351 >> 7;
  if (v4353 == 0){
    v4364 = 1;
    v4366 = v4354;
    v4368 = v4348;
    goto lBE48;
  } else {
    goto bb41674;
  }

bb41618:
  v4346 = v4347;
  V = v4346;
  v4348 = v4345;
  A = v4348;
  Z = v4348 == 0;
  v4349 = (v4348 >> 7);
  N = v4349;
  C = (v4345 >> 8) & 1;
  if (v4349 == 0){
    goto bb41647;
  } else {
    v4360 = 1;
    v4362 = v4348;
    goto lBE47;
  }

bb41606:
  if (((v4344 ^ v4345) & 128u) == 0u) {
    goto bb41617;
  } else {
    v4347 = 1;
    goto bb41618;
  }

lBE35:
  X = 1;
  v4344 = RAM[93];
  A = v4344;
  Z = v4344 == 0;
  N = v4344 >> 7;
  C = 0;
  v4345 = v4344 + 10;
  if (((s8 )v4344) < 0) {
    goto bb41617;
  } else {
    goto bb41606;
  }

bb41617:
  v4347 = 0;
  goto bb41618;

lBE47:
  v4359 = v4360;
  v4361 = v4362;
  C = 1;
  v4364 = v4359;
  v4366 = 1;
  v4368 = v4361;
  goto lBE48;

bb41697:
  v4356 = v4357;
  V = v4356;
  v4358 = v4355;
  C = (v4355 >> 8) & 1;
  X = v4358;
  A = 2;
  Z = 0;
  N = 0;
  v4360 = v4358;
  v4362 = 2;
  goto lBE47;

bb41685:
  if (((v4348 ^ v4355) & 128u) == 0u) {
    goto bb41696;
  } else {
    v4357 = 1;
    goto bb41697;
  }

bb41674:
  v4355 = (v4350 + 255) + v4354;
  if (((s8 )v4348) > -1) {
    goto bb41696;
  } else {
    goto bb41685;
  }

bb41696:
  v4357 = 0;
  goto bb41697;

lBE64:
  v4376 = v4377;
  RAM[113] = v4376;
  goto lBE66;

lBE53:
  v4373 = RAM[113];
  v4374 = v4373 + 1;
  Y = v4374;
  RAM[v4374 + 255u] = 46;
  A = v4363;
  Z = v4371;
  N = v4372;
  if (v4363 == 0){
    v4377 = v4374;
    goto lBE64;
  } else {
    goto bb41869;
  }

bb41869:
  A = 48;
  v4375 = v4373 + 2;
  Y = v4375;
  Z = v4375 == 0;
  N = v4375 >> 7;
  RAM[v4375 + 255u] = 48;
  v4377 = v4375;
  goto lBE64;

bb42754:
  Y = v4426;
  Z = (v4415 == v4424);
  N = v4426 >> 7;
  v4433 = v4426;
  goto lBED3;

bb42842:
  v4438 = v4439;
  V = v4438;
  v4440 = v4436;
  C = (((v4437 >> 8) & 1) ^ 1);
  X = v4440;
  A = 45;
  Z = 0;
  N = 0;
  v4442 = v4440;
  v4444 = 45;
  goto lBEE3;

bb42830:
  if ((v4434 & 128u) == 0u) {
    goto bb42841;
  } else {
    v4439 = 1;
    goto bb42842;
  }

bb42800:
  A = 0;
  Z = 1;
  N = 0;
  C = 1;
  v4436 = -v4434;
  v4437 = v4436;
  if ((v4437 & 128u) == 0u) {
    goto bb42841;
  } else {
    goto bb42830;
  }

bb42841:
  v4439 = 0;
  goto bb42842;

bb43014:
  v4461 = 0;
  goto bb43015;

lBF07:
  v4463 = v4464;
  A = 0;
  Z = 1;
  N = 0;
  RAM[v4463 + 256u] = 0;
  goto lBF0C;

lBF04:
  RAM[v4318 + 255u] = 48;
  v4464 = v4318;
  goto lBF07;

lBFBE:
  v4496 = S;
  v4497 = RAM[(((v4496 + 1) + 256u))];
  v4498 = v4496 + 2;
  S = v4498;
  v4499 = RAM[(v4498 + 256u)];
  v4500 = (v4497 + 1) + (v4499 << 8);
  PC = v4500;
  if ((v4500 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lBFB0:
  v4488 = S;
  v4489 = v4488 + 1;
  S = v4489;
  v4490 = RAM[(v4489 + 256u)];
  v4491 = v4490 & 1;
  C = v4491;
  v4492 = (v4490 >> 1);
  Z = v4492 == 0;
  N = 0;
  A = v4492;
  if (v4491 == 0){
    goto lBFBE;
  } else {
    goto lBFB4;
  }

lBFB4:
  v4493 = RAM[97];
  A = v4493;
  Z = v4493 == 0;
  N = v4493 >> 7;
  if (v4493 == 0){
    goto lBFBE;
  } else {
    goto bb43468;
  }

lE030:
  v4542 = S;
  RAM[v4542 + 256u] = -32;
  RAM[(v4542 - 1) + 256u] = 50;
  S = (v4542 - 2);
  goto lBFB4;

lE29D:
  v4814 = S;
  RAM[v4814 + 256u] = -30;
  RAM[(v4814 - 1) + 256u] = -97;
  S = (v4814 - 2);
  goto lBFB4;

bb46464:
  v4812 = RAM[18];
  v4813 = v4812 ^ -1;
  A = v4813;
  Z = (v4812 == 0xff);
  N = v4813 >> 7;
  RAM[18] = v4813;
  goto lE29D;

lE2CC:
  RAM[102] = 0;
  v4825 = RAM[18];
  A = v4825;
  Z = v4825 == 0;
  N = v4825 >> 7;
  v4826 = S;
  RAM[v4826 + 256u] = -30;
  RAM[(v4826 - 1) + 256u] = -44;
  RAM[(v4826 - 2) + 256u] = v4825;
  S = (v4826 - 3);
  goto lE29D;

bb46554:
  *p40 = -30;
  RAM[v4816 + 256u] = -84;
  S = (v4816 - 1);
  goto lBFB4;

bb46767:
  RAM[v4830 + 256u] = -29;
  RAM[(v4829 - 2) + 256u] = 21;
  S = (v4829 - 3);
  goto lBFB4;

lE337:
  v4846 = S;
  v4847 = v4846 + 1;
  S = v4847;
  v4848 = RAM[(v4847 + 256u)];
  A = v4848;
  Z = v4848 == 0;
  N = v4848 >> 7;
  if (((s8 )v4848) < 0) {
    goto lBFB4;
  } else {
    goto lE33D;
  }

bb43468:
  v4494 = RAM[102];
  v4495 = v4494 ^ -1;
  A = v4495;
  Z = (v4494 == 0xff);
  N = v4495 >> 7;
  RAM[102] = v4495;
  goto lBFBE;

lE042:
  v4549 = S;
  v4550 = RAM[(((v4549 + 1) + 256u))];
  v4551 = v4549 + 2;
  S = v4551;
  v4552 = RAM[(v4551 + 256u)];
  v4553 = (v4550 + 1) + (v4552 << 8);
  PC = v4553;
  if ((v4553 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

bb44324:
  v4588 = S;
  v4589 = RAM[(((v4588 + 1) + 256u))];
  v4590 = v4588 + 2;
  S = v4590;
  v4591 = RAM[(v4590 + 256u)];
  v4592 = (v4589 + 1) + (v4591 << 8);
  PC = v4592;
  if ((v4592 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

bb44809:
  v4620 = S;
  v4621 = RAM[(((v4620 + 1) + 256u))];
  v4622 = v4620 + 2;
  S = v4622;
  v4623 = RAM[(v4622 + 256u)];
  v4624 = (v4621 + 1) + (v4623 << 8);
  PC = v4624;
  if ((v4624 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

bb44844:
  v4626 = S;
  v4627 = RAM[(((v4626 + 1) + 256u))];
  v4628 = v4626 + 2;
  S = v4628;
  v4629 = RAM[(v4628 + 256u)];
  v4630 = (v4627 + 1) + (v4629 << 8);
  PC = v4630;
  if ((v4630 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

bb44879:
  v4632 = S;
  v4633 = RAM[(((v4632 + 1) + 256u))];
  v4634 = v4632 + 2;
  S = v4634;
  v4635 = RAM[(v4634 + 256u)];
  v4636 = (v4633 + 1) + (v4635 << 8);
  PC = v4636;
  if ((v4636 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

bb44914:
  v4640 = S;
  v4641 = RAM[(((v4640 + 1) + 256u))];
  v4642 = v4640 + 2;
  S = v4642;
  v4643 = RAM[(v4642 + 256u)];
  v4644 = (v4641 + 1) + (v4643 << 8);
  PC = v4644;
  if ((v4644 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

bb44949:
  v4646 = S;
  v4647 = RAM[(((v4646 + 1) + 256u))];
  v4648 = v4646 + 2;
  S = v4648;
  v4649 = RAM[(v4648 + 256u)];
  v4650 = (v4647 + 1) + (v4649 << 8);
  PC = v4650;
  if ((v4650 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lE130:
  v4654 = S;
  RAM[v4654 + 256u] = -31;
  RAM[(v4654 - 1) + 256u] = 70;
  v4655 = v4654 - 2;
  v4656 = RAM[783];
  RAM[v4655 + 256u] = v4656;
  v4657 = RAM[780];
  A = v4657;
  v4658 = RAM[781];
  X = v4658;
  v4659 = RAM[782];
  Y = v4659;
  S = v4655;
  v4660 = RAM[(v4655 + 256u)];
  N = v4660 >> 7;
  V = ((v4660 >> 6) & 1);
  B = ((v4660 >> 4) & 1);
  D = ((v4660 >> 3) & 1);
  I = ((v4660 >> 2) & 1);
  Z = ((v4660 >> 1) & 1);
  C = (v4660 & 1);
  v4661 = RAM[20];
  v4662 = RAM[21];
  v4663 = (v4662 << 8) | v4661;
  PC = v4663;
  if ((v4663 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

bb45177:
  v4670 = S;
  v4671 = RAM[(((v4670 + 1) + 256u))];
  v4672 = v4670 + 2;
  S = v4672;
  v4673 = RAM[(v4672 + 256u)];
  v4674 = (v4671 + 1) + (v4673 << 8);
  PC = v4674;
  if ((v4674 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lE194:
  v4693 = S;
  v4694 = RAM[(((v4693 + 1) + 256u))];
  v4695 = v4693 + 2;
  S = v4695;
  v4696 = RAM[(v4695 + 256u)];
  v4697 = (v4694 + 1) + (v4696 << 8);
  PC = v4697;
  if ((v4697 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

bb45600:
  v4715 = S;
  v4716 = RAM[(((v4715 + 1) + 256u))];
  v4717 = v4715 + 2;
  S = v4717;
  v4718 = RAM[(v4717 + 256u)];
  v4719 = (v4716 + 1) + (v4718 << 8);
  PC = v4719;
  if ((v4719 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lE20D:
  v4752 = S;
  v4753 = RAM[(((v4752 + 1) + 256u))];
  v4754 = v4752 + 2;
  S = v4754;
  v4755 = RAM[(v4754 + 256u)];
  v4756 = (v4753 + 1) + (v4755 << 8);
  PC = v4756;
  if ((v4756 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lE209:
  v4748 = Z;
  if (v4748 == 0){
    goto lE20D;
  } else {
    goto bb45852;
  }

bb45852:
  v4749 = S;
  v4750 = v4749 + 2;
  S = v4750;
  v4751 = RAM[(v4750 + 256u)];
  A = v4751;
  Z = v4751 == 0;
  N = v4751 >> 7;
  goto lE20D;

lE33D:
  v4849 = RAM[(((v4846 + 2) + 256u))];
  v4850 = v4846 + 3;
  S = v4850;
  v4851 = RAM[(v4850 + 256u)];
  v4852 = (v4849 + 1) + (v4851 << 8);
  PC = v4852;
  if ((v4852 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lE386:
  X = 128u;
  Z = 0;
  N = 1;
  v4853 = RAM[768];
  v4854 = RAM[769];
  v4855 = (v4854 << 8) | v4853;
  PC = v4855;
  if ((v4855 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lA6C9:
  Y = 1;
  RAM[15] = 1;
  v649 = RAM[95];
  v650 = RAM[96];
  v651 = RAM[(((((v650 << 8u) | v649) + 1u) & 65535u))];
  A = v651;
  Z = v651 == 0;
  N = v651 >> 7;
  if (v651 == 0){
    goto lE386;
  } else {
    goto bb7060;
  }

lA6BB:
  v645 = S;
  S = (v645 + 2);
  v646 = RAM[20];
  v647 = RAM[21];
  v648 = v646 | v647;
  A = v648;
  Z = v648 == 0;
  N = v648 >> 7;
  if (v648 == 0){
    goto bb7007;
  } else {
    goto lA6C9;
  }

bb7007:
  A = -1;
  Z = 0;
  N = 1;
  RAM[20] = -1;
  RAM[21] = -1;
  goto lA6C9;

bb7380:
  v690 = RAM[(((v688 + v689) & 65535u))];
  X = v690;
  v691 = v689 + 1;
  Y = v691;
  v692 = RAM[(((v688 + v691) & 65535u))];
  A = v692;
  Z = v692 == 0;
  N = v692 >> 7;
  RAM[95] = v690;
  RAM[96] = v692;
  if (v692 == 0){
    goto lE386;
  } else {
    goto lA6C9;
  }

lE39D:
  X = -5;
  Z = 0;
  N = 1;
  S = -5;
  goto lE386;

lE421:
  v4881 = S;
  v4882 = RAM[(((v4881 + 1) + 256u))];
  v4883 = v4881 + 2;
  S = v4883;
  v4884 = RAM[(v4883 + 256u)];
  v4885 = (v4882 + 1) + (v4884 << 8);
  PC = v4885;
  if ((v4885 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lE40E:
  v4873 = X;
  RAM[55] = v4873;
  v4874 = Y;
  RAM[56] = v4874;
  RAM[51] = v4873;
  RAM[52] = v4874;
  Y = 0;
  A = 0;
  v4875 = RAM[43];
  v4876 = RAM[44];
  RAM[(v4876 << 8u) | v4875] = 0;
  v4877 = RAM[43];
  v4878 = v4877 + 1;
  RAM[43] = v4878;
  Z = v4878 == 0;
  N = v4878 >> 7;
  if (v4878 == 0){
    goto bb47563;
  } else {
    goto lE421;
  }

bb47563:
  v4879 = RAM[44];
  v4880 = v4879 + 1;
  RAM[44] = v4880;
  Z = v4880 == 0;
  N = v4880 >> 7;
  goto lE421;

lE4B6:
  v4920 = RAM[(((v4916 + 2) + 256u))];
  v4921 = v4916 + 3;
  S = v4921;
  v4922 = RAM[(v4921 + 256u)];
  v4923 = (v4920 + 1) + (v4922 << 8);
  PC = v4923;
  if ((v4923 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lE4B1:
  v4913 = A;
  X = v4913;
  v4914 = v4913 == 0;
  v4915 = (v4913 >> 7);
  v4916 = S;
  v4917 = v4916 + 1;
  S = v4917;
  v4918 = RAM[(v4917 + 256u)];
  A = v4918;
  Z = v4918 == 0;
  N = v4918 >> 7;
  v4919 = C;
  if (v4919 == 0){
    goto lE4B6;
  } else {
    goto bb47961;
  }

bb47961:
  A = v4913;
  Z = v4914;
  N = v4915;
  goto lE4B6;

not_found:
  v0 = PC;
  v1 = v0;
  v2 = RAM[v1];
  if (v2 == 76){
    goto bb;
  } else {
    goto app_not_found;
  }

bb:
  v3 = RAM[(((v1 + 1u) & 65535u))];
  v4 = RAM[(((v1 + 2u) & 65535u))];
  v5 = (v4 << 8) | v3;
  PC = v5;
  if ((v5 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

bb1885:
  v10 = S;
  v11 = v10 + 1;
  S = v11;
  v12 = RAM[(v11 + 256u)];
  v13 = PC;
  v14 = (v13 + 1) + (v12 << 8);
  PC = v14;
  if ((v14 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

app_not_found:
  v6 = kernal_dispatch(&PC, &A, &X, &Y, &S, &N, &V, &B, &D, &I, &Z, &C);
  if (v6 == 0u){
    return 0; /* continuation */
//    goto bb1885;
  } else {
    goto bb1876;
  }

bb1876:
  v7 = S;
  v8 = v7 + 1;
  S = v8;
  v9 = RAM[(v8 + 256u)];
  PC = v9;
  goto bb1885;

lA43A:
  C = v4857;
  v216 = (v4856 << 1);
  X = v216;
  v217 = v216;
  v218 = RAM[(v217 + 41766u)];
  RAM[34] = v218;
  v219 = RAM[(v217 + 41767u)];
  A = v219;
  Z = v219 == 0;
  N = v219 >> 7;
  RAM[35] = v219;
  v220 = S;
  RAM[v220 + 256u] = -92;
  RAM[(v220 - 1) + 256u] = 73;
  S = (v220 - 2);
  PC = -52;
  goto not_found;

lA47B:
  A = 128u;
  Z = 0;
  N = 1;
  v244 = S;
  RAM[v244 + 256u] = -92;
  RAM[(v244 - 1) + 256u] = 127;
  S = (v244 - 2);
  PC = -112;
  goto not_found;

lA486:
  v249 = X;
  RAM[122] = v249;
  v250 = Y;
  RAM[123] = v250;
  v251 = S;
  RAM[v251 + 256u] = -92;
  RAM[(v251 - 1) + 256u] = -116;
  S = (v251 - 2);
  PC = 115;
  goto not_found;

lA562:
  v410 = S;
  RAM[v410 + 256u] = -91;
  RAM[(v410 - 1) + 256u] = 100;
  RAM[(v410 - 2) + 256u] = -31;
  RAM[(v410 - 3) + 256u] = 20;
  S = (v410 - 4);
  PC = -49;
  goto not_found;

lA483:
  v248 = S;
  RAM[v248 + 256u] = -92;
  RAM[(v248 - 1) + 256u] = -123;
  S = (v248 - 2);
  X = 0;
  Z = 1;
  N = 0;
  goto lA562;

lA560:
  X = 0;
  Z = 1;
  N = 0;
  goto lA562;

lABF9:
  v1430 = v1431;
  v1432 = v1430 - 1;
  S = v1432;
  v1433 = RAM[19];
  A = v1433;
  Z = v1433 == 0;
  N = v1433 >> 7;
  if (v1433 == 0){
    goto bb14244;
  } else {
    goto lA560;
  }

lABD6:
  v1419 = S;
  RAM[v1419 + 256u] = -85;
  v1420 = v1419 - 1;
  S = v1420;
  RAM[v1420 + 256u] = -40;
  v1431 = v1420;
  goto lABF9;

lABD1:
  A = 44;
  Z = 0;
  N = 0;
  RAM[511] = 44;
  goto lABD6;

lAC4A:
  v1462 = S;
  RAM[v1462 + 256u] = -84;
  v1463 = v1462 - 1;
  S = v1463;
  RAM[v1463 + 256u] = 76;
  v1431 = v1463;
  goto lABF9;

bb14489:
  v1459 = RAM[19];
  A = v1459;
  Z = v1459 == 0;
  N = v1459 >> 7;
  if (v1459 == 0){
    goto bb14506;
  } else {
    goto lAC4A;
  }

lA660:
  v599 = S;
  RAM[v599 + 256u] = -90;
  RAM[(v599 - 1) + 256u] = 98;
  S = (v599 - 2);
  PC = -25;
  goto not_found;

lA87D:
  *p2 = -88;
  RAM[v877 + 256u] = 127;
  S = (v877 - 1);
  goto lA660;

lA6AA:
  v637 = S;
  RAM[v637 + 256u] = -90;
  RAM[(v637 - 1) + 256u] = -84;
  S = (v637 - 2);
  PC = 121;
  goto not_found;

bb6916:
  v642 = S;
  RAM[v642 + 256u] = -90;
  RAM[(v642 - 1) + 256u] = -75;
  S = (v642 - 2);
  PC = 115;
  goto not_found;

lA792:
  v767 = S;
  RAM[v767 + 256u] = -89;
  RAM[(v767 - 1) + 256u] = -108;
  S = (v767 - 2);
  PC = 121;
  goto not_found;

bb8230:
  v771 = S;
  RAM[v771 + 256u] = -89;
  RAM[(v771 - 1) + 256u] = -101;
  S = (v771 - 2);
  PC = 115;
  goto not_found;

lA7E4:
  v800 = S;
  RAM[v800 + 256u] = -89;
  RAM[(v800 - 1) + 256u] = -26;
  S = (v800 - 2);
  PC = 115;
  goto not_found;

bb8727:
  C = v808;
  v814 = (v810 << 1);
  Y = v814;
  v815 = v814;
  v816 = RAM[(v815 + 40973u)];
  v817 = S;
  RAM[v817 + 256u] = v816;
  v818 = RAM[(v815 + 40972u)];
  A = v818;
  Z = v818 == 0;
  N = v818 >> 7;
  RAM[(v817 - 1) + 256u] = v818;
  S = (v817 - 2);
  PC = 115;
  goto not_found;

bb8862:
  v823 = S;
  RAM[v823 + 256u] = -88;
  RAM[(v823 - 1) + 256u] = 20;
  S = (v823 - 2);
  PC = 115;
  goto not_found;

lA82C:
  v841 = v842;
  RAM[(v841 - 1) + 256u] = -88;
  RAM[(v841 - 2) + 256u] = 46;
  S = (v841 - 3);
  PC = -31;
  goto not_found;

bb7060:
  v652 = S;
  RAM[v652 + 256u] = -90;
  v653 = v652 - 1;
  S = v653;
  RAM[v653 + 256u] = -45;
  v842 = v653;
  goto lA82C;

lA7AE:
  v780 = S;
  RAM[v780 + 256u] = -89;
  v781 = v780 - 1;
  S = v781;
  RAM[v781 + 256u] = -80;
  v842 = v781;
  goto lA82C;

lA7A5:
  v777 = RAM[74];
  v778 = S;
  RAM[v778 + 256u] = v777;
  v779 = RAM[73];
  RAM[(v778 - 1) + 256u] = v779;
  A = -127;
  Z = 0;
  N = 1;
  RAM[(v778 - 2) + 256u] = -127;
  S = (v778 - 3);
  goto lA7AE;

bb15699:
  v1578 = RAM[(v1570 + 271u)];
  RAM[57] = v1578;
  v1579 = RAM[(v1570 + 272u)];
  RAM[58] = v1579;
  v1580 = RAM[(v1570 + 274u)];
  RAM[122] = v1580;
  v1581 = RAM[(v1570 + 273u)];
  A = v1581;
  Z = v1581 == 0;
  N = v1581 >> 7;
  RAM[123] = v1581;
  goto lA7AE;

bb15675:
  v1574 = v1575;
  V = v1574;
  v1576 = v1572;
  A = v1576;
  Z = v1576 == 0;
  N = v1576 >> 7;
  v1577 = ((v1573 >> 8) & 1) ^ 1;
  C = v1577;
  if (v1576 == 0){
    goto lAD78;
  } else {
    goto bb15699;
  }

bb15659:
  if (((v1571 ^ v1569) & 128u) == 0u) {
    goto bb15674;
  } else {
    v1575 = 1;
    goto bb15675;
  }

lAD5A:
  v1566 = S;
  X = v1566;
  v1567 = v1566 == 0;
  Z = v1567;
  v1568 = (v1566 >> 7);
  N = v1568;
  C = 1;
  v1569 = A;
  v1570 = v1566;
  v1571 = RAM[(v1570 + 265u)];
  v1572 = ((((v1569 - 1) - v1571))) + 1;
  v1573 = v1572;
  if (((v1573 ^ v1569) & 128u) == 0u) {
    goto bb15674;
  } else {
    goto bb15659;
  }

bb15674:
  v1575 = 0;
  goto bb15675;

lAD80:
  v1586 = A;
  v1587 = v1586 - 44;
  v1588 = v1587;
  C = (((v1588 >> 8) & 1) ^ 1);
  Z = ((v1588 & 255u) == 0u);
  N = v1587 >> 7;
  if ((v1588 & 255u) == 0u) {
    goto bb15877;
  } else {
    goto lA7AE;
  }

lA871:
  v869 = N;
  v870 = V;
  v871 = B;
  v872 = D;
  v873 = I;
  v874 = Z;
  v875 = C;
  v876 = S;
  RAM[v876 + 256u] = (((((((((((((((((v870 << 6) | (v869 << 7)))) | (v871 << 4)))) | (v872 << 3)))) | (v873 << 2)))) | v875))) | (v874 << 1));
  A = 0;
  Z = 1;
  N = 0;
  RAM[(v876 - 1) + 256u] = -88;
  RAM[(v876 - 2) + 256u] = 118;
  S = (v876 - 3);
  PC = -112;
  goto not_found;

lA897:
  v889 = S;
  RAM[v889 + 256u] = -88;
  RAM[(v889 - 1) + 256u] = -103;
  S = (v889 - 2);
  PC = 121;
  goto not_found;

lA888:
  v884 = RAM[123];
  v885 = S;
  RAM[v885 + 256u] = v884;
  v886 = RAM[122];
  RAM[(v885 - 1) + 256u] = v886;
  v887 = RAM[58];
  RAM[(v885 - 2) + 256u] = v887;
  v888 = RAM[57];
  RAM[(v885 - 3) + 256u] = v888;
  A = -115;
  Z = 0;
  N = 1;
  RAM[(v885 - 4) + 256u] = -115;
  S = (v885 - 5);
  goto lA897;

lA92B:
  v1007 = S;
  RAM[v1007 + 256u] = -87;
  RAM[(v1007 - 1) + 256u] = 45;
  S = (v1007 - 2);
  PC = 121;
  goto not_found;

lA940:
  v1016 = S;
  RAM[v1016 + 256u] = -87;
  RAM[(v1016 - 1) + 256u] = 66;
  S = (v1016 - 2);
  PC = 121;
  goto not_found;

lA95F:
  RAM[v1029 + 256u] = -87;
  RAM[(v1029 - 1) + 256u] = 97;
  S = (v1029 - 2);
  PC = 115;
  goto not_found;

lA99F:
  v1081 = S;
  RAM[v1081 + 256u] = -87;
  RAM[(v1081 - 1) + 256u] = -95;
  S = (v1081 - 2);
  PC = 115;
  goto not_found;

bb11130:
  v1076 = v1077;
  V = v1076;
  v1078 = v1075;
  A = v1078;
  Z = v1078 == 0;
  N = v1078 >> 7;
  v1079 = (v1075 >> 8) & 1;
  C = v1079;
  RAM[20] = v1078;
  if (v1079 == 0) {
    goto lA99F;
  } else {
    goto bb11160;
  }

bb11118:
  if (((v1071 ^ v1075) & 128u) == 0u) {
    goto bb11129;
  } else {
    v1077 = 1;
    goto bb11130;
  }

bb11013:
  v1067 = v1068;
  V = v1067;
  v1069 = v1060 & 255;
  v1070 = v1069 << 1;
  v1071 = v1070;
  RAM[20] = v1071;
  v1072 = ((((v1066 << 1) & 510))) | v1064;
  v1073 = (v1072 >> 8);
  C = v1073;
  v1074 = v1072;
  RAM[21] = v1074;
  A = v1071;
  Z = v1071 == 0;
  N = ((v1069 >> 6) & 1);
  v1075 = ((((v1046 & 255) + (v1070 & 254)))) + v1073;
  if (((v1046 ^ v1070) & 128u) == 0u) {
    goto bb11118;
  } else {
    goto bb11129;
  }

bb11001:
  if (((v1058 ^ v1066) & 128u) == 0u) {
    goto bb11012;
  } else {
    v1068 = 1;
    goto bb11013;
  }

bb10946:
  v1061 = v1062;
  V = v1061;
  v1063 = v1060;
  v1064 = (v1063 >> 7);
  v1065 = (v1060 >> 8) & 1;
  C = v1065;
  RAM[20] = v1063;
  A = v1058;
  Z = v1058 == 0;
  N = v1059;
  v1066 = (((v1048 + (v1056 & 255)))) + v1065;
  if (((v1047 ^ v1058) & 128u) == 0u) {
    goto bb11001;
  } else {
    goto bb11012;
  }

bb10934:
  if (((v1055 ^ v1060) & 128u) == 0u) {
    goto bb10945;
  } else {
    v1062 = 1;
    goto bb10946;
  }

bb10804:
  v1052 = RAM[20];
  v1053 = v1052;
  v1054 = v1053 << 2;
  v1055 = (v1054 & 508);
  A = v1055;
  v1056 = ((((((((((v1048 << 1) | (v1052 >> 7)))) << 1))) & 510))) | ((((v1053 >> 6) & 1)));
  v1057 = (v1056 >> 8);
  C = v1057;
  Z = ((v1056 & 255u) == 0u);
  v1058 = v1056;
  v1059 = (v1058 >> 7);
  N = v1059;
  RAM[34] = v1058;
  v1060 = (((v1053 + (v1054 & 252)))) + v1057;
  if (((v1052 ^ v1055) & 128u) == 0u) {
    goto bb10934;
  } else {
    goto bb10945;
  }

bb10945:
  v1062 = 0;
  goto bb10946;

bb11012:
  v1068 = 0;
  goto bb11013;

bb11129:
  v1077 = 0;
  goto bb11130;

bb11160:
  v1080 = v1074 + 1;
  RAM[21] = v1080;
  Z = v1080 == 0;
  N = v1080 >> 7;
  goto lA99F;

lAA14:
  v1147 = RAM[100];
  X = v1147;
  v1148 = RAM[99];
  Y = v1148;
  v1149 = RAM[101];
  A = v1149;
  Z = v1149 == 0;
  N = v1149 >> 7;
  PC = -37;
  goto not_found;

lAA1D:
  v1150 = v1151;
  v1152 = v1153;
  v1154 = RAM[34];
  v1155 = RAM[35];
  v1156 = RAM[(((((v1155 << 8u) | v1154) + v1150) & 65535u))];
  A = v1156;
  Z = v1156 == 0;
  N = v1156 >> 7;
  RAM[(v1152 - 1) + 256u] = -86;
  RAM[(v1152 - 2) + 256u] = 33;
  S = (v1152 - 3);
  PC = 128;
  goto not_found;

lA9ED:
  v1125 = v1126;
  RAM[113] = v1125;
  v1127 = S;
  RAM[v1127 + 256u] = -87;
  v1128 = v1127 - 1;
  S = v1128;
  RAM[v1128 + 256u] = -15;
  v1151 = v1125;
  v1153 = v1128;
  goto lAA1D;

bb11550:
  Y = 0;
  Z = 1;
  N = 0;
  RAM[97] = 0;
  RAM[102] = 0;
  v1126 = 0;
  goto lA9ED;

lA9F5:
  v1131 = RAM[113];
  v1132 = v1131 + 1;
  RAM[113] = v1132;
  Y = v1132;
  Z = v1132 == 0;
  N = v1132 >> 7;
  v1133 = S;
  RAM[v1133 + 256u] = -87;
  v1134 = v1133 - 1;
  S = v1134;
  RAM[v1134 + 256u] = -5;
  v1151 = v1132;
  v1153 = v1134;
  goto lAA1D;

lAA90:
  v1221 = N;
  v1222 = V;
  v1223 = B;
  v1224 = D;
  v1225 = I;
  v1226 = Z;
  v1227 = C;
  v1228 = S;
  RAM[v1228 + 256u] = (((((((((((((((((v1222 << 6) | (v1221 << 7)))) | (v1223 << 4)))) | (v1224 << 3)))) | (v1225 << 2)))) | v1227))) | (v1226 << 1));
  v1229 = X;
  RAM[19] = v1229;
  RAM[(v1228 - 1) + 256u] = -86;
  RAM[(v1228 - 2) + 256u] = -107;
  RAM[(v1228 - 3) + 256u] = -31;
  RAM[(v1228 - 4) + 256u] = 26;
  v1230 = A;
  RAM[(v1228 - 5) + 256u] = v1230;
  RAM[(v1228 - 6) + 256u] = -28;
  RAM[(v1228 - 7) + 256u] = -80;
  S = (v1228 - 8);
  PC = -55;
  goto not_found;

lAA9D:
  v1235 = S;
  RAM[v1235 + 256u] = -86;
  RAM[(v1235 - 1) + 256u] = -97;
  S = (v1235 - 2);
  PC = 121;
  goto not_found;

lAAE8:
  C = 1;
  v1280 = S;
  RAM[v1280 + 256u] = -86;
  RAM[(v1280 - 1) + 256u] = -21;
  S = (v1280 - 2);
  PC = -16;
  goto not_found;

lAAF8:
  v1300 = v1301;
  v1302 = v1303;
  v1304 = v1305;
  v1306 = V;
  v1307 = B;
  v1308 = D;
  v1309 = I;
  v1310 = S;
  RAM[v1310 + 256u] = (((((((((((((((((v1306 << 6) | (v1304 << 7)))) | (v1307 << 4)))) | (v1308 << 3)))) | (v1309 << 2)))) | v1300))) | (v1302 << 1));
  C = 1;
  RAM[(v1310 - 1) + 256u] = -86;
  RAM[(v1310 - 2) + 256u] = -4;
  S = (v1310 - 3);
  PC = -16;
  goto not_found;

bb12987:
  v1294 = v1295;
  V = v1294;
  v1296 = v1293;
  A = v1296;
  v1297 = v1296 == 0;
  Z = v1297;
  v1298 = (v1296 >> 7);
  N = v1298;
  v1299 = (v1293 >> 8) & 1;
  C = v1299;
  if (v1296 == 0) {
    v1301 = v1299;
    v1303 = v1297;
    v1305 = v1298;
    goto lAAF8;
  } else {
    v1329 = v1296;
    goto lAB0E;
  }

bb12975:
  if (((v1292 ^ v1293) & 128u) == 0u) {
    goto bb12986;
  } else {
    v1295 = 1;
    goto bb12987;
  }

bb12951:
  C = v1291;
  V = v1288;
  v1292 = v1289 ^ -1;
  A = v1292;
  Z = (v1289 == 0xff);
  N = v1292 >> 7;
  v1293 = (v1292 + 1) + v1291;
  if (((s8 )v1289) > -1) {
    goto bb12986;
  } else {
    goto bb12975;
  }

lAAEE:
  v1282 = v1283;
  v1284 = v1285;
  v1286 = (v1284 - 11) + (((s16 )(s8 )v1282));
  v1287 = v1286;
  v1288 = (((((((v1287 ^ v1284) & 128u) == 0u) | (((s8 )v1284) > -1))&1))) ? 0 : 1;
  v1289 = v1286;
  v1290 = v1287 & 256u;
  v1291 = (v1290 >> 8u) ^ 1;
  if (v1290 == 0u) {
    v1283 = v1291;
    v1285 = v1289;
    goto lAAEE;
  } else {
    goto bb12951;
  }

lAAEC:
  v1281 = Y;
  A = v1281;
  Z = v1281 == 0;
  N = v1281 >> 7;
  C = 1;
  v1283 = 1;
  v1285 = v1281;
  goto lAAEE;

bb12986:
  v1295 = 0;
  goto bb12987;

lAAFD:
  v1311 = Y;
  RAM[9] = v1311;
  v1312 = S;
  RAM[v1312 + 256u] = -85;
  RAM[(v1312 - 1) + 256u] = 1;
  RAM[(v1312 - 2) + 256u] = -73;
  RAM[(v1312 - 3) + 256u] = -99;
  S = (v1312 - 4);
  PC = 115;
  goto not_found;

lAB13:
  v1334 = S;
  RAM[v1334 + 256u] = -85;
  RAM[(v1334 - 1) + 256u] = 21;
  S = (v1334 - 2);
  PC = 115;
  goto not_found;

bb13175:
  v1324 = v1325;
  V = v1324;
  v1326 = v1322;
  A = v1326;
  Z = v1326 == 0;
  N = v1326 >> 7;
  v1327 = v1323 & 256u;
  C = ((v1327 >> 8u) ^ 1);
  if (v1327 == 0u) {
    v1329 = v1326;
    goto lAB0E;
  } else {
    goto lAB13;
  }

bb13163:
  if (((v1321 ^ v1320) & 128u) == 0u) {
    goto bb13174;
  } else {
    v1325 = 1;
    goto bb13175;
  }

bb13132:
  v1320 = X;
  A = v1320;
  Z = v1320 == 0;
  N = v1320 >> 7;
  v1321 = RAM[9];
  v1322 = ((((v1320 - 1) - v1321))) + v1319;
  v1323 = v1322;
  if (((v1323 ^ v1320) & 128u) == 0u) {
    goto bb13174;
  } else {
    goto bb13163;
  }

bb13100:
  v1316 = S;
  v1317 = v1316 + 1;
  S = v1317;
  v1318 = RAM[(v1317 + 256u)];
  N = v1318 >> 7;
  V = ((v1318 >> 6) & 1);
  B = ((v1318 >> 4) & 1);
  D = ((v1318 >> 3) & 1);
  I = ((v1318 >> 2) & 1);
  Z = ((v1318 >> 1) & 1);
  v1319 = v1318 & 1;
  C = v1319;
  if (v1319 == 0) {
    goto lAB0F;
  } else {
    goto bb13132;
  }

bb13174:
  v1325 = 0;
  goto bb13175;

lAB10:
  v1332 = X;
  v1333 = v1332 - 1;
  X = v1333;
  Z = (v1332 == 1);
  N = v1333 >> 7;
  if (v1332 == 1) {
    goto lAB13;
  } else {
    goto lAB19;
  }

lAB0F:
  v1330 = X;
  v1331 = v1330 + 1;
  X = v1331;
  Z = v1331 == 0;
  N = v1331 >> 7;
  goto lAB10;

lAB0E:
  v1328 = v1329;
  X = v1328;
  Z = v1328 == 0;
  N = v1328 >> 7;
  goto lAB0F;

lAB47:
  v1360 = v1361;
  RAM[v1360 + 256u] = -85;
  RAM[(v1360 - 1) + 256u] = 73;
  RAM[(v1360 - 2) + 256u] = -31;
  RAM[(v1360 - 3) + 256u] = 14;
  S = (v1360 - 4);
  PC = -46;
  goto not_found;

lA451:
  v222 = S;
  RAM[v222 + 256u] = -92;
  RAM[(v222 - 1) + 256u] = 83;
  v223 = v222 - 2;
  S = v223;
  A = 63;
  Z = 0;
  N = 0;
  v1361 = v223;
  goto lAB47;

lA456:
  v225 = v226;
  v227 = RAM[34];
  v228 = RAM[35];
  v229 = RAM[(((((v228 << 8u) | v227) + v225) & 65535u))];
  v230 = S;
  RAM[v230 + 256u] = v229;
  v231 = v229 & 127;
  A = v231;
  Z = v231 == 0;
  N = 0;
  RAM[(v230 - 1) + 256u] = -92;
  RAM[(v230 - 2) + 256u] = 93;
  v232 = v230 - 3;
  S = v232;
  v1361 = v232;
  goto lAB47;

lA454:
  Y = 0;
  Z = 1;
  N = 0;
  v226 = 0u;
  goto lA456;

lA456_2e_loopexit:
  v224 = v234;
  v226 = v224;
  goto lA456;

lA6F3:
  v677 = S;
  RAM[v677 + 256u] = -90;
  RAM[(v677 - 1) + 256u] = -11;
  v678 = v677 - 2;
  S = v678;
  v1361 = v678;
  goto lAB47;

lA6EF:
  v673 = v674;
  v675 = RAM[73];
  Y = v675;
  v676 = v673 & 127;
  A = v676;
  Z = v676 == 0;
  N = 0;
  goto lA6F3;

lA6ED:
  A = 32;
  Z = 0;
  N = 0;
  v674 = 32;
  goto lA6EF;

lA737:
  v730 = Y;
  v731 = v730 + 1;
  Y = v731;
  v732 = RAM[(v731 + 41118u)];
  A = v732;
  Z = v732 == 0;
  N = v732 >> 7;
  if (((s8 )v732) < 0) {
    v674 = v732;
    goto lA6EF;
  } else {
    goto bb7693;
  }

lA737_2e_loopexit:
  v722 = v723;
  v724 = v725;
  v726 = v727&1;
  v728 = v729;
  Y = v728;
  Z = v726;
  N = v724;
  A = v722;
  X = v714;
  goto lA737;

lA72C:
  v707 = v708;
  v709 = v710;
  v711 = v712;
  v713 = v705 - v707;
  v714 = v713 - 1;
  v715 = (v714 >> 7);
  if (v713 == 1) {
    v723 = v709;
    v725 = v715;
    v727 = v713 == 1;
    v729 = v711;
    goto lA737_2e_loopexit;
  } else {
    v717 = 0;
    goto lA72F;
  }

bb7654:
  v721 = v707 + 1;
  if (v720 == 0) {
    v723 = v719;
    v725 = v720;
    v727 = v719 == 0;
    v729 = v718;
    goto lA737_2e_loopexit;
  } else {
    v708 = v721;
    v710 = v719;
    v712 = v718;
    goto lA72C;
  }

lA72F:
  v716 = v717;
  v718 = (v716 + v711) + 1;
  v719 = RAM[(v718 + 41118u)];
  v720 = (v719 >> 7);
  if (((s8 )v719) < 0) {
    goto bb7654;
  } else {
    v717 = (v716 + 1);
    goto lA72F;
  }

bb7535:
  C = 1;
  v703 = v698 - 127;
  v704 = v703;
  V = (((((((v704 ^ v697) & 128u) == 0u) | (((s8 )v697) > -1))&1))) ? 0 : 1;
  v705 = v703;
  A = v705;
  C = (((v704 >> 8) & 1) ^ 1);
  X = v705;
  v706 = Y;
  RAM[73] = v706;
  Y = -1;
  Z = 0;
  N = 1;
  v708 = 0;
  v710 = v705;
  v712 = -1;
  goto lA72C;

bb7508:
  v701 = RAM[15];
  Z = v701 == 0;
  v702 = (v701 >> 7);
  N = v702;
  V = ((v701 >> 6) & 1);
  if (v702 == 0) {
    goto bb7535;
  } else {
    goto lA6F3;
  }

bb7481:
  v697 = A;
  v698 = v697;
  v699 = v698 - 255;
  v700 = v699;
  C = (((v700 >> 8) & 1) ^ 1);
  Z = ((v700 & 255u) == 0u);
  N = v699 >> 7;
  if ((v700 & 255u) == 0u) {
    goto lA6F3;
  } else {
    goto bb7508;
  }

lA71A:
  v696 = N;
  if (v696 == 0) {
    goto lA6F3;
  } else {
    goto bb7481;
  }

lA740:
  v735 = Z;
  if (v735 == 0) {
    goto lA737;
  } else {
    goto lA742;
  }

bb7693:
  v733 = S;
  RAM[v733 + 256u] = -89;
  RAM[(v733 - 1) + 256u] = 63;
  v734 = v733 - 2;
  S = v734;
  v1361 = v734;
  goto lAB47;

lAAD7:
  A = 13;
  Z = 0;
  N = 0;
  v1267 = S;
  RAM[v1267 + 256u] = -86;
  RAM[(v1267 - 1) + 256u] = -37;
  v1268 = v1267 - 2;
  S = v1268;
  v1361 = v1268;
  goto lAB47;

lA44A:
  A = 0;
  Z = 1;
  N = 0;
  RAM[19] = 0;
  v221 = S;
  RAM[v221 + 256u] = -92;
  RAM[(v221 - 1) + 256u] = 80;
  S = (v221 - 2);
  goto lAAD7;

lA6D4:
  v654 = S;
  RAM[v654 + 256u] = -90;
  RAM[(v654 - 1) + 256u] = -42;
  S = (v654 - 2);
  goto lAAD7;

bb12828:
  A = 10;
  Z = 0;
  N = 0;
  v1271 = S;
  RAM[v1271 + 256u] = -86;
  RAM[(v1271 - 1) + 256u] = -28;
  v1272 = v1271 - 2;
  S = v1272;
  v1361 = v1272;
  goto lAB47;

bb13338:
  v1344 = RAM[34];
  v1345 = RAM[35];
  v1346 = Y;
  v1347 = RAM[(((((v1345 << 8u) | v1344) + v1346) & 65535u))];
  A = v1347;
  Z = v1347 == 0;
  N = v1347 >> 7;
  v1348 = S;
  RAM[v1348 + 256u] = -85;
  RAM[(v1348 - 1) + 256u] = 47;
  v1349 = v1348 - 2;
  S = v1349;
  v1361 = v1349;
  goto lAB47;

lAB44:
  v1359 = RAM[16297];
  Z = v1359 == 0;
  N = v1359 >> 7;
  V = ((v1359 >> 6) & 1);
  v1361 = v1355;
  goto lAB47;

bb13438:
  A = 32;
  v1358 = RAM[7593];
  Z = v1358 == 0;
  N = v1358 >> 7;
  V = ((v1358 >> 6) & 1);
  goto lAB44;

lAB3B:
  v1355 = v1356;
  v1357 = RAM[19];
  A = v1357;
  Z = v1357 == 0;
  N = v1357 >> 7;
  if (v1357 == 0) {
    goto lAB42;
  } else {
    goto bb13438;
  }

lAAC5:
  v1262 = S;
  RAM[v1262 + 256u] = -86;
  RAM[(v1262 - 1) + 256u] = -57;
  v1263 = v1262 - 2;
  S = v1263;
  v1356 = v1263;
  goto lAB3B;

lAB19:
  v1335 = S;
  RAM[v1335 + 256u] = -85;
  RAM[(v1335 - 1) + 256u] = 27;
  v1336 = v1335 - 2;
  S = v1336;
  v1356 = v1336;
  goto lAB3B;

lAC00:
  v1435 = S;
  RAM[v1435 + 256u] = -84;
  RAM[(v1435 - 1) + 256u] = 2;
  v1436 = v1435 - 2;
  S = v1436;
  v1356 = v1436;
  goto lAB3B;

lAB42:
  A = 29;
  Z = 0;
  N = 0;
  goto lAB44;

bb14244:
  RAM[v1432 + 256u] = -85;
  RAM[(v1430 - 2) + 256u] = -1;
  v1434 = v1430 - 3;
  S = v1434;
  A = 63;
  Z = 0;
  N = 0;
  v1361 = v1434;
  goto lAB47;

bb14506:
  v1460 = S;
  RAM[v1460 + 256u] = -84;
  RAM[(v1460 - 1) + 256u] = 73;
  v1461 = v1460 - 2;
  S = v1461;
  A = 63;
  Z = 0;
  N = 0;
  v1361 = v1461;
  goto lAB47;

bb13769:
  v1385 = S;
  RAM[v1385 + 256u] = -85;
  RAM[(v1385 - 1) + 256u] = -124;
  S = (v1385 - 2);
  PC = 115;
  goto not_found;

lAB7E:
  v1382 = A;
  v1383 = v1382 - 35;
  v1384 = v1383;
  C = (((v1384 >> 8) & 1) ^ 1);
  Z = ((v1384 & 255u) == 0u);
  N = v1383 >> 7;
  if ((v1384 & 255u) == 0u) {
    goto bb13769;
  } else {
    goto lAB92;
  }

lABB7:
  v1405 = S;
  RAM[v1405 + 256u] = -85;
  RAM[(v1405 - 1) + 256u] = -71;
  S = (v1405 - 2);
  PC = -52;
  goto not_found;

lABB5:
  v1404 = RAM[19];
  A = v1404;
  Z = v1404 == 0;
  N = v1404 >> 7;
  goto lABB7;

bb14170:
  v1426 = S;
  RAM[v1426 + 256u] = -85;
  RAM[(v1426 - 1) + 256u] = -26;
  S = (v1426 - 2);
  goto lABB5;

bb14142:
  v1422 = S;
  RAM[v1422 + 256u] = -85;
  RAM[(v1422 - 1) + 256u] = -33;
  S = (v1422 - 2);
  PC = -73;
  goto not_found;

lAC18:
  v1446 = A;
  RAM[73] = v1446;
  v1447 = Y;
  RAM[74] = v1447;
  v1448 = RAM[122];
  A = v1448;
  v1449 = RAM[123];
  RAM[75] = v1448;
  RAM[76] = v1449;
  v1450 = RAM[67];
  X = v1450;
  v1451 = RAM[68];
  Y = v1451;
  Z = v1451 == 0;
  N = v1451 >> 7;
  RAM[122] = v1450;
  RAM[123] = v1451;
  v1452 = S;
  RAM[v1452 + 256u] = -84;
  RAM[(v1452 - 1) + 256u] = 46;
  S = (v1452 - 2);
  PC = 121;
  goto not_found;

bb14444:
  v1457 = S;
  RAM[v1457 + 256u] = -84;
  RAM[(v1457 - 1) + 256u] = 55;
  RAM[(v1457 - 2) + 256u] = -31;
  RAM[(v1457 - 3) + 256u] = 38;
  S = (v1457 - 4);
  PC = -28;
  goto not_found;

lAC51:
  v1466 = S;
  RAM[v1466 + 256u] = -84;
  RAM[(v1466 - 1) + 256u] = 83;
  S = (v1466 - 2);
  PC = 115;
  goto not_found;

lAC4D:
  v1464 = X;
  RAM[122] = v1464;
  v1465 = Y;
  RAM[123] = v1465;
  goto lAC51;

lAC38:
  v1458 = A;
  RAM[512] = v1458;
  X = -1;
  Y = 1;
  Z = 0;
  N = 0;
  goto lAC4D;

lAC91:
  v1500 = S;
  RAM[v1500 + 256u] = -84;
  RAM[(v1500 - 1) + 256u] = -109;
  S = (v1500 - 2);
  PC = 121;
  goto not_found;

lAC9D:
  v1505 = RAM[122];
  v1506 = RAM[123];
  RAM[67] = v1505;
  RAM[68] = v1506;
  v1507 = RAM[75];
  A = v1507;
  v1508 = RAM[76];
  Y = v1508;
  Z = v1508 == 0;
  N = v1508 >> 7;
  RAM[122] = v1507;
  RAM[123] = v1508;
  v1509 = S;
  RAM[v1509 + 256u] = -84;
  RAM[(v1509 - 1) + 256u] = -81;
  S = (v1509 - 2);
  PC = 121;
  goto not_found;

lACD4:
  v1524 = S;
  RAM[v1524 + 256u] = -84;
  RAM[(v1524 - 1) + 256u] = -42;
  S = (v1524 - 2);
  PC = 121;
  goto not_found;

bb15803:
  v1583 = v1584;
  V = v1583;
  v1585 = v1582;
  A = v1585;
  C = (v1582 >> 8) & 1;
  X = v1585;
  Z = v1585 == 0;
  N = v1585 >> 7;
  RAM[v1585 + 256u] = -83;
  RAM[(v1585 - 1) + 256u] = 127;
  S = (v1585 - 2);
  PC = 121;
  goto not_found;

bb15791:
  if (((v1570 ^ v1582) & 128u) == 0u) {
    goto bb15802;
  } else {
    v1584 = 1;
    goto bb15803;
  }

lAD78:
  A = v1566;
  Z = v1567;
  N = v1568;
  v1582 = (v1566 + 17) + v1577;
  if (((s8 )v1566) < 0) {
    goto bb15802;
  } else {
    goto bb15791;
  }

bb15802:
  v1584 = 0;
  goto bb15803;

bb15877:
  v1589 = S;
  RAM[v1589 + 256u] = -83;
  RAM[(v1589 - 1) + 256u] = -122;
  S = (v1589 - 2);
  PC = 115;
  goto not_found;

lADB8:
  v1614 = S;
  RAM[v1614 + 256u] = -83;
  RAM[(v1614 - 1) + 256u] = -70;
  S = (v1614 - 2);
  PC = 121;
  goto not_found;

lADB4:
  A = 0;
  Z = 1;
  N = 0;
  RAM[77] = 0;
  goto lADB8;

bb16327:
  RAM[77] = v1627;
  v1631 = S;
  RAM[v1631 + 256u] = -83;
  RAM[(v1631 - 1) + 256u] = -45;
  S = (v1631 - 2);
  PC = 115;
  goto not_found;

lAE8A:
  v1760 = S;
  RAM[v1760 + 256u] = -82;
  RAM[(v1760 - 1) + 256u] = -116;
  S = (v1760 - 2);
  PC = 115;
  goto not_found;

lAE86:
  A = 0;
  Z = 1;
  N = 0;
  RAM[13] = 0;
  goto lAE8A;

lAEA5:
  PC = 115;
  goto not_found;

bb18077:
  PC = 115;
  goto not_found;

lAF84:
  v1883 = v1884;
  RAM[(v1883 - 1) + 256u] = -81;
  RAM[(v1883 - 2) + 256u] = -122;
  S = (v1883 - 3);
  PC = -34;
  goto not_found;

bb18525:
  v1856 = S;
  RAM[v1856 + 256u] = -81;
  v1857 = v1856 - 1;
  S = v1857;
  RAM[v1857 + 256u] = 74;
  v1884 = v1857;
  goto lAF84;

bb18805:
  v1880 = S;
  RAM[v1880 + 256u] = -81;
  v1881 = v1880 - 1;
  S = v1881;
  RAM[v1881 + 256u] = 125;
  v1884 = v1881;
  goto lAF84;

bb18937:
  v1898 = S;
  RAM[v1898 + 256u] = -81;
  RAM[(v1898 - 1) + 256u] = -100;
  S = (v1898 - 2);
  PC = -73;
  goto not_found;

lAFA7:
  C = (v1764 >> 7);
  v1901 = (v1765 << 1);
  A = v1901;
  v1902 = S;
  RAM[v1902 + 256u] = v1901;
  X = v1901;
  Z = v1901 == 0;
  N = ((v1764 >> 6) & 1);
  RAM[(v1902 - 1) + 256u] = -81;
  RAM[(v1902 - 2) + 256u] = -84;
  S = (v1902 - 3);
  PC = 115;
  goto not_found;

lAFD6:
  v1926 = v1927;
  v1928 = v1929;
  v1930 = v1928;
  v1931 = RAM[(v1930 + 40938u)];
  RAM[85] = v1931;
  v1932 = RAM[(v1930 + 40939u)];
  A = v1932;
  Z = v1932 == 0;
  N = v1932 >> 7;
  RAM[86] = v1932;
  RAM[v1926 + 256u] = -81;
  RAM[(v1926 - 1) + 256u] = -30;
  S = (v1926 - 2);
  PC = 84;
  goto not_found;

lAFCA:
  v1919 = S;
  p10 = &RAM[(((v1919 + 1) + 256u))];
  v1921 = *p10;
  Y = v1921;
  v1922 = X;
  A = v1922;
  Z = v1922 == 0;
  N = v1922 >> 7;
  *p10 = v1922;
  S = v1919;
  v1927 = v1919;
  v1929 = v1921;
  goto lAFD6;

lAFD4:
  v1923 = S;
  v1924 = v1923 + 1;
  S = v1924;
  v1925 = RAM[(v1924 + 256u)];
  A = v1925;
  Y = v1925;
  Z = v1925 == 0;
  N = v1925 >> 7;
  v1927 = v1924;
  v1929 = v1925;
  goto lAFD6;

lB085:
  v2013 = S;
  RAM[v2013 + 256u] = -80;
  RAM[(v2013 - 1) + 256u] = -121;
  S = (v2013 - 2);
  PC = 121;
  goto not_found;

lB08B:
  v2020 = v2021;
  X = 0;
  Z = 1;
  N = 0;
  RAM[v2020 + 256u] = -80;
  RAM[(v2020 - 1) + 256u] = -113;
  S = (v2020 - 2);
  PC = 121;
  goto not_found;

lA9A5:
  v1082 = S;
  RAM[v1082 + 256u] = -87;
  RAM[(v1082 - 1) + 256u] = -89;
  v1083 = v1082 - 2;
  S = v1083;
  v2021 = v1083;
  goto lB08B;

lA742:
  A = 128u;
  Z = 0;
  N = 1;
  RAM[16] = 128u;
  v736 = S;
  RAM[v736 + 256u] = -89;
  RAM[(v736 - 1) + 256u] = 72;
  S = (v736 - 2);
  goto lA9A5;

lAC15:
  v1444 = S;
  RAM[v1444 + 256u] = -84;
  RAM[(v1444 - 1) + 256u] = 23;
  v1445 = v1444 - 2;
  S = v1445;
  v2021 = v1445;
  goto lB08B;

lAC0F:
  v1440 = v1441;
  RAM[17] = v1440;
  v1442 = X;
  RAM[67] = v1442;
  v1443 = Y;
  RAM[68] = v1443;
  goto lAC15;

lAB92:
  X = 1;
  Y = 2;
  RAM[513] = 0;
  A = 64;
  Z = 0;
  N = 0;
  v1391 = S;
  RAM[v1391 + 256u] = -85;
  RAM[(v1391 - 1) + 256u] = -97;
  S = (v1391 - 2);
  v1441 = 64;
  goto lAC0F;

lAC06:
  v1437 = RAM[65];
  X = v1437;
  v1438 = RAM[66];
  Y = v1438;
  A = -104;
  v1439 = RAM[169];
  Z = v1439 == 0;
  N = v1439 >> 7;
  V = ((v1439 >> 6) & 1);
  v1441 = -104;
  goto lAC0F;

lAC0D:
  A = 0;
  Z = 1;
  N = 0;
  v1441 = 0;
  goto lAC0F;

lAD24:
  v1539 = S;
  RAM[v1539 + 256u] = -83;
  RAM[(v1539 - 1) + 256u] = 38;
  v1540 = v1539 - 2;
  S = v1540;
  v2021 = v1540;
  goto lB08B;

lAD87:
  v1590 = S;
  RAM[v1590 + 256u] = -83;
  RAM[(v1590 - 1) + 256u] = -119;
  S = (v1590 - 2);
  goto lAD24;

lAF28:
  v1840 = S;
  RAM[v1840 + 256u] = -81;
  RAM[(v1840 - 1) + 256u] = 42;
  v1841 = v1840 - 2;
  S = v1841;
  v2021 = v1841;
  goto lB08B;

lB3BC:
  A = 128u;
  Z = 0;
  N = 1;
  RAM[16] = 128u;
  v2564 = S;
  RAM[v2564 + 256u] = -77;
  RAM[(v2564 - 1) + 256u] = -62;
  v2565 = v2564 - 2;
  S = v2565;
  v2021 = v2565;
  goto lB08B;

lB092:
  v2023 = A;
  RAM[69] = v2023;
  v2024 = S;
  RAM[v2024 + 256u] = -80;
  RAM[(v2024 - 1) + 256u] = -106;
  S = (v2024 - 2);
  PC = 121;
  goto not_found;

lB081:
  v2011 = A;
  X = v2011;
  Z = v2011 == 0;
  N = v2011 >> 7;
  v2012 = S;
  RAM[v2012 + 256u] = -80;
  RAM[(v2012 - 1) + 256u] = -124;
  S = (v2012 - 2);
  RAM[12] = v2011;
  goto lB092;

lB090:
  v2022 = X;
  RAM[12] = v2022;
  goto lB092;

lB3E6:
  v2577 = A;
  v2578 = v2577 | 128u;
  A = v2578;
  Z = 0;
  N = 1;
  RAM[16] = v2578;
  v2579 = S;
  RAM[v2579 + 256u] = -77;
  RAM[(v2579 - 1) + 256u] = -20;
  S = (v2579 - 2);
  goto lB092;

lB09F:
  X = 0;
  Z = 1;
  N = 0;
  RAM[13] = 0;
  RAM[14] = 0;
  v2027 = S;
  RAM[v2027 + 256u] = -80;
  RAM[(v2027 - 1) + 256u] = -89;
  S = (v2027 - 2);
  PC = 115;
  goto not_found;

lB0B0:
  v2032 = S;
  RAM[v2032 + 256u] = -80;
  RAM[(v2032 - 1) + 256u] = -78;
  S = (v2032 - 2);
  PC = 115;
  goto not_found;

lB0AF:
  v2031 = A;
  X = v2031;
  Z = v2031 == 0;
  N = v2031 >> 7;
  goto lB0B0;

lB0D4:
  v2044 = X;
  v2045 = v2044 | 128u;
  A = v2045;
  X = v2045;
  Z = 0;
  N = 1;
  v2046 = S;
  RAM[v2046 + 256u] = -80;
  RAM[(v2046 - 1) + 256u] = -38;
  S = (v2046 - 2);
  PC = 115;
  goto not_found;

bb20321:
  A = -1;
  Z = 0;
  N = 1;
  RAM[13] = -1;
  goto lB0D4;

bb20381:
  RAM[14] = 128u;
  v2042 = RAM[69];
  v2043 = v2042 | 128u;
  A = v2043;
  Z = 0;
  N = 1;
  RAM[69] = v2043;
  goto lB0D4;

lB1DB:
  v2212 = Y;
  v2213 = S;
  RAM[v2213 + 256u] = v2212;
  v2214 = RAM[70];
  RAM[(v2213 - 1) + 256u] = v2214;
  v2215 = RAM[69];
  A = v2215;
  Z = v2215 == 0;
  N = v2215 >> 7;
  RAM[(v2213 - 2) + 256u] = v2215;
  RAM[(v2213 - 3) + 256u] = -79;
  RAM[(v2213 - 4) + 256u] = -27;
  RAM[(v2213 - 5) + 256u] = -79;
  RAM[(v2213 - 6) + 256u] = -76;
  S = (v2213 - 7);
  PC = 115;
  goto not_found;

lB1D1:
  v2208 = RAM[12];
  v2209 = RAM[14];
  v2210 = S;
  RAM[v2210 + 256u] = (v2208 | v2209);
  v2211 = RAM[13];
  A = v2211;
  RAM[(v2210 - 1) + 256u] = v2211;
  S = (v2210 - 2);
  Y = 0;
  Z = 1;
  N = 0;
  goto lB1DB;

lB1E6:
  v2216 = S;
  v2217 = v2216 + 1;
  v2218 = RAM[(v2217 + 256u)];
  RAM[69] = v2218;
  v2219 = v2216 + 2;
  v2220 = RAM[(v2219 + 256u)];
  RAM[70] = v2220;
  v2221 = v2216 + 3;
  v2222 = v2221;
  p12 = &RAM[(v2222 + 256u)];
  v2224 = *p12;
  X = v2221;
  p13 = &RAM[(v2222 + 258u)];
  v2226 = *p13;
  *p12 = v2226;
  p14 = &RAM[(v2222 + 257u)];
  v2228 = *p14;
  RAM[v2219 + 256u] = v2228;
  v2229 = RAM[100];
  *p13 = v2229;
  v2230 = RAM[101];
  A = v2230;
  *p14 = v2230;
  v2231 = v2224 + 1;
  Y = v2231;
  Z = v2231 == 0;
  N = v2231 >> 7;
  RAM[v2217 + 256u] = -78;
  RAM[v2216 + 256u] = 4;
  S = (v2216 - 1);
  PC = 121;
  goto not_found;

lB39E:
  C = 1;
  v2556 = S;
  RAM[v2556 + 256u] = -77;
  RAM[(v2556 - 1) + 256u] = -95;
  S = (v2556 - 2);
  PC = -16;
  goto not_found;

lB43B:
  v2615 = S;
  v2616 = v2615 + 1;
  v2617 = RAM[(v2616 + 256u)];
  RAM[78] = v2617;
  p17 = &RAM[(((v2615 + 2) + 256u))];
  v2619 = *p17;
  A = v2619;
  Z = v2619 == 0;
  N = v2619 >> 7;
  RAM[79] = v2619;
  *p17 = -76;
  RAM[v2616 + 256u] = 67;
  S = v2615;
  PC = 121;
  goto not_found;

lB737:
  A = -1;
  Z = 0;
  N = 1;
  RAM[101] = -1;
  v3149 = S;
  RAM[v3149 + 256u] = -73;
  RAM[(v3149 - 1) + 256u] = 61;
  S = (v3149 - 2);
  PC = 121;
  goto not_found;

bb31695:
  v3211 = RAM[101];
  X = v3211;
  Z = v3211 == 0;
  N = v3211 >> 7;
  PC = 121;
  goto not_found;

lB7CD:
  v3226 = v3227;
  RAM[37] = v3226;
  Y = 0;
  v3228 = RAM[(((v3226 << 8u) | v3222))];
  v3229 = S;
  RAM[v3229 + 256u] = v3228;
  A = 0;
  Z = 1;
  N = 0;
  v3230 = RAM[36];
  v3231 = RAM[37];
  RAM[(v3231 << 8u) | v3230] = 0;
  RAM[(v3229 - 1) + 256u] = -73;
  RAM[(v3229 - 2) + 256u] = -39;
  S = (v3229 - 3);
  PC = 121;
  goto not_found;

bb31790:
  v3220 = v3221;
  V = v3220;
  v3222 = v3219;
  A = v3222;
  v3223 = (v3219 >> 8) & 1;
  C = v3223;
  RAM[36] = v3222;
  v3224 = RAM[35];
  X = v3224;
  Z = v3224 == 0;
  N = v3224 >> 7;
  RAM[123] = v3224;
  if (v3223 == 0) {
    v3227 = v3224;
    goto lB7CD;
  } else {
    goto bb31833;
  }

bb31778:
  if (((v3218 ^ v3219) & 128u) == 0u) {
    goto bb31789;
  } else {
    v3221 = 1;
    goto bb31790;
  }

lB7B5:
  v3215 = RAM[122];
  v3216 = RAM[123];
  Y = v3216;
  RAM[113] = v3215;
  RAM[114] = v3216;
  v3217 = RAM[34];
  X = v3217;
  Z = v3217 == 0;
  N = v3217 >> 7;
  RAM[122] = v3217;
  C = 0;
  v3218 = A;
  v3219 = v3217 + v3218;
  if (((v3217 ^ v3218) & 128u) == 0u) {
    goto bb31778;
  } else {
    goto bb31789;
  }

bb31789:
  v3221 = 0;
  goto bb31790;

bb31833:
  v3225 = v3224 + 1;
  X = v3225;
  Z = v3225 == 0;
  N = v3225 >> 7;
  v3227 = v3225;
  goto lB7CD;

lB830:
  v3287 = X;
  RAM[73] = v3287;
  X = 0;
  Z = 1;
  N = 0;
  v3288 = S;
  RAM[v3288 + 256u] = -72;
  RAM[(v3288 - 1) + 256u] = 54;
  S = (v3288 - 2);
  PC = 121;
  goto not_found;

lBD0A:
  v4185 = S;
  RAM[v4185 + 256u] = -67;
  RAM[(v4185 - 1) + 256u] = 12;
  S = (v4185 - 2);
  PC = 115;
  goto not_found;

bb40011:
  RAM[103] = v4177;
  goto lBD0A;

bb40110:
  v4194 = S;
  RAM[v4194 + 256u] = -67;
  RAM[(v4194 - 1) + 256u] = 25;
  S = (v4194 - 2);
  PC = 115;
  goto not_found;

lBD30:
  v4213 = S;
  RAM[v4213 + 256u] = -67;
  RAM[(v4213 - 1) + 256u] = 50;
  S = (v4213 - 2);
  PC = 115;
  goto not_found;

lBD2E:
  v4208 = v4209;
  v4210 = RAM[96];
  v4211 = (v4208 << 8) | v4210;
  C = (v4211 & 1);
  v4212 = (v4211 >> 1);
  Z = ((v4212 & 255u) == 0u);
  N = ((v4211 >> 8) & 1);
  RAM[96] = v4212;
  goto lBD30;

bb41064:
  v4296 = v4297;
  V = v4296;
  v4298 = v4295;
  A = v4298;
  Z = v4298 == 0;
  N = v4298 >> 7;
  C = 1;
  v4299 = (v4295 & 255) - 48;
  v4300 = v4299;
  V = (((((((v4300 ^ v4298) & 128u) == 0u) | (((s8 )v4298) > -1))&1))) ? 0 : 1;
  v4301 = v4299;
  A = v4301;
  Z = v4301 == 0;
  N = v4301 >> 7;
  C = (((v4300 >> 8) & 1) ^ 1);
  RAM[94] = v4301;
  goto lBD30;

bb41052:
  if (((v4291 ^ v4295) & 128u) == 0u) {
    goto bb41063;
  } else {
    v4297 = 1;
    goto bb41064;
  }

bb40953:
  v4288 = v4289;
  V = v4288;
  v4290 = v4287 << 1;
  v4291 = (v4290 & 510);
  A = v4291;
  C = 0;
  Y = 0;
  Z = 1;
  N = 0;
  v4292 = RAM[122];
  v4293 = RAM[123];
  v4294 = RAM[(((v4293 << 8u) | v4292))];
  v4295 = v4294 + (v4290 & 254);
  if (((v4294 ^ v4291) & 128u) == 0u) {
    goto bb41052;
  } else {
    goto bb41063;
  }

bb40941:
  if (((v4286 ^ v4287) & 128u) == 0u) {
    goto bb40952;
  } else {
    v4289 = 1;
    goto bb40953;
  }

lBDA0:
  v4284 = v4278 << 2;
  v4285 = v4284 & 508;
  Z = ((v4285 & 252u) == 0u);
  v4286 = v4285;
  N = v4286 >> 7;
  A = v4286;
  C = 0;
  v4287 = v4278 + (v4284 & 252);
  if (((v4277 ^ v4286) & 128u) == 0u) {
    goto bb40941;
  } else {
    goto bb40952;
  }

bb40952:
  v4289 = 0;
  goto bb40953;

bb41063:
  v4297 = 0;
  goto bb41064;

lBDAE:
  RAM[94] = 100;
  goto lBD30;

bb44364:
  v4597 = S;
  RAM[v4597 + 256u] = -32;
  RAM[(v4597 - 1) + 256u] = -96;
  S = (v4597 - 2);
  PC = -13;
  goto not_found;

lE11E:
  v4637 = v4638;
  RAM[(v4637 - 1) + 256u] = -31;
  RAM[(v4637 - 2) + 256u] = 32;
  S = (v4637 - 3);
  PC = -58;
  goto not_found;

lAB8D:
  v1388 = X;
  RAM[19] = v1388;
  v1389 = S;
  RAM[v1389 + 256u] = -85;
  v1390 = v1389 - 1;
  S = v1390;
  RAM[v1390 + 256u] = -111;
  v4638 = v1390;
  goto lE11E;

lABAD:
  v1400 = X;
  RAM[19] = v1400;
  v1401 = S;
  RAM[v1401 + 256u] = -85;
  v1402 = v1401 - 1;
  S = v1402;
  RAM[v1402 + 256u] = -79;
  v4638 = v1402;
  goto lE11E;

lE159:
  v4666 = RAM[45];
  X = v4666;
  v4667 = RAM[46];
  Y = v4667;
  A = 43;
  Z = 0;
  N = 0;
  v4668 = S;
  RAM[v4668 + 256u] = -31;
  RAM[(v4668 - 1) + 256u] = 97;
  S = (v4668 - 2);
  PC = -40;
  goto not_found;

lE16F:
  v4680 = RAM[10];
  A = v4680;
  v4681 = RAM[43];
  X = v4681;
  v4682 = RAM[44];
  Y = v4682;
  Z = v4682 == 0;
  N = v4682 >> 7;
  v4683 = S;
  RAM[v4683 + 256u] = -31;
  RAM[(v4683 - 1) + 256u] = 119;
  S = (v4683 - 2);
  PC = -43;
  goto not_found;

bb45323:
  X = 28;
  Z = 0;
  N = 0;
  v4686 = S;
  RAM[v4686 + 256u] = -31;
  RAM[(v4686 - 1) + 256u] = -126;
  S = (v4686 - 2);
  PC = -73;
  goto not_found;

bb45306:
  v4685 = RAM[10];
  A = v4685;
  Z = v4685 == 0;
  N = v4685 >> 7;
  if (v4685 == 0) {
    goto lE195;
  } else {
    goto bb45323;
  }

lE195:
  v4698 = S;
  RAM[v4698 + 256u] = -31;
  RAM[(v4698 - 1) + 256u] = -105;
  S = (v4698 - 2);
  PC = -73;
  goto not_found;

lE1C1:
  v4713 = S;
  RAM[v4713 + 256u] = -31;
  RAM[(v4713 - 1) + 256u] = -61;
  S = (v4713 - 2);
  PC = -64;
  goto not_found;

lE1CA:
  v4722 = RAM[73];
  A = v4722;
  Z = v4722 == 0;
  N = v4722 >> 7;
  v4723 = S;
  RAM[v4723 + 256u] = -31;
  RAM[(v4723 - 1) + 256u] = -50;
  S = (v4723 - 2);
  PC = -61;
  goto not_found;

lE1D4:
  v4725 = v4726;
  A = 0;
  Z = 1;
  N = 0;
  RAM[(v4725 - 1) + 256u] = -31;
  RAM[(v4725 - 2) + 256u] = -40;
  S = (v4725 - 3);
  PC = -67;
  goto not_found;

lE156:
  v4664 = S;
  RAM[v4664 + 256u] = -31;
  v4665 = v4664 - 1;
  S = v4665;
  RAM[v4665 + 256u] = 88;
  v4726 = v4665;
  goto lE1D4;

lE16A:
  v4676 = v4677;
  RAM[10] = v4676;
  v4678 = S;
  RAM[v4678 + 256u] = -31;
  v4679 = v4678 - 1;
  S = v4679;
  RAM[v4679 + 256u] = 110;
  v4726 = v4679;
  goto lE1D4;

lE165:
  A = 1;
  v4675 = RAM[169];
  Z = v4675 == 0;
  N = v4675 >> 7;
  V = ((v4675 >> 6) & 1);
  v4677 = 1;
  goto lE16A;

lE168:
  A = 0;
  Z = 1;
  N = 0;
  v4677 = 0;
  goto lE16A;

lE1D9:
  X = 1;
  Y = 0;
  Z = 1;
  N = 0;
  v4727 = S;
  RAM[v4727 + 256u] = -31;
  RAM[(v4727 - 1) + 256u] = -33;
  S = (v4727 - 2);
  PC = -70;
  goto not_found;

lE1EC:
  Y = 0;
  Z = 1;
  N = 0;
  v4735 = X;
  RAM[73] = v4735;
  v4736 = S;
  RAM[v4736 + 256u] = -31;
  RAM[(v4736 - 1) + 256u] = -14;
  S = (v4736 - 2);
  PC = -70;
  goto not_found;

lE1F9:
  v4741 = X;
  A = v4741;
  Y = v4741;
  v4742 = RAM[73];
  X = v4742;
  Z = v4742 == 0;
  N = v4742 >> 7;
  PC = -70;
  goto not_found;

lE206:
  v4746 = v4747;
  RAM[v4746 + 256u] = -30;
  RAM[(v4746 - 1) + 256u] = 8;
  S = (v4746 - 2);
  PC = 121;
  goto not_found;

lE1E0:
  v4728 = S;
  RAM[v4728 + 256u] = -31;
  RAM[(v4728 - 1) + 256u] = -30;
  v4729 = v4728 - 2;
  S = v4729;
  v4747 = v4729;
  goto lE206;

lE1E6:
  v4731 = S;
  RAM[v4731 + 256u] = -31;
  RAM[(v4731 - 1) + 256u] = -24;
  v4732 = v4731 - 2;
  S = v4732;
  v4747 = v4732;
  goto lE206;

lE1F3:
  v4737 = S;
  RAM[v4737 + 256u] = -31;
  RAM[(v4737 - 1) + 256u] = -11;
  v4738 = v4737 - 2;
  S = v4738;
  v4747 = v4738;
  goto lE206;

lE22E:
  v4767 = S;
  RAM[v4767 + 256u] = -30;
  RAM[(v4767 - 1) + 256u] = 48;
  v4768 = v4767 - 2;
  S = v4768;
  v4747 = v4768;
  goto lE206;

lE242:
  v4777 = S;
  RAM[v4777 + 256u] = -30;
  RAM[(v4777 - 1) + 256u] = 68;
  v4778 = v4777 - 2;
  S = v4778;
  v4747 = v4778;
  goto lE206;

lE251:
  v4785 = S;
  RAM[v4785 + 256u] = -30;
  RAM[(v4785 - 1) + 256u] = 83;
  v4786 = v4785 - 2;
  S = v4786;
  v4747 = v4786;
  goto lE206;

lE211:
  v4759 = S;
  RAM[v4759 + 256u] = -30;
  RAM[(v4759 - 1) + 256u] = 19;
  S = (v4759 - 2);
  PC = 121;
  goto not_found;

lE21E:
  v4763 = S;
  RAM[v4763 + 256u] = -30;
  RAM[(v4763 - 1) + 256u] = 32;
  S = (v4763 - 2);
  goto lE211;

lE219:
  v4761 = v4762;
  A = 0;
  Z = 1;
  N = 0;
  RAM[(v4761 - 1) + 256u] = -30;
  RAM[(v4761 - 2) + 256u] = 29;
  S = (v4761 - 3);
  PC = -67;
  goto not_found;

lE1BE:
  v4711 = S;
  RAM[v4711 + 256u] = -31;
  v4712 = v4711 - 1;
  S = v4712;
  RAM[v4712 + 256u] = -64;
  v4762 = v4712;
  goto lE219;

lE1C7:
  v4720 = S;
  RAM[v4720 + 256u] = -31;
  v4721 = v4720 - 1;
  S = v4721;
  RAM[v4721 + 256u] = -55;
  v4762 = v4721;
  goto lE219;

lE224:
  v4765 = X;
  RAM[73] = v4765;
  A = v4765;
  X = 1;
  Y = 0;
  Z = 1;
  N = 0;
  v4766 = S;
  RAM[v4766 + 256u] = -30;
  RAM[(v4766 - 1) + 256u] = 45;
  S = (v4766 - 2);
  PC = -70;
  goto not_found;

lE23F:
  v4776 = S;
  RAM[v4776 + 256u] = -30;
  RAM[(v4776 - 1) + 256u] = 65;
  S = (v4776 - 2);
  PC = -70;
  goto not_found;

lE234:
  v4771 = X;
  RAM[74] = v4771;
  Y = 0;
  v4772 = RAM[73];
  A = v4772;
  v4773 = v4771 - 3;
  v4774 = v4773;
  v4775 = (v4774 >> 8) & 1;
  C = (v4775 ^ 1);
  Z = ((v4774 & 255u) == 0u);
  N = v4773 >> 7;
  if (v4775 == 0) {
    goto bb46089;
  } else {
    goto lE23F;
  }

bb46089:
  Y = -1;
  Z = 0;
  N = 1;
  goto lE23F;

lE248:
  v4781 = X;
  Y = v4781;
  v4782 = RAM[74];
  X = v4782;
  v4783 = RAM[73];
  A = v4783;
  Z = v4783 == 0;
  N = v4783 >> 7;
  v4784 = S;
  RAM[v4784 + 256u] = -30;
  RAM[(v4784 - 1) + 256u] = 80;
  S = (v4784 - 2);
  PC = -70;
  goto not_found;

lE25D:
  v4793 = RAM[34];
  X = v4793;
  v4794 = RAM[35];
  Y = v4794;
  Z = v4794 == 0;
  N = v4794 >> 7;
  PC = -67;
  goto not_found;

bb47433:
  RAM[83] = 3;
  A = 0;
  RAM[104] = 0;
  RAM[19] = 0;
  RAM[24] = 0;
  RAM[509] = 1;
  RAM[508] = 1;
  X = 25;
  Z = 0;
  N = 0;
  RAM[22] = 25;
  C = 1;
  RAM[v4860 + 256u] = -28;
  RAM[(v4859 - 3) + 256u] = 5;
  S = (v4859 - 4);
  PC = -100;
  goto not_found;

lE3E2:
  v4865 = v4866;
  v4867 = 28 - v4865;
  v4868 = v4867;
  v4869 = RAM[(v4868 + 58274u)];
  RAM[(v4868 + 115u) & 255u] = v4869;
  if (((s8 )(v4867 - 1)) < 0) {
    goto bb47433;
  } else {
    v4866 = (v4865 + 1);
    goto lE3E2;
  }

lE397:
  v4859 = S;
  RAM[v4859 + 256u] = -29;
  RAM[(v4859 - 1) + 256u] = -103;
  v4860 = v4859 - 2;
  S = v4860;
  RAM[84] = 76;
  RAM[784] = 76;
  RAM[785] = 72;
  RAM[786] = -78;
  RAM[5] = -111;
  RAM[6] = -77;
  A = -86;
  Y = -79;
  RAM[3] = -86;
  RAM[4] = -79;
  X = 28;
  Z = 0;
  N = 0;
  v4866 = 0;
  goto lE3E2;

lE406:
  v4870 = X;
  RAM[43] = v4870;
  v4871 = Y;
  RAM[44] = v4871;
  C = 1;
  v4872 = S;
  RAM[v4872 + 256u] = -28;
  RAM[(v4872 - 1) + 256u] = 13;
  S = (v4872 - 2);
  PC = -103;
  goto not_found;

bb47890:
  X = v4909;
  A = v4908;
  Z = (v4906 == 1);
  N = v4909 >> 7;
  v4910 = RAM[(((v4858 - 1) + 256u))];
  S = v4858;
  v4911 = RAM[(v4858 + 256u)];
  v4912 = (v4910 + 1) + (v4911 << 8);
  PC = v4912;
  if ((v4912 + 4294926336u) > 17590u) {
    goto not_found;
  } else {
    goto bb48000;
  }

lE455:
  v4904 = v4905;
  v4906 = 11 - v4904;
  v4907 = v4906;
  v4908 = RAM[(v4907 + 58439u)];
  RAM[v4907 | 768u] = v4908;
  v4909 = v4906 - 1;
  if (((s8 )v4909) < 0) {
    goto bb47890;
  } else {
    v4905 = (v4904 + 1);
    goto lE455;
  }
