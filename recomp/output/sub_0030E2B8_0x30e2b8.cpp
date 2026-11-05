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

// Function: sub_0030E2B8
// Address: 0x30e2b8 - 0x30e698
void sub_0030E2B8_0x30e2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E2B8_0x30e2b8");
#endif

    switch (ctx->pc) {
        case 0x30e2f4u: goto label_30e2f4;
        case 0x30e300u: goto label_30e300;
        case 0x30e30cu: goto label_30e30c;
        case 0x30e344u: goto label_30e344;
        case 0x30e354u: goto label_30e354;
        case 0x30e3d8u: goto label_30e3d8;
        case 0x30e468u: goto label_30e468;
        case 0x30e500u: goto label_30e500;
        case 0x30e520u: goto label_30e520;
        case 0x30e534u: goto label_30e534;
        case 0x30e54cu: goto label_30e54c;
        case 0x30e560u: goto label_30e560;
        case 0x30e56cu: goto label_30e56c;
        case 0x30e588u: goto label_30e588;
        case 0x30e5a0u: goto label_30e5a0;
        case 0x30e5b8u: goto label_30e5b8;
        default: break;
    }

    ctx->pc = 0x30e2b8u;

    // 0x30e2b8: 0x27bdf950  addiu       $sp, $sp, -0x6B0
    ctx->pc = 0x30e2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965584));
    // 0x30e2bc: 0xffb00650  sd          $s0, 0x650($sp)
    ctx->pc = 0x30e2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 16));
    // 0x30e2c0: 0xffb30668  sd          $s3, 0x668($sp)
    ctx->pc = 0x30e2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1640), GPR_U64(ctx, 19));
    // 0x30e2c4: 0xffb10658  sd          $s1, 0x658($sp)
    ctx->pc = 0x30e2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1624), GPR_U64(ctx, 17));
    // 0x30e2c8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30e2c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e2cc: 0xffb20660  sd          $s2, 0x660($sp)
    ctx->pc = 0x30e2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 18));
    // 0x30e2d0: 0xffb50678  sd          $s5, 0x678($sp)
    ctx->pc = 0x30e2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1656), GPR_U64(ctx, 21));
    // 0x30e2d4: 0xffb60680  sd          $s6, 0x680($sp)
    ctx->pc = 0x30e2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 22));
    // 0x30e2d8: 0xffbf0688  sd          $ra, 0x688($sp)
    ctx->pc = 0x30e2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1672), GPR_U64(ctx, 31));
    // 0x30e2dc: 0xe7b606a0  swc1        $f22, 0x6A0($sp)
    ctx->pc = 0x30e2dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1696), bits); }
    // 0x30e2e0: 0xe7b50698  swc1        $f21, 0x698($sp)
    ctx->pc = 0x30e2e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1688), bits); }
    // 0x30e2e4: 0xe7b40690  swc1        $f20, 0x690($sp)
    ctx->pc = 0x30e2e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1680), bits); }
    // 0x30e2e8: 0xffb40670  sd          $s4, 0x670($sp)
    ctx->pc = 0x30e2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 20));
    // 0x30e2ec: 0xc0c3dc2  jal         func_30F708
    ctx->pc = 0x30E2ECu;
    SET_GPR_U32(ctx, 31, 0x30E2F4u);
    ctx->pc = 0x30E2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E2ECu;
    // 0x30e2f0: 0x8e740004  lw          $s4, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F708u, 0x30E2ECu, 0x30E2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E2F4u;
label_30e2f4:
    // 0x30e2f4: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x30e2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x30e2f8: 0xc0c47b2  jal         func_311EC8
    ctx->pc = 0x30E2F8u;
    SET_GPR_U32(ctx, 31, 0x30E300u);
    ctx->pc = 0x30E2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E2F8u;
    // 0x30e2fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311EC8u, 0x30E2F8u, 0x30E300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E300u;
label_30e300:
    // 0x30e300: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30e300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e304: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x30E304u;
    SET_GPR_U32(ctx, 31, 0x30E30Cu);
    ctx->pc = 0x30E308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E304u;
    // 0x30e308: 0x24050415  addiu       $a1, $zero, 0x415 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1045));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x30E304u, 0x30E30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E30Cu;
