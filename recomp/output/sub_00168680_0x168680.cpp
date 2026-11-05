#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00168680
// Address: 0x168680 - 0x168a80
void sub_00168680_0x168680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168680_0x168680");
#endif

    switch (ctx->pc) {
        case 0x168680u: goto label_168680;
        case 0x168684u: goto label_168684;
        case 0x168688u: goto label_168688;
        case 0x16868cu: goto label_16868c;
        case 0x168690u: goto label_168690;
        case 0x168694u: goto label_168694;
        case 0x168698u: goto label_168698;
        case 0x16869cu: goto label_16869c;
        case 0x1686a0u: goto label_1686a0;
        case 0x1686a4u: goto label_1686a4;
        case 0x1686a8u: goto label_1686a8;
        case 0x1686acu: goto label_1686ac;
        case 0x1686b0u: goto label_1686b0;
        case 0x1686b4u: goto label_1686b4;
        case 0x1686b8u: goto label_1686b8;
        case 0x1686bcu: goto label_1686bc;
        case 0x1686c0u: goto label_1686c0;
        case 0x1686c4u: goto label_1686c4;
        case 0x1686c8u: goto label_1686c8;
        case 0x1686ccu: goto label_1686cc;
        case 0x1686d0u: goto label_1686d0;
        case 0x1686d4u: goto label_1686d4;
        case 0x1686d8u: goto label_1686d8;
        case 0x1686dcu: goto label_1686dc;
        case 0x1686e0u: goto label_1686e0;
        case 0x1686e4u: goto label_1686e4;
        case 0x1686e8u: goto label_1686e8;
        case 0x1686ecu: goto label_1686ec;
        case 0x1686f0u: goto label_1686f0;
        case 0x1686f4u: goto label_1686f4;
        case 0x1686f8u: goto label_1686f8;
        case 0x1686fcu: goto label_1686fc;
        case 0x168700u: goto label_168700;
        case 0x168704u: goto label_168704;
        case 0x168708u: goto label_168708;
        case 0x16870cu: goto label_16870c;
        case 0x168710u: goto label_168710;
        case 0x168714u: goto label_168714;
        case 0x168718u: goto label_168718;
        case 0x16871cu: goto label_16871c;
        case 0x168720u: goto label_168720;
        case 0x168724u: goto label_168724;
        case 0x168728u: goto label_168728;
        case 0x16872cu: goto label_16872c;
        case 0x168730u: goto label_168730;
        case 0x168734u: goto label_168734;
        case 0x168738u: goto label_168738;
        case 0x16873cu: goto label_16873c;
        case 0x168740u: goto label_168740;
        case 0x168744u: goto label_168744;
        case 0x168748u: goto label_168748;
        case 0x16874cu: goto label_16874c;
        case 0x168750u: goto label_168750;
        case 0x168754u: goto label_168754;
        case 0x168758u: goto label_168758;
        case 0x16875cu: goto label_16875c;
        case 0x168760u: goto label_168760;
        case 0x168764u: goto label_168764;
        case 0x168768u: goto label_168768;
        case 0x16876cu: goto label_16876c;
        case 0x168770u: goto label_168770;
        case 0x168774u: goto label_168774;
        case 0x168778u: goto label_168778;
        case 0x16877cu: goto label_16877c;
        case 0x168780u: goto label_168780;
        case 0x168784u: goto label_168784;
        case 0x168788u: goto label_168788;
        case 0x16878cu: goto label_16878c;
        case 0x168790u: goto label_168790;
        case 0x168794u: goto label_168794;
        case 0x168798u: goto label_168798;
        case 0x16879cu: goto label_16879c;
        case 0x1687a0u: goto label_1687a0;
        case 0x1687a4u: goto label_1687a4;
        case 0x1687a8u: goto label_1687a8;
        case 0x1687acu: goto label_1687ac;
        case 0x1687b0u: goto label_1687b0;
        case 0x1687b4u: goto label_1687b4;
        case 0x1687b8u: goto label_1687b8;
        case 0x1687bcu: goto label_1687bc;
        case 0x1687c0u: goto label_1687c0;
        case 0x1687c4u: goto label_1687c4;
        case 0x1687c8u: goto label_1687c8;
        case 0x1687ccu: goto label_1687cc;
        case 0x1687d0u: goto label_1687d0;
        case 0x1687d4u: goto label_1687d4;
        case 0x1687d8u: goto label_1687d8;
        case 0x1687dcu: goto label_1687dc;
        case 0x1687e0u: goto label_1687e0;
        case 0x1687e4u: goto label_1687e4;
        case 0x1687e8u: goto label_1687e8;
        case 0x1687ecu: goto label_1687ec;
        case 0x1687f0u: goto label_1687f0;
        case 0x1687f4u: goto label_1687f4;
        case 0x1687f8u: goto label_1687f8;
        case 0x1687fcu: goto label_1687fc;
        case 0x168800u: goto label_168800;
        case 0x168804u: goto label_168804;
        case 0x168808u: goto label_168808;
        case 0x16880cu: goto label_16880c;
        case 0x168810u: goto label_168810;
        case 0x168814u: goto label_168814;
        case 0x168818u: goto label_168818;
        case 0x16881cu: goto label_16881c;
        case 0x168820u: goto label_168820;
        case 0x168824u: goto label_168824;
        case 0x168828u: goto label_168828;
        case 0x16882cu: goto label_16882c;
        case 0x168830u: goto label_168830;
        case 0x168834u: goto label_168834;
        case 0x168838u: goto label_168838;
        case 0x16883cu: goto label_16883c;
        case 0x168840u: goto label_168840;
        case 0x168844u: goto label_168844;
        case 0x168848u: goto label_168848;
        case 0x16884cu: goto label_16884c;
        case 0x168850u: goto label_168850;
        case 0x168854u: goto label_168854;
        case 0x168858u: goto label_168858;
        case 0x16885cu: goto label_16885c;
        case 0x168860u: goto label_168860;
        case 0x168864u: goto label_168864;
        case 0x168868u: goto label_168868;
        case 0x16886cu: goto label_16886c;
        case 0x168870u: goto label_168870;
        case 0x168874u: goto label_168874;
        case 0x168878u: goto label_168878;
        case 0x16887cu: goto label_16887c;
        case 0x168880u: goto label_168880;
        case 0x168884u: goto label_168884;
        case 0x168888u: goto label_168888;
        case 0x16888cu: goto label_16888c;
        case 0x168890u: goto label_168890;
        case 0x168894u: goto label_168894;
        case 0x168898u: goto label_168898;
        case 0x16889cu: goto label_16889c;
        case 0x1688a0u: goto label_1688a0;
        case 0x1688a4u: goto label_1688a4;
        case 0x1688a8u: goto label_1688a8;
        case 0x1688acu: goto label_1688ac;
        case 0x1688b0u: goto label_1688b0;
        case 0x1688b4u: goto label_1688b4;
        case 0x1688b8u: goto label_1688b8;
        case 0x1688bcu: goto label_1688bc;
        case 0x1688c0u: goto label_1688c0;
        case 0x1688c4u: goto label_1688c4;
        case 0x1688c8u: goto label_1688c8;
        case 0x1688ccu: goto label_1688cc;
        case 0x1688d0u: goto label_1688d0;
        case 0x1688d4u: goto label_1688d4;
        case 0x1688d8u: goto label_1688d8;
        case 0x1688dcu: goto label_1688dc;
        case 0x1688e0u: goto label_1688e0;
        case 0x1688e4u: goto label_1688e4;
        case 0x1688e8u: goto label_1688e8;
        case 0x1688ecu: goto label_1688ec;
        case 0x1688f0u: goto label_1688f0;
        case 0x1688f4u: goto label_1688f4;
        case 0x1688f8u: goto label_1688f8;
        case 0x1688fcu: goto label_1688fc;
        case 0x168900u: goto label_168900;
        case 0x168904u: goto label_168904;
        case 0x168908u: goto label_168908;
        case 0x16890cu: goto label_16890c;
        case 0x168910u: goto label_168910;
        case 0x168914u: goto label_168914;
        case 0x168918u: goto label_168918;
        case 0x16891cu: goto label_16891c;
        case 0x168920u: goto label_168920;
        case 0x168924u: goto label_168924;
        case 0x168928u: goto label_168928;
        case 0x16892cu: goto label_16892c;
        case 0x168930u: goto label_168930;
        case 0x168934u: goto label_168934;
        case 0x168938u: goto label_168938;
        case 0x16893cu: goto label_16893c;
        case 0x168940u: goto label_168940;
        case 0x168944u: goto label_168944;
        case 0x168948u: goto label_168948;
        case 0x16894cu: goto label_16894c;
        case 0x168950u: goto label_168950;
        case 0x168954u: goto label_168954;
        case 0x168958u: goto label_168958;
        case 0x16895cu: goto label_16895c;
        case 0x168960u: goto label_168960;
        case 0x168964u: goto label_168964;
        case 0x168968u: goto label_168968;
        case 0x16896cu: goto label_16896c;
        case 0x168970u: goto label_168970;
        case 0x168974u: goto label_168974;
        case 0x168978u: goto label_168978;
        case 0x16897cu: goto label_16897c;
        case 0x168980u: goto label_168980;
        case 0x168984u: goto label_168984;
        case 0x168988u: goto label_168988;
        case 0x16898cu: goto label_16898c;
        case 0x168990u: goto label_168990;
        case 0x168994u: goto label_168994;
        case 0x168998u: goto label_168998;
        case 0x16899cu: goto label_16899c;
        case 0x1689a0u: goto label_1689a0;
        case 0x1689a4u: goto label_1689a4;
        case 0x1689a8u: goto label_1689a8;
        case 0x1689acu: goto label_1689ac;
        case 0x1689b0u: goto label_1689b0;
        case 0x1689b4u: goto label_1689b4;
        case 0x1689b8u: goto label_1689b8;
        case 0x1689bcu: goto label_1689bc;
        case 0x1689c0u: goto label_1689c0;
        case 0x1689c4u: goto label_1689c4;
        case 0x1689c8u: goto label_1689c8;
        case 0x1689ccu: goto label_1689cc;
        case 0x1689d0u: goto label_1689d0;
        case 0x1689d4u: goto label_1689d4;
        case 0x1689d8u: goto label_1689d8;
        case 0x1689dcu: goto label_1689dc;
        case 0x1689e0u: goto label_1689e0;
        case 0x1689e4u: goto label_1689e4;
        case 0x1689e8u: goto label_1689e8;
        case 0x1689ecu: goto label_1689ec;
        case 0x1689f0u: goto label_1689f0;
        case 0x1689f4u: goto label_1689f4;
        case 0x1689f8u: goto label_1689f8;
        case 0x1689fcu: goto label_1689fc;
        case 0x168a00u: goto label_168a00;
        case 0x168a04u: goto label_168a04;
        case 0x168a08u: goto label_168a08;
        case 0x168a0cu: goto label_168a0c;
        case 0x168a10u: goto label_168a10;
        case 0x168a14u: goto label_168a14;
        case 0x168a18u: goto label_168a18;
        case 0x168a1cu: goto label_168a1c;
        case 0x168a20u: goto label_168a20;
        case 0x168a24u: goto label_168a24;
        case 0x168a28u: goto label_168a28;
        case 0x168a2cu: goto label_168a2c;
        case 0x168a30u: goto label_168a30;
        case 0x168a34u: goto label_168a34;
        case 0x168a38u: goto label_168a38;
        case 0x168a3cu: goto label_168a3c;
        case 0x168a40u: goto label_168a40;
        case 0x168a44u: goto label_168a44;
        case 0x168a48u: goto label_168a48;
        case 0x168a4cu: goto label_168a4c;
        case 0x168a50u: goto label_168a50;
        case 0x168a54u: goto label_168a54;
        case 0x168a58u: goto label_168a58;
        case 0x168a5cu: goto label_168a5c;
        case 0x168a60u: goto label_168a60;
        case 0x168a64u: goto label_168a64;
        case 0x168a68u: goto label_168a68;
        case 0x168a6cu: goto label_168a6c;
        case 0x168a70u: goto label_168a70;
        case 0x168a74u: goto label_168a74;
        case 0x168a78u: goto label_168a78;
        case 0x168a7cu: goto label_168a7c;
        default: break;
    }

    ctx->pc = 0x168680u;

