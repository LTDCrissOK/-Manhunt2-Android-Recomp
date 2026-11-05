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

// Function: sub_0024B4D0
// Address: 0x24b4d0 - 0x24b5a8
void sub_0024B4D0_0x24b4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B4D0_0x24b4d0");
#endif

    switch (ctx->pc) {
        case 0x24b4d0u: goto label_24b4d0;
        case 0x24b4d4u: goto label_24b4d4;
        case 0x24b4d8u: goto label_24b4d8;
        case 0x24b4dcu: goto label_24b4dc;
        case 0x24b4e0u: goto label_24b4e0;
        case 0x24b4e4u: goto label_24b4e4;
        case 0x24b4e8u: goto label_24b4e8;
        case 0x24b4ecu: goto label_24b4ec;
        case 0x24b4f0u: goto label_24b4f0;
        case 0x24b4f4u: goto label_24b4f4;
        case 0x24b4f8u: goto label_24b4f8;
        case 0x24b4fcu: goto label_24b4fc;
        case 0x24b500u: goto label_24b500;
        case 0x24b504u: goto label_24b504;
        case 0x24b508u: goto label_24b508;
        case 0x24b50cu: goto label_24b50c;
        case 0x24b510u: goto label_24b510;
        case 0x24b514u: goto label_24b514;
        case 0x24b518u: goto label_24b518;
        case 0x24b51cu: goto label_24b51c;
        case 0x24b520u: goto label_24b520;
        case 0x24b524u: goto label_24b524;
        case 0x24b528u: goto label_24b528;
        case 0x24b52cu: goto label_24b52c;
        case 0x24b530u: goto label_24b530;
        case 0x24b534u: goto label_24b534;
        case 0x24b538u: goto label_24b538;
        case 0x24b53cu: goto label_24b53c;
        case 0x24b540u: goto label_24b540;
        case 0x24b544u: goto label_24b544;
        case 0x24b548u: goto label_24b548;
        case 0x24b54cu: goto label_24b54c;
        case 0x24b550u: goto label_24b550;
        case 0x24b554u: goto label_24b554;
        case 0x24b558u: goto label_24b558;
        case 0x24b55cu: goto label_24b55c;
        case 0x24b560u: goto label_24b560;
        case 0x24b564u: goto label_24b564;
        case 0x24b568u: goto label_24b568;
        case 0x24b56cu: goto label_24b56c;
        case 0x24b570u: goto label_24b570;
        case 0x24b574u: goto label_24b574;
        case 0x24b578u: goto label_24b578;
        case 0x24b57cu: goto label_24b57c;
        case 0x24b580u: goto label_24b580;
        case 0x24b584u: goto label_24b584;
        case 0x24b588u: goto label_24b588;
        case 0x24b58cu: goto label_24b58c;
        case 0x24b590u: goto label_24b590;
        case 0x24b594u: goto label_24b594;
        case 0x24b598u: goto label_24b598;
        case 0x24b59cu: goto label_24b59c;
        case 0x24b5a0u: goto label_24b5a0;
        case 0x24b5a4u: goto label_24b5a4;
        default: break;
    }

    ctx->pc = 0x24b4d0u;

label_24b4d0:
    // 0x24b4d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24b4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_24b4d4:
    // 0x24b4d4: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x24b4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_24b4d8:
    // 0x24b4d8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x24b4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_24b4dc:
    // 0x24b4dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24b4dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24b4e0:
    // 0x24b4e0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x24b4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_24b4e4:
    // 0x24b4e4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x24b4e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24b4e8:
    // 0x24b4e8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x24b4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_24b4ec:
    // 0x24b4ec: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x24b4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_24b4f0:
    // 0x24b4f0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x24b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_24b4f4:
    // 0x24b4f4: 0x40f809  jalr        $v0
label_24b4f8:
    if (ctx->pc == 0x24B4F8u) {
        ctx->pc = 0x24B4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B4F4u;
        // 0x24b4f8: 0x8e300020  lw          $s0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B4FCu;
        goto label_24b4fc;
    }
    ctx->pc = 0x24B4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24B4FCu);
        ctx->pc = 0x24B4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B4F4u;
        // 0x24b4f8: 0x8e300020  lw          $s0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B4F4u, 0x24B4FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24B4FCu;