label_30e30c:
    // 0x30e30c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30e30cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e310: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x30e310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x30e314: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x30e314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e318: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x30e318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x30e31c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x30e31cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30e320: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x30e320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e324: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x30e324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x30e328: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x30e328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e32c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x30e32cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x30e330: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x30e330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e334: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x30E334u;
    {
        const bool branch_taken_0x30e334 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E334u;
        // 0x30e338: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e334) {
            ctx->pc = 0x30E360u;
            goto label_30e360;
        }
    }
    ctx->pc = 0x30E33Cu;
    // 0x30e33c: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x30E33Cu;
    SET_GPR_U32(ctx, 31, 0x30E344u);
    ctx->pc = 0x30E340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E33Cu;
    // 0x30e340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x30E33Cu, 0x30E344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E344u;
label_30e344:
    // 0x30e344: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30E344u;
    {
        const bool branch_taken_0x30e344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E344u;
        // 0x30e348: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e344) {
            ctx->pc = 0x30E358u;
            goto label_30e358;
        }
    }
    ctx->pc = 0x30E34Cu;
    // 0x30e34c: 0xc0c4900  jal         func_312400
    ctx->pc = 0x30E34Cu;
    SET_GPR_U32(ctx, 31, 0x30E354u);
    ctx->pc = 0x30E350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E34Cu;
    // 0x30e350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x30E34Cu, 0x30E354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E354u;
label_30e354:
    // 0x30e354: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x30e354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_30e358:
    // 0x30e358: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x30e358u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30e35c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x30e35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_30e360:
    // 0x30e360: 0x8e830334  lw          $v1, 0x334($s4)
    ctx->pc = 0x30e360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 820)));
    // 0x30e364: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x30e364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x30e368: 0x2442ffb4  addiu       $v0, $v0, -0x4C
    ctx->pc = 0x30e368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967220));
    // 0x30e36c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x30e36cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x30e370: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30E370u;
    {
        const bool branch_taken_0x30e370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e370) {
            ctx->pc = 0x30E394u;
            goto label_30e394;
        }
    }
    ctx->pc = 0x30E378u;
    // 0x30e378: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x30e378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x30e37c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x30e37cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x30e380: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30e380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30e384: 0x8c6200b8  lw          $v0, 0xB8($v1)
    ctx->pc = 0x30e384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x30e388: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x30e388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e38c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x30E38Cu;
    {
        const bool branch_taken_0x30e38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E38Cu;
        // 0x30e390: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e38c) {
            ctx->pc = 0x30E398u;
            goto label_30e398;
        }
    }
    ctx->pc = 0x30E394u;
