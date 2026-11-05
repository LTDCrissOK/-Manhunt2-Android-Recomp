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

// Function: sub_00116570
// Address: 0x116570 - 0x1165a0
void sub_00116570_0x116570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116570_0x116570");
#endif

    ctx->pc = 0x116570u;

    // 0x116570: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x116570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x116574: 0x8c420ff8  lw          $v0, 0xFF8($v0)
    ctx->pc = 0x116574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
    // 0x116578: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x116578u;
    {
        const bool branch_taken_0x116578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116578u;
        // 0x11657c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116578) {
            ctx->pc = 0x116594u;
            goto label_116594;
        }
    }
    ctx->pc = 0x116580u;
    // 0x116580: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x116580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116584: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x116584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x116588: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x116588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x11658c: 0x3e00008  jr          $ra
    ctx->pc = 0x11658Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11658Cu;
        // 0x116590: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11658Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116594u;
label_116594:
    // 0x116594: 0x3e00008  jr          $ra
    ctx->pc = 0x116594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116594u;
        // 0x116598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11659Cu;
    // 0x11659c: 0x0  nop
    ctx->pc = 0x11659cu;
    // NOP
    ctx->pc = 0x1165a0u;
}
