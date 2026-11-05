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

// Function: sub_002493C8
// Address: 0x2493c8 - 0x249508
void sub_002493C8_0x2493c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002493C8_0x2493c8");
#endif

    switch (ctx->pc) {
        case 0x249404u: goto label_249404;
        case 0x249410u: goto label_249410;
        case 0x249420u: goto label_249420;
        default: break;
    }

    ctx->pc = 0x2493c8u;

    // 0x2493c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2493c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2493cc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2493ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2493d0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2493d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2493d4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2493d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2493d8: 0x3c13004b  lui         $s3, 0x4B
    ctx->pc = 0x2493d8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)75 << 16));
    // 0x2493dc: 0x8c51bd50  lw          $s1, -0x42B0($v0)
    ctx->pc = 0x2493dcu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x2493e0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2493e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2493e4: 0x8e623ce4  lw          $v0, 0x3CE4($s3)
    ctx->pc = 0x2493e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4B3CE4u));
    // 0x2493e8: 0x3c12004b  lui         $s2, 0x4B
    ctx->pc = 0x2493e8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)75 << 16));
    // 0x2493ec: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2493ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2493f0: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2493F0u;
    {
        const bool branch_taken_0x2493f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2493F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2493F0u;
        // 0x2493f4: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2493f0) {
            ctx->pc = 0x24946Cu;
            goto label_24946c;
        }
    }
    ctx->pc = 0x2493F8u;
    // 0x2493f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2493f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2493fc: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x2493FCu;
    SET_GPR_U32(ctx, 31, 0x249404u);
    ctx->pc = 0x249400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2493FCu;
    // 0x249400: 0x240503e9  addiu       $a1, $zero, 0x3E9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x2493FCu, 0x249404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249404u;
label_249404:
    // 0x249404: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x249404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249408: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x249408u;
    SET_GPR_U32(ctx, 31, 0x249410u);
    ctx->pc = 0x24940Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249408u;
    // 0x24940c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x249408u, 0x249410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249410u;
label_249410:
    // 0x249410: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x249410u;
    {
        const bool branch_taken_0x249410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249410) {
            ctx->pc = 0x249414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249410u;
            // 0x249414: 0x8e230104  lw          $v1, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249424u;
            goto label_249424;
        }
    }
    ctx->pc = 0x249418u;
    // 0x249418: 0xc0c4900  jal         func_312400
    ctx->pc = 0x249418u;
    SET_GPR_U32(ctx, 31, 0x249420u);
    ctx->pc = 0x24941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249418u;
    // 0x24941c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x249418u, 0x249420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249420u;
label_249420:
    // 0x249420: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x249420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_249424:
    // 0x249424: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x249424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x249428: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x249428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24942c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x24942cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x249430: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x249430u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x249434: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x249434u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x249438: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x249438u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24943c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x24943cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x249440: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x249440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x249444: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249448: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x249448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24944c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x24944cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249450: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x249450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249454: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x249454u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x249458: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x249458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x24945c: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x24945cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x249460: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x249460u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x249464: 0xae623ce4  sw          $v0, 0x3CE4($s3)
    ctx->pc = 0x249464u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 15588), GPR_U32(ctx, 2));
    // 0x249468: 0xe6433ce0  swc1        $f3, 0x3CE0($s2)
    ctx->pc = 0x249468u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 15584), bits); }
label_24946c:
    // 0x24946c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x24946cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x249470: 0x24654dd0  addiu       $a1, $v1, 0x4DD0
    ctx->pc = 0x249470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 19920));
    // 0x249474: 0x90a203d0  lbu         $v0, 0x3D0($a1)
    ctx->pc = 0x249474u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5951A0u));
    // 0x249478: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x249478u;
    {
        const bool branch_taken_0x249478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249478u;
        // 0x24947c: 0xc6423ce0  lwc1        $f2, 0x3CE0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 15584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x249478) {
            ctx->pc = 0x2494D4u;
            goto label_2494d4;
        }
    }
    ctx->pc = 0x249480u;
    // 0x249480: 0x8e2310c8  lw          $v1, 0x10C8($s1)
    ctx->pc = 0x249480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4296)));
    // 0x249484: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249488: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x249488u;
    {
        const bool branch_taken_0x249488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249488u;
        // 0x24948c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249488) {
            ctx->pc = 0x2494D8u;
            goto label_2494d8;
        }
    }
    ctx->pc = 0x249490u;
    // 0x249490: 0x92240144  lbu         $a0, 0x144($s1)
    ctx->pc = 0x249490u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 324)));
    // 0x249494: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x249494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x249498: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x249498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24949c: 0x28820064  slti        $v0, $a0, 0x64
    ctx->pc = 0x24949cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x2494a0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2494A0u;
    {
        const bool branch_taken_0x2494a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2494a0) {
            ctx->pc = 0x2494A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2494A0u;
            // 0x2494a4: 0xc4a003dc  lwc1        $f0, 0x3DC($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2494CCu;
            goto label_2494cc;
        }
    }
    ctx->pc = 0x2494A8u;
    // 0x2494a8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2494a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2494ac: 0x0  nop
    ctx->pc = 0x2494acu;
    // NOP
    // 0x2494b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2494b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2494b4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2494b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2494b8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2494b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2494bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2494bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2494c0: 0x0  nop
    ctx->pc = 0x2494c0u;
    // NOP
    // 0x2494c4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2494c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2494c8: 0xc4a003dc  lwc1        $f0, 0x3DC($a1)
    ctx->pc = 0x2494c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2494cc:
    // 0x2494cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2494ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2494d0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2494d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2494d4:
    // 0x2494d4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2494d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2494d8:
    // 0x2494d8: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x2494d8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x2494dc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2494dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2494e0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2494e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2494e4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2494e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2494e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2494e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2494ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2494ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2494F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2494ECu;
        // 0x2494f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2494ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2494F4u;
    // 0x2494f4: 0x0  nop
    ctx->pc = 0x2494f4u;
    // NOP
    // 0x2494f8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2494f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2494fc: 0x0  nop
    ctx->pc = 0x2494fcu;
    // NOP
    // 0x249500: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x249500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x249504: 0x0  nop
    ctx->pc = 0x249504u;
    // NOP
    ctx->pc = 0x249508u;
}
