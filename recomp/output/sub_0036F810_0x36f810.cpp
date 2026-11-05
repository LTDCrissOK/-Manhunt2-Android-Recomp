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

// Function: sub_0036F810
// Address: 0x36f810 - 0x36f988
void sub_0036F810_0x36f810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F810_0x36f810");
#endif

    switch (ctx->pc) {
        case 0x36f810u: goto label_36f810;
        case 0x36f814u: goto label_36f814;
        case 0x36f818u: goto label_36f818;
        case 0x36f81cu: goto label_36f81c;
        case 0x36f820u: goto label_36f820;
        case 0x36f824u: goto label_36f824;
        case 0x36f828u: goto label_36f828;
        case 0x36f82cu: goto label_36f82c;
        case 0x36f830u: goto label_36f830;
        case 0x36f834u: goto label_36f834;
        case 0x36f838u: goto label_36f838;
        case 0x36f83cu: goto label_36f83c;
        case 0x36f840u: goto label_36f840;
        case 0x36f844u: goto label_36f844;
        case 0x36f848u: goto label_36f848;
        case 0x36f84cu: goto label_36f84c;
        case 0x36f850u: goto label_36f850;
        case 0x36f854u: goto label_36f854;
        case 0x36f858u: goto label_36f858;
        case 0x36f85cu: goto label_36f85c;
        case 0x36f860u: goto label_36f860;
        case 0x36f864u: goto label_36f864;
        case 0x36f868u: goto label_36f868;
        case 0x36f86cu: goto label_36f86c;
        case 0x36f870u: goto label_36f870;
        case 0x36f874u: goto label_36f874;
        case 0x36f878u: goto label_36f878;
        case 0x36f87cu: goto label_36f87c;
        case 0x36f880u: goto label_36f880;
        case 0x36f884u: goto label_36f884;
        case 0x36f888u: goto label_36f888;
        case 0x36f88cu: goto label_36f88c;
        case 0x36f890u: goto label_36f890;
        case 0x36f894u: goto label_36f894;
        case 0x36f898u: goto label_36f898;
        case 0x36f89cu: goto label_36f89c;
        case 0x36f8a0u: goto label_36f8a0;
        case 0x36f8a4u: goto label_36f8a4;
        case 0x36f8a8u: goto label_36f8a8;
        case 0x36f8acu: goto label_36f8ac;
        case 0x36f8b0u: goto label_36f8b0;
        case 0x36f8b4u: goto label_36f8b4;
        case 0x36f8b8u: goto label_36f8b8;
        case 0x36f8bcu: goto label_36f8bc;
        case 0x36f8c0u: goto label_36f8c0;
        case 0x36f8c4u: goto label_36f8c4;
        case 0x36f8c8u: goto label_36f8c8;
        case 0x36f8ccu: goto label_36f8cc;
        case 0x36f8d0u: goto label_36f8d0;
        case 0x36f8d4u: goto label_36f8d4;
        case 0x36f8d8u: goto label_36f8d8;
        case 0x36f8dcu: goto label_36f8dc;
        case 0x36f8e0u: goto label_36f8e0;
        case 0x36f8e4u: goto label_36f8e4;
        case 0x36f8e8u: goto label_36f8e8;
        case 0x36f8ecu: goto label_36f8ec;
        case 0x36f8f0u: goto label_36f8f0;
        case 0x36f8f4u: goto label_36f8f4;
        case 0x36f8f8u: goto label_36f8f8;
        case 0x36f8fcu: goto label_36f8fc;
        case 0x36f900u: goto label_36f900;
        case 0x36f904u: goto label_36f904;
        case 0x36f908u: goto label_36f908;
        case 0x36f90cu: goto label_36f90c;
        case 0x36f910u: goto label_36f910;
        case 0x36f914u: goto label_36f914;
        case 0x36f918u: goto label_36f918;
        case 0x36f91cu: goto label_36f91c;
        case 0x36f920u: goto label_36f920;
        case 0x36f924u: goto label_36f924;
        case 0x36f928u: goto label_36f928;
        case 0x36f92cu: goto label_36f92c;
        case 0x36f930u: goto label_36f930;
        case 0x36f934u: goto label_36f934;
        case 0x36f938u: goto label_36f938;
        case 0x36f93cu: goto label_36f93c;
        case 0x36f940u: goto label_36f940;
        case 0x36f944u: goto label_36f944;
        case 0x36f948u: goto label_36f948;
        case 0x36f94cu: goto label_36f94c;
        case 0x36f950u: goto label_36f950;
        case 0x36f954u: goto label_36f954;
        case 0x36f958u: goto label_36f958;
        case 0x36f95cu: goto label_36f95c;
        case 0x36f960u: goto label_36f960;
        case 0x36f964u: goto label_36f964;
        case 0x36f968u: goto label_36f968;
        case 0x36f96cu: goto label_36f96c;
        case 0x36f970u: goto label_36f970;
        case 0x36f974u: goto label_36f974;
        case 0x36f978u: goto label_36f978;
        case 0x36f97cu: goto label_36f97c;
        case 0x36f980u: goto label_36f980;
        case 0x36f984u: goto label_36f984;
        default: break;
    }

    ctx->pc = 0x36f810u;

