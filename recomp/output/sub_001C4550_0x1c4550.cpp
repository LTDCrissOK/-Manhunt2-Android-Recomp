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

// Function: sub_001C4550
// Address: 0x1c4550 - 0x1c46e8
void sub_001C4550_0x1c4550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4550_0x1c4550");
#endif

    switch (ctx->pc) {
        case 0x1c45a0u: goto label_1c45a0;
        case 0x1c45e8u: goto label_1c45e8;
        case 0x1c4630u: goto label_1c4630;
        case 0x1c4638u: goto label_1c4638;
        case 0x1c4668u: goto label_1c4668;
        case 0x1c4670u: goto label_1c4670;
        case 0x1c469cu: goto label_1c469c;
        case 0x1c46acu: goto label_1c46ac;
        case 0x1c46c4u: goto label_1c46c4;
        default: break;
    }

    ctx->pc = 0x1c4550u;

    // 0x1c4550: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c4550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c4554: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c4554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c4558: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c4558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c455c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c455cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4560: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c4560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c4564: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1c4564u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4568: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c4568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c456c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c456cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c4570: 0x8e4204c0  lw          $v0, 0x4C0($s2)
    ctx->pc = 0x1c4570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1216)));
    // 0x1c4574: 0x1453004b  bne         $v0, $s3, . + 4 + (0x4B << 2)
    ctx->pc = 0x1C4574u;
    {
        const bool branch_taken_0x1c4574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x1C4578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4574u;
        // 0x1c4578: 0x26440488  addiu       $a0, $s2, 0x488 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4574) {
            ctx->pc = 0x1C46A4u;
            goto label_1c46a4;
        }
    }
    ctx->pc = 0x1C457Cu;
    // 0x1c457c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c457cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4580: 0xae530450  sw          $s3, 0x450($s2)
    ctx->pc = 0x1c4580u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1104), GPR_U32(ctx, 19));
    // 0x1c4584: 0xae420470  sw          $v0, 0x470($s2)
    ctx->pc = 0x1c4584u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1136), GPR_U32(ctx, 2));
    // 0x1c4588: 0x26430478  addiu       $v1, $s2, 0x478
    ctx->pc = 0x1c4588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1144));
    // 0x1c458c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1c458cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1c4590: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x1c4590u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x1c4594: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1c4594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4598: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4598u;
    {
        const bool branch_taken_0x1c4598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4598u;
        // 0x1c459c: 0x26510488  addiu       $s1, $s2, 0x488 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4598) {
            ctx->pc = 0x1C45A8u;
            goto label_1c45a8;
        }
    }
    ctx->pc = 0x1C45A0u;
label_1c45a0:
    // 0x1c45a0: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x1c45a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1c45a4: 0xac620064  sw          $v0, 0x64($v1)
    ctx->pc = 0x1c45a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
label_1c45a8:
    // 0x1c45a8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1c45a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c45ac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C45ACu;
    {
        const bool branch_taken_0x1c45ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C45B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C45ACu;
        // 0x1c45b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c45ac) {
            ctx->pc = 0x1C45B8u;
            goto label_1c45b8;
        }
    }
    ctx->pc = 0x1C45B4u;
    // 0x1c45b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c45b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c45b8:
    // 0x1c45b8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C45B8u;
    {
        const bool branch_taken_0x1c45b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c45b8) {
            ctx->pc = 0x1C45BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C45B8u;
            // 0x1c45bc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C45CCu;
            goto label_1c45cc;
        }
    }
    ctx->pc = 0x1C45C0u;
    // 0x1c45c0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c45c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c45c4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1c45c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1c45c8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c45c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c45cc:
    // 0x1c45cc: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x1C45CCu;
    {
        const bool branch_taken_0x1c45cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c45cc) {
            ctx->pc = 0x1C45D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C45CCu;
            // 0x1c45d0: 0x8c431000  lw          $v1, 0x1000($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4096)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C45A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c45a0;
        }
    }
    ctx->pc = 0x1C45D4u;
    // 0x1c45d4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c45d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c45d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c45d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c45dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C45DCu;
    {
        const bool branch_taken_0x1c45dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C45E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C45DCu;
        // 0x1c45e0: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c45dc) {
            ctx->pc = 0x1C45F0u;
            goto label_1c45f0;
        }
    }
    ctx->pc = 0x1C45E4u;
    // 0x1c45e4: 0x0  nop
    ctx->pc = 0x1c45e4u;
    // NOP
label_1c45e8:
    // 0x1c45e8: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x1c45e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1c45ec: 0xac620064  sw          $v0, 0x64($v1)
    ctx->pc = 0x1c45ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
