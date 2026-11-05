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

// Function: sub_00255090
// Address: 0x255090 - 0x255188
void sub_00255090_0x255090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255090_0x255090");
#endif

    switch (ctx->pc) {
        case 0x255178u: goto label_255178;
        default: break;
    }

    ctx->pc = 0x255090u;

    // 0x255090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x255090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x255094: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x255094u;
    {
        const bool branch_taken_0x255094 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x255098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255094u;
        // 0x255098: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255094) {
            ctx->pc = 0x2550ACu;
            goto label_2550ac;
        }
    }
    ctx->pc = 0x25509Cu;
    // 0x25509c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x25509cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2550a0: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2550a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2550a4: 0x10e00032  beqz        $a3, . + 4 + (0x32 << 2)
    ctx->pc = 0x2550A4u;
    {
        const bool branch_taken_0x2550a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2550a4) {
            ctx->pc = 0x255170u;
            goto label_255170;
        }
    }
    ctx->pc = 0x2550ACu;
label_2550ac:
    // 0x2550ac: 0x8c82106c  lw          $v0, 0x106C($a0)
    ctx->pc = 0x2550acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4204)));
    // 0x2550b0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2550b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2550b4: 0xac871068  sw          $a3, 0x1068($a0)
    ctx->pc = 0x2550b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4200), GPR_U32(ctx, 7));
    // 0x2550b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2550b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2550bc: 0xac82106c  sw          $v0, 0x106C($a0)
    ctx->pc = 0x2550bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4204), GPR_U32(ctx, 2));
    // 0x2550c0: 0x8c622b00  lw          $v0, 0x2B00($v1)
    ctx->pc = 0x2550c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x2550c4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2550C4u;
    {
        const bool branch_taken_0x2550c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2550C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2550C4u;
        // 0x2550c8: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2550c4) {
            ctx->pc = 0x2550E0u;
            goto label_2550e0;
        }
    }
    ctx->pc = 0x2550CCu;
    // 0x2550cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2550ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2550d0: 0x0  nop
    ctx->pc = 0x2550d0u;
    // NOP
    // 0x2550d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2550d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2550d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2550D8u;
    {
        const bool branch_taken_0x2550d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2550d8) {
            ctx->pc = 0x2550FCu;
            goto label_2550fc;
        }
    }
    ctx->pc = 0x2550E0u;
label_2550e0:
    // 0x2550e0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2550e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2550e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2550e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2550e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2550e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2550ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2550ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2550f0: 0x0  nop
    ctx->pc = 0x2550f0u;
    // NOP
    // 0x2550f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2550f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2550f8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2550f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2550fc:
    // 0x2550fc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2550fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x255100: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x255100u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x255104: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x255104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255108: 0x0  nop
    ctx->pc = 0x255108u;
    // NOP
    // 0x25510c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25510cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x255110: 0xe4801074  swc1        $f0, 0x1074($a0)
    ctx->pc = 0x255110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4212), bits); }
    // 0x255114: 0x8ce21070  lw          $v0, 0x1070($a3)
    ctx->pc = 0x255114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4208)));
    // 0x255118: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x255118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25511c: 0xace21070  sw          $v0, 0x1070($a3)
    ctx->pc = 0x25511cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4208), GPR_U32(ctx, 2));
    // 0x255120: 0x8d022b00  lw          $v0, 0x2B00($t0)
    ctx->pc = 0x255120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11008)));
    // 0x255124: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x255124u;
    {
        const bool branch_taken_0x255124 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x255128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255124u;
        // 0x255128: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255124) {
            ctx->pc = 0x255140u;
            goto label_255140;
        }
    }
    ctx->pc = 0x25512Cu;
    // 0x25512c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25512cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x255130: 0x0  nop
    ctx->pc = 0x255130u;
    // NOP
    // 0x255134: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x255134u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x255138: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x255138u;
    {
        const bool branch_taken_0x255138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255138) {
            ctx->pc = 0x255158u;
            goto label_255158;
        }
    }
    ctx->pc = 0x255140u;
label_255140:
    // 0x255140: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x255140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x255144: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x255144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x255148: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x255148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25514c: 0x0  nop
    ctx->pc = 0x25514cu;
    // NOP
    // 0x255150: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x255150u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x255154: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x255154u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_255158:
    // 0x255158: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x255158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x25515c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x25515cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x255160: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x255160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255164: 0x0  nop
    ctx->pc = 0x255164u;
    // NOP
    // 0x255168: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x255168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25516c: 0xe4e01078  swc1        $f0, 0x1078($a3)
    ctx->pc = 0x25516cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4216), bits); }
label_255170:
    // 0x255170: 0xc08ad24  jal         func_22B490
    ctx->pc = 0x255170u;
    SET_GPR_U32(ctx, 31, 0x255178u);
    ctx->pc = 0x22B490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B490u, 0x255170u, 0x255178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255178u;
label_255178:
    // 0x255178: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x255178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25517c: 0x3e00008  jr          $ra
    ctx->pc = 0x25517Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25517Cu;
        // 0x255180: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25517Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255184u;
    // 0x255184: 0x0  nop
    ctx->pc = 0x255184u;
    // NOP
    ctx->pc = 0x255188u;
}
