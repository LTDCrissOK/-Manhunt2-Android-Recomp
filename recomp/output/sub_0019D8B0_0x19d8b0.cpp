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

// Function: sub_0019D8B0
// Address: 0x19d8b0 - 0x19d9b8
void sub_0019D8B0_0x19d8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D8B0_0x19d8b0");
#endif

    switch (ctx->pc) {
        case 0x19d8e0u: goto label_19d8e0;
        case 0x19d8e8u: goto label_19d8e8;
        case 0x19d8f0u: goto label_19d8f0;
        default: break;
    }

    ctx->pc = 0x19d8b0u;

    // 0x19d8b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19d8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19d8b4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x19d8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19d8b8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x19d8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x19d8bc: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x19d8bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x19d8c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19d8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19d8c4: 0x2603efe8  addiu       $v1, $s0, -0x1018
    ctx->pc = 0x19d8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963176));
    // 0x19d8c8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x19d8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x19d8cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19d8ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d8d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19d8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d8d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x19d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x48EFECu));
    // 0x19d8d8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x19D8D8u;
    SET_GPR_U32(ctx, 31, 0x19D8E0u);
    ctx->pc = 0x19D8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D8D8u;
    // 0x19d8dc: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x19D8D8u, 0x19D8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D8E0u;
label_19d8e0:
    // 0x19d8e0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x19D8E0u;
    {
        const bool branch_taken_0x19d8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D8E0u;
        // 0x19d8e4: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d8e0) {
            ctx->pc = 0x19D970u;
            goto label_19d970;
        }
    }
    ctx->pc = 0x19D8E8u;
label_19d8e8:
    // 0x19d8e8: 0xc067622  jal         func_19D888
    ctx->pc = 0x19D8E8u;
    SET_GPR_U32(ctx, 31, 0x19D8F0u);
    ctx->pc = 0x19D8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D8E8u;
    // 0x19d8ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D888u, 0x19D8E8u, 0x19D8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D8F0u;
label_19d8f0:
    // 0x19d8f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19d8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19d8f4: 0x1043001f  beq         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x19D8F4u;
    {
        const bool branch_taken_0x19d8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D8F4u;
        // 0x19d8f8: 0x2643efe8  addiu       $v1, $s2, -0x1018 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294963176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d8f4) {
            ctx->pc = 0x19D974u;
            goto label_19d974;
        }
    }
    ctx->pc = 0x19D8FCu;
    // 0x19d8fc: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x19d8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19d900: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x19d900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x19d904: 0x8cc50104  lw          $a1, 0x104($a2)
    ctx->pc = 0x19d904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
    // 0x19d908: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19d908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19d90c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19d910: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x19d910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x19d914: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x19d914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x19d918: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x19d918u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19d91c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x19d91cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19d920: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x19d920u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19d924: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x19d924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19d928: 0x8cc30104  lw          $v1, 0x104($a2)
    ctx->pc = 0x19d928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
    // 0x19d92c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19d930: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x19d930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x19d934: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x19d934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19d938: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x19d938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19d93c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x19d93cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x19d940: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x19d940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19d944: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x19d944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19d948: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x19d948u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x19d94c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x19d94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19d950: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x19d950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19d954: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x19d954u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x19d958: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19d958u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19d95c: 0x0  nop
    ctx->pc = 0x19d95cu;
    // NOP
    // 0x19d960: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19d960u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19d964: 0x0  nop
    ctx->pc = 0x19d964u;
    // NOP
    // 0x19d968: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x19D968u;
    {
        const bool branch_taken_0x19d968 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19D96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D968u;
        // 0x19d96c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d968) {
            ctx->pc = 0x19D9A0u;
            goto label_19d9a0;
        }
    }
    ctx->pc = 0x19D970u;
label_19d970:
    // 0x19d970: 0x2643efe8  addiu       $v1, $s2, -0x1018
    ctx->pc = 0x19d970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294963176));
label_19d974:
    // 0x19d974: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x19d974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x19d978: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19D978u;
    {
        const bool branch_taken_0x19d978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D978u;
        // 0x19d97c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d978) {
            ctx->pc = 0x19D984u;
            goto label_19d984;
        }
    }
    ctx->pc = 0x19D980u;
    // 0x19d980: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x19d980u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19d984:
    // 0x19d984: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D984u;
    {
        const bool branch_taken_0x19d984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d984) {
            ctx->pc = 0x19D994u;
            goto label_19d994;
        }
    }
    ctx->pc = 0x19D98Cu;
    // 0x19d98c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x19d98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19d990: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x19d990u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_19d994:
    // 0x19d994: 0x1600ffd4  bnez        $s0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x19D994u;
    {
        const bool branch_taken_0x19d994 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D994u;
        // 0x19d998: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d994) {
            ctx->pc = 0x19D8E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d8e8;
        }
    }
    ctx->pc = 0x19D99Cu;
    // 0x19d99c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19d99cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19d9a0:
    // 0x19d9a0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19d9a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d9a4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x19d9a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19d9a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19d9a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d9ac: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x19d9acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19d9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x19D9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D9B0u;
        // 0x19d9b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D9B8u;
}
