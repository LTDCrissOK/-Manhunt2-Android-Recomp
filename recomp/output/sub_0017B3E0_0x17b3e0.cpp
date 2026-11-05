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

// Function: sub_0017B3E0
// Address: 0x17b3e0 - 0x17b438
void sub_0017B3E0_0x17b3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B3E0_0x17b3e0");
#endif

    switch (ctx->pc) {
        case 0x17b3f8u: goto label_17b3f8;
        case 0x17b410u: goto label_17b410;
        default: break;
    }

    ctx->pc = 0x17b3e0u;

    // 0x17b3e0: 0x90820530  lbu         $v0, 0x530($a0)
    ctx->pc = 0x17b3e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1328)));
    // 0x17b3e4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x17b3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x17b3e8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17B3E8u;
    {
        const bool branch_taken_0x17b3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x17B3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B3E8u;
        // 0x17b3ec: 0x24870210  addiu       $a3, $a0, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b3e8) {
            ctx->pc = 0x17B400u;
            goto label_17b400;
        }
    }
    ctx->pc = 0x17B3F0u;
    // 0x17b3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x17B3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B3F0u;
        // 0x17b3f4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B3F8u;
label_17b3f8:
    // 0x17b3f8: 0x3e00008  jr          $ra
    ctx->pc = 0x17B3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B3F8u;
        // 0x17b3fc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B3F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B400u;
label_17b400:
    // 0x17b400: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x17b400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x17b404: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17b404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b408: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x17b408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x17b40c: 0x861818  mult        $v1, $a0, $a2
    ctx->pc = 0x17b40cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_17b410:
    // 0x17b410: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x17b410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x17b414: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17b414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b418: 0x1065fff7  beq         $v1, $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x17B418u;
    {
        const bool branch_taken_0x17b418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x17B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B418u;
        // 0x17b41c: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b418) {
            ctx->pc = 0x17B3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b3f8;
        }
    }
    ctx->pc = 0x17B420u;
    // 0x17b420: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x17b420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17b424: 0x2c830014  sltiu       $v1, $a0, 0x14
    ctx->pc = 0x17b424u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x17b428: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17B428u;
    {
        const bool branch_taken_0x17b428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B428u;
        // 0x17b42c: 0x861818  mult        $v1, $a0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b428) {
            ctx->pc = 0x17B410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b410;
        }
    }
    ctx->pc = 0x17B430u;
    // 0x17b430: 0x3e00008  jr          $ra
    ctx->pc = 0x17B430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B430u;
        // 0x17b434: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B438u;
}
