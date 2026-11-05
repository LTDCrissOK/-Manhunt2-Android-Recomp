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

// Function: sub_0028BBF0
// Address: 0x28bbf0 - 0x28bc98
void sub_0028BBF0_0x28bbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028BBF0_0x28bbf0");
#endif

    switch (ctx->pc) {
        case 0x28bc38u: goto label_28bc38;
        case 0x28bc58u: goto label_28bc58;
        default: break;
    }

    ctx->pc = 0x28bbf0u;

    // 0x28bbf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28bbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x28bbf4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x28bbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x28bbf8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x28bbf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x28bbfc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x28bbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28bc00: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x28bc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x28bc04: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x28bc04u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x28bc08: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x28bc08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28bc0c: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x28bc0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x28bc10: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x28bc10u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x28bc14: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x28bc14u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x28bc18: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x28bc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x28bc1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bc20: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x28bc20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x28bc24: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x28bc24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x28bc28: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28bc28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28bc2c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x28bc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x28bc30: 0xc0a2ebc  jal         func_28BAF0
    ctx->pc = 0x28BC30u;
    SET_GPR_U32(ctx, 31, 0x28BC38u);
    ctx->pc = 0x28BC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BC30u;
    // 0x28bc34: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BAF0u, 0x28BC30u, 0x28BC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC38u;
label_28bc38:
    // 0x28bc38: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x28bc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28bc3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bc40: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x28bc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28bc44: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x28bc44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x28bc48: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x28bc48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28bc4c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x28bc4cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x28bc50: 0xc0a2ebc  jal         func_28BAF0
    ctx->pc = 0x28BC50u;
    SET_GPR_U32(ctx, 31, 0x28BC58u);
    ctx->pc = 0x28BC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BC50u;
    // 0x28bc54: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BAF0u, 0x28BC50u, 0x28BC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC58u;
label_28bc58:
    // 0x28bc58: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x28bc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28bc5c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x28bc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28bc60: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x28bc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28bc64: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28bc64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28bc68: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x28bc68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28bc6c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x28bc6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x28bc70: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x28bc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x28bc74: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x28bc74u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x28bc78: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x28bc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28bc7c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x28bc7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x28bc80: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x28bc80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x28bc84: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x28bc84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x28bc88: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x28bc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x28bc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x28BC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC8Cu;
        // 0x28bc90: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28BC94u;
    // 0x28bc94: 0x0  nop
    ctx->pc = 0x28bc94u;
    // NOP
    ctx->pc = 0x28bc98u;
}
