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

// Function: sub_002E7D08
// Address: 0x2e7d08 - 0x2e7d38
void sub_002E7D08_0x2e7d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7D08_0x2e7d08");
#endif

    ctx->pc = 0x2e7d08u;

    // 0x2e7d08: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e7d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e7d0c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2e7d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2e7d10: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e7d10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e7d14: 0xc440b7f8  lwc1        $f0, -0x4808($v0)
    ctx->pc = 0x2e7d14u;
    { uint32_t bits = FAST_READ32(0x3FB7F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7d18: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2e7d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2e7d1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e7d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7d20: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2e7d20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2e7d24: 0xac8012c0  sw          $zero, 0x12C0($a0)
    ctx->pc = 0x2e7d24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4800), GPR_U32(ctx, 0));
    // 0x2e7d28: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2e7d28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e7d2c: 0xe48012c4  swc1        $f0, 0x12C4($a0)
    ctx->pc = 0x2e7d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4804), bits); }
    // 0x2e7d30: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7D30u;
        // 0x2e7d34: 0xe48112c8  swc1        $f1, 0x12C8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4808), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7D38u;
}
