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

// Function: sub_0023F7A8
// Address: 0x23f7a8 - 0x23f8c8
void sub_0023F7A8_0x23f7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F7A8_0x23f7a8");
#endif

    switch (ctx->pc) {
        case 0x23f804u: goto label_23f804;
        case 0x23f82cu: goto label_23f82c;
        case 0x23f850u: goto label_23f850;
        case 0x23f85cu: goto label_23f85c;
        case 0x23f86cu: goto label_23f86c;
        case 0x23f87cu: goto label_23f87c;
        case 0x23f888u: goto label_23f888;
        case 0x23f8b4u: goto label_23f8b4;
        default: break;
    }

    ctx->pc = 0x23f7a8u;

    // 0x23f7a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23f7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23f7ac: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x23f7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x23f7b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23f7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23f7b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23f7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23f7b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23f7b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f7bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23f7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23f7c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23f7c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f7c4: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x23f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD70u));
    // 0x23f7c8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x23f7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x23f7cc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23F7CCu;
    {
        const bool branch_taken_0x23f7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F7CCu;
        // 0x23f7d0: 0x8e24010c  lw          $a0, 0x10C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f7cc) {
            ctx->pc = 0x23F7F8u;
            goto label_23f7f8;
        }
    }
    ctx->pc = 0x23F7D4u;
    // 0x23f7d4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x23f7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x23f7d8: 0x8c43be30  lw          $v1, -0x41D0($v0)
    ctx->pc = 0x23f7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBE30u));
    // 0x23f7dc: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x23F7DCu;
    {
        const bool branch_taken_0x23f7dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f7dc) {
            ctx->pc = 0x23F7E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F7DCu;
            // 0x23f7e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F7FCu;
            goto label_23f7fc;
        }
    }
    ctx->pc = 0x23F7E4u;
    // 0x23f7e4: 0x908200a8  lbu         $v0, 0xA8($a0)
    ctx->pc = 0x23f7e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x23f7e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F7E8u;
    {
        const bool branch_taken_0x23f7e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F7E8u;
        // 0x23f7ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f7e8) {
            ctx->pc = 0x23F7FCu;
            goto label_23f7fc;
        }
    }
    ctx->pc = 0x23F7F0u;
    // 0x23f7f0: 0x10c00029  beqz        $a2, . + 4 + (0x29 << 2)
    ctx->pc = 0x23F7F0u;
    {
        const bool branch_taken_0x23f7f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f7f0) {
            ctx->pc = 0x23F898u;
            goto label_23f898;
        }
    }
    ctx->pc = 0x23F7F8u;
label_23f7f8:
    // 0x23f7f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23f7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23f7fc:
    // 0x23f7fc: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x23F7FCu;
    SET_GPR_U32(ctx, 31, 0x23F804u);
    ctx->pc = 0x23F800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F7FCu;
    // 0x23f800: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x23F7FCu, 0x23F804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F804u;
label_23f804:
    // 0x23f804: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23F804u;
    {
        const bool branch_taken_0x23f804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F804u;
        // 0x23f808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f804) {
            ctx->pc = 0x23F824u;
            goto label_23f824;
        }
    }
    ctx->pc = 0x23F80Cu;
    // 0x23f80c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F80Cu;
    {
        const bool branch_taken_0x23f80c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F80Cu;
        // 0x23f810: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f80c) {
            ctx->pc = 0x23F81Cu;
            goto label_23f81c;
        }
    }
    ctx->pc = 0x23F814u;
    // 0x23f814: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x23f814u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23f818: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23f818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23f81c:
    // 0x23f81c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23F81Cu;
    {
        const bool branch_taken_0x23f81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F81Cu;
        // 0x23f820: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f81c) {
            ctx->pc = 0x23F848u;
            goto label_23f848;
        }
    }
    ctx->pc = 0x23F824u;
label_23f824:
    // 0x23f824: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x23F824u;
    SET_GPR_U32(ctx, 31, 0x23F82Cu);
    ctx->pc = 0x23F828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F824u;
    // 0x23f828: 0x24050415  addiu       $a1, $zero, 0x415 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1045));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x23F824u, 0x23F82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F82Cu;
