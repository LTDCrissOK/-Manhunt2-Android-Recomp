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

// Function: sub_0012CD90
// Address: 0x12cd90 - 0x12cdc0
void sub_0012CD90_0x12cd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012CD90_0x12cd90");
#endif

    switch (ctx->pc) {
        case 0x12cdb4u: goto label_12cdb4;
        default: break;
    }

    ctx->pc = 0x12cd90u;

    // 0x12cd90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12cd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12cd94: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x12cd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12cd98: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12CD98u;
    {
        const bool branch_taken_0x12cd98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x12CD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CD98u;
        // 0x12cd9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cd98) {
            ctx->pc = 0x12CDB4u;
            goto label_12cdb4;
        }
    }
    ctx->pc = 0x12CDA0u;
    // 0x12cda0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12CDA0u;
    {
        const bool branch_taken_0x12cda0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CDA0u;
        // 0x12cda4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cda0) {
            ctx->pc = 0x12CDB8u;
            goto label_12cdb8;
        }
    }
    ctx->pc = 0x12CDA8u;
    // 0x12cda8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x12cda8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x12cdac: 0xc04b28a  jal         func_12CA28
    ctx->pc = 0x12CDACu;
    SET_GPR_U32(ctx, 31, 0x12CDB4u);
    ctx->pc = 0x12CDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CDACu;
    // 0x12cdb0: 0x2484b530  addiu       $a0, $a0, -0x4AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CA28u, 0x12CDACu, 0x12CDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CDB4u;
label_12cdb4:
    // 0x12cdb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12cdb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12cdb8:
    // 0x12cdb8: 0x3e00008  jr          $ra
    ctx->pc = 0x12CDB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CDB8u;
        // 0x12cdbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CDB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CDC0u;
}
