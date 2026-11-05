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

// Function: sub_002FC8B8
// Address: 0x2fc8b8 - 0x2fc8f8
void sub_002FC8B8_0x2fc8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC8B8_0x2fc8b8");
#endif

    switch (ctx->pc) {
        case 0x2fc8d0u: goto label_2fc8d0;
        case 0x2fc8d8u: goto label_2fc8d8;
        default: break;
    }

    ctx->pc = 0x2fc8b8u;

    // 0x2fc8b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc8bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fc8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fc8c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2fc8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2fc8c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2fc8c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc8c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fc8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc8cc: 0x0  nop
    ctx->pc = 0x2fc8ccu;
    // NOP
label_2fc8d0:
    // 0x2fc8d0: 0xc0bf222  jal         func_2FC888
    ctx->pc = 0x2FC8D0u;
    SET_GPR_U32(ctx, 31, 0x2FC8D8u);
    ctx->pc = 0x2FC8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC8D0u;
    // 0x2fc8d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC888u, 0x2FC8D0u, 0x2FC8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC8D8u;
label_2fc8d8:
    // 0x2fc8d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2fc8d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fc8dc: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x2fc8dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2fc8e0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2FC8E0u;
    {
        const bool branch_taken_0x2fc8e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC8E0u;
        // 0x2fc8e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc8e0) {
            ctx->pc = 0x2FC8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc8d0;
        }
    }
    ctx->pc = 0x2FC8E8u;
    // 0x2fc8e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fc8e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc8ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2fc8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fc8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC8F0u;
        // 0x2fc8f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC8F8u;
}
