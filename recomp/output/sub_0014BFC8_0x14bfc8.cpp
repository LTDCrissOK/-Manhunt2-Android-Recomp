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

// Function: sub_0014BFC8
// Address: 0x14bfc8 - 0x14c018
void sub_0014BFC8_0x14bfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BFC8_0x14bfc8");
#endif

    switch (ctx->pc) {
        case 0x14bfe0u: goto label_14bfe0;
        case 0x14bff4u: goto label_14bff4;
        case 0x14c004u: goto label_14c004;
        default: break;
    }

    ctx->pc = 0x14bfc8u;

    // 0x14bfc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14bfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14bfcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14bfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14bfd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14bfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14bfd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14bfd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bfd8: 0xc0530d8  jal         func_14C360
    ctx->pc = 0x14BFD8u;
    SET_GPR_U32(ctx, 31, 0x14BFE0u);
    ctx->pc = 0x14BFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BFD8u;
    // 0x14bfdc: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C360u, 0x14BFD8u, 0x14BFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BFE0u;
label_14bfe0:
    // 0x14bfe0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x14BFE0u;
    {
        const bool branch_taken_0x14bfe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bfe0) {
            ctx->pc = 0x14BFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BFE0u;
            // 0x14bfe4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C008u;
            goto label_14c008;
        }
    }
    ctx->pc = 0x14BFE8u;
    // 0x14bfe8: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14bfe8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14bfec: 0xc04d948  jal         func_136520
    ctx->pc = 0x14BFECu;
    SET_GPR_U32(ctx, 31, 0x14BFF4u);
    ctx->pc = 0x14BFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BFECu;
    // 0x14bff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136520u, 0x14BFECu, 0x14BFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BFF4u;
label_14bff4:
    // 0x14bff4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14BFF4u;
    {
        const bool branch_taken_0x14bff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BFF4u;
        // 0x14bff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bff4) {
            ctx->pc = 0x14C004u;
            goto label_14c004;
        }
    }
    ctx->pc = 0x14BFFCu;
    // 0x14bffc: 0xc0530d2  jal         func_14C348
    ctx->pc = 0x14BFFCu;
    SET_GPR_U32(ctx, 31, 0x14C004u);
    ctx->pc = 0x14C000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BFFCu;
    // 0x14c000: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C348u, 0x14BFFCu, 0x14C004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C004u;
label_14c004:
    // 0x14c004: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14c004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14c008:
    // 0x14c008: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14c008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14c00c: 0x3e00008  jr          $ra
    ctx->pc = 0x14C00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C00Cu;
        // 0x14c010: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C014u;
    // 0x14c014: 0x0  nop
    ctx->pc = 0x14c014u;
    // NOP
    ctx->pc = 0x14c018u;
}
