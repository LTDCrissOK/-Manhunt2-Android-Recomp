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

// Function: sub_002C6B80
// Address: 0x2c6b80 - 0x2c6c58
void sub_002C6B80_0x2c6b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6B80_0x2c6b80");
#endif

    ctx->pc = 0x2c6b80u;

    // 0x2c6b80: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2c6b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6b84: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2c6b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6b88: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2c6b88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c6b8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c6b8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6b90: 0x0  nop
    ctx->pc = 0x2c6b90u;
    // NOP
    // 0x2c6b94: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6B94u;
    {
        const bool branch_taken_0x2c6b94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6b94) {
            ctx->pc = 0x2C6B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6B94u;
            // 0x2c6b98: 0xc4a00010  lwc1        $f0, 0x10($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6BA8u;
            goto label_2c6ba8;
        }
    }
    ctx->pc = 0x2C6B9Cu;
    // 0x2c6b9c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c6b9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c6ba0: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x2c6ba0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c6ba4: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x2c6ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c6ba8:
    // 0x2c6ba8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c6ba8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6bac: 0x0  nop
    ctx->pc = 0x2c6bacu;
    // NOP
    // 0x2c6bb0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2C6BB0u;
    {
        const bool branch_taken_0x2c6bb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6bb0) {
            ctx->pc = 0x2C6BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6BB0u;
            // 0x2c6bb4: 0xc4810004  lwc1        $f1, 0x4($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6BC8u;
            goto label_2c6bc8;
        }
    }
    ctx->pc = 0x2C6BB8u;
    // 0x2c6bb8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c6bb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c6bbc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c6bbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c6bc0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2c6bc0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c6bc4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2c6bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c6bc8:
    // 0x2c6bc8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2c6bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6bcc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c6bccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6bd0: 0x0  nop
    ctx->pc = 0x2c6bd0u;
    // NOP
    // 0x2c6bd4: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2C6BD4u;
    {
        const bool branch_taken_0x2c6bd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6bd4) {
            ctx->pc = 0x2C6BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6BD4u;
            // 0x2c6bd8: 0xc4a00014  lwc1        $f0, 0x14($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6BECu;
            goto label_2c6bec;
        }
    }
    ctx->pc = 0x2C6BDCu;
    // 0x2c6bdc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c6bdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c6be0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c6be0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c6be4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2c6be4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c6be8: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x2c6be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c6bec:
    // 0x2c6bec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c6becu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6bf0: 0x0  nop
    ctx->pc = 0x2c6bf0u;
    // NOP
    // 0x2c6bf4: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2C6BF4u;
    {
        const bool branch_taken_0x2c6bf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6bf4) {
            ctx->pc = 0x2C6BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6BF4u;
            // 0x2c6bf8: 0xc4810008  lwc1        $f1, 0x8($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6C0Cu;
            goto label_2c6c0c;
        }
    }
    ctx->pc = 0x2C6BFCu;
    // 0x2c6bfc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c6bfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c6c00: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c6c00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c6c04: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2c6c04u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c6c08: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2c6c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c6c0c:
    // 0x2c6c0c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2c6c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6c10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c6c10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6c14: 0x0  nop
    ctx->pc = 0x2c6c14u;
    // NOP
    // 0x2c6c18: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2C6C18u;
    {
        const bool branch_taken_0x2c6c18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6c18) {
            ctx->pc = 0x2C6C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6C18u;
            // 0x2c6c1c: 0xc4a00018  lwc1        $f0, 0x18($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6C30u;
            goto label_2c6c30;
        }
    }
    ctx->pc = 0x2C6C20u;
    // 0x2c6c20: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c6c20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c6c24: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c6c24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c6c28: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2c6c28u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c6c2c: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2c6c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c6c30:
    // 0x2c6c30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c6c30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6c34: 0x0  nop
    ctx->pc = 0x2c6c34u;
    // NOP
    // 0x2c6c38: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6C38u;
    {
        const bool branch_taken_0x2c6c38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6c38) {
            ctx->pc = 0x2C6C4Cu;
            goto label_2c6c4c;
        }
    }
    ctx->pc = 0x2C6C40u;
    // 0x2c6c40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c6c40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c6c44: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c6c44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c6c48: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2c6c48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2c6c4c:
    // 0x2c6c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6C4Cu;
        // 0x2c6c50: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6C54u;
    // 0x2c6c54: 0x0  nop
    ctx->pc = 0x2c6c54u;
    // NOP
    ctx->pc = 0x2c6c58u;
}
