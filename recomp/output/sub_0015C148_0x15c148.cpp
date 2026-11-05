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

// Function: sub_0015C148
// Address: 0x15c148 - 0x15c1b0
void sub_0015C148_0x15c148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C148_0x15c148");
#endif

    switch (ctx->pc) {
        case 0x15c174u: goto label_15c174;
        case 0x15c180u: goto label_15c180;
        case 0x15c194u: goto label_15c194;
        default: break;
    }

    ctx->pc = 0x15c148u;

    // 0x15c148: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15c148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15c14c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15c14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15c150: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15c150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15c154: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15c154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c158: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x15c158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15c15c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x15c15cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c160: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x15c160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x15c164: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x15c164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c168: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15c168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15c16c: 0xc057028  jal         func_15C0A0
    ctx->pc = 0x15C16Cu;
    SET_GPR_U32(ctx, 31, 0x15C174u);
    ctx->pc = 0x15C170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C16Cu;
    // 0x15c170: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C0A0u, 0x15C16Cu, 0x15C174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C174u;
label_15c174:
    // 0x15c174: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15c174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c178: 0xc056c32  jal         func_15B0C8
    ctx->pc = 0x15C178u;
    SET_GPR_U32(ctx, 31, 0x15C180u);
    ctx->pc = 0x15C17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C178u;
    // 0x15c17c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0C8u, 0x15C178u, 0x15C180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C180u;
label_15c180:
    // 0x15c180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15c180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c184: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15c184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c188: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x15c188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c18c: 0xc05727e  jal         func_15C9F8
    ctx->pc = 0x15C18Cu;
    SET_GPR_U32(ctx, 31, 0x15C194u);
    ctx->pc = 0x15C190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C18Cu;
    // 0x15c190: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C9F8u, 0x15C18Cu, 0x15C194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C194u;
label_15c194:
    // 0x15c194: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15c194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c198: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15c198u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15c19c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15c19cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c1a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x15c1a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15c1a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15c1a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x15C1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1A8u;
        // 0x15c1ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C1B0u;
}
