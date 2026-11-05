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

// Function: sub_003A3628
// Address: 0x3a3628 - 0x3a36a0
void sub_003A3628_0x3a3628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3628_0x3a3628");
#endif

    switch (ctx->pc) {
        case 0x3a364cu: goto label_3a364c;
        case 0x3a365cu: goto label_3a365c;
        case 0x3a3678u: goto label_3a3678;
        case 0x3a3680u: goto label_3a3680;
        default: break;
    }

    ctx->pc = 0x3a3628u;

    // 0x3a3628: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a3628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a362c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a362cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a3630: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a3630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3634: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a3634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a3638: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a3638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a363c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a363cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a3640: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3a3640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3a3644: 0xc0e8d3e  jal         func_3A34F8
    ctx->pc = 0x3A3644u;
    SET_GPR_U32(ctx, 31, 0x3A364Cu);
    ctx->pc = 0x3A3648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3644u;
    // 0x3a3648: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A34F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A34F8u, 0x3A3644u, 0x3A364Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A364Cu;
label_3a364c:
    // 0x3a364c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a364cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3650: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a3650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3654: 0xc0f3aa0  jal         func_3CEA80
    ctx->pc = 0x3A3654u;
    SET_GPR_U32(ctx, 31, 0x3A365Cu);
    ctx->pc = 0x3A3658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3654u;
    // 0x3a3658: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CEA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CEA80u, 0x3A3654u, 0x3A365Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A365Cu;
label_3a365c:
    // 0x3a365c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a365cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a3660: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a3660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3664: 0x2484d580  addiu       $a0, $a0, -0x2A80
    ctx->pc = 0x3a3664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956416));
    // 0x3a3668: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A3668u;
    {
        const bool branch_taken_0x3a3668 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3A366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3668u;
        // 0x3a366c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3668) {
            ctx->pc = 0x3A3678u;
            goto label_3a3678;
        }
    }
    ctx->pc = 0x3A3670u;
    // 0x3a3670: 0xc0f3050  jal         func_3CC140
    ctx->pc = 0x3A3670u;
    SET_GPR_U32(ctx, 31, 0x3A3678u);
    ctx->pc = 0x3CC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC140u, 0x3A3670u, 0x3A3678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3678u;
label_3a3678:
    // 0x3a3678: 0xc0e8d4c  jal         func_3A3530
    ctx->pc = 0x3A3678u;
    SET_GPR_U32(ctx, 31, 0x3A3680u);
    ctx->pc = 0x3A3530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3530u, 0x3A3678u, 0x3A3680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3680u;
label_3a3680:
    // 0x3a3680: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a3680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3684: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a3684u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a3688: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a3688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a368c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a368cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a3690: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3a3690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a3694: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3694u;
        // 0x3a3698: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A369Cu;
    // 0x3a369c: 0x0  nop
    ctx->pc = 0x3a369cu;
    // NOP
    ctx->pc = 0x3a36a0u;
}
