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

// Function: sub_002CFE20
// Address: 0x2cfe20 - 0x2cfe68
void sub_002CFE20_0x2cfe20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFE20_0x2cfe20");
#endif

    switch (ctx->pc) {
        case 0x2cfe3cu: goto label_2cfe3c;
        case 0x2cfe4cu: goto label_2cfe4c;
        default: break;
    }

    ctx->pc = 0x2cfe20u;

    // 0x2cfe20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cfe20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cfe24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cfe24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cfe28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cfe28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cfe2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cfe2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfe30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cfe30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cfe34: 0xc0b3f48  jal         func_2CFD20
    ctx->pc = 0x2CFE34u;
    SET_GPR_U32(ctx, 31, 0x2CFE3Cu);
    ctx->pc = 0x2CFE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFE34u;
    // 0x2cfe38: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFD20u, 0x2CFE34u, 0x2CFE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFE3Cu;
label_2cfe3c:
    // 0x2cfe3c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CFE3Cu;
    {
        const bool branch_taken_0x2cfe3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CFE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE3Cu;
        // 0x2cfe40: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfe3c) {
            ctx->pc = 0x2CFE54u;
            goto label_2cfe54;
        }
    }
    ctx->pc = 0x2CFE44u;
    // 0x2cfe44: 0xc0e17f6  jal         func_385FD8
    ctx->pc = 0x2CFE44u;
    SET_GPR_U32(ctx, 31, 0x2CFE4Cu);
    ctx->pc = 0x2CFE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFE44u;
    // 0x2cfe48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385FD8u, 0x2CFE44u, 0x2CFE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFE4Cu;
label_2cfe4c:
    // 0x2cfe4c: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x2cfe4cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2cfe50: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cfe50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cfe54:
    // 0x2cfe54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cfe54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cfe58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cfe58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cfe5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cfe5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfe60: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE60u;
        // 0x2cfe64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFE68u;
}
