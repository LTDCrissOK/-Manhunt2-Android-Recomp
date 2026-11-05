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

// Function: sub_002909B0
// Address: 0x2909b0 - 0x290a68
void sub_002909B0_0x2909b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002909B0_0x2909b0");
#endif

    switch (ctx->pc) {
        case 0x2909d4u: goto label_2909d4;
        case 0x2909e4u: goto label_2909e4;
        case 0x2909ecu: goto label_2909ec;
        case 0x290a14u: goto label_290a14;
        case 0x290a20u: goto label_290a20;
        case 0x290a2cu: goto label_290a2c;
        case 0x290a40u: goto label_290a40;
        case 0x290a4cu: goto label_290a4c;
        case 0x290a58u: goto label_290a58;
        default: break;
    }

    ctx->pc = 0x2909b0u;

    // 0x2909b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2909b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2909b4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2909b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2909b8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2909b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2909bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2909bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2909c0: 0x8e0202e0  lw          $v0, 0x2E0($s0)
    ctx->pc = 0x2909c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x2909c4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2909C4u;
    {
        const bool branch_taken_0x2909c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2909c4) {
            ctx->pc = 0x2909DCu;
            goto label_2909dc;
        }
    }
    ctx->pc = 0x2909CCu;
    // 0x2909cc: 0xc0a9952  jal         func_2A6548
    ctx->pc = 0x2909CCu;
    SET_GPR_U32(ctx, 31, 0x2909D4u);
    ctx->pc = 0x2A6548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6548u, 0x2909CCu, 0x2909D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2909D4u;
label_2909d4:
    // 0x2909d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2909D4u;
    {
        const bool branch_taken_0x2909d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2909d4) {
            ctx->pc = 0x2909E4u;
            goto label_2909e4;
        }
    }
    ctx->pc = 0x2909DCu;
label_2909dc:
    // 0x2909dc: 0xc0a790c  jal         func_29E430
    ctx->pc = 0x2909DCu;
    SET_GPR_U32(ctx, 31, 0x2909E4u);
    ctx->pc = 0x2909E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2909DCu;
    // 0x2909e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E430u, 0x2909DCu, 0x2909E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2909E4u;
label_2909e4:
    // 0x2909e4: 0xc0a0340  jal         func_280D00
    ctx->pc = 0x2909E4u;
    SET_GPR_U32(ctx, 31, 0x2909ECu);
    ctx->pc = 0x280D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D00u, 0x2909E4u, 0x2909ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2909ECu;
label_2909ec:
    // 0x2909ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2909ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2909f0: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2909F0u;
    {
        const bool branch_taken_0x2909f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2909F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2909F0u;
        // 0x2909f4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2909f0) {
            ctx->pc = 0x290A34u;
            goto label_290a34;
        }
    }
    ctx->pc = 0x2909F8u;
    // 0x2909f8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2909f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2909fc: 0x8c43bd5c  lw          $v1, -0x42A4($v0)
    ctx->pc = 0x2909fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD5Cu));
    // 0x290a00: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x290A00u;
    {
        const bool branch_taken_0x290a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x290A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A00u;
        // 0x290a04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a00) {
            ctx->pc = 0x290A34u;
            goto label_290a34;
        }
    }
    ctx->pc = 0x290A08u;
    // 0x290a08: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x290a08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x290a0c: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x290A0Cu;
    SET_GPR_U32(ctx, 31, 0x290A14u);
    ctx->pc = 0x290A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290A0Cu;
    // 0x290a10: 0x24a5b458  addiu       $a1, $a1, -0x4BA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x290A0Cu, 0x290A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290A14u;
label_290a14:
    // 0x290a14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x290a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290a18: 0xc0a789c  jal         func_29E270
    ctx->pc = 0x290A18u;
    SET_GPR_U32(ctx, 31, 0x290A20u);
    ctx->pc = 0x290A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290A18u;
    // 0x290a1c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E270u, 0x290A18u, 0x290A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290A20u;
label_290a20:
    // 0x290a20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x290a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290a24: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x290A24u;
    SET_GPR_U32(ctx, 31, 0x290A2Cu);
    ctx->pc = 0x290A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290A24u;
    // 0x290a28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x290A24u, 0x290A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290A2Cu;
label_290a2c:
    // 0x290a2c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x290A2Cu;
    {
        const bool branch_taken_0x290a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A2Cu;
        // 0x290a30: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a2c) {
            ctx->pc = 0x290A5Cu;
            goto label_290a5c;
        }
    }
    ctx->pc = 0x290A34u;
label_290a34:
    // 0x290a34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x290a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290a38: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x290A38u;
    SET_GPR_U32(ctx, 31, 0x290A40u);
    ctx->pc = 0x290A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290A38u;
    // 0x290a3c: 0x24a5b468  addiu       $a1, $a1, -0x4B98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x290A38u, 0x290A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290A40u;
label_290a40:
    // 0x290a40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x290a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290a44: 0xc0a789c  jal         func_29E270
    ctx->pc = 0x290A44u;
    SET_GPR_U32(ctx, 31, 0x290A4Cu);
    ctx->pc = 0x290A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290A44u;
    // 0x290a48: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E270u, 0x290A44u, 0x290A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290A4Cu;
label_290a4c:
    // 0x290a4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x290a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290a50: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x290A50u;
    SET_GPR_U32(ctx, 31, 0x290A58u);
    ctx->pc = 0x290A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290A50u;
    // 0x290a54: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x290A50u, 0x290A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290A58u;
label_290a58:
    // 0x290a58: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x290a58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_290a5c:
    // 0x290a5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x290a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x290a60: 0x3e00008  jr          $ra
    ctx->pc = 0x290A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A60u;
        // 0x290a64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290A68u;
}