label_168680:
    // 0x168680: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x168680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_168684:
    // 0x168684: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x168684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_168688:
    // 0x168688: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x168688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_16868c:
    // 0x16868c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16868cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_168690:
    // 0x168690: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x168690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_168694:
    // 0x168694: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x168694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_168698:
    // 0x168698: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x168698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_16869c:
    // 0x16869c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x16869cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1686a0:
    // 0x1686a0: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1686a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_1686a4:
    // 0x1686a4: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x1686a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
label_1686a8:
    // 0x1686a8: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x1686a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
label_1686ac:
    // 0x1686ac: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1686acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_1686b0:
    // 0x1686b0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1686b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1686b4:
    // 0x1686b4: 0x8e22032c  lw          $v0, 0x32C($s1)
    ctx->pc = 0x1686b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
label_1686b8:
    // 0x1686b8: 0x104000e4  beqz        $v0, . + 4 + (0xE4 << 2)
label_1686bc:
    if (ctx->pc == 0x1686BCu) {
        ctx->pc = 0x1686BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1686B8u;
        // 0x1686bc: 0x30b600ff  andi        $s6, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1686C0u;
        goto label_1686c0;
    }
    ctx->pc = 0x1686B8u;
    {
        const bool branch_taken_0x1686b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1686BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1686B8u;
        // 0x1686bc: 0x30b600ff  andi        $s6, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1686b8) {
            ctx->pc = 0x168A4Cu;
            goto label_168a4c;
        }
    }
    ctx->pc = 0x1686C0u;