label_30e394:
    // 0x30e394: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x30e394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30e398:
    // 0x30e398: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x30e398u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
    // 0x30e39c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30e39cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e3a0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x30e3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e3a4: 0x8e820310  lw          $v0, 0x310($s4)
    ctx->pc = 0x30e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 784)));
    // 0x30e3a8: 0x1840003e  blez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x30E3A8u;
    {
        const bool branch_taken_0x30e3a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x30E3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E3A8u;
        // 0x30e3ac: 0x46010501  sub.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e3a8) {
            ctx->pc = 0x30E4A4u;
            goto label_30e4a4;
        }
    }
    ctx->pc = 0x30E3B0u;
    // 0x30e3b0: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x30e3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x30e3b4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x30e3b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x30e3b8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x30e3b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x30e3bc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x30e3bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x30e3c0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x30e3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x30e3c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x30e3c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x30e3c8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x30e3c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x30e3cc: 0x24557ee0  addiu       $s5, $v0, 0x7EE0
    ctx->pc = 0x30e3ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 32480));
    // 0x30e3d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x30e3d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e3d4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x30e3d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_30e3d8:
    // 0x30e3d8: 0x8e830304  lw          $v1, 0x304($s4)
    ctx->pc = 0x30e3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 772)));
    // 0x30e3dc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x30e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x30e3e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30e3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30e3e4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x30e3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e3e8: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x30e3e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e3ec: 0x0  nop
    ctx->pc = 0x30e3ecu;
    // NOP
    // 0x30e3f0: 0x45030028  bc1tl       . + 4 + (0x28 << 2)
    ctx->pc = 0x30E3F0u;
    {
        const bool branch_taken_0x30e3f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30e3f0) {
            ctx->pc = 0x30E3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30E3F0u;
            // 0x30e3f4: 0x8e820310  lw          $v0, 0x310($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30E494u;
            goto label_30e494;
        }
    }
    ctx->pc = 0x30E3F8u;
    // 0x30e3f8: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x30e3f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e3fc: 0x0  nop
    ctx->pc = 0x30e3fcu;
    // NOP
    // 0x30e400: 0x45030024  bc1tl       . + 4 + (0x24 << 2)
    ctx->pc = 0x30E400u;
    {
        const bool branch_taken_0x30e400 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30e400) {
            ctx->pc = 0x30E404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30E400u;
            // 0x30e404: 0x8e820310  lw          $v0, 0x310($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30E494u;
            goto label_30e494;
        }
    }
    ctx->pc = 0x30E408u;
    // 0x30e408: 0x8e820300  lw          $v0, 0x300($s4)
    ctx->pc = 0x30e408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 768)));
    // 0x30e40c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x30e40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x30e410: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x30e410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e414: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x30e414u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e418: 0x0  nop
    ctx->pc = 0x30e418u;
    // NOP
    // 0x30e41c: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x30E41Cu;
    {
        const bool branch_taken_0x30e41c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30e41c) {
            ctx->pc = 0x30E420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30E41Cu;
            // 0x30e420: 0x8e820308  lw          $v0, 0x308($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 776)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30E450u;
            goto label_30e450;
        }
    }
    ctx->pc = 0x30E424u;
    // 0x30e424: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x30e424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e428: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x30e428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e42c: 0x0  nop
    ctx->pc = 0x30e42cu;
    // NOP
    // 0x30e430: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x30E430u;
    {
        const bool branch_taken_0x30e430 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30e430) {
            ctx->pc = 0x30E434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30E430u;
            // 0x30e434: 0x8e820308  lw          $v0, 0x308($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 776)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30E450u;
            goto label_30e450;
        }
    }
    ctx->pc = 0x30E438u;
    // 0x30e438: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x30e438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e43c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x30e43cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e440: 0x0  nop
    ctx->pc = 0x30e440u;
    // NOP
    // 0x30e444: 0x45030013  bc1tl       . + 4 + (0x13 << 2)
    ctx->pc = 0x30E444u;
    {
        const bool branch_taken_0x30e444 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30e444) {
            ctx->pc = 0x30E448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30E444u;
            // 0x30e448: 0x8e820310  lw          $v0, 0x310($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30E494u;
            goto label_30e494;
        }
    }
    ctx->pc = 0x30E44Cu;
    // 0x30e44c: 0x8e820308  lw          $v0, 0x308($s4)
    ctx->pc = 0x30e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 776)));
label_30e450:
    // 0x30e450: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x30e450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x30e454: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30e454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30e458: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x30e458u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30e45c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x30e45cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x30e460: 0xc0c3510  jal         func_30D440
    ctx->pc = 0x30E460u;
    SET_GPR_U32(ctx, 31, 0x30E468u);
    ctx->pc = 0x30E464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E460u;
    // 0x30e464: 0x952021  addu        $a0, $a0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D440u, 0x30E460u, 0x30E468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E468u;
label_30e468:
    // 0x30e468: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x30E468u;
    {
        const bool branch_taken_0x30e468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e468) {
            ctx->pc = 0x30E46Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30E468u;
            // 0x30e46c: 0x8e820310  lw          $v0, 0x310($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30E494u;
            goto label_30e494;
        }
    }
    ctx->pc = 0x30E470u;
    // 0x30e470: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x30e470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x30e474: 0x28620320  slti        $v0, $v1, 0x320
    ctx->pc = 0x30e474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)800) ? 1 : 0);
    // 0x30e478: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30E478u;
    {
        const bool branch_taken_0x30e478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E478u;
        // 0x30e47c: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e478) {
            ctx->pc = 0x30E490u;
            goto label_30e490;
        }
    }
    ctx->pc = 0x30E480u;
    // 0x30e480: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30e480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30e484: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x30e484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x30e488: 0xae630028  sw          $v1, 0x28($s3)
    ctx->pc = 0x30e488u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
    // 0x30e48c: 0xa4500000  sh          $s0, 0x0($v0)
    ctx->pc = 0x30e48cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 16));
