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

// Function: sub_001EB538
// Address: 0x1eb538 - 0x1eb560
void sub_001EB538_0x1eb538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB538_0x1eb538");
#endif

    ctx->pc = 0x1eb538u;

    // 0x1eb538: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1eb538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1eb53c: 0x2c42007f  sltiu       $v0, $v0, 0x7F
    ctx->pc = 0x1eb53cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x1eb540: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB540u;
    {
        const bool branch_taken_0x1eb540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB540u;
        // 0x1eb544: 0x28a40001  slti        $a0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb540) {
            ctx->pc = 0x1EB558u;
            goto label_1eb558;
        }
    }
    ctx->pc = 0x1EB548u;
    // 0x1eb548: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eb548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb54c: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x1eb54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1eb550: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB550u;
        // 0x1eb554: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB558u;
label_1eb558:
    // 0x1eb558: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB558u;
        // 0x1eb55c: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB560u;
}
