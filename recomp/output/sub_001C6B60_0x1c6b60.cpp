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

// Function: sub_001C6B60
// Address: 0x1c6b60 - 0x1c71d0
void sub_001C6B60_0x1c6b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6B60_0x1c6b60");
#endif

    switch (ctx->pc) {
        case 0x1c6d08u: goto label_1c6d08;
        case 0x1c6d30u: goto label_1c6d30;
        case 0x1c6e30u: goto label_1c6e30;
        case 0x1c6eb8u: goto label_1c6eb8;
        case 0x1c6fb8u: goto label_1c6fb8;
        case 0x1c6fe0u: goto label_1c6fe0;
        case 0x1c70e0u: goto label_1c70e0;
        case 0x1c7168u: goto label_1c7168;
        case 0x1c7190u: goto label_1c7190;
        default: break;
    }

    ctx->pc = 0x1c6b60u;

    // 0x1c6b60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c6b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c6b64: 0x24820320  addiu       $v0, $a0, 0x320
    ctx->pc = 0x1c6b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 800));
    // 0x1c6b68: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1c6b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1c6b6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c6b6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b70: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1c6b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1c6b74: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1c6b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1c6b78: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x1c6b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1c6b7c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1c6b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1c6b80: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1c6b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1c6b84: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1c6b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1c6b88: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1c6b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x1c6b8c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1c6b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1c6b90: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1c6b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c6b94: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1c6b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c6b98: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1c6b98u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c6b9c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1c6b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c6ba0: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1c6ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c6ba4: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1c6ba4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1c6ba8: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1c6ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c6bac: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x1c6bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c6bb0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1c6bb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c6bb4: 0xc621002c  lwc1        $f1, 0x2C($s1)
    ctx->pc = 0x1c6bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6bb8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1c6bb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c6bbc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c6bbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c6bc0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1c6bc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6bc4: 0x0  nop
    ctx->pc = 0x1c6bc4u;
    // NOP
    // 0x1c6bc8: 0x45010178  bc1t        . + 4 + (0x178 << 2)
    ctx->pc = 0x1C6BC8u;
    {
        const bool branch_taken_0x1c6bc8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BC8u;
        // 0x1c6bcc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6bc8) {
            ctx->pc = 0x1C71ACu;
            goto label_1c71ac;
        }
    }
    ctx->pc = 0x1C6BD0u;
    // 0x1c6bd0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c6bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c6bd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c6bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6bd8: 0xc4800344  lwc1        $f0, 0x344($a0)
    ctx->pc = 0x1c6bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6bdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c6bdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6be0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1c6be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c6be4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1c6be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c6be8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1c6be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c6bec: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1c6becu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6bf0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1c6bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6bf4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6BF4u;
    {
        const bool branch_taken_0x1c6bf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BF4u;
        // 0x1c6bf8: 0xc4420004  lwc1        $f2, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6bf4) {
            ctx->pc = 0x1C6C1Cu;
            goto label_1c6c1c;
        }
    }
    ctx->pc = 0x1C6BFCu;
    // 0x1c6bfc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c6bfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6c00: 0x0  nop
    ctx->pc = 0x1c6c00u;
    // NOP
    // 0x1c6c04: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6C04u;
    {
        const bool branch_taken_0x1c6c04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6c04) {
            ctx->pc = 0x1C6C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6C04u;
            // 0x1c6c08: 0xc4800340  lwc1        $f0, 0x340($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6C20u;
            goto label_1c6c20;
        }
    }
    ctx->pc = 0x1C6C0Cu;
    // 0x1c6c0c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1c6c0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6c10: 0x0  nop
    ctx->pc = 0x1c6c10u;
    // NOP
    // 0x1c6c14: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x1C6C14u;
    {
        const bool branch_taken_0x1c6c14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6c14) {
            ctx->pc = 0x1C6C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6C14u;
            // 0x1c6c18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6C54u;
            goto label_1c6c54;
        }
    }
    ctx->pc = 0x1C6C1Cu;
