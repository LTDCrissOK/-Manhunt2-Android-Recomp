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

// Function: sub_0033C858
// Address: 0x33c858 - 0x33c948
void sub_0033C858_0x33c858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C858_0x33c858");
#endif

    switch (ctx->pc) {
        case 0x33c870u: goto label_33c870;
        case 0x33c8a4u: goto label_33c8a4;
        case 0x33c8b8u: goto label_33c8b8;
        case 0x33c8ccu: goto label_33c8cc;
        case 0x33c8e0u: goto label_33c8e0;
        case 0x33c8f4u: goto label_33c8f4;
        case 0x33c908u: goto label_33c908;
        case 0x33c91cu: goto label_33c91c;
        case 0x33c930u: goto label_33c930;
        default: break;
    }

    ctx->pc = 0x33c858u;

    // 0x33c858: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33c858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33c85c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33c85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33c860: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33c860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c864: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33c864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33c868: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x33c868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c86c: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x33c86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_33c870:
    // 0x33c870: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x33c870u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x33c874: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33c874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33c878: 0x2c820009  sltiu       $v0, $a0, 0x9
    ctx->pc = 0x33c878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x33c87c: 0x0  nop
    ctx->pc = 0x33c87cu;
    // NOP
    // 0x33c880: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x33C880u;
    {
        const bool branch_taken_0x33c880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C880u;
        // 0x33c884: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c880) {
            ctx->pc = 0x33C870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c870;
        }
    }
    ctx->pc = 0x33C888u;
    // 0x33c888: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33c888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33c88c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x33C88Cu;
    {
        const bool branch_taken_0x33c88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C88Cu;
        // 0x33c890: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c88c) {
            ctx->pc = 0x33C930u;
            goto label_33c930;
        }
    }
    ctx->pc = 0x33C894u;
    // 0x33c894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c898: 0x24a55f50  addiu       $a1, $a1, 0x5F50
    ctx->pc = 0x33c898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24400));
    // 0x33c89c: 0xc0cf264  jal         func_33C990
    ctx->pc = 0x33C89Cu;
    SET_GPR_U32(ctx, 31, 0x33C8A4u);
    ctx->pc = 0x33C8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C89Cu;
    // 0x33c8a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C990u, 0x33C89Cu, 0x33C8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C8A4u;
label_33c8a4:
    // 0x33c8a4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x33c8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x33c8a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c8ac: 0x24a55f60  addiu       $a1, $a1, 0x5F60
    ctx->pc = 0x33c8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24416));
    // 0x33c8b0: 0xc0cf264  jal         func_33C990
    ctx->pc = 0x33C8B0u;
    SET_GPR_U32(ctx, 31, 0x33C8B8u);
    ctx->pc = 0x33C8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C8B0u;
    // 0x33c8b4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C990u, 0x33C8B0u, 0x33C8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C8B8u;
label_33c8b8:
    // 0x33c8b8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x33c8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x33c8bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c8c0: 0x24a55f70  addiu       $a1, $a1, 0x5F70
    ctx->pc = 0x33c8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24432));
    // 0x33c8c4: 0xc0cf264  jal         func_33C990
    ctx->pc = 0x33C8C4u;
    SET_GPR_U32(ctx, 31, 0x33C8CCu);
    ctx->pc = 0x33C8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C8C4u;
    // 0x33c8c8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C990u, 0x33C8C4u, 0x33C8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C8CCu;
label_33c8cc:
    // 0x33c8cc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x33c8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x33c8d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c8d4: 0x24a55f80  addiu       $a1, $a1, 0x5F80
    ctx->pc = 0x33c8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24448));
    // 0x33c8d8: 0xc0cf264  jal         func_33C990
    ctx->pc = 0x33C8D8u;
    SET_GPR_U32(ctx, 31, 0x33C8E0u);
    ctx->pc = 0x33C8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C8D8u;
    // 0x33c8dc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C990u, 0x33C8D8u, 0x33C8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C8E0u;
label_33c8e0:
    // 0x33c8e0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x33c8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x33c8e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c8e8: 0x24a55f90  addiu       $a1, $a1, 0x5F90
    ctx->pc = 0x33c8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24464));
    // 0x33c8ec: 0xc0cf264  jal         func_33C990
    ctx->pc = 0x33C8ECu;
    SET_GPR_U32(ctx, 31, 0x33C8F4u);
    ctx->pc = 0x33C8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C8ECu;
    // 0x33c8f0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C990u, 0x33C8ECu, 0x33C8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C8F4u;
label_33c8f4:
    // 0x33c8f4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x33c8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x33c8f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c8fc: 0x24a55fa0  addiu       $a1, $a1, 0x5FA0
    ctx->pc = 0x33c8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24480));
    // 0x33c900: 0xc0cf264  jal         func_33C990
    ctx->pc = 0x33C900u;
    SET_GPR_U32(ctx, 31, 0x33C908u);
    ctx->pc = 0x33C904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C900u;
    // 0x33c904: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C990u, 0x33C900u, 0x33C908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C908u;
label_33c908:
    // 0x33c908: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x33c908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x33c90c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c910: 0x24a55fb0  addiu       $a1, $a1, 0x5FB0
    ctx->pc = 0x33c910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24496));
    // 0x33c914: 0xc0cf264  jal         func_33C990
    ctx->pc = 0x33C914u;
    SET_GPR_U32(ctx, 31, 0x33C91Cu);
    ctx->pc = 0x33C918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C914u;
    // 0x33c918: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C990u, 0x33C914u, 0x33C91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C91Cu;
label_33c91c:
    // 0x33c91c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x33c91cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x33c920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c924: 0x24a55fc0  addiu       $a1, $a1, 0x5FC0
    ctx->pc = 0x33c924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24512));
    // 0x33c928: 0xc0cf264  jal         func_33C990
    ctx->pc = 0x33C928u;
    SET_GPR_U32(ctx, 31, 0x33C930u);
    ctx->pc = 0x33C92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C928u;
    // 0x33c92c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C990u, 0x33C928u, 0x33C930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C930u;
label_33c930:
    // 0x33c930: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33c930u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c934: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c938: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33c938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33c93c: 0x3e00008  jr          $ra
    ctx->pc = 0x33C93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C93Cu;
        // 0x33c940: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C93Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C944u;
    // 0x33c944: 0x0  nop
    ctx->pc = 0x33c944u;
    // NOP
    ctx->pc = 0x33c948u;
}
