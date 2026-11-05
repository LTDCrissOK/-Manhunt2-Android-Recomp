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

// Function: sub_00160960
// Address: 0x160960 - 0x1609b8
void sub_00160960_0x160960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160960_0x160960");
#endif

    switch (ctx->pc) {
        case 0x160978u: goto label_160978;
        default: break;
    }

    ctx->pc = 0x160960u;

    // 0x160960: 0x908204a0  lbu         $v0, 0x4A0($a0)
    ctx->pc = 0x160960u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1184)));
    // 0x160964: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x160964u;
    {
        const bool branch_taken_0x160964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160964u;
        // 0x160968: 0x24870320  addiu       $a3, $a0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160964) {
            ctx->pc = 0x1609A8u;
            goto label_1609a8;
        }
    }
    ctx->pc = 0x16096Cu;
    // 0x16096c: 0x908604a0  lbu         $a2, 0x4A0($a0)
    ctx->pc = 0x16096cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1184)));
    // 0x160970: 0x908404a2  lbu         $a0, 0x4A2($a0)
    ctx->pc = 0x160970u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1186)));
    // 0x160974: 0x0  nop
    ctx->pc = 0x160974u;
    // NOP
label_160978:
    // 0x160978: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x160978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16097c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x16097cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x160980: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x160980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160984: 0x1065000a  beq         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x160984u;
    {
        const bool branch_taken_0x160984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x160988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160984u;
        // 0x160988: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160984) {
            ctx->pc = 0x1609B0u;
            goto label_1609b0;
        }
    }
    ctx->pc = 0x16098Cu;
    // 0x16098c: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x16098cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x160990: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x160990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x160994: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x160994u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x160998: 0x38430030  xori        $v1, $v0, 0x30
    ctx->pc = 0x160998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)48);
    // 0x16099c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16099cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1609a0: 0x14c0fff5  bnez        $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x1609A0u;
    {
        const bool branch_taken_0x1609a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1609A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609A0u;
        // 0x1609a4: 0x43200b  movn        $a0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1609a0) {
            ctx->pc = 0x160978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160978;
        }
    }
    ctx->pc = 0x1609A8u;
label_1609a8:
    // 0x1609a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1609A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1609ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609A8u;
        // 0x1609ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1609A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1609B0u;
label_1609b0:
    // 0x1609b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1609B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1609B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609B0u;
        // 0x1609b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1609B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1609B8u;
}
