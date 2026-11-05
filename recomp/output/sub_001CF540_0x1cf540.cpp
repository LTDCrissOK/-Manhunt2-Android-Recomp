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

// Function: sub_001CF540
// Address: 0x1cf540 - 0x1cf6d8
void sub_001CF540_0x1cf540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF540_0x1cf540");
#endif

    switch (ctx->pc) {
        case 0x1cf5a0u: goto label_1cf5a0;
        case 0x1cf5c0u: goto label_1cf5c0;
        case 0x1cf5c8u: goto label_1cf5c8;
        case 0x1cf5dcu: goto label_1cf5dc;
        case 0x1cf5f0u: goto label_1cf5f0;
        case 0x1cf628u: goto label_1cf628;
        case 0x1cf648u: goto label_1cf648;
        case 0x1cf650u: goto label_1cf650;
        case 0x1cf66cu: goto label_1cf66c;
        case 0x1cf694u: goto label_1cf694;
        case 0x1cf6a8u: goto label_1cf6a8;
        default: break;
    }

    ctx->pc = 0x1cf540u;

    // 0x1cf540: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cf540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cf544: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cf544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cf548: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf54c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cf54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cf550: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cf550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cf554: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x1cf554u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x1cf558: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1cf558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1cf55c: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x1cf55cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x1cf560: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1cf560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1cf564: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x1cf564u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x1cf568: 0x8c5089ac  lw          $s0, -0x7654($v0)
    ctx->pc = 0x1cf568u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3F89ACu));
    // 0x1cf56c: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x1cf56cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x1cf570: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cf570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cf574: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CF574u;
    {
        const bool branch_taken_0x1cf574 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF574u;
        // 0x1cf578: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf574) {
            ctx->pc = 0x1CF5C8u;
            goto label_1cf5c8;
        }
    }
    ctx->pc = 0x1CF57Cu;
    // 0x1cf57c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1cf57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cf580: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CF580u;
    {
        const bool branch_taken_0x1cf580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF580u;
        // 0x1cf584: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf580) {
            ctx->pc = 0x1CF5C0u;
            goto label_1cf5c0;
        }
    }
    ctx->pc = 0x1CF588u;
    // 0x1cf588: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x1cf588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x1cf58c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1cf58cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1cf590: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cf590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cf594: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF594u;
    {
        const bool branch_taken_0x1cf594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CF598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF594u;
        // 0x1cf598: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf594) {
            ctx->pc = 0x1CF5B8u;
            goto label_1cf5b8;
        }
    }
    ctx->pc = 0x1CF59Cu;
    // 0x1cf59c: 0x0  nop
    ctx->pc = 0x1cf59cu;
    // NOP
label_1cf5a0:
    // 0x1cf5a0: 0x0  nop
    ctx->pc = 0x1cf5a0u;
    // NOP
    // 0x1cf5a4: 0x0  nop
    ctx->pc = 0x1cf5a4u;
    // NOP
    // 0x1cf5a8: 0x0  nop
    ctx->pc = 0x1cf5a8u;
    // NOP
    // 0x1cf5ac: 0x0  nop
    ctx->pc = 0x1cf5acu;
    // NOP
    // 0x1cf5b0: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CF5B0u;
    {
        const bool branch_taken_0x1cf5b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CF5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF5B0u;
        // 0x1cf5b4: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf5b0) {
            ctx->pc = 0x1CF5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf5a0;
        }
    }
    ctx->pc = 0x1CF5B8u;
label_1cf5b8:
    // 0x1cf5b8: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1CF5B8u;
    SET_GPR_U32(ctx, 31, 0x1CF5C0u);
    ctx->pc = 0x1CF5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF5B8u;
    // 0x1cf5bc: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1CF5B8u, 0x1CF5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF5C0u;
label_1cf5c0:
    // 0x1cf5c0: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1CF5C0u;
    SET_GPR_U32(ctx, 31, 0x1CF5C8u);
    ctx->pc = 0x1CF5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF5C0u;
    // 0x1cf5c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1CF5C0u, 0x1CF5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF5C8u;
label_1cf5c8:
    // 0x1cf5c8: 0x8e2489b4  lw          $a0, -0x764C($s1)
    ctx->pc = 0x1cf5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937012)));
    // 0x1cf5cc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF5CCu;
    {
        const bool branch_taken_0x1cf5cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF5CCu;
        // 0x1cf5d0: 0x8ea289bc  lw          $v0, -0x7644($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf5cc) {
            ctx->pc = 0x1CF5E0u;
            goto label_1cf5e0;
        }
    }
    ctx->pc = 0x1CF5D4u;
    // 0x1cf5d4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1CF5D4u;
    SET_GPR_U32(ctx, 31, 0x1CF5DCu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1CF5D4u, 0x1CF5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF5DCu;
label_1cf5dc:
    // 0x1cf5dc: 0x8ea289bc  lw          $v0, -0x7644($s5)
    ctx->pc = 0x1cf5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937020)));
label_1cf5e0:
    // 0x1cf5e0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1CF5E0u;
    {
        const bool branch_taken_0x1cf5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF5E0u;
        // 0x1cf5e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf5e0) {
            ctx->pc = 0x1CF680u;
            goto label_1cf680;
        }
    }
    ctx->pc = 0x1CF5E8u;
    // 0x1cf5e8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1cf5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cf5ec: 0x0  nop
    ctx->pc = 0x1cf5ecu;
    // NOP