label_1c6c1c:
    // 0x1c6c1c: 0xc4800340  lwc1        $f0, 0x340($a0)
    ctx->pc = 0x1c6c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6c20:
    // 0x1c6c20: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1c6c20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6c24: 0x0  nop
    ctx->pc = 0x1c6c24u;
    // NOP
    // 0x1c6c28: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1C6C28u;
    {
        const bool branch_taken_0x1c6c28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C28u;
        // 0x1c6c2c: 0x26220020  addiu       $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c28) {
            ctx->pc = 0x1C6C58u;
            goto label_1c6c58;
        }
    }
    ctx->pc = 0x1C6C30u;
    // 0x1c6c30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c6c30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6c34: 0x0  nop
    ctx->pc = 0x1c6c34u;
    // NOP
    // 0x1c6c38: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6C38u;
    {
        const bool branch_taken_0x1c6c38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6c38) {
            ctx->pc = 0x1C6C58u;
            goto label_1c6c58;
        }
    }
    ctx->pc = 0x1C6C40u;
    // 0x1c6c40: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1c6c40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6c44: 0x0  nop
    ctx->pc = 0x1c6c44u;
    // NOP
    // 0x1c6c48: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6C48u;
    {
        const bool branch_taken_0x1c6c48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6c48) {
            ctx->pc = 0x1C6C58u;
            goto label_1c6c58;
        }
    }
    ctx->pc = 0x1C6C50u;
    // 0x1c6c50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6c54:
    // 0x1c6c54: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x1c6c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1c6c58:
    // 0x1c6c58: 0x3c013f34  lui         $at, 0x3F34
    ctx->pc = 0x1c6c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16180 << 16));
    // 0x1c6c5c: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x1c6c5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x1c6c60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c6c60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6c64: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1c6c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6c68: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c6c68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6c6c: 0x0  nop
    ctx->pc = 0x1c6c6cu;
    // NOP
    // 0x1c6c70: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6C70u;
    {
        const bool branch_taken_0x1c6c70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C70u;
        // 0x1c6c74: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c70) {
            ctx->pc = 0x1C6C80u;
            goto label_1c6c80;
        }
    }
    ctx->pc = 0x1C6C78u;
    // 0x1c6c78: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6C78u;
    {
        const bool branch_taken_0x1c6c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C78u;
        // 0x1c6c7c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c78) {
            ctx->pc = 0x1C6CA0u;
            goto label_1c6ca0;
        }
    }
    ctx->pc = 0x1C6C80u;
label_1c6c80:
    // 0x1c6c80: 0x3c01bf34  lui         $at, 0xBF34
    ctx->pc = 0x1c6c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48948 << 16));
    // 0x1c6c84: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x1c6c84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x1c6c88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c6c88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6c8c: 0x0  nop
    ctx->pc = 0x1c6c8cu;
    // NOP
    // 0x1c6c90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c6c90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6c94: 0x0  nop
    ctx->pc = 0x1c6c94u;
    // NOP
    // 0x1c6c98: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6C98u;
    {
        const bool branch_taken_0x1c6c98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6c98) {
            ctx->pc = 0x1C6CA4u;
            goto label_1c6ca4;
        }
    }
    ctx->pc = 0x1C6CA0u;
label_1c6ca0:
    // 0x1c6ca0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6ca4:
    // 0x1c6ca4: 0x10a0008c  beqz        $a1, . + 4 + (0x8C << 2)
    ctx->pc = 0x1C6CA4u;
    {
        const bool branch_taken_0x1c6ca4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6CA4u;
        // 0x1c6ca8: 0x24920004  addiu       $s2, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ca4) {
            ctx->pc = 0x1C6ED8u;
            goto label_1c6ed8;
        }
    }
    ctx->pc = 0x1C6CACu;
    // 0x1c6cac: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x1c6cacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c6cb0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1c6cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1c6cb4: 0x14e20091  bne         $a3, $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x1C6CB4u;
    {
        const bool branch_taken_0x1c6cb4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C6CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6CB4u;
        // 0x1c6cb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6cb4) {
            ctx->pc = 0x1C6EFCu;
            goto label_1c6efc;
        }
    }
    ctx->pc = 0x1C6CBCu;
    // 0x1c6cbc: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1c6cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c6cc0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1c6cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1c6cc4: 0x3c03aaaa  lui         $v1, 0xAAAA
    ctx->pc = 0x1c6cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43690 << 16));
    // 0x1c6cc8: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x1c6cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x1c6ccc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1c6cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c6cd0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c6cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c6cd4: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x1c6cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x1c6cd8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1c6cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c6cdc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1c6cdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c6ce0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1c6ce0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1c6ce4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1c6ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1c6ce8: 0xc2200b  movn        $a0, $a2, $v0
    ctx->pc = 0x1c6ce8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x1c6cec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c6cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c6cf0: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x1c6cf0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c6cf4: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6CF4u;
    {
        const bool branch_taken_0x1c6cf4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6CF4u;
        // 0x1c6cf8: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6cf4) {
            ctx->pc = 0x1C6D10u;
            goto label_1c6d10;
        }
    }
    ctx->pc = 0x1C6CFCu;
    // 0x1c6cfc: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1c6cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c6d00: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1C6D00u;
    SET_GPR_U32(ctx, 31, 0x1C6D08u);
    ctx->pc = 0x1C6D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6D00u;
    // 0x1c6d04: 0x2a42018  mult        $a0, $s5, $a0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1C6D00u, 0x1C6D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6D08u;
