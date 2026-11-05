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

// Function: sub_00310C48
// Address: 0x310c48 - 0x310df0
void sub_00310C48_0x310c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310C48_0x310c48");
#endif

    switch (ctx->pc) {
        case 0x310c78u: goto label_310c78;
        case 0x310cf8u: goto label_310cf8;
        case 0x310d10u: goto label_310d10;
        case 0x310dc0u: goto label_310dc0;
        default: break;
    }

    ctx->pc = 0x310c48u;

    // 0x310c48: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x310c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x310c4c: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x310c4cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310c50: 0x8c43bd48  lw          $v1, -0x42B8($v0)
    ctx->pc = 0x310c50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x310c54: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x310c54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x310c58: 0x8d64055c  lw          $a0, 0x55C($t3)
    ctx->pc = 0x310c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1372)));
    // 0x310c5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x310c5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310c60: 0x8c620100  lw          $v0, 0x100($v1)
    ctx->pc = 0x310c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x310c64: 0x18800021  blez        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x310C64u;
    {
        const bool branch_taken_0x310c64 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x310C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310C64u;
        // 0x310c68: 0x24490070  addiu       $t1, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310c64) {
            ctx->pc = 0x310CECu;
            goto label_310cec;
        }
    }
    ctx->pc = 0x310C6Cu;
    // 0x310c6c: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x310c6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x310c70: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x310c70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310c74: 0x25650534  addiu       $a1, $t3, 0x534
    ctx->pc = 0x310c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 1332));
label_310c78:
    // 0x310c78: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x310c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x310c7c: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x310c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x310c80: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x310c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x310c84: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x310c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x310c88: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x310c88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x310c8c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x310c8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x310c90: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x310c90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x310c94: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x310c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x310c98: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x310c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310c9c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x310c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310ca0: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x310ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x310ca4: 0xc7a5004c  lwc1        $f5, 0x4C($sp)
    ctx->pc = 0x310ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x310ca8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x310ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x310cac: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x310cacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x310cb0: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x310cb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x310cb4: 0xe7a5003c  swc1        $f5, 0x3C($sp)
    ctx->pc = 0x310cb4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x310cb8: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x310cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x310cbc: 0xc5030004  lwc1        $f3, 0x4($t0)
    ctx->pc = 0x310cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x310cc0: 0xc5040008  lwc1        $f4, 0x8($t0)
    ctx->pc = 0x310cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x310cc4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x310cc4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x310cc8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x310cc8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x310ccc: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x310cccu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x310cd0: 0x8d62055c  lw          $v0, 0x55C($t3)
    ctx->pc = 0x310cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1372)));
    // 0x310cd4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x310cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x310cd8: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x310cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x310cdc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x310cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x310ce0: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x310ce0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x310ce4: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x310CE4u;
    {
        const bool branch_taken_0x310ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310CE4u;
        // 0x310ce8: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ce4) {
            ctx->pc = 0x310C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310c78;
        }
    }
    ctx->pc = 0x310CECu;
label_310cec:
    // 0x310cec: 0x8d63055c  lw          $v1, 0x55C($t3)
    ctx->pc = 0x310cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1372)));
    // 0x310cf0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x310cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310cf4: 0x0  nop
    ctx->pc = 0x310cf4u;
    // NOP
label_310cf8:
    // 0x310cf8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x310cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x310cfc: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x310CFCu;
    {
        const bool branch_taken_0x310cfc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x310D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310CFCu;
        // 0x310d00: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310cfc) {
            ctx->pc = 0x310D70u;
            goto label_310d70;
        }
    }
    ctx->pc = 0x310D04u;
    // 0x310d04: 0x256a0534  addiu       $t2, $t3, 0x534
    ctx->pc = 0x310d04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 1332));
    // 0x310d08: 0x24880001  addiu       $t0, $a0, 0x1
    ctx->pc = 0x310d08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x310d0c: 0x0  nop
    ctx->pc = 0x310d0cu;
    // NOP
