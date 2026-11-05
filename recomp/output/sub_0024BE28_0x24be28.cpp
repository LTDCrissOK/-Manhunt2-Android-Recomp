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

// Function: sub_0024BE28
// Address: 0x24be28 - 0x24c138
void sub_0024BE28_0x24be28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BE28_0x24be28");
#endif

    switch (ctx->pc) {
        case 0x24be80u: goto label_24be80;
        case 0x24bec0u: goto label_24bec0;
        default: break;
    }

    ctx->pc = 0x24be28u;

    // 0x24be28: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x24be28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24be2c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24be2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24be30: 0x8d09010c  lw          $t1, 0x10C($t0)
    ctx->pc = 0x24be30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 268)));
    // 0x24be34: 0xc5210030  lwc1        $f1, 0x30($t1)
    ctx->pc = 0x24be34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24be38: 0x25220030  addiu       $v0, $t1, 0x30
    ctx->pc = 0x24be38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
    // 0x24be3c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x24be3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24be40: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x24be40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24be44: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x24be44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24be48: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x24be48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24be4c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x24be4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x24be50: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x24be50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24be54: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x24be54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x24be58: 0x8d220098  lw          $v0, 0x98($t1)
    ctx->pc = 0x24be58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 152)));
    // 0x24be5c: 0x144000b4  bnez        $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x24BE5Cu;
    {
        const bool branch_taken_0x24be5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24be5c) {
            ctx->pc = 0x24C130u;
            goto label_24c130;
        }
    }
    ctx->pc = 0x24BE64u;
    // 0x24be64: 0x8d050334  lw          $a1, 0x334($t0)
    ctx->pc = 0x24be64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 820)));
    // 0x24be68: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x24be68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
    // 0x24be6c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24BE6Cu;
    {
        const bool branch_taken_0x24be6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE6Cu;
        // 0x24be70: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24be6c) {
            ctx->pc = 0x24BEA0u;
            goto label_24bea0;
        }
    }
    ctx->pc = 0x24BE74u;
    // 0x24be74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24be74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24be78: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x24be78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
    // 0x24be7c: 0x0  nop
    ctx->pc = 0x24be7cu;
    // NOP
label_24be80:
    // 0x24be80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24be80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24be84: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x24BE84u;
    {
        const bool branch_taken_0x24be84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24be84) {
            ctx->pc = 0x24BE88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BE84u;
            // 0x24be88: 0x8cc301e4  lw          $v1, 0x1E4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BEA4u;
            goto label_24bea4;
        }
    }
    ctx->pc = 0x24BE8Cu;
    // 0x24be8c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x24be8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x24be90: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x24be90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x24be94: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24BE94u;
    {
        const bool branch_taken_0x24be94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE94u;
        // 0x24be98: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24be94) {
            ctx->pc = 0x24BE80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24be80;
        }
    }
    ctx->pc = 0x24BE9Cu;
    // 0x24be9c: 0x8ca201e8  lw          $v0, 0x1E8($a1)
    ctx->pc = 0x24be9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
label_24bea0:
    // 0x24bea0: 0x8cc301e4  lw          $v1, 0x1E4($a2)
    ctx->pc = 0x24bea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_24bea4:
    // 0x24bea4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24BEA4u;
    {
        const bool branch_taken_0x24bea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BEA4u;
        // 0x24bea8: 0xc441001c  lwc1        $f1, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bea4) {
            ctx->pc = 0x24BEB4u;
            goto label_24beb4;
        }
    }
    ctx->pc = 0x24BEACu;
    // 0x24beac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x24BEACu;
    {
        const bool branch_taken_0x24beac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BEACu;
        // 0x24beb0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24beac) {
            ctx->pc = 0x24BEE0u;
            goto label_24bee0;
        }
    }
    ctx->pc = 0x24BEB4u;
label_24beb4:
    // 0x24beb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24beb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24beb8: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x24beb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
    // 0x24bebc: 0x0  nop
    ctx->pc = 0x24bebcu;
    // NOP
