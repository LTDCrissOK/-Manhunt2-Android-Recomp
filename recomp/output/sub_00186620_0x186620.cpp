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

// Function: sub_00186620
// Address: 0x186620 - 0x186690
void sub_00186620_0x186620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186620_0x186620");
#endif

    switch (ctx->pc) {
        case 0x186648u: goto label_186648;
        case 0x186654u: goto label_186654;
        default: break;
    }

    ctx->pc = 0x186620u;

    // 0x186620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x186624: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x186624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x186628: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x186628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18662c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18662cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x186630: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x186630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186634: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x186634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x186638: 0x24510888  addiu       $s1, $v0, 0x888
    ctx->pc = 0x186638u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2184));
    // 0x18663c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x18663cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x186640: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x186640u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186644: 0x0  nop
    ctx->pc = 0x186644u;
    // NOP
label_186648:
    // 0x186648: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x186648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18664c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x18664Cu;
    SET_GPR_U32(ctx, 31, 0x186654u);
    ctx->pc = 0x186650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18664Cu;
    // 0x186650: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x18664Cu, 0x186654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186654u;
label_186654:
    // 0x186654: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x186654u;
    {
        const bool branch_taken_0x186654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186654) {
            ctx->pc = 0x186658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186654u;
            // 0x186658: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186664u;
            goto label_186664;
        }
    }
    ctx->pc = 0x18665Cu;
    // 0x18665c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18665Cu;
    {
        const bool branch_taken_0x18665c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18665Cu;
        // 0x186660: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18665c) {
            ctx->pc = 0x186674u;
            goto label_186674;
        }
    }
    ctx->pc = 0x186664u;
label_186664:
    // 0x186664: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x186664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x186668: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x186668u;
    {
        const bool branch_taken_0x186668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186668u;
        // 0x18666c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186668) {
            ctx->pc = 0x186648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186648;
        }
    }
    ctx->pc = 0x186670u;
    // 0x186670: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x186670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186674:
    // 0x186674: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x186674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186678: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x186678u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18667c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18667cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186680: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x186680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x186684: 0x3e00008  jr          $ra
    ctx->pc = 0x186684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186684u;
        // 0x186688: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18668Cu;
    // 0x18668c: 0x0  nop
    ctx->pc = 0x18668cu;
    // NOP
    ctx->pc = 0x186690u;
}
