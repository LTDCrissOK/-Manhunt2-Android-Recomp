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

// Function: sub_003ACB70
// Address: 0x3acb70 - 0x3acbd8
void sub_003ACB70_0x3acb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ACB70_0x3acb70");
#endif

    switch (ctx->pc) {
        case 0x3acb9cu: goto label_3acb9c;
        case 0x3acbb0u: goto label_3acbb0;
        case 0x3acbb8u: goto label_3acbb8;
        default: break;
    }

    ctx->pc = 0x3acb70u;

    // 0x3acb70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3acb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3acb74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3acb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3acb78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3acb78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acb7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3acb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3acb80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3acb80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acb84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3acb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3acb88: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3acb88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acb8c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3acb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3acb90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3acb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3acb94: 0xc0eb26e  jal         func_3AC9B8
    ctx->pc = 0x3ACB94u;
    SET_GPR_U32(ctx, 31, 0x3ACB9Cu);
    ctx->pc = 0x3ACB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACB94u;
    // 0x3acb98: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC9B8u, 0x3ACB94u, 0x3ACB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACB9Cu;
label_3acb9c:
    // 0x3acb9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3acb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acba0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3acba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acba4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3acba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acba8: 0xc0eb2f6  jal         func_3ACBD8
    ctx->pc = 0x3ACBA8u;
    SET_GPR_U32(ctx, 31, 0x3ACBB0u);
    ctx->pc = 0x3ACBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACBA8u;
    // 0x3acbac: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACBD8u, 0x3ACBA8u, 0x3ACBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACBB0u;
label_3acbb0:
    // 0x3acbb0: 0xc0eb274  jal         func_3AC9D0
    ctx->pc = 0x3ACBB0u;
    SET_GPR_U32(ctx, 31, 0x3ACBB8u);
    ctx->pc = 0x3ACBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACBB0u;
    // 0x3acbb4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC9D0u, 0x3ACBB0u, 0x3ACBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACBB8u;
label_3acbb8:
    // 0x3acbb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3acbb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3acbbc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3acbbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acbc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3acbc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3acbc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3acbc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3acbc8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3acbc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3acbcc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3acbccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3acbd0: 0x3e00008  jr          $ra
    ctx->pc = 0x3ACBD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ACBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACBD0u;
        // 0x3acbd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACBD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ACBD8u;
}
