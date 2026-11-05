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

// Function: sub_0035CDA0
// Address: 0x35cda0 - 0x35cdd0
void sub_0035CDA0_0x35cda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035CDA0_0x35cda0");
#endif

    switch (ctx->pc) {
        case 0x35cdc4u: goto label_35cdc4;
        default: break;
    }

    ctx->pc = 0x35cda0u;

    // 0x35cda0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35cda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35cda4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x35cda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x35cda8: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35CDA8u;
    {
        const bool branch_taken_0x35cda8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x35CDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CDA8u;
        // 0x35cdac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cda8) {
            ctx->pc = 0x35CDC4u;
            goto label_35cdc4;
        }
    }
    ctx->pc = 0x35CDB0u;
    // 0x35cdb0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35CDB0u;
    {
        const bool branch_taken_0x35cdb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CDB0u;
        // 0x35cdb4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cdb0) {
            ctx->pc = 0x35CDC8u;
            goto label_35cdc8;
        }
    }
    ctx->pc = 0x35CDB8u;
    // 0x35cdb8: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x35cdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x35cdbc: 0xc0d700e  jal         func_35C038
    ctx->pc = 0x35CDBCu;
    SET_GPR_U32(ctx, 31, 0x35CDC4u);
    ctx->pc = 0x35CDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CDBCu;
    // 0x35cdc0: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C038u, 0x35CDBCu, 0x35CDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CDC4u;
label_35cdc4:
    // 0x35cdc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35cdc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35cdc8:
    // 0x35cdc8: 0x3e00008  jr          $ra
    ctx->pc = 0x35CDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CDC8u;
        // 0x35cdcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CDC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CDD0u;
}
