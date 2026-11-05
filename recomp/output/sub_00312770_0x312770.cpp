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

// Function: sub_00312770
// Address: 0x312770 - 0x3127d8
void sub_00312770_0x312770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312770_0x312770");
#endif

    ctx->pc = 0x312770u;

    // 0x312770: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x312770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x312774: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x312774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312778: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x312778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31277c: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x31277cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x312780: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x312780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x312784: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x312784u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x312788: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x312788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x31278c: 0xa082000c  sb          $v0, 0xC($a0)
    ctx->pc = 0x31278cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x312790: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x312790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x312794: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x312794u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x312798: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x312798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31279c: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x31279cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x3127a0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3127a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3127a4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3127a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3127a8: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x3127a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x3127ac: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x3127acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x3127b0: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x3127b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x3127b4: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x3127b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x3127b8: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x3127b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x3127bc: 0xaca0bce4  sw          $zero, -0x431C($a1)
    ctx->pc = 0x3127bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FBCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBCE4u, _value); } while (0);
    // 0x3127c0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3127c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3127c4: 0x38630005  xori        $v1, $v1, 0x5
    ctx->pc = 0x3127c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
    // 0x3127c8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3127c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3127cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3127CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3127D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3127CCu;
        // 0x3127d0: 0xa0c3bce8  sb          $v1, -0x4318($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 4294950120), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3127CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3127D4u;
    // 0x3127d4: 0x0  nop
    ctx->pc = 0x3127d4u;
    // NOP
    ctx->pc = 0x3127d8u;
}
