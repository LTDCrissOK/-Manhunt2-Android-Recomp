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

// Function: sub_003B7FD0
// Address: 0x3b7fd0 - 0x3b8048
void sub_003B7FD0_0x3b7fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B7FD0_0x3b7fd0");
#endif

    switch (ctx->pc) {
        case 0x3b7ff4u: goto label_3b7ff4;
        case 0x3b8010u: goto label_3b8010;
        case 0x3b8020u: goto label_3b8020;
        default: break;
    }

    ctx->pc = 0x3b7fd0u;

    // 0x3b7fd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b7fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b7fd4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b7fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3b7fd8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b7fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b7fdc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3b7fdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b7fe0: 0x3c110043  lui         $s1, 0x43
    ctx->pc = 0x3b7fe0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)67 << 16));
    // 0x3b7fe4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b7fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b7fe8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b7fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b7fec: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x3B7FECu;
    SET_GPR_U32(ctx, 31, 0x3B7FF4u);
    ctx->pc = 0x3B7FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7FECu;
    // 0x3b7ff0: 0xae32aca4  sw          $s2, -0x535C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294945956), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x3B7FECu, 0x3B7FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7FF4u;
label_3b7ff4:
    // 0x3b7ff4: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x3b7ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x3b7ff8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3b7ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3b7ffc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b7ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8000: 0x24a57f78  addiu       $a1, $a1, 0x7F78
    ctx->pc = 0x3b8000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32632));
    // 0x3b8004: 0x34840012  ori         $a0, $a0, 0x12
    ctx->pc = 0x3b8004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
    // 0x3b8008: 0xc0f3154  jal         func_3CC550
    ctx->pc = 0x3B8008u;
    SET_GPR_U32(ctx, 31, 0x3B8010u);
    ctx->pc = 0x3B800Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8008u;
    // 0x3b800c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC550u, 0x3B8008u, 0x3B8010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8010u;
label_3b8010:
    // 0x3b8010: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B8010u;
    {
        const bool branch_taken_0x3b8010 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8010u;
        // 0x3b8014: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8010) {
            ctx->pc = 0x3B8024u;
            goto label_3b8024;
        }
    }
    ctx->pc = 0x3B8018u;
    // 0x3b8018: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x3B8018u;
    SET_GPR_U32(ctx, 31, 0x3B8020u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x3B8018u, 0x3B8020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8020u;
label_3b8020:
    // 0x3b8020: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3b8020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_3b8024:
    // 0x3b8024: 0xae20aca4  sw          $zero, -0x535C($s1)
    ctx->pc = 0x3b8024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294945956), GPR_U32(ctx, 0));
    // 0x3b8028: 0xac52acc8  sw          $s2, -0x5338($v0)
    ctx->pc = 0x3b8028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945992), GPR_U32(ctx, 18));
    // 0x3b802c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b802cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b8030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b8030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b8034: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b8034u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b8038: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b8038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b803c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b803cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b8040: 0x3e00008  jr          $ra
    ctx->pc = 0x3B8040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B8044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8040u;
        // 0x3b8044: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B8040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B8048u;
}
