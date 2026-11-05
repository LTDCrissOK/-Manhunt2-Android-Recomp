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

// Function: sub_001BB758
// Address: 0x1bb758 - 0x1bb788
void sub_001BB758_0x1bb758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB758_0x1bb758");
#endif

    ctx->pc = 0x1bb758u;

    // 0x1bb758: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1bb758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1bb75c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb75cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb760: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x1bb760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb764: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1bb764u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb768: 0x0  nop
    ctx->pc = 0x1bb768u;
    // NOP
    // 0x1bb76c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB76Cu;
    {
        const bool branch_taken_0x1bb76c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BB770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB76Cu;
        // 0x1bb770: 0xe480002c  swc1        $f0, 0x2C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb76c) {
            ctx->pc = 0x1BB77Cu;
            goto label_1bb77c;
        }
    }
    ctx->pc = 0x1BB774u;
    // 0x1bb774: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB774u;
        // 0x1bb778: 0xe4800030  swc1        $f0, 0x30($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB77Cu;
label_1bb77c:
    // 0x1bb77c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB77Cu;
        // 0x1bb780: 0xe4810030  swc1        $f1, 0x30($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB784u;
    // 0x1bb784: 0x0  nop
    ctx->pc = 0x1bb784u;
    // NOP
    ctx->pc = 0x1bb788u;
}