label_1686c0:
    // 0x1686c0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1686c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1686c4:
    // 0x1686c4: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1686c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_1686c8:
    // 0x1686c8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1686c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_1686cc:
    // 0x1686cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1686ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1686d0:
    // 0x1686d0: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x1686d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
label_1686d4:
    // 0x1686d4: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x1686d4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1686d8:
    // 0x1686d8: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1686d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_1686dc:
    // 0x1686dc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1686dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1686e0:
    // 0x1686e0: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x1686e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_1686e4:
    // 0x1686e4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1686e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_1686e8:
    // 0x1686e8: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1686e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1686ec:
    // 0x1686ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1686ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1686f0:
    // 0x1686f0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1686f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1686f4:
    // 0x1686f4: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x1686f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
label_1686f8:
    // 0x1686f8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_1686fc:
    if (ctx->pc == 0x1686FCu) {
        ctx->pc = 0x1686FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1686F8u;
        // 0x1686fc: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168700u;
        goto label_168700;
    }
    ctx->pc = 0x1686F8u;
    {
        const bool branch_taken_0x1686f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1686f8) {
            ctx->pc = 0x1686FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1686F8u;
            // 0x1686fc: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168708u;
            goto label_168708;
        }
    }
    ctx->pc = 0x168700u;
label_168700:
    // 0x168700: 0x10000003  b           . + 4 + (0x3 << 2)
label_168704:
    if (ctx->pc == 0x168704u) {
        ctx->pc = 0x168704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168700u;
        // 0x168704: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168708u;
        goto label_168708;
    }
    ctx->pc = 0x168700u;
    {
        const bool branch_taken_0x168700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168700u;
        // 0x168704: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168700) {
            ctx->pc = 0x168710u;
            goto label_168710;
        }
    }
    ctx->pc = 0x168708u;
label_168708:
    // 0x168708: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x168708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16870c:
    // 0x16870c: 0x247e0070  addiu       $fp, $v1, 0x70
    ctx->pc = 0x16870cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_168710:
    // 0x168710: 0x96340320  lhu         $s4, 0x320($s1)
    ctx->pc = 0x168710u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 800)));
label_168714:
    // 0x168714: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x168714u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168718:
    // 0x168718: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x168718u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16871c:
    // 0x16871c: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x16871cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_168720:
    // 0x168720: 0x34212400  ori         $at, $at, 0x2400
    ctx->pc = 0x168720u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9216);
label_168724:
    // 0x168724: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x168724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_168728:
    // 0x168728: 0x2b4102b  sltu        $v0, $s5, $s4
    ctx->pc = 0x168728u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_16872c:
    // 0x16872c: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_168730:
    if (ctx->pc == 0x168730u) {
        ctx->pc = 0x168730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16872Cu;
        // 0x168730: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168734u;
        goto label_168734;
    }
    ctx->pc = 0x16872Cu;
    {
        const bool branch_taken_0x16872c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16872Cu;
        // 0x168730: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16872c) {
            ctx->pc = 0x168830u;
            goto label_168830;
        }
    }
    ctx->pc = 0x168734u;
label_168734:
    // 0x168734: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x168734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_168738:
    // 0x168738: 0x8e240324  lw          $a0, 0x324($s1)
    ctx->pc = 0x168738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
label_16873c:
    // 0x16873c: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x16873cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_168740:
    // 0x168740: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x168740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_168744:
    // 0x168744: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x168744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_168748:
    // 0x168748: 0x50600036  beql        $v1, $zero, . + 4 + (0x36 << 2)
label_16874c:
    if (ctx->pc == 0x16874Cu) {
        ctx->pc = 0x16874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168748u;
        // 0x16874c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168750u;
        goto label_168750;
    }
    ctx->pc = 0x168748u;
    {
        const bool branch_taken_0x168748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x168748) {
            ctx->pc = 0x16874Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168748u;
            // 0x16874c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168824u;
            goto label_168824;
        }
    }
    ctx->pc = 0x168750u;
label_168750:
    // 0x168750: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x168750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_168754:
    // 0x168754: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_168758:
    if (ctx->pc == 0x168758u) {
        ctx->pc = 0x168758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168754u;
        // 0x168758: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16875Cu;
        goto label_16875c;
    }
    ctx->pc = 0x168754u;
    {
        const bool branch_taken_0x168754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168754) {
            ctx->pc = 0x168758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168754u;
            // 0x168758: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1687ACu;
            goto label_1687ac;
        }
    }
    ctx->pc = 0x16875Cu;
label_16875c:
    // 0x16875c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x16875cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_168760:
    // 0x168760: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
label_168764:
    if (ctx->pc == 0x168764u) {
        ctx->pc = 0x168764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168760u;
        // 0x168764: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168768u;
        goto label_168768;
    }
    ctx->pc = 0x168760u;
    {
        const bool branch_taken_0x168760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168760) {
            ctx->pc = 0x168764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168760u;
            // 0x168764: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168824u;
            goto label_168824;
        }
    }
    ctx->pc = 0x168768u;
label_168768:
    // 0x168768: 0xc0aafa6  jal         func_2ABE98
label_16876c:
    if (ctx->pc == 0x16876Cu) {
        ctx->pc = 0x16876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168768u;
        // 0x16876c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168770u;
        goto label_168770;
    }
    ctx->pc = 0x168768u;
    SET_GPR_U32(ctx, 31, 0x168770u);
    ctx->pc = 0x16876Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168768u;
    // 0x16876c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x168768u, 0x168770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168770u;
label_168770:
    // 0x168770: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x168770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_168774:
    // 0x168774: 0xc0aafd2  jal         func_2ABF48
