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

// Function: sub_00337C60
// Address: 0x337c60 - 0x337cb8
void sub_00337C60_0x337c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337C60_0x337c60");
#endif

    switch (ctx->pc) {
        case 0x337c74u: goto label_337c74;
        case 0x337c98u: goto label_337c98;
        default: break;
    }

    ctx->pc = 0x337c60u;

    // 0x337c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x337c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x337c64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x337c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x337c68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x337c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x337c6c: 0xc0cde5e  jal         func_337978
    ctx->pc = 0x337C6Cu;
    SET_GPR_U32(ctx, 31, 0x337C74u);
    ctx->pc = 0x337C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337C6Cu;
    // 0x337c70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337978u, 0x337C6Cu, 0x337C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337C74u;
label_337c74:
    // 0x337c74: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x337c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x337c78: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x337c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x337c7c: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x337c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x337c80: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x337c80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x337c84: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x337c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x337c88: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x337c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x337c8c: 0x24840038  addiu       $a0, $a0, 0x38
    ctx->pc = 0x337c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x337c90: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x337C90u;
    SET_GPR_U32(ctx, 31, 0x337C98u);
    ctx->pc = 0x337C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337C90u;
    // 0x337c94: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x337C90u, 0x337C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337C98u;
label_337c98:
    // 0x337c98: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x337c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x337c9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x337c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x337ca0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x337ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x337ca4: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x337ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x337ca8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x337ca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337cac: 0x3e00008  jr          $ra
    ctx->pc = 0x337CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337CACu;
        // 0x337cb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337CB4u;
    // 0x337cb4: 0x0  nop
    ctx->pc = 0x337cb4u;
    // NOP
    ctx->pc = 0x337cb8u;
}
