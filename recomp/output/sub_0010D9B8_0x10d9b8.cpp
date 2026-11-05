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

// Function: sub_0010D9B8
// Address: 0x10d9b8 - 0x10dab8
void sub_0010D9B8_0x10d9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D9B8_0x10d9b8");
#endif

    switch (ctx->pc) {
        case 0x10da0cu: goto label_10da0c;
        case 0x10da94u: goto label_10da94;
        default: break;
    }

    ctx->pc = 0x10d9b8u;

    // 0x10d9b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10d9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10d9bc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x10d9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x10d9c0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x10d9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x10d9c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10d9c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d9c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10d9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10d9cc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10d9ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d9d0: 0x12000032  beqz        $s0, . + 4 + (0x32 << 2)
    ctx->pc = 0x10D9D0u;
    {
        const bool branch_taken_0x10d9d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D9D0u;
        // 0x10d9d4: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d9d0) {
            ctx->pc = 0x10DA9Cu;
            goto label_10da9c;
        }
    }
    ctx->pc = 0x10D9D8u;
    // 0x10d9d8: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
    ctx->pc = 0x10D9D8u;
    {
        const bool branch_taken_0x10d9d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D9D8u;
        // 0x10d9dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d9d8) {
            ctx->pc = 0x10DAA0u;
            goto label_10daa0;
        }
    }
    ctx->pc = 0x10D9E0u;
    // 0x10d9e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10d9e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10d9e4: 0x0  nop
    ctx->pc = 0x10d9e4u;
    // NOP
    // 0x10d9e8: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x10d9e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10d9ec: 0x0  nop
    ctx->pc = 0x10d9ecu;
    // NOP
    // 0x10d9f0: 0x4503002c  bc1tl       . + 4 + (0x2C << 2)
    ctx->pc = 0x10D9F0u;
    {
        const bool branch_taken_0x10d9f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10d9f0) {
            ctx->pc = 0x10D9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D9F0u;
            // 0x10d9f4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DAA4u;
            goto label_10daa4;
        }
    }
    ctx->pc = 0x10D9F8u;
    // 0x10d9f8: 0x460c6502  mul.s       $f20, $f12, $f12
    ctx->pc = 0x10d9f8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x10d9fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10d9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10da00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10da00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10da04: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x10DA04u;
    SET_GPR_U32(ctx, 31, 0x10DA0Cu);
    ctx->pc = 0x10DA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DA04u;
    // 0x10da08: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x10DA04u, 0x10DA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DA0Cu;
label_10da0c:
    // 0x10da0c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x10da0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10da10: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x10da10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10da14: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x10da14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x10da18: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x10da18u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x10da1c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x10da1cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x10da20: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x10da20u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x10da24: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x10da24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10da28: 0x0  nop
    ctx->pc = 0x10da28u;
    // NOP
    // 0x10da2c: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x10DA2Cu;
    {
        const bool branch_taken_0x10da2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10DA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA2Cu;
        // 0x10da30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da2c) {
            ctx->pc = 0x10DAA0u;
            goto label_10daa0;
        }
    }
    ctx->pc = 0x10DA34u;
    // 0x10da34: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x10da34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10da38: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x10da38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10da3c: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x10da3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10da40: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10da40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10da44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10da44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10da48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10da48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10da4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10da4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10da50: 0xc606000c  lwc1        $f6, 0xC($s0)
    ctx->pc = 0x10da50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x10da54: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x10da54u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x10da58: 0xc627000c  lwc1        $f7, 0xC($s1)
    ctx->pc = 0x10da58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x10da5c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x10da5cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x10da60: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x10da60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10da64: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x10da64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10da68: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x10da68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x10da6c: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x10da6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x10da70: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x10da70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x10da74: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x10da74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x10da78: 0xe7a6000c  swc1        $f6, 0xC($sp)
    ctx->pc = 0x10da78u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x10da7c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x10da7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x10da80: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x10da80u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x10da84: 0xe7a50018  swc1        $f5, 0x18($sp)
    ctx->pc = 0x10da84u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x10da88: 0xe7a7001c  swc1        $f7, 0x1C($sp)
    ctx->pc = 0x10da88u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x10da8c: 0xc041032  jal         func_1040C8
    ctx->pc = 0x10DA8Cu;
    SET_GPR_U32(ctx, 31, 0x10DA94u);
    ctx->pc = 0x10DA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DA8Cu;
    // 0x10da90: 0xe7a30014  swc1        $f3, 0x14($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1040C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1040C8u, 0x10DA8Cu, 0x10DA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DA94u;
label_10da94:
    // 0x10da94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10DA94u;
    {
        const bool branch_taken_0x10da94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA94u;
        // 0x10da98: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da94) {
            ctx->pc = 0x10DAA4u;
            goto label_10daa4;
        }
    }
    ctx->pc = 0x10DA9Cu;
label_10da9c:
    // 0x10da9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10da9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10daa0:
    // 0x10daa0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10daa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10daa4:
    // 0x10daa4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x10daa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10daa8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10daa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10daac: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x10daacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10dab0: 0x3e00008  jr          $ra
    ctx->pc = 0x10DAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DAB0u;
        // 0x10dab4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DAB8u;
}
