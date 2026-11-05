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

// Function: sub_001CF6D8
// Address: 0x1cf6d8 - 0x1cf738
void sub_001CF6D8_0x1cf6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF6D8_0x1cf6d8");
#endif

    switch (ctx->pc) {
        case 0x1cf704u: goto label_1cf704;
        default: break;
    }

    ctx->pc = 0x1cf6d8u;

    // 0x1cf6d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cf6dc: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1cf6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cf6e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf6e4: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x1cf6e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x1cf6e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cf6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cf6ec: 0x8e038a78  lw          $v1, -0x7588($s0)
    ctx->pc = 0x1cf6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F8A78u));
    // 0x1cf6f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cf6f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf6f4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF6F4u;
    {
        const bool branch_taken_0x1cf6f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CF6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6F4u;
        // 0x1cf6f8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf6f4) {
            ctx->pc = 0x1CF704u;
            goto label_1cf704;
        }
    }
    ctx->pc = 0x1CF6FCu;
    // 0x1cf6fc: 0xc073dce  jal         func_1CF738
    ctx->pc = 0x1CF6FCu;
    SET_GPR_U32(ctx, 31, 0x1CF704u);
    ctx->pc = 0x1CF738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF738u, 0x1CF6FCu, 0x1CF704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF704u;
label_1cf704:
    // 0x1cf704: 0x8e028a78  lw          $v0, -0x7588($s0)
    ctx->pc = 0x1cf704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294937208)));
    // 0x1cf708: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1cf708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1cf70c: 0x24638a80  addiu       $v1, $v1, -0x7580
    ctx->pc = 0x1cf70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937216));
    // 0x1cf710: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cf710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf714: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1cf714u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf718: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1cf718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1cf71c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cf71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cf720: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x1cf720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x1cf724: 0xae028a78  sw          $v0, -0x7588($s0)
    ctx->pc = 0x1cf724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294937208), GPR_U32(ctx, 2));
    // 0x1cf728: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf72c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cf72cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf730: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF730u;
        // 0x1cf734: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF738u;
}
