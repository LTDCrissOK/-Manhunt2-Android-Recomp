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

// Function: sub_003A86B8
// Address: 0x3a86b8 - 0x3a89b0
void sub_003A86B8_0x3a86b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A86B8_0x3a86b8");
#endif

    switch (ctx->pc) {
        case 0x3a86b8u: goto label_3a86b8;
        case 0x3a86bcu: goto label_3a86bc;
        case 0x3a86c0u: goto label_3a86c0;
        case 0x3a86c4u: goto label_3a86c4;
        case 0x3a86c8u: goto label_3a86c8;
        case 0x3a86ccu: goto label_3a86cc;
        case 0x3a86d0u: goto label_3a86d0;
        case 0x3a86d4u: goto label_3a86d4;
        case 0x3a86d8u: goto label_3a86d8;
        case 0x3a86dcu: goto label_3a86dc;
        case 0x3a86e0u: goto label_3a86e0;
        case 0x3a86e4u: goto label_3a86e4;
        case 0x3a86e8u: goto label_3a86e8;
        case 0x3a86ecu: goto label_3a86ec;
        case 0x3a86f0u: goto label_3a86f0;
        case 0x3a86f4u: goto label_3a86f4;
        case 0x3a86f8u: goto label_3a86f8;
        case 0x3a86fcu: goto label_3a86fc;
        case 0x3a8700u: goto label_3a8700;
        case 0x3a8704u: goto label_3a8704;
        case 0x3a8708u: goto label_3a8708;
        case 0x3a870cu: goto label_3a870c;
        case 0x3a8710u: goto label_3a8710;
        case 0x3a8714u: goto label_3a8714;
        case 0x3a8718u: goto label_3a8718;
        case 0x3a871cu: goto label_3a871c;
        case 0x3a8720u: goto label_3a8720;
        case 0x3a8724u: goto label_3a8724;
        case 0x3a8728u: goto label_3a8728;
        case 0x3a872cu: goto label_3a872c;
        case 0x3a8730u: goto label_3a8730;
        case 0x3a8734u: goto label_3a8734;
        case 0x3a8738u: goto label_3a8738;
        case 0x3a873cu: goto label_3a873c;
        case 0x3a8740u: goto label_3a8740;
        case 0x3a8744u: goto label_3a8744;
        case 0x3a8748u: goto label_3a8748;
        case 0x3a874cu: goto label_3a874c;
        case 0x3a8750u: goto label_3a8750;
        case 0x3a8754u: goto label_3a8754;
        case 0x3a8758u: goto label_3a8758;
        case 0x3a875cu: goto label_3a875c;
        case 0x3a8760u: goto label_3a8760;
        case 0x3a8764u: goto label_3a8764;
        case 0x3a8768u: goto label_3a8768;
        case 0x3a876cu: goto label_3a876c;
        case 0x3a8770u: goto label_3a8770;
        case 0x3a8774u: goto label_3a8774;
        case 0x3a8778u: goto label_3a8778;
        case 0x3a877cu: goto label_3a877c;
        case 0x3a8780u: goto label_3a8780;
        case 0x3a8784u: goto label_3a8784;
        case 0x3a8788u: goto label_3a8788;
        case 0x3a878cu: goto label_3a878c;
        case 0x3a8790u: goto label_3a8790;
        case 0x3a8794u: goto label_3a8794;
        case 0x3a8798u: goto label_3a8798;
        case 0x3a879cu: goto label_3a879c;
        case 0x3a87a0u: goto label_3a87a0;
        case 0x3a87a4u: goto label_3a87a4;
        case 0x3a87a8u: goto label_3a87a8;
        case 0x3a87acu: goto label_3a87ac;
        case 0x3a87b0u: goto label_3a87b0;
        case 0x3a87b4u: goto label_3a87b4;
        case 0x3a87b8u: goto label_3a87b8;
        case 0x3a87bcu: goto label_3a87bc;
        case 0x3a87c0u: goto label_3a87c0;
        case 0x3a87c4u: goto label_3a87c4;
        case 0x3a87c8u: goto label_3a87c8;
        case 0x3a87ccu: goto label_3a87cc;
        case 0x3a87d0u: goto label_3a87d0;
        case 0x3a87d4u: goto label_3a87d4;
        case 0x3a87d8u: goto label_3a87d8;
        case 0x3a87dcu: goto label_3a87dc;
        case 0x3a87e0u: goto label_3a87e0;
        case 0x3a87e4u: goto label_3a87e4;
        case 0x3a87e8u: goto label_3a87e8;
        case 0x3a87ecu: goto label_3a87ec;
        case 0x3a87f0u: goto label_3a87f0;
        case 0x3a87f4u: goto label_3a87f4;
        case 0x3a87f8u: goto label_3a87f8;
        case 0x3a87fcu: goto label_3a87fc;
        case 0x3a8800u: goto label_3a8800;
        case 0x3a8804u: goto label_3a8804;
        case 0x3a8808u: goto label_3a8808;
        case 0x3a880cu: goto label_3a880c;
        case 0x3a8810u: goto label_3a8810;
        case 0x3a8814u: goto label_3a8814;
        case 0x3a8818u: goto label_3a8818;
        case 0x3a881cu: goto label_3a881c;
        case 0x3a8820u: goto label_3a8820;
        case 0x3a8824u: goto label_3a8824;
        case 0x3a8828u: goto label_3a8828;
        case 0x3a882cu: goto label_3a882c;
        case 0x3a8830u: goto label_3a8830;
        case 0x3a8834u: goto label_3a8834;
        case 0x3a8838u: goto label_3a8838;
        case 0x3a883cu: goto label_3a883c;
        case 0x3a8840u: goto label_3a8840;
        case 0x3a8844u: goto label_3a8844;
        case 0x3a8848u: goto label_3a8848;
        case 0x3a884cu: goto label_3a884c;
        case 0x3a8850u: goto label_3a8850;
        case 0x3a8854u: goto label_3a8854;
        case 0x3a8858u: goto label_3a8858;
        case 0x3a885cu: goto label_3a885c;
        case 0x3a8860u: goto label_3a8860;
        case 0x3a8864u: goto label_3a8864;
        case 0x3a8868u: goto label_3a8868;
        case 0x3a886cu: goto label_3a886c;
        case 0x3a8870u: goto label_3a8870;
        case 0x3a8874u: goto label_3a8874;
        case 0x3a8878u: goto label_3a8878;
        case 0x3a887cu: goto label_3a887c;
        case 0x3a8880u: goto label_3a8880;
        case 0x3a8884u: goto label_3a8884;
        case 0x3a8888u: goto label_3a8888;
        case 0x3a888cu: goto label_3a888c;
        case 0x3a8890u: goto label_3a8890;
        case 0x3a8894u: goto label_3a8894;
        case 0x3a8898u: goto label_3a8898;
        case 0x3a889cu: goto label_3a889c;
        case 0x3a88a0u: goto label_3a88a0;
        case 0x3a88a4u: goto label_3a88a4;
        case 0x3a88a8u: goto label_3a88a8;
        case 0x3a88acu: goto label_3a88ac;
        case 0x3a88b0u: goto label_3a88b0;
        case 0x3a88b4u: goto label_3a88b4;
        case 0x3a88b8u: goto label_3a88b8;
        case 0x3a88bcu: goto label_3a88bc;
        case 0x3a88c0u: goto label_3a88c0;
        case 0x3a88c4u: goto label_3a88c4;
        case 0x3a88c8u: goto label_3a88c8;
        case 0x3a88ccu: goto label_3a88cc;
        case 0x3a88d0u: goto label_3a88d0;
        case 0x3a88d4u: goto label_3a88d4;
        case 0x3a88d8u: goto label_3a88d8;
        case 0x3a88dcu: goto label_3a88dc;
        case 0x3a88e0u: goto label_3a88e0;
        case 0x3a88e4u: goto label_3a88e4;
        case 0x3a88e8u: goto label_3a88e8;
        case 0x3a88ecu: goto label_3a88ec;
        case 0x3a88f0u: goto label_3a88f0;
        case 0x3a88f4u: goto label_3a88f4;
        case 0x3a88f8u: goto label_3a88f8;
        case 0x3a88fcu: goto label_3a88fc;
        case 0x3a8900u: goto label_3a8900;
        case 0x3a8904u: goto label_3a8904;
        case 0x3a8908u: goto label_3a8908;
        case 0x3a890cu: goto label_3a890c;
        case 0x3a8910u: goto label_3a8910;
        case 0x3a8914u: goto label_3a8914;
        case 0x3a8918u: goto label_3a8918;
        case 0x3a891cu: goto label_3a891c;
        case 0x3a8920u: goto label_3a8920;
        case 0x3a8924u: goto label_3a8924;
        case 0x3a8928u: goto label_3a8928;
        case 0x3a892cu: goto label_3a892c;
        case 0x3a8930u: goto label_3a8930;
        case 0x3a8934u: goto label_3a8934;
        case 0x3a8938u: goto label_3a8938;
        case 0x3a893cu: goto label_3a893c;
        case 0x3a8940u: goto label_3a8940;
        case 0x3a8944u: goto label_3a8944;
        case 0x3a8948u: goto label_3a8948;
        case 0x3a894cu: goto label_3a894c;
        case 0x3a8950u: goto label_3a8950;
        case 0x3a8954u: goto label_3a8954;
        case 0x3a8958u: goto label_3a8958;
        case 0x3a895cu: goto label_3a895c;
        case 0x3a8960u: goto label_3a8960;
        case 0x3a8964u: goto label_3a8964;
        case 0x3a8968u: goto label_3a8968;
        case 0x3a896cu: goto label_3a896c;
        case 0x3a8970u: goto label_3a8970;
        case 0x3a8974u: goto label_3a8974;
        case 0x3a8978u: goto label_3a8978;
        case 0x3a897cu: goto label_3a897c;
        case 0x3a8980u: goto label_3a8980;
        case 0x3a8984u: goto label_3a8984;
        case 0x3a8988u: goto label_3a8988;
        case 0x3a898cu: goto label_3a898c;
        case 0x3a8990u: goto label_3a8990;
        case 0x3a8994u: goto label_3a8994;
        case 0x3a8998u: goto label_3a8998;
        case 0x3a899cu: goto label_3a899c;
        case 0x3a89a0u: goto label_3a89a0;
        case 0x3a89a4u: goto label_3a89a4;
        case 0x3a89a8u: goto label_3a89a8;
        case 0x3a89acu: goto label_3a89ac;
        default: break;
    }

    ctx->pc = 0x3a86b8u;

