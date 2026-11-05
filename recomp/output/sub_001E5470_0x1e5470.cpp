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

// Function: sub_001E5470
// Address: 0x1e5470 - 0x1e54e0
void sub_001E5470_0x1e5470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5470_0x1e5470");
#endif

    switch (ctx->pc) {
        case 0x1e5498u: goto label_1e5498;
        case 0x1e54a0u: goto label_1e54a0;
        case 0x1e54a8u: goto label_1e54a8;
        default: break;
    }

    ctx->pc = 0x1e5470u;

    // 0x1e5470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e5470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e5474: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e5474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e5478: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e5478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e547c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e547cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e5480: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e5480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5484: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e5484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e5488: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E5488u;
    {
        const bool branch_taken_0x1e5488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5488u;
        // 0x1e548c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5488) {
            ctx->pc = 0x1E54C4u;
            goto label_1e54c4;
        }
    }
    ctx->pc = 0x1E5490u;
    // 0x1e5490: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e5490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5494: 0x0  nop
    ctx->pc = 0x1e5494u;
    // NOP
label_1e5498:
    // 0x1e5498: 0xc07957c  jal         func_1E55F0
    ctx->pc = 0x1E5498u;
    SET_GPR_U32(ctx, 31, 0x1E54A0u);
    ctx->pc = 0x1E549Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5498u;
    // 0x1e549c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E55F0u, 0x1E5498u, 0x1E54A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E54A0u;
label_1e54a0:
    // 0x1e54a0: 0xc0779a4  jal         func_1DE690
    ctx->pc = 0x1E54A0u;
    SET_GPR_U32(ctx, 31, 0x1E54A8u);
    ctx->pc = 0x1E54A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E54A0u;
    // 0x1e54a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE690u, 0x1E54A0u, 0x1E54A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E54A8u;
label_1e54a8:
    // 0x1e54a8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E54A8u;
    {
        const bool branch_taken_0x1e54a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E54ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E54A8u;
        // 0x1e54ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e54a8) {
            ctx->pc = 0x1E54C8u;
            goto label_1e54c8;
        }
    }
    ctx->pc = 0x1E54B0u;
    // 0x1e54b0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e54b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e54b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e54b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e54b8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1e54b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e54bc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E54BCu;
    {
        const bool branch_taken_0x1e54bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E54C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E54BCu;
        // 0x1e54c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e54bc) {
            ctx->pc = 0x1E5498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5498;
        }
    }
    ctx->pc = 0x1E54C4u;
label_1e54c4:
    // 0x1e54c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e54c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e54c8:
    // 0x1e54c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e54c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e54cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e54ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e54d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e54d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e54d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E54D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E54D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E54D4u;
        // 0x1e54d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E54D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E54DCu;
    // 0x1e54dc: 0x0  nop
    ctx->pc = 0x1e54dcu;
    // NOP
    ctx->pc = 0x1e54e0u;
}