label_1cf5f0:
    // 0x1cf5f0: 0x8e6389b0  lw          $v1, -0x7650($s3)
    ctx->pc = 0x1cf5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937008)));
    // 0x1cf5f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cf5f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf5f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cf5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cf5fc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1cf5fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf600: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1CF600u;
    {
        const bool branch_taken_0x1cf600 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF600u;
        // 0x1cf604: 0x24920001  addiu       $s2, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf600) {
            ctx->pc = 0x1CF650u;
            goto label_1cf650;
        }
    }
    ctx->pc = 0x1CF608u;
    // 0x1cf608: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1cf608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cf60c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1CF60Cu;
    {
        const bool branch_taken_0x1cf60c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF60Cu;
        // 0x1cf610: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf60c) {
            ctx->pc = 0x1CF648u;
            goto label_1cf648;
        }
    }
    ctx->pc = 0x1CF614u;
    // 0x1cf614: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x1cf614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x1cf618: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1cf618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1cf61c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cf61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cf620: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF620u;
    {
        const bool branch_taken_0x1cf620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CF624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF620u;
        // 0x1cf624: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf620) {
            ctx->pc = 0x1CF640u;
            goto label_1cf640;
        }
    }
    ctx->pc = 0x1CF628u;
label_1cf628:
    // 0x1cf628: 0x0  nop
    ctx->pc = 0x1cf628u;
    // NOP
    // 0x1cf62c: 0x0  nop
    ctx->pc = 0x1cf62cu;
    // NOP
    // 0x1cf630: 0x0  nop
    ctx->pc = 0x1cf630u;
    // NOP
    // 0x1cf634: 0x0  nop
    ctx->pc = 0x1cf634u;
    // NOP
    // 0x1cf638: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CF638u;
    {
        const bool branch_taken_0x1cf638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CF63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF638u;
        // 0x1cf63c: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf638) {
            ctx->pc = 0x1CF628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf628;
        }
    }
    ctx->pc = 0x1CF640u;
label_1cf640:
    // 0x1cf640: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1CF640u;
    SET_GPR_U32(ctx, 31, 0x1CF648u);
    ctx->pc = 0x1CF644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF640u;
    // 0x1cf644: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1CF640u, 0x1CF648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF648u;
label_1cf648:
    // 0x1cf648: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1CF648u;
    SET_GPR_U32(ctx, 31, 0x1CF650u);
    ctx->pc = 0x1CF64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF648u;
    // 0x1cf64c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1CF648u, 0x1CF650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF650u;
label_1cf650:
    // 0x1cf650: 0x8e8289b8  lw          $v0, -0x7648($s4)
    ctx->pc = 0x1cf650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294937016)));
    // 0x1cf654: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1cf654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1cf658: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1cf658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf65c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF65Cu;
    {
        const bool branch_taken_0x1cf65c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF65Cu;
        // 0x1cf660: 0x8ea289bc  lw          $v0, -0x7644($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf65c) {
            ctx->pc = 0x1CF670u;
            goto label_1cf670;
        }
    }
    ctx->pc = 0x1CF664u;
    // 0x1cf664: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1CF664u;
    SET_GPR_U32(ctx, 31, 0x1CF66Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1CF664u, 0x1CF66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF66Cu;
label_1cf66c:
    // 0x1cf66c: 0x8ea289bc  lw          $v0, -0x7644($s5)
    ctx->pc = 0x1cf66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937020)));
label_1cf670:
    // 0x1cf670: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cf670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf674: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1cf674u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1cf678: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1CF678u;
    {
        const bool branch_taken_0x1cf678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF678u;
        // 0x1cf67c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf678) {
            ctx->pc = 0x1CF5F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf5f0;
        }
    }
    ctx->pc = 0x1CF680u;
label_1cf680:
    // 0x1cf680: 0x8e6489b0  lw          $a0, -0x7650($s3)
    ctx->pc = 0x1cf680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937008)));
    // 0x1cf684: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF684u;
    {
        const bool branch_taken_0x1cf684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf684) {
            ctx->pc = 0x1CF688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF684u;
            // 0x1cf688: 0x8e8489b8  lw          $a0, -0x7648($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294937016)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF698u;
            goto label_1cf698;
        }
    }
    ctx->pc = 0x1CF68Cu;
    // 0x1cf68c: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1CF68Cu;
    SET_GPR_U32(ctx, 31, 0x1CF694u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1CF68Cu, 0x1CF694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF694u;
label_1cf694:
    // 0x1cf694: 0x8e8489b8  lw          $a0, -0x7648($s4)
    ctx->pc = 0x1cf694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294937016)));
label_1cf698:
    // 0x1cf698: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF698u;
    {
        const bool branch_taken_0x1cf698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf698) {
            ctx->pc = 0x1CF69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF698u;
            // 0x1cf69c: 0xae6089b0  sw          $zero, -0x7650($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4294937008), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF6ACu;
            goto label_1cf6ac;
        }
    }
    ctx->pc = 0x1CF6A0u;
    // 0x1cf6a0: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1CF6A0u;
    SET_GPR_U32(ctx, 31, 0x1CF6A8u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1CF6A0u, 0x1CF6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF6A8u;
label_1cf6a8:
    // 0x1cf6a8: 0xae6089b0  sw          $zero, -0x7650($s3)
    ctx->pc = 0x1cf6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294937008), GPR_U32(ctx, 0));
label_1cf6ac:
    // 0x1cf6ac: 0xae8089b8  sw          $zero, -0x7648($s4)
    ctx->pc = 0x1cf6acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294937016), GPR_U32(ctx, 0));
    // 0x1cf6b0: 0xaea089bc  sw          $zero, -0x7644($s5)
    ctx->pc = 0x1cf6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294937020), GPR_U32(ctx, 0));
    // 0x1cf6b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf6b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf6b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cf6b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf6bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cf6bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf6c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cf6c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cf6c4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cf6c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf6c8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1cf6c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cf6cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cf6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cf6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6D0u;
        // 0x1cf6d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF6D8u;
}
