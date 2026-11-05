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

// Function: sub_0010AD00
// Address: 0x10ad00 - 0x10ad48
void sub_0010AD00_0x10ad00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AD00_0x10ad00");
#endif

    switch (ctx->pc) {
        case 0x10ad14u: goto label_10ad14;
        default: break;
    }

    ctx->pc = 0x10ad00u;

    // 0x10ad00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10ad00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10ad04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ad04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ad08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10ad08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10ad0c: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10AD0Cu;
    SET_GPR_U32(ctx, 31, 0x10AD14u);
    ctx->pc = 0x10AD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AD0Cu;
    // 0x10ad10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10AD0Cu, 0x10AD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AD14u;
label_10ad14:
    // 0x10ad14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10ad14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10ad18: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x10ad18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10ad1c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10ad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10ad20: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x10ad20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x10ad24: 0x8c4300d0  lw          $v1, 0xD0($v0)
    ctx->pc = 0x10ad24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x10ad28: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10AD28u;
    {
        const bool branch_taken_0x10ad28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ad28) {
            ctx->pc = 0x10AD2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AD28u;
            // 0x10ad2c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10AD38u;
            goto label_10ad38;
        }
    }
    ctx->pc = 0x10AD30u;
    // 0x10ad30: 0x8c420100  lw          $v0, 0x100($v0)
    ctx->pc = 0x10ad30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x10ad34: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10ad34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10ad38:
    // 0x10ad38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ad38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ad3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10ad3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10ad40: 0x3e00008  jr          $ra
    ctx->pc = 0x10AD40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD40u;
        // 0x10ad44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AD40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AD48u;
}
