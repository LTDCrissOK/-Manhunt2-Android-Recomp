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

// Function: sub_0026C208
// Address: 0x26c208 - 0x26c2e8
void sub_0026C208_0x26c208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C208_0x26c208");
#endif

    switch (ctx->pc) {
        case 0x26c240u: goto label_26c240;
        case 0x26c254u: goto label_26c254;
        case 0x26c260u: goto label_26c260;
        default: break;
    }

    ctx->pc = 0x26c208u;

    // 0x26c208: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26c208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26c20c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c210: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x26c210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x26c214: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x26c214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x26c218: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26c218u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c21c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x26c21cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x26c220: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x26c220u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c224: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x26c224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x26c228: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x26c228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x26c22c: 0x8e230254  lw          $v1, 0x254($s1)
    ctx->pc = 0x26c22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x26c230: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C230u;
    {
        const bool branch_taken_0x26c230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26C234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C230u;
        // 0x26c234: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c230) {
            ctx->pc = 0x26C240u;
            goto label_26c240;
        }
    }
    ctx->pc = 0x26C238u;
    // 0x26c238: 0xc09afb0  jal         func_26BEC0
    ctx->pc = 0x26C238u;
    SET_GPR_U32(ctx, 31, 0x26C240u);
    ctx->pc = 0x26C23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C238u;
    // 0x26c23c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEC0u, 0x26C238u, 0x26C240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C240u;
label_26c240:
    // 0x26c240: 0x8e230258  lw          $v1, 0x258($s1)
    ctx->pc = 0x26c240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
    // 0x26c244: 0x54600018  bnel        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x26C244u;
    {
        const bool branch_taken_0x26c244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c244) {
            ctx->pc = 0x26C248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C244u;
            // 0x26c248: 0x7a420000  lq          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C2A8u;
            goto label_26c2a8;
        }
    }
    ctx->pc = 0x26C24Cu;
    // 0x26c24c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x26C24Cu;
    SET_GPR_U32(ctx, 31, 0x26C254u);
    ctx->pc = 0x26C250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C24Cu;
    // 0x26c250: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x26C24Cu, 0x26C254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C254u;
label_26c254:
    // 0x26c254: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26c254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c258: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x26C258u;
    SET_GPR_U32(ctx, 31, 0x26C260u);
    ctx->pc = 0x26C25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C258u;
    // 0x26c25c: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26C258u, 0x26C260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C260u;
label_26c260:
    // 0x26c260: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x26c260u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x26c264: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x26c264u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26c268: 0xe6140020  swc1        $f20, 0x20($s0)
    ctx->pc = 0x26c268u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x26c26c: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x26c26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x26c270: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x26c270u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x26c274: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x26c274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x26c278: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x26c278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26c27c: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x26c27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26c280: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x26c280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c284: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x26c284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c288: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x26c288u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26c28c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x26c28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26c290: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x26c290u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26c294: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x26c294u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x26c298: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x26c298u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c29c: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x26c29cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26c2a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26C2A0u;
    {
        const bool branch_taken_0x26c2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C2A0u;
        // 0x26c2a4: 0xae300258  sw          $s0, 0x258($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c2a0) {
            ctx->pc = 0x26C2BCu;
            goto label_26c2bc;
        }
    }
    ctx->pc = 0x26C2A8u;
label_26c2a8:
    // 0x26c2a8: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x26c2a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x26c2ac: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x26c2acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x26c2b0: 0x8e230258  lw          $v1, 0x258($s1)
    ctx->pc = 0x26c2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
    // 0x26c2b4: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x26c2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x26c2b8: 0xe4740020  swc1        $f20, 0x20($v1)
    ctx->pc = 0x26c2b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_26c2bc:
    // 0x26c2bc: 0xe6340274  swc1        $f20, 0x274($s1)
    ctx->pc = 0x26c2bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 628), bits); }
    // 0x26c2c0: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x26c2c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26c2c4: 0xfa210220  sqc2        $vf1, 0x220($s1)
    ctx->pc = 0x26c2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 544), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26c2c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x26c2c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c2cc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x26c2ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26c2d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26c2d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c2d4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x26c2d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26c2d8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x26c2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26c2dc: 0x3e00008  jr          $ra
    ctx->pc = 0x26C2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C2DCu;
        // 0x26c2e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C2DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C2E4u;
    // 0x26c2e4: 0x0  nop
    ctx->pc = 0x26c2e4u;
    // NOP
    ctx->pc = 0x26c2e8u;
}