label_168778:
    if (ctx->pc == 0x168778u) {
        ctx->pc = 0x168778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168774u;
        // 0x168778: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16877Cu;
        goto label_16877c;
    }
    ctx->pc = 0x168774u;
    SET_GPR_U32(ctx, 31, 0x16877Cu);
    ctx->pc = 0x168778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168774u;
    // 0x168778: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x168774u, 0x16877Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16877Cu;
label_16877c:
    // 0x16877c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_168780:
    if (ctx->pc == 0x168780u) {
        ctx->pc = 0x168780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16877Cu;
        // 0x168780: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168784u;
        goto label_168784;
    }
    ctx->pc = 0x16877Cu;
    {
        const bool branch_taken_0x16877c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16877Cu;
        // 0x168780: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16877c) {
            ctx->pc = 0x168790u;
            goto label_168790;
        }
    }
    ctx->pc = 0x168784u;
label_168784:
    // 0x168784: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x168784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_168788:
    // 0x168788: 0x14530005  bne         $v0, $s3, . + 4 + (0x5 << 2)
label_16878c:
    if (ctx->pc == 0x16878Cu) {
        ctx->pc = 0x168790u;
        goto label_168790;
    }
    ctx->pc = 0x168788u;
    {
        const bool branch_taken_0x168788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x168788) {
            ctx->pc = 0x1687A0u;
            goto label_1687a0;
        }
    }
    ctx->pc = 0x168790u;
label_168790:
    // 0x168790: 0xc0aafac  jal         func_2ABEB0
label_168794:
    if (ctx->pc == 0x168794u) {
        ctx->pc = 0x168794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168790u;
        // 0x168794: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168798u;
        goto label_168798;
    }
    ctx->pc = 0x168790u;
    SET_GPR_U32(ctx, 31, 0x168798u);
    ctx->pc = 0x168794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168790u;
    // 0x168794: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x168790u, 0x168798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168798u;
label_168798:
    // 0x168798: 0x10000022  b           . + 4 + (0x22 << 2)
label_16879c:
    if (ctx->pc == 0x16879Cu) {
        ctx->pc = 0x16879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168798u;
        // 0x16879c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1687A0u;
        goto label_1687a0;
    }
    ctx->pc = 0x168798u;
    {
        const bool branch_taken_0x168798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168798u;
        // 0x16879c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168798) {
            ctx->pc = 0x168824u;
            goto label_168824;
        }
    }
    ctx->pc = 0x1687A0u;
label_1687a0:
    // 0x1687a0: 0xc0aafac  jal         func_2ABEB0
label_1687a4:
    if (ctx->pc == 0x1687A4u) {
        ctx->pc = 0x1687A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1687A0u;
        // 0x1687a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1687A8u;
        goto label_1687a8;
    }
    ctx->pc = 0x1687A0u;
    SET_GPR_U32(ctx, 31, 0x1687A8u);
    ctx->pc = 0x1687A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1687A0u;
    // 0x1687a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x1687A0u, 0x1687A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1687A8u;
label_1687a8:
    // 0x1687a8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1687a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1687ac:
    // 0x1687ac: 0xc0400be  jal         func_1002F8
label_1687b0:
    if (ctx->pc == 0x1687B0u) {
        ctx->pc = 0x1687B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1687ACu;
        // 0x1687b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1687B4u;
        goto label_1687b4;
    }
    ctx->pc = 0x1687ACu;
    SET_GPR_U32(ctx, 31, 0x1687B4u);
    ctx->pc = 0x1687B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1687ACu;
    // 0x1687b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1002F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1002F8u, 0x1687ACu, 0x1687B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1687B4u;
label_1687b4:
    // 0x1687b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1687b8:
    if (ctx->pc == 0x1687B8u) {
        ctx->pc = 0x1687BCu;
        goto label_1687bc;
    }
    ctx->pc = 0x1687B4u;
    {
        const bool branch_taken_0x1687b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1687b4) {
            ctx->pc = 0x1687D4u;
            goto label_1687d4;
        }
    }
    ctx->pc = 0x1687BCu;
label_1687bc:
    // 0x1687bc: 0xc0400a2  jal         func_100288
label_1687c0:
    if (ctx->pc == 0x1687C0u) {
        ctx->pc = 0x1687C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1687BCu;
        // 0x1687c0: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1687C4u;
        goto label_1687c4;
    }
    ctx->pc = 0x1687BCu;
    SET_GPR_U32(ctx, 31, 0x1687C4u);
    ctx->pc = 0x1687C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1687BCu;
    // 0x1687c0: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100288u, 0x1687BCu, 0x1687C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1687C4u;
label_1687c4:
    // 0x1687c4: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x1687c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_1687c8:
    // 0x1687c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1687c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1687cc:
    // 0x1687cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1687d0:
    if (ctx->pc == 0x1687D0u) {
        ctx->pc = 0x1687D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1687CCu;
        // 0x1687d0: 0x24420070  addiu       $v0, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1687D4u;
        goto label_1687d4;
    }
    ctx->pc = 0x1687CCu;
    {
        const bool branch_taken_0x1687cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1687D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1687CCu;
        // 0x1687d0: 0x24420070  addiu       $v0, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1687cc) {
            ctx->pc = 0x1687DCu;
            goto label_1687dc;
        }
    }
    ctx->pc = 0x1687D4u;
label_1687d4:
    // 0x1687d4: 0xc040094  jal         func_100250
label_1687d8:
    if (ctx->pc == 0x1687D8u) {
        ctx->pc = 0x1687D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1687D4u;
        // 0x1687d8: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1687DCu;
        goto label_1687dc;
    }
    ctx->pc = 0x1687D4u;
    SET_GPR_U32(ctx, 31, 0x1687DCu);
    ctx->pc = 0x1687D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1687D4u;
    // 0x1687d8: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100250u, 0x1687D4u, 0x1687DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1687DCu;
label_1687dc:
    // 0x1687dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1687dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1687e0:
    // 0x1687e0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1687e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1687e4:
    // 0x1687e4: 0xc0f6a9a  jal         func_3DAA68
label_1687e8:
    if (ctx->pc == 0x1687E8u) {
        ctx->pc = 0x1687E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1687E4u;
        // 0x1687e8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1687ECu;
        goto label_1687ec;
    }
    ctx->pc = 0x1687E4u;
    SET_GPR_U32(ctx, 31, 0x1687ECu);
    ctx->pc = 0x1687E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1687E4u;
    // 0x1687e8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1687E4u, 0x1687ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1687ECu;
