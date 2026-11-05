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

// Function: sub_00283610
// Address: 0x283610 - 0x283728
void sub_00283610_0x283610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283610_0x283610");
#endif

    switch (ctx->pc) {
        case 0x283648u: goto label_283648;
        default: break;
    }

    ctx->pc = 0x283610u;

    // 0x283610: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x283610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x283614: 0x240603fb  addiu       $a2, $zero, 0x3FB
    ctx->pc = 0x283614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1019));
    // 0x283618: 0x8c62aa88  lw          $v0, -0x5578($v1)
    ctx->pc = 0x283618u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAA88u));
    // 0x28361c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28361Cu;
    {
        const bool branch_taken_0x28361c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28361Cu;
        // 0x283620: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28361c) {
            ctx->pc = 0x283630u;
            goto label_283630;
        }
    }
    ctx->pc = 0x283624u;
    // 0x283624: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x283624u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283628: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x283628u;
    {
        const bool branch_taken_0x283628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283628u;
        // 0x28362c: 0x3c07006c  lui         $a3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283628) {
            ctx->pc = 0x28366Cu;
            goto label_28366c;
        }
    }
    ctx->pc = 0x283630u;
label_283630:
    // 0x283630: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x283630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x283634: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x283634u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x283638: 0x24432480  addiu       $v1, $v0, 0x2480
    ctx->pc = 0x283638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9344));
    // 0x28363c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x28363cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x283640: 0x24640078  addiu       $a0, $v1, 0x78
    ctx->pc = 0x283640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x283644: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x283644u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C2480u));
label_283648:
    // 0x283648: 0x50460008  beql        $v0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x283648u;
    {
        const bool branch_taken_0x283648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x283648) {
            ctx->pc = 0x28364Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283648u;
            // 0x28364c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28366Cu;
            goto label_28366c;
        }
    }
    ctx->pc = 0x283650u;
    // 0x283650: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x283650u;
    {
        const bool branch_taken_0x283650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x283654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283650u;
        // 0x283654: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283650) {
            ctx->pc = 0x28366Cu;
            goto label_28366c;
        }
    }
    ctx->pc = 0x283658u;
    // 0x283658: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x283658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x28365c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x28365cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x283660: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x283660u;
    {
        const bool branch_taken_0x283660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283660) {
            ctx->pc = 0x283664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283660u;
            // 0x283664: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_283648;
        }
    }
    ctx->pc = 0x283668u;
    // 0x283668: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x283668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28366c:
    // 0x28366c: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x28366Cu;
    {
        const bool branch_taken_0x28366c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28366c) {
            ctx->pc = 0x283670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28366Cu;
            // 0x283670: 0x24e4af50  addiu       $a0, $a3, -0x50B0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946640));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2836CCu;
            goto label_2836cc;
        }
    }
    ctx->pc = 0x283674u;
    // 0x283674: 0x8d02aa88  lw          $v0, -0x5578($t0)
    ctx->pc = 0x283674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294945416)));
    // 0x283678: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x283678u;
    {
        const bool branch_taken_0x283678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283678u;
        // 0x28367c: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283678) {
            ctx->pc = 0x283694u;
            goto label_283694;
        }
    }
    ctx->pc = 0x283680u;
    // 0x283680: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x283680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x283684: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x283684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x283688: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x283688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x28368c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x28368Cu;
    {
        const bool branch_taken_0x28368c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28368c) {
            ctx->pc = 0x283690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28368Cu;
            // 0x283690: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28369Cu;
            goto label_28369c;
        }
    }
    ctx->pc = 0x283694u;
label_283694:
    // 0x283694: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x283694u;
    {
        const bool branch_taken_0x283694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283694u;
        // 0x283698: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283694) {
            ctx->pc = 0x2836A0u;
            goto label_2836a0;
        }
    }
    ctx->pc = 0x28369Cu;