label_3a86b8:
    // 0x3a86b8: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a86b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a86bc:
    // 0x3a86bc: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3a86bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3a86c0:
    // 0x3a86c0: 0x8c43a0d0  lw          $v1, -0x5F30($v0)
    ctx->pc = 0x3a86c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942928)));
label_3a86c4:
    // 0x3a86c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a86c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3a86c8:
    // 0x3a86c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a86c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3a86cc:
    // 0x3a86cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a86ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3a86d0:
    // 0x3a86d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a86d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_3a86d4:
    // 0x3a86d4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3a86d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_3a86d8:
    // 0x3a86d8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3a86d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_3a86dc:
    // 0x3a86dc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3a86dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_3a86e0:
    // 0x3a86e0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x3a86e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_3a86e4:
    // 0x3a86e4: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x3a86e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_3a86e8:
    // 0x3a86e8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_3a86ec:
    if (ctx->pc == 0x3A86ECu) {
        ctx->pc = 0x3A86ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A86E8u;
        // 0x3a86ec: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A86F0u;
        goto label_3a86f0;
    }
    ctx->pc = 0x3A86E8u;
    {
        const bool branch_taken_0x3a86e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A86ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A86E8u;
        // 0x3a86ec: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a86e8) {
            ctx->pc = 0x3A8710u;
            goto label_3a8710;
        }
    }
    ctx->pc = 0x3A86F0u;
