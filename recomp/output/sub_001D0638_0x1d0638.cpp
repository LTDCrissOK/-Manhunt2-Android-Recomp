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

// Function: sub_001D0638
// Address: 0x1d0638 - 0x1d06c8
void sub_001D0638_0x1d0638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0638_0x1d0638");
#endif

    switch (ctx->pc) {
        case 0x1d0678u: goto label_1d0678;
        case 0x1d0698u: goto label_1d0698;
        case 0x1d06b0u: goto label_1d06b0;
        default: break;
    }

    ctx->pc = 0x1d0638u;

    // 0x1d0638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d063c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d063cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0640: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d0640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d0644: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0648: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d064c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d064cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0650: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1d0650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d0654: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D0654u;
    {
        const bool branch_taken_0x1d0654 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0654u;
        // 0x1d0658: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0654) {
            ctx->pc = 0x1D069Cu;
            goto label_1d069c;
        }
    }
    ctx->pc = 0x1D065Cu;
    // 0x1d065c: 0x8ca3fff0  lw          $v1, -0x10($a1)
    ctx->pc = 0x1d065cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x1d0660: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d0660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0664: 0x623018  mult        $a2, $v1, $v0
    ctx->pc = 0x1d0664u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1d0668: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x1d0668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1d066c: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D066Cu;
    {
        const bool branch_taken_0x1d066c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D0670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D066Cu;
        // 0x1d0670: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d066c) {
            ctx->pc = 0x1D0690u;
            goto label_1d0690;
        }
    }
    ctx->pc = 0x1D0674u;
    // 0x1d0674: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x1d0674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_1d0678:
    // 0x1d0678: 0x0  nop
    ctx->pc = 0x1d0678u;
    // NOP
    // 0x1d067c: 0x0  nop
    ctx->pc = 0x1d067cu;
    // NOP
    // 0x1d0680: 0x0  nop
    ctx->pc = 0x1d0680u;
    // NOP
    // 0x1d0684: 0x0  nop
    ctx->pc = 0x1d0684u;
    // NOP
    // 0x1d0688: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D0688u;
    {
        const bool branch_taken_0x1d0688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0688u;
        // 0x1d068c: 0x2442ffd0  addiu       $v0, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0688) {
            ctx->pc = 0x1D0678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0678;
        }
    }
    ctx->pc = 0x1D0690u;
label_1d0690:
    // 0x1d0690: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1D0690u;
    SET_GPR_U32(ctx, 31, 0x1D0698u);
    ctx->pc = 0x1D0694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0690u;
    // 0x1d0694: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1D0690u, 0x1D0698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0698u;
label_1d0698:
    // 0x1d0698: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1d0698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1d069c:
    // 0x1d069c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1d069cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1d06a0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D06A0u;
    {
        const bool branch_taken_0x1d06a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d06a0) {
            ctx->pc = 0x1D06A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D06A0u;
            // 0x1d06a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D06B4u;
            goto label_1d06b4;
        }
    }
    ctx->pc = 0x1D06A8u;
    // 0x1d06a8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1D06A8u;
    SET_GPR_U32(ctx, 31, 0x1D06B0u);
    ctx->pc = 0x1D06ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D06A8u;
    // 0x1d06ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1D06A8u, 0x1D06B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D06B0u;
label_1d06b0:
    // 0x1d06b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d06b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d06b4:
    // 0x1d06b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d06b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d06b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d06b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d06bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D06BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D06C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D06BCu;
        // 0x1d06c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D06BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D06C4u;
    // 0x1d06c4: 0x0  nop
    ctx->pc = 0x1d06c4u;
    // NOP
    ctx->pc = 0x1d06c8u;
}
