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

// Function: sub_0030CA40
// Address: 0x30ca40 - 0x30ca80
void sub_0030CA40_0x30ca40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030CA40_0x30ca40");
#endif

    switch (ctx->pc) {
        case 0x30ca5cu: goto label_30ca5c;
        case 0x30ca6cu: goto label_30ca6c;
        default: break;
    }

    ctx->pc = 0x30ca40u;

    // 0x30ca40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30ca40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30ca44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30ca44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30ca48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30ca48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30ca4c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x30ca4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ca50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30ca50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30ca54: 0xc0c326a  jal         func_30C9A8
    ctx->pc = 0x30CA54u;
    SET_GPR_U32(ctx, 31, 0x30CA5Cu);
    ctx->pc = 0x30CA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CA54u;
    // 0x30ca58: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C9A8u, 0x30CA54u, 0x30CA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CA5Cu;
label_30ca5c:
    // 0x30ca5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30ca5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ca60: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x30ca60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ca64: 0xc0c327c  jal         func_30C9F0
    ctx->pc = 0x30CA64u;
    SET_GPR_U32(ctx, 31, 0x30CA6Cu);
    ctx->pc = 0x30CA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CA64u;
    // 0x30ca68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C9F0u, 0x30CA64u, 0x30CA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CA6Cu;
label_30ca6c:
    // 0x30ca6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30ca6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30ca70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30ca70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30ca74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30ca74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30ca78: 0x3e00008  jr          $ra
    ctx->pc = 0x30CA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CA78u;
        // 0x30ca7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CA80u;
}
