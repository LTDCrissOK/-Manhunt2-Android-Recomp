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

// Function: sub_0015B7C0
// Address: 0x15b7c0 - 0x15b868
void sub_0015B7C0_0x15b7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B7C0_0x15b7c0");
#endif

    switch (ctx->pc) {
        case 0x15b808u: goto label_15b808;
        default: break;
    }

    ctx->pc = 0x15b7c0u;

    // 0x15b7c0: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x15b7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x15b7c4: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x15b7c4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b7c8: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x15b7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x15b7cc: 0x91aa0a20  lbu         $t2, 0xA20($t5)
    ctx->pc = 0x15b7ccu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2592)));
    // 0x15b7d0: 0x11400022  beqz        $t2, . + 4 + (0x22 << 2)
    ctx->pc = 0x15B7D0u;
    {
        const bool branch_taken_0x15b7d0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B7D0u;
        // 0x15b7d4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b7d0) {
            ctx->pc = 0x15B85Cu;
            goto label_15b85c;
        }
    }
    ctx->pc = 0x15B7D8u;
    // 0x15b7d8: 0x8da40b68  lw          $a0, 0xB68($t5)
    ctx->pc = 0x15b7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 2920)));
    // 0x15b7dc: 0x8c43a9d4  lw          $v1, -0x562C($v0)
    ctx->pc = 0x15b7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945236)));
    // 0x15b7e0: 0x1483001e  bne         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x15B7E0u;
    {
        const bool branch_taken_0x15b7e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x15B7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B7E0u;
        // 0x15b7e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b7e0) {
            ctx->pc = 0x15B85Cu;
            goto label_15b85c;
        }
    }
    ctx->pc = 0x15B7E8u;
    // 0x15b7e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15b7e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b7ec: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x15b7ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b7f0: 0xea102b  sltu        $v0, $a3, $t2
    ctx->pc = 0x15b7f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x15b7f4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x15B7F4u;
    {
        const bool branch_taken_0x15b7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B7F4u;
        // 0x15b7f8: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b7f4) {
            ctx->pc = 0x15B854u;
            goto label_15b854;
        }
    }
    ctx->pc = 0x15B7FCu;
    // 0x15b7fc: 0x140602d  daddu       $t4, $t2, $zero
    ctx->pc = 0x15b7fcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b800: 0x240a0070  addiu       $t2, $zero, 0x70
    ctx->pc = 0x15b800u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x15b804: 0x10a1818  mult        $v1, $t0, $t2
    ctx->pc = 0x15b804u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_15b808:
    // 0x15b808: 0x6d1021  addu        $v0, $v1, $t5
    ctx->pc = 0x15b808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x15b80c: 0x8c430338  lw          $v1, 0x338($v0)
    ctx->pc = 0x15b80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 824)));
    // 0x15b810: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x15B810u;
    {
        const bool branch_taken_0x15b810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b810) {
            ctx->pc = 0x15B814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15B810u;
            // 0x15b814: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15B844u;
            goto label_15b844;
        }
    }
    ctx->pc = 0x15B818u;
    // 0x15b818: 0x15600005  bnez        $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x15B818u;
    {
        const bool branch_taken_0x15b818 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B818u;
        // 0x15b81c: 0x9044034c  lbu         $a0, 0x34C($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b818) {
            ctx->pc = 0x15B830u;
            goto label_15b830;
        }
    }
    ctx->pc = 0x15B820u;
    // 0x15b820: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x15b820u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b824: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x15b824u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b828: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15B828u;
    {
        const bool branch_taken_0x15b828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B828u;
        // 0x15b82c: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b828) {
            ctx->pc = 0x15B840u;
            goto label_15b840;
        }
    }
    ctx->pc = 0x15B830u;
label_15b830:
    // 0x15b830: 0xe4182b  sltu        $v1, $a3, $a0
    ctx->pc = 0x15b830u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x15b834: 0x89102b  sltu        $v0, $a0, $t1
    ctx->pc = 0x15b834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x15b838: 0x82480b  movn        $t1, $a0, $v0
    ctx->pc = 0x15b838u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 4));
    // 0x15b83c: 0x83380b  movn        $a3, $a0, $v1
    ctx->pc = 0x15b83cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
label_15b840:
    // 0x15b840: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x15b840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_15b844:
    // 0x15b844: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x15b844u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b848: 0x10c182b  sltu        $v1, $t0, $t4
    ctx->pc = 0x15b848u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x15b84c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x15B84Cu;
    {
        const bool branch_taken_0x15b84c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B84Cu;
        // 0x15b850: 0x10a1818  mult        $v1, $t0, $t2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b84c) {
            ctx->pc = 0x15B808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b808;
        }
    }
    ctx->pc = 0x15B854u;
label_15b854:
    // 0x15b854: 0xa0a90000  sb          $t1, 0x0($a1)
    ctx->pc = 0x15b854u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x15b858: 0xa0c70000  sb          $a3, 0x0($a2)
    ctx->pc = 0x15b858u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 7));
label_15b85c:
    // 0x15b85c: 0x3e00008  jr          $ra
    ctx->pc = 0x15B85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B85Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B864u;
    // 0x15b864: 0x0  nop
    ctx->pc = 0x15b864u;
    // NOP
    ctx->pc = 0x15b868u;
}
