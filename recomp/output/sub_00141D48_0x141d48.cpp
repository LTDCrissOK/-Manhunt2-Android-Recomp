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

// Function: sub_00141D48
// Address: 0x141d48 - 0x141d90
void sub_00141D48_0x141d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141D48_0x141d48");
#endif

    switch (ctx->pc) {
        case 0x141d60u: goto label_141d60;
        case 0x141d80u: goto label_141d80;
        default: break;
    }

    ctx->pc = 0x141d48u;

    // 0x141d48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x141d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x141d4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x141d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x141d50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x141d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x141d54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x141d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141d58: 0xc04e866  jal         func_13A198
    ctx->pc = 0x141D58u;
    SET_GPR_U32(ctx, 31, 0x141D60u);
    ctx->pc = 0x141D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141D58u;
    // 0x141d5c: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x141D58u, 0x141D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141D60u;
label_141d60:
    // 0x141d60: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x141d60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141d64: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x141d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x141d68: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x141D68u;
    {
        const bool branch_taken_0x141d68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x141D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141D68u;
        // 0x141d6c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141d68) {
            ctx->pc = 0x141D80u;
            goto label_141d80;
        }
    }
    ctx->pc = 0x141D70u;
    // 0x141d70: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x141D70u;
    {
        const bool branch_taken_0x141d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x141d70) {
            ctx->pc = 0x141D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141D70u;
            // 0x141d74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141D84u;
            goto label_141d84;
        }
    }
    ctx->pc = 0x141D78u;
    // 0x141d78: 0xc050906  jal         func_142418
    ctx->pc = 0x141D78u;
    SET_GPR_U32(ctx, 31, 0x141D80u);
    ctx->pc = 0x141D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141D78u;
    // 0x141d7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142418u, 0x141D78u, 0x141D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141D80u;
label_141d80:
    // 0x141d80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x141d80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_141d84:
    // 0x141d84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x141d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x141d88: 0x3e00008  jr          $ra
    ctx->pc = 0x141D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141D88u;
        // 0x141d8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141D90u;
}
