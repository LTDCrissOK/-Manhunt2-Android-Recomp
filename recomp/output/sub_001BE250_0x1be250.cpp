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

// Function: sub_001BE250
// Address: 0x1be250 - 0x1be3e0
void sub_001BE250_0x1be250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE250_0x1be250");
#endif

    switch (ctx->pc) {
        case 0x1be290u: goto label_1be290;
        case 0x1be29cu: goto label_1be29c;
        case 0x1be318u: goto label_1be318;
        case 0x1be340u: goto label_1be340;
        case 0x1be368u: goto label_1be368;
        case 0x1be398u: goto label_1be398;
        default: break;
    }

    ctx->pc = 0x1be250u;

    // 0x1be250: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1be250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1be254: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1be254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1be258: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1be258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1be25c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1be25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1be260: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1be260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be264: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1be264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x1be268: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1be268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1be26c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1be26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x1be270: 0x8e220310  lw          $v0, 0x310($s1)
    ctx->pc = 0x1be270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x1be274: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1be274u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1be278: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE278u;
    {
        const bool branch_taken_0x1be278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE278u;
        // 0x1be27c: 0x26300310  addiu       $s0, $s1, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be278) {
            ctx->pc = 0x1BE288u;
            goto label_1be288;
        }
    }
    ctx->pc = 0x1BE280u;
    // 0x1be280: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1BE280u;
    {
        const bool branch_taken_0x1be280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE280u;
        // 0x1be284: 0xc62002e0  lwc1        $f0, 0x2E0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be280) {
            ctx->pc = 0x1BE3B8u;
            goto label_1be3b8;
        }
    }
    ctx->pc = 0x1BE288u;
label_1be288:
    // 0x1be288: 0xc06fab4  jal         func_1BEAD0
    ctx->pc = 0x1BE288u;
    SET_GPR_U32(ctx, 31, 0x1BE290u);
    ctx->pc = 0x1BE28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE288u;
    // 0x1be28c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEAD0u, 0x1BE288u, 0x1BE290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE290u;
label_1be290:
    // 0x1be290: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1be290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be294: 0xc06fad8  jal         func_1BEB60
    ctx->pc = 0x1BE294u;
    SET_GPR_U32(ctx, 31, 0x1BE29Cu);
    ctx->pc = 0x1BE298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE294u;
    // 0x1be298: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEB60u, 0x1BE294u, 0x1BE29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE29Cu;
label_1be29c:
    // 0x1be29c: 0x262301e0  addiu       $v1, $s1, 0x1E0
    ctx->pc = 0x1be29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
    // 0x1be2a0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1be2a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be2a4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1be2a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1be2a8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1be2a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1be2ac: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1be2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1be2b0: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x1be2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1be2b4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1be2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1be2b8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1be2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be2bc: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1be2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be2c0: 0xc7a5003c  lwc1        $f5, 0x3C($sp)
    ctx->pc = 0x1be2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1be2c4: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1be2c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1be2c8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1be2c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1be2cc: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1be2ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1be2d0: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x1be2d0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1be2d4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1be2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1be2d8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1be2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1be2dc: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1be2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1be2e0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1be2e0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1be2e4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1be2e4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1be2e8: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1be2e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1be2ec: 0x46000004  c1          0x4
    ctx->pc = 0x1be2ecu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1be2f0: 0xe620033c  swc1        $f0, 0x33C($s1)
    ctx->pc = 0x1be2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 828), bits); }
    // 0x1be2f4: 0xe6200358  swc1        $f0, 0x358($s1)
    ctx->pc = 0x1be2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 856), bits); }
    // 0x1be2f8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1be2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1be2fc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1be2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1be300: 0xae200340  sw          $zero, 0x340($s1)
    ctx->pc = 0x1be300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 832), GPR_U32(ctx, 0));
    // 0x1be304: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1be304u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be308: 0x263302b0  addiu       $s3, $s1, 0x2B0
    ctx->pc = 0x1be308u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 688));
    // 0x1be30c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1BE30Cu;
    {
        const bool branch_taken_0x1be30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE30Cu;
        // 0x1be310: 0x3c140043  lui         $s4, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be30c) {
            ctx->pc = 0x1BE390u;
            goto label_1be390;
        }
    }
    ctx->pc = 0x1BE314u;
    // 0x1be314: 0x0  nop
    ctx->pc = 0x1be314u;
    // NOP
