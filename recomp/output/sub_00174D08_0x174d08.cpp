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

// Function: sub_00174D08
// Address: 0x174d08 - 0x174d88
void sub_00174D08_0x174d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174D08_0x174d08");
#endif

    switch (ctx->pc) {
        case 0x174d20u: goto label_174d20;
        case 0x174d34u: goto label_174d34;
        case 0x174d50u: goto label_174d50;
        case 0x174d64u: goto label_174d64;
        case 0x174d74u: goto label_174d74;
        default: break;
    }

    ctx->pc = 0x174d08u;

    // 0x174d08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x174d0c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x174d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x174d10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d14: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x174d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x174d18: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x174D18u;
    SET_GPR_U32(ctx, 31, 0x174D20u);
    ctx->pc = 0x174D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174D18u;
    // 0x174d1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x174D18u, 0x174D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174D20u;
label_174d20:
    // 0x174d20: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x174d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x174d24: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x174D24u;
    {
        const bool branch_taken_0x174d24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x174d24) {
            ctx->pc = 0x174D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174D24u;
            // 0x174d28: 0x8e0500d0  lw          $a1, 0xD0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174D40u;
            goto label_174d40;
        }
    }
    ctx->pc = 0x174D2Cu;
    // 0x174d2c: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x174D2Cu;
    SET_GPR_U32(ctx, 31, 0x174D34u);
    ctx->pc = 0x174D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174D2Cu;
    // 0x174d30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x174D2Cu, 0x174D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174D34u;
label_174d34:
    // 0x174d34: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x174D34u;
    {
        const bool branch_taken_0x174d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D34u;
        // 0x174d38: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d34) {
            ctx->pc = 0x174D6Cu;
            goto label_174d6c;
        }
    }
    ctx->pc = 0x174D3Cu;
    // 0x174d3c: 0x8e0500d0  lw          $a1, 0xD0($s0)
    ctx->pc = 0x174d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_174d40:
    // 0x174d40: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x174D40u;
    {
        const bool branch_taken_0x174d40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x174D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D40u;
        // 0x174d44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d40) {
            ctx->pc = 0x174D6Cu;
            goto label_174d6c;
        }
    }
    ctx->pc = 0x174D48u;
    // 0x174d48: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x174D48u;
    SET_GPR_U32(ctx, 31, 0x174D50u);
    ctx->pc = 0x174D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174D48u;
    // 0x174d4c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x174D48u, 0x174D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174D50u;
label_174d50:
    // 0x174d50: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x174D50u;
    {
        const bool branch_taken_0x174d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D50u;
        // 0x174d54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d50) {
            ctx->pc = 0x174D6Cu;
            goto label_174d6c;
        }
    }
    ctx->pc = 0x174D58u;
    // 0x174d58: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x174d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x174d5c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x174D5Cu;
    SET_GPR_U32(ctx, 31, 0x174D64u);
    ctx->pc = 0x174D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174D5Cu;
    // 0x174d60: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x174D5Cu, 0x174D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174D64u;
label_174d64:
    // 0x174d64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x174D64u;
    {
        const bool branch_taken_0x174d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D64u;
        // 0x174d68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d64) {
            ctx->pc = 0x174D78u;
            goto label_174d78;
        }
    }
    ctx->pc = 0x174D6Cu;
label_174d6c:
    // 0x174d6c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x174D6Cu;
    SET_GPR_U32(ctx, 31, 0x174D74u);
    ctx->pc = 0x174D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174D6Cu;
    // 0x174d70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x174D6Cu, 0x174D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174D74u;
label_174d74:
    // 0x174d74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x174d74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174d78:
    // 0x174d78: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x174d78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174d7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x174d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174d80: 0x3e00008  jr          $ra
    ctx->pc = 0x174D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D80u;
        // 0x174d84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174D88u;
}