label_30e490:
    // 0x30e490: 0x8e820310  lw          $v0, 0x310($s4)
    ctx->pc = 0x30e490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 784)));
label_30e494:
    // 0x30e494: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x30e494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x30e498: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x30e498u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30e49c: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x30E49Cu;
    {
        const bool branch_taken_0x30e49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E49Cu;
        // 0x30e4a0: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e49c) {
            ctx->pc = 0x30E3D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e3d8;
        }
    }
    ctx->pc = 0x30E4A4u;
label_30e4a4:
    // 0x30e4a4: 0x8e640028  lw          $a0, 0x28($s3)
    ctx->pc = 0x30e4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x30e4a8: 0x1080006e  beqz        $a0, . + 4 + (0x6E << 2)
    ctx->pc = 0x30E4A8u;
    {
        const bool branch_taken_0x30e4a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E4A8u;
        // 0x30e4ac: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e4a8) {
            ctx->pc = 0x30E664u;
            goto label_30e664;
        }
    }
    ctx->pc = 0x30E4B0u;
    // 0x30e4b0: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x30e4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x30e4b4: 0x449021  addu        $s2, $v0, $a0
    ctx->pc = 0x30e4b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30e4b8: 0x72202a  slt         $a0, $v1, $s2
    ctx->pc = 0x30e4b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x30e4bc: 0x54800008  bnel        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x30E4BCu;
    {
        const bool branch_taken_0x30e4bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e4bc) {
            ctx->pc = 0x30E4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30E4BCu;
            // 0x30e4c0: 0x8e64001c  lw          $a0, 0x1C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30E4E0u;
            goto label_30e4e0;
        }
    }
    ctx->pc = 0x30E4C4u;
    // 0x30e4c4: 0x721023  subu        $v0, $v1, $s2
    ctx->pc = 0x30e4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x30e4c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30e4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e4cc: 0x28420033  slti        $v0, $v0, 0x33
    ctx->pc = 0x30e4ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x30e4d0: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x30e4d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x30e4d4: 0x5060002f  beql        $v1, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x30E4D4u;
    {
        const bool branch_taken_0x30e4d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e4d4) {
            ctx->pc = 0x30E4D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30E4D4u;
            // 0x30e4d8: 0x8e70001c  lw          $s0, 0x1C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30E594u;
            goto label_30e594;
        }
    }
    ctx->pc = 0x30E4DCu;
    // 0x30e4dc: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x30e4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_30e4e0:
    // 0x30e4e0: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x30E4E0u;
    {
        const bool branch_taken_0x30e4e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e4e0) {
            ctx->pc = 0x30E4E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30E4E0u;
            // 0x30e4e4: 0x8e640020  lw          $a0, 0x20($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30E524u;
            goto label_30e524;
        }
    }
    ctx->pc = 0x30E4E8u;
    // 0x30e4e8: 0x8c82fff0  lw          $v0, -0x10($a0)
    ctx->pc = 0x30e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x30e4ec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30e4f0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x30e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x30e4f4: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30E4F4u;
    {
        const bool branch_taken_0x30e4f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x30E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E4F4u;
        // 0x30e4f8: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e4f4) {
            ctx->pc = 0x30E518u;
            goto label_30e518;
        }
    }
    ctx->pc = 0x30E4FCu;
    // 0x30e4fc: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x30e4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_30e500:
    // 0x30e500: 0x0  nop
    ctx->pc = 0x30e500u;
    // NOP
    // 0x30e504: 0x0  nop
    ctx->pc = 0x30e504u;
    // NOP
    // 0x30e508: 0x0  nop
    ctx->pc = 0x30e508u;
    // NOP
    // 0x30e50c: 0x0  nop
    ctx->pc = 0x30e50cu;
    // NOP
    // 0x30e510: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x30E510u;
    {
        const bool branch_taken_0x30e510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E510u;
        // 0x30e514: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e510) {
            ctx->pc = 0x30E500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e500;
        }
    }
    ctx->pc = 0x30E518u;
label_30e518:
    // 0x30e518: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x30E518u;
    SET_GPR_U32(ctx, 31, 0x30E520u);
    ctx->pc = 0x30E51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E518u;
    // 0x30e51c: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x30E518u, 0x30E520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E520u;
