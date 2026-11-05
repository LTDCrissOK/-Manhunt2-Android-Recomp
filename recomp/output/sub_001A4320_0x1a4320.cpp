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

// Function: sub_001A4320
// Address: 0x1a4320 - 0x1a4498
void sub_001A4320_0x1a4320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4320_0x1a4320");
#endif

    switch (ctx->pc) {
        case 0x1a4320u: goto label_1a4320;
        case 0x1a4324u: goto label_1a4324;
        case 0x1a4328u: goto label_1a4328;
        case 0x1a432cu: goto label_1a432c;
        case 0x1a4330u: goto label_1a4330;
        case 0x1a4334u: goto label_1a4334;
        case 0x1a4338u: goto label_1a4338;
        case 0x1a433cu: goto label_1a433c;
        case 0x1a4340u: goto label_1a4340;
        case 0x1a4344u: goto label_1a4344;
        case 0x1a4348u: goto label_1a4348;
        case 0x1a434cu: goto label_1a434c;
        case 0x1a4350u: goto label_1a4350;
        case 0x1a4354u: goto label_1a4354;
        case 0x1a4358u: goto label_1a4358;
        case 0x1a435cu: goto label_1a435c;
        case 0x1a4360u: goto label_1a4360;
        case 0x1a4364u: goto label_1a4364;
        case 0x1a4368u: goto label_1a4368;
        case 0x1a436cu: goto label_1a436c;
        case 0x1a4370u: goto label_1a4370;
        case 0x1a4374u: goto label_1a4374;
        case 0x1a4378u: goto label_1a4378;
        case 0x1a437cu: goto label_1a437c;
        case 0x1a4380u: goto label_1a4380;
        case 0x1a4384u: goto label_1a4384;
        case 0x1a4388u: goto label_1a4388;
        case 0x1a438cu: goto label_1a438c;
        case 0x1a4390u: goto label_1a4390;
        case 0x1a4394u: goto label_1a4394;
        case 0x1a4398u: goto label_1a4398;
        case 0x1a439cu: goto label_1a439c;
        case 0x1a43a0u: goto label_1a43a0;
        case 0x1a43a4u: goto label_1a43a4;
        case 0x1a43a8u: goto label_1a43a8;
        case 0x1a43acu: goto label_1a43ac;
        case 0x1a43b0u: goto label_1a43b0;
        case 0x1a43b4u: goto label_1a43b4;
        case 0x1a43b8u: goto label_1a43b8;
        case 0x1a43bcu: goto label_1a43bc;
        case 0x1a43c0u: goto label_1a43c0;
        case 0x1a43c4u: goto label_1a43c4;
        case 0x1a43c8u: goto label_1a43c8;
        case 0x1a43ccu: goto label_1a43cc;
        case 0x1a43d0u: goto label_1a43d0;
        case 0x1a43d4u: goto label_1a43d4;
        case 0x1a43d8u: goto label_1a43d8;
        case 0x1a43dcu: goto label_1a43dc;
        case 0x1a43e0u: goto label_1a43e0;
        case 0x1a43e4u: goto label_1a43e4;
        case 0x1a43e8u: goto label_1a43e8;
        case 0x1a43ecu: goto label_1a43ec;
        case 0x1a43f0u: goto label_1a43f0;
        case 0x1a43f4u: goto label_1a43f4;
        case 0x1a43f8u: goto label_1a43f8;
        case 0x1a43fcu: goto label_1a43fc;
        case 0x1a4400u: goto label_1a4400;
        case 0x1a4404u: goto label_1a4404;
        case 0x1a4408u: goto label_1a4408;
        case 0x1a440cu: goto label_1a440c;
        case 0x1a4410u: goto label_1a4410;
        case 0x1a4414u: goto label_1a4414;
        case 0x1a4418u: goto label_1a4418;
        case 0x1a441cu: goto label_1a441c;
        case 0x1a4420u: goto label_1a4420;
        case 0x1a4424u: goto label_1a4424;
        case 0x1a4428u: goto label_1a4428;
        case 0x1a442cu: goto label_1a442c;
        case 0x1a4430u: goto label_1a4430;
        case 0x1a4434u: goto label_1a4434;
        case 0x1a4438u: goto label_1a4438;
        case 0x1a443cu: goto label_1a443c;
        case 0x1a4440u: goto label_1a4440;
        case 0x1a4444u: goto label_1a4444;
        case 0x1a4448u: goto label_1a4448;
        case 0x1a444cu: goto label_1a444c;
        case 0x1a4450u: goto label_1a4450;
        case 0x1a4454u: goto label_1a4454;
        case 0x1a4458u: goto label_1a4458;
        case 0x1a445cu: goto label_1a445c;
        case 0x1a4460u: goto label_1a4460;
        case 0x1a4464u: goto label_1a4464;
        case 0x1a4468u: goto label_1a4468;
        case 0x1a446cu: goto label_1a446c;
        case 0x1a4470u: goto label_1a4470;
        case 0x1a4474u: goto label_1a4474;
        case 0x1a4478u: goto label_1a4478;
        case 0x1a447cu: goto label_1a447c;
        case 0x1a4480u: goto label_1a4480;
        case 0x1a4484u: goto label_1a4484;
        case 0x1a4488u: goto label_1a4488;
        case 0x1a448cu: goto label_1a448c;
        case 0x1a4490u: goto label_1a4490;
        case 0x1a4494u: goto label_1a4494;
        default: break;
    }

    ctx->pc = 0x1a4320u;

