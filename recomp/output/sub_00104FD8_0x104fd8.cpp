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

// Function: sub_00104FD8
// Address: 0x104fd8 - 0x105048
void sub_00104FD8_0x104fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104FD8_0x104fd8");
#endif

    switch (ctx->pc) {
        case 0x105008u: goto label_105008;
        case 0x105010u: goto label_105010;
        case 0x10501cu: goto label_10501c;
        default: break;
    }

    ctx->pc = 0x104fd8u;

    // 0x104fd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x104fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x104fdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x104fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104fe0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x104fe4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x104fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x104fe8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x104fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104fec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x104fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x104ff0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x104FF0u;
    {
        const bool branch_taken_0x104ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104FF0u;
        // 0x104ff4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ff0) {
            ctx->pc = 0x104FFCu;
            goto label_104ffc;
        }
    }
    ctx->pc = 0x104FF8u;
    // 0x104ff8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x104ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_104ffc:
    // 0x104ffc: 0x50a0000e  beql        $a1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x104FFCu;
    {
        const bool branch_taken_0x104ffc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x104ffc) {
            ctx->pc = 0x105000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104FFCu;
            // 0x105000: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105038u;
            goto label_105038;
        }
    }
    ctx->pc = 0x105004u;
    // 0x105004: 0x0  nop
    ctx->pc = 0x105004u;
    // NOP
label_105008:
    // 0x105008: 0xc04139e  jal         func_104E78
    ctx->pc = 0x105008u;
    SET_GPR_U32(ctx, 31, 0x105010u);
    ctx->pc = 0x10500Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105008u;
    // 0x10500c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E78u, 0x105008u, 0x105010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105010u;
label_105010:
    // 0x105010: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x105010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x105014: 0xc0f6a42  jal         func_3DA908
    ctx->pc = 0x105014u;
    SET_GPR_U32(ctx, 31, 0x10501Cu);
    ctx->pc = 0x105018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105014u;
    // 0x105018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA908u, 0x105014u, 0x10501Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10501Cu;
label_10501c:
    // 0x10501c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10501cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x105020: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x105020u;
    {
        const bool branch_taken_0x105020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105020u;
        // 0x105024: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105020) {
            ctx->pc = 0x10502Cu;
            goto label_10502c;
        }
    }
    ctx->pc = 0x105028u;
    // 0x105028: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x105028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10502c:
    // 0x10502c: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x10502Cu;
    {
        const bool branch_taken_0x10502c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x10502c) {
            ctx->pc = 0x105008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105008;
        }
    }
    ctx->pc = 0x105034u;
    // 0x105034: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_105038:
    // 0x105038: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x105038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10503c: 0x3e00008  jr          $ra
    ctx->pc = 0x10503Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10503Cu;
        // 0x105040: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10503Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105044u;
    // 0x105044: 0x0  nop
    ctx->pc = 0x105044u;
    // NOP
    ctx->pc = 0x105048u;
}
