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

// Function: sub_003E8508
// Address: 0x3e8508 - 0x3e8550
void sub_003E8508_0x3e8508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8508_0x3e8508");
#endif

    switch (ctx->pc) {
        case 0x3e852cu: goto label_3e852c;
        case 0x3e8538u: goto label_3e8538;
        default: break;
    }

    ctx->pc = 0x3e8508u;

    // 0x3e8508: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e8508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e850c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e850cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e8510: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e8510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e8514: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e8514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8518: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e8518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e851c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e851cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e8520: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3e8520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3e8524: 0xc0b0336  jal         func_2C0CD8
    ctx->pc = 0x3E8524u;
    SET_GPR_U32(ctx, 31, 0x3E852Cu);
    ctx->pc = 0x3E8528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8524u;
    // 0x3e8528: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0CD8u, 0x3E8524u, 0x3E852Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E852Cu;
label_3e852c:
    // 0x3e852c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e852cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8530: 0xc0af77e  jal         func_2BDDF8
    ctx->pc = 0x3E8530u;
    SET_GPR_U32(ctx, 31, 0x3E8538u);
    ctx->pc = 0x3E8534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8530u;
    // 0x3e8534: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDF8u, 0x3E8530u, 0x3E8538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8538u;
label_3e8538:
    // 0x3e8538: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e8538u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e853c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e853cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e8540: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e8540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e8544: 0x3e00008  jr          $ra
    ctx->pc = 0x3E8544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8544u;
        // 0x3e8548: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E854Cu;
    // 0x3e854c: 0x0  nop
    ctx->pc = 0x3e854cu;
    // NOP
    ctx->pc = 0x3e8550u;
}
