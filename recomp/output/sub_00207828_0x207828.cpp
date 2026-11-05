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

// Function: sub_00207828
// Address: 0x207828 - 0x2079d0
void sub_00207828_0x207828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207828_0x207828");
#endif

    switch (ctx->pc) {
        case 0x207828u: goto label_207828;
        case 0x20782cu: goto label_20782c;
        case 0x207830u: goto label_207830;
        case 0x207834u: goto label_207834;
        case 0x207838u: goto label_207838;
        case 0x20783cu: goto label_20783c;
        case 0x207840u: goto label_207840;
        case 0x207844u: goto label_207844;
        case 0x207848u: goto label_207848;
        case 0x20784cu: goto label_20784c;
        case 0x207850u: goto label_207850;
        case 0x207854u: goto label_207854;
        case 0x207858u: goto label_207858;
        case 0x20785cu: goto label_20785c;
        case 0x207860u: goto label_207860;
        case 0x207864u: goto label_207864;
        case 0x207868u: goto label_207868;
        case 0x20786cu: goto label_20786c;
        case 0x207870u: goto label_207870;
        case 0x207874u: goto label_207874;
        case 0x207878u: goto label_207878;
        case 0x20787cu: goto label_20787c;
        case 0x207880u: goto label_207880;
        case 0x207884u: goto label_207884;
        case 0x207888u: goto label_207888;
        case 0x20788cu: goto label_20788c;
        case 0x207890u: goto label_207890;
        case 0x207894u: goto label_207894;
        case 0x207898u: goto label_207898;
        case 0x20789cu: goto label_20789c;
        case 0x2078a0u: goto label_2078a0;
        case 0x2078a4u: goto label_2078a4;
        case 0x2078a8u: goto label_2078a8;
        case 0x2078acu: goto label_2078ac;
        case 0x2078b0u: goto label_2078b0;
        case 0x2078b4u: goto label_2078b4;
        case 0x2078b8u: goto label_2078b8;
        case 0x2078bcu: goto label_2078bc;
        case 0x2078c0u: goto label_2078c0;
        case 0x2078c4u: goto label_2078c4;
        case 0x2078c8u: goto label_2078c8;
        case 0x2078ccu: goto label_2078cc;
        case 0x2078d0u: goto label_2078d0;
        case 0x2078d4u: goto label_2078d4;
        case 0x2078d8u: goto label_2078d8;
        case 0x2078dcu: goto label_2078dc;
        case 0x2078e0u: goto label_2078e0;
        case 0x2078e4u: goto label_2078e4;
        case 0x2078e8u: goto label_2078e8;
        case 0x2078ecu: goto label_2078ec;
        case 0x2078f0u: goto label_2078f0;
        case 0x2078f4u: goto label_2078f4;
        case 0x2078f8u: goto label_2078f8;
        case 0x2078fcu: goto label_2078fc;
        case 0x207900u: goto label_207900;
        case 0x207904u: goto label_207904;
        case 0x207908u: goto label_207908;
        case 0x20790cu: goto label_20790c;
        case 0x207910u: goto label_207910;
        case 0x207914u: goto label_207914;
        case 0x207918u: goto label_207918;
        case 0x20791cu: goto label_20791c;
        case 0x207920u: goto label_207920;
        case 0x207924u: goto label_207924;
        case 0x207928u: goto label_207928;
        case 0x20792cu: goto label_20792c;
        case 0x207930u: goto label_207930;
        case 0x207934u: goto label_207934;
        case 0x207938u: goto label_207938;
        case 0x20793cu: goto label_20793c;
        case 0x207940u: goto label_207940;
        case 0x207944u: goto label_207944;
        case 0x207948u: goto label_207948;
        case 0x20794cu: goto label_20794c;
        case 0x207950u: goto label_207950;
        case 0x207954u: goto label_207954;
        case 0x207958u: goto label_207958;
        case 0x20795cu: goto label_20795c;
        case 0x207960u: goto label_207960;
        case 0x207964u: goto label_207964;
        case 0x207968u: goto label_207968;
        case 0x20796cu: goto label_20796c;
        case 0x207970u: goto label_207970;
        case 0x207974u: goto label_207974;
        case 0x207978u: goto label_207978;
        case 0x20797cu: goto label_20797c;
        case 0x207980u: goto label_207980;
        case 0x207984u: goto label_207984;
        case 0x207988u: goto label_207988;
        case 0x20798cu: goto label_20798c;
        case 0x207990u: goto label_207990;
        case 0x207994u: goto label_207994;
        case 0x207998u: goto label_207998;
        case 0x20799cu: goto label_20799c;
        case 0x2079a0u: goto label_2079a0;
        case 0x2079a4u: goto label_2079a4;
        case 0x2079a8u: goto label_2079a8;
        case 0x2079acu: goto label_2079ac;
        case 0x2079b0u: goto label_2079b0;
        case 0x2079b4u: goto label_2079b4;
        case 0x2079b8u: goto label_2079b8;
        case 0x2079bcu: goto label_2079bc;
        case 0x2079c0u: goto label_2079c0;
        case 0x2079c4u: goto label_2079c4;
        case 0x2079c8u: goto label_2079c8;
        case 0x2079ccu: goto label_2079cc;
        default: break;
    }

    ctx->pc = 0x207828u;

