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

// Function: sub_00261D40
// Address: 0x261d40 - 0x261db0
void sub_00261D40_0x261d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261D40_0x261d40");
#endif

    switch (ctx->pc) {
        case 0x261d68u: goto label_261d68;
        case 0x261d78u: goto label_261d78;
        default: break;
    }

    ctx->pc = 0x261d40u;

    // 0x261d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x261d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x261d44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x261d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x261d48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x261d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x261d4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x261d4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261d50: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x261d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x261d54: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x261d54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261d58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x261d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x261d5c: 0x8e300274  lw          $s0, 0x274($s1)
    ctx->pc = 0x261d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
    // 0x261d60: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x261D60u;
    SET_GPR_U32(ctx, 31, 0x261D68u);
    ctx->pc = 0x261D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261D60u;
    // 0x261d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x261D60u, 0x261D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261D68u;
label_261d68:
    // 0x261d68: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x261D68u;
    {
        const bool branch_taken_0x261d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x261d68) {
            ctx->pc = 0x261D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261D68u;
            // 0x261d6c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261D84u;
            goto label_261d84;
        }
    }
    ctx->pc = 0x261D70u;
    // 0x261d70: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x261D70u;
    SET_GPR_U32(ctx, 31, 0x261D78u);
    ctx->pc = 0x261D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261D70u;
    // 0x261d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x261D70u, 0x261D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261D78u;
label_261d78:
    // 0x261d78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x261d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261d7c: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x261D7Cu;
    {
        const bool branch_taken_0x261d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x261d7c) {
            ctx->pc = 0x261D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261D7Cu;
            // 0x261d80: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261D84u;
            goto label_261d84;
        }
    }
    ctx->pc = 0x261D84u;
label_261d84:
    // 0x261d84: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x261D84u;
    {
        const bool branch_taken_0x261d84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x261D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D84u;
        // 0x261d88: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261d84) {
            ctx->pc = 0x261D98u;
            goto label_261d98;
        }
    }
    ctx->pc = 0x261D8Cu;
    // 0x261d8c: 0x8e220274  lw          $v0, 0x274($s1)
    ctx->pc = 0x261d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
    // 0x261d90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x261d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x261d94: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x261d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_261d98:
    // 0x261d98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x261d98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261d9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x261d9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x261da0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x261da0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261da4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x261da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x261da8: 0x3e00008  jr          $ra
    ctx->pc = 0x261DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261DA8u;
        // 0x261dac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261DB0u;
}
