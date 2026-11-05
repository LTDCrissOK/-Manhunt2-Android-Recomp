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

// Function: sub_00115D10
// Address: 0x115d10 - 0x115d74
void sub_00115D10_0x115d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115D10_0x115d10");
#endif

    switch (ctx->pc) {
        case 0x115d10u: goto label_115d10;
        case 0x115d14u: goto label_115d14;
        case 0x115d18u: goto label_115d18;
        case 0x115d1cu: goto label_115d1c;
        case 0x115d20u: goto label_115d20;
        case 0x115d24u: goto label_115d24;
        case 0x115d28u: goto label_115d28;
        case 0x115d2cu: goto label_115d2c;
        case 0x115d30u: goto label_115d30;
        case 0x115d34u: goto label_115d34;
        case 0x115d38u: goto label_115d38;
        case 0x115d3cu: goto label_115d3c;
        case 0x115d40u: goto label_115d40;
        case 0x115d44u: goto label_115d44;
        case 0x115d48u: goto label_115d48;
        case 0x115d4cu: goto label_115d4c;
        case 0x115d50u: goto label_115d50;
        case 0x115d54u: goto label_115d54;
        case 0x115d58u: goto label_115d58;
        case 0x115d5cu: goto label_115d5c;
        case 0x115d60u: goto label_115d60;
        case 0x115d64u: goto label_115d64;
        case 0x115d68u: goto label_115d68;
        case 0x115d6cu: goto label_115d6c;
        case 0x115d70u: goto label_115d70;
        default: break;
    }

    ctx->pc = 0x115d10u;

label_115d10:
    // 0x115d10: 0x24840044  addiu       $a0, $a0, 0x44
    ctx->pc = 0x115d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
label_115d14:
    // 0x115d14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x115d14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115d18:
    // 0x115d18: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x115d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_115d1c:
    // 0x115d1c: 0x0  nop
    ctx->pc = 0x115d1cu;
    // NOP
label_115d20:
    // 0x115d20: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x115d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_115d24:
    // 0x115d24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x115d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_115d28:
    // 0x115d28: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
label_115d2c:
    if (ctx->pc == 0x115D2Cu) {
        ctx->pc = 0x115D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D28u;
        // 0x115d2c: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115D30u;
        goto label_115d30;
    }
    ctx->pc = 0x115D28u;
    {
        const bool branch_taken_0x115d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x115D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D28u;
        // 0x115d2c: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115d28) {
            ctx->pc = 0x115D38u;
            goto label_115d38;
        }
    }
    ctx->pc = 0x115D30u;
label_115d30:
    // 0x115d30: 0x3e00008  jr          $ra
label_115d34:
    if (ctx->pc == 0x115D34u) {
        ctx->pc = 0x115D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D30u;
        // 0x115d34: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115D38u;
        goto label_115d38;
    }
    ctx->pc = 0x115D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D30u;
        // 0x115d34: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115D38u;
label_115d38:
    // 0x115d38: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x115d38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_115d3c:
    // 0x115d3c: 0x2cc3000c  sltiu       $v1, $a2, 0xC
    ctx->pc = 0x115d3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_115d40:
    // 0x115d40: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_115d44:
    if (ctx->pc == 0x115D44u) {
        ctx->pc = 0x115D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D40u;
        // 0x115d44: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115D48u;
        goto label_115d48;
    }
    ctx->pc = 0x115D40u;
    {
        const bool branch_taken_0x115d40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x115D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D40u;
        // 0x115d44: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115d40) {
            ctx->pc = 0x115D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115d20;
        }
    }
    ctx->pc = 0x115D48u;
label_115d48:
    // 0x115d48: 0x3e00008  jr          $ra
label_115d4c:
    if (ctx->pc == 0x115D4Cu) {
        ctx->pc = 0x115D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D48u;
        // 0x115d4c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115D50u;
        goto label_115d50;
    }
    ctx->pc = 0x115D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D48u;
        // 0x115d4c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115D50u;
label_115d50:
    // 0x115d50: 0x2ca2000f  sltiu       $v0, $a1, 0xF
    ctx->pc = 0x115d50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_115d54:
    // 0x115d54: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_115d58:
    if (ctx->pc == 0x115D58u) {
        ctx->pc = 0x115D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D54u;
        // 0x115d58: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115D5Cu;
        goto label_115d5c;
    }
    ctx->pc = 0x115D54u;
    {
        const bool branch_taken_0x115d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D54u;
        // 0x115d58: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115d54) {
            ctx->pc = 0x115D9Cu;
            return;
        }
    }
    ctx->pc = 0x115D5Cu;
label_115d5c:
    // 0x115d5c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x115d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_115d60:
    // 0x115d60: 0x2442b050  addiu       $v0, $v0, -0x4FB0
    ctx->pc = 0x115d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946896));
label_115d64:
    // 0x115d64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x115d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_115d68:
    // 0x115d68: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x115d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_115d6c:
    // 0x115d6c: 0x800008  jr          $a0
label_115d70:
    if (ctx->pc == 0x115D70u) {
        ctx->pc = 0x115D74u;
        goto label_fallthrough_0x115d6c;
    }
    ctx->pc = 0x115D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115D6Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x115d6c:
    ctx->pc = 0x115D74u;
}
