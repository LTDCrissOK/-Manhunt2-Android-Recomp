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

// Function: sub_003EE3A0
// Address: 0x3ee3a0 - 0x3ee468
void sub_003EE3A0_0x3ee3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EE3A0_0x3ee3a0");
#endif

    ctx->pc = 0x3ee3a0u;

    // 0x3ee3a0: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EE3A0u;
    {
        const bool branch_taken_0x3ee3a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE3A0u;
        // 0x3ee3a4: 0x8c8211c0  lw          $v0, 0x11C0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee3a0) {
            ctx->pc = 0x3EE3B4u;
            goto label_3ee3b4;
        }
    }
    ctx->pc = 0x3EE3A8u;
    // 0x3ee3a8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3ee3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3ee3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3EE3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE3ACu;
        // 0x3ee3b0: 0xac8211c0  sw          $v0, 0x11C0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EE3B4u;
label_3ee3b4:
    // 0x3ee3b4: 0x51827  nor         $v1, $zero, $a1
    ctx->pc = 0x3ee3b4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x3ee3b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3ee3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3ee3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3EE3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE3BCu;
        // 0x3ee3c0: 0xac8211c0  sw          $v0, 0x11C0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EE3C4u;
    // 0x3ee3c4: 0x0  nop
    ctx->pc = 0x3ee3c4u;
    // NOP
    // 0x3ee3c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3ee3c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3ee3cc: 0x0  nop
    ctx->pc = 0x3ee3ccu;
    // NOP
    // 0x3ee3d0: 0xac8211c0  sw          $v0, 0x11C0($a0)
    ctx->pc = 0x3ee3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4544), GPR_U32(ctx, 2));
    // 0x3ee3d4: 0x0  nop
    ctx->pc = 0x3ee3d4u;
    // NOP
    // 0x3ee3d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3ee3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3ee3dc: 0x0  nop
    ctx->pc = 0x3ee3dcu;
    // NOP
    // 0x3ee3e0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3ee3e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee3e4: 0x0  nop
    ctx->pc = 0x3ee3e4u;
    // NOP
    // 0x3ee3e8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3ee3e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee3ec: 0x0  nop
    ctx->pc = 0x3ee3ecu;
    // NOP
    // 0x3ee3f0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3ee3f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee3f4: 0x0  nop
    ctx->pc = 0x3ee3f4u;
    // NOP
    // 0x3ee3f8: 0x0  nop
    ctx->pc = 0x3ee3f8u;
    // NOP
    // 0x3ee3fc: 0x0  nop
    ctx->pc = 0x3ee3fcu;
    // NOP
    // 0x3ee400: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ee400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ee404: 0x0  nop
    ctx->pc = 0x3ee404u;
    // NOP
    // 0x3ee408: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ee408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ee40c: 0x0  nop
    ctx->pc = 0x3ee40cu;
    // NOP
    // 0x3ee410: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3ee410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x3ee414: 0x0  nop
    ctx->pc = 0x3ee414u;
    // NOP
    // 0x3ee418: 0xac8011b4  sw          $zero, 0x11B4($a0)
    ctx->pc = 0x3ee418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4532), GPR_U32(ctx, 0));
    // 0x3ee41c: 0x0  nop
    ctx->pc = 0x3ee41cu;
    // NOP
    // 0x3ee420: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3ee420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3ee424: 0x0  nop
    ctx->pc = 0x3ee424u;
    // NOP
    // 0x3ee428: 0xa08211bc  sb          $v0, 0x11BC($a0)
    ctx->pc = 0x3ee428u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4540), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee42c: 0x0  nop
    ctx->pc = 0x3ee42cu;
    // NOP
    // 0x3ee430: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x3ee430u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3ee434: 0x0  nop
    ctx->pc = 0x3ee434u;
    // NOP
    // 0x3ee438: 0xe44c0014  swc1        $f12, 0x14($v0)
    ctx->pc = 0x3ee438u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x3ee43c: 0x0  nop
    ctx->pc = 0x3ee43cu;
    // NOP
    // 0x3ee440: 0xe44c0020  swc1        $f12, 0x20($v0)
    ctx->pc = 0x3ee440u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x3ee444: 0x0  nop
    ctx->pc = 0x3ee444u;
    // NOP
    // 0x3ee448: 0xe44c0000  swc1        $f12, 0x0($v0)
    ctx->pc = 0x3ee448u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3ee44c: 0x0  nop
    ctx->pc = 0x3ee44cu;
    // NOP
    // 0x3ee450: 0xe44c0000  swc1        $f12, 0x0($v0)
    ctx->pc = 0x3ee450u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3ee454: 0x0  nop
    ctx->pc = 0x3ee454u;
    // NOP
    // 0x3ee458: 0xe44c0000  swc1        $f12, 0x0($v0)
    ctx->pc = 0x3ee458u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3ee45c: 0x0  nop
    ctx->pc = 0x3ee45cu;
    // NOP
    // 0x3ee460: 0xe44c0000  swc1        $f12, 0x0($v0)
    ctx->pc = 0x3ee460u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3ee464: 0x0  nop
    ctx->pc = 0x3ee464u;
    // NOP
    ctx->pc = 0x3ee468u;
}