label_24bec0:
    // 0x24bec0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24bec4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x24BEC4u;
    {
        const bool branch_taken_0x24bec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24bec4) {
            ctx->pc = 0x24BEC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BEC4u;
            // 0x24bec8: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BEE4u;
            goto label_24bee4;
        }
    }
    ctx->pc = 0x24BECCu;
    // 0x24becc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x24beccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x24bed0: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x24bed0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x24bed4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24BED4u;
    {
        const bool branch_taken_0x24bed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BED4u;
        // 0x24bed8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bed4) {
            ctx->pc = 0x24BEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24bec0;
        }
    }
    ctx->pc = 0x24BEDCu;
    // 0x24bedc: 0x8cc201e8  lw          $v0, 0x1E8($a2)
    ctx->pc = 0x24bedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_24bee0:
    // 0x24bee0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x24bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_24bee4:
    // 0x24bee4: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x24bee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bee8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24bee8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24beec: 0x0  nop
    ctx->pc = 0x24beecu;
    // NOP
    // 0x24bef0: 0x4500008f  bc1f        . + 4 + (0x8F << 2)
    ctx->pc = 0x24BEF0u;
    {
        const bool branch_taken_0x24bef0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24bef0) {
            ctx->pc = 0x24C130u;
            goto label_24c130;
        }
    }
    ctx->pc = 0x24BEF8u;
    // 0x24bef8: 0x8d030104  lw          $v1, 0x104($t0)
    ctx->pc = 0x24bef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 260)));
    // 0x24befc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24befcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24bf00: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x24bf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x24bf04: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x24bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x24bf08: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x24bf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24bf0c: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x24bf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24bf10: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x24bf10u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x24bf14: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x24bf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24bf18: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x24bf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24bf1c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x24bf1cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x24bf20: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x24bf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24bf24: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x24bf24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24bf28: 0x4603121c  madd.s      $f8, $f2, $f3
    ctx->pc = 0x24bf28u;
    ctx->f[8] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x24bf2c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x24bf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24bf30: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x24bf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24bf34: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x24bf34u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x24bf38: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x24bf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24bf3c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x24bf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24bf40: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x24bf40u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x24bf44: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x24bf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24bf48: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x24bf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24bf4c: 0x4603125c  madd.s      $f9, $f2, $f3
    ctx->pc = 0x24bf4cu;
    ctx->f[9] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x24bf50: 0xc50704fc  lwc1        $f7, 0x4FC($t0)
    ctx->pc = 0x24bf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24bf54: 0xc5050500  lwc1        $f5, 0x500($t0)
    ctx->pc = 0x24bf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24bf58: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x24bf58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x24bf5c: 0xe7a70010  swc1        $f7, 0x10($sp)
    ctx->pc = 0x24bf5cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x24bf60: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x24bf60u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24bf64: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x24bf64u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x24bf68: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x24bf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24bf6c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x24bf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24bf70: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x24bf70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24bf74: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x24bf74u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x24bf78: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x24bf78u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x24bf7c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x24bf7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x24bf80: 0x46010044  c1          0x10044
    ctx->pc = 0x24bf80u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x24bf84: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x24bf84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x24bf88: 0xc440b764  lwc1        $f0, -0x489C($v0)
    ctx->pc = 0x24bf88u;
    { uint32_t bits = FAST_READ32(0x3FB764u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bf8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24bf8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24bf90: 0x0  nop
    ctx->pc = 0x24bf90u;
    // NOP
    // 0x24bf94: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x24BF94u;
    {
        const bool branch_taken_0x24bf94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24bf94) {
            ctx->pc = 0x24BFA4u;
            goto label_24bfa4;
        }
    }
    ctx->pc = 0x24BF9Cu;
    // 0x24bf9c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x24BF9Cu;
    {
        const bool branch_taken_0x24bf9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BF9Cu;
        // 0x24bfa0: 0x46003987  neg.s       $f6, $f7 (Delay Slot)
        ctx->f[6] = FPU_NEG_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bf9c) {
            ctx->pc = 0x24C034u;
            goto label_24c034;
        }
    }
    ctx->pc = 0x24BFA4u;
label_24bfa4:
    // 0x24bfa4: 0x46083034  c.lt.s      $f6, $f8
    ctx->pc = 0x24bfa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24bfa8: 0x0  nop
    ctx->pc = 0x24bfa8u;
    // NOP
    // 0x24bfac: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x24BFACu;
    {
        const bool branch_taken_0x24bfac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24bfac) {
            ctx->pc = 0x24BFCCu;
            goto label_24bfcc;
        }
    }
    ctx->pc = 0x24BFB4u;
    // 0x24bfb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24bfb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24bfb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24bfb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24bfbc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x24bfbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x24bfc0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24bfc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24bfc4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24BFC4u;
    {
        const bool branch_taken_0x24bfc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BFC4u;
        // 0x24bfc8: 0x46002801  sub.s       $f0, $f5, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bfc4) {
            ctx->pc = 0x24BFE0u;
            goto label_24bfe0;
        }
    }
    ctx->pc = 0x24BFCCu;
