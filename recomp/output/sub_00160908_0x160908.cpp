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

// Function: sub_00160908
// Address: 0x160908 - 0x160960
void sub_00160908_0x160908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160908_0x160908");
#endif

    switch (ctx->pc) {
        case 0x160920u: goto label_160920;
        default: break;
    }

    ctx->pc = 0x160908u;

    // 0x160908: 0x908208a4  lbu         $v0, 0x8A4($a0)
    ctx->pc = 0x160908u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2212)));
    // 0x16090c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16090Cu;
    {
        const bool branch_taken_0x16090c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16090Cu;
        // 0x160910: 0x248704a4  addiu       $a3, $a0, 0x4A4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16090c) {
            ctx->pc = 0x160950u;
            goto label_160950;
        }
    }
    ctx->pc = 0x160914u;
    // 0x160914: 0x908608a4  lbu         $a2, 0x8A4($a0)
    ctx->pc = 0x160914u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2212)));
    // 0x160918: 0x908408a6  lbu         $a0, 0x8A6($a0)
    ctx->pc = 0x160918u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2214)));
    // 0x16091c: 0x0  nop
    ctx->pc = 0x16091cu;
    // NOP
label_160920:
    // 0x160920: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x160920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x160924: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x160924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x160928: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x160928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16092c: 0x1065000a  beq         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x16092Cu;
    {
        const bool branch_taken_0x16092c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x160930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16092Cu;
        // 0x160930: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16092c) {
            ctx->pc = 0x160958u;
            goto label_160958;
        }
    }
    ctx->pc = 0x160934u;
    // 0x160934: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x160934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x160938: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x160938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16093c: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x16093cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x160940: 0x38430080  xori        $v1, $v0, 0x80
    ctx->pc = 0x160940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)128);
    // 0x160944: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x160944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160948: 0x14c0fff5  bnez        $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x160948u;
    {
        const bool branch_taken_0x160948 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x16094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160948u;
        // 0x16094c: 0x43200b  movn        $a0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160948) {
            ctx->pc = 0x160920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160920;
        }
    }
    ctx->pc = 0x160950u;
label_160950:
    // 0x160950: 0x3e00008  jr          $ra
    ctx->pc = 0x160950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160950u;
        // 0x160954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160958u;
label_160958:
    // 0x160958: 0x3e00008  jr          $ra
    ctx->pc = 0x160958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160958u;
        // 0x16095c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160960u;
}
