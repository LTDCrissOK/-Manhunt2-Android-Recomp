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

// Function: sub_002C4718
// Address: 0x2c4718 - 0x2c4740
void sub_002C4718_0x2c4718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4718_0x2c4718");
#endif

    ctx->pc = 0x2c4718u;

    // 0x2c4718: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x2c4718u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2c471c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c471cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4720: 0xe48d0004  swc1        $f13, 0x4($a0)
    ctx->pc = 0x2c4720u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2c4724: 0xe48e0008  swc1        $f14, 0x8($a0)
    ctx->pc = 0x2c4724u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2c4728: 0xe48f000c  swc1        $f15, 0xC($a0)
    ctx->pc = 0x2c4728u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2c472c: 0xe4900010  swc1        $f16, 0x10($a0)
    ctx->pc = 0x2c472cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2c4730: 0xe4910014  swc1        $f17, 0x14($a0)
    ctx->pc = 0x2c4730u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2c4734: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4734u;
        // 0x2c4738: 0xe4920018  swc1        $f18, 0x18($a0) (Delay Slot)
        { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C473Cu;
    // 0x2c473c: 0x0  nop
    ctx->pc = 0x2c473cu;
    // NOP
    ctx->pc = 0x2c4740u;
}