label_1c6d08:
    // 0x1c6d08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6D08u;
    {
        const bool branch_taken_0x1c6d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D08u;
        // 0x1c6d0c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d08) {
            ctx->pc = 0x1C6D18u;
            goto label_1c6d18;
        }
    }
    ctx->pc = 0x1C6D10u;
label_1c6d10:
    // 0x1c6d10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c6d10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c6d14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c6d18:
    // 0x1c6d18: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1c6d18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c6d1c: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x1c6d1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d20: 0x10d40020  beq         $a2, $s4, . + 4 + (0x20 << 2)
    ctx->pc = 0x1C6D20u;
    {
        const bool branch_taken_0x1c6d20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 20));
        ctx->pc = 0x1C6D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D20u;
        // 0x1c6d24: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d20) {
            ctx->pc = 0x1C6DA4u;
            goto label_1c6da4;
        }
    }
    ctx->pc = 0x1C6D28u;
    // 0x1c6d28: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1c6d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1c6d2c: 0x24c50020  addiu       $a1, $a2, 0x20
    ctx->pc = 0x1c6d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_1c6d30:
    // 0x1c6d30: 0x50e00018  beql        $a3, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C6D30u;
    {
        const bool branch_taken_0x1c6d30 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6d30) {
            ctx->pc = 0x1C6D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6D30u;
            // 0x1c6d34: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6D94u;
            goto label_1c6d94;
        }
    }
    ctx->pc = 0x1C6D38u;
    // 0x1c6d38: 0x9082ffe0  lbu         $v0, -0x20($a0)
    ctx->pc = 0x1c6d38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967264)));
    // 0x1c6d3c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1c6d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c6d40: 0x90a3ffe0  lbu         $v1, -0x20($a1)
    ctx->pc = 0x1c6d40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967264)));
    // 0x1c6d44: 0xa083ffe0  sb          $v1, -0x20($a0)
    ctx->pc = 0x1c6d44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c6d48: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x1c6d48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6d4c: 0xa082ffe0  sb          $v0, -0x20($a0)
    ctx->pc = 0x1c6d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967264), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c6d50: 0x8ca3ffe4  lw          $v1, -0x1C($a1)
    ctx->pc = 0x1c6d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967268)));
    // 0x1c6d54: 0xac83ffe4  sw          $v1, -0x1C($a0)
    ctx->pc = 0x1c6d54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967268), GPR_U32(ctx, 3));
    // 0x1c6d58: 0x8ca2ffe8  lw          $v0, -0x18($a1)
    ctx->pc = 0x1c6d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967272)));
    // 0x1c6d5c: 0xac82ffe8  sw          $v0, -0x18($a0)
    ctx->pc = 0x1c6d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967272), GPR_U32(ctx, 2));
    // 0x1c6d60: 0x8ca3ffec  lw          $v1, -0x14($a1)
    ctx->pc = 0x1c6d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967276)));
    // 0x1c6d64: 0xac83ffec  sw          $v1, -0x14($a0)
    ctx->pc = 0x1c6d64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967276), GPR_U32(ctx, 3));
    // 0x1c6d68: 0x90a2fff0  lbu         $v0, -0x10($a1)
    ctx->pc = 0x1c6d68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x1c6d6c: 0xa082fff0  sb          $v0, -0x10($a0)
    ctx->pc = 0x1c6d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967280), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c6d70: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1c6d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6d74: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c6d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1c6d78: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1c6d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6d7c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1c6d7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1c6d80: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1c6d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6d84: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1c6d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1c6d88: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x1c6d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6d8c: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x1c6d8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1c6d90: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x1c6d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_1c6d94:
    // 0x1c6d94: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x1c6d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x1c6d98: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x1c6d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1c6d9c: 0x14d4ffe4  bne         $a2, $s4, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C6D9Cu;
    {
        const bool branch_taken_0x1c6d9c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 20));
        ctx->pc = 0x1C6DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D9Cu;
        // 0x1c6da0: 0x24e70030  addiu       $a3, $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d9c) {
            ctx->pc = 0x1C6D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6d30;
        }
    }
    ctx->pc = 0x1C6DA4u;
