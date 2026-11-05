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

// Function: sub_00296198
// Address: 0x296198 - 0x2961d0
void sub_00296198_0x296198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296198_0x296198");
#endif

    ctx->pc = 0x296198u;

    // 0x296198: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x296198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x29619c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x29619cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2961a0: 0xc441a8b0  lwc1        $f1, -0x5750($v0)
    ctx->pc = 0x2961a0u;
    { uint32_t bits = FAST_READ32(0x3FA8B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2961a4: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2961a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2961a8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2961a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2961ac: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x2961acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2961b0: 0xc460a8b4  lwc1        $f0, -0x574C($v1)
    ctx->pc = 0x2961b0u;
    { uint32_t bits = FAST_READ32(0x3FA8B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2961b4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2961b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2961b8: 0xc501a8b8  lwc1        $f1, -0x5748($t0)
    ctx->pc = 0x2961b8u;
    { uint32_t bits = FAST_READ32(0x3FA8B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2961bc: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x2961bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2961c0: 0xc440a8bc  lwc1        $f0, -0x5744($v0)
    ctx->pc = 0x2961c0u;
    { uint32_t bits = FAST_READ32(0x3FA8BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2961c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2961C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2961C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2961C4u;
        // 0x2961c8: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2961C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2961CCu;
    // 0x2961cc: 0x0  nop
    ctx->pc = 0x2961ccu;
    // NOP
    ctx->pc = 0x2961d0u;
}
