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

// Function: sub_002D3500
// Address: 0x2d3500 - 0x2d3548
void sub_002D3500_0x2d3500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3500_0x2d3500");
#endif

    switch (ctx->pc) {
        case 0x2d3528u: goto label_2d3528;
        default: break;
    }

    ctx->pc = 0x2d3500u;

    // 0x2d3500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d3500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d3504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d3504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d3508: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d3508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d350c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2D350Cu;
    {
        const bool branch_taken_0x2d350c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D350Cu;
        // 0x2d3510: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d350c) {
            ctx->pc = 0x2D353Cu;
            goto label_2d353c;
        }
    }
    ctx->pc = 0x2D3514u;
    // 0x2d3514: 0x9082000c  lbu         $v0, 0xC($a0)
    ctx->pc = 0x2d3514u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d3518: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D3518u;
    {
        const bool branch_taken_0x2d3518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3518) {
            ctx->pc = 0x2D351Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3518u;
            // 0x2d351c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D353Cu;
            goto label_2d353c;
        }
    }
    ctx->pc = 0x2D3520u;
    // 0x2d3520: 0xc0e56a4  jal         func_395A90
    ctx->pc = 0x2D3520u;
    SET_GPR_U32(ctx, 31, 0x2D3528u);
    ctx->pc = 0x2D3524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3520u;
    // 0x2d3524: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395A90u, 0x2D3520u, 0x2D3528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3528u;
label_2d3528:
    // 0x2d3528: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d3528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d352c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d352cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d3530: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D3530u;
    {
        const bool branch_taken_0x2d3530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D3534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3530u;
        // 0x2d3534: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3530) {
            ctx->pc = 0x2D353Cu;
            goto label_2d353c;
        }
    }
    ctx->pc = 0x2D3538u;
    // 0x2d3538: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d3538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d353c:
    // 0x2d353c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d353cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3540: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3540u;
        // 0x2d3544: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3548u;
}