label_1c6da4:
    // 0x1c6da4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1c6da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c6da8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c6da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6dac: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C6DACu;
    {
        const bool branch_taken_0x1c6dac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C6DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6DACu;
        // 0x1c6db0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6dac) {
            ctx->pc = 0x1C6E1Cu;
            goto label_1c6e1c;
        }
    }
    ctx->pc = 0x1C6DB4u;
    // 0x1c6db4: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C6DB4u;
    {
        const bool branch_taken_0x1c6db4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6DB4u;
        // 0x1c6db8: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6db4) {
            ctx->pc = 0x1C6E14u;
            goto label_1c6e14;
        }
    }
    ctx->pc = 0x1C6DBCu;
    // 0x1c6dbc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1c6dbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c6dc0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1c6dc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c6dc4: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1c6dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c6dc8: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x1c6dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c6dcc: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x1c6dccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6dd0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1c6dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c6dd4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1c6dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c6dd8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1c6dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1c6ddc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1c6ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c6de0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1c6de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1c6de4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1c6de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c6de8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1c6de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1c6dec: 0x92220010  lbu         $v0, 0x10($s1)
    ctx->pc = 0x1c6decu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1c6df0: 0xa2020010  sb          $v0, 0x10($s0)
    ctx->pc = 0x1c6df0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c6df4: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1c6df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6df8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1c6df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1c6dfc: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1c6dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6e00: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1c6e00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1c6e04: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1c6e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6e08: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1c6e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1c6e0c: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x1c6e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6e10: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x1c6e10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_1c6e14:
    // 0x1c6e14: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1C6E14u;
    {
        const bool branch_taken_0x1c6e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6E14u;
        // 0x1c6e18: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6e14) {
            ctx->pc = 0x1C6EA0u;
            goto label_1c6ea0;
        }
    }
    ctx->pc = 0x1C6E1Cu;
label_1c6e1c:
    // 0x1c6e1c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1c6e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e20: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C6E20u;
    {
        const bool branch_taken_0x1c6e20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6E20u;
        // 0x1c6e24: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6e20) {
            ctx->pc = 0x1C6E9Cu;
            goto label_1c6e9c;
        }
    }
    ctx->pc = 0x1C6E28u;
    // 0x1c6e28: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c6e28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e2c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1c6e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1c6e30:
    // 0x1c6e30: 0x10c00017  beqz        $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C6E30u;
    {
        const bool branch_taken_0x1c6e30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6E30u;
        // 0x1c6e34: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6e30) {
            ctx->pc = 0x1C6E90u;
            goto label_1c6e90;
        }
    }
    ctx->pc = 0x1C6E38u;
    // 0x1c6e38: 0x9082ffe0  lbu         $v0, -0x20($a0)
    ctx->pc = 0x1c6e38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967264)));
    // 0x1c6e3c: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1c6e3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c6e40: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1c6e40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c6e44: 0xa083ffe0  sb          $v1, -0x20($a0)
    ctx->pc = 0x1c6e44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c6e48: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x1c6e48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6e4c: 0xa082ffe0  sb          $v0, -0x20($a0)
    ctx->pc = 0x1c6e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967264), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c6e50: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1c6e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c6e54: 0xac83ffe4  sw          $v1, -0x1C($a0)
    ctx->pc = 0x1c6e54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967268), GPR_U32(ctx, 3));
    // 0x1c6e58: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1c6e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c6e5c: 0xac82ffe8  sw          $v0, -0x18($a0)
    ctx->pc = 0x1c6e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967272), GPR_U32(ctx, 2));
    // 0x1c6e60: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1c6e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c6e64: 0xac83ffec  sw          $v1, -0x14($a0)
    ctx->pc = 0x1c6e64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967276), GPR_U32(ctx, 3));
    // 0x1c6e68: 0x92220010  lbu         $v0, 0x10($s1)
    ctx->pc = 0x1c6e68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1c6e6c: 0xa082fff0  sb          $v0, -0x10($a0)
    ctx->pc = 0x1c6e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967280), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c6e70: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1c6e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6e74: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c6e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1c6e78: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x1c6e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6e7c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1c6e7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1c6e80: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x1c6e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6e84: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1c6e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1c6e88: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x1c6e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6e8c: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x1c6e8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_1c6e90:
    // 0x1c6e90: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x1c6e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1c6e94: 0x14a0ffe6  bnez        $a1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1C6E94u;
    {
        const bool branch_taken_0x1c6e94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6E94u;
        // 0x1c6e98: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6e94) {
            ctx->pc = 0x1C6E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6e30;
        }
    }
    ctx->pc = 0x1C6E9Cu;