label_207828:
    // 0x207828: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x207828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_20782c:
    // 0x20782c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x20782cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_207830:
    // 0x207830: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x207830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_207834:
    // 0x207834: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x207834u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_207838:
    // 0x207838: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x207838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_20783c:
    // 0x20783c: 0x26820018  addiu       $v0, $s4, 0x18
    ctx->pc = 0x20783cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
label_207840:
    // 0x207840: 0x26830008  addiu       $v1, $s4, 0x8
    ctx->pc = 0x207840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_207844:
    // 0x207844: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x207844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_207848:
    // 0x207848: 0x2696338c  addiu       $s6, $s4, 0x338C
    ctx->pc = 0x207848u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 13196));
label_20784c:
    // 0x20784c: 0x268233b0  addiu       $v0, $s4, 0x33B0
    ctx->pc = 0x20784cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 13232));
label_207850:
    // 0x207850: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x207850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_207854:
    // 0x207854: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x207854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_207858:
    // 0x207858: 0x2697001c  addiu       $s7, $s4, 0x1C
    ctx->pc = 0x207858u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
label_20785c:
    // 0x20785c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x20785cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_207860:
    // 0x207860: 0x269e3384  addiu       $fp, $s4, 0x3384
    ctx->pc = 0x207860u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 13188));
label_207864:
    // 0x207864: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x207864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_207868:
    // 0x207868: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x207868u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20786c:
    // 0x20786c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x20786cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_207870:
    // 0x207870: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x207870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_207874:
    // 0x207874: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x207874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_207878:
    // 0x207878: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x207878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_20787c:
    // 0x20787c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x20787cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_207880:
    // 0x207880: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x207880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_207884:
    // 0x207884: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x207884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_207888:
    // 0x207888: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x207888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20788c:
    // 0x20788c: 0x0  nop
    ctx->pc = 0x20788cu;
    // NOP
label_207890:
    // 0x207890: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x207890u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_207894:
    // 0x207894: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x207894u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_207898:
    // 0x207898: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x207898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_20789c:
    // 0x20789c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20789cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2078a0:
    // 0x2078a0: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
label_2078a4:
    if (ctx->pc == 0x2078A4u) {
        ctx->pc = 0x2078A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2078A0u;
        // 0x2078a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2078A8u;
        goto label_2078a8;
    }
    ctx->pc = 0x2078A0u;
    {
        const bool branch_taken_0x2078a0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2078A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2078A0u;
        // 0x2078a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2078a0) {
            ctx->pc = 0x2078E8u;
            goto label_2078e8;
        }
    }
    ctx->pc = 0x2078A8u;
label_2078a8:
    // 0x2078a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2078a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2078ac:
    // 0x2078ac: 0x2d38821  addu        $s1, $s6, $s3
    ctx->pc = 0x2078acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
label_2078b0:
    // 0x2078b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2078b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2078b4:
    // 0x2078b4: 0x0  nop
    ctx->pc = 0x2078b4u;
    // NOP
label_2078b8:
    // 0x2078b8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2078b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_2078bc:
    // 0x2078bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2078bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2078c0:
    // 0x2078c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2078c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2078c4:
    // 0x2078c4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2078c8:
    if (ctx->pc == 0x2078C8u) {
        ctx->pc = 0x2078C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2078C4u;
        // 0x2078c8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2078CCu;
        goto label_2078cc;
    }
    ctx->pc = 0x2078C4u;
    {
        const bool branch_taken_0x2078c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2078c4) {
            ctx->pc = 0x2078C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2078C4u;
            // 0x2078c8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2078D8u;
            goto label_2078d8;
        }
    }
    ctx->pc = 0x2078CCu;
label_2078cc:
    // 0x2078cc: 0xc0f528a  jal         func_3D4A28
label_2078d0:
    if (ctx->pc == 0x2078D0u) {
        ctx->pc = 0x2078D4u;
        goto label_2078d4;
    }
    ctx->pc = 0x2078CCu;
    SET_GPR_U32(ctx, 31, 0x2078D4u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2078CCu, 0x2078D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2078D4u;
label_2078d4:
    // 0x2078d4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2078d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2078d8:
    // 0x2078d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2078d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2078dc:
    // 0x2078dc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2078dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2078e0:
    // 0x2078e0: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
label_2078e4:
    if (ctx->pc == 0x2078E4u) {
        ctx->pc = 0x2078E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2078E0u;
        // 0x2078e4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2078E8u;
        goto label_2078e8;
    }
    ctx->pc = 0x2078E0u;
    {
        const bool branch_taken_0x2078e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2078e0) {
            ctx->pc = 0x2078E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2078E0u;
            // 0x2078e4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2078B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2078b8;
        }
    }
    ctx->pc = 0x2078E8u;
