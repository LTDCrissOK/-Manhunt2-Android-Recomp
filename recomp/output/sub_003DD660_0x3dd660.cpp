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

// Function: sub_003DD660
// Address: 0x3dd660 - 0x3dd6d8
void sub_003DD660_0x3dd660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD660_0x3dd660");
#endif

    ctx->pc = 0x3dd660u;

    // 0x3dd660: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x3dd660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3dd664: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3dd664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd668: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x3dd668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3dd66c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x3dd66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3dd670: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x3dd670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x3dd674: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3dd674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3dd678: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x3dd678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3dd67c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3dd67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3dd680: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD680u;
        // 0x3dd684: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD688u;
    // 0x3dd688: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3dd688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x3dd68c: 0x0  nop
    ctx->pc = 0x3dd68cu;
    // NOP
    // 0x3dd690: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3dd690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3dd694: 0x0  nop
    ctx->pc = 0x3dd694u;
    // NOP
    // 0x3dd698: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x3dd698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x3dd69c: 0x0  nop
    ctx->pc = 0x3dd69cu;
    // NOP
    // 0x3dd6a0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3dd6a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3dd6a4: 0x0  nop
    ctx->pc = 0x3dd6a4u;
    // NOP
    // 0x3dd6a8: 0xa0820032  sb          $v0, 0x32($a0)
    ctx->pc = 0x3dd6a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 2));
    // 0x3dd6ac: 0x0  nop
    ctx->pc = 0x3dd6acu;
    // NOP
    // 0x3dd6b0: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x3dd6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x3dd6b4: 0x0  nop
    ctx->pc = 0x3dd6b4u;
    // NOP
    // 0x3dd6b8: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x3dd6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x3dd6bc: 0x0  nop
    ctx->pc = 0x3dd6bcu;
    // NOP
    // 0x3dd6c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3dd6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3dd6c4: 0x0  nop
    ctx->pc = 0x3dd6c4u;
    // NOP
    // 0x3dd6c8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3dd6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3dd6cc: 0x0  nop
    ctx->pc = 0x3dd6ccu;
    // NOP
    // 0x3dd6d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3dd6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3dd6d4: 0x0  nop
    ctx->pc = 0x3dd6d4u;
    // NOP
    ctx->pc = 0x3dd6d8u;
}
