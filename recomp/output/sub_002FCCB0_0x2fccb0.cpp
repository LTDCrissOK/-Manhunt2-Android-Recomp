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

// Function: sub_002FCCB0
// Address: 0x2fccb0 - 0x2fcd80
void sub_002FCCB0_0x2fccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FCCB0_0x2fccb0");
#endif

    switch (ctx->pc) {
        case 0x2fccd8u: goto label_2fccd8;
        case 0x2fcd08u: goto label_2fcd08;
        case 0x2fcd14u: goto label_2fcd14;
        case 0x2fcd2cu: goto label_2fcd2c;
        case 0x2fcd38u: goto label_2fcd38;
        default: break;
    }

    ctx->pc = 0x2fccb0u;

    // 0x2fccb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2fccb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2fccb4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2fccb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2fccb8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2fccb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2fccbc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2fccbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fccc0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2fccc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2fccc4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fccc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fccc8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2fccc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2fcccc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2fccccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fccd0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2FCCD0u;
    SET_GPR_U32(ctx, 31, 0x2FCCD8u);
    ctx->pc = 0x2FCCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCCD0u;
    // 0x2fccd4: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2FCCD0u, 0x2FCCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCCD8u;
label_2fccd8:
    // 0x2fccd8: 0x8e2311e8  lw          $v1, 0x11E8($s1)
    ctx->pc = 0x2fccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
    // 0x2fccdc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2fccdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2fcce0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2fcce0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2fcce4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fcce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fcce8: 0x8c620334  lw          $v0, 0x334($v1)
    ctx->pc = 0x2fcce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 820)));
    // 0x2fccec: 0x8c5001e4  lw          $s0, 0x1E4($v0)
    ctx->pc = 0x2fccecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
    // 0x2fccf0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2fccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2fccf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fccf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fccf8: 0xc614001c  lwc1        $f20, 0x1C($s0)
    ctx->pc = 0x2fccf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fccfc: 0xc46c0010  lwc1        $f12, 0x10($v1)
    ctx->pc = 0x2fccfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fcd00: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x2FCD00u;
    SET_GPR_U32(ctx, 31, 0x2FCD08u);
    ctx->pc = 0x2FCD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCD00u;
    // 0x2fcd04: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x2FCD00u, 0x2FCD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCD08u;
label_2fcd08:
    // 0x2fcd08: 0x8e2511e8  lw          $a1, 0x11E8($s1)
    ctx->pc = 0x2fcd08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
    // 0x2fcd0c: 0xc0757d2  jal         func_1D5F48
    ctx->pc = 0x2FCD0Cu;
    SET_GPR_U32(ctx, 31, 0x2FCD14u);
    ctx->pc = 0x2FCD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCD0Cu;
    // 0x2fcd10: 0x8ca40110  lw          $a0, 0x110($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F48u, 0x2FCD0Cu, 0x2FCD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCD14u;
label_2fcd14:
    // 0x2fcd14: 0x8e2211e8  lw          $v0, 0x11E8($s1)
    ctx->pc = 0x2fcd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
    // 0x2fcd18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fcd18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcd1c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2fcd1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcd20: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x2fcd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2fcd24: 0xc0c3290  jal         func_30CA40
    ctx->pc = 0x2FCD24u;
    SET_GPR_U32(ctx, 31, 0x2FCD2Cu);
    ctx->pc = 0x2FCD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCD24u;
    // 0x2fcd28: 0x8c440104  lw          $a0, 0x104($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CA40u, 0x2FCD24u, 0x2FCD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCD2Cu;
label_2fcd2c:
    // 0x2fcd2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fcd2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcd30: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x2FCD30u;
    SET_GPR_U32(ctx, 31, 0x2FCD38u);
    ctx->pc = 0x2FCD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCD30u;
    // 0x2fcd34: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x2FCD30u, 0x2FCD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCD38u;
label_2fcd38:
    // 0x2fcd38: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2fcd38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2fcd3c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2fcd3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcd40: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2fcd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcd44: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2fcd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fcd48: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2fcd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fcd4c: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x2fcd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fcd50: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2fcd50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2fcd54: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x2fcd54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2fcd58: 0xe6420008  swc1        $f2, 0x8($s2)
    ctx->pc = 0x2fcd58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2fcd5c: 0xe643000c  swc1        $f3, 0xC($s2)
    ctx->pc = 0x2fcd5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x2fcd60: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2fcd60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fcd64: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2fcd64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fcd68: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2fcd68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fcd6c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2fcd6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fcd70: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2fcd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fcd74: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCD74u;
        // 0x2fcd78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCD74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCD7Cu;
    // 0x2fcd7c: 0x0  nop
    ctx->pc = 0x2fcd7cu;
    // NOP
    ctx->pc = 0x2fcd80u;
}
