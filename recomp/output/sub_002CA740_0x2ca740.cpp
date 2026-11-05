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

// Function: sub_002CA740
// Address: 0x2ca740 - 0x2ca780
void sub_002CA740_0x2ca740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA740_0x2ca740");
#endif

    switch (ctx->pc) {
        case 0x2ca764u: goto label_2ca764;
        default: break;
    }

    ctx->pc = 0x2ca740u;

    // 0x2ca740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ca740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ca744: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ca744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ca748: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ca748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ca74c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ca74cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca750: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x2ca750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2ca754: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CA754u;
    {
        const bool branch_taken_0x2ca754 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca754) {
            ctx->pc = 0x2CA758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA754u;
            // 0x2ca758: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA774u;
            goto label_2ca774;
        }
    }
    ctx->pc = 0x2CA75Cu;
    // 0x2ca75c: 0xc0b29e4  jal         func_2CA790
    ctx->pc = 0x2CA75Cu;
    SET_GPR_U32(ctx, 31, 0x2CA764u);
    ctx->pc = 0x2CA790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA790u, 0x2CA75Cu, 0x2CA764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA764u;
label_2ca764:
    // 0x2ca764: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ca764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ca768: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x2ca768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x2ca76c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2ca76cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2ca770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ca770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ca774:
    // 0x2ca774: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ca774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ca778: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA778u;
        // 0x2ca77c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA780u;
}