label_3a86f0:
    // 0x3a86f0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3a86f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_3a86f4:
    // 0x3a86f4: 0x3c150042  lui         $s5, 0x42
    ctx->pc = 0x3a86f4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)66 << 16));
label_3a86f8:
    // 0x3a86f8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3a86f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3a86fc:
    // 0x3a86fc: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x3a86fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
label_3a8700:
    // 0x3a8700: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x3a8700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_3a8704:
    // 0x3a8704: 0xaea3a0c8  sw          $v1, -0x5F38($s5)
    ctx->pc = 0x3a8704u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294942920), GPR_U32(ctx, 3));
label_3a8708:
    // 0x3a8708: 0x10000002  b           . + 4 + (0x2 << 2)
label_3a870c:
    if (ctx->pc == 0x3A870Cu) {
        ctx->pc = 0x3A870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8708u;
        // 0x3a870c: 0xac82a0cc  sw          $v0, -0x5F34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294942924), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8710u;
        goto label_3a8710;
    }
    ctx->pc = 0x3A8708u;
    {
        const bool branch_taken_0x3a8708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8708u;
        // 0x3a870c: 0xac82a0cc  sw          $v0, -0x5F34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294942924), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8708) {
            ctx->pc = 0x3A8714u;
            goto label_3a8714;
        }
    }
    ctx->pc = 0x3A8710u;
label_3a8710:
    // 0x3a8710: 0x3c150042  lui         $s5, 0x42
    ctx->pc = 0x3a8710u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)66 << 16));
label_3a8714:
    // 0x3a8714: 0x3c130042  lui         $s3, 0x42
    ctx->pc = 0x3a8714u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)66 << 16));
label_3a8718:
    // 0x3a8718: 0x2670a0d4  addiu       $s0, $s3, -0x5F2C
    ctx->pc = 0x3a8718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942932));
label_3a871c:
    // 0x3a871c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a871cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a8720:
    // 0x3a8720: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
label_3a8724:
    if (ctx->pc == 0x3A8724u) {
        ctx->pc = 0x3A8724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8720u;
        // 0x3a8724: 0x3c100042  lui         $s0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8728u;
        goto label_3a8728;
    }
    ctx->pc = 0x3A8720u;
    {
        const bool branch_taken_0x3a8720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a8720) {
            ctx->pc = 0x3A8724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8720u;
            // 0x3a8724: 0x3c100042  lui         $s0, 0x42 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)66 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A87B8u;
            goto label_3a87b8;
        }
    }
    ctx->pc = 0x3A8728u;
label_3a8728:
    // 0x3a8728: 0x3c120042  lui         $s2, 0x42
    ctx->pc = 0x3a8728u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)66 << 16));
label_3a872c:
    // 0x3a872c: 0x2651a0cc  addiu       $s1, $s2, -0x5F34
    ctx->pc = 0x3a872cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942924));
label_3a8730:
    // 0x3a8730: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3a8730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a8734:
    // 0x3a8734: 0xc0f3e00  jal         func_3CF800
label_3a8738:
    if (ctx->pc == 0x3A8738u) {
        ctx->pc = 0x3A8738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8734u;
        // 0x3a8738: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A873Cu;
        goto label_3a873c;
    }
    ctx->pc = 0x3A8734u;
    SET_GPR_U32(ctx, 31, 0x3A873Cu);
    ctx->pc = 0x3A8738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8734u;
    // 0x3a8738: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CF800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CF800u, 0x3A8734u, 0x3A873Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A873Cu;
