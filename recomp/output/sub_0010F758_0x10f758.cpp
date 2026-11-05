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

// Function: sub_0010F758
// Address: 0x10f758 - 0x10f7d0
void sub_0010F758_0x10f758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F758_0x10f758");
#endif

    switch (ctx->pc) {
        case 0x10f784u: goto label_10f784;
        case 0x10f7c0u: goto label_10f7c0;
        default: break;
    }

    ctx->pc = 0x10f758u;

    // 0x10f758: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10f758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10f75c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10f75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10f760: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10f760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10f764: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10f764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f768: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x10f768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10f76c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F76Cu;
    {
        const bool branch_taken_0x10f76c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F76Cu;
        // 0x10f770: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f76c) {
            ctx->pc = 0x10F77Cu;
            goto label_10f77c;
        }
    }
    ctx->pc = 0x10F774u;
    // 0x10f774: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10F774u;
    {
        const bool branch_taken_0x10f774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F774u;
        // 0x10f778: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f774) {
            ctx->pc = 0x10F784u;
            goto label_10f784;
        }
    }
    ctx->pc = 0x10F77Cu;
label_10f77c:
    // 0x10f77c: 0xc0478c8  jal         func_11E320
    ctx->pc = 0x10F77Cu;
    SET_GPR_U32(ctx, 31, 0x10F784u);
    ctx->pc = 0x10F780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F77Cu;
    // 0x10f780: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E320u, 0x10F77Cu, 0x10F784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F784u;
label_10f784:
    // 0x10f784: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x10F784u;
    {
        const bool branch_taken_0x10f784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f784) {
            ctx->pc = 0x10F788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F784u;
            // 0x10f788: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F7C4u;
            goto label_10f7c4;
        }
    }
    ctx->pc = 0x10F78Cu;
    // 0x10f78c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x10f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10f790: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F790u;
    {
        const bool branch_taken_0x10f790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F790u;
        // 0x10f794: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f790) {
            ctx->pc = 0x10F7A0u;
            goto label_10f7a0;
        }
    }
    ctx->pc = 0x10F798u;
    // 0x10f798: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x10f798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x10f79c: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x10f79cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_10f7a0:
    // 0x10f7a0: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x10F7A0u;
    {
        const bool branch_taken_0x10f7a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f7a0) {
            ctx->pc = 0x10F7A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F7A0u;
            // 0x10f7a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F7C4u;
            goto label_10f7c4;
        }
    }
    ctx->pc = 0x10F7A8u;
    // 0x10f7a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f7ac: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x10f7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x10f7b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F7B0u;
    {
        const bool branch_taken_0x10f7b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F7B0u;
        // 0x10f7b4: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f7b0) {
            ctx->pc = 0x10F7C0u;
            goto label_10f7c0;
        }
    }
    ctx->pc = 0x10F7B8u;
    // 0x10f7b8: 0xc044ca4  jal         func_113290
    ctx->pc = 0x10F7B8u;
    SET_GPR_U32(ctx, 31, 0x10F7C0u);
    ctx->pc = 0x10F7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F7B8u;
    // 0x10f7bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113290u, 0x10F7B8u, 0x10F7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F7C0u;
label_10f7c0:
    // 0x10f7c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10f7c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10f7c4:
    // 0x10f7c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10f7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10f7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F7C8u;
        // 0x10f7cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F7D0u;
}
