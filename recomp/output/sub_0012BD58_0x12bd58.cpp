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

// Function: sub_0012BD58
// Address: 0x12bd58 - 0x12bda0
void sub_0012BD58_0x12bd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BD58_0x12bd58");
#endif

    switch (ctx->pc) {
        case 0x12bd6cu: goto label_12bd6c;
        default: break;
    }

    ctx->pc = 0x12bd58u;

    // 0x12bd58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12bd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12bd5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12bd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12bd60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12bd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12bd64: 0xc04b19a  jal         func_12C668
    ctx->pc = 0x12BD64u;
    SET_GPR_U32(ctx, 31, 0x12BD6Cu);
    ctx->pc = 0x12BD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BD64u;
    // 0x12bd68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C668u, 0x12BD64u, 0x12BD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD6Cu;
label_12bd6c:
    // 0x12bd6c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12bd6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bd70: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x12bd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12bd74: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12BD74u;
    {
        const bool branch_taken_0x12bd74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD74u;
        // 0x12bd78: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd74) {
            ctx->pc = 0x12BD90u;
            goto label_12bd90;
        }
    }
    ctx->pc = 0x12BD7Cu;
    // 0x12bd7c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x12bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12bd80: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x12bd80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12bd84: 0x908300c7  lbu         $v1, 0xC7($a0)
    ctx->pc = 0x12bd84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 199)));
    // 0x12bd88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12bd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12bd8c: 0xa08300c7  sb          $v1, 0xC7($a0)
    ctx->pc = 0x12bd8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 199), (uint8_t)GPR_U32(ctx, 3));
label_12bd90:
    // 0x12bd90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12bd90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bd94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12bd94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12bd98: 0x3e00008  jr          $ra
    ctx->pc = 0x12BD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD98u;
        // 0x12bd9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BDA0u;
}