label_3a873c:
    // 0x3a873c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_3a8740:
    if (ctx->pc == 0x3A8740u) {
        ctx->pc = 0x3A8740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A873Cu;
        // 0x3a8740: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8744u;
        goto label_3a8744;
    }
    ctx->pc = 0x3A873Cu;
    {
        const bool branch_taken_0x3a873c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A873Cu;
        // 0x3a8740: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a873c) {
            ctx->pc = 0x3A8778u;
            goto label_3a8778;
        }
    }
    ctx->pc = 0x3A8744u;
label_3a8744:
    // 0x3a8744: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3a8744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a8748:
    // 0x3a8748: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a8748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3a874c:
    // 0x3a874c: 0x2484e8a8  addiu       $a0, $a0, -0x1758
    ctx->pc = 0x3a874cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961320));
label_3a8750:
    // 0x3a8750: 0xc0e5ebe  jal         func_397AF8
label_3a8754:
    if (ctx->pc == 0x3A8754u) {
        ctx->pc = 0x3A8754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8750u;
        // 0x3a8754: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8758u;
        goto label_3a8758;
    }
    ctx->pc = 0x3A8750u;
    SET_GPR_U32(ctx, 31, 0x3A8758u);
    ctx->pc = 0x3A8754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8750u;
    // 0x3a8754: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3A8750u, 0x3A8758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8758u;
label_3a8758:
    // 0x3a8758: 0x0  nop
    ctx->pc = 0x3a8758u;
    // NOP
label_3a875c:
    // 0x3a875c: 0x0  nop
    ctx->pc = 0x3a875cu;
    // NOP
label_3a8760:
    // 0x3a8760: 0x0  nop
    ctx->pc = 0x3a8760u;
    // NOP
label_3a8764:
    // 0x3a8764: 0x0  nop
    ctx->pc = 0x3a8764u;
    // NOP
label_3a8768:
    // 0x3a8768: 0x0  nop
    ctx->pc = 0x3a8768u;
    // NOP
label_3a876c:
    // 0x3a876c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_3a8770:
    if (ctx->pc == 0x3A8770u) {
        ctx->pc = 0x3A8774u;
        goto label_3a8774;
    }
    ctx->pc = 0x3A876Cu;
    {
        const bool branch_taken_0x3a876c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a876c) {
            ctx->pc = 0x3A8758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a8758;
        }
    }
    ctx->pc = 0x3A8774u;
label_3a8774:
    // 0x3a8774: 0x0  nop
    ctx->pc = 0x3a8774u;
    // NOP
label_3a8778:
    // 0x3a8778: 0x2670a0d4  addiu       $s0, $s3, -0x5F2C
    ctx->pc = 0x3a8778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942932));
label_3a877c:
    // 0x3a877c: 0x8e45a0cc  lw          $a1, -0x5F34($s2)
    ctx->pc = 0x3a877cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294942924)));
label_3a8780:
    // 0x3a8780: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3a8780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a8784:
    // 0x3a8784: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a8784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3a8788:
    // 0x3a8788: 0x2484e8f0  addiu       $a0, $a0, -0x1710
    ctx->pc = 0x3a8788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961392));
label_3a878c:
    // 0x3a878c: 0xc0e5ebe  jal         func_397AF8
label_3a8790:
    if (ctx->pc == 0x3A8790u) {
        ctx->pc = 0x3A8790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A878Cu;
        // 0x3a8790: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8794u;
        goto label_3a8794;
    }
    ctx->pc = 0x3A878Cu;
    SET_GPR_U32(ctx, 31, 0x3A8794u);
    ctx->pc = 0x3A8790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A878Cu;
    // 0x3a8790: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3A878Cu, 0x3A8794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8794u;
label_3a8794:
    // 0x3a8794: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a8794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a8798:
    // 0x3a8798: 0x2405ffc0  addiu       $a1, $zero, -0x40
    ctx->pc = 0x3a8798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
label_3a879c:
    // 0x3a879c: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x3a879cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
label_3a87a0:
    // 0x3a87a0: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x3a87a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_3a87a4:
    // 0x3a87a4: 0x3c100042  lui         $s0, 0x42
    ctx->pc = 0x3a87a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)66 << 16));
label_3a87a8:
    // 0x3a87a8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x3a87a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_3a87ac:
    // 0x3a87ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a87acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a87b0:
    // 0x3a87b0: 0xa082a0dc  sb          $v0, -0x5F24($a0)
    ctx->pc = 0x3a87b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294942940), (uint8_t)GPR_U32(ctx, 2));
label_3a87b4:
    // 0x3a87b4: 0xae03a0d8  sw          $v1, -0x5F28($s0)
    ctx->pc = 0x3a87b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294942936), GPR_U32(ctx, 3));
label_3a87b8:
    // 0x3a87b8: 0x3c140042  lui         $s4, 0x42
    ctx->pc = 0x3a87b8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)66 << 16));
label_3a87bc:
    // 0x3a87bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a87bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a87c0:
    // 0x3a87c0: 0x2684a128  addiu       $a0, $s4, -0x5ED8
    ctx->pc = 0x3a87c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294943016));
label_3a87c4:
    // 0x3a87c4: 0xc0efab3  jal         func_3BEACC