label_36f810:
    // 0x36f810: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x36f810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_36f814:
    // 0x36f814: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x36f814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_36f818:
    // 0x36f818: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x36f818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
label_36f81c:
    // 0x36f81c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36f81cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36f820:
    // 0x36f820: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x36f820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
label_36f824:
    // 0x36f824: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x36f824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_36f828:
    // 0x36f828: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x36f828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_36f82c:
    // 0x36f82c: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x36f82cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36f830:
    // 0x36f830: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x36f830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
label_36f834:
    // 0x36f834: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x36f834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_36f838:
    // 0x36f838: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x36f838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
label_36f83c:
    // 0x36f83c: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x36f83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_36f840:
    // 0x36f840: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x36f840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
label_36f844:
    // 0x36f844: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x36f844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
label_36f848:
    // 0x36f848: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x36f848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36f84c:
    // 0x36f84c: 0x8e360004  lw          $s6, 0x4($s1)
    ctx->pc = 0x36f84cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_36f850:
    // 0x36f850: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x36f850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_36f854:
    // 0x36f854: 0x121e003e  beq         $s0, $fp, . + 4 + (0x3E << 2)
label_36f858:
    if (ctx->pc == 0x36F858u) {
        ctx->pc = 0x36F858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F854u;
        // 0x36f858: 0x8ed50030  lw          $s5, 0x30($s6) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F85Cu;
        goto label_36f85c;
    }
    ctx->pc = 0x36F854u;
    {
        const bool branch_taken_0x36f854 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 30));
        ctx->pc = 0x36F858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F854u;
        // 0x36f858: 0x8ed50030  lw          $s5, 0x30($s6) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f854) {
            ctx->pc = 0x36F950u;
            goto label_36f950;
        }
    }
    ctx->pc = 0x36F85Cu;
label_36f85c:
    // 0x36f85c: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x36f85cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_36f860:
    // 0x36f860: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x36f860u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_36f864:
    // 0x36f864: 0x0  nop
    ctx->pc = 0x36f864u;
    // NOP
label_36f868:
    // 0x36f868: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x36f868u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_36f86c:
    // 0x36f86c: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x36f86cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_36f870:
    // 0x36f870: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x36f870u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_36f874:
    // 0x36f874: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x36f874u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_36f878:
    // 0x36f878: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x36f878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_36f87c:
    // 0x36f87c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x36f87cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_36f880:
    // 0x36f880: 0x2a2a021  addu        $s4, $s5, $v0
    ctx->pc = 0x36f880u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_36f884:
    // 0x36f884: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x36f884u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_36f888:
    // 0x36f888: 0x2a39821  addu        $s3, $s5, $v1
    ctx->pc = 0x36f888u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_36f88c:
    // 0x36f88c: 0x2a59021  addu        $s2, $s5, $a1
    ctx->pc = 0x36f88cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
