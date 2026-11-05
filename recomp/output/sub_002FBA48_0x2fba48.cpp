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

// Function: sub_002FBA48
// Address: 0x2fba48 - 0x2fbbc8
void sub_002FBA48_0x2fba48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FBA48_0x2fba48");
#endif

    switch (ctx->pc) {
        case 0x2fbad8u: goto label_2fbad8;
        case 0x2fbae0u: goto label_2fbae0;
        case 0x2fbb40u: goto label_2fbb40;
        case 0x2fbb48u: goto label_2fbb48;
        default: break;
    }

    ctx->pc = 0x2fba48u;

    // 0x2fba48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2fba48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2fba4c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2fba50: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2fba50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2fba54: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2fba54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2fba58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fba58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fba5c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2fba5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2fba60: 0x8c43bcf0  lw          $v1, -0x4310($v0)
    ctx->pc = 0x2fba60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBCF0u));
    // 0x2fba64: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2fba64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2fba68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fba68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fba6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fba6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fba70: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2fba70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fba74: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2fba74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2fba78: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2fba78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2fba7c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2fba7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2fba80: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2FBA80u;
    {
        const bool branch_taken_0x2fba80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBA80u;
        // 0x2fba84: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fba80) {
            ctx->pc = 0x2FBAE0u;
            goto label_2fbae0;
        }
    }
    ctx->pc = 0x2FBA88u;
    // 0x2fba88: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fba88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2fba8c: 0x8c43bd48  lw          $v1, -0x42B8($v0)
    ctx->pc = 0x2fba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x2fba90: 0x8c640100  lw          $a0, 0x100($v1)
    ctx->pc = 0x2fba90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2fba94: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x2fba94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2fba98: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fba98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fba9c: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x2fba9cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fbaa0: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x2fbaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x2fbaa4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2fbaa4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbaa8: 0xfa010050  sqc2        $vf1, 0x50($s0)
    ctx->pc = 0x2fbaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fbaac: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x2fbaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x2fbab0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fbab0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fbab4: 0xfa010060  sqc2        $vf1, 0x60($s0)
    ctx->pc = 0x2fbab4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fbab8: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x2fbab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x2fbabc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2fbabcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fbac0: 0xfa010070  sqc2        $vf1, 0x70($s0)
    ctx->pc = 0x2fbac0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fbac4: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2fbac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2fbac8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2fbac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fbacc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fbaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbad0: 0xc0c48b6  jal         func_3122D8
    ctx->pc = 0x2FBAD0u;
    SET_GPR_U32(ctx, 31, 0x2FBAD8u);
    ctx->pc = 0x2FBAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBAD0u;
    // 0x2fbad4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3122D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3122D8u, 0x2FBAD0u, 0x2FBAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBAD8u;
label_2fbad8:
    // 0x2fbad8: 0xc0c48da  jal         func_312368
    ctx->pc = 0x2FBAD8u;
    SET_GPR_U32(ctx, 31, 0x2FBAE0u);
    ctx->pc = 0x2FBADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBAD8u;
    // 0x2fbadc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x2FBAD8u, 0x2FBAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBAE0u;
