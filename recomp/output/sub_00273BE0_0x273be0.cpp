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

// Function: sub_00273BE0
// Address: 0x273be0 - 0x273c00
void sub_00273BE0_0x273be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273BE0_0x273be0");
#endif

    ctx->pc = 0x273be0u;

    // 0x273be0: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x273be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x273be4: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x273be4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x273be8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x273be8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273bec: 0x0  nop
    ctx->pc = 0x273becu;
    // NOP
    // 0x273bf0: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x273bf0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x273bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x273BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273BF4u;
        // 0x273bf8: 0xe48c0320  swc1        $f12, 0x320($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 800), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273BFCu;
    // 0x273bfc: 0x0  nop
    ctx->pc = 0x273bfcu;
    // NOP
    ctx->pc = 0x273c00u;
}
