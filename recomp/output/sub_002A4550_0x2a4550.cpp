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

// Function: sub_002A4550
// Address: 0x2a4550 - 0x2a4610
void sub_002A4550_0x2a4550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4550_0x2a4550");
#endif

    switch (ctx->pc) {
        case 0x2a4550u: goto label_2a4550;
        case 0x2a4554u: goto label_2a4554;
        case 0x2a4558u: goto label_2a4558;
        case 0x2a455cu: goto label_2a455c;
        case 0x2a4560u: goto label_2a4560;
        case 0x2a4564u: goto label_2a4564;
        case 0x2a4568u: goto label_2a4568;
        case 0x2a456cu: goto label_2a456c;
        case 0x2a4570u: goto label_2a4570;
        case 0x2a4574u: goto label_2a4574;
        case 0x2a4578u: goto label_2a4578;
        case 0x2a457cu: goto label_2a457c;
        case 0x2a4580u: goto label_2a4580;
        case 0x2a4584u: goto label_2a4584;
        case 0x2a4588u: goto label_2a4588;
        case 0x2a458cu: goto label_2a458c;
        case 0x2a4590u: goto label_2a4590;
        case 0x2a4594u: goto label_2a4594;
        case 0x2a4598u: goto label_2a4598;
        case 0x2a459cu: goto label_2a459c;
        case 0x2a45a0u: goto label_2a45a0;
        case 0x2a45a4u: goto label_2a45a4;
        case 0x2a45a8u: goto label_2a45a8;
        case 0x2a45acu: goto label_2a45ac;
        case 0x2a45b0u: goto label_2a45b0;
        case 0x2a45b4u: goto label_2a45b4;
        case 0x2a45b8u: goto label_2a45b8;
        case 0x2a45bcu: goto label_2a45bc;
        case 0x2a45c0u: goto label_2a45c0;
        case 0x2a45c4u: goto label_2a45c4;
        case 0x2a45c8u: goto label_2a45c8;
        case 0x2a45ccu: goto label_2a45cc;
        case 0x2a45d0u: goto label_2a45d0;
        case 0x2a45d4u: goto label_2a45d4;
        case 0x2a45d8u: goto label_2a45d8;
        case 0x2a45dcu: goto label_2a45dc;
        case 0x2a45e0u: goto label_2a45e0;
        case 0x2a45e4u: goto label_2a45e4;
        case 0x2a45e8u: goto label_2a45e8;
        case 0x2a45ecu: goto label_2a45ec;
        case 0x2a45f0u: goto label_2a45f0;
        case 0x2a45f4u: goto label_2a45f4;
        case 0x2a45f8u: goto label_2a45f8;
        case 0x2a45fcu: goto label_2a45fc;
        case 0x2a4600u: goto label_2a4600;
        case 0x2a4604u: goto label_2a4604;
        case 0x2a4608u: goto label_2a4608;
        case 0x2a460cu: goto label_2a460c;
        default: break;
    }

    ctx->pc = 0x2a4550u;

label_2a4550:
    // 0x2a4550: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a4550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a4554:
    // 0x2a4554: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a4554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2a4558:
    // 0x2a4558: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a4558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2a455c:
    // 0x2a455c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a455cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a4560:
    // 0x2a4560: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a4560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2a4564:
    // 0x2a4564: 0x26300120  addiu       $s0, $s1, 0x120
    ctx->pc = 0x2a4564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
label_2a4568:
    // 0x2a4568: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a4568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2a456c:
    // 0x2a456c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a456cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a4570:
    // 0x2a4570: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a4570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2a4574:
    // 0x2a4574: 0x3c13004c  lui         $s3, 0x4C
    ctx->pc = 0x2a4574u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)76 << 16));
label_2a4578:
    // 0x2a4578: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2a4578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a457c:
    // 0x2a457c: 0x2664f250  addiu       $a0, $s3, -0xDB0
    ctx->pc = 0x2a457cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963792));
label_2a4580:
    // 0x2a4580: 0xc0a8e12  jal         func_2A3848
label_2a4584:
    if (ctx->pc == 0x2A4584u) {
        ctx->pc = 0x2A4584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4580u;
        // 0x2a4584: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4588u;
        goto label_2a4588;
    }
    ctx->pc = 0x2A4580u;
    SET_GPR_U32(ctx, 31, 0x2A4588u);
    ctx->pc = 0x2A4584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4580u;
    // 0x2a4584: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3848u, 0x2A4580u, 0x2A4588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4588u;
label_2a4588:
    // 0x2a4588: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2a4588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_2a458c:
    // 0x2a458c: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x2a458cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2a4590:
    // 0x2a4590: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2a4594:
    if (ctx->pc == 0x2A4594u) {
        ctx->pc = 0x2A4594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4590u;
        // 0x2a4594: 0x2610ffb0  addiu       $s0, $s0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4598u;
        goto label_2a4598;
    }
    ctx->pc = 0x2A4590u;
    {
        const bool branch_taken_0x2a4590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4590u;
        // 0x2a4594: 0x2610ffb0  addiu       $s0, $s0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4590) {
            ctx->pc = 0x2A4578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4578;
        }
    }
    ctx->pc = 0x2A4598u;
