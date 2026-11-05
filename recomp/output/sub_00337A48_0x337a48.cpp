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

// Function: sub_00337A48
// Address: 0x337a48 - 0x337aa0
void sub_00337A48_0x337a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337A48_0x337a48");
#endif

    switch (ctx->pc) {
        case 0x337a68u: goto label_337a68;
        case 0x337a8cu: goto label_337a8c;
        default: break;
    }

    ctx->pc = 0x337a48u;

    // 0x337a48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x337a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x337a4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x337a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x337a50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x337a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x337a54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x337a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337a58: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x337a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x337a5c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x337a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x337a60: 0xc0cde5e  jal         func_337978
    ctx->pc = 0x337A60u;
    SET_GPR_U32(ctx, 31, 0x337A68u);
    ctx->pc = 0x337A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337A60u;
    // 0x337a64: 0xae02005c  sw          $v0, 0x5C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337978u, 0x337A60u, 0x337A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337A68u;
label_337a68:
    // 0x337a68: 0x8e05006c  lw          $a1, 0x6C($s0)
    ctx->pc = 0x337a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x337a6c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x337a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x337a70: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x337a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x337a74: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x337a74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x337a78: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x337a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x337a7c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x337a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x337a80: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x337a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x337a84: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x337A84u;
    SET_GPR_U32(ctx, 31, 0x337A8Cu);
    ctx->pc = 0x337A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337A84u;
    // 0x337a88: 0x24a50038  addiu       $a1, $a1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x337A84u, 0x337A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337A8Cu;
label_337a8c:
    // 0x337a8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x337a8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337a90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x337a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x337a94: 0x3e00008  jr          $ra
    ctx->pc = 0x337A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337A94u;
        // 0x337a98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337A9Cu;
    // 0x337a9c: 0x0  nop
    ctx->pc = 0x337a9cu;
    // NOP
    ctx->pc = 0x337aa0u;
}