label_1be318:
    // 0x1be318: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE318u;
    {
        const bool branch_taken_0x1be318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE318u;
        // 0x1be31c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be318) {
            ctx->pc = 0x1BE324u;
            goto label_1be324;
        }
    }
    ctx->pc = 0x1BE320u;
    // 0x1be320: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1be320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1be324:
    // 0x1be324: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1BE324u;
    {
        const bool branch_taken_0x1be324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be324) {
            ctx->pc = 0x1BE390u;
            goto label_1be390;
        }
    }
    ctx->pc = 0x1BE32Cu;
    // 0x1be32c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE32Cu;
    {
        const bool branch_taken_0x1be32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE32Cu;
        // 0x1be330: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be32c) {
            ctx->pc = 0x1BE338u;
            goto label_1be338;
        }
    }
    ctx->pc = 0x1BE334u;
    // 0x1be334: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1be334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1be338:
    // 0x1be338: 0xc041480  jal         func_105200
    ctx->pc = 0x1BE338u;
    SET_GPR_U32(ctx, 31, 0x1BE340u);
    ctx->pc = 0x1BE33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE338u;
    // 0x1be33c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105200u, 0x1BE338u, 0x1BE340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE340u;
label_1be340:
    // 0x1be340: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1be340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be344: 0xc620033c  lwc1        $f0, 0x33C($s1)
    ctx->pc = 0x1be344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be348: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1be348u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1be34c: 0xe620033c  swc1        $f0, 0x33C($s1)
    ctx->pc = 0x1be34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 828), bits); }
    // 0x1be350: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1be350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1be354: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE354u;
    {
        const bool branch_taken_0x1be354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE354u;
        // 0x1be358: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be354) {
            ctx->pc = 0x1BE360u;
            goto label_1be360;
        }
    }
    ctx->pc = 0x1BE35Cu;
    // 0x1be35c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1be35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1be360:
    // 0x1be360: 0xc041480  jal         func_105200
    ctx->pc = 0x1BE360u;
    SET_GPR_U32(ctx, 31, 0x1BE368u);
    ctx->pc = 0x1BE364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE360u;
    // 0x1be364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105200u, 0x1BE360u, 0x1BE368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE368u;
label_1be368:
    // 0x1be368: 0x90430014  lbu         $v1, 0x14($v0)
    ctx->pc = 0x1be368u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1be36c: 0x3107a  dsrl        $v0, $v1, 1
    ctx->pc = 0x1be36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 1);
    // 0x1be370: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1be370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1be374: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE374u;
    {
        const bool branch_taken_0x1be374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE374u;
        // 0x1be378: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be374) {
            ctx->pc = 0x1BE384u;
            goto label_1be384;
        }
    }
    ctx->pc = 0x1BE37Cu;
    // 0x1be37c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1be37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1be380: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x1be380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1be384:
    // 0x1be384: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE384u;
    {
        const bool branch_taken_0x1be384 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE384u;
        // 0x1be388: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be384) {
            ctx->pc = 0x1BE390u;
            goto label_1be390;
        }
    }
    ctx->pc = 0x1BE38Cu;
    // 0x1be38c: 0xae220340  sw          $v0, 0x340($s1)
    ctx->pc = 0x1be38cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 832), GPR_U32(ctx, 2));
label_1be390:
    // 0x1be390: 0xc041162  jal         func_104588
    ctx->pc = 0x1BE390u;
    SET_GPR_U32(ctx, 31, 0x1BE398u);
    ctx->pc = 0x1BE394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE390u;
    // 0x1be394: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104588u, 0x1BE390u, 0x1BE398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE398u;
label_1be398:
    // 0x1be398: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1be398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be39c: 0x5600ffde  bnel        $s0, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1BE39Cu;
    {
        const bool branch_taken_0x1be39c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be39c) {
            ctx->pc = 0x1BE3A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE39Cu;
            // 0x1be3a0: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be318;
        }
    }
    ctx->pc = 0x1BE3A4u;
    // 0x1be3a4: 0xc6610030  lwc1        $f1, 0x30($s3)
    ctx->pc = 0x1be3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be3a8: 0x26820f90  addiu       $v0, $s4, 0xF90
    ctx->pc = 0x1be3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 3984));
    // 0x1be3ac: 0xc620033c  lwc1        $f0, 0x33C($s1)
    ctx->pc = 0x1be3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be3b0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1be3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1be3b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1be3b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1be3b8:
    // 0x1be3b8: 0xe620033c  swc1        $f0, 0x33C($s1)
    ctx->pc = 0x1be3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 828), bits); }
    // 0x1be3bc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1be3bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1be3c0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1be3c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1be3c4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1be3c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1be3c8: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1be3c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1be3cc: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1be3ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1be3d0: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1be3d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE3D4u;
        // 0x1be3d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE3D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE3DCu;
    // 0x1be3dc: 0x0  nop
    ctx->pc = 0x1be3dcu;
    // NOP
    ctx->pc = 0x1be3e0u;
}
