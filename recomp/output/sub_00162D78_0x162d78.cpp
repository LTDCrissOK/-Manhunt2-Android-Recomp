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

// Function: sub_00162D78
// Address: 0x162d78 - 0x162fc0
void sub_00162D78_0x162d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162D78_0x162d78");
#endif

    switch (ctx->pc) {
        case 0x162e0cu: goto label_162e0c;
        case 0x162e84u: goto label_162e84;
        case 0x162ea0u: goto label_162ea0;
        case 0x162eb0u: goto label_162eb0;
        case 0x162ed4u: goto label_162ed4;
        case 0x162ee8u: goto label_162ee8;
        case 0x162f18u: goto label_162f18;
        case 0x162f28u: goto label_162f28;
        case 0x162f44u: goto label_162f44;
        default: break;
    }

    ctx->pc = 0x162d78u;

    // 0x162d78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x162d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x162d7c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x162d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x162d80: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x162d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x162d84: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x162d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x162d88: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x162d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x162d8c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x162d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x162d90: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x162d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x162d94: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x162d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x162d98: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x162d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x162d9c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x162d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x162da0: 0x8cb00010  lw          $s0, 0x10($a1)
    ctx->pc = 0x162da0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x162da4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x162DA4u;
    {
        const bool branch_taken_0x162da4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x162DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DA4u;
        // 0x162da8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162da4) {
            ctx->pc = 0x162DB4u;
            goto label_162db4;
        }
    }
    ctx->pc = 0x162DACu;
    // 0x162dac: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x162dacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x162db0: 0xfa6102f0  sqc2        $vf1, 0x2F0($s3)
    ctx->pc = 0x162db0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 752), _mm_castps_si128(ctx->vu0_vf[1]));
label_162db4:
    // 0x162db4: 0x8cb4000c  lw          $s4, 0xC($a1)
    ctx->pc = 0x162db4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x162db8: 0x52800077  beql        $s4, $zero, . + 4 + (0x77 << 2)
    ctx->pc = 0x162DB8u;
    {
        const bool branch_taken_0x162db8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x162db8) {
            ctx->pc = 0x162DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162DB8u;
            // 0x162dbc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162F98u;
            goto label_162f98;
        }
    }
    ctx->pc = 0x162DC0u;
    // 0x162dc0: 0x8e620330  lw          $v0, 0x330($s3)
    ctx->pc = 0x162dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 816)));
    // 0x162dc4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x162DC4u;
    {
        const bool branch_taken_0x162dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162dc4) {
            ctx->pc = 0x162DF0u;
            goto label_162df0;
        }
    }
    ctx->pc = 0x162DCCu;
    // 0x162dcc: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x162DCCu;
    {
        const bool branch_taken_0x162dcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x162dcc) {
            ctx->pc = 0x162DF0u;
            goto label_162df0;
        }
    }
    ctx->pc = 0x162DD4u;
    // 0x162dd4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x162dd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x162dd8: 0xfa610320  sqc2        $vf1, 0x320($s3)
    ctx->pc = 0x162dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 800), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x162ddc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x162ddcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x162de0: 0xfa610310  sqc2        $vf1, 0x310($s3)
    ctx->pc = 0x162de0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 784), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x162de4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162de8: 0xae620330  sw          $v0, 0x330($s3)
    ctx->pc = 0x162de8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 816), GPR_U32(ctx, 2));
    // 0x162dec: 0x8e620330  lw          $v0, 0x330($s3)
    ctx->pc = 0x162decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 816)));
label_162df0:
    // 0x162df0: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x162DF0u;
    {
        const bool branch_taken_0x162df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162df0) {
            ctx->pc = 0x162DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162DF0u;
            // 0x162df4: 0x8e6202e4  lw          $v0, 0x2E4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 740)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162E74u;
            goto label_162e74;
        }
    }
    ctx->pc = 0x162DF8u;
    // 0x162df8: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x162DF8u;
    {
        const bool branch_taken_0x162df8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x162DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DF8u;
        // 0x162dfc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162df8) {
            ctx->pc = 0x162E70u;
            goto label_162e70;
        }
    }
    ctx->pc = 0x162E00u;
    // 0x162e00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x162e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162e04: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x162E04u;
    SET_GPR_U32(ctx, 31, 0x162E0Cu);
    ctx->pc = 0x162E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162E04u;
    // 0x162e08: 0x26660320  addiu       $a2, $s3, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x162E04u, 0x162E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162E0Cu;