label_1a4320:
    // 0x1a4320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a4320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a4324:
    // 0x1a4324: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a4328:
    // 0x1a4328: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a4328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a432c:
    // 0x1a432c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a432cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4330:
    // 0x1a4330: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a4330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a4334:
    // 0x1a4334: 0x2411000e  addiu       $s1, $zero, 0xE
    ctx->pc = 0x1a4334u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1a4338:
    // 0x1a4338: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1a4338u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1a433c:
    // 0x1a433c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a433cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a4340:
    // 0x1a4340: 0x50510050  beql        $v0, $s1, . + 4 + (0x50 << 2)
label_1a4344:
    if (ctx->pc == 0x1A4344u) {
        ctx->pc = 0x1A4344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4340u;
        // 0x1a4344: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4348u;
        goto label_1a4348;
    }
    ctx->pc = 0x1A4340u;
    {
        const bool branch_taken_0x1a4340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1a4340) {
            ctx->pc = 0x1A4344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4340u;
            // 0x1a4344: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4484u;
            goto label_1a4484;
        }
    }
    ctx->pc = 0x1A4348u;
label_1a4348:
    // 0x1a4348: 0xc0691d6  jal         func_1A4758
label_1a434c:
    if (ctx->pc == 0x1A434Cu) {
        ctx->pc = 0x1A4350u;
        goto label_1a4350;
    }
    ctx->pc = 0x1A4348u;
    SET_GPR_U32(ctx, 31, 0x1A4350u);
    ctx->pc = 0x1A4758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4758u, 0x1A4348u, 0x1A4350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4350u;
label_1a4350:
    // 0x1a4350: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a4350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a4354:
    // 0x1a4354: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1a4358:
    if (ctx->pc == 0x1A4358u) {
        ctx->pc = 0x1A4358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4354u;
        // 0x1a4358: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A435Cu;
        goto label_1a435c;
    }
    ctx->pc = 0x1A4354u;
    {
        const bool branch_taken_0x1a4354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4354u;
        // 0x1a4358: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4354) {
            ctx->pc = 0x1A436Cu;
            goto label_1a436c;
        }
    }
    ctx->pc = 0x1A435Cu;
label_1a435c:
    // 0x1a435c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a435cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a4360:
    // 0x1a4360: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1a4360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1a4364:
    // 0x1a4364: 0x40f809  jalr        $v0
label_1a4368:
    if (ctx->pc == 0x1A4368u) {
        ctx->pc = 0x1A436Cu;
        goto label_1a436c;
    }
    ctx->pc = 0x1A4364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A436Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4364u, 0x1A436Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A436Cu;
label_1a436c:
    // 0x1a436c: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x1a436cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_1a4370:
    // 0x1a4370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4374:
    // 0x1a4374: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1a4374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_1a4378:
    // 0x1a4378: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a4378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a437c:
    // 0x1a437c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1a437cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4380:
    // 0x1a4380: 0xc061a26  jal         func_186898
label_1a4384:
    if (ctx->pc == 0x1A4384u) {
        ctx->pc = 0x1A4384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4380u;
        // 0x1a4384: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4388u;
        goto label_1a4388;
    }
    ctx->pc = 0x1A4380u;
    SET_GPR_U32(ctx, 31, 0x1A4388u);
    ctx->pc = 0x1A4384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4380u;
    // 0x1a4384: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1A4380u, 0x1A4388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4388u;
label_1a4388:
    // 0x1a4388: 0xc061a12  jal         func_186848
label_1a438c:
    if (ctx->pc == 0x1A438Cu) {
        ctx->pc = 0x1A438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4388u;
        // 0x1a438c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4390u;
        goto label_1a4390;
    }
    ctx->pc = 0x1A4388u;
    SET_GPR_U32(ctx, 31, 0x1A4390u);
    ctx->pc = 0x1A438Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4388u;
    // 0x1a438c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1A4388u, 0x1A4390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4390u;
