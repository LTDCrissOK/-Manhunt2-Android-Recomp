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

// Function: sub_0014B7F0
// Address: 0x14b7f0 - 0x14b8c8
void sub_0014B7F0_0x14b7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B7F0_0x14b7f0");
#endif

    switch (ctx->pc) {
        case 0x14b81cu: goto label_14b81c;
        case 0x14b830u: goto label_14b830;
        case 0x14b860u: goto label_14b860;
        default: break;
    }

    ctx->pc = 0x14b7f0u;

    // 0x14b7f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14b7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14b7f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14b7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14b7f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14b7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14b7fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14b7fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b800: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14b800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14b804: 0x92230621  lbu         $v1, 0x621($s1)
    ctx->pc = 0x14b804u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1569)));
    // 0x14b808: 0x92220620  lbu         $v0, 0x620($s1)
    ctx->pc = 0x14b808u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1568)));
    // 0x14b80c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14B80Cu;
    {
        const bool branch_taken_0x14b80c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14b80c) {
            ctx->pc = 0x14B810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B80Cu;
            // 0x14b810: 0x92300620  lbu         $s0, 0x620($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B820u;
            goto label_14b820;
        }
    }
    ctx->pc = 0x14B814u;
    // 0x14b814: 0xc052df0  jal         func_14B7C0
    ctx->pc = 0x14B814u;
    SET_GPR_U32(ctx, 31, 0x14B81Cu);
    ctx->pc = 0x14B7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B7C0u, 0x14B814u, 0x14B81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B81Cu;
label_14b81c:
    // 0x14b81c: 0x92300620  lbu         $s0, 0x620($s1)
    ctx->pc = 0x14b81cu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1568)));
label_14b820:
    // 0x14b820: 0x92220621  lbu         $v0, 0x621($s1)
    ctx->pc = 0x14b820u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1569)));
    // 0x14b824: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x14b824u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14b828: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x14B828u;
    SET_GPR_U32(ctx, 31, 0x14B830u);
    ctx->pc = 0x14B82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B828u;
    // 0x14b82c: 0x321000ff  andi        $s0, $s0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x14B828u, 0x14B830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B830u;
label_14b830:
    // 0x14b830: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x14b830u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x14b834: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14B834u;
    {
        const bool branch_taken_0x14b834 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b834) {
            ctx->pc = 0x14B838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B834u;
            // 0x14b838: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B83Cu;
            goto label_14b83c;
        }
    }
    ctx->pc = 0x14B83Cu;
label_14b83c:
    // 0x14b83c: 0x92220620  lbu         $v0, 0x620($s1)
    ctx->pc = 0x14b83cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1568)));
    // 0x14b840: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14b840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b844: 0x1810  mfhi        $v1
    ctx->pc = 0x14b844u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x14b848: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x14B848u;
    {
        const bool branch_taken_0x14b848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B848u;
        // 0x14b84c: 0x306600ff  andi        $a2, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b848) {
            ctx->pc = 0x14B8B0u;
            goto label_14b8b0;
        }
    }
    ctx->pc = 0x14B850u;
    // 0x14b850: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x14b850u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b854: 0x262705a0  addiu       $a3, $s1, 0x5A0
    ctx->pc = 0x14b854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1440));
    // 0x14b858: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x14b858u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x14b85c: 0x0  nop
    ctx->pc = 0x14b85cu;
    // NOP
label_14b860:
    // 0x14b860: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x14b860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x14b864: 0x8c4305a4  lw          $v1, 0x5A4($v0)
    ctx->pc = 0x14b864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1444)));
    // 0x14b868: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x14B868u;
    {
        const bool branch_taken_0x14b868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B868u;
        // 0x14b86c: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b868) {
            ctx->pc = 0x14B89Cu;
            goto label_14b89c;
        }
    }
    ctx->pc = 0x14B870u;
    // 0x14b870: 0x54c00008  bnel        $a2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x14B870u;
    {
        const bool branch_taken_0x14b870 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b870) {
            ctx->pc = 0x14B874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B870u;
            // 0x14b874: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B894u;
            goto label_14b894;
        }
    }
    ctx->pc = 0x14B878u;
    // 0x14b878: 0xac4805a4  sw          $t0, 0x5A4($v0)
    ctx->pc = 0x14b878u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1444), GPR_U32(ctx, 8));
    // 0x14b87c: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x14b87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x14b880: 0x92230621  lbu         $v1, 0x621($s1)
    ctx->pc = 0x14b880u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1569)));
    // 0x14b884: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14b884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14b888: 0xa2230621  sb          $v1, 0x621($s1)
    ctx->pc = 0x14b888u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1569), (uint8_t)GPR_U32(ctx, 3));
    // 0x14b88c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14B88Cu;
    {
        const bool branch_taken_0x14b88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B88Cu;
        // 0x14b890: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b88c) {
            ctx->pc = 0x14B8B4u;
            goto label_14b8b4;
        }
    }
    ctx->pc = 0x14B894u;
label_14b894:
    // 0x14b894: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x14b894u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14b898: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x14b898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_14b89c:
    // 0x14b89c: 0x92220620  lbu         $v0, 0x620($s1)
    ctx->pc = 0x14b89cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1568)));
    // 0x14b8a0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x14b8a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14b8a4: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x14b8a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14b8a8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x14B8A8u;
    {
        const bool branch_taken_0x14b8a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B8A8u;
        // 0x14b8ac: 0x520c0  sll         $a0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b8a8) {
            ctx->pc = 0x14B860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b860;
        }
    }
    ctx->pc = 0x14B8B0u;
label_14b8b0:
    // 0x14b8b0: 0x8e220560  lw          $v0, 0x560($s1)
    ctx->pc = 0x14b8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
label_14b8b4:
    // 0x14b8b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14b8b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b8b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14b8b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14b8bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14b8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x14B8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B8C0u;
        // 0x14b8c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B8C8u;
}
