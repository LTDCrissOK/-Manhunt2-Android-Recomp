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

// Function: sub_0037B8A0
// Address: 0x37b8a0 - 0x37b8d0
void sub_0037B8A0_0x37b8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B8A0_0x37b8a0");
#endif

    ctx->pc = 0x37b8a0u;

    // 0x37b8a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x37b8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37b8a4: 0x54a20005  bnel        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37B8A4u;
    {
        const bool branch_taken_0x37b8a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x37b8a4) {
            ctx->pc = 0x37B8A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37B8A4u;
            // 0x37b8a8: 0x8c830024  lw          $v1, 0x24($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37B8BCu;
            goto label_37b8bc;
        }
    }
    ctx->pc = 0x37B8ACu;
    // 0x37b8ac: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x37b8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x37b8b0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x37b8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x37b8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x37B8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B8B4u;
        // 0x37b8b8: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B8B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B8BCu;
label_37b8bc:
    // 0x37b8bc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x37b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x37b8c0: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x37b8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x37b8c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x37b8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x37b8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x37B8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B8C8u;
        // 0x37b8cc: 0xac830024  sw          $v1, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B8D0u;
}
