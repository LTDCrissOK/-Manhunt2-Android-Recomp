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

// Function: sub_0017B368
// Address: 0x17b368 - 0x17b3e0
void sub_0017B368_0x17b368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B368_0x17b368");
#endif

    switch (ctx->pc) {
        case 0x17b374u: goto label_17b374;
        case 0x17b37cu: goto label_17b37c;
        case 0x17b398u: goto label_17b398;
        default: break;
    }

    ctx->pc = 0x17b368u;

    // 0x17b368: 0x90820530  lbu         $v0, 0x530($a0)
    ctx->pc = 0x17b368u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1328)));
    // 0x17b36c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17B36Cu;
    {
        const bool branch_taken_0x17b36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B36Cu;
        // 0x17b370: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b36c) {
            ctx->pc = 0x17B384u;
            goto label_17b384;
        }
    }
    ctx->pc = 0x17B374u;
label_17b374:
    // 0x17b374: 0x3e00008  jr          $ra
    ctx->pc = 0x17B374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B374u;
        // 0x17b378: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B37Cu;
label_17b37c:
    // 0x17b37c: 0x3e00008  jr          $ra
    ctx->pc = 0x17B37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B37Cu;
        // 0x17b380: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B384u;
label_17b384:
    // 0x17b384: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17b384u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b388: 0x240b0028  addiu       $t3, $zero, 0x28
    ctx->pc = 0x17b388u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x17b38c: 0x240a0012  addiu       $t2, $zero, 0x12
    ctx->pc = 0x17b38cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x17b390: 0x24890218  addiu       $t1, $a0, 0x218
    ctx->pc = 0x17b390u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 536));
    // 0x17b394: 0xeb3018  mult        $a2, $a3, $t3
    ctx->pc = 0x17b394u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_17b398:
    // 0x17b398: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x17b398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x17b39c: 0x8c430210  lw          $v1, 0x210($v0)
    ctx->pc = 0x17b39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x17b3a0: 0x106a0008  beq         $v1, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x17B3A0u;
    {
        const bool branch_taken_0x17b3a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 10));
        ctx->pc = 0x17B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B3A0u;
        // 0x17b3a4: 0x1261021  addu        $v0, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b3a0) {
            ctx->pc = 0x17B3C4u;
            goto label_17b3c4;
        }
    }
    ctx->pc = 0x17B3A8u;
    // 0x17b3a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17b3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b3ac: 0x1065fff3  beq         $v1, $a1, . + 4 + (-0xD << 2)
    ctx->pc = 0x17B3ACu;
    {
        const bool branch_taken_0x17b3ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x17B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B3ACu;
        // 0x17b3b0: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b3ac) {
            ctx->pc = 0x17B37Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b37c;
        }
    }
    ctx->pc = 0x17B3B4u;
    // 0x17b3b4: 0x90830530  lbu         $v1, 0x530($a0)
    ctx->pc = 0x17b3b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1328)));
    // 0x17b3b8: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x17b3b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17b3bc: 0x1103ffed  beq         $t0, $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x17B3BCu;
    {
        const bool branch_taken_0x17b3bc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x17b3bc) {
            ctx->pc = 0x17B374u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b374;
        }
    }
    ctx->pc = 0x17B3C4u;
label_17b3c4:
    // 0x17b3c4: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x17b3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x17b3c8: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x17b3c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17b3cc: 0x2ce30014  sltiu       $v1, $a3, 0x14
    ctx->pc = 0x17b3ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x17b3d0: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x17B3D0u;
    {
        const bool branch_taken_0x17b3d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B3D0u;
        // 0x17b3d4: 0xeb3018  mult        $a2, $a3, $t3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b3d0) {
            ctx->pc = 0x17B398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b398;
        }
    }
    ctx->pc = 0x17B3D8u;
    // 0x17b3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x17B3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B3D8u;
        // 0x17b3dc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B3E0u;
}