label_2fbae0:
    // 0x2fbae0: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x2fbae0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x2fbae4: 0x8e42bcf4  lw          $v0, -0x430C($s2)
    ctx->pc = 0x2fbae4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBCF4u));
    // 0x2fbae8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2fbae8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fbaec: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2FBAECu;
    {
        const bool branch_taken_0x2fbaec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBAECu;
        // 0x2fbaf0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbaec) {
            ctx->pc = 0x2FBB48u;
            goto label_2fbb48;
        }
    }
    ctx->pc = 0x2FBAF4u;
    // 0x2fbaf4: 0x8c43bd48  lw          $v1, -0x42B8($v0)
    ctx->pc = 0x2fbaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950216)));
    // 0x2fbaf8: 0x8c640100  lw          $a0, 0x100($v1)
    ctx->pc = 0x2fbaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2fbafc: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x2fbafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2fbb00: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fbb00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fbb04: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x2fbb04u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fbb08: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x2fbb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x2fbb0c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2fbb0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbb10: 0xfa010050  sqc2        $vf1, 0x50($s0)
    ctx->pc = 0x2fbb10u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fbb14: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x2fbb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x2fbb18: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fbb18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fbb1c: 0xfa010060  sqc2        $vf1, 0x60($s0)
    ctx->pc = 0x2fbb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fbb20: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x2fbb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x2fbb24: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2fbb24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fbb28: 0xfa010070  sqc2        $vf1, 0x70($s0)
    ctx->pc = 0x2fbb28u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fbb2c: 0x3c01c270  lui         $at, 0xC270
    ctx->pc = 0x2fbb2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49776 << 16));
    // 0x2fbb30: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2fbb30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fbb34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fbb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbb38: 0xc0c48b6  jal         func_3122D8
    ctx->pc = 0x2FBB38u;
    SET_GPR_U32(ctx, 31, 0x2FBB40u);
    ctx->pc = 0x2FBB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBB38u;
    // 0x2fbb3c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3122D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3122D8u, 0x2FBB38u, 0x2FBB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBB40u;
label_2fbb40:
    // 0x2fbb40: 0xc0c48da  jal         func_312368
    ctx->pc = 0x2FBB40u;
    SET_GPR_U32(ctx, 31, 0x2FBB48u);
    ctx->pc = 0x2FBB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBB40u;
    // 0x2fbb44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x2FBB40u, 0x2FBB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBB48u;
label_2fbb48:
    // 0x2fbb48: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fbb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2fbb4c: 0xc6230120  lwc1        $f3, 0x120($s1)
    ctx->pc = 0x2fbb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fbb50: 0xc6220124  lwc1        $f2, 0x124($s1)
    ctx->pc = 0x2fbb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fbb54: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fbb54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2fbb58: 0xc6210128  lwc1        $f1, 0x128($s1)
    ctx->pc = 0x2fbb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fbb5c: 0xc440bac8  lwc1        $f0, -0x4538($v0)
    ctx->pc = 0x2fbb5cu;
    { uint32_t bits = FAST_READ32(0x3FBAC8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fbb60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fbb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fbb64: 0x8e43bcf4  lw          $v1, -0x430C($s2)
    ctx->pc = 0x2fbb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950132)));
    // 0x2fbb68: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2fbb68u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2fbb6c: 0xac82bce4  sw          $v0, -0x431C($a0)
    ctx->pc = 0x2fbb6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FBCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBCE4u, _value); } while (0);
    // 0x2fbb70: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2fbb70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2fbb74: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2fbb74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fbb78: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fbb78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fbb7c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2fbb7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fbb80: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2fbb80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2fbb84: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2fbb84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2fbb88: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2fbb88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2fbb8c: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x2fbb8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2fbb90: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x2fbb90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2fbb94: 0x6ba4001f  ldl         $a0, 0x1F($sp)
    ctx->pc = 0x2fbb94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2fbb98: 0x6fa40018  ldr         $a0, 0x18($sp)
    ctx->pc = 0x2fbb98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2fbb9c: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x2fbb9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fbba0: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x2fbba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fbba4: 0xb064001f  sdl         $a0, 0x1F($v1)
    ctx->pc = 0x2fbba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fbba8: 0xb4640018  sdr         $a0, 0x18($v1)
    ctx->pc = 0x2fbba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fbbac: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2fbbacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fbbb0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2fbbb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2fbbb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBBB4u;
        // 0x2fbbb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBBBCu;
    // 0x2fbbbc: 0x0  nop
    ctx->pc = 0x2fbbbcu;
    // NOP
    // 0x2fbbc0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2fbbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fbbc4: 0x0  nop
    ctx->pc = 0x2fbbc4u;
    // NOP
    ctx->pc = 0x2fbbc8u;
}
