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

// Function: sub_001C4980
// Address: 0x1c4980 - 0x1c4a08
void sub_001C4980_0x1c4980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4980_0x1c4980");
#endif

    ctx->pc = 0x1c4980u;

    // 0x1c4980: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1c4980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4984: 0x24880020  addiu       $t0, $a0, 0x20
    ctx->pc = 0x1c4984u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1c4988: 0x24890040  addiu       $t1, $a0, 0x40
    ctx->pc = 0x1c4988u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1c498c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c498cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1c4990: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1c4990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4994: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1c4994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1c4998: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1c4998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c499c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1c499cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1c49a0: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1c49a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1c49a4: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1c49a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1c49a8: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x1c49a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1c49ac: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1c49acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1c49b0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1c49b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c49b4: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1c49b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1c49b8: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1c49b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c49bc: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x1c49bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x1c49c0: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1c49c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c49c4: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x1c49c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x1c49c8: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x1c49c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1c49cc: 0xad020010  sw          $v0, 0x10($t0)
    ctx->pc = 0x1c49ccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 2));
    // 0x1c49d0: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x1c49d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1c49d4: 0xad030014  sw          $v1, 0x14($t0)
    ctx->pc = 0x1c49d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 3));
    // 0x1c49d8: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1c49d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c49dc: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x1c49dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x1c49e0: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x1c49e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c49e4: 0xe5210004  swc1        $f1, 0x4($t1)
    ctx->pc = 0x1c49e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x1c49e8: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x1c49e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c49ec: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x1c49ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x1c49f0: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x1c49f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1c49f4: 0xad220010  sw          $v0, 0x10($t1)
    ctx->pc = 0x1c49f4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 2));
    // 0x1c49f8: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x1c49f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1c49fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C49FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C49FCu;
        // 0x1c4a00: 0xad230014  sw          $v1, 0x14($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C49FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4A04u;
    // 0x1c4a04: 0x0  nop
    ctx->pc = 0x1c4a04u;
    // NOP
    ctx->pc = 0x1c4a08u;
}
