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

// Function: sub_0012D0A8
// Address: 0x12d0a8 - 0x12d0f8
void sub_0012D0A8_0x12d0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D0A8_0x12d0a8");
#endif

    switch (ctx->pc) {
        case 0x12d0d0u: goto label_12d0d0;
        case 0x12d0e4u: goto label_12d0e4;
        default: break;
    }

    ctx->pc = 0x12d0a8u;

    // 0x12d0a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12d0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12d0ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12d0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12d0b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12d0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12d0b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12d0b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d0b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12d0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12d0bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x12d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12d0c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D0C0u;
    {
        const bool branch_taken_0x12d0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D0C0u;
        // 0x12d0c4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d0c0) {
            ctx->pc = 0x12D0D0u;
            goto label_12d0d0;
        }
    }
    ctx->pc = 0x12D0C8u;
    // 0x12d0c8: 0xc04b460  jal         func_12D180
    ctx->pc = 0x12D0C8u;
    SET_GPR_U32(ctx, 31, 0x12D0D0u);
    ctx->pc = 0x12D180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D180u, 0x12D0C8u, 0x12D0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D0D0u;
label_12d0d0:
    // 0x12d0d0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x12d0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x12d0d4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D0D4u;
    {
        const bool branch_taken_0x12d0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d0d4) {
            ctx->pc = 0x12D0D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D0D4u;
            // 0x12d0d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D0E8u;
            goto label_12d0e8;
        }
    }
    ctx->pc = 0x12D0DCu;
    // 0x12d0dc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x12D0DCu;
    SET_GPR_U32(ctx, 31, 0x12D0E4u);
    ctx->pc = 0x12D0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D0DCu;
    // 0x12d0e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x12D0DCu, 0x12D0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D0E4u;
label_12d0e4:
    // 0x12d0e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12d0e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12d0e8:
    // 0x12d0e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12d0e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12d0ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12d0ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d0f0: 0x3e00008  jr          $ra
    ctx->pc = 0x12D0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D0F0u;
        // 0x12d0f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D0F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D0F8u;
}
