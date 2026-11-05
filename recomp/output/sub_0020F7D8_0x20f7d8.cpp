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

// Function: sub_0020F7D8
// Address: 0x20f7d8 - 0x20f900
void sub_0020F7D8_0x20f7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F7D8_0x20f7d8");
#endif

    switch (ctx->pc) {
        case 0x20f7d8u: goto label_20f7d8;
        case 0x20f7dcu: goto label_20f7dc;
        case 0x20f7e0u: goto label_20f7e0;
        case 0x20f7e4u: goto label_20f7e4;
        case 0x20f7e8u: goto label_20f7e8;
        case 0x20f7ecu: goto label_20f7ec;
        case 0x20f7f0u: goto label_20f7f0;
        case 0x20f7f4u: goto label_20f7f4;
        case 0x20f7f8u: goto label_20f7f8;
        case 0x20f7fcu: goto label_20f7fc;
        case 0x20f800u: goto label_20f800;
        case 0x20f804u: goto label_20f804;
        case 0x20f808u: goto label_20f808;
        case 0x20f80cu: goto label_20f80c;
        case 0x20f810u: goto label_20f810;
        case 0x20f814u: goto label_20f814;
        case 0x20f818u: goto label_20f818;
        case 0x20f81cu: goto label_20f81c;
        case 0x20f820u: goto label_20f820;
        case 0x20f824u: goto label_20f824;
        case 0x20f828u: goto label_20f828;
        case 0x20f82cu: goto label_20f82c;
        case 0x20f830u: goto label_20f830;
        case 0x20f834u: goto label_20f834;
        case 0x20f838u: goto label_20f838;
        case 0x20f83cu: goto label_20f83c;
        case 0x20f840u: goto label_20f840;
        case 0x20f844u: goto label_20f844;
        case 0x20f848u: goto label_20f848;
        case 0x20f84cu: goto label_20f84c;
        case 0x20f850u: goto label_20f850;
        case 0x20f854u: goto label_20f854;
        case 0x20f858u: goto label_20f858;
        case 0x20f85cu: goto label_20f85c;
        case 0x20f860u: goto label_20f860;
        case 0x20f864u: goto label_20f864;
        case 0x20f868u: goto label_20f868;
        case 0x20f86cu: goto label_20f86c;
        case 0x20f870u: goto label_20f870;
        case 0x20f874u: goto label_20f874;
        case 0x20f878u: goto label_20f878;
        case 0x20f87cu: goto label_20f87c;
        case 0x20f880u: goto label_20f880;
        case 0x20f884u: goto label_20f884;
        case 0x20f888u: goto label_20f888;
        case 0x20f88cu: goto label_20f88c;
        case 0x20f890u: goto label_20f890;
        case 0x20f894u: goto label_20f894;
        case 0x20f898u: goto label_20f898;
        case 0x20f89cu: goto label_20f89c;
        case 0x20f8a0u: goto label_20f8a0;
        case 0x20f8a4u: goto label_20f8a4;
        case 0x20f8a8u: goto label_20f8a8;
        case 0x20f8acu: goto label_20f8ac;
        case 0x20f8b0u: goto label_20f8b0;
        case 0x20f8b4u: goto label_20f8b4;
        case 0x20f8b8u: goto label_20f8b8;
        case 0x20f8bcu: goto label_20f8bc;
        case 0x20f8c0u: goto label_20f8c0;
        case 0x20f8c4u: goto label_20f8c4;
        case 0x20f8c8u: goto label_20f8c8;
        case 0x20f8ccu: goto label_20f8cc;
        case 0x20f8d0u: goto label_20f8d0;
        case 0x20f8d4u: goto label_20f8d4;
        case 0x20f8d8u: goto label_20f8d8;
        case 0x20f8dcu: goto label_20f8dc;
        case 0x20f8e0u: goto label_20f8e0;
        case 0x20f8e4u: goto label_20f8e4;
        case 0x20f8e8u: goto label_20f8e8;
        case 0x20f8ecu: goto label_20f8ec;
        case 0x20f8f0u: goto label_20f8f0;
        case 0x20f8f4u: goto label_20f8f4;
        case 0x20f8f8u: goto label_20f8f8;
        case 0x20f8fcu: goto label_20f8fc;
        default: break;
    }

    ctx->pc = 0x20f7d8u;

label_20f7d8:
    // 0x20f7d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20f7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_20f7dc:
    // 0x20f7dc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x20f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_20f7e0:
    // 0x20f7e0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x20f7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_20f7e4:
    // 0x20f7e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20f7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_20f7e8:
    // 0x20f7e8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x20f7e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20f7ec:
    // 0x20f7ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20f7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_20f7f0:
    // 0x20f7f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20f7f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20f7f4:
    // 0x20f7f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20f7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_20f7f8:
    // 0x20f7f8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x20f7f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20f7fc:
    // 0x20f7fc: 0x8c4391f0  lw          $v1, -0x6E10($v0)
    ctx->pc = 0x20f7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939120)));
