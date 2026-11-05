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

// Function: sub_003369D0
// Address: 0x3369d0 - 0x336a18
void sub_003369D0_0x3369d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003369D0_0x3369d0");
#endif

    switch (ctx->pc) {
        case 0x3369ecu: goto label_3369ec;
        case 0x3369fcu: goto label_3369fc;
        default: break;
    }

    ctx->pc = 0x3369d0u;

    // 0x3369d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3369d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3369d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3369d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3369d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3369d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3369dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3369dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3369e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3369e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3369e4: 0xc0cd984  jal         func_336610
    ctx->pc = 0x3369E4u;
    SET_GPR_U32(ctx, 31, 0x3369ECu);
    ctx->pc = 0x3369E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3369E4u;
    // 0x3369e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336610u, 0x3369E4u, 0x3369ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3369ECu;
label_3369ec:
    // 0x3369ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3369ECu;
    {
        const bool branch_taken_0x3369ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3369F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3369ECu;
        // 0x3369f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3369ec) {
            ctx->pc = 0x336A00u;
            goto label_336a00;
        }
    }
    ctx->pc = 0x3369F4u;
    // 0x3369f4: 0xc0cd680  jal         func_335A00
    ctx->pc = 0x3369F4u;
    SET_GPR_U32(ctx, 31, 0x3369FCu);
    ctx->pc = 0x3369F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3369F4u;
    // 0x3369f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335A00u, 0x3369F4u, 0x3369FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3369FCu;
label_3369fc:
    // 0x3369fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3369fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_336a00:
    // 0x336a00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x336a00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336a04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x336a04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x336a08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x336a08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336a0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x336a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336a10: 0x3e00008  jr          $ra
    ctx->pc = 0x336A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336A10u;
        // 0x336a14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336A18u;
}
