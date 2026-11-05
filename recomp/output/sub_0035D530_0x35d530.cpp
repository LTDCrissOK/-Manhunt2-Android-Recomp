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

// Function: sub_0035D530
// Address: 0x35d530 - 0x35d578
void sub_0035D530_0x35d530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D530_0x35d530");
#endif

    switch (ctx->pc) {
        case 0x35d550u: goto label_35d550;
        case 0x35d560u: goto label_35d560;
        default: break;
    }

    ctx->pc = 0x35d530u;

    // 0x35d530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35d530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35d534: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35d534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35d538: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35d538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35d53c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x35d53cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d540: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35d540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d544: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35d544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35d548: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x35D548u;
    SET_GPR_U32(ctx, 31, 0x35D550u);
    ctx->pc = 0x35D54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D548u;
    // 0x35d54c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x35D548u, 0x35D550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D550u;
label_35d550:
    // 0x35d550: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35d550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d554: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35d554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d558: 0xc0d7508  jal         func_35D420
    ctx->pc = 0x35D558u;
    SET_GPR_U32(ctx, 31, 0x35D560u);
    ctx->pc = 0x35D55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D558u;
    // 0x35d55c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D420u, 0x35D558u, 0x35D560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D560u;
label_35d560:
    // 0x35d560: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x35d560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d564: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35d564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d568: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35d568u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35d56c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35d56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d570: 0x3e00008  jr          $ra
    ctx->pc = 0x35D570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D570u;
        // 0x35d574: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D578u;
}