label_30e520:
    // 0x30e520: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x30e520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_30e524:
    // 0x30e524: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30E524u;
    {
        const bool branch_taken_0x30e524 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E524u;
        // 0x30e528: 0xae60001c  sw          $zero, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e524) {
            ctx->pc = 0x30E534u;
            goto label_30e534;
        }
    }
    ctx->pc = 0x30E52Cu;
    // 0x30e52c: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x30E52Cu;
    SET_GPR_U32(ctx, 31, 0x30E534u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x30E52Cu, 0x30E534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E534u;
label_30e534:
    // 0x30e534: 0x1a400016  blez        $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x30E534u;
    {
        const bool branch_taken_0x30e534 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x30E538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E534u;
        // 0x30e538: 0xae600020  sw          $zero, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e534) {
            ctx->pc = 0x30E590u;
            goto label_30e590;
        }
    }
    ctx->pc = 0x30E53Cu;
    // 0x30e53c: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x30e53cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x30e540: 0x2651ffff  addiu       $s1, $s2, -0x1
    ctx->pc = 0x30e540u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x30e544: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x30E544u;
    SET_GPR_U32(ctx, 31, 0x30E54Cu);
    ctx->pc = 0x30E548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E544u;
    // 0x30e548: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x30E544u, 0x30E54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E54Cu;
label_30e54c:
    // 0x30e54c: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x30e54cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x30e550: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x30e550u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x30e554: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x30E554u;
    {
        const bool branch_taken_0x30e554 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E554u;
        // 0x30e558: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e554) {
            ctx->pc = 0x30E578u;
            goto label_30e578;
        }
    }
    ctx->pc = 0x30E55Cu;
    // 0x30e55c: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x30e55cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30e560:
    // 0x30e560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30e560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e564: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x30E564u;
    SET_GPR_U32(ctx, 31, 0x30E56Cu);
    ctx->pc = 0x30E568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E564u;
    // 0x30e568: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x30E564u, 0x30E56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E56Cu;
label_30e56c:
    // 0x30e56c: 0x0  nop
    ctx->pc = 0x30e56cu;
    // NOP
    // 0x30e570: 0x1636fffb  bne         $s1, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x30E570u;
    {
        const bool branch_taken_0x30e570 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 22));
        ctx->pc = 0x30E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E570u;
        // 0x30e574: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e570) {
            ctx->pc = 0x30E560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e560;
        }
    }
    ctx->pc = 0x30E578u;
label_30e578:
    // 0x30e578: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x30e578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x30e57c: 0xae75001c  sw          $s5, 0x1C($s3)
    ctx->pc = 0x30e57cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 21));
    // 0x30e580: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x30E580u;
    SET_GPR_U32(ctx, 31, 0x30E588u);
    ctx->pc = 0x30E584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E580u;
    // 0x30e584: 0x2442018  mult        $a0, $s2, $a0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x30E580u, 0x30E588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E588u;
label_30e588:
    // 0x30e588: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x30e588u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
    // 0x30e58c: 0xae720024  sw          $s2, 0x24($s3)
    ctx->pc = 0x30e58cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 18));
label_30e590:
    // 0x30e590: 0x8e70001c  lw          $s0, 0x1C($s3)
    ctx->pc = 0x30e590u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_30e594:
    // 0x30e594: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30e594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e598: 0xc0c3774  jal         func_30DDD0
    ctx->pc = 0x30E598u;
    SET_GPR_U32(ctx, 31, 0x30E5A0u);
    ctx->pc = 0x30E59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E598u;
    // 0x30e59c: 0x8e710020  lw          $s1, 0x20($s3) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30DDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30DDD0u, 0x30E598u, 0x30E5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E5A0u;
label_30e5a0:
    // 0x30e5a0: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x30e5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x30e5a4: 0x1840002f  blez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x30E5A4u;
    {
        const bool branch_taken_0x30e5a4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x30E5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E5A4u;
        // 0x30e5a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e5a4) {
            ctx->pc = 0x30E664u;
            goto label_30e664;
        }
    }
    ctx->pc = 0x30E5ACu;
    // 0x30e5ac: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x30e5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x30e5b0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x30e5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30e5b4: 0x0  nop
    ctx->pc = 0x30e5b4u;
    // NOP