label_162e0c:
    // 0x162e0c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x162e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x162e10: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x162e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x162e14: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x162e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x162e18: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x162e18u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x162e1c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x162e1cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x162e20: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x162e20u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x162e24: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x162e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x162e28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x162e28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162e2c: 0x0  nop
    ctx->pc = 0x162e2cu;
    // NOP
    // 0x162e30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x162e30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162e34: 0x0  nop
    ctx->pc = 0x162e34u;
    // NOP
    // 0x162e38: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x162E38u;
    {
        const bool branch_taken_0x162e38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x162e38) {
            ctx->pc = 0x162E50u;
            goto label_162e50;
        }
    }
    ctx->pc = 0x162E40u;
    // 0x162e40: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x162e40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x162e44: 0xfa610320  sqc2        $vf1, 0x320($s3)
    ctx->pc = 0x162e44u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 800), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x162e48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162e4c: 0xae620334  sw          $v0, 0x334($s3)
    ctx->pc = 0x162e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 820), GPR_U32(ctx, 2));
label_162e50:
    // 0x162e50: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x162e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x162e54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x162e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162e58: 0x0  nop
    ctx->pc = 0x162e58u;
    // NOP
    // 0x162e5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x162e5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162e60: 0x0  nop
    ctx->pc = 0x162e60u;
    // NOP
    // 0x162e64: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x162E64u;
    {
        const bool branch_taken_0x162e64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x162E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E64u;
        // 0x162e68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e64) {
            ctx->pc = 0x162E70u;
            goto label_162e70;
        }
    }
    ctx->pc = 0x162E6Cu;
    // 0x162e6c: 0xae620338  sw          $v0, 0x338($s3)
    ctx->pc = 0x162e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 824), GPR_U32(ctx, 2));
label_162e70:
    // 0x162e70: 0x8e6202e4  lw          $v0, 0x2E4($s3)
    ctx->pc = 0x162e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 740)));
label_162e74:
    // 0x162e74: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x162E74u;
    {
        const bool branch_taken_0x162e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E74u;
        // 0x162e78: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e74) {
            ctx->pc = 0x162F98u;
            goto label_162f98;
        }
    }
    ctx->pc = 0x162E7Cu;
    // 0x162e7c: 0xc0414a2  jal         func_105288
    ctx->pc = 0x162E7Cu;
    SET_GPR_U32(ctx, 31, 0x162E84u);
    ctx->pc = 0x162E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162E7Cu;
    // 0x162e80: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105288u, 0x162E7Cu, 0x162E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162E84u;
label_162e84:
    // 0x162e84: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x162E84u;
    {
        const bool branch_taken_0x162e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E84u;
        // 0x162e88: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e84) {
            ctx->pc = 0x162F90u;
            goto label_162f90;
        }
    }
    ctx->pc = 0x162E8Cu;
    // 0x162e8c: 0x92820022  lbu         $v0, 0x22($s4)
    ctx->pc = 0x162e8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 34)));
    // 0x162e90: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x162e90u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162e94: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x162E94u;
    {
        const bool branch_taken_0x162e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E94u;
        // 0x162e98: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e94) {
            ctx->pc = 0x162F90u;
            goto label_162f90;
        }
    }
    ctx->pc = 0x162E9Cu;
    // 0x162e9c: 0x0  nop
    ctx->pc = 0x162e9cu;
    // NOP
label_162ea0:
    // 0x162ea0: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x162ea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x162ea4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x162ea4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x162ea8: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x162EA8u;
    SET_GPR_U32(ctx, 31, 0x162EB0u);
    ctx->pc = 0x162EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162EA8u;
    // 0x162eac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x162EA8u, 0x162EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162EB0u;
label_162eb0:
    // 0x162eb0: 0x66150001  daddiu      $s5, $s0, 0x1
    ctx->pc = 0x162eb0u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
    // 0x162eb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162eb8: 0x92020014  lbu         $v0, 0x14($s0)
    ctx->pc = 0x162eb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x162ebc: 0x30420015  andi        $v0, $v0, 0x15
    ctx->pc = 0x162ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)21);
    // 0x162ec0: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x162EC0u;
    {
        const bool branch_taken_0x162ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162ec0) {
            ctx->pc = 0x162EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162EC0u;
            // 0x162ec4: 0x92820022  lbu         $v0, 0x22($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 34)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162F80u;
            goto label_162f80;
        }
    }
    ctx->pc = 0x162EC8u;
    // 0x162ec8: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x162ec8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x162ecc: 0xc0414a2  jal         func_105288
    ctx->pc = 0x162ECCu;
    SET_GPR_U32(ctx, 31, 0x162ED4u);
    ctx->pc = 0x162ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162ECCu;
    // 0x162ed0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105288u, 0x162ECCu, 0x162ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162ED4u;
label_162ed4:
    // 0x162ed4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162ed8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x162ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x162edc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x162edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162ee0: 0xc04113c  jal         func_1044F0
    ctx->pc = 0x162EE0u;
    SET_GPR_U32(ctx, 31, 0x162EE8u);
    ctx->pc = 0x162EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162EE0u;
    // 0x162ee4: 0x62800a  movz        $s0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044F0u, 0x162EE0u, 0x162EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162EE8u;
