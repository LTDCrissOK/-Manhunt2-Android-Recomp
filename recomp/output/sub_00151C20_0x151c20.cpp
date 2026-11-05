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

// Function: sub_00151C20
// Address: 0x151c20 - 0x151df0
void sub_00151C20_0x151c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151C20_0x151c20");
#endif

    switch (ctx->pc) {
        case 0x151cf0u: goto label_151cf0;
        case 0x151d1cu: goto label_151d1c;
        case 0x151d90u: goto label_151d90;
        case 0x151da4u: goto label_151da4;
        case 0x151db0u: goto label_151db0;
        default: break;
    }

    ctx->pc = 0x151c20u;

label_151c20:
    // 0x151c20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x151c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x151c24: 0x3c0147c3  lui         $at, 0x47C3
    ctx->pc = 0x151c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18371 << 16));
    // 0x151c28: 0x34214fff  ori         $at, $at, 0x4FFF
    ctx->pc = 0x151c28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20479);
    // 0x151c2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x151c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151c30: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x151c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x151c34: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x151c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x151c38: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x151c38u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151c3c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x151c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x151c40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x151c40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151c44: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x151c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x151c48: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x151c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x151c4c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x151c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x151c50: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x151c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x151c54: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x151c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x151c58: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x151c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x151c5c: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x151c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x151c60: 0x92220938  lbu         $v0, 0x938($s1)
    ctx->pc = 0x151c60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2360)));
    // 0x151c64: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x151C64u;
    {
        const bool branch_taken_0x151c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151c64) {
            ctx->pc = 0x151C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151C64u;
            // 0x151c68: 0x9223046c  lbu         $v1, 0x46C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151C74u;
            goto label_151c74;
        }
    }
    ctx->pc = 0x151C6Cu;
    // 0x151c6c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x151C6Cu;
    {
        const bool branch_taken_0x151c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C6Cu;
        // 0x151c70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151c6c) {
            ctx->pc = 0x151DC0u;
            goto label_151dc0;
        }
    }
    ctx->pc = 0x151C74u;
label_151c74:
    // 0x151c74: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x151c74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0x151c78: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x151c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x151c7c: 0x24a59a08  addiu       $a1, $a1, -0x65F8
    ctx->pc = 0x151c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941192));
    // 0x151c80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x151c80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x151c84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x151c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x151c88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x151c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151c8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x151c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x151c90: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x151c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x151c94: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x151c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x151c98: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x151c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x151c9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x151c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x151ca0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x151ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x151ca4: 0x8ca20108  lw          $v0, 0x108($a1)
    ctx->pc = 0x151ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
    // 0x151ca8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x151CA8u;
    {
        const bool branch_taken_0x151ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151ca8) {
            ctx->pc = 0x151CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151CA8u;
            // 0x151cac: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151CB8u;
            goto label_151cb8;
        }
    }
    ctx->pc = 0x151CB0u;
    // 0x151cb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x151CB0u;
    {
        const bool branch_taken_0x151cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CB0u;
        // 0x151cb4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151cb0) {
            ctx->pc = 0x151CC0u;
            goto label_151cc0;
        }
    }
    ctx->pc = 0x151CB8u;
label_151cb8:
    // 0x151cb8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x151cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151cbc: 0x24760070  addiu       $s6, $v1, 0x70
    ctx->pc = 0x151cbcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_151cc0:
    // 0x151cc0: 0x3c0147c3  lui         $at, 0x47C3
    ctx->pc = 0x151cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18371 << 16));
    // 0x151cc4: 0x34214fff  ori         $at, $at, 0x4FFF
    ctx->pc = 0x151cc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20479);
    // 0x151cc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x151cc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151ccc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x151cccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151cd0: 0x92220938  lbu         $v0, 0x938($s1)
    ctx->pc = 0x151cd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2360)));
    // 0x151cd4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x151cd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151cd8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x151cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x151cdc: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x151CDCu;
    {
        const bool branch_taken_0x151cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CDCu;
        // 0x151ce0: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151cdc) {
            ctx->pc = 0x151D84u;
            goto label_151d84;
        }
    }
    ctx->pc = 0x151CE4u;
    // 0x151ce4: 0x26350918  addiu       $s5, $s1, 0x918
    ctx->pc = 0x151ce4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 2328));
    // 0x151ce8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x151ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x151cec: 0x0  nop
    ctx->pc = 0x151cecu;
    // NOP
label_151cf0:
    // 0x151cf0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x151cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x151cf4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x151cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151cf8: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x151CF8u;
    {
        const bool branch_taken_0x151cf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x151CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CF8u;
        // 0x151cfc: 0x26830001  addiu       $v1, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151cf8) {
            ctx->pc = 0x151D64u;
            goto label_151d64;
        }
    }
    ctx->pc = 0x151D00u;
    // 0x151d00: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x151d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x151d04: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x151d04u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x151d08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x151d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151d0c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x151d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151d10: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x151d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151d14: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x151D14u;
    SET_GPR_U32(ctx, 31, 0x151D1Cu);
    ctx->pc = 0x151D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151D14u;
    // 0x151d18: 0x24c60070  addiu       $a2, $a2, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x151D14u, 0x151D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151D1Cu;
