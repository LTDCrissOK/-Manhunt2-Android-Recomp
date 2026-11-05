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

// Function: sub_002BB7A8
// Address: 0x2bb7a8 - 0x2bb7f0
void sub_002BB7A8_0x2bb7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB7A8_0x2bb7a8");
#endif

    switch (ctx->pc) {
        case 0x2bb7b8u: goto label_2bb7b8;
        default: break;
    }

    ctx->pc = 0x2bb7a8u;

    // 0x2bb7a8: 0x18c0000e  blez        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2BB7A8u;
    {
        const bool branch_taken_0x2bb7a8 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2BB7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7A8u;
        // 0x2bb7ac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb7a8) {
            ctx->pc = 0x2BB7E4u;
            goto label_2bb7e4;
        }
    }
    ctx->pc = 0x2BB7B0u;
    // 0x2bb7b0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2bb7b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bb7b4: 0x0  nop
    ctx->pc = 0x2bb7b4u;
    // NOP
label_2bb7b8:
    // 0x2bb7b8: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x2bb7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2bb7bc: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x2bb7bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2bb7c0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2bb7c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bb7c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BB7C4u;
    {
        const bool branch_taken_0x2bb7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7C4u;
        // 0x2bb7c8: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb7c4) {
            ctx->pc = 0x2BB7D4u;
            goto label_2bb7d4;
        }
    }
    ctx->pc = 0x2BB7CCu;
    // 0x2bb7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7CCu;
        // 0x2bb7d0: 0xa4800000  sh          $zero, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB7D4u;
label_2bb7d4:
    // 0x2bb7d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2bb7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2bb7d8: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x2bb7d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2bb7dc: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x2BB7DCu;
    {
        const bool branch_taken_0x2bb7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb7dc) {
            ctx->pc = 0x2BB7E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB7DCu;
            // 0x2bb7e0: 0x94a20000  lhu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb7b8;
        }
    }
    ctx->pc = 0x2BB7E4u;
label_2bb7e4:
    // 0x2bb7e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB7ECu;
    // 0x2bb7ec: 0x0  nop
    ctx->pc = 0x2bb7ecu;
    // NOP
    ctx->pc = 0x2bb7f0u;
}
