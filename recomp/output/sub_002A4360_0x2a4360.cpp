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

// Function: sub_002A4360
// Address: 0x2a4360 - 0x2a4468
void sub_002A4360_0x2a4360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4360_0x2a4360");
#endif

    switch (ctx->pc) {
        case 0x2a4398u: goto label_2a4398;
        case 0x2a43b0u: goto label_2a43b0;
        case 0x2a43bcu: goto label_2a43bc;
        case 0x2a43c8u: goto label_2a43c8;
        case 0x2a43d0u: goto label_2a43d0;
        case 0x2a4400u: goto label_2a4400;
        default: break;
    }

    ctx->pc = 0x2a4360u;

    // 0x2a4360: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a4360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a4364: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a4364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a4368: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a4368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a436c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a436cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a4370: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a4370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a4374: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a4374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2a4378: 0x26320080  addiu       $s2, $s1, 0x80
    ctx->pc = 0x2a4378u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x2a437c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2a437cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2a4380: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x2a4380u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4384: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2a4384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2a4388: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x2a4388u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a438c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a438cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a4390: 0xc0a58d8  jal         func_296360
    ctx->pc = 0x2A4390u;
    SET_GPR_U32(ctx, 31, 0x2A4398u);
    ctx->pc = 0x2A4394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4390u;
    // 0x2a4394: 0x3c150047  lui         $s5, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)71 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296360u, 0x2A4390u, 0x2A4398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4398u;
label_2a4398:
    // 0x2a4398: 0x263000c8  addiu       $s0, $s1, 0xC8
    ctx->pc = 0x2a4398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
    // 0x2a439c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2a439cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2a43a0: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x2a43a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x2a43a4: 0x244236c0  addiu       $v0, $v0, 0x36C0
    ctx->pc = 0x2a43a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14016));
    // 0x2a43a8: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2A43A8u;
    SET_GPR_U32(ctx, 31, 0x2A43B0u);
    ctx->pc = 0x2A43ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A43A8u;
    // 0x2a43ac: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2A43A8u, 0x2A43B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A43B0u;
label_2a43b0:
    // 0x2a43b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a43b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a43b4: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2A43B4u;
    SET_GPR_U32(ctx, 31, 0x2A43BCu);
    ctx->pc = 0x2A43B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A43B4u;
    // 0x2a43b8: 0x26a5d628  addiu       $a1, $s5, -0x29D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2A43B4u, 0x2A43BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A43BCu;
label_2a43bc:
    // 0x2a43bc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2a43bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2a43c0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2A43C0u;
    SET_GPR_U32(ctx, 31, 0x2A43C8u);
    ctx->pc = 0x2A43C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A43C0u;
    // 0x2a43c4: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2A43C0u, 0x2A43C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A43C8u;
label_2a43c8:
    // 0x2a43c8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2A43C8u;
    SET_GPR_U32(ctx, 31, 0x2A43D0u);
    ctx->pc = 0x2A43CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A43C8u;
    // 0x2a43cc: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2A43C8u, 0x2A43D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A43D0u;
