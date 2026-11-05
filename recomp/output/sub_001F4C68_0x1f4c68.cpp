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

// Function: sub_001F4C68
// Address: 0x1f4c68 - 0x1f4ca8
void sub_001F4C68_0x1f4c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4C68_0x1f4c68");
#endif

    switch (ctx->pc) {
        case 0x1f4c70u: goto label_1f4c70;
        default: break;
    }

    ctx->pc = 0x1f4c68u;

    // 0x1f4c68: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4C68u;
        // 0x1f4c6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4C70u;
label_1f4c70:
    // 0x1f4c70: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1f4c70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1f4c74: 0x90829292  lbu         $v0, -0x6D6E($a0)
    ctx->pc = 0x1f4c74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3F9292u));
    // 0x1f4c78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f4c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f4c7c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f4c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f4c80: 0x2c630004  sltiu       $v1, $v1, 0x4
    ctx->pc = 0x1f4c80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1f4c84: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F4C84u;
    {
        const bool branch_taken_0x1f4c84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4C84u;
        // 0x1f4c88: 0xa0829292  sb          $v0, -0x6D6E($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294939282), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4c84) {
            ctx->pc = 0x1F4C90u;
            goto label_1f4c90;
        }
    }
    ctx->pc = 0x1F4C8Cu;
    // 0x1f4c8c: 0xa0809292  sb          $zero, -0x6D6E($a0)
    ctx->pc = 0x1f4c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294939282), (uint8_t)GPR_U32(ctx, 0));
label_1f4c90:
    // 0x1f4c90: 0x90839292  lbu         $v1, -0x6D6E($a0)
    ctx->pc = 0x1f4c90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294939282)));
    // 0x1f4c94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f4c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f4c98: 0xace20104  sw          $v0, 0x104($a3)
    ctx->pc = 0x1f4c98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 260), GPR_U32(ctx, 2));
    // 0x1f4c9c: 0xa4e300f4  sh          $v1, 0xF4($a3)
    ctx->pc = 0x1f4c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 244), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f4ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4CA0u;
        // 0x1f4ca4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4CA8u;
}
