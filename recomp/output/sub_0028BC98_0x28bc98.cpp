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

// Function: sub_0028BC98
// Address: 0x28bc98 - 0x28bda8
void sub_0028BC98_0x28bc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028BC98_0x28bc98");
#endif

    switch (ctx->pc) {
        case 0x28bcb8u: goto label_28bcb8;
        case 0x28bd34u: goto label_28bd34;
        case 0x28bd78u: goto label_28bd78;
        default: break;
    }

    ctx->pc = 0x28bc98u;

    // 0x28bc98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28bc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28bc9c: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x28bc9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x28bca0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28bca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bca4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x28bca4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x28bca8: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x28bca8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x28bcac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28bcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28bcb0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x28BCB0u;
    SET_GPR_U32(ctx, 31, 0x28BCB8u);
    ctx->pc = 0x28BCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BCB0u;
    // 0x28bcb4: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x28BCB0u, 0x28BCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BCB8u;
label_28bcb8:
    // 0x28bcb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28bcb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28bcbc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28bcbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28bcc0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x28bcc0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x28bcc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28bcc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28bcc8: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x28bcc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28bccc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x28bcccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x28bcd0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x28bcd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28bcd4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x28BCD4u;
    {
        const bool branch_taken_0x28bcd4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28BCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCD4u;
        // 0x28bcd8: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bcd4) {
            ctx->pc = 0x28BCF8u;
            goto label_28bcf8;
        }
    }
    ctx->pc = 0x28BCDCu;
    // 0x28bcdc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x28bcdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x28bce0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28bce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28bce4: 0x0  nop
    ctx->pc = 0x28bce4u;
    // NOP
    // 0x28bce8: 0x46016834  c.lt.s      $f13, $f1
    ctx->pc = 0x28bce8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28bcec: 0x0  nop
    ctx->pc = 0x28bcecu;
    // NOP
    // 0x28bcf0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28BCF0u;
    {
        const bool branch_taken_0x28bcf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28bcf0) {
            ctx->pc = 0x28BCFCu;
            goto label_28bcfc;
        }
    }
    ctx->pc = 0x28BCF8u;
label_28bcf8:
    // 0x28bcf8: 0x46000b46  mov.s       $f13, $f1
    ctx->pc = 0x28bcf8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[1]);
label_28bcfc:
    // 0x28bcfc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x28bcfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28bd00: 0x0  nop
    ctx->pc = 0x28bd00u;
    // NOP
    // 0x28bd04: 0x46150836  c.le.s      $f1, $f21
    ctx->pc = 0x28bd04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28bd08: 0x0  nop
    ctx->pc = 0x28bd08u;
    // NOP
    // 0x28bd0c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x28BD0Cu;
    {
        const bool branch_taken_0x28bd0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28bd0c) {
            ctx->pc = 0x28BD48u;
            goto label_28bd48;
        }
    }
    ctx->pc = 0x28BD14u;
    // 0x28bd14: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x28bd14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x28bd18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28bd18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28bd1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28bd1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28bd20: 0x0  nop
    ctx->pc = 0x28bd20u;
    // NOP
    // 0x28bd24: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x28bd24u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x28bd28: 0x460c0304  c1          0xC0304
    ctx->pc = 0x28bd28u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x28bd2c: 0xc0e404c  jal         func_390130
    ctx->pc = 0x28BD2Cu;
    SET_GPR_U32(ctx, 31, 0x28BD34u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x28BD2Cu, 0x28BD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BD34u;
label_28bd34:
    // 0x28bd34: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x28bd34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x28bd38: 0x34212ee1  ori         $at, $at, 0x2EE1
    ctx->pc = 0x28bd38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12001);
    // 0x28bd3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28bd3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28bd40: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x28BD40u;
    {
        const bool branch_taken_0x28bd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD40u;
        // 0x28bd44: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd40) {
            ctx->pc = 0x28BD94u;
            goto label_28bd94;
        }
    }
    ctx->pc = 0x28BD48u;
label_28bd48:
    // 0x28bd48: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x28bd48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28bd4c: 0x0  nop
    ctx->pc = 0x28bd4cu;
    // NOP
    // 0x28bd50: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x28BD50u;
    {
        const bool branch_taken_0x28bd50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28BD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD50u;
        // 0x28bd54: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd50) {
            ctx->pc = 0x28BD98u;
            goto label_28bd98;
        }
    }
    ctx->pc = 0x28BD58u;
    // 0x28bd58: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x28bd58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x28bd5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28bd5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28bd60: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28bd60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28bd64: 0x0  nop
    ctx->pc = 0x28bd64u;
    // NOP
    // 0x28bd68: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x28bd68u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x28bd6c: 0x460c0304  c1          0xC0304
    ctx->pc = 0x28bd6cu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x28bd70: 0xc0e404c  jal         func_390130
    ctx->pc = 0x28BD70u;
    SET_GPR_U32(ctx, 31, 0x28BD78u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x28BD70u, 0x28BD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BD78u;
label_28bd78:
    // 0x28bd78: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x28bd78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x28bd7c: 0x34212ee1  ori         $at, $at, 0x2EE1
    ctx->pc = 0x28bd7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12001);
    // 0x28bd80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28bd80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28bd84: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x28bd84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x28bd88: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28bd88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28bd8c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28bd8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28bd90: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x28bd90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_28bd94:
    // 0x28bd94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28bd94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28bd98:
    // 0x28bd98: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x28bd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x28bd9c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x28bd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28bda0: 0x3e00008  jr          $ra
    ctx->pc = 0x28BDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDA0u;
        // 0x28bda4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BDA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28BDA8u;
}
