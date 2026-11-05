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

// Function: sub_0036CE40
// Address: 0x36ce40 - 0x36cec0
void sub_0036CE40_0x36ce40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036CE40_0x36ce40");
#endif

    switch (ctx->pc) {
        case 0x36ce68u: goto label_36ce68;
        case 0x36ce78u: goto label_36ce78;
        case 0x36cea8u: goto label_36cea8;
        default: break;
    }

    ctx->pc = 0x36ce40u;

    // 0x36ce40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36ce40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36ce44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36ce44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36ce48: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x36ce48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x36ce4c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x36ce4cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x36ce50: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x36ce50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36ce54: 0x0  nop
    ctx->pc = 0x36ce54u;
    // NOP
    // 0x36ce58: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x36CE58u;
    {
        const bool branch_taken_0x36ce58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x36CE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CE58u;
        // 0x36ce5c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ce58) {
            ctx->pc = 0x36CE70u;
            goto label_36ce70;
        }
    }
    ctx->pc = 0x36CE60u;
    // 0x36ce60: 0xc0dd110  jal         func_374440
    ctx->pc = 0x36CE60u;
    SET_GPR_U32(ctx, 31, 0x36CE68u);
    ctx->pc = 0x36CE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CE60u;
    // 0x36ce64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374440u, 0x36CE60u, 0x36CE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CE68u;
label_36ce68:
    // 0x36ce68: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x36CE68u;
    {
        const bool branch_taken_0x36ce68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CE68u;
        // 0x36ce6c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ce68) {
            ctx->pc = 0x36CEACu;
            goto label_36ceac;
        }
    }
    ctx->pc = 0x36CE70u;
label_36ce70:
    // 0x36ce70: 0xc0dd110  jal         func_374440
    ctx->pc = 0x36CE70u;
    SET_GPR_U32(ctx, 31, 0x36CE78u);
    ctx->pc = 0x36CE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CE70u;
    // 0x36ce74: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374440u, 0x36CE70u, 0x36CE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CE78u;
label_36ce78:
    // 0x36ce78: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x36ce78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x36ce7c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x36ce7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x36ce80: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x36ce80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x36ce84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x36ce84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36ce88: 0xc440cbe4  lwc1        $f0, -0x341C($v0)
    ctx->pc = 0x36ce88u;
    { uint32_t bits = FAST_READ32(0x3FCBE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ce8c: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x36ce8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x36ce90: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x36ce90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x36ce94: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x36ce94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x36ce98: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x36ce98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x36ce9c: 0x46006b41  sub.s       $f13, $f13, $f0
    ctx->pc = 0x36ce9cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x36cea0: 0xc0dd0fe  jal         func_3743F8
    ctx->pc = 0x36CEA0u;
    SET_GPR_U32(ctx, 31, 0x36CEA8u);
    ctx->pc = 0x36CEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CEA0u;
    // 0x36cea4: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3743F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3743F8u, 0x36CEA0u, 0x36CEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CEA8u;
label_36cea8:
    // 0x36cea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36cea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36ceac:
    // 0x36ceac: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x36ceacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36ceb0: 0x3e00008  jr          $ra
    ctx->pc = 0x36CEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CEB0u;
        // 0x36ceb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CEB8u;
    // 0x36ceb8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x36ceb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36cebc: 0x0  nop
    ctx->pc = 0x36cebcu;
    // NOP
    ctx->pc = 0x36cec0u;
}
