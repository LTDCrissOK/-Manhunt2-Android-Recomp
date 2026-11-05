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

// Function: sub_002B7678
// Address: 0x2b7678 - 0x2b76d8
void sub_002B7678_0x2b7678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7678_0x2b7678");
#endif

    switch (ctx->pc) {
        case 0x2b7698u: goto label_2b7698;
        case 0x2b76b0u: goto label_2b76b0;
        default: break;
    }

    ctx->pc = 0x2b7678u;

    // 0x2b7678: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b7678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b767c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b767cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b7680: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b7680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b7684: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b7684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7688: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b7688u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b768c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b768cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b7690: 0xc0ad65a  jal         func_2B5968
    ctx->pc = 0x2B7690u;
    SET_GPR_U32(ctx, 31, 0x2B7698u);
    ctx->pc = 0x2B7694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7690u;
    // 0x2b7694: 0xae11590c  sw          $s1, 0x590C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 22796), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5968u, 0x2B7690u, 0x2B7698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7698u;
label_2b7698:
    // 0x2b7698: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B7698u;
    {
        const bool branch_taken_0x2b7698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2B769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7698u;
        // 0x2b769c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7698) {
            ctx->pc = 0x2B76A8u;
            goto label_2b76a8;
        }
    }
    ctx->pc = 0x2B76A0u;
    // 0x2b76a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B76A0u;
    {
        const bool branch_taken_0x2b76a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B76A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B76A0u;
        // 0x2b76a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b76a0) {
            ctx->pc = 0x2B76C0u;
            goto label_2b76c0;
        }
    }
    ctx->pc = 0x2B76A8u;
label_2b76a8:
    // 0x2b76a8: 0xc0ad684  jal         func_2B5A10
    ctx->pc = 0x2B76A8u;
    SET_GPR_U32(ctx, 31, 0x2B76B0u);
    ctx->pc = 0x2B76ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B76A8u;
    // 0x2b76ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5A10u, 0x2B76A8u, 0x2B76B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B76B0u;
label_2b76b0:
    // 0x2b76b0: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B76B0u;
    {
        const bool branch_taken_0x2b76b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2B76B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B76B0u;
        // 0x2b76b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b76b0) {
            ctx->pc = 0x2B76C4u;
            goto label_2b76c4;
        }
    }
    ctx->pc = 0x2B76B8u;
    // 0x2b76b8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2b76b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b76bc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2b76bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2b76c0:
    // 0x2b76c0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b76c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2b76c4:
    // 0x2b76c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b76c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b76c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b76c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b76cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b76ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b76d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B76D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B76D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B76D0u;
        // 0x2b76d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B76D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B76D8u;
}
