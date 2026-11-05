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

// Function: sub_002878B0
// Address: 0x2878b0 - 0x2879b8
void sub_002878B0_0x2878b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002878B0_0x2878b0");
#endif

    switch (ctx->pc) {
        case 0x2878c0u: goto label_2878c0;
        case 0x2878d0u: goto label_2878d0;
        case 0x2878e0u: goto label_2878e0;
        case 0x287944u: goto label_287944;
        case 0x287968u: goto label_287968;
        case 0x2879a4u: goto label_2879a4;
        default: break;
    }

    ctx->pc = 0x2878b0u;

    // 0x2878b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2878b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2878b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2878b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2878b8: 0xc0a1fe6  jal         func_287F98
    ctx->pc = 0x2878B8u;
    SET_GPR_U32(ctx, 31, 0x2878C0u);
    ctx->pc = 0x2878BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2878B8u;
    // 0x2878bc: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287F98u, 0x2878B8u, 0x2878C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2878C0u;
label_2878c0:
    // 0x2878c0: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2878C0u;
    {
        const bool branch_taken_0x2878c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2878C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2878C0u;
        // 0x2878c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2878c0) {
            ctx->pc = 0x2879A8u;
            goto label_2879a8;
        }
    }
    ctx->pc = 0x2878C8u;
    // 0x2878c8: 0xc0a1faa  jal         func_287EA8
    ctx->pc = 0x2878C8u;
    SET_GPR_U32(ctx, 31, 0x2878D0u);
    ctx->pc = 0x287EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287EA8u, 0x2878C8u, 0x2878D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2878D0u;
label_2878d0:
    // 0x2878d0: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2878D0u;
    {
        const bool branch_taken_0x2878d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2878D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2878D0u;
        // 0x2878d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2878d0) {
            ctx->pc = 0x2879A8u;
            goto label_2879a8;
        }
    }
    ctx->pc = 0x2878D8u;
    // 0x2878d8: 0xc0a1d88  jal         func_287620
    ctx->pc = 0x2878D8u;
    SET_GPR_U32(ctx, 31, 0x2878E0u);
    ctx->pc = 0x287620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287620u, 0x2878D8u, 0x2878E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2878E0u;
label_2878e0:
    // 0x2878e0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2878E0u;
    {
        const bool branch_taken_0x2878e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2878E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2878E0u;
        // 0x2878e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2878e0) {
            ctx->pc = 0x2878ECu;
            goto label_2878ec;
        }
    }
    ctx->pc = 0x2878E8u;
    // 0x2878e8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2878e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2878ec:
    // 0x2878ec: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2878ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2878f0: 0x8c62aa88  lw          $v0, -0x5578($v1)
    ctx->pc = 0x2878f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAA88u));
    // 0x2878f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2878F4u;
    {
        const bool branch_taken_0x2878f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2878F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2878F4u;
        // 0x2878f8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2878f4) {
            ctx->pc = 0x287914u;
            goto label_287914;
        }
    }
    ctx->pc = 0x2878FCu;
    // 0x2878fc: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2878fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x287900: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x287900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x287904: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x287904u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C2468u));
    // 0x287908: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x287908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x28790c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x28790Cu;
    {
        const bool branch_taken_0x28790c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28790c) {
            ctx->pc = 0x287910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28790Cu;
            // 0x287910: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28791Cu;
            goto label_28791c;
        }
    }
    ctx->pc = 0x287914u;
label_287914:
    // 0x287914: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x287914u;
    {
        const bool branch_taken_0x287914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287914u;
        // 0x287918: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287914) {
            ctx->pc = 0x287920u;
            goto label_287920;
        }
    }
    ctx->pc = 0x28791Cu;
label_28791c:
    // 0x28791c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x28791cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_287920:
    // 0x287920: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x287920u;
    {
        const bool branch_taken_0x287920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287920u;
        // 0x287924: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287920) {
            ctx->pc = 0x28792Cu;
            goto label_28792c;
        }
    }
    ctx->pc = 0x287928u;
    // 0x287928: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x287928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_28792c:
    // 0x28792c: 0x8c82aa88  lw          $v0, -0x5578($a0)
    ctx->pc = 0x28792cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945416)));
    // 0x287930: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x287930u;
    {
        const bool branch_taken_0x287930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287930u;
        // 0x287934: 0x240903fe  addiu       $t1, $zero, 0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1022));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287930) {
            ctx->pc = 0x28794Cu;
            goto label_28794c;
        }
    }
    ctx->pc = 0x287938u;
    // 0x287938: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x287938u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28793c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x28793Cu;
    {
        const bool branch_taken_0x28793c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28793Cu;
        // 0x287940: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28793c) {
            ctx->pc = 0x28798Cu;
            goto label_28798c;
        }
    }
    ctx->pc = 0x287944u;
label_287944:
    // 0x287944: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x287944u;
    {
        const bool branch_taken_0x287944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287944u;
        // 0x287948: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287944) {
            ctx->pc = 0x28798Cu;
            goto label_28798c;
        }
    }
    ctx->pc = 0x28794Cu;
label_28794c:
    // 0x28794c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x28794cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x287950: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x287950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x287954: 0x24482480  addiu       $t0, $v0, 0x2480
    ctx->pc = 0x287954u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 9344));
    // 0x287958: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x287958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28795c: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x28795cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287960: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x287960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287964: 0x24660078  addiu       $a2, $v1, 0x78
    ctx->pc = 0x287964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_287968:
    // 0x287968: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x287968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28796c: 0x5049fff5  beql        $v0, $t1, . + 4 + (-0xB << 2)
    ctx->pc = 0x28796Cu;
    {
        const bool branch_taken_0x28796c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x28796c) {
            ctx->pc = 0x287970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28796Cu;
            // 0x287970: 0x1041021  addu        $v0, $t0, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287944u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_287944;
        }
    }
    ctx->pc = 0x287974u;
    // 0x287974: 0x10470004  beq         $v0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x287974u;
    {
        const bool branch_taken_0x287974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x287978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287974u;
        // 0x287978: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287974) {
            ctx->pc = 0x287988u;
            goto label_287988;
        }
    }
    ctx->pc = 0x28797Cu;
    // 0x28797c: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x28797cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x287980: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x287980u;
    {
        const bool branch_taken_0x287980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287980u;
        // 0x287984: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287980) {
            ctx->pc = 0x287968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_287968;
        }
    }
    ctx->pc = 0x287988u;
label_287988:
    // 0x287988: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x287988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28798c:
    // 0x28798c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28798Cu;
    {
        const bool branch_taken_0x28798c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28798Cu;
        // 0x287990: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28798c) {
            ctx->pc = 0x287998u;
            goto label_287998;
        }
    }
    ctx->pc = 0x287994u;
    // 0x287994: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x287994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_287998:
    // 0x287998: 0x24a5a4cc  addiu       $a1, $a1, -0x5B34
    ctx->pc = 0x287998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943948));
    // 0x28799c: 0xc0a1f2a  jal         func_287CA8
    ctx->pc = 0x28799Cu;
    SET_GPR_U32(ctx, 31, 0x2879A4u);
    ctx->pc = 0x2879A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28799Cu;
    // 0x2879a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287CA8u, 0x28799Cu, 0x2879A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2879A4u;
label_2879a4:
    // 0x2879a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2879a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2879a8:
    // 0x2879a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2879a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2879ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2879ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2879B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2879ACu;
        // 0x2879b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2879ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2879B4u;
    // 0x2879b4: 0x0  nop
    ctx->pc = 0x2879b4u;
    // NOP
    ctx->pc = 0x2879b8u;
}
