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

// Function: sub_00109C50
// Address: 0x109c50 - 0x109ce8
void sub_00109C50_0x109c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109C50_0x109c50");
#endif

    switch (ctx->pc) {
        case 0x109c78u: goto label_109c78;
        case 0x109ca0u: goto label_109ca0;
        case 0x109cc8u: goto label_109cc8;
        default: break;
    }

    ctx->pc = 0x109c50u;

    // 0x109c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x109c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x109c54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x109c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x109c58: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x109c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x109c5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x109c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x109c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x109c64: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x109c64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c68: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x109c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x109c6c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x109c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x109c70: 0xc043366  jal         func_10CD98
    ctx->pc = 0x109C70u;
    SET_GPR_U32(ctx, 31, 0x109C78u);
    ctx->pc = 0x109C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C70u;
    // 0x109c74: 0x2612000c  addiu       $s2, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x109C70u, 0x109C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C78u;
label_109c78:
    // 0x109c78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x109c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x109c7c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x109c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x109c80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x109c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109c84: 0x8c71001c  lw          $s1, 0x1C($v1)
    ctx->pc = 0x109c84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x109c88: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x109c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x109c8c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x109C8Cu;
    {
        const bool branch_taken_0x109c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C8Cu;
        // 0x109c90: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c8c) {
            ctx->pc = 0x109CCCu;
            goto label_109ccc;
        }
    }
    ctx->pc = 0x109C94u;
    // 0x109c94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c98: 0xc043366  jal         func_10CD98
    ctx->pc = 0x109C98u;
    SET_GPR_U32(ctx, 31, 0x109CA0u);
    ctx->pc = 0x109C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C98u;
    // 0x109c9c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x109C98u, 0x109CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CA0u;
label_109ca0:
    // 0x109ca0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x109ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x109ca4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x109ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x109ca8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x109ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109cac: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x109cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x109cb0: 0x8c6200d0  lw          $v0, 0xD0($v1)
    ctx->pc = 0x109cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x109cb4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x109CB4u;
    {
        const bool branch_taken_0x109cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CB4u;
        // 0x109cb8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109cb4) {
            ctx->pc = 0x109CCCu;
            goto label_109ccc;
        }
    }
    ctx->pc = 0x109CBCu;
    // 0x109cbc: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x109cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x109cc0: 0xc044148  jal         func_110520
    ctx->pc = 0x109CC0u;
    SET_GPR_U32(ctx, 31, 0x109CC8u);
    ctx->pc = 0x109CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109CC0u;
    // 0x109cc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110520u, 0x109CC0u, 0x109CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CC8u;
label_109cc8:
    // 0x109cc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_109ccc:
    // 0x109ccc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109cccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109cd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x109cd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x109cd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x109cd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109cd8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x109cd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x109cdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x109cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x109CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CE0u;
        // 0x109ce4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109CE8u;
}
