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

// Function: sub_00286020
// Address: 0x286020 - 0x286058
void sub_00286020_0x286020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286020_0x286020");
#endif

    ctx->pc = 0x286020u;

    // 0x286020: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x286020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x286024: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x286024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x286028: 0xc441a420  lwc1        $f1, -0x5BE0($v0)
    ctx->pc = 0x286028u;
    { uint32_t bits = FAST_READ32(0x3FA420u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28602c: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x28602cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x286030: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x286030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x286034: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x286034u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x286038: 0xc460a424  lwc1        $f0, -0x5BDC($v1)
    ctx->pc = 0x286038u;
    { uint32_t bits = FAST_READ32(0x3FA424u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28603c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x28603cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x286040: 0xc501a428  lwc1        $f1, -0x5BD8($t0)
    ctx->pc = 0x286040u;
    { uint32_t bits = FAST_READ32(0x3FA428u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286044: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x286044u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x286048: 0xc440a42c  lwc1        $f0, -0x5BD4($v0)
    ctx->pc = 0x286048u;
    { uint32_t bits = FAST_READ32(0x3FA42Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28604c: 0x3e00008  jr          $ra
    ctx->pc = 0x28604Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28604Cu;
        // 0x286050: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28604Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286054u;
    // 0x286054: 0x0  nop
    ctx->pc = 0x286054u;
    // NOP
    ctx->pc = 0x286058u;
}