label_310d10:
    // 0x310d10: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x310d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x310d14: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x310d14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x310d18: 0x3a23021  addu        $a2, $sp, $v0
    ctx->pc = 0x310d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x310d1c: 0x3a33821  addu        $a3, $sp, $v1
    ctx->pc = 0x310d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x310d20: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x310d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310d24: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x310d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310d28: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x310d28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310d2c: 0x0  nop
    ctx->pc = 0x310d2cu;
    // NOP
    // 0x310d30: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x310D30u;
    {
        const bool branch_taken_0x310d30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x310D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D30u;
        // 0x310d34: 0x1431821  addu        $v1, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310d30) {
            ctx->pc = 0x310D58u;
            goto label_310d58;
        }
    }
    ctx->pc = 0x310D38u;
    // 0x310d38: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x310d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x310d3c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x310d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x310d40: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x310d40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x310d44: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x310d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x310d48: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x310d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x310d4c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x310d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x310d50: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x310d50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x310d54: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x310d54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_310d58:
    // 0x310d58: 0x8d63055c  lw          $v1, 0x55C($t3)
    ctx->pc = 0x310d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1372)));
    // 0x310d5c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x310d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310d60: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x310d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x310d64: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x310d64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x310d68: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x310D68u;
    {
        const bool branch_taken_0x310d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D68u;
        // 0x310d6c: 0x24880001  addiu       $t0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310d68) {
            ctx->pc = 0x310D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310d10;
        }
    }
    ctx->pc = 0x310D70u;
label_310d70:
    // 0x310d70: 0x5520ffe1  bnel        $t1, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x310D70u;
    {
        const bool branch_taken_0x310d70 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x310d70) {
            ctx->pc = 0x310D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310D70u;
            // 0x310d74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310cf8;
        }
    }
    ctx->pc = 0x310D78u;
    // 0x310d78: 0x8d620568  lw          $v0, 0x568($t3)
    ctx->pc = 0x310d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1384)));
    // 0x310d7c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x310D7Cu;
    {
        const bool branch_taken_0x310d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D7Cu;
        // 0x310d80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310d7c) {
            ctx->pc = 0x310DE8u;
            goto label_310de8;
        }
    }
    ctx->pc = 0x310D84u;
    // 0x310d84: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x310d84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x310d88: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x310D88u;
    {
        const bool branch_taken_0x310d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D88u;
        // 0x310d8c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310d88) {
            ctx->pc = 0x310DE4u;
            goto label_310de4;
        }
    }
    ctx->pc = 0x310D90u;
    // 0x310d90: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x310d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310d94: 0x3c014470  lui         $at, 0x4470
    ctx->pc = 0x310d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17520 << 16));
    // 0x310d98: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x310d98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x310d9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x310d9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x310da0: 0x0  nop
    ctx->pc = 0x310da0u;
    // NOP
    // 0x310da4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x310da4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310da8: 0x0  nop
    ctx->pc = 0x310da8u;
    // NOP
    // 0x310dac: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
    ctx->pc = 0x310DACu;
    {
        const bool branch_taken_0x310dac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x310dac) {
            ctx->pc = 0x310DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310DACu;
            // 0x310db0: 0xad65055c  sw          $a1, 0x55C($t3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 11), 1372), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310DE8u;
            goto label_310de8;
        }
    }
    ctx->pc = 0x310DB4u;
    // 0x310db4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x310db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310db8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x310db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x310dbc: 0x0  nop
    ctx->pc = 0x310dbcu;
    // NOP
label_310dc0:
    // 0x310dc0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x310dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x310dc4: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x310dc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x310dc8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x310DC8u;
    {
        const bool branch_taken_0x310dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310DC8u;
        // 0x310dcc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310dc8) {
            ctx->pc = 0x310DE4u;
            goto label_310de4;
        }
    }
    ctx->pc = 0x310DD0u;
    // 0x310dd0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x310dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310dd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x310dd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310dd8: 0x0  nop
    ctx->pc = 0x310dd8u;
    // NOP
    // 0x310ddc: 0x4502fff8  bc1fl       . + 4 + (-0x8 << 2)
    ctx->pc = 0x310DDCu;
    {
        const bool branch_taken_0x310ddc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x310ddc) {
            ctx->pc = 0x310DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310DDCu;
            // 0x310de0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310dc0;
        }
    }
    ctx->pc = 0x310DE4u;
label_310de4:
    // 0x310de4: 0xad65055c  sw          $a1, 0x55C($t3)
    ctx->pc = 0x310de4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1372), GPR_U32(ctx, 5));
label_310de8:
    // 0x310de8: 0x3e00008  jr          $ra
    ctx->pc = 0x310DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310DE8u;
        // 0x310dec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310DF0u;
}
