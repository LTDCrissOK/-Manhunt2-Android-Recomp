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

// Function: sub_001AF7A0
// Address: 0x1af7a0 - 0x1af87c
void sub_001AF7A0_0x1af7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF7A0_0x1af7a0");
#endif

    switch (ctx->pc) {
        case 0x1af7bcu: goto label_1af7bc;
        case 0x1af7ccu: goto label_1af7cc;
        case 0x1af7d8u: goto label_1af7d8;
        case 0x1af874u: goto label_1af874;
        default: break;
    }

    ctx->pc = 0x1af7a0u;

    // 0x1af7a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1af7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1af7a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af7a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1af7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1af7ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1af7acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af7b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1af7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1af7b4: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1AF7B4u;
    SET_GPR_U32(ctx, 31, 0x1AF7BCu);
    ctx->pc = 0x1AF7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF7B4u;
    // 0x1af7b8: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1AF7B4u, 0x1AF7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF7BCu;
label_1af7bc:
    // 0x1af7bc: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x1AF7BCu;
    {
        const bool branch_taken_0x1af7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af7bc) {
            ctx->pc = 0x1AF7C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF7BCu;
            // 0x1af7c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF880u;
            return;
        }
    }
    ctx->pc = 0x1AF7C4u;
    // 0x1af7c4: 0xc097f2a  jal         func_25FCA8
    ctx->pc = 0x1AF7C4u;
    SET_GPR_U32(ctx, 31, 0x1AF7CCu);
    ctx->pc = 0x1AF7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF7C4u;
    // 0x1af7c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCA8u, 0x1AF7C4u, 0x1AF7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF7CCu;
label_1af7cc:
    // 0x1af7cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1af7ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af7d0: 0xc06c148  jal         func_1B0520
    ctx->pc = 0x1AF7D0u;
    SET_GPR_U32(ctx, 31, 0x1AF7D8u);
    ctx->pc = 0x1AF7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF7D0u;
    // 0x1af7d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0520u, 0x1AF7D0u, 0x1AF7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF7D8u;
label_1af7d8:
    // 0x1af7d8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1af7d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af7dc: 0x24c2fff8  addiu       $v0, $a2, -0x8
    ctx->pc = 0x1af7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x1af7e0: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x1af7e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1af7e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF7E4u;
    {
        const bool branch_taken_0x1af7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7E4u;
        // 0x1af7e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af7e4) {
            ctx->pc = 0x1AF7F8u;
            goto label_1af7f8;
        }
    }
    ctx->pc = 0x1AF7ECu;
    // 0x1af7ec: 0x24c60130  addiu       $a2, $a2, 0x130
    ctx->pc = 0x1af7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 304));
    // 0x1af7f0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1AF7F0u;
    {
        const bool branch_taken_0x1af7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7F0u;
        // 0x1af7f4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af7f0) {
            ctx->pc = 0x1AF86Cu;
            goto label_1af86c;
        }
    }
    ctx->pc = 0x1AF7F8u;
label_1af7f8:
    // 0x1af7f8: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x1af7f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1af7fc: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1AF7FCu;
    {
        const bool branch_taken_0x1af7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7FCu;
        // 0x1af800: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af7fc) {
            ctx->pc = 0x1AF87Cu;
            return;
        }
    }
    ctx->pc = 0x1AF804u;
    // 0x1af804: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1af804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1af808: 0x2442aeb0  addiu       $v0, $v0, -0x5150
    ctx->pc = 0x1af808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946480));
    // 0x1af80c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1af80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1af810: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1af810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1af814: 0x800008  jr          $a0
    ctx->pc = 0x1AF814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AF81Cu: goto label_1af81c;
            case 0x1AF82Cu: goto label_1af82c;
            case 0x1AF850u: goto label_1af850;
            case 0x1AF860u: goto label_1af860;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF814u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1AF81Cu;
label_1af81c:
    // 0x1af81c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af820: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1af820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1af824: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1AF824u;
    {
        const bool branch_taken_0x1af824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF824u;
        // 0x1af828: 0x24060131  addiu       $a2, $zero, 0x131 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af824) {
            ctx->pc = 0x1AF86Cu;
            goto label_1af86c;
        }
    }
    ctx->pc = 0x1AF82Cu;
label_1af82c:
    // 0x1af82c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1af82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af830: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF830u;
    {
        const bool branch_taken_0x1af830 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AF834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF830u;
        // 0x1af834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af830) {
            ctx->pc = 0x1AF844u;
            goto label_1af844;
        }
    }
    ctx->pc = 0x1AF838u;
    // 0x1af838: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1af838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1af83c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1AF83Cu;
    {
        const bool branch_taken_0x1af83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF83Cu;
        // 0x1af840: 0x24060133  addiu       $a2, $zero, 0x133 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 307));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af83c) {
            ctx->pc = 0x1AF86Cu;
            goto label_1af86c;
        }
    }
    ctx->pc = 0x1AF844u;
label_1af844:
    // 0x1af844: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1af844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1af848: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AF848u;
    {
        const bool branch_taken_0x1af848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF848u;
        // 0x1af84c: 0x24060132  addiu       $a2, $zero, 0x132 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 306));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af848) {
            ctx->pc = 0x1AF86Cu;
            goto label_1af86c;
        }
    }
    ctx->pc = 0x1AF850u;
label_1af850:
    // 0x1af850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af854: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1af854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1af858: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF858u;
    {
        const bool branch_taken_0x1af858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF858u;
        // 0x1af85c: 0x24060134  addiu       $a2, $zero, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af858) {
            ctx->pc = 0x1AF86Cu;
            goto label_1af86c;
        }
    }
    ctx->pc = 0x1AF860u;
label_1af860:
    // 0x1af860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af864: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1af864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1af868: 0x24060135  addiu       $a2, $zero, 0x135
    ctx->pc = 0x1af868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 309));
label_1af86c:
    // 0x1af86c: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AF86Cu;
    SET_GPR_U32(ctx, 31, 0x1AF874u);
    ctx->pc = 0x1AF870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF86Cu;
    // 0x1af870: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AF86Cu, 0x1AF874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF874u;
label_1af874:
    // 0x1af874: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF874u;
    {
        const bool branch_taken_0x1af874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF874u;
        // 0x1af878: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af874) {
            ctx->pc = 0x1AF884u;
            return;
        }
    }
    ctx->pc = 0x1AF87Cu;
}