label_1c6e9c:
    // 0x1c6e9c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c6e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c6ea0:
    // 0x1c6ea0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1c6ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c6ea4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1c6ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c6ea8: 0x108300b5  beq         $a0, $v1, . + 4 + (0xB5 << 2)
    ctx->pc = 0x1C6EA8u;
    {
        const bool branch_taken_0x1c6ea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C6EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6EA8u;
        // 0x1c6eac: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ea8) {
            ctx->pc = 0x1C7180u;
            goto label_1c7180;
        }
    }
    ctx->pc = 0x1C6EB0u;
    // 0x1c6eb0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1c6eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1c6eb4: 0x0  nop
    ctx->pc = 0x1c6eb4u;
    // NOP
label_1c6eb8:
    // 0x1c6eb8: 0x0  nop
    ctx->pc = 0x1c6eb8u;
    // NOP
    // 0x1c6ebc: 0x0  nop
    ctx->pc = 0x1c6ebcu;
    // NOP
    // 0x1c6ec0: 0x0  nop
    ctx->pc = 0x1c6ec0u;
    // NOP
    // 0x1c6ec4: 0x0  nop
    ctx->pc = 0x1c6ec4u;
    // NOP
    // 0x1c6ec8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C6EC8u;
    {
        const bool branch_taken_0x1c6ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C6ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6EC8u;
        // 0x1c6ecc: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ec8) {
            ctx->pc = 0x1C6EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6eb8;
        }
    }
    ctx->pc = 0x1C6ED0u;
    // 0x1c6ed0: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x1C6ED0u;
    {
        const bool branch_taken_0x1c6ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6ed0) {
            ctx->pc = 0x1C7180u;
            goto label_1c7180;
        }
    }
    ctx->pc = 0x1C6ED8u;
label_1c6ed8:
    // 0x1c6ed8: 0x10c000b4  beqz        $a2, . + 4 + (0xB4 << 2)
    ctx->pc = 0x1C6ED8u;
    {
        const bool branch_taken_0x1c6ed8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6ED8u;
        // 0x1c6edc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ed8) {
            ctx->pc = 0x1C71ACu;
            goto label_1c71ac;
        }
    }
    ctx->pc = 0x1C6EE0u;
    // 0x1c6ee0: 0x8c8202f8  lw          $v0, 0x2F8($a0)
    ctx->pc = 0x1c6ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 760)));
    // 0x1c6ee4: 0x104000b1  beqz        $v0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x1C6EE4u;
    {
        const bool branch_taken_0x1c6ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6EE4u;
        // 0x1c6ee8: 0x24920024  addiu       $s2, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ee4) {
            ctx->pc = 0x1C71ACu;
            goto label_1c71ac;
        }
    }
    ctx->pc = 0x1C6EECu;
    // 0x1c6eec: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x1c6eecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c6ef0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1c6ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1c6ef4: 0x50e2001d  beql        $a3, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C6EF4u;
    {
        const bool branch_taken_0x1c6ef4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c6ef4) {
            ctx->pc = 0x1C6EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6EF4u;
            // 0x1c6ef8: 0x8c850024  lw          $a1, 0x24($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6F6Cu;
            goto label_1c6f6c;
        }
    }
    ctx->pc = 0x1C6EFCu;
