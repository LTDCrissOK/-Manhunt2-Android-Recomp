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

// Function: sub_003A6E60
// Address: 0x3a6e60 - 0x3a6ed8
void sub_003A6E60_0x3a6e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6E60_0x3a6e60");
#endif

    switch (ctx->pc) {
        case 0x3a6e94u: goto label_3a6e94;
        case 0x3a6eacu: goto label_3a6eac;
        case 0x3a6eb4u: goto label_3a6eb4;
        default: break;
    }

    ctx->pc = 0x3a6e60u;

    // 0x3a6e60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a6e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a6e64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a6e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a6e68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a6e68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6e6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a6e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a6e70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a6e70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6e74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a6e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a6e78: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3a6e78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6e7c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a6e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a6e80: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3a6e80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6e84: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3a6e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3a6e88: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3a6e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3a6e8c: 0xc0e9d26  jal         func_3A7498
    ctx->pc = 0x3A6E8Cu;
    SET_GPR_U32(ctx, 31, 0x3A6E94u);
    ctx->pc = 0x3A6E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6E8Cu;
    // 0x3a6e90: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7498u, 0x3A6E8Cu, 0x3A6E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6E94u;
label_3a6e94:
    // 0x3a6e94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a6e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6e98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a6e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6e9c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3a6e9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6ea0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3a6ea0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6ea4: 0xc0e9bb6  jal         func_3A6ED8
    ctx->pc = 0x3A6EA4u;
    SET_GPR_U32(ctx, 31, 0x3A6EACu);
    ctx->pc = 0x3A6EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6EA4u;
    // 0x3a6ea8: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6ED8u, 0x3A6EA4u, 0x3A6EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6EACu;
label_3a6eac:
    // 0x3a6eac: 0xc0e9d28  jal         func_3A74A0
    ctx->pc = 0x3A6EACu;
    SET_GPR_U32(ctx, 31, 0x3A6EB4u);
    ctx->pc = 0x3A6EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6EACu;
    // 0x3a6eb0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A74A0u, 0x3A6EACu, 0x3A6EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6EB4u;
label_3a6eb4:
    // 0x3a6eb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a6eb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a6eb8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a6eb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6ebc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a6ebcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a6ec0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a6ec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a6ec4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a6ec4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a6ec8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3a6ec8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a6ecc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3a6eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3a6ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6ED0u;
        // 0x3a6ed4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6ED8u;
}
