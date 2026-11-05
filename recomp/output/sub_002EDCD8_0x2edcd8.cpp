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

// Function: sub_002EDCD8
// Address: 0x2edcd8 - 0x2edd00
void sub_002EDCD8_0x2edcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDCD8_0x2edcd8");
#endif

    ctx->pc = 0x2edcd8u;

    // 0x2edcd8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2edcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2edcdc: 0xc48012b8  lwc1        $f0, 0x12B8($a0)
    ctx->pc = 0x2edcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2edce0: 0xc4412b30  lwc1        $f1, 0x2B30($v0)
    ctx->pc = 0x2edce0u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2edce4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2edce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2edce8: 0xac8305b4  sw          $v1, 0x5B4($a0)
    ctx->pc = 0x2edce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1460), GPR_U32(ctx, 3));
    // 0x2edcec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2edcecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2edcf0: 0xac800550  sw          $zero, 0x550($a0)
    ctx->pc = 0x2edcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1360), GPR_U32(ctx, 0));
    // 0x2edcf4: 0xac800554  sw          $zero, 0x554($a0)
    ctx->pc = 0x2edcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1364), GPR_U32(ctx, 0));
    // 0x2edcf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDCF8u;
        // 0x2edcfc: 0xe48012b8  swc1        $f0, 0x12B8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4792), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDCF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDD00u;
}