label_1c6efc:
    // 0x1c6efc: 0x10e00017  beqz        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C6EFCu;
    {
        const bool branch_taken_0x1c6efc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6EFCu;
        // 0x1c6f00: 0x24e40020  addiu       $a0, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6efc) {
            ctx->pc = 0x1C6F5Cu;
            goto label_1c6f5c;
        }
    }
    ctx->pc = 0x1C6F04u;
    // 0x1c6f04: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1c6f04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1c6f08: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1c6f08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c6f0c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1c6f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c6f10: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x1c6f10u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c6f14: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x1c6f14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6f18: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x1c6f18u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c6f1c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1c6f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c6f20: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x1c6f20u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x1c6f24: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1c6f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c6f28: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x1c6f28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x1c6f2c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1c6f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c6f30: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x1c6f30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x1c6f34: 0x92220010  lbu         $v0, 0x10($s1)
    ctx->pc = 0x1c6f34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1c6f38: 0xa0e20010  sb          $v0, 0x10($a3)
    ctx->pc = 0x1c6f38u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c6f3c: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1c6f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6f40: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x1c6f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x1c6f44: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1c6f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6f48: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1c6f48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1c6f4c: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1c6f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6f50: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1c6f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1c6f54: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x1c6f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6f58: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x1c6f58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_1c6f5c:
    // 0x1c6f5c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c6f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c6f60: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1c6f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1c6f64: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x1C6F64u;
    {
        const bool branch_taken_0x1c6f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F64u;
        // 0x1c6f68: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f64) {
            ctx->pc = 0x1C71A8u;
            goto label_1c71a8;
        }
    }
    ctx->pc = 0x1C6F6Cu;
label_1c6f6c:
    // 0x1c6f6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c6f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6f70: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x1c6f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x1c6f74: 0x3c03aaaa  lui         $v1, 0xAAAA
    ctx->pc = 0x1c6f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43690 << 16));
    // 0x1c6f78: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x1c6f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x1c6f7c: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x1c6f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1c6f80: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c6f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c6f84: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1c6f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1c6f88: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1c6f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c6f8c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1c6f8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c6f90: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1c6f90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1c6f94: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1c6f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1c6f98: 0xc2200b  movn        $a0, $a2, $v0
    ctx->pc = 0x1c6f98u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x1c6f9c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c6f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c6fa0: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x1c6fa0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c6fa4: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6FA4u;
    {
        const bool branch_taken_0x1c6fa4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6FA4u;
        // 0x1c6fa8: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6fa4) {
            ctx->pc = 0x1C6FC0u;
            goto label_1c6fc0;
        }
    }
    ctx->pc = 0x1C6FACu;
    // 0x1c6fac: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1c6facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c6fb0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1C6FB0u;
    SET_GPR_U32(ctx, 31, 0x1C6FB8u);
    ctx->pc = 0x1C6FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6FB0u;
    // 0x1c6fb4: 0x2a42018  mult        $a0, $s5, $a0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1C6FB0u, 0x1C6FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6FB8u;
label_1c6fb8:
    // 0x1c6fb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6FB8u;
    {
        const bool branch_taken_0x1c6fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6FB8u;
        // 0x1c6fbc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6fb8) {
            ctx->pc = 0x1C6FC8u;
            goto label_1c6fc8;
        }
    }
    ctx->pc = 0x1C6FC0u;
