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

// Function: sub_0014BE80
// Address: 0x14be80 - 0x14bef0
void sub_0014BE80_0x14be80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BE80_0x14be80");
#endif

    switch (ctx->pc) {
        case 0x14be98u: goto label_14be98;
        case 0x14bea8u: goto label_14bea8;
        case 0x14beb0u: goto label_14beb0;
        case 0x14bec0u: goto label_14bec0;
        case 0x14bed0u: goto label_14bed0;
        case 0x14bee0u: goto label_14bee0;
        default: break;
    }

    ctx->pc = 0x14be80u;

    // 0x14be80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14be80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14be84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14be84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14be88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14be88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14be8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14be8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14be90: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x14BE90u;
    SET_GPR_U32(ctx, 31, 0x14BE98u);
    ctx->pc = 0x14BE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BE90u;
    // 0x14be94: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x14BE90u, 0x14BE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE98u;
label_14be98:
    // 0x14be98: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x14BE98u;
    {
        const bool branch_taken_0x14be98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14be98) {
            ctx->pc = 0x14BE9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BE98u;
            // 0x14be9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BEE4u;
            goto label_14bee4;
        }
    }
    ctx->pc = 0x14BEA0u;
    // 0x14bea0: 0xc052ff2  jal         func_14BFC8
    ctx->pc = 0x14BEA0u;
    SET_GPR_U32(ctx, 31, 0x14BEA8u);
    ctx->pc = 0x14BEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BEA0u;
    // 0x14bea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BFC8u, 0x14BEA0u, 0x14BEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BEA8u;
label_14bea8:
    // 0x14bea8: 0xc052fbc  jal         func_14BEF0
    ctx->pc = 0x14BEA8u;
    SET_GPR_U32(ctx, 31, 0x14BEB0u);
    ctx->pc = 0x14BEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BEA8u;
    // 0x14beac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BEF0u, 0x14BEA8u, 0x14BEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BEB0u;
label_14beb0:
    // 0x14beb0: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x14BEB0u;
    {
        const bool branch_taken_0x14beb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14beb0) {
            ctx->pc = 0x14BEB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BEB0u;
            // 0x14beb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BEE4u;
            goto label_14bee4;
        }
    }
    ctx->pc = 0x14BEB8u;
    // 0x14beb8: 0xc053006  jal         func_14C018
    ctx->pc = 0x14BEB8u;
    SET_GPR_U32(ctx, 31, 0x14BEC0u);
    ctx->pc = 0x14BEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BEB8u;
    // 0x14bebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C018u, 0x14BEB8u, 0x14BEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BEC0u;
label_14bec0:
    // 0x14bec0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x14BEC0u;
    {
        const bool branch_taken_0x14bec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bec0) {
            ctx->pc = 0x14BEC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BEC0u;
            // 0x14bec4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BEE4u;
            goto label_14bee4;
        }
    }
    ctx->pc = 0x14BEC8u;
    // 0x14bec8: 0xc053018  jal         func_14C060
    ctx->pc = 0x14BEC8u;
    SET_GPR_U32(ctx, 31, 0x14BED0u);
    ctx->pc = 0x14BECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BEC8u;
    // 0x14becc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C060u, 0x14BEC8u, 0x14BED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BED0u;
label_14bed0:
    // 0x14bed0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14BED0u;
    {
        const bool branch_taken_0x14bed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bed0) {
            ctx->pc = 0x14BED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BED0u;
            // 0x14bed4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BEE4u;
            goto label_14bee4;
        }
    }
    ctx->pc = 0x14BED8u;
    // 0x14bed8: 0xc05302a  jal         func_14C0A8
    ctx->pc = 0x14BED8u;
    SET_GPR_U32(ctx, 31, 0x14BEE0u);
    ctx->pc = 0x14BEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BED8u;
    // 0x14bedc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C0A8u, 0x14BED8u, 0x14BEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BEE0u;
label_14bee0:
    // 0x14bee0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14bee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14bee4:
    // 0x14bee4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14bee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14bee8: 0x3e00008  jr          $ra
    ctx->pc = 0x14BEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BEE8u;
        // 0x14beec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BEF0u;
}
