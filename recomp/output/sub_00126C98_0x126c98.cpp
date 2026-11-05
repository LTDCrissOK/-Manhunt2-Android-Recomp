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

// Function: sub_00126C98
// Address: 0x126c98 - 0x126cf0
void sub_00126C98_0x126c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126C98_0x126c98");
#endif

    switch (ctx->pc) {
        case 0x126cdcu: goto label_126cdc;
        default: break;
    }

    ctx->pc = 0x126c98u;

    // 0x126c98: 0x30a800ff  andi        $t0, $a1, 0xFF
    ctx->pc = 0x126c98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x126c9c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x126c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x126ca0: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x126ca0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x126ca4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x126ca4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x126ca8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x126ca8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126cac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x126cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x126cb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x126cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x126cb4: 0x24e40450  addiu       $a0, $a3, 0x450
    ctx->pc = 0x126cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1104));
    // 0x126cb8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x126cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x126cbc: 0x2405080d  addiu       $a1, $zero, 0x80D
    ctx->pc = 0x126cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    // 0x126cc0: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x126cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x126cc4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x126cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x126cc8: 0x54450006  bnel        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x126CC8u;
    {
        const bool branch_taken_0x126cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x126cc8) {
            ctx->pc = 0x126CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126CC8u;
            // 0x126ccc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126CE4u;
            goto label_126ce4;
        }
    }
    ctx->pc = 0x126CD0u;
    // 0x126cd0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x126cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126cd4: 0xc049ada  jal         func_126B68
    ctx->pc = 0x126CD4u;
    SET_GPR_U32(ctx, 31, 0x126CDCu);
    ctx->pc = 0x126CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126CD4u;
    // 0x126cd8: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126B68u, 0x126CD4u, 0x126CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126CDCu;
label_126cdc:
    // 0x126cdc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x126cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x126ce0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x126ce0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_126ce4:
    // 0x126ce4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x126ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x126ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x126CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CE8u;
        // 0x126cec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126CF0u;
}
