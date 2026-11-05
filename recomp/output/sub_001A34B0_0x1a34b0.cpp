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

// Function: sub_001A34B0
// Address: 0x1a34b0 - 0x1a35f0
void sub_001A34B0_0x1a34b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A34B0_0x1a34b0");
#endif

    switch (ctx->pc) {
        case 0x1a34b0u: goto label_1a34b0;
        case 0x1a34b4u: goto label_1a34b4;
        case 0x1a34b8u: goto label_1a34b8;
        case 0x1a34bcu: goto label_1a34bc;
        case 0x1a34c0u: goto label_1a34c0;
        case 0x1a34c4u: goto label_1a34c4;
        case 0x1a34c8u: goto label_1a34c8;
        case 0x1a34ccu: goto label_1a34cc;
        case 0x1a34d0u: goto label_1a34d0;
        case 0x1a34d4u: goto label_1a34d4;
        case 0x1a34d8u: goto label_1a34d8;
        case 0x1a34dcu: goto label_1a34dc;
        case 0x1a34e0u: goto label_1a34e0;
        case 0x1a34e4u: goto label_1a34e4;
        case 0x1a34e8u: goto label_1a34e8;
        case 0x1a34ecu: goto label_1a34ec;
        case 0x1a34f0u: goto label_1a34f0;
        case 0x1a34f4u: goto label_1a34f4;
        case 0x1a34f8u: goto label_1a34f8;
        case 0x1a34fcu: goto label_1a34fc;
        case 0x1a3500u: goto label_1a3500;
        case 0x1a3504u: goto label_1a3504;
        case 0x1a3508u: goto label_1a3508;
        case 0x1a350cu: goto label_1a350c;
        case 0x1a3510u: goto label_1a3510;
        case 0x1a3514u: goto label_1a3514;
        case 0x1a3518u: goto label_1a3518;
        case 0x1a351cu: goto label_1a351c;
        case 0x1a3520u: goto label_1a3520;
        case 0x1a3524u: goto label_1a3524;
        case 0x1a3528u: goto label_1a3528;
        case 0x1a352cu: goto label_1a352c;
        case 0x1a3530u: goto label_1a3530;
        case 0x1a3534u: goto label_1a3534;
        case 0x1a3538u: goto label_1a3538;
        case 0x1a353cu: goto label_1a353c;
        case 0x1a3540u: goto label_1a3540;
        case 0x1a3544u: goto label_1a3544;
        case 0x1a3548u: goto label_1a3548;
        case 0x1a354cu: goto label_1a354c;
        case 0x1a3550u: goto label_1a3550;
        case 0x1a3554u: goto label_1a3554;
        case 0x1a3558u: goto label_1a3558;
        case 0x1a355cu: goto label_1a355c;
        case 0x1a3560u: goto label_1a3560;
        case 0x1a3564u: goto label_1a3564;
        case 0x1a3568u: goto label_1a3568;
        case 0x1a356cu: goto label_1a356c;
        case 0x1a3570u: goto label_1a3570;
        case 0x1a3574u: goto label_1a3574;
        case 0x1a3578u: goto label_1a3578;
        case 0x1a357cu: goto label_1a357c;
        case 0x1a3580u: goto label_1a3580;
        case 0x1a3584u: goto label_1a3584;
        case 0x1a3588u: goto label_1a3588;
        case 0x1a358cu: goto label_1a358c;
        case 0x1a3590u: goto label_1a3590;
        case 0x1a3594u: goto label_1a3594;
        case 0x1a3598u: goto label_1a3598;
        case 0x1a359cu: goto label_1a359c;
        case 0x1a35a0u: goto label_1a35a0;
        case 0x1a35a4u: goto label_1a35a4;
        case 0x1a35a8u: goto label_1a35a8;
        case 0x1a35acu: goto label_1a35ac;
        case 0x1a35b0u: goto label_1a35b0;
        case 0x1a35b4u: goto label_1a35b4;
        case 0x1a35b8u: goto label_1a35b8;
        case 0x1a35bcu: goto label_1a35bc;
        case 0x1a35c0u: goto label_1a35c0;
        case 0x1a35c4u: goto label_1a35c4;
        case 0x1a35c8u: goto label_1a35c8;
        case 0x1a35ccu: goto label_1a35cc;
        case 0x1a35d0u: goto label_1a35d0;
        case 0x1a35d4u: goto label_1a35d4;
        case 0x1a35d8u: goto label_1a35d8;
        case 0x1a35dcu: goto label_1a35dc;
        case 0x1a35e0u: goto label_1a35e0;
        case 0x1a35e4u: goto label_1a35e4;
        case 0x1a35e8u: goto label_1a35e8;
        case 0x1a35ecu: goto label_1a35ec;
        default: break;
    }

    ctx->pc = 0x1a34b0u;