label_36f890:
    // 0x36f890: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x36f890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_36f894:
    // 0x36f894: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x36f894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_36f898:
    // 0x36f898: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x36f898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36f89c:
    // 0x36f89c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x36f89cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36f8a0:
    // 0x36f8a0: 0xc0dbb3c  jal         func_36ECF0
label_36f8a4:
    if (ctx->pc == 0x36F8A4u) {
        ctx->pc = 0x36F8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F8A0u;
        // 0x36f8a4: 0x27aa0060  addiu       $t2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F8A8u;
        goto label_36f8a8;
    }
    ctx->pc = 0x36F8A0u;
    SET_GPR_U32(ctx, 31, 0x36F8A8u);
    ctx->pc = 0x36F8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F8A0u;
    // 0x36f8a4: 0x27aa0060  addiu       $t2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ECF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ECF0u, 0x36F8A0u, 0x36F8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F8A8u;
label_36f8a8:
    // 0x36f8a8: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
label_36f8ac:
    if (ctx->pc == 0x36F8ACu) {
        ctx->pc = 0x36F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F8A8u;
        // 0x36f8ac: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F8B0u;
        goto label_36f8b0;
    }
    ctx->pc = 0x36F8A8u;
    {
        const bool branch_taken_0x36f8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f8a8) {
            ctx->pc = 0x36F8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36F8A8u;
            // 0x36f8ac: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36F948u;
            goto label_36f948;
        }
    }
    ctx->pc = 0x36F8B0u;
label_36f8b0:
    // 0x36f8b0: 0xc0f6a96  jal         func_3DAA58
label_36f8b4:
    if (ctx->pc == 0x36F8B4u) {
        ctx->pc = 0x36F8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F8B0u;
        // 0x36f8b4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F8B8u;
        goto label_36f8b8;
    }
    ctx->pc = 0x36F8B0u;
    SET_GPR_U32(ctx, 31, 0x36F8B8u);
    ctx->pc = 0x36F8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F8B0u;
    // 0x36f8b4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x36F8B0u, 0x36F8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F8B8u;
label_36f8b8:
    // 0x36f8b8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x36f8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_36f8bc:
    // 0x36f8bc: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x36f8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
label_36f8c0:
    // 0x36f8c0: 0x24847ee0  addiu       $a0, $a0, 0x7EE0
    ctx->pc = 0x36f8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32480));
label_36f8c4:
    // 0x36f8c4: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x36f8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_36f8c8:
    // 0x36f8c8: 0xc0c362e  jal         func_30D8B8
label_36f8cc:
    if (ctx->pc == 0x36F8CCu) {
        ctx->pc = 0x36F8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F8C8u;
        // 0x36f8cc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F8D0u;
        goto label_36f8d0;
    }
    ctx->pc = 0x36F8C8u;
    SET_GPR_U32(ctx, 31, 0x36F8D0u);
    ctx->pc = 0x36F8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F8C8u;
    // 0x36f8cc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D8B8u, 0x36F8C8u, 0x36F8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F8D0u;
label_36f8d0:
    // 0x36f8d0: 0x8ec30040  lw          $v1, 0x40($s6)
    ctx->pc = 0x36f8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
label_36f8d4:
    // 0x36f8d4: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x36f8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
label_36f8d8:
    // 0x36f8d8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x36f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_36f8dc:
    // 0x36f8dc: 0x24847ee0  addiu       $a0, $a0, 0x7EE0
    ctx->pc = 0x36f8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32480));
label_36f8e0:
    // 0x36f8e0: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x36f8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_36f8e4:
    // 0x36f8e4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x36f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_36f8e8:
    // 0x36f8e8: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x36f8e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_36f8ec:
    // 0x36f8ec: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x36f8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_36f8f0:
    // 0x36f8f0: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x36f8f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_36f8f4:
    // 0x36f8f4: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x36f8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_36f8f8:
    // 0x36f8f8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x36f8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_36f8fc:
    // 0x36f8fc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x36f8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_36f900:
    // 0x36f900: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x36f900u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_36f904:
    // 0x36f904: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x36f904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36f908:
    // 0x36f908: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x36f908u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_36f90c:
    // 0x36f90c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x36f90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36f910:
    // 0x36f910: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x36f910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_36f914:
    // 0x36f914: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x36f914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_36f918:
    // 0x36f918: 0xafb40054  sw          $s4, 0x54($sp)
    ctx->pc = 0x36f918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 20));