label_1c45f0:
    // 0x1c45f0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1c45f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c45f4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C45F4u;
    {
        const bool branch_taken_0x1c45f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C45F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C45F4u;
        // 0x1c45f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c45f4) {
            ctx->pc = 0x1C4600u;
            goto label_1c4600;
        }
    }
    ctx->pc = 0x1C45FCu;
    // 0x1c45fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c45fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c4600:
    // 0x1c4600: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1c4600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c4604: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4604u;
    {
        const bool branch_taken_0x1c4604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4604) {
            ctx->pc = 0x1C4608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4604u;
            // 0x1c4608: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4618u;
            goto label_1c4618;
        }
    }
    ctx->pc = 0x1C460Cu;
    // 0x1c460c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c460cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c4610: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1c4610u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1c4614: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c4614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c4618:
    // 0x1c4618: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C4618u;
    {
        const bool branch_taken_0x1c4618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4618) {
            ctx->pc = 0x1C461Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4618u;
            // 0x1c461c: 0x8c431000  lw          $v1, 0x1000($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4096)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C45E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c45e8;
        }
    }
    ctx->pc = 0x1C4620u;
    // 0x1c4620: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c4620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c4624: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C4624u;
    {
        const bool branch_taken_0x1c4624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4624u;
        // 0x1c4628: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4624) {
            ctx->pc = 0x1C4648u;
            goto label_1c4648;
        }
    }
    ctx->pc = 0x1C462Cu;
    // 0x1c462c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1c462cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c4630:
    // 0x1c4630: 0xc0f71dc  jal         func_3DC770
    ctx->pc = 0x1C4630u;
    SET_GPR_U32(ctx, 31, 0x1C4638u);
    ctx->pc = 0x1C4634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4630u;
    // 0x1c4634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC770u, 0x1C4630u, 0x1C4638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4638u;
label_1c4638:
    // 0x1c4638: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c4638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c463c: 0x0  nop
    ctx->pc = 0x1c463cu;
    // NOP
    // 0x1c4640: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C4640u;
    {
        const bool branch_taken_0x1c4640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4640) {
            ctx->pc = 0x1C4644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4640u;
            // 0x1c4644: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4630;
        }
    }
    ctx->pc = 0x1C4648u;
label_1c4648:
    // 0x1c4648: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1c4648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1c464c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1c464cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1c4650: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1c4650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1c4654: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1c4654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1c4658: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c4658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c465c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C465Cu;
    {
        const bool branch_taken_0x1c465c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C465Cu;
        // 0x1c4660: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c465c) {
            ctx->pc = 0x1C4680u;
            goto label_1c4680;
        }
    }
    ctx->pc = 0x1C4664u;
    // 0x1c4664: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1c4664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1c4668:
    // 0x1c4668: 0xc0f71dc  jal         func_3DC770
    ctx->pc = 0x1C4668u;
    SET_GPR_U32(ctx, 31, 0x1C4670u);
    ctx->pc = 0x1C466Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4668u;
    // 0x1c466c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC770u, 0x1C4668u, 0x1C4670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4670u;
label_1c4670:
    // 0x1c4670: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c4670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c4674: 0x0  nop
    ctx->pc = 0x1c4674u;
    // NOP
    // 0x1c4678: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C4678u;
    {
        const bool branch_taken_0x1c4678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4678) {
            ctx->pc = 0x1C467Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4678u;
            // 0x1c467c: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4668;
        }
    }
    ctx->pc = 0x1C4680u;
label_1c4680:
    // 0x1c4680: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1c4680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1c4684: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c4684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4688: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1c4688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1c468c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c468cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4690: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1c4690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1c4694: 0xc0f71b8  jal         func_3DC6E0
    ctx->pc = 0x1C4694u;
    SET_GPR_U32(ctx, 31, 0x1C469Cu);
    ctx->pc = 0x1C4698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4694u;
    // 0x1c4698: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC6E0u, 0x1C4694u, 0x1C469Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C469Cu;
label_1c469c:
    // 0x1c469c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C469Cu;
    {
        const bool branch_taken_0x1c469c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C46A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C469Cu;
        // 0x1c46a0: 0x8e631000  lw          $v1, 0x1000($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c469c) {
            ctx->pc = 0x1C46B0u;
            goto label_1c46b0;
        }
    }
    ctx->pc = 0x1C46A4u;
label_1c46a4:
    // 0x1c46a4: 0xc0f7200  jal         func_3DC800
    ctx->pc = 0x1C46A4u;
    SET_GPR_U32(ctx, 31, 0x1C46ACu);
    ctx->pc = 0x1C46A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C46A4u;
    // 0x1c46a8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC800u, 0x1C46A4u, 0x1C46ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C46ACu;
label_1c46ac:
    // 0x1c46ac: 0x8e631000  lw          $v1, 0x1000($s3)
    ctx->pc = 0x1c46acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4096)));
label_1c46b0:
    // 0x1c46b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c46b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c46b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c46b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c46b8: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x1c46b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1c46bc: 0xc071056  jal         func_1C4158
    ctx->pc = 0x1C46BCu;
    SET_GPR_U32(ctx, 31, 0x1C46C4u);
    ctx->pc = 0x1C46C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C46BCu;
    // 0x1c46c0: 0xac620064  sw          $v0, 0x64($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4158u, 0x1C46BCu, 0x1C46C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C46C4u;
label_1c46c4:
    // 0x1c46c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c46c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c46c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c46c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c46cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c46ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c46d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c46d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c46d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c46d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c46d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c46d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c46dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C46DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C46E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C46DCu;
        // 0x1c46e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C46DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C46E4u;
    // 0x1c46e4: 0x0  nop
    ctx->pc = 0x1c46e4u;
    // NOP
    ctx->pc = 0x1c46e8u;
}
