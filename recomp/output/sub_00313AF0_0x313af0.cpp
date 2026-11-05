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

// Function: sub_00313AF0
// Address: 0x313af0 - 0x313b90
void sub_00313AF0_0x313af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313AF0_0x313af0");
#endif

    switch (ctx->pc) {
        case 0x313b2cu: goto label_313b2c;
        case 0x313b3cu: goto label_313b3c;
        default: break;
    }

    ctx->pc = 0x313af0u;

    // 0x313af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x313af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x313af4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x313af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x313af8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x313af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x313afc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x313afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x313b00: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x313b00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x313b04: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x313B04u;
    {
        const bool branch_taken_0x313b04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x313B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B04u;
        // 0x313b08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313b04) {
            ctx->pc = 0x313B74u;
            goto label_313b74;
        }
    }
    ctx->pc = 0x313B0Cu;
    // 0x313b0c: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x313b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x313b10: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x313b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x313b14: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x313B14u;
    {
        const bool branch_taken_0x313b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x313b14) {
            ctx->pc = 0x313B74u;
            goto label_313b74;
        }
    }
    ctx->pc = 0x313B1Cu;
    // 0x313b1c: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x313B1Cu;
    {
        const bool branch_taken_0x313b1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x313b1c) {
            ctx->pc = 0x313B74u;
            goto label_313b74;
        }
    }
    ctx->pc = 0x313B24u;
    // 0x313b24: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x313B24u;
    SET_GPR_U32(ctx, 31, 0x313B2Cu);
    ctx->pc = 0x313B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313B24u;
    // 0x313b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x313B24u, 0x313B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313B2Cu;
label_313b2c:
    // 0x313b2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x313B2Cu;
    {
        const bool branch_taken_0x313b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B2Cu;
        // 0x313b30: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313b2c) {
            ctx->pc = 0x313B40u;
            goto label_313b40;
        }
    }
    ctx->pc = 0x313B34u;
    // 0x313b34: 0xc0c4900  jal         func_312400
    ctx->pc = 0x313B34u;
    SET_GPR_U32(ctx, 31, 0x313B3Cu);
    ctx->pc = 0x313B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313B34u;
    // 0x313b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x313B34u, 0x313B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313B3Cu;
label_313b3c:
    // 0x313b3c: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x313b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_313b40:
    // 0x313b40: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x313b40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x313b44: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x313b44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x313b48: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x313b48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x313b4c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x313b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x313b50: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x313b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x313b54: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x313b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x313b58: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x313b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x313b5c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x313b5cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x313b60: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x313b60u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x313b64: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x313b64u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x313b68: 0x46000004  c1          0x4
    ctx->pc = 0x313b68u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x313b6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x313B6Cu;
    {
        const bool branch_taken_0x313b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B6Cu;
        // 0x313b70: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313b6c) {
            ctx->pc = 0x313B7Cu;
            goto label_313b7c;
        }
    }
    ctx->pc = 0x313B74u;
label_313b74:
    // 0x313b74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x313b74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313b78: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x313b78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_313b7c:
    // 0x313b7c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x313b7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x313b80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x313b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x313b84: 0x3e00008  jr          $ra
    ctx->pc = 0x313B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B84u;
        // 0x313b88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313B8Cu;
    // 0x313b8c: 0x0  nop
    ctx->pc = 0x313b8cu;
    // NOP
    ctx->pc = 0x313b90u;
}
