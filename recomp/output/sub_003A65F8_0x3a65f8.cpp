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

// Function: sub_003A65F8
// Address: 0x3a65f8 - 0x3a6710
void sub_003A65F8_0x3a65f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A65F8_0x3a65f8");
#endif

    switch (ctx->pc) {
        case 0x3a661cu: goto label_3a661c;
        case 0x3a6630u: goto label_3a6630;
        case 0x3a6638u: goto label_3a6638;
        case 0x3a6658u: goto label_3a6658;
        case 0x3a6660u: goto label_3a6660;
        case 0x3a66a4u: goto label_3a66a4;
        case 0x3a66b0u: goto label_3a66b0;
        case 0x3a66b8u: goto label_3a66b8;
        case 0x3a66d0u: goto label_3a66d0;
        default: break;
    }

    ctx->pc = 0x3a65f8u;

    // 0x3a65f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a65f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a65fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a65fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a6600: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a6600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6604: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a6604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a6608: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3a6608u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a660c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a660cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a6610: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3a6610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3a6614: 0xc0e994c  jal         func_3A6530
    ctx->pc = 0x3A6614u;
    SET_GPR_U32(ctx, 31, 0x3A661Cu);
    ctx->pc = 0x3A6618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6614u;
    // 0x3a6618: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6530u, 0x3A6614u, 0x3A661Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A661Cu;
label_3a661c:
    // 0x3a661c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A661Cu;
    {
        const bool branch_taken_0x3a661c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A661Cu;
        // 0x3a6620: 0x3c050041  lui         $a1, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a661c) {
            ctx->pc = 0x3A6630u;
            goto label_3a6630;
        }
    }
    ctx->pc = 0x3A6624u;
    // 0x3a6624: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a6624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6628: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x3A6628u;
    SET_GPR_U32(ctx, 31, 0x3A6630u);
    ctx->pc = 0x3A662Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6628u;
    // 0x3a662c: 0x24a53e60  addiu       $a1, $a1, 0x3E60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x3A6628u, 0x3A6630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6630u;
label_3a6630:
    // 0x3a6630: 0xc0e9968  jal         func_3A65A0
    ctx->pc = 0x3A6630u;
    SET_GPR_U32(ctx, 31, 0x3A6638u);
    ctx->pc = 0x3A6634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6630u;
    // 0x3a6634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65A0u, 0x3A6630u, 0x3A6638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6638u;
label_3a6638:
    // 0x3a6638: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a6638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a663c: 0x5443001a  bnel        $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3A663Cu;
    {
        const bool branch_taken_0x3a663c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a663c) {
            ctx->pc = 0x3A6640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A663Cu;
            // 0x3a6640: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A66A8u;
            goto label_3a66a8;
        }
    }
    ctx->pc = 0x3A6644u;
    // 0x3a6644: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x3a6644u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x3a6648: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a6648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a664c: 0x26103d58  addiu       $s0, $s0, 0x3D58
    ctx->pc = 0x3a664cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 15704));
    // 0x3a6650: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x3A6650u;
    SET_GPR_U32(ctx, 31, 0x3A6658u);
    ctx->pc = 0x3A6654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6650u;
    // 0x3a6654: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x3A6650u, 0x3A6658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6658u;
label_3a6658:
    // 0x3a6658: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3A6658u;
    SET_GPR_U32(ctx, 31, 0x3A6660u);
    ctx->pc = 0x3A665Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6658u;
    // 0x3a665c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3A6658u, 0x3A6660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6660u;