label_30e5b8:
    // 0x30e5b8: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x30e5b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30e5bc: 0x8e820300  lw          $v0, 0x300($s4)
    ctx->pc = 0x30e5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 768)));
    // 0x30e5c0: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x30e5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30e5c4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x30e5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30e5c8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x30e5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x30e5cc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x30e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x30e5d0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x30e5d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30e5d4: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x30e5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30e5d8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x30e5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e5dc: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x30e5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e5e0: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x30e5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e5e4: 0xe4a0ffdc  swc1        $f0, -0x24($a1)
    ctx->pc = 0x30e5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967260), bits); }
    // 0x30e5e8: 0xe4a1ffe0  swc1        $f1, -0x20($a1)
    ctx->pc = 0x30e5e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967264), bits); }
    // 0x30e5ec: 0xe4a2ffe4  swc1        $f2, -0x1C($a1)
    ctx->pc = 0x30e5ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967268), bits); }
    // 0x30e5f0: 0x8e820300  lw          $v0, 0x300($s4)
    ctx->pc = 0x30e5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 768)));
    // 0x30e5f4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x30e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x30e5f8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x30e5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x30e5fc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x30e5fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30e600: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x30e600u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30e604: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x30e604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e608: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x30e608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e60c: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x30e60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e610: 0xe4a0fff4  swc1        $f0, -0xC($a1)
    ctx->pc = 0x30e610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967284), bits); }
    // 0x30e614: 0xe4a1fff8  swc1        $f1, -0x8($a1)
    ctx->pc = 0x30e614u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967288), bits); }
    // 0x30e618: 0xe4a2fffc  swc1        $f2, -0x4($a1)
    ctx->pc = 0x30e618u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), bits); }
    // 0x30e61c: 0x8e820300  lw          $v0, 0x300($s4)
    ctx->pc = 0x30e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 768)));
    // 0x30e620: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x30e620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x30e624: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x30e624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x30e628: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x30e628u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30e62c: 0xfa010020  sqc2        $vf1, 0x20($s0)
    ctx->pc = 0x30e62cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30e630: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x30e630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e634: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x30e634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x30e638: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x30e638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e63c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x30e63cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x30e640: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x30e640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e644: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x30e644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x30e648: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x30e648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x30e64c: 0xe4a20010  swc1        $f2, 0x10($a1)
    ctx->pc = 0x30e64cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x30e650: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x30e650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x30e654: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x30e654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x30e658: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x30e658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30e65c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x30E65Cu;
    {
        const bool branch_taken_0x30e65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E65Cu;
        // 0x30e660: 0x24a50048  addiu       $a1, $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e65c) {
            ctx->pc = 0x30E5B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e5b8;
        }
    }
    ctx->pc = 0x30E664u;
label_30e664:
    // 0x30e664: 0xdfb00650  ld          $s0, 0x650($sp)
    ctx->pc = 0x30e664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1616)));
    // 0x30e668: 0xdfb10658  ld          $s1, 0x658($sp)
    ctx->pc = 0x30e668u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1624)));
    // 0x30e66c: 0xdfb20660  ld          $s2, 0x660($sp)
    ctx->pc = 0x30e66cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1632)));
    // 0x30e670: 0xdfb30668  ld          $s3, 0x668($sp)
    ctx->pc = 0x30e670u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1640)));
    // 0x30e674: 0xdfb40670  ld          $s4, 0x670($sp)
    ctx->pc = 0x30e674u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1648)));
    // 0x30e678: 0xdfb50678  ld          $s5, 0x678($sp)
    ctx->pc = 0x30e678u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1656)));
    // 0x30e67c: 0xdfb60680  ld          $s6, 0x680($sp)
    ctx->pc = 0x30e67cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1664)));
    // 0x30e680: 0xdfbf0688  ld          $ra, 0x688($sp)
    ctx->pc = 0x30e680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1672)));
    // 0x30e684: 0xc7b606a0  lwc1        $f22, 0x6A0($sp)
    ctx->pc = 0x30e684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x30e688: 0xc7b50698  lwc1        $f21, 0x698($sp)
    ctx->pc = 0x30e688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x30e68c: 0xc7b40690  lwc1        $f20, 0x690($sp)
    ctx->pc = 0x30e68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30e690: 0x3e00008  jr          $ra
    ctx->pc = 0x30E690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E690u;
        // 0x30e694: 0x27bd06b0  addiu       $sp, $sp, 0x6B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1712));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E698u;
}
