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

// Function: sub_0036EC08
// Address: 0x36ec08 - 0x36ec30
void sub_0036EC08_0x36ec08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036EC08_0x36ec08");
#endif

    ctx->pc = 0x36ec08u;

    // 0x36ec08: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x36ec08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x36ec0c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36EC0Cu;
    {
        const bool branch_taken_0x36ec0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x36EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EC0Cu;
        // 0x36ec10: 0x3c03005c  lui         $v1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ec0c) {
            ctx->pc = 0x36EC1Cu;
            goto label_36ec1c;
        }
    }
    ctx->pc = 0x36EC14u;
    // 0x36ec14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36ec14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ec18: 0xa062f188  sb          $v0, -0xE78($v1)
    ctx->pc = 0x36ec18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294963592), (uint8_t)GPR_U32(ctx, 2));
label_36ec1c:
    // 0x36ec1c: 0x3e00008  jr          $ra
    ctx->pc = 0x36EC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EC1Cu;
        // 0x36ec20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EC24u;
    // 0x36ec24: 0x0  nop
    ctx->pc = 0x36ec24u;
    // NOP
    // 0x36ec28: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x36ec28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36ec2c: 0x0  nop
    ctx->pc = 0x36ec2cu;
    // NOP
    ctx->pc = 0x36ec30u;
}
