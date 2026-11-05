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

// Function: sub_001153D0
// Address: 0x1153d0 - 0x115438
void sub_001153D0_0x1153d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001153D0_0x1153d0");
#endif

    switch (ctx->pc) {
        case 0x115404u: goto label_115404;
        case 0x115420u: goto label_115420;
        default: break;
    }

    ctx->pc = 0x1153d0u;

    // 0x1153d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1153d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1153d4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1153d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1153d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1153d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1153dc: 0x244203d0  addiu       $v0, $v0, 0x3D0
    ctx->pc = 0x1153dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 976));
    // 0x1153e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1153e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1153e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1153e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1153e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1153e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1153ec: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x1153ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x1153f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1153f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1153f4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1153F4u;
    {
        const bool branch_taken_0x1153f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1153F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153F4u;
        // 0x1153f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153f4) {
            ctx->pc = 0x115404u;
            goto label_115404;
        }
    }
    ctx->pc = 0x1153FCu;
    // 0x1153fc: 0xc04551c  jal         func_115470
    ctx->pc = 0x1153FCu;
    SET_GPR_U32(ctx, 31, 0x115404u);
    ctx->pc = 0x115470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115470u, 0x1153FCu, 0x115404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115404u;
label_115404:
    // 0x115404: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x115404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x115408: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x115408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x11540c: 0x24420310  addiu       $v0, $v0, 0x310
    ctx->pc = 0x11540cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 784));
    // 0x115410: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x115410u;
    {
        const bool branch_taken_0x115410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x115414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115410u;
        // 0x115414: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115410) {
            ctx->pc = 0x115420u;
            goto label_115420;
        }
    }
    ctx->pc = 0x115418u;
    // 0x115418: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x115418u;
    SET_GPR_U32(ctx, 31, 0x115420u);
    ctx->pc = 0x11541Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115418u;
    // 0x11541c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x115418u, 0x115420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115420u;
label_115420:
    // 0x115420: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x115420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115424: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x115424u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x115428: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x115428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11542c: 0x3e00008  jr          $ra
    ctx->pc = 0x11542Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11542Cu;
        // 0x115430: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11542Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115434u;
    // 0x115434: 0x0  nop
    ctx->pc = 0x115434u;
    // NOP
    ctx->pc = 0x115438u;
}
