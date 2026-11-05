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

// Function: sub_0010D678
// Address: 0x10d678 - 0x10d6c0
void sub_0010D678_0x10d678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D678_0x10d678");
#endif

    switch (ctx->pc) {
        case 0x10d6b0u: goto label_10d6b0;
        default: break;
    }

    ctx->pc = 0x10d678u;

    // 0x10d678: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x10d678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x10d67c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10d67cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10d680: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x10d680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x10d684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10d684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10d688: 0x2444020c  addiu       $a0, $v0, 0x20C
    ctx->pc = 0x10d688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 524));
    // 0x10d68c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x10d68cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x10d690: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10d690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10d694: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10d694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10d698: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x10d698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x10d69c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D69Cu;
    {
        const bool branch_taken_0x10d69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D69Cu;
        // 0x10d6a0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d69c) {
            ctx->pc = 0x10D6B0u;
            goto label_10d6b0;
        }
    }
    ctx->pc = 0x10D6A4u;
    // 0x10d6a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10d6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10d6a8: 0xc0440c8  jal         func_110320
    ctx->pc = 0x10D6A8u;
    SET_GPR_U32(ctx, 31, 0x10D6B0u);
    ctx->pc = 0x10D6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D6A8u;
    // 0x10d6ac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110320u, 0x10D6A8u, 0x10D6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D6B0u;
label_10d6b0:
    // 0x10d6b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10d6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x10D6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6B4u;
        // 0x10d6b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D6BCu;
    // 0x10d6bc: 0x0  nop
    ctx->pc = 0x10d6bcu;
    // NOP
    ctx->pc = 0x10d6c0u;
}
