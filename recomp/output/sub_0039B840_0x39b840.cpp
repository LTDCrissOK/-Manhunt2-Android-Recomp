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

// Function: sub_0039B840
// Address: 0x39b840 - 0x39b900
void sub_0039B840_0x39b840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B840_0x39b840");
#endif

    switch (ctx->pc) {
        case 0x39b840u: goto label_39b840;
        case 0x39b844u: goto label_39b844;
        case 0x39b848u: goto label_39b848;
        case 0x39b84cu: goto label_39b84c;
        case 0x39b850u: goto label_39b850;
        case 0x39b854u: goto label_39b854;
        case 0x39b858u: goto label_39b858;
        case 0x39b85cu: goto label_39b85c;
        case 0x39b860u: goto label_39b860;
        case 0x39b864u: goto label_39b864;
        case 0x39b868u: goto label_39b868;
        case 0x39b86cu: goto label_39b86c;
        case 0x39b870u: goto label_39b870;
        case 0x39b874u: goto label_39b874;
        case 0x39b878u: goto label_39b878;
        case 0x39b87cu: goto label_39b87c;
        case 0x39b880u: goto label_39b880;
        case 0x39b884u: goto label_39b884;
        case 0x39b888u: goto label_39b888;
        case 0x39b88cu: goto label_39b88c;
        case 0x39b890u: goto label_39b890;
        case 0x39b894u: goto label_39b894;
        case 0x39b898u: goto label_39b898;
        case 0x39b89cu: goto label_39b89c;
        case 0x39b8a0u: goto label_39b8a0;
        case 0x39b8a4u: goto label_39b8a4;
        case 0x39b8a8u: goto label_39b8a8;
        case 0x39b8acu: goto label_39b8ac;
        case 0x39b8b0u: goto label_39b8b0;
        case 0x39b8b4u: goto label_39b8b4;
        case 0x39b8b8u: goto label_39b8b8;
        case 0x39b8bcu: goto label_39b8bc;
        case 0x39b8c0u: goto label_39b8c0;
        case 0x39b8c4u: goto label_39b8c4;
        case 0x39b8c8u: goto label_39b8c8;
        case 0x39b8ccu: goto label_39b8cc;
        case 0x39b8d0u: goto label_39b8d0;
        case 0x39b8d4u: goto label_39b8d4;
        case 0x39b8d8u: goto label_39b8d8;
        case 0x39b8dcu: goto label_39b8dc;
        case 0x39b8e0u: goto label_39b8e0;
        case 0x39b8e4u: goto label_39b8e4;
        case 0x39b8e8u: goto label_39b8e8;
        case 0x39b8ecu: goto label_39b8ec;
        case 0x39b8f0u: goto label_39b8f0;
        case 0x39b8f4u: goto label_39b8f4;
        case 0x39b8f8u: goto label_39b8f8;
        case 0x39b8fcu: goto label_39b8fc;
        default: break;
    }

    ctx->pc = 0x39b840u;

label_39b840:
    // 0x39b840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39b840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_39b844:
    // 0x39b844: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39b844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_39b848:
    // 0x39b848: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39b848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39b84c:
    // 0x39b84c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39b84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_39b850:
    // 0x39b850: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_39b854:
    if (ctx->pc == 0x39B854u) {
        ctx->pc = 0x39B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B850u;
        // 0x39b854: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B858u;
        goto label_39b858;
    }
    ctx->pc = 0x39B850u;
    {
        const bool branch_taken_0x39b850 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x39B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B850u;
        // 0x39b854: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b850) {
            ctx->pc = 0x39B878u;
            goto label_39b878;
        }
    }
    ctx->pc = 0x39B858u;
label_39b858:
    // 0x39b858: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39b858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_39b85c:
    // 0x39b85c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39b85cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39b860:
    // 0x39b860: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39b860u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_39b864:
    // 0x39b864: 0x2484b330  addiu       $a0, $a0, -0x4CD0
    ctx->pc = 0x39b864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947632));
label_39b868:
    // 0x39b868: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39b868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39b86c:
    // 0x39b86c: 0x80ec0fe  j           func_3B03F8
label_39b870:
    if (ctx->pc == 0x39B870u) {
        ctx->pc = 0x39B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B86Cu;
        // 0x39b870: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B874u;
        goto label_39b874;
    }
    ctx->pc = 0x39B86Cu;
    ctx->pc = 0x39B870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B86Cu;
    // 0x39b870: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    sub_003B03F8_0x3b03f8(rdram, ctx, runtime); return;
    ctx->pc = 0x39B874u;
label_39b874:
    // 0x39b874: 0x0  nop
    ctx->pc = 0x39b874u;
    // NOP
label_39b878:
    // 0x39b878: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x39b878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_39b87c:
    // 0x39b87c: 0x2451ada0  addiu       $s1, $v0, -0x5260
    ctx->pc = 0x39b87cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946208));
label_39b880:
    // 0x39b880: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x39b880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39b884:
    // 0x39b884: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_39b888:
    if (ctx->pc == 0x39B888u) {
        ctx->pc = 0x39B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B884u;
        // 0x39b888: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B88Cu;
        goto label_39b88c;
    }
    ctx->pc = 0x39B884u;
    {
        const bool branch_taken_0x39b884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b884) {
            ctx->pc = 0x39B888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B884u;
            // 0x39b888: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B8A4u;
            goto label_39b8a4;
        }
    }
    ctx->pc = 0x39B88Cu;
label_39b88c:
    // 0x39b88c: 0xc0e606c  jal         func_3981B0