label_24bfcc:
    // 0x24bfcc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24bfccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24bfd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24bfd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24bfd4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x24bfd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x24bfd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24bfd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24bfdc: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x24bfdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_24bfe0:
    // 0x24bfe0: 0x46010142  mul.s       $f5, $f0, $f1
    ctx->pc = 0x24bfe0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24bfe4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24bfe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24bfe8: 0x0  nop
    ctx->pc = 0x24bfe8u;
    // NOP
    // 0x24bfec: 0x46090034  c.lt.s      $f0, $f9
    ctx->pc = 0x24bfecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24bff0: 0x0  nop
    ctx->pc = 0x24bff0u;
    // NOP
    // 0x24bff4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x24BFF4u;
    {
        const bool branch_taken_0x24bff4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24BFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BFF4u;
        // 0x24bff8: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bff4) {
            ctx->pc = 0x24C01Cu;
            goto label_24c01c;
        }
    }
    ctx->pc = 0x24BFFCu;
    // 0x24bffc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24bffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24c000: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x24c000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24c004: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x24c004u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x24c008: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x24c008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x24c00c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24c00cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24c010: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x24c010u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x24c014: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24C014u;
    {
        const bool branch_taken_0x24c014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C014u;
        // 0x24c018: 0x46010182  mul.s       $f6, $f0, $f1 (Delay Slot)
        ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c014) {
            ctx->pc = 0x24C034u;
            goto label_24c034;
        }
    }
    ctx->pc = 0x24C01Cu;
label_24c01c:
    // 0x24c01c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24c01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24c020: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24c020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24c024: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x24c024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x24c028: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x24c028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24c02c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24c02cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24c030: 0x46020982  mul.s       $f6, $f1, $f2
    ctx->pc = 0x24c030u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_24c034:
    // 0x24c034: 0x8d040104  lw          $a0, 0x104($t0)
    ctx->pc = 0x24c034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 260)));
    // 0x24c038: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x24c038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x24c03c: 0xc441b768  lwc1        $f1, -0x4898($v0)
    ctx->pc = 0x24c03cu;
    { uint32_t bits = FAST_READ32(0x3FB768u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24c040: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x24c040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x24c044: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x24c044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24c048: 0x25270030  addiu       $a3, $t1, 0x30
    ctx->pc = 0x24c048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
    // 0x24c04c: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x24c04cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x24c050: 0xc4a42b30  lwc1        $f4, 0x2B30($a1)
    ctx->pc = 0x24c050u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24c054: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x24c054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x24c058: 0xc4630060  lwc1        $f3, 0x60($v1)
    ctx->pc = 0x24c058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24c05c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x24c05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24c060: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x24c060u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x24c064: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x24c064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c068: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x24c068u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x24c06c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x24c06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24c070: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x24c070u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x24c074: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x24c074u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x24c078: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x24c078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24c07c: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x24c07cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x24c080: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x24c080u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24c084: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x24c084u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24c088: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x24c088u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x24c08c: 0x46002142  mul.s       $f5, $f4, $f0
    ctx->pc = 0x24c08cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x24c090: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x24c090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x24c094: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x24c094u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x24c098: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x24c098u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24c09c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x24c09cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x24c0a0: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x24c0a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24c0a4: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x24c0a4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x24c0a8: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x24c0a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x24c0ac: 0xe7a40028  swc1        $f4, 0x28($sp)
    ctx->pc = 0x24c0acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x24c0b0: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x24c0b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x24c0b4: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x24c0b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24c0b8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24c0b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24c0bc: 0xf9210030  sqc2        $vf1, 0x30($t1)
    ctx->pc = 0x24c0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24c0c0: 0x8d040104  lw          $a0, 0x104($t0)
    ctx->pc = 0x24c0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 260)));
    // 0x24c0c4: 0xc4a42b30  lwc1        $f4, 0x2B30($a1)
    ctx->pc = 0x24c0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24c0c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x24c0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24c0cc: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x24c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x24c0d0: 0xc4630040  lwc1        $f3, 0x40($v1)
    ctx->pc = 0x24c0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24c0d4: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x24c0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24c0d8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x24c0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c0dc: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x24c0dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x24c0e0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x24c0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24c0e4: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x24c0e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x24c0e8: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x24c0e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x24c0ec: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x24c0ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x24c0f0: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x24c0f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24c0f4: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x24c0f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24c0f8: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x24c0f8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x24c0fc: 0x46002142  mul.s       $f5, $f4, $f0
    ctx->pc = 0x24c0fcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x24c100: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x24c100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x24c104: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x24c104u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x24c108: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x24c108u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24c10c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x24c10cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x24c110: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x24c110u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24c114: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x24c114u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x24c118: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x24c118u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x24c11c: 0xe7a40028  swc1        $f4, 0x28($sp)
    ctx->pc = 0x24c11cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x24c120: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x24c120u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x24c124: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x24c124u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24c128: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24c128u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24c12c: 0xf9210030  sqc2        $vf1, 0x30($t1)
    ctx->pc = 0x24c12cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_24c130:
    // 0x24c130: 0x3e00008  jr          $ra
    ctx->pc = 0x24C130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C130u;
        // 0x24c134: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C138u;
}
