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

// Function: sub_002D3450
// Address: 0x2d3450 - 0x2d34b0
void sub_002D3450_0x2d3450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3450_0x2d3450");
#endif

    switch (ctx->pc) {
        case 0x2d3480u: goto label_2d3480;
        case 0x2d3490u: goto label_2d3490;
        default: break;
    }

    ctx->pc = 0x2d3450u;

    // 0x2d3450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d3450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d3454: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d3454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d3458: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d3458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d345c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d345cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3460: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d3460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d3464: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d3464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3468: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d3468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d346c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d346cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3470: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D3470u;
    {
        const bool branch_taken_0x2d3470 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3470u;
        // 0x2d3474: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3470) {
            ctx->pc = 0x2D3498u;
            goto label_2d3498;
        }
    }
    ctx->pc = 0x2D3478u;
    // 0x2d3478: 0xc0e55f2  jal         func_3957C8
    ctx->pc = 0x2D3478u;
    SET_GPR_U32(ctx, 31, 0x2D3480u);
    ctx->pc = 0x2D347Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3478u;
    // 0x2d347c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3957C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3957C8u, 0x2D3478u, 0x2D3480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3480u;
label_2d3480:
    // 0x2d3480: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d3480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3484: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d3484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3488: 0xc0e54f4  jal         func_3953D0
    ctx->pc = 0x2D3488u;
    SET_GPR_U32(ctx, 31, 0x2D3490u);
    ctx->pc = 0x2D348Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3488u;
    // 0x2d348c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3953D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3953D0u, 0x2D3488u, 0x2D3490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3490u;
label_2d3490:
    // 0x2d3490: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d3490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3494: 0xa203000c  sb          $v1, 0xC($s0)
    ctx->pc = 0x2d3494u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 3));
label_2d3498:
    // 0x2d3498: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d3498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d349c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d349cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d34a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d34a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d34a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d34a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d34a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D34A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D34ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D34A8u;
        // 0x2d34ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D34A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D34B0u;
}