label_2078e8:
    // 0x2078e8: 0x2d31021  addu        $v0, $s6, $s3
    ctx->pc = 0x2078e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
label_2078ec:
    // 0x2078ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2078ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2078f0:
    // 0x2078f0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2078f4:
    if (ctx->pc == 0x2078F4u) {
        ctx->pc = 0x2078F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2078F0u;
        // 0x2078f4: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2078F8u;
        goto label_2078f8;
    }
    ctx->pc = 0x2078F0u;
    {
        const bool branch_taken_0x2078f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2078F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2078F0u;
        // 0x2078f4: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2078f0) {
            ctx->pc = 0x207904u;
            goto label_207904;
        }
    }
    ctx->pc = 0x2078F8u;
label_2078f8:
    // 0x2078f8: 0xc0f528a  jal         func_3D4A28
label_2078fc:
    if (ctx->pc == 0x2078FCu) {
        ctx->pc = 0x207900u;
        goto label_207900;
    }
    ctx->pc = 0x2078F8u;
    SET_GPR_U32(ctx, 31, 0x207900u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2078F8u, 0x207900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207900u;
label_207900:
    // 0x207900: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x207900u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_207904:
    // 0x207904: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x207904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_207908:
    // 0x207908: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_20790c:
    if (ctx->pc == 0x20790Cu) {
        ctx->pc = 0x20790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207908u;
        // 0x20790c: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207910u;
        goto label_207910;
    }
    ctx->pc = 0x207908u;
    {
        const bool branch_taken_0x207908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207908u;
        // 0x20790c: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207908) {
            ctx->pc = 0x207890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207890;
        }
    }
    ctx->pc = 0x207910u;
label_207910:
    // 0x207910: 0x8fb10000  lw          $s1, 0x0($sp)
    ctx->pc = 0x207910u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_207914:
    // 0x207914: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x207914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207918:
    // 0x207918: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x207918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_20791c:
    // 0x20791c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x20791cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_207920:
    // 0x207920: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x207920u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_207924:
    // 0x207924: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x207924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_207928:
    // 0x207928: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_20792c:
    if (ctx->pc == 0x20792Cu) {
        ctx->pc = 0x20792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207928u;
        // 0x20792c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207930u;
        goto label_207930;
    }
    ctx->pc = 0x207928u;
    {
        const bool branch_taken_0x207928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x207928) {
            ctx->pc = 0x20792Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207928u;
            // 0x20792c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207944u;
            goto label_207944;
        }
    }
    ctx->pc = 0x207930u;
label_207930:
    // 0x207930: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x207930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_207934:
    // 0x207934: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x207934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_207938:
    // 0x207938: 0x40f809  jalr        $v0
label_20793c:
    if (ctx->pc == 0x20793Cu) {
        ctx->pc = 0x20793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207938u;
        // 0x20793c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207940u;
        goto label_207940;
    }
    ctx->pc = 0x207938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207940u);
        ctx->pc = 0x20793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207938u;
        // 0x20793c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207938u, 0x207940u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207940u;
label_207940:
    // 0x207940: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x207940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_207944:
    // 0x207944: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x207944u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_207948:
    // 0x207948: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_20794c:
    if (ctx->pc == 0x20794Cu) {
        ctx->pc = 0x20794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207948u;
        // 0x20794c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207950u;
        goto label_207950;
    }
    ctx->pc = 0x207948u;
    {
        const bool branch_taken_0x207948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207948u;
        // 0x20794c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207948) {
            ctx->pc = 0x207918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207918;
        }
    }
    ctx->pc = 0x207950u;
label_207950:
    // 0x207950: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x207950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_207954:
    // 0x207954: 0xc0d7412  jal         func_35D048
label_207958:
    if (ctx->pc == 0x207958u) {
        ctx->pc = 0x207958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207954u;
        // 0x207958: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20795Cu;
        goto label_20795c;
    }
    ctx->pc = 0x207954u;
    SET_GPR_U32(ctx, 31, 0x20795Cu);
    ctx->pc = 0x207958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207954u;
    // 0x207958: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x207954u, 0x20795Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20795Cu;
label_20795c:
    // 0x20795c: 0x12e0000a  beqz        $s7, . + 4 + (0xA << 2)
