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

// Function: sub_002E21C0
// Address: 0x2e21c0 - 0x2e22e0
void sub_002E21C0_0x2e21c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E21C0_0x2e21c0");
#endif

    switch (ctx->pc) {
        case 0x2e21f0u: goto label_2e21f0;
        case 0x2e229cu: goto label_2e229c;
        default: break;
    }

    ctx->pc = 0x2e21c0u;

    // 0x2e21c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e21c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e21c4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2e21c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2e21c8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2e21c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2e21cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e21ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e21d0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2e21d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2e21d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e21d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e21d8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2e21d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2e21dc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2e21dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e21e0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2e21e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e21e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e21e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e21e8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E21E8u;
    SET_GPR_U32(ctx, 31, 0x2E21F0u);
    ctx->pc = 0x2E21ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E21E8u;
    // 0x2e21ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E21E8u, 0x2E21F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E21F0u;
label_2e21f0:
    // 0x2e21f0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2e21f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e21f4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e21f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e21f8: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x2e21f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e21fc: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x2e21fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e2200: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x2e2200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e2204: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2e2204u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2e2208: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2e2208u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2e220c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x2e220cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2e2210: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2e2210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e2214: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x2e2214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e2218: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x2e2218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e221c: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x2e221cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e2220: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2e2220u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2e2224: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2e2224u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2e2228: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2e2228u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2e222c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e222cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e2230: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2e2230u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2e2234: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x2e2234u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x2e2238: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E2238u;
    {
        const bool branch_taken_0x2e2238 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2238u;
        // 0x2e223c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2238) {
            ctx->pc = 0x2E2254u;
            goto label_2e2254;
        }
    }
    ctx->pc = 0x2E2240u;
    // 0x2e2240: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e2240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2244: 0x0  nop
    ctx->pc = 0x2e2244u;
    // NOP
    // 0x2e2248: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e2248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e224c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E224Cu;
    {
        const bool branch_taken_0x2e224c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E224Cu;
        // 0x2e2250: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e224c) {
            ctx->pc = 0x2E2270u;
            goto label_2e2270;
        }
    }
    ctx->pc = 0x2E2254u;
label_2e2254:
    // 0x2e2254: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e2254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e2258: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e2258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e225c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e225cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2260: 0x0  nop
    ctx->pc = 0x2e2260u;
    // NOP
    // 0x2e2264: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e2264u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e2268: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2e2268u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2e226c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2e226cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e2270:
    // 0x2e2270: 0x24100030  addiu       $s0, $zero, 0x30
    ctx->pc = 0x2e2270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e2274: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2e2274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2e2278: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2e2278u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2e227c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e227cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2280: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e2280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2284: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x2e2284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2e2288: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e2288u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e228c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2e228cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2e2290: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2e2290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2e2294: 0xc0b8806  jal         func_2E2018
    ctx->pc = 0x2E2294u;
    SET_GPR_U32(ctx, 31, 0x2E229Cu);
    ctx->pc = 0x2E2298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2294u;
    // 0x2e2298: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2018u, 0x2E2294u, 0x2E229Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E229Cu;
label_2e229c:
    // 0x2e229c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2e229cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e22a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e22a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e22a4: 0x701018  mult        $v0, $v1, $s0
    ctx->pc = 0x2e22a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e22a8: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x2e22a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2e22ac: 0xa0640030  sb          $a0, 0x30($v1)
    ctx->pc = 0x2e22acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 48), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e22b0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2e22b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e22b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e22b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e22b8: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E22B8u;
    {
        const bool branch_taken_0x2e22b8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2e22b8) {
            ctx->pc = 0x2E22BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E22B8u;
            // 0x2e22bc: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E22C0u;
            goto label_2e22c0;
        }
    }
    ctx->pc = 0x2E22C0u;
label_2e22c0:
    // 0x2e22c0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2e22c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2e22c4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2e22c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e22c8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2e22c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e22cc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2e22ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e22d0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2e22d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e22d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e22d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e22d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E22D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E22DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E22D8u;
        // 0x2e22dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E22D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E22E0u;
}