label_1a34b0:
    // 0x1a34b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a34b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a34b4:
    // 0x1a34b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a34b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a34b8:
    // 0x1a34b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a34b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a34bc:
    // 0x1a34bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a34bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a34c0:
    // 0x1a34c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a34c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a34c4:
    // 0x1a34c4: 0x2411000d  addiu       $s1, $zero, 0xD
    ctx->pc = 0x1a34c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1a34c8:
    // 0x1a34c8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1a34c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1a34cc:
    // 0x1a34cc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a34ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a34d0:
    // 0x1a34d0: 0x50510041  beql        $v0, $s1, . + 4 + (0x41 << 2)
label_1a34d4:
    if (ctx->pc == 0x1A34D4u) {
        ctx->pc = 0x1A34D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34D0u;
        // 0x1a34d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A34D8u;
        goto label_1a34d8;
    }
    ctx->pc = 0x1A34D0u;
    {
        const bool branch_taken_0x1a34d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1a34d0) {
            ctx->pc = 0x1A34D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A34D0u;
            // 0x1a34d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A35D8u;
            goto label_1a35d8;
        }
    }
    ctx->pc = 0x1A34D8u;
label_1a34d8:
    // 0x1a34d8: 0xc0691d6  jal         func_1A4758
label_1a34dc:
    if (ctx->pc == 0x1A34DCu) {
        ctx->pc = 0x1A34E0u;
        goto label_1a34e0;
    }
    ctx->pc = 0x1A34D8u;
    SET_GPR_U32(ctx, 31, 0x1A34E0u);
    ctx->pc = 0x1A4758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4758u, 0x1A34D8u, 0x1A34E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A34E0u;
label_1a34e0:
    // 0x1a34e0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a34e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a34e4:
    // 0x1a34e4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1a34e8:
    if (ctx->pc == 0x1A34E8u) {
        ctx->pc = 0x1A34E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34E4u;
        // 0x1a34e8: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A34ECu;
        goto label_1a34ec;
    }
    ctx->pc = 0x1A34E4u;
    {
        const bool branch_taken_0x1a34e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A34E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34E4u;
        // 0x1a34e8: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a34e4) {
            ctx->pc = 0x1A34FCu;
            goto label_1a34fc;
        }
    }
    ctx->pc = 0x1A34ECu;
label_1a34ec:
    // 0x1a34ec: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a34ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a34f0:
    // 0x1a34f0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1a34f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1a34f4:
    // 0x1a34f4: 0x40f809  jalr        $v0
label_1a34f8:
    if (ctx->pc == 0x1A34F8u) {
        ctx->pc = 0x1A34FCu;
        goto label_1a34fc;
    }
    ctx->pc = 0x1A34F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A34FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A34F4u, 0x1A34FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A34FCu;
label_1a34fc:
    // 0x1a34fc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1a34fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1a3500:
    // 0x1a3500: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a3500u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a3504:
    // 0x1a3504: 0xc061a12  jal         func_186848
label_1a3508:
    if (ctx->pc == 0x1A3508u) {
        ctx->pc = 0x1A3508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3504u;
        // 0x1a3508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A350Cu;
        goto label_1a350c;
    }
    ctx->pc = 0x1A3504u;
    SET_GPR_U32(ctx, 31, 0x1A350Cu);
    ctx->pc = 0x1A3508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3504u;
    // 0x1a3508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1A3504u, 0x1A350Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A350Cu;
