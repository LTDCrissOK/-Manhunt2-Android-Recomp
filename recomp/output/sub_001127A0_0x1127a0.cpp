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

// Function: sub_001127A0
// Address: 0x1127a0 - 0x1127d0
void sub_001127A0_0x1127a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001127A0_0x1127a0");
#endif

    switch (ctx->pc) {
        case 0x1127a8u: goto label_1127a8;
        default: break;
    }

    ctx->pc = 0x1127a0u;

    // 0x1127a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1127a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1127a4: 0x24860024  addiu       $a2, $a0, 0x24
    ctx->pc = 0x1127a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
label_1127a8:
    // 0x1127a8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1127a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1127ac: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1127acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1127b0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1127b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1127b4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1127b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1127b8: 0x2ca20020  sltiu       $v0, $a1, 0x20
    ctx->pc = 0x1127b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1127bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1127BCu;
    {
        const bool branch_taken_0x1127bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1127C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1127BCu;
        // 0x1127c0: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1127bc) {
            ctx->pc = 0x1127A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1127a8;
        }
    }
    ctx->pc = 0x1127C4u;
    // 0x1127c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1127C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1127C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1127C4u;
        // 0x1127c8: 0xa08000a4  sb          $zero, 0xA4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 164), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1127C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1127CCu;
    // 0x1127cc: 0x0  nop
    ctx->pc = 0x1127ccu;
    // NOP
    ctx->pc = 0x1127d0u;
}
