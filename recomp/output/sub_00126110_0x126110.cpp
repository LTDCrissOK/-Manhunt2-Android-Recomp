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

// Function: sub_00126110
// Address: 0x126110 - 0x126158
void sub_00126110_0x126110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126110_0x126110");
#endif

    switch (ctx->pc) {
        case 0x126124u: goto label_126124;
        default: break;
    }

    ctx->pc = 0x126110u;

    // 0x126110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x126110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x126114: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x126114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x126118: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x126118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12611c: 0xc049f1a  jal         func_127C68
    ctx->pc = 0x12611Cu;
    SET_GPR_U32(ctx, 31, 0x126124u);
    ctx->pc = 0x126120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12611Cu;
    // 0x126120: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C68u, 0x12611Cu, 0x126124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126124u;
label_126124:
    // 0x126124: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x126124u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126128: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x126128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12612c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12612Cu;
    {
        const bool branch_taken_0x12612c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x126130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12612Cu;
        // 0x126130: 0x31180  sll         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12612c) {
            ctx->pc = 0x126140u;
            goto label_126140;
        }
    }
    ctx->pc = 0x126134u;
    // 0x126134: 0x24420870  addiu       $v0, $v0, 0x870
    ctx->pc = 0x126134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2160));
    // 0x126138: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x126138u;
    {
        const bool branch_taken_0x126138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126138u;
        // 0x12613c: 0x2021021  addu        $v0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126138) {
            ctx->pc = 0x126144u;
            goto label_126144;
        }
    }
    ctx->pc = 0x126140u;
label_126140:
    // 0x126140: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x126140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126144:
    // 0x126144: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x126144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126148: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x126148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12614c: 0x3e00008  jr          $ra
    ctx->pc = 0x12614Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12614Cu;
        // 0x126150: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12614Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126154u;
    // 0x126154: 0x0  nop
    ctx->pc = 0x126154u;
    // NOP
    ctx->pc = 0x126158u;
}
