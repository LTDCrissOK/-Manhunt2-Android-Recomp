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

// Function: sub_00363850
// Address: 0x363850 - 0x363880
void sub_00363850_0x363850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363850_0x363850");
#endif

    ctx->pc = 0x363850u;

    // 0x363850: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x363850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x363854: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x363854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363858: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x363858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36385c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x36385cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x363860: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x363860u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x363864: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x363864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x363868: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x363868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36386c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x36386cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x363870: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x363870u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x363874: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x363874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x363878: 0x3e00008  jr          $ra
    ctx->pc = 0x363878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363878u;
        // 0x36387c: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363880u;
}