label_3a87c8:
    if (ctx->pc == 0x3A87C8u) {
        ctx->pc = 0x3A87C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A87C4u;
        // 0x3a87c8: 0x24060300  addiu       $a2, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A87CCu;
        goto label_3a87cc;
    }
    ctx->pc = 0x3A87C4u;
    SET_GPR_U32(ctx, 31, 0x3A87CCu);
    ctx->pc = 0x3A87C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A87C4u;
    // 0x3a87c8: 0x24060300  addiu       $a2, $zero, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3A87C4u, 0x3A87CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A87CCu;
label_3a87cc:
    // 0x3a87cc: 0x8e11a0d8  lw          $s1, -0x5F28($s0)
    ctx->pc = 0x3a87ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942936)));
label_3a87d0:
    // 0x3a87d0: 0x8ea2a0c8  lw          $v0, -0x5F38($s5)
    ctx->pc = 0x3a87d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294942920)));
label_3a87d4:
    // 0x3a87d4: 0x1840006a  blez        $v0, . + 4 + (0x6A << 2)
label_3a87d8:
    if (ctx->pc == 0x3A87D8u) {
        ctx->pc = 0x3A87D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A87D4u;
        // 0x3a87d8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A87DCu;
        goto label_3a87dc;
    }
    ctx->pc = 0x3A87D4u;
    {
        const bool branch_taken_0x3a87d4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3A87D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A87D4u;
        // 0x3a87d8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a87d4) {
            ctx->pc = 0x3A8980u;
            goto label_3a8980;
        }
    }
    ctx->pc = 0x3A87DCu;
label_3a87dc:
    // 0x3a87dc: 0x3c160042  lui         $s6, 0x42
    ctx->pc = 0x3a87dcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)66 << 16));
label_3a87e0:
    // 0x3a87e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3a87e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a87e4:
    // 0x3a87e4: 0x3c1e0048  lui         $fp, 0x48
    ctx->pc = 0x3a87e4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)72 << 16));
label_3a87e8:
    // 0x3a87e8: 0x3c170048  lui         $s7, 0x48
    ctx->pc = 0x3a87e8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)72 << 16));
label_3a87ec:
    // 0x3a87ec: 0x2682a128  addiu       $v0, $s4, -0x5ED8
    ctx->pc = 0x3a87ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294943016));
label_3a87f0:
    // 0x3a87f0: 0x3223003f  andi        $v1, $s1, 0x3F
    ctx->pc = 0x3a87f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)63);
label_3a87f4:
    // 0x3a87f4: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x3a87f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3a87f8:
    // 0x3a87f8: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x3a87f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_3a87fc:
    // 0x3a87fc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_3a8800:
    if (ctx->pc == 0x3A8800u) {
        ctx->pc = 0x3A8800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A87FCu;
        // 0x3a8800: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8804u;
        goto label_3a8804;
    }
    ctx->pc = 0x3A87FCu;
    {
        const bool branch_taken_0x3a87fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A87FCu;
        // 0x3a8800: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a87fc) {
            ctx->pc = 0x3A8830u;
            goto label_3a8830;
        }
    }
    ctx->pc = 0x3A8804u;
label_3a8804:
    // 0x3a8804: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3a8804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_3a8808:
    // 0x3a8808: 0xc0e5ebe  jal         func_397AF8
label_3a880c:
    if (ctx->pc == 0x3A880Cu) {
        ctx->pc = 0x3A880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8808u;
        // 0x3a880c: 0x2444e920  addiu       $a0, $v0, -0x16E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8810u;
        goto label_3a8810;
    }
    ctx->pc = 0x3A8808u;
    SET_GPR_U32(ctx, 31, 0x3A8810u);
    ctx->pc = 0x3A880Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8808u;
    // 0x3a880c: 0x2444e920  addiu       $a0, $v0, -0x16E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3A8808u, 0x3A8810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8810u;
label_3a8810:
    // 0x3a8810: 0x0  nop
    ctx->pc = 0x3a8810u;
    // NOP
label_3a8814:
    // 0x3a8814: 0x0  nop
    ctx->pc = 0x3a8814u;
    // NOP
label_3a8818:
    // 0x3a8818: 0x0  nop
    ctx->pc = 0x3a8818u;
    // NOP
label_3a881c:
    // 0x3a881c: 0x0  nop
    ctx->pc = 0x3a881cu;
    // NOP
label_3a8820:
    // 0x3a8820: 0x0  nop
    ctx->pc = 0x3a8820u;
    // NOP
label_3a8824:
    // 0x3a8824: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_3a8828:
    if (ctx->pc == 0x3A8828u) {
        ctx->pc = 0x3A882Cu;
        goto label_3a882c;
    }
    ctx->pc = 0x3A8824u;
    {
        const bool branch_taken_0x3a8824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8824) {
            ctx->pc = 0x3A8810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a8810;
        }
    }
    ctx->pc = 0x3A882Cu;
label_3a882c:
    // 0x3a882c: 0x0  nop
    ctx->pc = 0x3a882cu;
    // NOP
label_3a8830:
    // 0x3a8830: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a8830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a8834:
    // 0x3a8834: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x3a8834u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_3a8838:
    // 0x3a8838: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a8838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a883c:
    // 0x3a883c: 0xc0eb0a0  jal         func_3AC280
