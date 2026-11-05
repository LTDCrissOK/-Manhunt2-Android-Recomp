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

// Function: sub_00260A68
// Address: 0x260a68 - 0x260b20
void sub_00260A68_0x260a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260A68_0x260a68");
#endif

    switch (ctx->pc) {
        case 0x260af8u: goto label_260af8;
        case 0x260b10u: goto label_260b10;
        default: break;
    }

    ctx->pc = 0x260a68u;

    // 0x260a68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x260a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x260a6c: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x260a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x260a70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x260a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260a74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x260a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x260a78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x260a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x260a7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x260a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260a80: 0xc6020244  lwc1        $f2, 0x244($s0)
    ctx->pc = 0x260a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x260a84: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x260a84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x260a88: 0x0  nop
    ctx->pc = 0x260a88u;
    // NOP
    // 0x260a8c: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x260A8Cu;
    {
        const bool branch_taken_0x260a8c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x260A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260A8Cu;
        // 0x260a90: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260a8c) {
            ctx->pc = 0x260B08u;
            goto label_260b08;
        }
    }
    ctx->pc = 0x260A94u;
    // 0x260a94: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x260a94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x260a98: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x260a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260a9c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x260a9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x260aa0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x260aa0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x260aa4: 0x0  nop
    ctx->pc = 0x260aa4u;
    // NOP
    // 0x260aa8: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x260AA8u;
    {
        const bool branch_taken_0x260aa8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x260AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260AA8u;
        // 0x260aac: 0xe6000244  swc1        $f0, 0x244($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 580), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x260aa8) {
            ctx->pc = 0x260B08u;
            goto label_260b08;
        }
    }
    ctx->pc = 0x260AB0u;
    // 0x260ab0: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x260ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x260ab4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x260ab4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260ab8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x260ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x260abc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x260ABCu;
    {
        const bool branch_taken_0x260abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x260AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260ABCu;
        // 0x260ac0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260abc) {
            ctx->pc = 0x260AD0u;
            goto label_260ad0;
        }
    }
    ctx->pc = 0x260AC4u;
    // 0x260ac4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x260ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x260ac8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x260AC8u;
    {
        const bool branch_taken_0x260ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x260ac8) {
            ctx->pc = 0x260AD4u;
            goto label_260ad4;
        }
    }
    ctx->pc = 0x260AD0u;
label_260ad0:
    // 0x260ad0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x260ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_260ad4:
    // 0x260ad4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x260AD4u;
    {
        const bool branch_taken_0x260ad4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x260AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260AD4u;
        // 0x260ad8: 0x34620080  ori         $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x260ad4) {
            ctx->pc = 0x260AF0u;
            goto label_260af0;
        }
    }
    ctx->pc = 0x260ADCu;
    // 0x260adc: 0x8e040144  lw          $a0, 0x144($s0)
    ctx->pc = 0x260adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x260ae0: 0x28830008  slti        $v1, $a0, 0x8
    ctx->pc = 0x260ae0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x260ae4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x260AE4u;
    {
        const bool branch_taken_0x260ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x260AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260AE4u;
        // 0x260ae8: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260ae4) {
            ctx->pc = 0x260B00u;
            goto label_260b00;
        }
    }
    ctx->pc = 0x260AECu;
    // 0x260aec: 0xae000144  sw          $zero, 0x144($s0)
    ctx->pc = 0x260aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
label_260af0:
    // 0x260af0: 0xc0837b4  jal         func_20DED0
    ctx->pc = 0x260AF0u;
    SET_GPR_U32(ctx, 31, 0x260AF8u);
    ctx->pc = 0x260AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260AF0u;
    // 0x260af4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DED0u, 0x260AF0u, 0x260AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260AF8u;
label_260af8:
    // 0x260af8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x260AF8u;
    {
        const bool branch_taken_0x260af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260af8) {
            ctx->pc = 0x260B08u;
            goto label_260b08;
        }
    }
    ctx->pc = 0x260B00u;
label_260b00:
    // 0x260b00: 0x2482fff8  addiu       $v0, $a0, -0x8
    ctx->pc = 0x260b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x260b04: 0xae020144  sw          $v0, 0x144($s0)
    ctx->pc = 0x260b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 2));
label_260b08:
    // 0x260b08: 0xc08734c  jal         func_21CD30
    ctx->pc = 0x260B08u;
    SET_GPR_U32(ctx, 31, 0x260B10u);
    ctx->pc = 0x260B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260B08u;
    // 0x260b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CD30u, 0x260B08u, 0x260B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260B10u;
label_260b10:
    // 0x260b10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x260b10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260b14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x260b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x260b18: 0x3e00008  jr          $ra
    ctx->pc = 0x260B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B18u;
        // 0x260b1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260B20u;
}
