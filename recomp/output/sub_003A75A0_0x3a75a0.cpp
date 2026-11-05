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

// Function: sub_003A75A0
// Address: 0x3a75a0 - 0x3a7620
void sub_003A75A0_0x3a75a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A75A0_0x3a75a0");
#endif

    switch (ctx->pc) {
        case 0x3a75c0u: goto label_3a75c0;
        case 0x3a75e8u: goto label_3a75e8;
        case 0x3a75f0u: goto label_3a75f0;
        case 0x3a75fcu: goto label_3a75fc;
        case 0x3a7610u: goto label_3a7610;
        default: break;
    }

    ctx->pc = 0x3a75a0u;

    // 0x3a75a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a75a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a75a4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a75a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a75a8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3a75a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3a75ac: 0x24423f98  addiu       $v0, $v0, 0x3F98
    ctx->pc = 0x3a75acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16280));
    // 0x3a75b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3a75b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3a75b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a75b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a75b8: 0xc0e9d2a  jal         func_3A74A8
    ctx->pc = 0x3A75B8u;
    SET_GPR_U32(ctx, 31, 0x3A75C0u);
    ctx->pc = 0x3A75BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A75B8u;
    // 0x3a75bc: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A74A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A74A8u, 0x3A75B8u, 0x3A75C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A75C0u;
label_3a75c0:
    // 0x3a75c0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a75c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a75c4: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x3a75c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x3a75c8: 0x24503fb0  addiu       $s0, $v0, 0x3FB0
    ctx->pc = 0x3a75c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16304));
    // 0x3a75cc: 0x24843fb8  addiu       $a0, $a0, 0x3FB8
    ctx->pc = 0x3a75ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16312));
    // 0x3a75d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a75d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x413FB0u));
    // 0x3a75d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a75d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a75d8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A75D8u;
    {
        const bool branch_taken_0x3a75d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A75DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A75D8u;
        // 0x3a75dc: 0x24064700  addiu       $a2, $zero, 0x4700 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a75d8) {
            ctx->pc = 0x3A7600u;
            goto label_3a7600;
        }
    }
    ctx->pc = 0x3A75E0u;
    // 0x3a75e0: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3A75E0u;
    SET_GPR_U32(ctx, 31, 0x3A75E8u);
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3A75E0u, 0x3A75E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A75E8u;
label_3a75e8:
    // 0x3a75e8: 0xc0e9d64  jal         func_3A7590
    ctx->pc = 0x3A75E8u;
    SET_GPR_U32(ctx, 31, 0x3A75F0u);
    ctx->pc = 0x3A7590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7590u, 0x3A75E8u, 0x3A75F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A75F0u;
label_3a75f0:
    // 0x3a75f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a75f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a75f4: 0xc0e9d36  jal         func_3A74D8
    ctx->pc = 0x3A75F4u;
    SET_GPR_U32(ctx, 31, 0x3A75FCu);
    ctx->pc = 0x3A75F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A75F4u;
    // 0x3a75f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A74D8u, 0x3A75F4u, 0x3A75FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A75FCu;
label_3a75fc:
    // 0x3a75fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a75fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a7600:
    // 0x3a7600: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a7600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a7604: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a7604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7608: 0xc0e9d30  jal         func_3A74C0
    ctx->pc = 0x3A7608u;
    SET_GPR_U32(ctx, 31, 0x3A7610u);
    ctx->pc = 0x3A760Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7608u;
    // 0x3a760c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A74C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A74C0u, 0x3A7608u, 0x3A7610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7610u;
label_3a7610:
    // 0x3a7610: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3a7610u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a7614: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3a7614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a7618: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7618u;
        // 0x3a761c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7620u;
}