label_1a4390:
    // 0x1a4390: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x1a4390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_1a4394:
    // 0x1a4394: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4398:
    // 0x1a4398: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1a4398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1a439c:
    // 0x1a439c: 0x40f809  jalr        $v0
label_1a43a0:
    if (ctx->pc == 0x1A43A0u) {
        ctx->pc = 0x1A43A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A439Cu;
        // 0x1a43a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A43A4u;
        goto label_1a43a4;
    }
    ctx->pc = 0x1A439Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A43A4u);
        ctx->pc = 0x1A43A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A439Cu;
        // 0x1a43a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A439Cu, 0x1A43A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A43A4u;
label_1a43a4:
    // 0x1a43a4: 0xc061a16  jal         func_186858
label_1a43a8:
    if (ctx->pc == 0x1A43A8u) {
        ctx->pc = 0x1A43A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43A4u;
        // 0x1a43a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A43ACu;
        goto label_1a43ac;
    }
    ctx->pc = 0x1A43A4u;
    SET_GPR_U32(ctx, 31, 0x1A43ACu);
    ctx->pc = 0x1A43A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A43A4u;
    // 0x1a43a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A43A4u, 0x1A43ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A43ACu;
label_1a43ac:
    // 0x1a43ac: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x1a43acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a43b0:
    // 0x1a43b0: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1a43b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a43b4:
    // 0x1a43b4: 0x0  nop
    ctx->pc = 0x1a43b4u;
    // NOP
label_1a43b8:
    // 0x1a43b8: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_1a43bc:
    if (ctx->pc == 0x1A43BCu) {
        ctx->pc = 0x1A43BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43B8u;
        // 0x1a43bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A43C0u;
        goto label_1a43c0;
    }
    ctx->pc = 0x1A43B8u;
    {
        const bool branch_taken_0x1a43b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a43b8) {
            ctx->pc = 0x1A43BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A43B8u;
            // 0x1a43bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A43C0u;
            goto label_1a43c0;
        }
    }
    ctx->pc = 0x1A43C0u;
label_1a43c0:
    // 0x1a43c0: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x1a43c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_1a43c4:
    // 0x1a43c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a43c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a43c8:
    // 0x1a43c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a43c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a43cc:
    // 0x1a43cc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a43ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a43d0:
    // 0x1a43d0: 0x8c670020  lw          $a3, 0x20($v1)
    ctx->pc = 0x1a43d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1a43d4:
    // 0x1a43d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a43d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a43d8:
    // 0x1a43d8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1a43d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_1a43dc:
    // 0x1a43dc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a43dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a43e0:
    // 0x1a43e0: 0xe0f809  jalr        $a3
label_1a43e4:
    if (ctx->pc == 0x1A43E4u) {
        ctx->pc = 0x1A43E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43E0u;
        // 0x1a43e4: 0x8c451004  lw          $a1, 0x1004($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A43E8u;
        goto label_1a43e8;
    }
    ctx->pc = 0x1A43E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1A43E8u);
        ctx->pc = 0x1A43E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43E0u;
        // 0x1a43e4: 0x8c451004  lw          $a1, 0x1004($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A43E0u, 0x1A43E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A43E8u;
label_1a43e8:
    // 0x1a43e8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_1a43ec:
    if (ctx->pc == 0x1A43ECu) {
        ctx->pc = 0x1A43F0u;
        goto label_1a43f0;
    }
    ctx->pc = 0x1A43E8u;
    {
        const bool branch_taken_0x1a43e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a43e8) {
            ctx->pc = 0x1A4400u;
            goto label_1a4400;
        }
    }
    ctx->pc = 0x1A43F0u;
label_1a43f0:
    // 0x1a43f0: 0xc061a16  jal         func_186858
label_1a43f4:
    if (ctx->pc == 0x1A43F4u) {
        ctx->pc = 0x1A43F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43F0u;
        // 0x1a43f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A43F8u;
        goto label_1a43f8;
    }
    ctx->pc = 0x1A43F0u;
    SET_GPR_U32(ctx, 31, 0x1A43F8u);
    ctx->pc = 0x1A43F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A43F0u;
    // 0x1a43f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A43F0u, 0x1A43F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A43F8u;