label_20f800:
    // 0x20f800: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x20f800u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20f804:
    // 0x20f804: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20f804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20f808:
    // 0x20f808: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20f808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f80c:
    // 0x20f80c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x20f80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_20f810:
    // 0x20f810: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_20f814:
    if (ctx->pc == 0x20F814u) {
        ctx->pc = 0x20F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F810u;
        // 0x20f814: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F818u;
        goto label_20f818;
    }
    ctx->pc = 0x20F810u;
    {
        const bool branch_taken_0x20f810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F810u;
        // 0x20f814: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f810) {
            ctx->pc = 0x20F834u;
            goto label_20f834;
        }
    }
    ctx->pc = 0x20F818u;
label_20f818:
    // 0x20f818: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x20f818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_20f81c:
    // 0x20f81c: 0x8c4391ec  lw          $v1, -0x6E14($v0)
    ctx->pc = 0x20f81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939116)));
label_20f820:
    // 0x20f820: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20f820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20f824:
    // 0x20f824: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x20f824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_20f828:
    // 0x20f828: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x20f828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
label_20f82c:
    // 0x20f82c: 0x10000002  b           . + 4 + (0x2 << 2)
label_20f830:
    if (ctx->pc == 0x20F830u) {
        ctx->pc = 0x20F830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F82Cu;
        // 0x20f830: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F834u;
        goto label_20f834;
    }
    ctx->pc = 0x20F82Cu;
    {
        const bool branch_taken_0x20f82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F82Cu;
        // 0x20f830: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f82c) {
            ctx->pc = 0x20F838u;
            goto label_20f838;
        }
    }
    ctx->pc = 0x20F834u;
label_20f834:
    // 0x20f834: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x20f834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_20f838:
    // 0x20f838: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_20f83c:
    if (ctx->pc == 0x20F83Cu) {
        ctx->pc = 0x20F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F838u;
        // 0x20f83c: 0x8e8291f0  lw          $v0, -0x6E10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294939120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F840u;
        goto label_20f840;
    }
    ctx->pc = 0x20F838u;
    {
        const bool branch_taken_0x20f838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F838u;
        // 0x20f83c: 0x8e8291f0  lw          $v0, -0x6E10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294939120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f838) {
            ctx->pc = 0x20F8D8u;
            goto label_20f8d8;
        }
    }
    ctx->pc = 0x20F840u;
label_20f840:
    // 0x20f840: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_20f844:
    if (ctx->pc == 0x20F844u) {
        ctx->pc = 0x20F844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F840u;
        // 0x20f844: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F848u;
        goto label_20f848;
    }
    ctx->pc = 0x20F840u;
    {
        const bool branch_taken_0x20f840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F840u;
        // 0x20f844: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f840) {
            ctx->pc = 0x20F8D8u;
            goto label_20f8d8;
        }
    }
    ctx->pc = 0x20F848u;
label_20f848:
    // 0x20f848: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x20f848u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
label_20f84c:
    // 0x20f84c: 0x8ea291ec  lw          $v0, -0x6E14($s5)
    ctx->pc = 0x20f84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294939116)));
label_20f850:
    // 0x20f850: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x20f850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_20f854:
    // 0x20f854: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20f854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20f858:
    // 0x20f858: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x20f858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20f85c:
    // 0x20f85c: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x20f85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_20f860:
    // 0x20f860: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x20f860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
label_20f864:
    // 0x20f864: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_20f868:
    if (ctx->pc == 0x20F868u) {
        ctx->pc = 0x20F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F864u;
        // 0x20f868: 0x8e8291f0  lw          $v0, -0x6E10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294939120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F86Cu;
        goto label_20f86c;
    }
    ctx->pc = 0x20F864u;
    {
        const bool branch_taken_0x20f864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F864u;
        // 0x20f868: 0x8e8291f0  lw          $v0, -0x6E10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294939120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f864) {
            ctx->pc = 0x20F8C8u;
            goto label_20f8c8;
        }
    }
    ctx->pc = 0x20F86Cu;
label_20f86c:
    // 0x20f86c: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x20f86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_20f870:
    // 0x20f870: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_20f874:
    if (ctx->pc == 0x20F874u) {
        ctx->pc = 0x20F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F870u;
        // 0x20f874: 0x8e64010c  lw          $a0, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F878u;
        goto label_20f878;
    }
    ctx->pc = 0x20F870u;
    {
        const bool branch_taken_0x20f870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F870u;
        // 0x20f874: 0x8e64010c  lw          $a0, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f870) {
            ctx->pc = 0x20F8A0u;
            goto label_20f8a0;
        }
    }
    ctx->pc = 0x20F878u;
label_20f878:
    // 0x20f878: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x20f878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_20f87c:
    // 0x20f87c: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x20f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_20f880:
    // 0x20f880: 0x40f809  jalr        $v0