label_1687ec:
    // 0x1687ec: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1687ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1687f0:
    // 0x1687f0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1687f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1687f4:
    // 0x1687f4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1687f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1687f8:
    // 0x1687f8: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1687f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1687fc:
    // 0x1687fc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1687fcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_168800:
    // 0x168800: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x168800u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_168804:
    // 0x168804: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x168804u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_168808:
    // 0x168808: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x168808u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16880c:
    // 0x16880c: 0x0  nop
    ctx->pc = 0x16880cu;
    // NOP
label_168810:
    // 0x168810: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_168814:
    if (ctx->pc == 0x168814u) {
        ctx->pc = 0x168814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168810u;
        // 0x168814: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168818u;
        goto label_168818;
    }
    ctx->pc = 0x168810u;
    {
        const bool branch_taken_0x168810 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x168814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168810u;
        // 0x168814: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168810) {
            ctx->pc = 0x168824u;
            goto label_168824;
        }
    }
    ctx->pc = 0x168818u;
label_168818:
    // 0x168818: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x168818u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_16881c:
    // 0x16881c: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x16881cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_168820:
    // 0x168820: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x168820u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_168824:
    // 0x168824: 0x254102b  sltu        $v0, $s2, $s4
    ctx->pc = 0x168824u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_168828:
    // 0x168828: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
label_16882c:
    if (ctx->pc == 0x16882Cu) {
        ctx->pc = 0x16882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168828u;
        // 0x16882c: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168830u;
        goto label_168830;
    }
    ctx->pc = 0x168828u;
    {
        const bool branch_taken_0x168828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168828u;
        // 0x16882c: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168828) {
            ctx->pc = 0x168738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168738;
        }
    }
    ctx->pc = 0x168830u;
label_168830:
    // 0x168830: 0x56e00017  bnel        $s7, $zero, . + 4 + (0x17 << 2)
label_168834:
    if (ctx->pc == 0x168834u) {
        ctx->pc = 0x168834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168830u;
        // 0x168834: 0x8ea20008  lw          $v0, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168838u;
        goto label_168838;
    }
    ctx->pc = 0x168830u;
    {
        const bool branch_taken_0x168830 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x168830) {
            ctx->pc = 0x168834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168830u;
            // 0x168834: 0x8ea20008  lw          $v0, 0x8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168890u;
            goto label_168890;
        }
    }
    ctx->pc = 0x168838u;
label_168838:
    // 0x168838: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x168838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16883c:
    // 0x16883c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x16883cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_168840:
    // 0x168840: 0xc04f10c  jal         func_13C430
label_168844:
    if (ctx->pc == 0x168844u) {
        ctx->pc = 0x168844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168840u;
        // 0x168844: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168848u;
        goto label_168848;
    }
    ctx->pc = 0x168840u;
    SET_GPR_U32(ctx, 31, 0x168848u);
    ctx->pc = 0x168844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168840u;
    // 0x168844: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C430u, 0x168840u, 0x168848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168848u;
label_168848:
    // 0x168848: 0xc05a52a  jal         func_1694A8
label_16884c:
    if (ctx->pc == 0x16884Cu) {
        ctx->pc = 0x16884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168848u;
        // 0x16884c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168850u;
        goto label_168850;
    }
    ctx->pc = 0x168848u;
    SET_GPR_U32(ctx, 31, 0x168850u);
    ctx->pc = 0x16884Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168848u;
    // 0x16884c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1694A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1694A8u, 0x168848u, 0x168850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168850u;
label_168850:
    // 0x168850: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_168854:
    if (ctx->pc == 0x168854u) {
        ctx->pc = 0x168854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168850u;
        // 0x168854: 0x8e240218  lw          $a0, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168858u;
        goto label_168858;
    }
    ctx->pc = 0x168850u;
    {
        const bool branch_taken_0x168850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x168850) {
            ctx->pc = 0x168854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168850u;
            // 0x168854: 0x8e240218  lw          $a0, 0x218($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168874u;
            goto label_168874;
        }
    }
    ctx->pc = 0x168858u;
label_168858:
    // 0x168858: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x168858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16885c:
    // 0x16885c: 0xc05a2f4  jal         func_168BD0
label_168860:
    if (ctx->pc == 0x168860u) {
        ctx->pc = 0x168860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16885Cu;
        // 0x168860: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168864u;
        goto label_168864;
    }
    ctx->pc = 0x16885Cu;
    SET_GPR_U32(ctx, 31, 0x168864u);
    ctx->pc = 0x168860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16885Cu;
    // 0x168860: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168BD0u, 0x16885Cu, 0x168864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168864u;
label_168864:
    // 0x168864: 0xc04f478  jal         func_13D1E0
label_168868:
    if (ctx->pc == 0x168868u) {
        ctx->pc = 0x168868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168864u;
        // 0x168868: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16886Cu;
        goto label_16886c;
    }
    ctx->pc = 0x168864u;
    SET_GPR_U32(ctx, 31, 0x16886Cu);
    ctx->pc = 0x168868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168864u;
    // 0x168868: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D1E0u, 0x168864u, 0x16886Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16886Cu;
label_16886c:
    // 0x16886c: 0x10000078  b           . + 4 + (0x78 << 2)
label_168870:
    if (ctx->pc == 0x168870u) {
        ctx->pc = 0x168870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16886Cu;
        // 0x168870: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168874u;
        goto label_168874;
    }
    ctx->pc = 0x16886Cu;
    {
        const bool branch_taken_0x16886c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16886Cu;
        // 0x168870: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16886c) {
            ctx->pc = 0x168A50u;
            goto label_168a50;
        }
    }
    ctx->pc = 0x168874u;
label_168874:
    // 0x168874: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_168878:
    // 0x168878: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x168878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16887c:
    // 0x16887c: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x16887cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_168880:
    // 0x168880: 0x40f809  jalr        $v0
label_168884:
    if (ctx->pc == 0x168884u) {
        ctx->pc = 0x168888u;
        goto label_168888;
    }
    ctx->pc = 0x168880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x168888u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168880u, 0x168888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x168888u;
label_168888:
    // 0x168888: 0x10000071  b           . + 4 + (0x71 << 2)
label_16888c:
    if (ctx->pc == 0x16888Cu) {
        ctx->pc = 0x16888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168888u;
        // 0x16888c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168890u;
        goto label_168890;
    }
    ctx->pc = 0x168888u;
    {
        const bool branch_taken_0x168888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168888u;
        // 0x16888c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168888) {
            ctx->pc = 0x168A50u;
            goto label_168a50;
        }
    }
    ctx->pc = 0x168890u;
