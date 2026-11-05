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

// Function: sub_0037B8D0
// Address: 0x37b8d0 - 0x37b900
void sub_0037B8D0_0x37b8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B8D0_0x37b8d0");
#endif

    ctx->pc = 0x37b8d0u;

    // 0x37b8d0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x37b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x37b8d4: 0x54a20005  bnel        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37B8D4u;
    {
        const bool branch_taken_0x37b8d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x37b8d4) {
            ctx->pc = 0x37B8D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37B8D4u;
            // 0x37b8d8: 0x8c830024  lw          $v1, 0x24($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37B8ECu;
            goto label_37b8ec;
        }
    }
    ctx->pc = 0x37B8DCu;
    // 0x37b8dc: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x37b8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x37b8e0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x37b8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x37b8e4: 0x3e00008  jr          $ra
    ctx->pc = 0x37B8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B8E4u;
        // 0x37b8e8: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B8E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B8ECu;
label_37b8ec:
    // 0x37b8ec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x37b8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x37b8f0: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x37b8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x37b8f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x37b8f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x37b8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x37B8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B8F8u;
        // 0x37b8fc: 0xac830024  sw          $v1, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B900u;
}
