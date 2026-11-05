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

// Function: sub_001BED60
// Address: 0x1bed60 - 0x1bed90
void sub_001BED60_0x1bed60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BED60_0x1bed60");
#endif

    ctx->pc = 0x1bed60u;

    // 0x1bed60: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x1bed60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1bed64: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x1bed64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x1bed68: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x1bed68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1bed6c: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x1bed6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x1bed70: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1bed70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bed74: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1bed74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1bed78: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1bed78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bed7c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1bed7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1bed80: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1bed80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bed84: 0x3e00008  jr          $ra
    ctx->pc = 0x1BED84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BED88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BED84u;
        // 0x1bed88: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BED84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BED8Cu;
    // 0x1bed8c: 0x0  nop
    ctx->pc = 0x1bed8cu;
    // NOP
    ctx->pc = 0x1bed90u;
}
