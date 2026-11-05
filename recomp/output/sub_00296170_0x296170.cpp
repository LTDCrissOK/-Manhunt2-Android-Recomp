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

// Function: sub_00296170
// Address: 0x296170 - 0x296198
void sub_00296170_0x296170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296170_0x296170");
#endif

    ctx->pc = 0x296170u;

    // 0x296170: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x296170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x296174: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x296174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x296178: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x296178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x29617c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x29617cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x296180: 0xe44ca8b0  swc1        $f12, -0x5750($v0)
    ctx->pc = 0x296180u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FA8B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA8B0u, _value); } while (0); }
    // 0x296184: 0xe46da8b4  swc1        $f13, -0x574C($v1)
    ctx->pc = 0x296184u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FA8B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA8B4u, _value); } while (0); }
    // 0x296188: 0xe48ea8b8  swc1        $f14, -0x5748($a0)
    ctx->pc = 0x296188u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FA8B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA8B8u, _value); } while (0); }
    // 0x29618c: 0x3e00008  jr          $ra
    ctx->pc = 0x29618Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29618Cu;
        // 0x296190: 0xe4afa8bc  swc1        $f15, -0x5744($a1) (Delay Slot)
        { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294944956), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29618Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296194u;
    // 0x296194: 0x0  nop
    ctx->pc = 0x296194u;
    // NOP
    ctx->pc = 0x296198u;
}