label_1c6fc0:
    // 0x1c6fc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c6fc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6fc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c6fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c6fc8:
    // 0x1c6fc8: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1c6fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c6fcc: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x1c6fccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6fd0: 0x10d40020  beq         $a2, $s4, . + 4 + (0x20 << 2)
    ctx->pc = 0x1C6FD0u;
    {
        const bool branch_taken_0x1c6fd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 20));
        ctx->pc = 0x1C6FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6FD0u;
        // 0x1c6fd4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6fd0) {
            ctx->pc = 0x1C7054u;
            goto label_1c7054;
        }
    }
    ctx->pc = 0x1C6FD8u;
    // 0x1c6fd8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1c6fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1c6fdc: 0x24c50020  addiu       $a1, $a2, 0x20
    ctx->pc = 0x1c6fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_1c6fe0:
    // 0x1c6fe0: 0x50e00018  beql        $a3, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C6FE0u;
    {
        const bool branch_taken_0x1c6fe0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6fe0) {
            ctx->pc = 0x1C6FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6FE0u;
            // 0x1c6fe4: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7044u;
            goto label_1c7044;
        }
    }
    ctx->pc = 0x1C6FE8u;
    // 0x1c6fe8: 0x9082ffe0  lbu         $v0, -0x20($a0)
    ctx->pc = 0x1c6fe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967264)));
    // 0x1c6fec: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1c6fecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c6ff0: 0x90a3ffe0  lbu         $v1, -0x20($a1)
    ctx->pc = 0x1c6ff0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967264)));
    // 0x1c6ff4: 0xa083ffe0  sb          $v1, -0x20($a0)
    ctx->pc = 0x1c6ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c6ff8: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x1c6ff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6ffc: 0xa082ffe0  sb          $v0, -0x20($a0)
    ctx->pc = 0x1c6ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967264), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c7000: 0x8ca3ffe4  lw          $v1, -0x1C($a1)
    ctx->pc = 0x1c7000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967268)));
    // 0x1c7004: 0xac83ffe4  sw          $v1, -0x1C($a0)
    ctx->pc = 0x1c7004u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967268), GPR_U32(ctx, 3));
    // 0x1c7008: 0x8ca2ffe8  lw          $v0, -0x18($a1)
    ctx->pc = 0x1c7008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967272)));
    // 0x1c700c: 0xac82ffe8  sw          $v0, -0x18($a0)
    ctx->pc = 0x1c700cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967272), GPR_U32(ctx, 2));
    // 0x1c7010: 0x8ca3ffec  lw          $v1, -0x14($a1)
    ctx->pc = 0x1c7010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967276)));
    // 0x1c7014: 0xac83ffec  sw          $v1, -0x14($a0)
    ctx->pc = 0x1c7014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967276), GPR_U32(ctx, 3));
    // 0x1c7018: 0x90a2fff0  lbu         $v0, -0x10($a1)
    ctx->pc = 0x1c7018u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x1c701c: 0xa082fff0  sb          $v0, -0x10($a0)
    ctx->pc = 0x1c701cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967280), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c7020: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1c7020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7024: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c7024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1c7028: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1c7028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c702c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1c702cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1c7030: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1c7030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7034: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1c7034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1c7038: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x1c7038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c703c: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x1c703cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1c7040: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x1c7040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_1c7044:
    // 0x1c7044: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x1c7044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x1c7048: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x1c7048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1c704c: 0x14d4ffe4  bne         $a2, $s4, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C704Cu;
    {
        const bool branch_taken_0x1c704c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 20));
        ctx->pc = 0x1C7050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C704Cu;
        // 0x1c7050: 0x24e70030  addiu       $a3, $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c704c) {
            ctx->pc = 0x1C6FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6fe0;
        }
    }
    ctx->pc = 0x1C7054u;
label_1c7054:
    // 0x1c7054: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x1c7054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c7058: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c7058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c705c: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C705Cu;
    {
        const bool branch_taken_0x1c705c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C7060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C705Cu;
        // 0x1c7060: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c705c) {
            ctx->pc = 0x1C70CCu;
            goto label_1c70cc;
        }
    }
    ctx->pc = 0x1C7064u;
    // 0x1c7064: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C7064u;
    {
        const bool branch_taken_0x1c7064 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7064u;
        // 0x1c7068: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7064) {
            ctx->pc = 0x1C70C4u;
            goto label_1c70c4;
        }
    }
    ctx->pc = 0x1C706Cu;
    // 0x1c706c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1c706cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c7070: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1c7070u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c7074: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1c7074u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c7078: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x1c7078u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c707c: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x1c707cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7080: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1c7080u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c7084: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1c7084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c7088: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1c7088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1c708c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1c708cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c7090: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1c7090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1c7094: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1c7094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c7098: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1c7098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1c709c: 0x92220010  lbu         $v0, 0x10($s1)
    ctx->pc = 0x1c709cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1c70a0: 0xa2020010  sb          $v0, 0x10($s0)
    ctx->pc = 0x1c70a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c70a4: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1c70a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c70a8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1c70a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1c70ac: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1c70acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c70b0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1c70b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1c70b4: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1c70b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c70b8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1c70b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1c70bc: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x1c70bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c70c0: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x1c70c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_1c70c4:
    // 0x1c70c4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1C70C4u;
    {
        const bool branch_taken_0x1c70c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C70C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C70C4u;
        // 0x1c70c8: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c70c4) {
            ctx->pc = 0x1C7150u;
            goto label_1c7150;
        }
    }
    ctx->pc = 0x1C70CCu;