label_3a8840:
    if (ctx->pc == 0x3A8840u) {
        ctx->pc = 0x3A8840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A883Cu;
        // 0x3a8840: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8844u;
        goto label_3a8844;
    }
    ctx->pc = 0x3A883Cu;
    SET_GPR_U32(ctx, 31, 0x3A8844u);
    ctx->pc = 0x3A8840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A883Cu;
    // 0x3a8840: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC280u, 0x3A883Cu, 0x3A8844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8844u;
label_3a8844:
    // 0x3a8844: 0x121a00  sll         $v1, $s2, 8
    ctx->pc = 0x3a8844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
label_3a8848:
    // 0x3a8848: 0x26c5a428  addiu       $a1, $s6, -0x5BD8
    ctx->pc = 0x3a8848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294943784));
label_3a884c:
    // 0x3a884c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a884cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a8850:
    // 0x3a8850: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x3a8850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3a8854:
    // 0x3a8854: 0x3223003f  andi        $v1, $s1, 0x3F
    ctx->pc = 0x3a8854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)63);
label_3a8858:
    // 0x3a8858: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3a8858u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3a885c:
    // 0x3a885c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x3a885cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3a8860:
    // 0x3a8860: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_3a8864:
    if (ctx->pc == 0x3A8864u) {
        ctx->pc = 0x3A8864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8860u;
        // 0x3a8864: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8868u;
        goto label_3a8868;
    }
    ctx->pc = 0x3A8860u;
    {
        const bool branch_taken_0x3a8860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8860u;
        // 0x3a8864: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8860) {
            ctx->pc = 0x3A8898u;
            goto label_3a8898;
        }
    }
    ctx->pc = 0x3A8868u;
label_3a8868:
    // 0x3a8868: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3a8868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_3a886c:
    // 0x3a886c: 0xc0e5ebe  jal         func_397AF8
label_3a8870:
    if (ctx->pc == 0x3A8870u) {
        ctx->pc = 0x3A8870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A886Cu;
        // 0x3a8870: 0x2444e950  addiu       $a0, $v0, -0x16B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8874u;
        goto label_3a8874;
    }
    ctx->pc = 0x3A886Cu;
    SET_GPR_U32(ctx, 31, 0x3A8874u);
    ctx->pc = 0x3A8870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A886Cu;
    // 0x3a8870: 0x2444e950  addiu       $a0, $v0, -0x16B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3A886Cu, 0x3A8874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8874u;
label_3a8874:
    // 0x3a8874: 0x0  nop
    ctx->pc = 0x3a8874u;
    // NOP
label_3a8878:
    // 0x3a8878: 0x0  nop
    ctx->pc = 0x3a8878u;
    // NOP
label_3a887c:
    // 0x3a887c: 0x0  nop
    ctx->pc = 0x3a887cu;
    // NOP
label_3a8880:
    // 0x3a8880: 0x0  nop
    ctx->pc = 0x3a8880u;
    // NOP
label_3a8884:
    // 0x3a8884: 0x0  nop
    ctx->pc = 0x3a8884u;
    // NOP
label_3a8888:
    // 0x3a8888: 0x0  nop
    ctx->pc = 0x3a8888u;
    // NOP
label_3a888c:
    // 0x3a888c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_3a8890:
    if (ctx->pc == 0x3A8890u) {
        ctx->pc = 0x3A8894u;
        goto label_3a8894;
    }
    ctx->pc = 0x3A888Cu;
    {
        const bool branch_taken_0x3a888c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a888c) {
            ctx->pc = 0x3A8878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a8878;
        }
    }
    ctx->pc = 0x3A8894u;
label_3a8894:
    // 0x3a8894: 0x0  nop
    ctx->pc = 0x3a8894u;
    // NOP
label_3a8898:
    // 0x3a8898: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_3a889c:
    if (ctx->pc == 0x3A889Cu) {
        ctx->pc = 0x3A889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8898u;
        // 0x3a889c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A88A0u;
        goto label_3a88a0;
    }
    ctx->pc = 0x3A8898u;
    {
        const bool branch_taken_0x3a8898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8898u;
        // 0x3a889c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8898) {
            ctx->pc = 0x3A88C8u;
            goto label_3a88c8;
        }
    }
    ctx->pc = 0x3A88A0u;
label_3a88a0:
    // 0x3a88a0: 0xc0e5ebe  jal         func_397AF8
label_3a88a4:
    if (ctx->pc == 0x3A88A4u) {
        ctx->pc = 0x3A88A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A88A0u;
        // 0x3a88a4: 0x2444e988  addiu       $a0, $v0, -0x1678 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A88A8u;
        goto label_3a88a8;
    }
    ctx->pc = 0x3A88A0u;
    SET_GPR_U32(ctx, 31, 0x3A88A8u);
    ctx->pc = 0x3A88A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A88A0u;
    // 0x3a88a4: 0x2444e988  addiu       $a0, $v0, -0x1678 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3A88A0u, 0x3A88A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A88A8u;
label_3a88a8:
    // 0x3a88a8: 0x0  nop
    ctx->pc = 0x3a88a8u;
    // NOP