label_20f884:
    if (ctx->pc == 0x20F884u) {
        ctx->pc = 0x20F884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F880u;
        // 0x20f884: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F888u;
        goto label_20f888;
    }
    ctx->pc = 0x20F880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F888u);
        ctx->pc = 0x20F884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F880u;
        // 0x20f884: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F880u, 0x20F888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F888u;
label_20f888:
    // 0x20f888: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_20f88c:
    if (ctx->pc == 0x20F88Cu) {
        ctx->pc = 0x20F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F888u;
        // 0x20f88c: 0x8e8291f0  lw          $v0, -0x6E10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294939120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F890u;
        goto label_20f890;
    }
    ctx->pc = 0x20F888u;
    {
        const bool branch_taken_0x20f888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F888u;
        // 0x20f88c: 0x8e8291f0  lw          $v0, -0x6E10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294939120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f888) {
            ctx->pc = 0x20F8C8u;
            goto label_20f8c8;
        }
    }
    ctx->pc = 0x20F890u;
label_20f890:
    // 0x20f890: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20f890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20f894:
    // 0x20f894: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20f894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_20f898:
    // 0x20f898: 0x1000000a  b           . + 4 + (0xA << 2)
label_20f89c:
    if (ctx->pc == 0x20F89Cu) {
        ctx->pc = 0x20F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F898u;
        // 0x20f89c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F8A0u;
        goto label_20f8a0;
    }
    ctx->pc = 0x20F898u;
    {
        const bool branch_taken_0x20f898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F898u;
        // 0x20f89c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f898) {
            ctx->pc = 0x20F8C4u;
            goto label_20f8c4;
        }
    }
    ctx->pc = 0x20F8A0u;
label_20f8a0:
    // 0x20f8a0: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x20f8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_20f8a4:
    // 0x20f8a4: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x20f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_20f8a8:
    // 0x20f8a8: 0x40f809  jalr        $v0
label_20f8ac:
    if (ctx->pc == 0x20F8ACu) {
        ctx->pc = 0x20F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8A8u;
        // 0x20f8ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F8B0u;
        goto label_20f8b0;
    }
    ctx->pc = 0x20F8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F8B0u);
        ctx->pc = 0x20F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8A8u;
        // 0x20f8ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F8A8u, 0x20F8B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F8B0u;
label_20f8b0:
    // 0x20f8b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_20f8b4:
    if (ctx->pc == 0x20F8B4u) {
        ctx->pc = 0x20F8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8B0u;
        // 0x20f8b4: 0x8e8291f0  lw          $v0, -0x6E10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294939120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F8B8u;
        goto label_20f8b8;
    }
    ctx->pc = 0x20F8B0u;
    {
        const bool branch_taken_0x20f8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8B0u;
        // 0x20f8b4: 0x8e8291f0  lw          $v0, -0x6E10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294939120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f8b0) {
            ctx->pc = 0x20F8C8u;
            goto label_20f8c8;
        }
    }
    ctx->pc = 0x20F8B8u;
label_20f8b8:
    // 0x20f8b8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x20f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20f8bc:
    // 0x20f8bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20f8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_20f8c0:
    // 0x20f8c0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x20f8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_20f8c4:
    // 0x20f8c4: 0x8e8291f0  lw          $v0, -0x6E10($s4)
    ctx->pc = 0x20f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294939120)));
label_20f8c8:
    // 0x20f8c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20f8c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20f8cc:
    // 0x20f8cc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x20f8ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20f8d0:
    // 0x20f8d0: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_20f8d4:
    if (ctx->pc == 0x20F8D4u) {
        ctx->pc = 0x20F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8D0u;
        // 0x20f8d4: 0x8ea291ec  lw          $v0, -0x6E14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294939116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F8D8u;
        goto label_20f8d8;
    }
    ctx->pc = 0x20F8D0u;
    {
        const bool branch_taken_0x20f8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8D0u;
        // 0x20f8d4: 0x8ea291ec  lw          $v0, -0x6E14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294939116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f8d0) {
            ctx->pc = 0x20F850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f850;
        }
    }
    ctx->pc = 0x20F8D8u;
label_20f8d8:
    // 0x20f8d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20f8d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20f8dc:
    // 0x20f8dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20f8dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20f8e0:
    // 0x20f8e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20f8e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20f8e4:
    // 0x20f8e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20f8e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_20f8e8:
    // 0x20f8e8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x20f8e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20f8ec:
    // 0x20f8ec: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x20f8ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_20f8f0:
    // 0x20f8f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20f8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_20f8f4:
    // 0x20f8f4: 0x3e00008  jr          $ra
label_20f8f8:
    if (ctx->pc == 0x20F8F8u) {
        ctx->pc = 0x20F8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8F4u;
        // 0x20f8f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F8FCu;
        goto label_20f8fc;
    }
    ctx->pc = 0x20F8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8F4u;
        // 0x20f8f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F8F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F8FCu;
label_20f8fc:
    // 0x20f8fc: 0x0  nop
    ctx->pc = 0x20f8fcu;
    // NOP
    ctx->pc = 0x20f900u;
}