label_1a43f8:
    // 0x1a43f8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a43fc:
    if (ctx->pc == 0x1A43FCu) {
        ctx->pc = 0x1A43FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43F8u;
        // 0x1a43fc: 0xe4540024  swc1        $f20, 0x24($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4400u;
        goto label_1a4400;
    }
    ctx->pc = 0x1A43F8u;
    {
        const bool branch_taken_0x1a43f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A43FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43F8u;
        // 0x1a43fc: 0xe4540024  swc1        $f20, 0x24($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a43f8) {
            ctx->pc = 0x1A4418u;
            goto label_1a4418;
        }
    }
    ctx->pc = 0x1A4400u;
label_1a4400:
    // 0x1a4400: 0xc061a16  jal         func_186858
label_1a4404:
    if (ctx->pc == 0x1A4404u) {
        ctx->pc = 0x1A4404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4400u;
        // 0x1a4404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4408u;
        goto label_1a4408;
    }
    ctx->pc = 0x1A4400u;
    SET_GPR_U32(ctx, 31, 0x1A4408u);
    ctx->pc = 0x1A4404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4400u;
    // 0x1a4404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A4400u, 0x1A4408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4408u;
label_1a4408:
    // 0x1a4408: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a4408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a440c:
    // 0x1a440c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a440cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4410:
    // 0x1a4410: 0x0  nop
    ctx->pc = 0x1a4410u;
    // NOP
label_1a4414:
    // 0x1a4414: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1a4414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_1a4418:
    // 0x1a4418: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a4418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1a441c:
    // 0x1a441c: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1a441cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_1a4420:
    // 0x1a4420: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a4424:
    if (ctx->pc == 0x1A4424u) {
        ctx->pc = 0x1A4424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4420u;
        // 0x1a4424: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4428u;
        goto label_1a4428;
    }
    ctx->pc = 0x1A4420u;
    {
        const bool branch_taken_0x1a4420 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A4424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4420u;
        // 0x1a4424: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4420) {
            ctx->pc = 0x1A443Cu;
            goto label_1a443c;
        }
    }
    ctx->pc = 0x1A4428u;
label_1a4428:
    // 0x1a4428: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a442c:
    // 0x1a442c: 0x0  nop
    ctx->pc = 0x1a442cu;
    // NOP
label_1a4430:
    // 0x1a4430: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a4430u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a4434:
    // 0x1a4434: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a4438:
    if (ctx->pc == 0x1A4438u) {
        ctx->pc = 0x1A443Cu;
        goto label_1a443c;
    }
    ctx->pc = 0x1A4434u;
    {
        const bool branch_taken_0x1a4434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4434) {
            ctx->pc = 0x1A4454u;
            goto label_1a4454;
        }
    }
    ctx->pc = 0x1A443Cu;
label_1a443c:
    // 0x1a443c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a443cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a4440:
    // 0x1a4440: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a4440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a4444:
    // 0x1a4444: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4448:
    // 0x1a4448: 0x0  nop
    ctx->pc = 0x1a4448u;
    // NOP
label_1a444c:
    // 0x1a444c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a444cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a4450:
    // 0x1a4450: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1a4450u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1a4454:
    // 0x1a4454: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a4454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1a4458:
    // 0x1a4458: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a4458u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1a445c:
    // 0x1a445c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a445cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a4460:
    // 0x1a4460: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1a4460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_1a4464:
    // 0x1a4464: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a4464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a4468:
    // 0x1a4468: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x1a4468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
label_1a446c:
    // 0x1a446c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a446cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a4470:
    // 0x1a4470: 0xc0b12b0  jal         func_2C4AC0
label_1a4474:
    if (ctx->pc == 0x1A4474u) {
        ctx->pc = 0x1A4474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4470u;
        // 0x1a4474: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4478u;
        goto label_1a4478;
    }
    ctx->pc = 0x1A4470u;
    SET_GPR_U32(ctx, 31, 0x1A4478u);
    ctx->pc = 0x1A4474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4470u;
    // 0x1a4474: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1A4470u, 0x1A4478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4478u;
label_1a4478:
    // 0x1a4478: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1a4478u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1a447c:
    // 0x1a447c: 0xe6140038  swc1        $f20, 0x38($s0)
    ctx->pc = 0x1a447cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1a4480:
    // 0x1a4480: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4484:
    // 0x1a4484: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a4484u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a4488:
    // 0x1a4488: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a448c:
    // 0x1a448c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1a448cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a4490:
    // 0x1a4490: 0x3e00008  jr          $ra
label_1a4494:
    if (ctx->pc == 0x1A4494u) {
        ctx->pc = 0x1A4494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4490u;
        // 0x1a4494: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4498u;
        goto label_fallthrough_0x1a4490;
    }
    ctx->pc = 0x1A4490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4490u;
        // 0x1a4494: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a4490:
    ctx->pc = 0x1A4498u;
}