label_3a6660:
    // 0x3a6660: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x3a6660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x3a6664: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3a6664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3a6668: 0x8042ffff  lb          $v0, -0x1($v0)
    ctx->pc = 0x3a6668u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x3a666c: 0x1044000d  beq         $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x3A666Cu;
    {
        const bool branch_taken_0x3a666c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3A6670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A666Cu;
        // 0x3a6670: 0x2403002f  addiu       $v1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a666c) {
            ctx->pc = 0x3A66A4u;
            goto label_3a66a4;
        }
    }
    ctx->pc = 0x3A6674u;
    // 0x3a6674: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3A6674u;
    {
        const bool branch_taken_0x3a6674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A6678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6674u;
        // 0x3a6678: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6674) {
            ctx->pc = 0x3A66A8u;
            goto label_3a66a8;
        }
    }
    ctx->pc = 0x3A667Cu;
    // 0x3a667c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A667Cu;
    {
        const bool branch_taken_0x3a667c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a667c) {
            ctx->pc = 0x3A66A8u;
            goto label_3a66a8;
        }
    }
    ctx->pc = 0x3A6684u;
    // 0x3a6684: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x3a6684u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3a6688: 0x10440007  beq         $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A6688u;
    {
        const bool branch_taken_0x3a6688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x3a6688) {
            ctx->pc = 0x3A66A8u;
            goto label_3a66a8;
        }
    }
    ctx->pc = 0x3A6690u;
    // 0x3a6690: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A6690u;
    {
        const bool branch_taken_0x3a6690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A6694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6690u;
        // 0x3a6694: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6690) {
            ctx->pc = 0x3A66A4u;
            goto label_3a66a4;
        }
    }
    ctx->pc = 0x3A6698u;
    // 0x3a6698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a6698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a669c: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x3A669Cu;
    SET_GPR_U32(ctx, 31, 0x3A66A4u);
    ctx->pc = 0x3A66A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A669Cu;
    // 0x3a66a0: 0x24a5de70  addiu       $a1, $a1, -0x2190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x3A669Cu, 0x3A66A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A66A4u;
label_3a66a4:
    // 0x3a66a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3a66a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a66a8:
    // 0x3a66a8: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x3A66A8u;
    SET_GPR_U32(ctx, 31, 0x3A66B0u);
    ctx->pc = 0x3A66ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A66A8u;
    // 0x3a66ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x3A66A8u, 0x3A66B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A66B0u;
label_3a66b0:
    // 0x3a66b0: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3A66B0u;
    SET_GPR_U32(ctx, 31, 0x3A66B8u);
    ctx->pc = 0x3A66B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A66B0u;
    // 0x3a66b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3A66B0u, 0x3A66B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A66B8u;
label_3a66b8:
    // 0x3a66b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3a66b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a66bc: 0x18c0000d  blez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x3A66BCu;
    {
        const bool branch_taken_0x3a66bc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x3A66C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A66BCu;
        // 0x3a66c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a66bc) {
            ctx->pc = 0x3A66F4u;
            goto label_3a66f4;
        }
    }
    ctx->pc = 0x3A66C4u;
    // 0x3a66c4: 0x2408005c  addiu       $t0, $zero, 0x5C
    ctx->pc = 0x3a66c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x3a66c8: 0x2407002f  addiu       $a3, $zero, 0x2F
    ctx->pc = 0x3a66c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x3a66cc: 0x2252021  addu        $a0, $s1, $a1
    ctx->pc = 0x3a66ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_3a66d0:
    // 0x3a66d0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a66d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a66d4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3a66d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a66d8: 0x14480002  bne         $v0, $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A66D8u;
    {
        const bool branch_taken_0x3a66d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x3A66DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A66D8u;
        // 0x3a66dc: 0xa6182a  slt         $v1, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a66d8) {
            ctx->pc = 0x3A66E4u;
            goto label_3a66e4;
        }
    }
    ctx->pc = 0x3A66E0u;
    // 0x3a66e0: 0xa0870000  sb          $a3, 0x0($a0)
    ctx->pc = 0x3a66e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 7));
label_3a66e4:
    // 0x3a66e4: 0x0  nop
    ctx->pc = 0x3a66e4u;
    // NOP
    // 0x3a66e8: 0x0  nop
    ctx->pc = 0x3a66e8u;
    // NOP
    // 0x3a66ec: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3A66ECu;
    {
        const bool branch_taken_0x3a66ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A66F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A66ECu;
        // 0x3a66f0: 0x2252021  addu        $a0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a66ec) {
            ctx->pc = 0x3A66D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a66d0;
        }
    }
    ctx->pc = 0x3A66F4u;
label_3a66f4:
    // 0x3a66f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a66f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a66f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a66f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a66fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a66fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a6700: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3a6700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a6704: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6704u;
        // 0x3a6708: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A670Cu;
    // 0x3a670c: 0x0  nop
    ctx->pc = 0x3a670cu;
    // NOP
    ctx->pc = 0x3a6710u;
}