label_36f91c:
    // 0x36f91c: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x36f91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_36f920:
    // 0x36f920: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x36f920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_36f924:
    // 0x36f924: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x36f924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_36f928:
    // 0x36f928: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x36f928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_36f92c:
    // 0x36f92c: 0xafb60020  sw          $s6, 0x20($sp)
    ctx->pc = 0x36f92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 22));
label_36f930:
    // 0x36f930: 0xe0f809  jalr        $a3
label_36f934:
    if (ctx->pc == 0x36F934u) {
        ctx->pc = 0x36F934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F930u;
        // 0x36f934: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F938u;
        goto label_36f938;
    }
    ctx->pc = 0x36F930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x36F938u);
        ctx->pc = 0x36F934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F930u;
        // 0x36f934: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F930u, 0x36F938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36F938u;
label_36f938:
    // 0x36f938: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_36f93c:
    if (ctx->pc == 0x36F93Cu) {
        ctx->pc = 0x36F93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F938u;
        // 0x36f93c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F940u;
        goto label_36f940;
    }
    ctx->pc = 0x36F938u;
    {
        const bool branch_taken_0x36f938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F938u;
        // 0x36f93c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f938) {
            ctx->pc = 0x36F948u;
            goto label_36f948;
        }
    }
    ctx->pc = 0x36F940u;
label_36f940:
    // 0x36f940: 0x10000004  b           . + 4 + (0x4 << 2)
label_36f944:
    if (ctx->pc == 0x36F944u) {
        ctx->pc = 0x36F944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F940u;
        // 0x36f944: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F948u;
        goto label_36f948;
    }
    ctx->pc = 0x36F940u;
    {
        const bool branch_taken_0x36f940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F940u;
        // 0x36f944: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f940) {
            ctx->pc = 0x36F954u;
            goto label_36f954;
        }
    }
    ctx->pc = 0x36F948u;
label_36f948:
    // 0x36f948: 0x561effc7  bnel        $s0, $fp, . + 4 + (-0x39 << 2)
label_36f94c:
    if (ctx->pc == 0x36F94Cu) {
        ctx->pc = 0x36F94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F948u;
        // 0x36f94c: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F950u;
        goto label_36f950;
    }
    ctx->pc = 0x36F948u;
    {
        const bool branch_taken_0x36f948 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 30));
        if (branch_taken_0x36f948) {
            ctx->pc = 0x36F94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36F948u;
            // 0x36f94c: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36F868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36f868;
        }
    }
    ctx->pc = 0x36F950u;
label_36f950:
    // 0x36f950: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36f950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36f954:
    // 0x36f954: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x36f954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_36f958:
    // 0x36f958: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x36f958u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_36f95c:
    // 0x36f95c: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x36f95cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_36f960:
    // 0x36f960: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x36f960u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_36f964:
    // 0x36f964: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x36f964u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_36f968:
    // 0x36f968: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x36f968u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_36f96c:
    // 0x36f96c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x36f96cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_36f970:
    // 0x36f970: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x36f970u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_36f974:
    // 0x36f974: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x36f974u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_36f978:
    // 0x36f978: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x36f978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_36f97c:
    // 0x36f97c: 0x3e00008  jr          $ra
label_36f980:
    if (ctx->pc == 0x36F980u) {
        ctx->pc = 0x36F980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F97Cu;
        // 0x36f980: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36F984u;
        goto label_36f984;
    }
    ctx->pc = 0x36F97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F97Cu;
        // 0x36f980: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F984u;
label_36f984:
    // 0x36f984: 0x0  nop
    ctx->pc = 0x36f984u;
    // NOP
    ctx->pc = 0x36f988u;
}