label_151d1c:
    // 0x151d1c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x151d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x151d20: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x151d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x151d24: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x151d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x151d28: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x151d28u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x151d2c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x151d2cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x151d30: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x151d30u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x151d34: 0x2e620001  sltiu       $v0, $s3, 0x1
    ctx->pc = 0x151d34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x151d38: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x151D38u;
    {
        const bool branch_taken_0x151d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151d38) {
            ctx->pc = 0x151D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151D38u;
            // 0x151d3c: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x151D60u;
            goto label_151d60;
        }
    }
    ctx->pc = 0x151D40u;
    // 0x151d40: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x151d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151d44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x151d44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x151d48: 0x0  nop
    ctx->pc = 0x151d48u;
    // NOP
    // 0x151d4c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x151D4Cu;
    {
        const bool branch_taken_0x151d4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x151d4c) {
            ctx->pc = 0x151D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151D4Cu;
            // 0x151d50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151D54u;
            goto label_151d54;
        }
    }
    ctx->pc = 0x151D54u;
label_151d54:
    // 0x151d54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151D54u;
    {
        const bool branch_taken_0x151d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D54u;
        // 0x151d58: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151d54) {
            ctx->pc = 0x151D68u;
            goto label_151d68;
        }
    }
    ctx->pc = 0x151D5Cu;
    // 0x151d5c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x151d5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_151d60:
    // 0x151d60: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x151d60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151d64:
    // 0x151d64: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x151d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_151d68:
    // 0x151d68: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x151d68u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x151d6c: 0x2e430008  sltiu       $v1, $s2, 0x8
    ctx->pc = 0x151d6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x151d70: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x151D70u;
    {
        const bool branch_taken_0x151d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151d70) {
            ctx->pc = 0x151D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151D70u;
            // 0x151d74: 0x8e240468  lw          $a0, 0x468($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151D88u;
            goto label_151d88;
        }
    }
    ctx->pc = 0x151D78u;
    // 0x151d78: 0x92220938  lbu         $v0, 0x938($s1)
    ctx->pc = 0x151d78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2360)));
    // 0x151d7c: 0x1682ffdc  bne         $s4, $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x151D7Cu;
    {
        const bool branch_taken_0x151d7c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x151D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D7Cu;
        // 0x151d80: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151d7c) {
            ctx->pc = 0x151CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151cf0;
        }
    }
    ctx->pc = 0x151D84u;
label_151d84:
    // 0x151d84: 0x8e240468  lw          $a0, 0x468($s1)
    ctx->pc = 0x151d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1128)));
label_151d88:
    // 0x151d88: 0xc058258  jal         func_160960
    ctx->pc = 0x151D88u;
    SET_GPR_U32(ctx, 31, 0x151D90u);
    ctx->pc = 0x151D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151D88u;
    // 0x151d8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160960u, 0x151D88u, 0x151D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151D90u;
label_151d90:
    // 0x151d90: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x151D90u;
    {
        const bool branch_taken_0x151d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D90u;
        // 0x151d94: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151d90) {
            ctx->pc = 0x151DB8u;
            goto label_151db8;
        }
    }
    ctx->pc = 0x151D98u;
    // 0x151d98: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x151d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151d9c: 0xc05477c  jal         func_151DF0
    ctx->pc = 0x151D9Cu;
    SET_GPR_U32(ctx, 31, 0x151DA4u);
    ctx->pc = 0x151DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151D9Cu;
    // 0x151da0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151DF0u, 0x151D9Cu, 0x151DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151DA4u;
label_151da4:
    // 0x151da4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x151da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151da8: 0xc054708  jal         func_151C20
    ctx->pc = 0x151DA8u;
    SET_GPR_U32(ctx, 31, 0x151DB0u);
    ctx->pc = 0x151DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151DA8u;
    // 0x151dac: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151C20u;
    goto label_151c20;
    ctx->pc = 0x151DB0u;
label_151db0:
    // 0x151db0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x151db0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151db4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x151db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151db8:
    // 0x151db8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x151db8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151dbc: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x151dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_151dc0:
    // 0x151dc0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x151dc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151dc4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x151dc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x151dc8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x151dc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151dcc: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x151dccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x151dd0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x151dd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x151dd4: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x151dd4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x151dd8: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x151dd8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x151ddc: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x151ddcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x151de0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x151de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x151de4: 0x3e00008  jr          $ra
    ctx->pc = 0x151DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151DE4u;
        // 0x151de8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151DECu;
    // 0x151dec: 0x0  nop
    ctx->pc = 0x151decu;
    // NOP
    ctx->pc = 0x151df0u;
}
