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

// Function: sub_003AE518
// Address: 0x3ae518 - 0x3ae558
void sub_003AE518_0x3ae518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE518_0x3ae518");
#endif

    switch (ctx->pc) {
        case 0x3ae540u: goto label_3ae540;
        default: break;
    }

    ctx->pc = 0x3ae518u;

    // 0x3ae518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ae518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ae51c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3ae51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ae520: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ae520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ae524: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ae524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae528: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3ae528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3ae52c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3ae52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3ae530: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AE530u;
    {
        const bool branch_taken_0x3ae530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ae530) {
            ctx->pc = 0x3AE534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE530u;
            // 0x3ae534: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE54Cu;
            goto label_3ae54c;
        }
    }
    ctx->pc = 0x3AE538u;
    // 0x3ae538: 0xc0ec44e  jal         func_3B1138
    ctx->pc = 0x3AE538u;
    SET_GPR_U32(ctx, 31, 0x3AE540u);
    ctx->pc = 0x3AE53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE538u;
    // 0x3ae53c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1138u, 0x3AE538u, 0x3AE540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE540u;
label_3ae540:
    // 0x3ae540: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x3ae540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x3ae544: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3ae544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x3ae548: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ae548u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ae54c:
    // 0x3ae54c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3ae54cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ae550: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE550u;
        // 0x3ae554: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE558u;
}