label_162ee8:
    // 0x162ee8: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x162ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x162eec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x162eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x162ef0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x162ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x162ef4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x162ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x162ef8: 0x62102f  dsubu       $v0, $v1, $v0
    ctx->pc = 0x162ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x162efc: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x162EFCu;
    {
        const bool branch_taken_0x162efc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x162F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162EFCu;
        // 0x162f00: 0x21078  dsll        $v0, $v0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162efc) {
            ctx->pc = 0x162F08u;
            goto label_162f08;
        }
    }
    ctx->pc = 0x162F04u;
    // 0x162f04: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x162f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_162f08:
    // 0x162f08: 0x92420022  lbu         $v0, 0x22($s2)
    ctx->pc = 0x162f08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 34)));
    // 0x162f0c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x162F0Cu;
    {
        const bool branch_taken_0x162f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F0Cu;
        // 0x162f10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f0c) {
            ctx->pc = 0x162F64u;
            goto label_162f64;
        }
    }
    ctx->pc = 0x162F14u;
    // 0x162f14: 0x0  nop
    ctx->pc = 0x162f14u;
    // NOP
label_162f18:
    // 0x162f18: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x162f18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x162f1c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x162f1cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x162f20: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x162F20u;
    SET_GPR_U32(ctx, 31, 0x162F28u);
    ctx->pc = 0x162F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162F20u;
    // 0x162f24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x162F20u, 0x162F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162F28u;
label_162f28:
    // 0x162f28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x162f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162f2c: 0x90820014  lbu         $v0, 0x14($a0)
    ctx->pc = 0x162f2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x162f30: 0x30420015  andi        $v0, $v0, 0x15
    ctx->pc = 0x162f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)21);
    // 0x162f34: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x162F34u;
    {
        const bool branch_taken_0x162f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162f34) {
            ctx->pc = 0x162F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162F34u;
            // 0x162f38: 0x92420022  lbu         $v0, 0x22($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 34)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162F54u;
            goto label_162f54;
        }
    }
    ctx->pc = 0x162F3Cu;
    // 0x162f3c: 0xc0414a2  jal         func_105288
    ctx->pc = 0x162F3Cu;
    SET_GPR_U32(ctx, 31, 0x162F44u);
    ctx->pc = 0x162F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162F3Cu;
    // 0x162f40: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105288u, 0x162F3Cu, 0x162F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162F44u;
label_162f44:
    // 0x162f44: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x162F44u;
    {
        const bool branch_taken_0x162f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162f44) {
            ctx->pc = 0x162F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162F44u;
            // 0x162f48: 0x66100002  daddiu      $s0, $s0, 0x2 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x162F50u;
            goto label_162f50;
        }
    }
    ctx->pc = 0x162F4Cu;
    // 0x162f4c: 0x66100001  daddiu      $s0, $s0, 0x1
    ctx->pc = 0x162f4cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
label_162f50:
    // 0x162f50: 0x92420022  lbu         $v0, 0x22($s2)
    ctx->pc = 0x162f50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 34)));
label_162f54:
    // 0x162f54: 0x66310001  daddiu      $s1, $s1, 0x1
    ctx->pc = 0x162f54u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)1);
    // 0x162f58: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x162f58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x162f5c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x162F5Cu;
    {
        const bool branch_taken_0x162f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162f5c) {
            ctx->pc = 0x162F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162f18;
        }
    }
    ctx->pc = 0x162F64u;
label_162f64:
    // 0x162f64: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x162F64u;
    {
        const bool branch_taken_0x162f64 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x162F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F64u;
        // 0x162f68: 0x2d0102a  slt         $v0, $s6, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f64) {
            ctx->pc = 0x162F74u;
            goto label_162f74;
        }
    }
    ctx->pc = 0x162F6Cu;
    // 0x162f6c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x162F6Cu;
    {
        const bool branch_taken_0x162f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162f6c) {
            ctx->pc = 0x162F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162F6Cu;
            // 0x162f70: 0x92820022  lbu         $v0, 0x22($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 34)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162F80u;
            goto label_162f80;
        }
    }
    ctx->pc = 0x162F74u;
label_162f74:
    // 0x162f74: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x162f74u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162f78: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x162f78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162f7c: 0x92820022  lbu         $v0, 0x22($s4)
    ctx->pc = 0x162f7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 34)));
label_162f80:
    // 0x162f80: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x162f80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162f84: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x162f84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x162f88: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x162F88u;
    {
        const bool branch_taken_0x162f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162f88) {
            ctx->pc = 0x162EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162ea0;
        }
    }
    ctx->pc = 0x162F90u;
label_162f90:
    // 0x162f90: 0xae7402e4  sw          $s4, 0x2E4($s3)
    ctx->pc = 0x162f90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 740), GPR_U32(ctx, 20));
    // 0x162f94: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x162f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_162f98:
    // 0x162f98: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x162f98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x162f9c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x162f9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162fa0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x162fa0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x162fa4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x162fa4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162fa8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x162fa8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x162fac: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x162facu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x162fb0: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x162fb0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x162fb4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x162fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x162fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x162FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162FB8u;
        // 0x162fbc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162FC0u;
}