label_168890:
    // 0x168890: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_168894:
    if (ctx->pc == 0x168894u) {
        ctx->pc = 0x168894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168890u;
        // 0x168894: 0xaeb3000c  sw          $s3, 0xC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168898u;
        goto label_168898;
    }
    ctx->pc = 0x168890u;
    {
        const bool branch_taken_0x168890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x168890) {
            ctx->pc = 0x168894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168890u;
            // 0x168894: 0xaeb3000c  sw          $s3, 0xC($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1688C8u;
            goto label_1688c8;
        }
    }
    ctx->pc = 0x168898u;
label_168898:
    // 0x168898: 0xaeb30008  sw          $s3, 0x8($s5)
    ctx->pc = 0x168898u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 19));
label_16889c:
    // 0x16889c: 0xc0aafa6  jal         func_2ABE98
label_1688a0:
    if (ctx->pc == 0x1688A0u) {
        ctx->pc = 0x1688A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16889Cu;
        // 0x1688a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1688A4u;
        goto label_1688a4;
    }
    ctx->pc = 0x16889Cu;
    SET_GPR_U32(ctx, 31, 0x1688A4u);
    ctx->pc = 0x1688A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16889Cu;
    // 0x1688a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x16889Cu, 0x1688A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1688A4u;
label_1688a4:
    // 0x1688a4: 0x8e25034c  lw          $a1, 0x34C($s1)
    ctx->pc = 0x1688a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 844)));
label_1688a8:
    // 0x1688a8: 0xc0aafc8  jal         func_2ABF20
label_1688ac:
    if (ctx->pc == 0x1688ACu) {
        ctx->pc = 0x1688ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1688A8u;
        // 0x1688ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1688B0u;
        goto label_1688b0;
    }
    ctx->pc = 0x1688A8u;
    SET_GPR_U32(ctx, 31, 0x1688B0u);
    ctx->pc = 0x1688ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1688A8u;
    // 0x1688ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x1688A8u, 0x1688B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1688B0u;
label_1688b0:
    // 0x1688b0: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x1688b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
label_1688b4:
    // 0x1688b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1688b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1688b8:
    // 0x1688b8: 0xc0aafac  jal         func_2ABEB0
label_1688bc:
    if (ctx->pc == 0x1688BCu) {
        ctx->pc = 0x1688BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1688B8u;
        // 0x1688bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1688C0u;
        goto label_1688c0;
    }
    ctx->pc = 0x1688B8u;
    SET_GPR_U32(ctx, 31, 0x1688C0u);
    ctx->pc = 0x1688BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1688B8u;
    // 0x1688bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x1688B8u, 0x1688C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1688C0u;
label_1688c0:
    // 0x1688c0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1688c4:
    if (ctx->pc == 0x1688C4u) {
        ctx->pc = 0x1688C8u;
        goto label_1688c8;
    }
    ctx->pc = 0x1688C0u;
    {
        const bool branch_taken_0x1688c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1688c0) {
            ctx->pc = 0x1688CCu;
            goto label_1688cc;
        }
    }
    ctx->pc = 0x1688C8u;
label_1688c8:
    // 0x1688c8: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x1688c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_1688cc:
    // 0x1688cc: 0xc04f258  jal         func_13C960
label_1688d0:
    if (ctx->pc == 0x1688D0u) {
        ctx->pc = 0x1688D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1688CCu;
        // 0x1688d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1688D4u;
        goto label_1688d4;
    }
    ctx->pc = 0x1688CCu;
    SET_GPR_U32(ctx, 31, 0x1688D4u);
    ctx->pc = 0x1688D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1688CCu;
    // 0x1688d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C960u, 0x1688CCu, 0x1688D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1688D4u;
label_1688d4:
    // 0x1688d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1688d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1688d8:
    // 0x1688d8: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1688d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1688dc:
    // 0x1688dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1688dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1688e0:
    // 0x1688e0: 0xc04f33e  jal         func_13CCF8
label_1688e4:
    if (ctx->pc == 0x1688E4u) {
        ctx->pc = 0x1688E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1688E0u;
        // 0x1688e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1688E8u;
        goto label_1688e8;
    }
    ctx->pc = 0x1688E0u;
    SET_GPR_U32(ctx, 31, 0x1688E8u);
    ctx->pc = 0x1688E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1688E0u;
    // 0x1688e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x1688E0u, 0x1688E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1688E8u;
label_1688e8:
    // 0x1688e8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1688e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1688ec:
    // 0x1688ec: 0xc04f0b6  jal         func_13C2D8
label_1688f0:
    if (ctx->pc == 0x1688F0u) {
        ctx->pc = 0x1688F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1688ECu;
        // 0x1688f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1688F4u;
        goto label_1688f4;
    }
    ctx->pc = 0x1688ECu;
    SET_GPR_U32(ctx, 31, 0x1688F4u);
    ctx->pc = 0x1688F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1688ECu;
    // 0x1688f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x1688ECu, 0x1688F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1688F4u;
label_1688f4:
    // 0x1688f4: 0x8ea40014  lw          $a0, 0x14($s5)
    ctx->pc = 0x1688f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_1688f8:
    // 0x1688f8: 0xc040094  jal         func_100250
label_1688fc:
    if (ctx->pc == 0x1688FCu) {
        ctx->pc = 0x1688FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1688F8u;
        // 0x1688fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168900u;
        goto label_168900;
    }
    ctx->pc = 0x1688F8u;
    SET_GPR_U32(ctx, 31, 0x168900u);
    ctx->pc = 0x1688FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1688F8u;
    // 0x1688fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100250u, 0x1688F8u, 0x168900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168900u;
label_168900:
    // 0x168900: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x168900u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_168904:
    // 0x168904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x168904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_168908:
    // 0x168908: 0xc045fea  jal         func_117FA8
label_16890c:
    if (ctx->pc == 0x16890Cu) {
        ctx->pc = 0x16890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168908u;
        // 0x16890c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168910u;
        goto label_168910;
    }
    ctx->pc = 0x168908u;
    SET_GPR_U32(ctx, 31, 0x168910u);
    ctx->pc = 0x16890Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168908u;
    // 0x16890c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x168908u, 0x168910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168910u;
label_168910:
    // 0x168910: 0x8ea40014  lw          $a0, 0x14($s5)
    ctx->pc = 0x168910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_168914:
    // 0x168914: 0xc0400be  jal         func_1002F8
label_168918:
    if (ctx->pc == 0x168918u) {
        ctx->pc = 0x168918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168914u;
        // 0x168918: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16891Cu;
        goto label_16891c;
    }
    ctx->pc = 0x168914u;
    SET_GPR_U32(ctx, 31, 0x16891Cu);
    ctx->pc = 0x168918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168914u;
    // 0x168918: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1002F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1002F8u, 0x168914u, 0x16891Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16891Cu;