label_39b890:
    if (ctx->pc == 0x39B890u) {
        ctx->pc = 0x39B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B88Cu;
        // 0x39b890: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B894u;
        goto label_39b894;
    }
    ctx->pc = 0x39B88Cu;
    SET_GPR_U32(ctx, 31, 0x39B894u);
    ctx->pc = 0x39B890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B88Cu;
    // 0x39b890: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3981B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3981B0u, 0x39B88Cu, 0x39B894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B894u;
label_39b894:
    // 0x39b894: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x39b894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39b898:
    // 0x39b898: 0x40f809  jalr        $v0
label_39b89c:
    if (ctx->pc == 0x39B89Cu) {
        ctx->pc = 0x39B89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B898u;
        // 0x39b89c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B8A0u;
        goto label_39b8a0;
    }
    ctx->pc = 0x39B898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39B8A0u);
        ctx->pc = 0x39B89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B898u;
        // 0x39b89c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B898u, 0x39B8A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39B8A0u;
label_39b8a0:
    // 0x39b8a0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x39b8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_39b8a4:
    // 0x39b8a4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_39b8a8:
    if (ctx->pc == 0x39B8A8u) {
        ctx->pc = 0x39B8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B8A4u;
        // 0x39b8a8: 0x82030002  lb          $v1, 0x2($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B8ACu;
        goto label_39b8ac;
    }
    ctx->pc = 0x39B8A4u;
    {
        const bool branch_taken_0x39b8a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b8a4) {
            ctx->pc = 0x39B8A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B8A4u;
            // 0x39b8a8: 0x82030002  lb          $v1, 0x2($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B8B8u;
            goto label_39b8b8;
        }
    }
    ctx->pc = 0x39B8ACu;
label_39b8ac:
    // 0x39b8ac: 0xc0e6660  jal         func_399980
label_39b8b0:
    if (ctx->pc == 0x39B8B0u) {
        ctx->pc = 0x39B8B4u;
        goto label_39b8b4;
    }
    ctx->pc = 0x39B8ACu;
    SET_GPR_U32(ctx, 31, 0x39B8B4u);
    ctx->pc = 0x399980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399980u, 0x39B8ACu, 0x39B8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B8B4u;
label_39b8b4:
    // 0x39b8b4: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x39b8b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_39b8b8:
    // 0x39b8b8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x39b8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39b8bc:
    // 0x39b8bc: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_39b8c0:
    if (ctx->pc == 0x39B8C0u) {
        ctx->pc = 0x39B8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B8BCu;
        // 0x39b8c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B8C4u;
        goto label_39b8c4;
    }
    ctx->pc = 0x39B8BCu;
    {
        const bool branch_taken_0x39b8bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39b8bc) {
            ctx->pc = 0x39B8C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B8BCu;
            // 0x39b8c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B8ECu;
            goto label_39b8ec;
        }
    }
    ctx->pc = 0x39B8C4u;
label_39b8c4:
    // 0x39b8c4: 0xc0e9c5e  jal         func_3A7178
label_39b8c8:
    if (ctx->pc == 0x39B8C8u) {
        ctx->pc = 0x39B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B8C4u;
        // 0x39b8c8: 0x8e040094  lw          $a0, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B8CCu;
        goto label_39b8cc;
    }
    ctx->pc = 0x39B8C4u;
    SET_GPR_U32(ctx, 31, 0x39B8CCu);
    ctx->pc = 0x39B8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B8C4u;
    // 0x39b8c8: 0x8e040094  lw          $a0, 0x94($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7178u, 0x39B8C4u, 0x39B8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B8CCu;
label_39b8cc:
    // 0x39b8cc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x39b8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_39b8d0:
    // 0x39b8d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_39b8d4:
    if (ctx->pc == 0x39B8D4u) {
        ctx->pc = 0x39B8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B8D0u;
        // 0x39b8d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B8D8u;
        goto label_39b8d8;
    }
    ctx->pc = 0x39B8D0u;
    {
        const bool branch_taken_0x39b8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B8D0u;
        // 0x39b8d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b8d0) {
            ctx->pc = 0x39B8E8u;
            goto label_39b8e8;
        }
    }
    ctx->pc = 0x39B8D8u;
label_39b8d8:
    // 0x39b8d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x39b8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39b8dc:
    // 0x39b8dc: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x39b8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_39b8e0:
    // 0x39b8e0: 0x60f809  jalr        $v1
label_39b8e4:
    if (ctx->pc == 0x39B8E4u) {
        ctx->pc = 0x39B8E8u;
        goto label_39b8e8;
    }
    ctx->pc = 0x39B8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39B8E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B8E0u, 0x39B8E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39B8E8u;
label_39b8e8:
    // 0x39b8e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39b8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39b8ec:
    // 0x39b8ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39b8ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39b8f0:
    // 0x39b8f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39b8f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_39b8f4:
    // 0x39b8f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39b8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39b8f8:
    // 0x39b8f8: 0x80e6ddc  j           func_39B770
label_39b8fc:
    if (ctx->pc == 0x39B8FCu) {
        ctx->pc = 0x39B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B8F8u;
        // 0x39b8fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B900u;
        goto label_fallthrough_0x39b8f8;
    }
    ctx->pc = 0x39B8F8u;
    ctx->pc = 0x39B8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B8F8u;
    // 0x39b8fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B770u;
    sub_0039B770_0x39b770(rdram, ctx, runtime); return;
label_fallthrough_0x39b8f8:
    ctx->pc = 0x39B900u;
}
