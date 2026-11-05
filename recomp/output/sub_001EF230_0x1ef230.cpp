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

// Function: sub_001EF230
// Address: 0x1ef230 - 0x1ef258
void sub_001EF230_0x1ef230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF230_0x1ef230");
#endif

    ctx->pc = 0x1ef230u;

    // 0x1ef230: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ef230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ef234: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EF234u;
    {
        const bool branch_taken_0x1ef234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF234u;
        // 0x1ef238: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef234) {
            ctx->pc = 0x1EF250u;
            goto label_1ef250;
        }
    }
    ctx->pc = 0x1EF23Cu;
    // 0x1ef23c: 0x0  nop
    ctx->pc = 0x1ef23cu;
    // NOP
    // 0x1ef240: 0x0  nop
    ctx->pc = 0x1ef240u;
    // NOP
    // 0x1ef244: 0x460c0004  c1          0xC0004
    ctx->pc = 0x1ef244u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1ef248: 0xe4800110  swc1        $f0, 0x110($a0)
    ctx->pc = 0x1ef248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 272), bits); }
    // 0x1ef24c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1ef24cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1ef250:
    // 0x1ef250: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF258u;
}