label_1a350c:
    // 0x1a350c: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x1a350cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_1a3510:
    // 0x1a3510: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a3510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a3514:
    // 0x1a3514: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1a3514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1a3518:
    // 0x1a3518: 0x40f809  jalr        $v0
label_1a351c:
    if (ctx->pc == 0x1A351Cu) {
        ctx->pc = 0x1A351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3518u;
        // 0x1a351c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3520u;
        goto label_1a3520;
    }
    ctx->pc = 0x1A3518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A3520u);
        ctx->pc = 0x1A351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3518u;
        // 0x1a351c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3518u, 0x1A3520u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3520u;
label_1a3520:
    // 0x1a3520: 0xc061a16  jal         func_186858
label_1a3524:
    if (ctx->pc == 0x1A3524u) {
        ctx->pc = 0x1A3524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3520u;
        // 0x1a3524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3528u;
        goto label_1a3528;
    }
    ctx->pc = 0x1A3520u;
    SET_GPR_U32(ctx, 31, 0x1A3528u);
    ctx->pc = 0x1A3524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3520u;
    // 0x1a3524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A3520u, 0x1A3528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3528u;
label_1a3528:
    // 0x1a3528: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1a3528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_1a352c:
    // 0x1a352c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a352cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a3530:
    // 0x1a3530: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a3530u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1a3534:
    // 0x1a3534: 0xc0b12b0  jal         func_2C4AC0
label_1a3538:
    if (ctx->pc == 0x1A3538u) {
        ctx->pc = 0x1A3538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3534u;
        // 0x1a3538: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A353Cu;
        goto label_1a353c;
    }
    ctx->pc = 0x1A3534u;
    SET_GPR_U32(ctx, 31, 0x1A353Cu);
    ctx->pc = 0x1A3538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3534u;
    // 0x1a3538: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1A3534u, 0x1A353Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A353Cu;
label_1a353c:
    // 0x1a353c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1a353cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_1a3540:
    // 0x1a3540: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a3540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a3544:
    // 0x1a3544: 0x0  nop
    ctx->pc = 0x1a3544u;
    // NOP
label_1a3548:
    // 0x1a3548: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a3548u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a354c:
    // 0x1a354c: 0x0  nop
    ctx->pc = 0x1a354cu;
    // NOP
label_1a3550:
    // 0x1a3550: 0x45030020  bc1tl       . + 4 + (0x20 << 2)
label_1a3554:
    if (ctx->pc == 0x1A3554u) {
        ctx->pc = 0x1A3554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3550u;
        // 0x1a3554: 0xe6140030  swc1        $f20, 0x30($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3558u;
        goto label_1a3558;
    }
    ctx->pc = 0x1A3550u;
    {
        const bool branch_taken_0x1a3550 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3550) {
            ctx->pc = 0x1A3554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3550u;
            // 0x1a3554: 0xe6140030  swc1        $f20, 0x30($s0) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A35D4u;
            goto label_1a35d4;
        }
    }
    ctx->pc = 0x1A3558u;
label_1a3558:
    // 0x1a3558: 0xc061a22  jal         func_186888
label_1a355c:
    if (ctx->pc == 0x1A355Cu) {
        ctx->pc = 0x1A355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3558u;
        // 0x1a355c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3560u;
        goto label_1a3560;
    }
    ctx->pc = 0x1A3558u;
    SET_GPR_U32(ctx, 31, 0x1A3560u);
    ctx->pc = 0x1A355Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3558u;
    // 0x1a355c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186888u, 0x1A3558u, 0x1A3560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3560u;