label_16891c:
    // 0x16891c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_168920:
    if (ctx->pc == 0x168920u) {
        ctx->pc = 0x168920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16891Cu;
        // 0x168920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168924u;
        goto label_168924;
    }
    ctx->pc = 0x16891Cu;
    {
        const bool branch_taken_0x16891c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16891Cu;
        // 0x168920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16891c) {
            ctx->pc = 0x16893Cu;
            goto label_16893c;
        }
    }
    ctx->pc = 0x168924u;
label_168924:
    // 0x168924: 0xc0400a2  jal         func_100288
label_168928:
    if (ctx->pc == 0x168928u) {
        ctx->pc = 0x168928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168924u;
        // 0x168928: 0x8ea40014  lw          $a0, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16892Cu;
        goto label_16892c;
    }
    ctx->pc = 0x168924u;
    SET_GPR_U32(ctx, 31, 0x16892Cu);
    ctx->pc = 0x168928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168924u;
    // 0x168928: 0x8ea40014  lw          $a0, 0x14($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100288u, 0x168924u, 0x16892Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16892Cu;
label_16892c:
    // 0x16892c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16892cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_168930:
    // 0x168930: 0xc046030  jal         func_1180C0
label_168934:
    if (ctx->pc == 0x168934u) {
        ctx->pc = 0x168934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168930u;
        // 0x168934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168938u;
        goto label_168938;
    }
    ctx->pc = 0x168930u;
    SET_GPR_U32(ctx, 31, 0x168938u);
    ctx->pc = 0x168934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168930u;
    // 0x168934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180C0u, 0x168930u, 0x168938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168938u;
label_168938:
    // 0x168938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x168938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16893c:
    // 0x16893c: 0xc046104  jal         func_118410
label_168940:
    if (ctx->pc == 0x168940u) {
        ctx->pc = 0x168940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16893Cu;
        // 0x168940: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168944u;
        goto label_168944;
    }
    ctx->pc = 0x16893Cu;
    SET_GPR_U32(ctx, 31, 0x168944u);
    ctx->pc = 0x168940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16893Cu;
    // 0x168940: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x16893Cu, 0x168944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168944u;
label_168944:
    // 0x168944: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x168944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
label_168948:
    // 0x168948: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x168948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16894c:
    // 0x16894c: 0x0  nop
    ctx->pc = 0x16894cu;
    // NOP
label_168950:
    // 0x168950: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x168950u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168954:
    // 0x168954: 0x0  nop
    ctx->pc = 0x168954u;
    // NOP
label_168958:
    // 0x168958: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_16895c:
    if (ctx->pc == 0x16895Cu) {
        ctx->pc = 0x16895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168958u;
        // 0x16895c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168960u;
        goto label_168960;
    }
    ctx->pc = 0x168958u;
    {
        const bool branch_taken_0x168958 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168958u;
        // 0x16895c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168958) {
            ctx->pc = 0x168968u;
            goto label_168968;
        }
    }
    ctx->pc = 0x168960u;
label_168960:
    // 0x168960: 0xc046104  jal         func_118410
label_168964:
    if (ctx->pc == 0x168964u) {
        ctx->pc = 0x168964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168960u;
        // 0x168964: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168968u;
        goto label_168968;
    }
    ctx->pc = 0x168960u;
    SET_GPR_U32(ctx, 31, 0x168968u);
    ctx->pc = 0x168964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168960u;
    // 0x168964: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x168960u, 0x168968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168968u;
label_168968:
    // 0x168968: 0x8e250330  lw          $a1, 0x330($s1)
    ctx->pc = 0x168968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 816)));
label_16896c:
    // 0x16896c: 0xc0460c4  jal         func_118310
label_168970:
    if (ctx->pc == 0x168970u) {
        ctx->pc = 0x168970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16896Cu;
        // 0x168970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168974u;
        goto label_168974;
    }
    ctx->pc = 0x16896Cu;
    SET_GPR_U32(ctx, 31, 0x168974u);
    ctx->pc = 0x168970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16896Cu;
    // 0x168970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118310u, 0x16896Cu, 0x168974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168974u;
label_168974:
    // 0x168974: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x168974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_168978:
    // 0x168978: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x168978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16897c:
    // 0x16897c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16897cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_168980:
    // 0x168980: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x168980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_168984:
    // 0x168984: 0x60f809  jalr        $v1
label_168988:
    if (ctx->pc == 0x168988u) {
        ctx->pc = 0x168988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168984u;
        // 0x168988: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16898Cu;
        goto label_16898c;
    }
    ctx->pc = 0x168984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16898Cu);
        ctx->pc = 0x168988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168984u;
        // 0x168988: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168984u, 0x16898Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16898Cu;
label_16898c:
    // 0x16898c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16898cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_168990:
    // 0x168990: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x168990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_168994:
    // 0x168994: 0xc04d6fe  jal         func_135BF8
label_168998:
    if (ctx->pc == 0x168998u) {
        ctx->pc = 0x168998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168994u;
        // 0x168998: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16899Cu;
        goto label_16899c;
    }
    ctx->pc = 0x168994u;
    SET_GPR_U32(ctx, 31, 0x16899Cu);
    ctx->pc = 0x168998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168994u;
    // 0x168998: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135BF8u, 0x168994u, 0x16899Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16899Cu;
label_16899c:
    // 0x16899c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x16899cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1689a0:
    // 0x1689a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1689a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1689a4:
    // 0x1689a4: 0xc04f124  jal         func_13C490
label_1689a8:
    if (ctx->pc == 0x1689A8u) {
        ctx->pc = 0x1689A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689A4u;
        // 0x1689a8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1689ACu;
        goto label_1689ac;
    }
    ctx->pc = 0x1689A4u;
    SET_GPR_U32(ctx, 31, 0x1689ACu);
    ctx->pc = 0x1689A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1689A4u;
    // 0x1689a8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C490u, 0x1689A4u, 0x1689ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1689ACu;
label_1689ac:
    // 0x1689ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1689acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1689b0:
    // 0x1689b0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1689b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1689b4:
    // 0x1689b4: 0xc04f10c  jal         func_13C430
label_1689b8:
    if (ctx->pc == 0x1689B8u) {
        ctx->pc = 0x1689B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689B4u;
        // 0x1689b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1689BCu;
        goto label_1689bc;
    }
    ctx->pc = 0x1689B4u;
    SET_GPR_U32(ctx, 31, 0x1689BCu);
    ctx->pc = 0x1689B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1689B4u;
    // 0x1689b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C430u, 0x1689B4u, 0x1689BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1689BCu;
