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

// Function: sub_0037D2F8
// Address: 0x37d2f8 - 0x37d330
void sub_0037D2F8_0x37d2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D2F8_0x37d2f8");
#endif

    switch (ctx->pc) {
        case 0x37d30cu: goto label_37d30c;
        default: break;
    }

    ctx->pc = 0x37d2f8u;

    // 0x37d2f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x37d2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x37d2fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x37d2fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d300: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x37d300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d304: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x37d304u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x37d308: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x37d308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_37d30c:
    // 0x37d30c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x37d30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x37d310: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x37d310u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x37d314: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x37d314u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x37d318: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x37d318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x37d31c: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x37d31cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x37d320: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x37d320u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x37d324: 0x3e00008  jr          $ra
    ctx->pc = 0x37D324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D324u;
        // 0x37d328: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D32Cu;
    // 0x37d32c: 0x0  nop
    ctx->pc = 0x37d32cu;
    // NOP
    ctx->pc = 0x37d330u;
}