label_1a3560:
    // 0x1a3560: 0x8c430068  lw          $v1, 0x68($v0)
    ctx->pc = 0x1a3560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_1a3564:
    // 0x1a3564: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1a3564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1a3568:
    // 0x1a3568: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_1a356c:
    if (ctx->pc == 0x1A356Cu) {
        ctx->pc = 0x1A356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3568u;
        // 0x1a356c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3570u;
        goto label_1a3570;
    }
    ctx->pc = 0x1A3568u;
    {
        const bool branch_taken_0x1a3568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3568u;
        // 0x1a356c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3568) {
            ctx->pc = 0x1A35D0u;
            goto label_1a35d0;
        }
    }
    ctx->pc = 0x1A3570u;
label_1a3570:
    // 0x1a3570: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1a3570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_1a3574:
    // 0x1a3574: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a3578:
    if (ctx->pc == 0x1A3578u) {
        ctx->pc = 0x1A3578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3574u;
        // 0x1a3578: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A357Cu;
        goto label_1a357c;
    }
    ctx->pc = 0x1A3574u;
    {
        const bool branch_taken_0x1a3574 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A3578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3574u;
        // 0x1a3578: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3574) {
            ctx->pc = 0x1A3590u;
            goto label_1a3590;
        }
    }
    ctx->pc = 0x1A357Cu;
label_1a357c:
    // 0x1a357c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a357cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3580:
    // 0x1a3580: 0x0  nop
    ctx->pc = 0x1a3580u;
    // NOP
label_1a3584:
    // 0x1a3584: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3584u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a3588:
    // 0x1a3588: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a358c:
    if (ctx->pc == 0x1A358Cu) {
        ctx->pc = 0x1A3590u;
        goto label_1a3590;
    }
    ctx->pc = 0x1A3588u;
    {
        const bool branch_taken_0x1a3588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3588) {
            ctx->pc = 0x1A35A8u;
            goto label_1a35a8;
        }
    }
    ctx->pc = 0x1A3590u;
label_1a3590:
    // 0x1a3590: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a3590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a3594:
    // 0x1a3594: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a3594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a3598:
    // 0x1a3598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a359c:
    // 0x1a359c: 0x0  nop
    ctx->pc = 0x1a359cu;
    // NOP
label_1a35a0:
    // 0x1a35a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a35a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a35a4:
    // 0x1a35a4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1a35a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1a35a8:
    // 0x1a35a8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a35a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1a35ac:
    // 0x1a35ac: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a35acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1a35b0:
    // 0x1a35b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a35b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a35b4:
    // 0x1a35b4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1a35b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_1a35b8:
    // 0x1a35b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a35b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a35bc:
    // 0x1a35bc: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x1a35bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
label_1a35c0:
    // 0x1a35c0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a35c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a35c4:
    // 0x1a35c4: 0xc0b12b0  jal         func_2C4AC0
label_1a35c8:
    if (ctx->pc == 0x1A35C8u) {
        ctx->pc = 0x1A35C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35C4u;
        // 0x1a35c8: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A35CCu;
        goto label_1a35cc;
    }
    ctx->pc = 0x1A35C4u;
    SET_GPR_U32(ctx, 31, 0x1A35CCu);
    ctx->pc = 0x1A35C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A35C4u;
    // 0x1a35c8: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1A35C4u, 0x1A35CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A35CCu;
label_1a35cc:
    // 0x1a35cc: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1a35ccu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1a35d0:
    // 0x1a35d0: 0xe6140030  swc1        $f20, 0x30($s0)
    ctx->pc = 0x1a35d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1a35d4:
    // 0x1a35d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a35d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a35d8:
    // 0x1a35d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a35d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a35dc:
    // 0x1a35dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a35dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a35e0:
    // 0x1a35e0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1a35e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a35e4:
    // 0x1a35e4: 0x3e00008  jr          $ra
label_1a35e8:
    if (ctx->pc == 0x1A35E8u) {
        ctx->pc = 0x1A35E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35E4u;
        // 0x1a35e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A35ECu;
        goto label_1a35ec;
    }
    ctx->pc = 0x1A35E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A35E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35E4u;
        // 0x1a35e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A35E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A35ECu;
label_1a35ec:
    // 0x1a35ec: 0x0  nop
    ctx->pc = 0x1a35ecu;
    // NOP
    ctx->pc = 0x1a35f0u;
}