label_3a88ac:
    // 0x3a88ac: 0x0  nop
    ctx->pc = 0x3a88acu;
    // NOP
label_3a88b0:
    // 0x3a88b0: 0x0  nop
    ctx->pc = 0x3a88b0u;
    // NOP
label_3a88b4:
    // 0x3a88b4: 0x0  nop
    ctx->pc = 0x3a88b4u;
    // NOP
label_3a88b8:
    // 0x3a88b8: 0x0  nop
    ctx->pc = 0x3a88b8u;
    // NOP
label_3a88bc:
    // 0x3a88bc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_3a88c0:
    if (ctx->pc == 0x3A88C0u) {
        ctx->pc = 0x3A88C4u;
        goto label_3a88c4;
    }
    ctx->pc = 0x3A88BCu;
    {
        const bool branch_taken_0x3a88bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a88bc) {
            ctx->pc = 0x3A88A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a88a8;
        }
    }
    ctx->pc = 0x3A88C4u;
label_3a88c4:
    // 0x3a88c4: 0x0  nop
    ctx->pc = 0x3a88c4u;
    // NOP
label_3a88c8:
    // 0x3a88c8: 0xc0eadba  jal         func_3AB6E8
label_3a88cc:
    if (ctx->pc == 0x3A88CCu) {
        ctx->pc = 0x3A88D0u;
        goto label_3a88d0;
    }
    ctx->pc = 0x3A88C8u;
    SET_GPR_U32(ctx, 31, 0x3A88D0u);
    ctx->pc = 0x3AB6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB6E8u, 0x3A88C8u, 0x3A88D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A88D0u;
label_3a88d0:
    // 0x3a88d0: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x3a88d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_3a88d4:
    // 0x3a88d4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3a88d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3a88d8:
    // 0x3a88d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a88d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a88dc:
    // 0x3a88dc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_3a88e0:
    if (ctx->pc == 0x3A88E0u) {
        ctx->pc = 0x3A88E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A88DCu;
        // 0x3a88e0: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A88E4u;
        goto label_3a88e4;
    }
    ctx->pc = 0x3A88DCu;
    {
        const bool branch_taken_0x3a88dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A88E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A88DCu;
        // 0x3a88e0: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a88dc) {
            ctx->pc = 0x3A8910u;
            goto label_3a8910;
        }
    }
    ctx->pc = 0x3A88E4u;
label_3a88e4:
    // 0x3a88e4: 0xc0e5ebe  jal         func_397AF8
label_3a88e8:
    if (ctx->pc == 0x3A88E8u) {
        ctx->pc = 0x3A88E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A88E4u;
        // 0x3a88e8: 0x27c4e9b8  addiu       $a0, $fp, -0x1648 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A88ECu;
        goto label_3a88ec;
    }
    ctx->pc = 0x3A88E4u;
    SET_GPR_U32(ctx, 31, 0x3A88ECu);
    ctx->pc = 0x3A88E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A88E4u;
    // 0x3a88e8: 0x27c4e9b8  addiu       $a0, $fp, -0x1648 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3A88E4u, 0x3A88ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A88ECu;
label_3a88ec:
    // 0x3a88ec: 0x0  nop
    ctx->pc = 0x3a88ecu;
    // NOP
label_3a88f0:
    // 0x3a88f0: 0x0  nop
    ctx->pc = 0x3a88f0u;
    // NOP
label_3a88f4:
    // 0x3a88f4: 0x0  nop
    ctx->pc = 0x3a88f4u;
    // NOP
label_3a88f8:
    // 0x3a88f8: 0x0  nop
    ctx->pc = 0x3a88f8u;
    // NOP
label_3a88fc:
    // 0x3a88fc: 0x0  nop
    ctx->pc = 0x3a88fcu;
    // NOP
label_3a8900:
    // 0x3a8900: 0x0  nop
    ctx->pc = 0x3a8900u;
    // NOP
label_3a8904:
    // 0x3a8904: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_3a8908:
    if (ctx->pc == 0x3A8908u) {
        ctx->pc = 0x3A890Cu;
        goto label_3a890c;
    }
    ctx->pc = 0x3A8904u;
    {
        const bool branch_taken_0x3a8904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8904) {
            ctx->pc = 0x3A88F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a88f0;
        }
    }
    ctx->pc = 0x3A890Cu;
label_3a890c:
    // 0x3a890c: 0x0  nop
    ctx->pc = 0x3a890cu;
    // NOP
label_3a8910:
    // 0x3a8910: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3a8910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3a8914:
    // 0x3a8914: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x3a8914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_3a8918:
    // 0x3a8918: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3a8918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a891c:
    // 0x3a891c: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x3a891cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
label_3a8920:
    // 0x3a8920: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3a8920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_3a8924:
    // 0x3a8924: 0x40f809  jalr        $v0
label_3a8928:
    if (ctx->pc == 0x3A8928u) {
        ctx->pc = 0x3A8928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8924u;
        // 0x3a8928: 0x26314000  addiu       $s1, $s1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A892Cu;
        goto label_3a892c;
    }
    ctx->pc = 0x3A8924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A892Cu);
        ctx->pc = 0x3A8928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8924u;
        // 0x3a8928: 0x26314000  addiu       $s1, $s1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8924u, 0x3A892Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A892Cu;
