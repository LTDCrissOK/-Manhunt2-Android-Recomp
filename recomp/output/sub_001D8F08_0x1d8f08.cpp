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

// Function: sub_001D8F08
// Address: 0x1d8f08 - 0x1d8fc8
void sub_001D8F08_0x1d8f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8F08_0x1d8f08");
#endif

    switch (ctx->pc) {
        case 0x1d8f40u: goto label_1d8f40;
        default: break;
    }

    ctx->pc = 0x1d8f08u;

    // 0x1d8f08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8f0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8f10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d8f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d8f14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d8f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8f18: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1d8f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d8f1c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d8f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d8f20: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8F20u;
    {
        const bool branch_taken_0x1d8f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8f20) {
            ctx->pc = 0x1D8F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8F20u;
            // 0x1d8f24: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8F30u;
            goto label_1d8f30;
        }
    }
    ctx->pc = 0x1D8F28u;
    // 0x1d8f28: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1D8F28u;
    {
        const bool branch_taken_0x1d8f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8F28u;
        // 0x1d8f2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8f28) {
            ctx->pc = 0x1D8FB4u;
            goto label_1d8fb4;
        }
    }
    ctx->pc = 0x1D8F30u;
label_1d8f30:
    // 0x1d8f30: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D8F30u;
    {
        const bool branch_taken_0x1d8f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8f30) {
            ctx->pc = 0x1D8F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8F30u;
            // 0x1d8f34: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8F84u;
            goto label_1d8f84;
        }
    }
    ctx->pc = 0x1D8F38u;
    // 0x1d8f38: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1D8F38u;
    SET_GPR_U32(ctx, 31, 0x1D8F40u);
    ctx->pc = 0x1D8F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8F38u;
    // 0x1d8f3c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1D8F38u, 0x1D8F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8F40u;
label_1d8f40:
    // 0x1d8f40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d8f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d8f44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d8f44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8f48: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x1d8f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1d8f4c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1d8f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1d8f50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d8f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d8f54: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x1d8f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1d8f58: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1d8f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1d8f5c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1d8f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1d8f60: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1d8f60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1d8f64: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1d8f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d8f68: 0xe4410030  swc1        $f1, 0x30($v0)
    ctx->pc = 0x1d8f68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x1d8f6c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1d8f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d8f70: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1d8f70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1d8f74: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1d8f74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1d8f78: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1d8f78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1d8f7c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1d8f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1d8f80: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d8f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d8f84:
    // 0x1d8f84: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1d8f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d8f88: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d8f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d8f8c: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x1d8f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d8f90: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1d8f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1d8f94: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x1d8f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d8f98: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d8f98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d8f9c: 0xf8810020  sqc2        $vf1, 0x20($a0)
    ctx->pc = 0x1d8f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d8fa0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1d8fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1d8fa4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1d8fa4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d8fa8: 0xf8810030  sqc2        $vf1, 0x30($a0)
    ctx->pc = 0x1d8fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d8fac: 0xac860040  sw          $a2, 0x40($a0)
    ctx->pc = 0x1d8facu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 6));
    // 0x1d8fb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8fb4:
    // 0x1d8fb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8fb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8fb8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d8fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8FBCu;
        // 0x1d8fc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8FC4u;
    // 0x1d8fc4: 0x0  nop
    ctx->pc = 0x1d8fc4u;
    // NOP
    ctx->pc = 0x1d8fc8u;
}
