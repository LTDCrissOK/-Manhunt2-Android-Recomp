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

// Function: sub_003704A8
// Address: 0x3704a8 - 0x3705e8
void sub_003704A8_0x3704a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003704A8_0x3704a8");
#endif

    switch (ctx->pc) {
        case 0x3704d0u: goto label_3704d0;
        case 0x370520u: goto label_370520;
        case 0x370540u: goto label_370540;
        case 0x3705b0u: goto label_3705b0;
        default: break;
    }

    ctx->pc = 0x3704a8u;

    // 0x3704a8: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x3704a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3704ac: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x3704acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x3704b0: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x3704b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x3704b4: 0xc33821  addu        $a3, $a2, $v1
    ctx->pc = 0x3704b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3704b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3704b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3704bc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3704bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3704c0: 0x10e2000d  beq         $a3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3704C0u;
    {
        const bool branch_taken_0x3704c0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3704C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3704C0u;
        // 0x3704c4: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3704c0) {
            ctx->pc = 0x3704F8u;
            goto label_3704f8;
        }
    }
    ctx->pc = 0x3704C8u;
    // 0x3704c8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3704c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3704cc: 0x0  nop
    ctx->pc = 0x3704ccu;
    // NOP
label_3704d0:
    // 0x3704d0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3704d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x3704d4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3704d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3704d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3704d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3704dc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3704dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3704e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3704e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3704e4: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x3704e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x3704e8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3704e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3704ec: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x3704ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x3704f0: 0x54e4fff7  bnel        $a3, $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3704F0u;
    {
        const bool branch_taken_0x3704f0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        if (branch_taken_0x3704f0) {
            ctx->pc = 0x3704F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3704F0u;
            // 0x3704f4: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3704D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3704d0;
        }
    }
    ctx->pc = 0x3704F8u;
label_3704f8:
    // 0x3704f8: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x3704f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x3704fc: 0x94a2001c  lhu         $v0, 0x1C($a1)
    ctx->pc = 0x3704fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x370500: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x370500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x370504: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x370504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x370508: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x370508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x37050c: 0x10c2001c  beq         $a2, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x37050Cu;
    {
        const bool branch_taken_0x37050c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x370510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37050Cu;
        // 0x370510: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37050c) {
            ctx->pc = 0x370580u;
            goto label_370580;
        }
    }
    ctx->pc = 0x370514u;
    // 0x370514: 0x3c0b005c  lui         $t3, 0x5C
    ctx->pc = 0x370514u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)92 << 16));
    // 0x370518: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x370518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x37051c: 0x0  nop
    ctx->pc = 0x37051cu;
    // NOP
label_370520:
    // 0x370520: 0x24e90004  addiu       $t1, $a3, 0x4
    ctx->pc = 0x370520u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x370524: 0x8d64f710  lw          $a0, -0x8F0($t3)
    ctx->pc = 0x370524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294965008)));
    // 0x370528: 0x2568f710  addiu       $t0, $t3, -0x8F0
    ctx->pc = 0x370528u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 4294965008));
    // 0x37052c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x37052cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x370530: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x370530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x370534: 0x10670008  beq         $v1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x370534u;
    {
        const bool branch_taken_0x370534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x370538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370534u;
        // 0x370538: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370534) {
            ctx->pc = 0x370558u;
            goto label_370558;
        }
    }
    ctx->pc = 0x37053Cu;
    // 0x37053c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x37053cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_370540:
    // 0x370540: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x370540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x370544: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x370544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x370548: 0x0  nop
    ctx->pc = 0x370548u;
    // NOP
    // 0x37054c: 0x0  nop
    ctx->pc = 0x37054cu;
    // NOP
    // 0x370550: 0x5467fffb  bnel        $v1, $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x370550u;
    {
        const bool branch_taken_0x370550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x370550) {
            ctx->pc = 0x370554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x370550u;
            // 0x370554: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x370540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_370540;
        }
    }
    ctx->pc = 0x370558u;
label_370558:
    // 0x370558: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x370558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x37055c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x37055cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370560: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x370560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x370564: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x370564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x370568: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x370568u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x37056c: 0x94a2001c  lhu         $v0, 0x1C($a1)
    ctx->pc = 0x37056cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x370570: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x370570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x370574: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x370574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x370578: 0x54e2ffe9  bnel        $a3, $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x370578u;
    {
        const bool branch_taken_0x370578 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x370578) {
            ctx->pc = 0x37057Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x370578u;
            // 0x37057c: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x370520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_370520;
        }
    }
    ctx->pc = 0x370580u;
label_370580:
    // 0x370580: 0x94a2001c  lhu         $v0, 0x1C($a1)
    ctx->pc = 0x370580u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x370584: 0x94a3001e  lhu         $v1, 0x1E($a1)
    ctx->pc = 0x370584u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x370588: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x370588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37058c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x37058cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x370590: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x370590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x370594: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x370594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x370598: 0x10c30010  beq         $a2, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x370598u;
    {
        const bool branch_taken_0x370598 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x37059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370598u;
        // 0x37059c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370598) {
            ctx->pc = 0x3705DCu;
            goto label_3705dc;
        }
    }
    ctx->pc = 0x3705A0u;
    // 0x3705a0: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x3705a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x3705a4: 0x2448f790  addiu       $t0, $v0, -0x870
    ctx->pc = 0x3705a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965136));
    // 0x3705a8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x3705a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3705ac: 0x0  nop
    ctx->pc = 0x3705acu;
    // NOP
label_3705b0:
    // 0x3705b0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3705b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3705b4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3705b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3705b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3705b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3705bc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x3705bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3705c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3705c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3705c4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3705c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3705c8: 0x94a2001e  lhu         $v0, 0x1E($a1)
    ctx->pc = 0x3705c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x3705cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3705ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3705d0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3705d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3705d4: 0x54c2fff6  bnel        $a2, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3705D4u;
    {
        const bool branch_taken_0x3705d4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x3705d4) {
            ctx->pc = 0x3705D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3705D4u;
            // 0x3705d8: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3705B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3705b0;
        }
    }
    ctx->pc = 0x3705DCu;
label_3705dc:
    // 0x3705dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3705DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3705DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3705E4u;
    // 0x3705e4: 0x0  nop
    ctx->pc = 0x3705e4u;
    // NOP
    ctx->pc = 0x3705e8u;
}