label_2a4598:
    // 0x2a4598: 0x2670f250  addiu       $s0, $s3, -0xDB0
    ctx->pc = 0x2a4598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963792));
label_2a459c:
    // 0x2a459c: 0x8e25017c  lw          $a1, 0x17C($s1)
    ctx->pc = 0x2a459cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
label_2a45a0:
    // 0x2a45a0: 0xc0a8e12  jal         func_2A3848
label_2a45a4:
    if (ctx->pc == 0x2A45A4u) {
        ctx->pc = 0x2A45A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A45A0u;
        // 0x2a45a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A45A8u;
        goto label_2a45a8;
    }
    ctx->pc = 0x2A45A0u;
    SET_GPR_U32(ctx, 31, 0x2A45A8u);
    ctx->pc = 0x2A45A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A45A0u;
    // 0x2a45a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3848u, 0x2A45A0u, 0x2A45A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A45A8u;
label_2a45a8:
    // 0x2a45a8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a45a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_2a45ac:
    // 0x2a45ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a45acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a45b0:
    // 0x2a45b0: 0x24a5d640  addiu       $a1, $a1, -0x29C0
    ctx->pc = 0x2a45b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956608));
label_2a45b4:
    // 0x2a45b4: 0xc0a8e12  jal         func_2A3848
label_2a45b8:
    if (ctx->pc == 0x2A45B8u) {
        ctx->pc = 0x2A45B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A45B4u;
        // 0x2a45b8: 0xae220184  sw          $v0, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A45BCu;
        goto label_2a45bc;
    }
    ctx->pc = 0x2A45B4u;
    SET_GPR_U32(ctx, 31, 0x2A45BCu);
    ctx->pc = 0x2A45B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A45B4u;
    // 0x2a45b8: 0xae220184  sw          $v0, 0x184($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3848u, 0x2A45B4u, 0x2A45BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A45BCu;
label_2a45bc:
    // 0x2a45bc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a45bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_2a45c0:
    // 0x2a45c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a45c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a45c4:
    // 0x2a45c4: 0xae220198  sw          $v0, 0x198($s1)
    ctx->pc = 0x2a45c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 408), GPR_U32(ctx, 2));
label_2a45c8:
    // 0x2a45c8: 0xc0a8e12  jal         func_2A3848
label_2a45cc:
    if (ctx->pc == 0x2A45CCu) {
        ctx->pc = 0x2A45CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A45C8u;
        // 0x2a45cc: 0x24a5d658  addiu       $a1, $a1, -0x29A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A45D0u;
        goto label_2a45d0;
    }
    ctx->pc = 0x2A45C8u;
    SET_GPR_U32(ctx, 31, 0x2A45D0u);
    ctx->pc = 0x2A45CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A45C8u;
    // 0x2a45cc: 0x24a5d658  addiu       $a1, $a1, -0x29A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3848u, 0x2A45C8u, 0x2A45D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A45D0u;
label_2a45d0:
    // 0x2a45d0: 0x8e2401ac  lw          $a0, 0x1AC($s1)
    ctx->pc = 0x2a45d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
label_2a45d4:
    // 0x2a45d4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2a45d8:
    if (ctx->pc == 0x2A45D8u) {
        ctx->pc = 0x2A45D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A45D4u;
        // 0x2a45d8: 0xae2201a4  sw          $v0, 0x1A4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 420), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A45DCu;
        goto label_2a45dc;
    }
    ctx->pc = 0x2A45D4u;
    {
        const bool branch_taken_0x2a45d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A45D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A45D4u;
        // 0x2a45d8: 0xae2201a4  sw          $v0, 0x1A4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 420), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a45d4) {
            ctx->pc = 0x2A45ECu;
            goto label_2a45ec;
        }
    }
    ctx->pc = 0x2A45DCu;
label_2a45dc:
    // 0x2a45dc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a45dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a45e0:
    // 0x2a45e0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2a45e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2a45e4:
    // 0x2a45e4: 0x40f809  jalr        $v0
label_2a45e8:
    if (ctx->pc == 0x2A45E8u) {
        ctx->pc = 0x2A45ECu;
        goto label_2a45ec;
    }
    ctx->pc = 0x2A45E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A45ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A45E4u, 0x2A45ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A45ECu;
label_2a45ec:
    // 0x2a45ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a45ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a45f0:
    // 0x2a45f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a45f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a45f4:
    // 0x2a45f4: 0xa2220178  sb          $v0, 0x178($s1)
    ctx->pc = 0x2a45f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 376), (uint8_t)GPR_U32(ctx, 2));
label_2a45f8:
    // 0x2a45f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a45f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2a45fc:
    // 0x2a45fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a45fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a4600:
    // 0x2a4600: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a4600u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2a4604:
    // 0x2a4604: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a4604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a4608:
    // 0x2a4608: 0x3e00008  jr          $ra
label_2a460c:
    if (ctx->pc == 0x2A460Cu) {
        ctx->pc = 0x2A460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4608u;
        // 0x2a460c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4610u;
        goto label_fallthrough_0x2a4608;
    }
    ctx->pc = 0x2A4608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4608u;
        // 0x2a460c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a4608:
    ctx->pc = 0x2A4610u;
}