label_1c70cc:
    // 0x1c70cc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1c70ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c70d0: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C70D0u;
    {
        const bool branch_taken_0x1c70d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C70D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C70D0u;
        // 0x1c70d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c70d0) {
            ctx->pc = 0x1C714Cu;
            goto label_1c714c;
        }
    }
    ctx->pc = 0x1C70D8u;
    // 0x1c70d8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c70d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c70dc: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1c70dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1c70e0:
    // 0x1c70e0: 0x10c00017  beqz        $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C70E0u;
    {
        const bool branch_taken_0x1c70e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C70E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C70E0u;
        // 0x1c70e4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c70e0) {
            ctx->pc = 0x1C7140u;
            goto label_1c7140;
        }
    }
    ctx->pc = 0x1C70E8u;
    // 0x1c70e8: 0x9082ffe0  lbu         $v0, -0x20($a0)
    ctx->pc = 0x1c70e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967264)));
    // 0x1c70ec: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1c70ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c70f0: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1c70f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c70f4: 0xa083ffe0  sb          $v1, -0x20($a0)
    ctx->pc = 0x1c70f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c70f8: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x1c70f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c70fc: 0xa082ffe0  sb          $v0, -0x20($a0)
    ctx->pc = 0x1c70fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967264), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c7100: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1c7100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c7104: 0xac83ffe4  sw          $v1, -0x1C($a0)
    ctx->pc = 0x1c7104u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967268), GPR_U32(ctx, 3));
    // 0x1c7108: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1c7108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c710c: 0xac82ffe8  sw          $v0, -0x18($a0)
    ctx->pc = 0x1c710cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967272), GPR_U32(ctx, 2));
    // 0x1c7110: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1c7110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c7114: 0xac83ffec  sw          $v1, -0x14($a0)
    ctx->pc = 0x1c7114u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967276), GPR_U32(ctx, 3));
    // 0x1c7118: 0x92220010  lbu         $v0, 0x10($s1)
    ctx->pc = 0x1c7118u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1c711c: 0xa082fff0  sb          $v0, -0x10($a0)
    ctx->pc = 0x1c711cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967280), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c7120: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1c7120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7124: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c7124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1c7128: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x1c7128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c712c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1c712cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1c7130: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x1c7130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7134: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1c7134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1c7138: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x1c7138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c713c: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x1c713cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_1c7140:
    // 0x1c7140: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x1c7140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1c7144: 0x14a0ffe6  bnez        $a1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1C7144u;
    {
        const bool branch_taken_0x1c7144 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7144u;
        // 0x1c7148: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7144) {
            ctx->pc = 0x1C70E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c70e0;
        }
    }
    ctx->pc = 0x1C714Cu;
label_1c714c:
    // 0x1c714c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c714cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c7150:
    // 0x1c7150: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1c7150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c7154: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1c7154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c7158: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C7158u;
    {
        const bool branch_taken_0x1c7158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7158u;
        // 0x1c715c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7158) {
            ctx->pc = 0x1C7180u;
            goto label_1c7180;
        }
    }
    ctx->pc = 0x1C7160u;
    // 0x1c7160: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1c7160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1c7164: 0x0  nop
    ctx->pc = 0x1c7164u;
    // NOP
label_1c7168:
    // 0x1c7168: 0x0  nop
    ctx->pc = 0x1c7168u;
    // NOP
    // 0x1c716c: 0x0  nop
    ctx->pc = 0x1c716cu;
    // NOP
    // 0x1c7170: 0x0  nop
    ctx->pc = 0x1c7170u;
    // NOP
    // 0x1c7174: 0x0  nop
    ctx->pc = 0x1c7174u;
    // NOP
    // 0x1c7178: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C7178u;
    {
        const bool branch_taken_0x1c7178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7178u;
        // 0x1c717c: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7178) {
            ctx->pc = 0x1C7168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7168;
        }
    }
    ctx->pc = 0x1C7180u;
label_1c7180:
    // 0x1c7180: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7180u;
    {
        const bool branch_taken_0x1c7180 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7180u;
        // 0x1c7184: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7180) {
            ctx->pc = 0x1C7194u;
            goto label_1c7194;
        }
    }
    ctx->pc = 0x1C7188u;
    // 0x1c7188: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1C7188u;
    SET_GPR_U32(ctx, 31, 0x1C7190u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1C7188u, 0x1C7190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7190u;
label_1c7190:
    // 0x1c7190: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1c7190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1c7194:
    // 0x1c7194: 0xae560000  sw          $s6, 0x0($s2)
    ctx->pc = 0x1c7194u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 22));
    // 0x1c7198: 0x2a21818  mult        $v1, $s5, $v0
    ctx->pc = 0x1c7198u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c719c: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x1c719cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x1c71a0: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x1c71a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x1c71a4: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1c71a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_1c71a8:
    // 0x1c71a8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1c71a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c71ac:
    // 0x1c71ac: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1c71acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c71b0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1c71b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c71b4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1c71b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c71b8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1c71b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c71bc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1c71bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c71c0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1c71c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c71c4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1c71c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c71c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C71C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C71CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C71C8u;
        // 0x1c71cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C71C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C71D0u;
}
