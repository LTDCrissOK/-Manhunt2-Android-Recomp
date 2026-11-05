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

// Function: sub_00304B50
// Address: 0x304b50 - 0x304ba8
void sub_00304B50_0x304b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304B50_0x304b50");
#endif

    switch (ctx->pc) {
        case 0x304b74u: goto label_304b74;
        default: break;
    }

    ctx->pc = 0x304b50u;

    // 0x304b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x304b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x304b54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x304b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x304b58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x304b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x304b5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x304b5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304b60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x304b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x304b64: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x304b64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x304b68: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x304b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x304b6c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x304B6Cu;
    SET_GPR_U32(ctx, 31, 0x304B74u);
    ctx->pc = 0x304B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304B6Cu;
    // 0x304b70: 0x2028023  subu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x304B6Cu, 0x304B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304B74u;
label_304b74:
    // 0x304b74: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x304b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x304b78: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x304B78u;
    {
        const bool branch_taken_0x304b78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x304b78) {
            ctx->pc = 0x304B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304B78u;
            // 0x304b7c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x304B80u;
            goto label_304b80;
        }
    }
    ctx->pc = 0x304B80u;
label_304b80:
    // 0x304b80: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x304b80u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x304b84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x304b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304b88: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x304b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x304b8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x304b8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304b90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x304b90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x304b94: 0x1810  mfhi        $v1
    ctx->pc = 0x304b94u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x304b98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x304b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x304b9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x304b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x304ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x304BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304BA0u;
        // 0x304ba4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304BA8u;
}