label_28369c:
    // 0x28369c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x28369cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_2836a0:
    // 0x2836a0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2836A0u;
    {
        const bool branch_taken_0x2836a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2836A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2836A0u;
        // 0x2836a4: 0x24e4af50  addiu       $a0, $a3, -0x50B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2836a0) {
            ctx->pc = 0x2836CCu;
            goto label_2836cc;
        }
    }
    ctx->pc = 0x2836A8u;
    // 0x2836a8: 0x8d02aa88  lw          $v0, -0x5578($t0)
    ctx->pc = 0x2836a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294945416)));
    // 0x2836ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2836ACu;
    {
        const bool branch_taken_0x2836ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2836B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2836ACu;
        // 0x2836b0: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2836ac) {
            ctx->pc = 0x2836C0u;
            goto label_2836c0;
        }
    }
    ctx->pc = 0x2836B4u;
    // 0x2836b4: 0x8c432478  lw          $v1, 0x2478($v0)
    ctx->pc = 0x2836b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9336)));
    // 0x2836b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2836B8u;
    {
        const bool branch_taken_0x2836b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2836BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2836B8u;
        // 0x2836bc: 0x30630800  andi        $v1, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2836b8) {
            ctx->pc = 0x2836C4u;
            goto label_2836c4;
        }
    }
    ctx->pc = 0x2836C0u;
label_2836c0:
    // 0x2836c0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2836c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2836c4:
    // 0x2836c4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2836C4u;
    {
        const bool branch_taken_0x2836c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2836C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2836C4u;
        // 0x2836c8: 0x24e4af50  addiu       $a0, $a3, -0x50B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2836c4) {
            ctx->pc = 0x283710u;
            goto label_283710;
        }
    }
    ctx->pc = 0x2836CCu;
label_2836cc:
    // 0x2836cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2836ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2836d0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2836d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2836d4: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2836D4u;
    {
        const bool branch_taken_0x2836d4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2836D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2836D4u;
        // 0x2836d8: 0xac820050  sw          $v0, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2836d4) {
            ctx->pc = 0x2836ECu;
            goto label_2836ec;
        }
    }
    ctx->pc = 0x2836DCu;
    // 0x2836dc: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2836dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2836e0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2836e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2836e4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2836E4u;
    {
        const bool branch_taken_0x2836e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2836e4) {
            ctx->pc = 0x2836E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2836E4u;
            // 0x2836e8: 0xac800038  sw          $zero, 0x38($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2836ECu;
            goto label_2836ec;
        }
    }
    ctx->pc = 0x2836ECu;
label_2836ec:
    // 0x2836ec: 0x24e3af50  addiu       $v1, $a3, -0x50B0
    ctx->pc = 0x2836ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946640));
    // 0x2836f0: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x2836f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2836f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2836F4u;
    {
        const bool branch_taken_0x2836f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2836F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2836F4u;
        // 0x2836f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2836f4) {
            ctx->pc = 0x283708u;
            goto label_283708;
        }
    }
    ctx->pc = 0x2836FCu;
    // 0x2836fc: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x2836fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x283700: 0x3e00008  jr          $ra
    ctx->pc = 0x283700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283700u;
        // 0x283704: 0xac620038  sw          $v0, 0x38($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283708u;
label_283708:
    // 0x283708: 0x3e00008  jr          $ra
    ctx->pc = 0x283708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283708u;
        // 0x28370c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283710u;
label_283710:
    // 0x283710: 0x24e3af50  addiu       $v1, $a3, -0x50B0
    ctx->pc = 0x283710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946640));
    // 0x283714: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x283714u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283718: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x283718u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x28371c: 0x3e00008  jr          $ra
    ctx->pc = 0x28371Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28371Cu;
        // 0x283720: 0xac600050  sw          $zero, 0x50($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28371Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283724u;
    // 0x283724: 0x0  nop
    ctx->pc = 0x283724u;
    // NOP
    ctx->pc = 0x283728u;
}
