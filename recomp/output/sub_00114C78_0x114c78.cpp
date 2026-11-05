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

// Function: sub_00114C78
// Address: 0x114c78 - 0x114ce0
void sub_00114C78_0x114c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114C78_0x114c78");
#endif

    switch (ctx->pc) {
        case 0x114cc8u: goto label_114cc8;
        default: break;
    }

    ctx->pc = 0x114c78u;

    // 0x114c78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x114c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x114c7c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x114c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114c80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114c84: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x114c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x114c88: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x114c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x114c8c: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x114c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x114c90: 0x24460108  addiu       $a2, $v0, 0x108
    ctx->pc = 0x114c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 264));
    // 0x114c94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x114c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x114c98: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x114c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x114c9c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x114c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x114ca0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x114CA0u;
    {
        const bool branch_taken_0x114ca0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x114CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114CA0u;
        // 0x114ca4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ca0) {
            ctx->pc = 0x114CD0u;
            goto label_114cd0;
        }
    }
    ctx->pc = 0x114CA8u;
    // 0x114ca8: 0x8ca20288  lw          $v0, 0x288($a1)
    ctx->pc = 0x114ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 648)));
    // 0x114cac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x114cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x114cb0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x114cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x114cb4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x114cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x114cb8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x114CB8u;
    {
        const bool branch_taken_0x114cb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x114CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114CB8u;
        // 0x114cbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114cb8) {
            ctx->pc = 0x114CD0u;
            goto label_114cd0;
        }
    }
    ctx->pc = 0x114CC0u;
    // 0x114cc0: 0xc0951d8  jal         func_254760
    ctx->pc = 0x114CC0u;
    SET_GPR_U32(ctx, 31, 0x114CC8u);
    ctx->pc = 0x254760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254760u, 0x114CC0u, 0x114CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114CC8u;
label_114cc8:
    // 0x114cc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x114CC8u;
    {
        const bool branch_taken_0x114cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114CC8u;
        // 0x114ccc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114cc8) {
            ctx->pc = 0x114CD4u;
            goto label_114cd4;
        }
    }
    ctx->pc = 0x114CD0u;
label_114cd0:
    // 0x114cd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_114cd4:
    // 0x114cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x114CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114CD4u;
        // 0x114cd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114CDCu;
    // 0x114cdc: 0x0  nop
    ctx->pc = 0x114cdcu;
    // NOP
    ctx->pc = 0x114ce0u;
}
