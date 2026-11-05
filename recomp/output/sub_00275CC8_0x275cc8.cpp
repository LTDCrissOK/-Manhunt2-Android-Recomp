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

// Function: sub_00275CC8
// Address: 0x275cc8 - 0x275ce8
void sub_00275CC8_0x275cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275CC8_0x275cc8");
#endif

    ctx->pc = 0x275cc8u;

    // 0x275cc8: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x275cc8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x275ccc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x275cccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275cd0: 0xe48d0004  swc1        $f13, 0x4($a0)
    ctx->pc = 0x275cd0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x275cd4: 0xe48e0008  swc1        $f14, 0x8($a0)
    ctx->pc = 0x275cd4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x275cd8: 0xa0850010  sb          $a1, 0x10($a0)
    ctx->pc = 0x275cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x275cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x275CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275CDCu;
        // 0x275ce0: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275CE4u;
    // 0x275ce4: 0x0  nop
    ctx->pc = 0x275ce4u;
    // NOP
    ctx->pc = 0x275ce8u;
}
