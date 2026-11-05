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

// Function: sub_00363B58
// Address: 0x363b58 - 0x363bc0
void sub_00363B58_0x363b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363B58_0x363b58");
#endif

    switch (ctx->pc) {
        case 0x363ba0u: goto label_363ba0;
        default: break;
    }

    ctx->pc = 0x363b58u;

    // 0x363b58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x363b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x363b5c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x363b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x363b60: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x363b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x363b64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x363b64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363b68: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x363b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x363b6c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x363B6Cu;
    {
        const bool branch_taken_0x363b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x363B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363B6Cu;
        // 0x363b70: 0x3c04005c  lui         $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363b6c) {
            ctx->pc = 0x363BA8u;
            goto label_363ba8;
        }
    }
    ctx->pc = 0x363B74u;
    // 0x363b74: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x363b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x363b78: 0x2484dc20  addiu       $a0, $a0, -0x23E0
    ctx->pc = 0x363b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958112));
    // 0x363b7c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x363b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x363b80: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x363b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x363b84: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x363b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363b88: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x363b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x363b8c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x363b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x363b90: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x363b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x363b94: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x363b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x363b98: 0xc0fbd4c  jal         func_3EF530
    ctx->pc = 0x363B98u;
    SET_GPR_U32(ctx, 31, 0x363BA0u);
    ctx->pc = 0x363B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363B98u;
    // 0x363b9c: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF530u, 0x363B98u, 0x363BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363BA0u;
label_363ba0:
    // 0x363ba0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x363ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x363ba4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x363ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_363ba8:
    // 0x363ba8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x363ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x363bac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x363bacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x363bb0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x363bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x363bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x363BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363BB4u;
        // 0x363bb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363BBCu;
    // 0x363bbc: 0x0  nop
    ctx->pc = 0x363bbcu;
    // NOP
    ctx->pc = 0x363bc0u;
}