label_3a892c:
    // 0x3a892c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3a892cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3a8930:
    // 0x3a8930: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3a8930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3a8934:
    // 0x3a8934: 0xc0eb1e2  jal         func_3AC788
label_3a8938:
    if (ctx->pc == 0x3A8938u) {
        ctx->pc = 0x3A8938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8934u;
        // 0x3a8938: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A893Cu;
        goto label_3a893c;
    }
    ctx->pc = 0x3A8934u;
    SET_GPR_U32(ctx, 31, 0x3A893Cu);
    ctx->pc = 0x3A8938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8934u;
    // 0x3a8938: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC788u, 0x3A8934u, 0x3A893Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A893Cu;
label_3a893c:
    // 0x3a893c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_3a8940:
    if (ctx->pc == 0x3A8940u) {
        ctx->pc = 0x3A8940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A893Cu;
        // 0x3a8940: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8944u;
        goto label_3a8944;
    }
    ctx->pc = 0x3A893Cu;
    {
        const bool branch_taken_0x3a893c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A893Cu;
        // 0x3a8940: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a893c) {
            ctx->pc = 0x3A8970u;
            goto label_3a8970;
        }
    }
    ctx->pc = 0x3A8944u;
label_3a8944:
    // 0x3a8944: 0xc0e5ebe  jal         func_397AF8
label_3a8948:
    if (ctx->pc == 0x3A8948u) {
        ctx->pc = 0x3A8948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8944u;
        // 0x3a8948: 0x26e4e9f0  addiu       $a0, $s7, -0x1610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A894Cu;
        goto label_3a894c;
    }
    ctx->pc = 0x3A8944u;
    SET_GPR_U32(ctx, 31, 0x3A894Cu);
    ctx->pc = 0x3A8948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8944u;
    // 0x3a8948: 0x26e4e9f0  addiu       $a0, $s7, -0x1610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3A8944u, 0x3A894Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A894Cu;
label_3a894c:
    // 0x3a894c: 0x0  nop
    ctx->pc = 0x3a894cu;
    // NOP
label_3a8950:
    // 0x3a8950: 0x0  nop
    ctx->pc = 0x3a8950u;
    // NOP
label_3a8954:
    // 0x3a8954: 0x0  nop
    ctx->pc = 0x3a8954u;
    // NOP
label_3a8958:
    // 0x3a8958: 0x0  nop
    ctx->pc = 0x3a8958u;
    // NOP
label_3a895c:
    // 0x3a895c: 0x0  nop
    ctx->pc = 0x3a895cu;
    // NOP
label_3a8960:
    // 0x3a8960: 0x0  nop
    ctx->pc = 0x3a8960u;
    // NOP
label_3a8964:
    // 0x3a8964: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_3a8968:
    if (ctx->pc == 0x3A8968u) {
        ctx->pc = 0x3A896Cu;
        goto label_3a896c;
    }
    ctx->pc = 0x3A8964u;
    {
        const bool branch_taken_0x3a8964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8964) {
            ctx->pc = 0x3A8950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a8950;
        }
    }
    ctx->pc = 0x3A896Cu;
label_3a896c:
    // 0x3a896c: 0x0  nop
    ctx->pc = 0x3a896cu;
    // NOP
label_3a8970:
    // 0x3a8970: 0x8ea2a0c8  lw          $v0, -0x5F38($s5)
    ctx->pc = 0x3a8970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294942920)));
label_3a8974:
    // 0x3a8974: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3a8974u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3a8978:
    // 0x3a8978: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
label_3a897c:
    if (ctx->pc == 0x3A897Cu) {
        ctx->pc = 0x3A897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8978u;
        // 0x3a897c: 0x2682a128  addiu       $v0, $s4, -0x5ED8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294943016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8980u;
        goto label_3a8980;
    }
    ctx->pc = 0x3A8978u;
    {
        const bool branch_taken_0x3a8978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8978u;
        // 0x3a897c: 0x2682a128  addiu       $v0, $s4, -0x5ED8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294943016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8978) {
            ctx->pc = 0x3A87F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a87f0;
        }
    }
    ctx->pc = 0x3A8980u;
label_3a8980:
    // 0x3a8980: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a8980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a8984:
    // 0x3a8984: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a8984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3a8988:
    // 0x3a8988: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a8988u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a898c:
    // 0x3a898c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a898cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3a8990:
    // 0x3a8990: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3a8990u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3a8994:
    // 0x3a8994: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3a8994u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3a8998:
    // 0x3a8998: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3a8998u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3a899c:
    // 0x3a899c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x3a899cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3a89a0:
    // 0x3a89a0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x3a89a0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3a89a4:
    // 0x3a89a4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x3a89a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_3a89a8:
    // 0x3a89a8: 0x3e00008  jr          $ra
label_3a89ac:
    if (ctx->pc == 0x3A89ACu) {
        ctx->pc = 0x3A89ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A89A8u;
        // 0x3a89ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A89B0u;
        goto label_fallthrough_0x3a89a8;
    }
    ctx->pc = 0x3A89A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A89ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A89A8u;
        // 0x3a89ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A89A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a89a8:
    ctx->pc = 0x3A89B0u;
}
