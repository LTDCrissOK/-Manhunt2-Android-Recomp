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

// Function: sub_00161CA8
// Address: 0x161ca8 - 0x161d58
void sub_00161CA8_0x161ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161CA8_0x161ca8");
#endif

    switch (ctx->pc) {
        case 0x161cd0u: goto label_161cd0;
        case 0x161cd4u: goto label_161cd4;
        case 0x161d00u: goto label_161d00;
        case 0x161d14u: goto label_161d14;
        case 0x161d20u: goto label_161d20;
        case 0x161d28u: goto label_161d28;
        default: break;
    }

    ctx->pc = 0x161ca8u;

    // 0x161ca8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x161cac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x161cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x161cb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x161cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x161cb4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x161cb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161cb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x161cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x161cbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x161cbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161cc0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x161cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x161cc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x161CC4u;
    {
        const bool branch_taken_0x161cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161CC4u;
        // 0x161cc8: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161cc4) {
            ctx->pc = 0x161CD8u;
            goto label_161cd8;
        }
    }
    ctx->pc = 0x161CCCu;
    // 0x161ccc: 0x0  nop
    ctx->pc = 0x161cccu;
    // NOP
label_161cd0:
    // 0x161cd0: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x161cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_161cd4:
    // 0x161cd4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x161cd4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_161cd8:
    // 0x161cd8: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x161cd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x161cdc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x161CDCu;
    {
        const bool branch_taken_0x161cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161CDCu;
        // 0x161ce0: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161cdc) {
            ctx->pc = 0x161D40u;
            goto label_161d40;
        }
    }
    ctx->pc = 0x161CE4u;
    // 0x161ce4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x161ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x161ce8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x161ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x161cec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x161cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161cf0: 0x1080fff7  beqz        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x161CF0u;
    {
        const bool branch_taken_0x161cf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x161CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161CF0u;
        // 0x161cf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161cf0) {
            ctx->pc = 0x161CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161cd0;
        }
    }
    ctx->pc = 0x161CF8u;
    // 0x161cf8: 0xc04f1ae  jal         func_13C6B8
    ctx->pc = 0x161CF8u;
    SET_GPR_U32(ctx, 31, 0x161D00u);
    ctx->pc = 0x161CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161CF8u;
    // 0x161cfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C6B8u, 0x161CF8u, 0x161D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161D00u;
label_161d00:
    // 0x161d00: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x161D00u;
    {
        const bool branch_taken_0x161d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D00u;
        // 0x161d04: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161d00) {
            ctx->pc = 0x161D30u;
            goto label_161d30;
        }
    }
    ctx->pc = 0x161D08u;
    // 0x161d08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x161d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161d0c: 0xc058e30  jal         func_1638C0
    ctx->pc = 0x161D0Cu;
    SET_GPR_U32(ctx, 31, 0x161D14u);
    ctx->pc = 0x161D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161D0Cu;
    // 0x161d10: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1638C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1638C0u, 0x161D0Cu, 0x161D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161D14u;
label_161d14:
    // 0x161d14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x161d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161d18: 0xc04f452  jal         func_13D148
    ctx->pc = 0x161D18u;
    SET_GPR_U32(ctx, 31, 0x161D20u);
    ctx->pc = 0x161D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161D18u;
    // 0x161d1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D148u, 0x161D18u, 0x161D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161D20u;
label_161d20:
    // 0x161d20: 0xc04f478  jal         func_13D1E0
    ctx->pc = 0x161D20u;
    SET_GPR_U32(ctx, 31, 0x161D28u);
    ctx->pc = 0x161D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161D20u;
    // 0x161d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D1E0u, 0x161D20u, 0x161D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161D28u;
label_161d28:
    // 0x161d28: 0xae000360  sw          $zero, 0x360($s0)
    ctx->pc = 0x161d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
    // 0x161d2c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x161d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_161d30:
    // 0x161d30: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x161d30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x161d34: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x161d34u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x161d38: 0x1643ffe6  bne         $s2, $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x161D38u;
    {
        const bool branch_taken_0x161d38 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x161D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D38u;
        // 0x161d3c: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161d38) {
            ctx->pc = 0x161CD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161cd4;
        }
    }
    ctx->pc = 0x161D40u;
label_161d40:
    // 0x161d40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x161d40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161d44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x161d44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x161d48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x161d48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161d4c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x161d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x161d50: 0x3e00008  jr          $ra
    ctx->pc = 0x161D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D50u;
        // 0x161d54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161D58u;
}