label_24b4fc:
    // 0x24b4fc: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x24b4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24b500:
    // 0x24b500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24b500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24b504:
    // 0x24b504: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x24b504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24b508:
    // 0x24b508: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24b508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24b50c:
    // 0x24b50c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x24b50cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_24b510:
    // 0x24b510: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x24b510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_24b514:
    // 0x24b514: 0xc60c0068  lwc1        $f12, 0x68($s0)
    ctx->pc = 0x24b514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24b518:
    // 0x24b518: 0xc0b8236  jal         func_2E08D8
label_24b51c:
    if (ctx->pc == 0x24B51Cu) {
        ctx->pc = 0x24B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B518u;
        // 0x24b51c: 0xc60d0070  lwc1        $f13, 0x70($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B520u;
        goto label_24b520;
    }
    ctx->pc = 0x24B518u;
    SET_GPR_U32(ctx, 31, 0x24B520u);
    ctx->pc = 0x24B51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B518u;
    // 0x24b51c: 0xc60d0070  lwc1        $f13, 0x70($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E08D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E08D8u, 0x24B518u, 0x24B520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B520u;
label_24b520:
    // 0x24b520: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x24b520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24b524:
    // 0x24b524: 0x26230030  addiu       $v1, $s1, 0x30
    ctx->pc = 0x24b524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_24b528:
    // 0x24b528: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x24b528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_24b52c:
    // 0x24b52c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24b52cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24b530:
    // 0x24b530: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24b530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_24b534:
    // 0x24b534: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x24b534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_24b538:
    // 0x24b538: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24b538u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_24b53c:
    // 0x24b53c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x24b53cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_24b540:
    // 0x24b540: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x24b540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_24b544:
    // 0x24b544: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x24b544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_24b548:
    // 0x24b548: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x24b548u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_24b54c:
    // 0x24b54c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x24b54cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_24b550:
    // 0x24b550: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24b550u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_24b554:
    // 0x24b554: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x24b554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_24b558:
    // 0x24b558: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x24b558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24b55c:
    // 0x24b55c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24b55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24b560:
    // 0x24b560: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x24b560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24b564:
    // 0x24b564: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x24b564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_24b568:
    // 0x24b568: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x24b568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24b56c:
    // 0x24b56c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x24b56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24b570:
    // 0x24b570: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x24b570u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_24b574:
    // 0x24b574: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x24b574u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_24b578:
    // 0x24b578: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x24b578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_24b57c:
    // 0x24b57c: 0xc0b7264  jal         func_2DC990
label_24b580:
    if (ctx->pc == 0x24B580u) {
        ctx->pc = 0x24B580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B57Cu;
        // 0x24b580: 0xe7a1001c  swc1        $f1, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B584u;
        goto label_24b584;
    }
    ctx->pc = 0x24B57Cu;
    SET_GPR_U32(ctx, 31, 0x24B584u);
    ctx->pc = 0x24B580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B57Cu;
    // 0x24b580: 0xe7a1001c  swc1        $f1, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x24B57Cu, 0x24B584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B584u;
label_24b584:
    // 0x24b584: 0xc0b814e  jal         func_2E0538
label_24b588:
    if (ctx->pc == 0x24B588u) {
        ctx->pc = 0x24B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B584u;
        // 0x24b588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B58Cu;
        goto label_24b58c;
    }
    ctx->pc = 0x24B584u;
    SET_GPR_U32(ctx, 31, 0x24B58Cu);
    ctx->pc = 0x24B588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B584u;
    // 0x24b588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0538u, 0x24B584u, 0x24B58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B58Cu;
label_24b58c:
    // 0x24b58c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x24b58cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_24b590:
    // 0x24b590: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x24b590u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_24b594:
    // 0x24b594: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x24b594u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_24b598:
    // 0x24b598: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x24b598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_24b59c:
    // 0x24b59c: 0x3e00008  jr          $ra
label_24b5a0:
    if (ctx->pc == 0x24B5A0u) {
        ctx->pc = 0x24B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B59Cu;
        // 0x24b5a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B5A4u;
        goto label_24b5a4;
    }
    ctx->pc = 0x24B59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B59Cu;
        // 0x24b5a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B5A4u;
label_24b5a4:
    // 0x24b5a4: 0x0  nop
    ctx->pc = 0x24b5a4u;
    // NOP
    ctx->pc = 0x24b5a8u;
}