label_2a43d0:
    // 0x2a43d0: 0x26520050  addiu       $s2, $s2, 0x50
    ctx->pc = 0x2a43d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x2a43d4: 0xae00ffe8  sw          $zero, -0x18($s0)
    ctx->pc = 0x2a43d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967272), GPR_U32(ctx, 0));
    // 0x2a43d8: 0xae00ffec  sw          $zero, -0x14($s0)
    ctx->pc = 0x2a43d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967276), GPR_U32(ctx, 0));
    // 0x2a43dc: 0xae00fff0  sw          $zero, -0x10($s0)
    ctx->pc = 0x2a43dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967280), GPR_U32(ctx, 0));
    // 0x2a43e0: 0xae00fff4  sw          $zero, -0xC($s0)
    ctx->pc = 0x2a43e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967284), GPR_U32(ctx, 0));
    // 0x2a43e4: 0xae00fffc  sw          $zero, -0x4($s0)
    ctx->pc = 0x2a43e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967292), GPR_U32(ctx, 0));
    // 0x2a43e8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2a43e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2a43ec: 0x1674fff0  bne         $s3, $s4, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2A43ECu;
    {
        const bool branch_taken_0x2a43ec = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        ctx->pc = 0x2A43F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A43ECu;
        // 0x2a43f0: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a43ec) {
            ctx->pc = 0x2A43B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a43b0;
        }
    }
    ctx->pc = 0x2A43F4u;
    // 0x2a43f4: 0xa2200178  sb          $zero, 0x178($s1)
    ctx->pc = 0x2a43f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 376), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a43f8: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2A43F8u;
    SET_GPR_U32(ctx, 31, 0x2A4400u);
    ctx->pc = 0x2A43FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A43F8u;
    // 0x2a43fc: 0x2624017c  addiu       $a0, $s1, 0x17C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 380));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2A43F8u, 0x2A4400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4400u;
label_2a4400:
    // 0x2a4400: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a4400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4404: 0xae200184  sw          $zero, 0x184($s1)
    ctx->pc = 0x2a4404u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 0));
    // 0x2a4408: 0xa2200188  sb          $zero, 0x188($s1)
    ctx->pc = 0x2a4408u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 392), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a440c: 0xae20018c  sw          $zero, 0x18C($s1)
    ctx->pc = 0x2a440cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 396), GPR_U32(ctx, 0));
    // 0x2a4410: 0xae200190  sw          $zero, 0x190($s1)
    ctx->pc = 0x2a4410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 0));
    // 0x2a4414: 0xae200194  sw          $zero, 0x194($s1)
    ctx->pc = 0x2a4414u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 0));
    // 0x2a4418: 0xae200198  sw          $zero, 0x198($s1)
    ctx->pc = 0x2a4418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 408), GPR_U32(ctx, 0));
    // 0x2a441c: 0xa220019c  sb          $zero, 0x19C($s1)
    ctx->pc = 0x2a441cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 412), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a4420: 0xae2001a0  sw          $zero, 0x1A0($s1)
    ctx->pc = 0x2a4420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 0));
    // 0x2a4424: 0xae2001a4  sw          $zero, 0x1A4($s1)
    ctx->pc = 0x2a4424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 420), GPR_U32(ctx, 0));
    // 0x2a4428: 0xae2001a8  sw          $zero, 0x1A8($s1)
    ctx->pc = 0x2a4428u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 424), GPR_U32(ctx, 0));
    // 0x2a442c: 0xae2001ac  sw          $zero, 0x1AC($s1)
    ctx->pc = 0x2a442cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 0));
    // 0x2a4430: 0xae2001b0  sw          $zero, 0x1B0($s1)
    ctx->pc = 0x2a4430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 432), GPR_U32(ctx, 0));
    // 0x2a4434: 0xae2001b4  sw          $zero, 0x1B4($s1)
    ctx->pc = 0x2a4434u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 436), GPR_U32(ctx, 0));
    // 0x2a4438: 0xae2001b8  sw          $zero, 0x1B8($s1)
    ctx->pc = 0x2a4438u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 440), GPR_U32(ctx, 0));
    // 0x2a443c: 0xae2001bc  sw          $zero, 0x1BC($s1)
    ctx->pc = 0x2a443cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 444), GPR_U32(ctx, 0));
    // 0x2a4440: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a4440u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a4444: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a4444u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a4448: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a4448u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a444c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a444cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a4450: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2a4450u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a4454: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2a4454u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a4458: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a4458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a445c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A445Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A445Cu;
        // 0x2a4460: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A445Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4464u;
    // 0x2a4464: 0x0  nop
    ctx->pc = 0x2a4464u;
    // NOP
    ctx->pc = 0x2a4468u;
}
