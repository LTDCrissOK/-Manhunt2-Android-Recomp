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

// Function: sub_001F5C20
// Address: 0x1f5c20 - 0x1f5c58
void sub_001F5C20_0x1f5c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5C20_0x1f5c20");
#endif

    ctx->pc = 0x1f5c20u;

    // 0x1f5c20: 0x24a2ffd9  addiu       $v0, $a1, -0x27
    ctx->pc = 0x1f5c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967257));
    // 0x1f5c24: 0x2c42003b  sltiu       $v0, $v0, 0x3B
    ctx->pc = 0x1f5c24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x1f5c28: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5C28u;
    {
        const bool branch_taken_0x1f5c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C28u;
        // 0x1f5c2c: 0x24a3ffda  addiu       $v1, $a1, -0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c28) {
            ctx->pc = 0x1F5C3Cu;
            goto label_1f5c3c;
        }
    }
    ctx->pc = 0x1F5C30u;
    // 0x1f5c30: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1f5c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1f5c34: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C34u;
        // 0x1f5c38: 0xc440923c  lwc1        $f0, -0x6DC4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294939196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5C3Cu;
label_1f5c3c:
    // 0x1f5c3c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x1f5c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x1f5c40: 0x2442ca38  addiu       $v0, $v0, -0x35C8
    ctx->pc = 0x1f5c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953528));
    // 0x1f5c44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f5c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f5c48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f5c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f5c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C4Cu;
        // 0x1f5c50: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5C54u;
    // 0x1f5c54: 0x0  nop
    ctx->pc = 0x1f5c54u;
    // NOP
    ctx->pc = 0x1f5c58u;
}