label_23f82c:
    // 0x23f82c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23F82Cu;
    {
        const bool branch_taken_0x23f82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F82Cu;
        // 0x23f830: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f82c) {
            ctx->pc = 0x23F874u;
            goto label_23f874;
        }
    }
    ctx->pc = 0x23F834u;
    // 0x23f834: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F834u;
    {
        const bool branch_taken_0x23f834 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F834u;
        // 0x23f838: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f834) {
            ctx->pc = 0x23F844u;
            goto label_23f844;
        }
    }
    ctx->pc = 0x23F83Cu;
    // 0x23f83c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x23f83cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23f840: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23f840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23f844:
    // 0x23f844: 0x24050415  addiu       $a1, $zero, 0x415
    ctx->pc = 0x23f844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1045));
label_23f848:
    // 0x23f848: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x23F848u;
    SET_GPR_U32(ctx, 31, 0x23F850u);
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x23F848u, 0x23F850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F850u;
label_23f850:
    // 0x23f850: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23f850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f854: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x23F854u;
    SET_GPR_U32(ctx, 31, 0x23F85Cu);
    ctx->pc = 0x23F858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F854u;
    // 0x23f858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x23F854u, 0x23F85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F85Cu;
label_23f85c:
    // 0x23f85c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x23F85Cu;
    {
        const bool branch_taken_0x23f85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F85Cu;
        // 0x23f860: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f85c) {
            ctx->pc = 0x23F8B4u;
            goto label_23f8b4;
        }
    }
    ctx->pc = 0x23F864u;
    // 0x23f864: 0xc0c4900  jal         func_312400
    ctx->pc = 0x23F864u;
    SET_GPR_U32(ctx, 31, 0x23F86Cu);
    ctx->pc = 0x23F868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F864u;
    // 0x23f868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x23F864u, 0x23F86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F86Cu;
label_23f86c:
    // 0x23f86c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x23F86Cu;
    {
        const bool branch_taken_0x23f86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F86Cu;
        // 0x23f870: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f86c) {
            ctx->pc = 0x23F8B4u;
            goto label_23f8b4;
        }
    }
    ctx->pc = 0x23F874u;
label_23f874:
    // 0x23f874: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x23F874u;
    SET_GPR_U32(ctx, 31, 0x23F87Cu);
    ctx->pc = 0x23F878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F874u;
    // 0x23f878: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x23F874u, 0x23F87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F87Cu;
label_23f87c:
    // 0x23f87c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23f87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f880: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x23F880u;
    SET_GPR_U32(ctx, 31, 0x23F888u);
    ctx->pc = 0x23F884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F880u;
    // 0x23f884: 0x24050415  addiu       $a1, $zero, 0x415 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1045));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x23F880u, 0x23F888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F888u;
label_23f888:
    // 0x23f888: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x23F888u;
    {
        const bool branch_taken_0x23f888 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f888) {
            ctx->pc = 0x23F88Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F888u;
            // 0x23f88c: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F8A4u;
            goto label_23f8a4;
        }
    }
    ctx->pc = 0x23F890u;
    // 0x23f890: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23F890u;
    {
        const bool branch_taken_0x23f890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F890u;
        // 0x23f894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f890) {
            ctx->pc = 0x23F8A8u;
            goto label_23f8a8;
        }
    }
    ctx->pc = 0x23F898u;
label_23f898:
    // 0x23f898: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23F898u;
    {
        const bool branch_taken_0x23f898 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F898u;
        // 0x23f89c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f898) {
            ctx->pc = 0x23F8A4u;
            goto label_23f8a4;
        }
    }
    ctx->pc = 0x23F8A0u;
    // 0x23f8a0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x23f8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_23f8a4:
    // 0x23f8a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23f8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23f8a8:
    // 0x23f8a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f8ac: 0xc0899b4  jal         func_2266D0
    ctx->pc = 0x23F8ACu;
    SET_GPR_U32(ctx, 31, 0x23F8B4u);
    ctx->pc = 0x23F8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F8ACu;
    // 0x23f8b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266D0u, 0x23F8ACu, 0x23F8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F8B4u;
label_23f8b4:
    // 0x23f8b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f8b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f8b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23f8b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23f8bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23f8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x23F8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8C0u;
        // 0x23f8c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F8C8u;
}