label_207960:
    if (ctx->pc == 0x207960u) {
        ctx->pc = 0x207960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20795Cu;
        // 0x207960: 0x2690175c  addiu       $s0, $s4, 0x175C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 5980));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207964u;
        goto label_207964;
    }
    ctx->pc = 0x20795Cu;
    {
        const bool branch_taken_0x20795c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x207960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20795Cu;
        // 0x207960: 0x2690175c  addiu       $s0, $s4, 0x175C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 5980));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20795c) {
            ctx->pc = 0x207988u;
            goto label_207988;
        }
    }
    ctx->pc = 0x207964u;
label_207964:
    // 0x207964: 0x12f00009  beq         $s7, $s0, . + 4 + (0x9 << 2)
label_207968:
    if (ctx->pc == 0x207968u) {
        ctx->pc = 0x207968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207964u;
        // 0x207968: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20796Cu;
        goto label_20796c;
    }
    ctx->pc = 0x207964u;
    {
        const bool branch_taken_0x207964 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 16));
        ctx->pc = 0x207968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207964u;
        // 0x207968: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207964) {
            ctx->pc = 0x20798Cu;
            goto label_20798c;
        }
    }
    ctx->pc = 0x20796Cu;
label_20796c:
    // 0x20796c: 0x2610ff08  addiu       $s0, $s0, -0xF8
    ctx->pc = 0x20796cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967048));
label_207970:
    // 0x207970: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x207970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_207974:
    // 0x207974: 0xc0d7412  jal         func_35D048
label_207978:
    if (ctx->pc == 0x207978u) {
        ctx->pc = 0x207978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207974u;
        // 0x207978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20797Cu;
        goto label_20797c;
    }
    ctx->pc = 0x207974u;
    SET_GPR_U32(ctx, 31, 0x20797Cu);
    ctx->pc = 0x207978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207974u;
    // 0x207978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x207974u, 0x20797Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20797Cu;
label_20797c:
    // 0x20797c: 0x0  nop
    ctx->pc = 0x20797cu;
    // NOP
label_207980:
    // 0x207980: 0x16f0fffb  bne         $s7, $s0, . + 4 + (-0x5 << 2)
label_207984:
    if (ctx->pc == 0x207984u) {
        ctx->pc = 0x207984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207980u;
        // 0x207984: 0x2610ff08  addiu       $s0, $s0, -0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207988u;
        goto label_207988;
    }
    ctx->pc = 0x207980u;
    {
        const bool branch_taken_0x207980 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 16));
        ctx->pc = 0x207984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207980u;
        // 0x207984: 0x2610ff08  addiu       $s0, $s0, -0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207980) {
            ctx->pc = 0x207970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207970;
        }
    }
    ctx->pc = 0x207988u;
label_207988:
    // 0x207988: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x207988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_20798c:
    // 0x20798c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_207990:
    if (ctx->pc == 0x207990u) {
        ctx->pc = 0x207990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20798Cu;
        // 0x207990: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207994u;
        goto label_207994;
    }
    ctx->pc = 0x20798Cu;
    {
        const bool branch_taken_0x20798c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20798Cu;
        // 0x207990: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20798c) {
            ctx->pc = 0x2079A0u;
            goto label_2079a0;
        }
    }
    ctx->pc = 0x207994u;
label_207994:
    // 0x207994: 0xc0f5222  jal         func_3D4888
label_207998:
    if (ctx->pc == 0x207998u) {
        ctx->pc = 0x207998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207994u;
        // 0x207998: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20799Cu;
        goto label_20799c;
    }
    ctx->pc = 0x207994u;
    SET_GPR_U32(ctx, 31, 0x20799Cu);
    ctx->pc = 0x207998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207994u;
    // 0x207998: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x207994u, 0x20799Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20799Cu;
label_20799c:
    // 0x20799c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20799cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2079a0:
    // 0x2079a0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2079a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2079a4:
    // 0x2079a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2079a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2079a8:
    // 0x2079a8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2079a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2079ac:
    // 0x2079ac: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2079acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2079b0:
    // 0x2079b0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2079b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2079b4:
    // 0x2079b4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2079b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2079b8:
    // 0x2079b8: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2079b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2079bc:
    // 0x2079bc: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2079bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2079c0:
    // 0x2079c0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2079c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_2079c4:
    // 0x2079c4: 0x3e00008  jr          $ra
label_2079c8:
    if (ctx->pc == 0x2079C8u) {
        ctx->pc = 0x2079C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2079C4u;
        // 0x2079c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2079CCu;
        goto label_2079cc;
    }
    ctx->pc = 0x2079C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2079C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2079C4u;
        // 0x2079c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2079C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2079CCu;
label_2079cc:
    // 0x2079cc: 0x0  nop
    ctx->pc = 0x2079ccu;
    // NOP
    ctx->pc = 0x2079d0u;
}
