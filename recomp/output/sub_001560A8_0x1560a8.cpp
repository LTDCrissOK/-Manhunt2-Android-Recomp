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

// Function: sub_001560A8
// Address: 0x1560a8 - 0x156158
void sub_001560A8_0x1560a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001560A8_0x1560a8");
#endif

    switch (ctx->pc) {
        case 0x1560c0u: goto label_1560c0;
        case 0x156104u: goto label_156104;
        case 0x15611cu: goto label_15611c;
        case 0x156134u: goto label_156134;
        case 0x156140u: goto label_156140;
        default: break;
    }

    ctx->pc = 0x1560a8u;

    // 0x1560a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1560a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1560ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1560acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1560b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1560b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1560b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1560b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1560b8: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x1560B8u;
    SET_GPR_U32(ctx, 31, 0x1560C0u);
    ctx->pc = 0x1560BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1560B8u;
    // 0x1560bc: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x1560B8u, 0x1560C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1560C0u;
label_1560c0:
    // 0x1560c0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1560c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1560c4: 0x1443001f  bne         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1560C4u;
    {
        const bool branch_taken_0x1560c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1560C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560C4u;
        // 0x1560c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1560c4) {
            ctx->pc = 0x156144u;
            goto label_156144;
        }
    }
    ctx->pc = 0x1560CCu;
    // 0x1560cc: 0x8e020520  lw          $v0, 0x520($s0)
    ctx->pc = 0x1560ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1312)));
    // 0x1560d0: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x1560d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1560d4: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x1560d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1560d8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1560D8u;
    {
        const bool branch_taken_0x1560d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1560DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560D8u;
        // 0x1560dc: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1560d8) {
            ctx->pc = 0x156140u;
            goto label_156140;
        }
    }
    ctx->pc = 0x1560E0u;
    // 0x1560e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1560e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1560e4: 0x2442ecc0  addiu       $v0, $v0, -0x1340
    ctx->pc = 0x1560e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962368));
    // 0x1560e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1560e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1560ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1560ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1560f0: 0x800008  jr          $a0
    ctx->pc = 0x1560F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1560F8u: goto label_1560f8;
            case 0x15610Cu: goto label_15610c;
            case 0x156124u: goto label_156124;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1560F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1560F8u;
label_1560f8:
    // 0x1560f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1560f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1560fc: 0xc04da5c  jal         func_136970
    ctx->pc = 0x1560FCu;
    SET_GPR_U32(ctx, 31, 0x156104u);
    ctx->pc = 0x156100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1560FCu;
    // 0x156100: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136970u, 0x1560FCu, 0x156104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156104u;
label_156104:
    // 0x156104: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x156104u;
    {
        const bool branch_taken_0x156104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156104u;
        // 0x156108: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156104) {
            ctx->pc = 0x156144u;
            goto label_156144;
        }
    }
    ctx->pc = 0x15610Cu;
label_15610c:
    // 0x15610c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15610cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156110: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x156110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x156114: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x156114u;
    SET_GPR_U32(ctx, 31, 0x15611Cu);
    ctx->pc = 0x156118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156114u;
    // 0x156118: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x156114u, 0x15611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15611Cu;
label_15611c:
    // 0x15611c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15611Cu;
    {
        const bool branch_taken_0x15611c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15611Cu;
        // 0x156120: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15611c) {
            ctx->pc = 0x156144u;
            goto label_156144;
        }
    }
    ctx->pc = 0x156124u;
label_156124:
    // 0x156124: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x156124u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x156128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15612c: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x15612Cu;
    SET_GPR_U32(ctx, 31, 0x156134u);
    ctx->pc = 0x156130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15612Cu;
    // 0x156130: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x15612Cu, 0x156134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156134u;
label_156134:
    // 0x156134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156138: 0xc055bc4  jal         func_156F10
    ctx->pc = 0x156138u;
    SET_GPR_U32(ctx, 31, 0x156140u);
    ctx->pc = 0x15613Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156138u;
    // 0x15613c: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156F10u, 0x156138u, 0x156140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156140u;
label_156140:
    // 0x156140: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x156140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_156144:
    // 0x156144: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x156144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156148: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x156148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15614c: 0x3e00008  jr          $ra
    ctx->pc = 0x15614Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15614Cu;
        // 0x156150: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15614Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156154u;
    // 0x156154: 0x0  nop
    ctx->pc = 0x156154u;
    // NOP
    ctx->pc = 0x156158u;
}