label_1689bc:
    // 0x1689bc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1689bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1689c0:
    // 0x1689c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1689c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1689c4:
    // 0x1689c4: 0xc04f118  jal         func_13C460
label_1689c8:
    if (ctx->pc == 0x1689C8u) {
        ctx->pc = 0x1689C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689C4u;
        // 0x1689c8: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1689CCu;
        goto label_1689cc;
    }
    ctx->pc = 0x1689C4u;
    SET_GPR_U32(ctx, 31, 0x1689CCu);
    ctx->pc = 0x1689C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1689C4u;
    // 0x1689c8: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C460u, 0x1689C4u, 0x1689CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1689CCu;
label_1689cc:
    // 0x1689cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1689ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1689d0:
    // 0x1689d0: 0xc05a55a  jal         func_169568
label_1689d4:
    if (ctx->pc == 0x1689D4u) {
        ctx->pc = 0x1689D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689D0u;
        // 0x1689d4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1689D8u;
        goto label_1689d8;
    }
    ctx->pc = 0x1689D0u;
    SET_GPR_U32(ctx, 31, 0x1689D8u);
    ctx->pc = 0x1689D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1689D0u;
    // 0x1689d4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169568u, 0x1689D0u, 0x1689D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1689D8u;
label_1689d8:
    // 0x1689d8: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1689d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1689dc:
    // 0x1689dc: 0x90620234  lbu         $v0, 0x234($v1)
    ctx->pc = 0x1689dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 564)));
label_1689e0:
    // 0x1689e0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1689e4:
    if (ctx->pc == 0x1689E4u) {
        ctx->pc = 0x1689E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689E0u;
        // 0x1689e4: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1689E8u;
        goto label_1689e8;
    }
    ctx->pc = 0x1689E0u;
    {
        const bool branch_taken_0x1689e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1689E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1689E0u;
        // 0x1689e4: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1689e0) {
            ctx->pc = 0x168A4Cu;
            goto label_168a4c;
        }
    }
    ctx->pc = 0x1689E8u;
label_1689e8:
    // 0x1689e8: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x1689e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1689ec:
    // 0x1689ec: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1689ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1689f0:
    // 0x1689f0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1689f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1689f4:
    // 0x1689f4: 0xa3a00020  sb          $zero, 0x20($sp)
    ctx->pc = 0x1689f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 0));
label_1689f8:
    // 0x1689f8: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x1689f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_1689fc:
    // 0x1689fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1689fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_168a00:
    // 0x168a00: 0xc049828  jal         func_1260A0
label_168a04:
    if (ctx->pc == 0x168A04u) {
        ctx->pc = 0x168A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A00u;
        // 0x168a04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168A08u;
        goto label_168a08;
    }
    ctx->pc = 0x168A00u;
    SET_GPR_U32(ctx, 31, 0x168A08u);
    ctx->pc = 0x168A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168A00u;
    // 0x168a04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1260A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1260A0u, 0x168A00u, 0x168A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168A08u;
label_168a08:
    // 0x168a08: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_168a0c:
    if (ctx->pc == 0x168A0Cu) {
        ctx->pc = 0x168A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A08u;
        // 0x168a0c: 0x24110006  addiu       $s1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168A10u;
        goto label_168a10;
    }
    ctx->pc = 0x168A08u;
    {
        const bool branch_taken_0x168a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A08u;
        // 0x168a0c: 0x24110006  addiu       $s1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168a08) {
            ctx->pc = 0x168A4Cu;
            goto label_168a4c;
        }
    }
    ctx->pc = 0x168A10u;
label_168a10:
    // 0x168a10: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x168a10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_168a14:
    // 0x168a14: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x168a14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
label_168a18:
    // 0x168a18: 0xac54000c  sw          $s4, 0xC($v0)
    ctx->pc = 0x168a18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 20));
label_168a1c:
    // 0x168a1c: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x168a1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_168a20:
    // 0x168a20: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x168a20u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_168a24:
    // 0x168a24: 0xac500020  sw          $s0, 0x20($v0)
    ctx->pc = 0x168a24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 16));
label_168a28:
    // 0x168a28: 0x26a4a080  addiu       $a0, $s5, -0x5F80
    ctx->pc = 0x168a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294942848));
label_168a2c:
    // 0x168a2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x168a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_168a30:
    // 0x168a30: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x168a30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_168a34:
    // 0x168a34: 0x93a60020  lbu         $a2, 0x20($sp)
    ctx->pc = 0x168a34u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_168a38:
    // 0x168a38: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x168a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_168a3c:
    // 0x168a3c: 0xc049828  jal         func_1260A0
label_168a40:
    if (ctx->pc == 0x168A40u) {
        ctx->pc = 0x168A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A3Cu;
        // 0x168a40: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x168A44u;
        goto label_168a44;
    }
    ctx->pc = 0x168A3Cu;
    SET_GPR_U32(ctx, 31, 0x168A44u);
    ctx->pc = 0x168A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168A3Cu;
    // 0x168a40: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1260A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1260A0u, 0x168A3Cu, 0x168A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168A44u;
label_168a44:
    // 0x168a44: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
label_168a48:
    if (ctx->pc == 0x168A48u) {
        ctx->pc = 0x168A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A44u;
        // 0x168a48: 0xac510008  sw          $s1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168A4Cu;
        goto label_168a4c;
    }
    ctx->pc = 0x168A44u;
    {
        const bool branch_taken_0x168a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x168a44) {
            ctx->pc = 0x168A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168A44u;
            // 0x168a48: 0xac510008  sw          $s1, 0x8($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168a18;
        }
    }
    ctx->pc = 0x168A4Cu;
label_168a4c:
    // 0x168a4c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x168a4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_168a50:
    // 0x168a50: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x168a50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_168a54:
    // 0x168a54: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x168a54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_168a58:
    // 0x168a58: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x168a58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_168a5c:
    // 0x168a5c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x168a5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_168a60:
    // 0x168a60: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x168a60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_168a64:
    // 0x168a64: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x168a64u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_168a68:
    // 0x168a68: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x168a68u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_168a6c:
    // 0x168a6c: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x168a6cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_168a70:
    // 0x168a70: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x168a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_168a74:
    // 0x168a74: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x168a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_168a78:
    // 0x168a78: 0x3e00008  jr          $ra
label_168a7c:
    if (ctx->pc == 0x168A7Cu) {
        ctx->pc = 0x168A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A78u;
        // 0x168a7c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168A80u;
        goto label_fallthrough_0x168a78;
    }
    ctx->pc = 0x168A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A78u;
        // 0x168a7c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x168a78:
    ctx->pc = 0x168A80u;
}
