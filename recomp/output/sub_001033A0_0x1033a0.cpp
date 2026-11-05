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

// Function: sub_001033A0
// Address: 0x1033a0 - 0x103450
void sub_001033A0_0x1033a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001033A0_0x1033a0");
#endif

    switch (ctx->pc) {
        case 0x1033c8u: goto label_1033c8;
        case 0x1033e8u: goto label_1033e8;
        case 0x1033fcu: goto label_1033fc;
        case 0x103408u: goto label_103408;
        default: break;
    }

    ctx->pc = 0x1033a0u;

    // 0x1033a0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1033a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1033a4: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x1033a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x1033a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1033a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1033ac: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x1033acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x1033b0: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x1033b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x1033b4: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x1033b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x1033b8: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x1033b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x1033bc: 0xffbf0128  sd          $ra, 0x128($sp)
    ctx->pc = 0x1033bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 31));
    // 0x1033c0: 0xc0ab004  jal         func_2AC010
    ctx->pc = 0x1033C0u;
    SET_GPR_U32(ctx, 31, 0x1033C8u);
    ctx->pc = 0x1033C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1033C0u;
    // 0x1033c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC010u, 0x1033C0u, 0x1033C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1033C8u;
label_1033c8:
    // 0x1033c8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1033c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1033cc: 0x8c620724  lw          $v0, 0x724($v1)
    ctx->pc = 0x1033ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F0724u));
    // 0x1033d0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1033D0u;
    {
        const bool branch_taken_0x1033d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1033D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1033D0u;
        // 0x1033d4: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1033d0) {
            ctx->pc = 0x103428u;
            goto label_103428;
        }
    }
    ctx->pc = 0x1033D8u;
    // 0x1033d8: 0x3c13003f  lui         $s3, 0x3F
    ctx->pc = 0x1033d8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)63 << 16));
    // 0x1033dc: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x1033dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1033e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1033e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1033e4: 0x0  nop
    ctx->pc = 0x1033e4u;
    // NOP
label_1033e8:
    // 0x1033e8: 0x8e620720  lw          $v0, 0x720($s3)
    ctx->pc = 0x1033e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1824)));
    // 0x1033ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1033ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1033f0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1033f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1033f4: 0xc0ab004  jal         func_2AC010
    ctx->pc = 0x1033F4u;
    SET_GPR_U32(ctx, 31, 0x1033FCu);
    ctx->pc = 0x1033F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1033F4u;
    // 0x1033f8: 0x8c440034  lw          $a0, 0x34($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC010u, 0x1033F4u, 0x1033FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1033FCu;
label_1033fc:
    // 0x1033fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1033fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103400: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x103400u;
    SET_GPR_U32(ctx, 31, 0x103408u);
    ctx->pc = 0x103404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103400u;
    // 0x103404: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x103400u, 0x103408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103408u;
label_103408:
    // 0x103408: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x103408u;
    {
        const bool branch_taken_0x103408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10340Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103408u;
        // 0x10340c: 0x8e820724  lw          $v0, 0x724($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103408) {
            ctx->pc = 0x103418u;
            goto label_103418;
        }
    }
    ctx->pc = 0x103410u;
    // 0x103410: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x103410u;
    {
        const bool branch_taken_0x103410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103410u;
        // 0x103414: 0x320200ff  andi        $v0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x103410) {
            ctx->pc = 0x10342Cu;
            goto label_10342c;
        }
    }
    ctx->pc = 0x103418u;
label_103418:
    // 0x103418: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x103418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x10341c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x10341cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x103420: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x103420u;
    {
        const bool branch_taken_0x103420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103420u;
        // 0x103424: 0x2652004c  addiu       $s2, $s2, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103420) {
            ctx->pc = 0x1033E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1033e8;
        }
    }
    ctx->pc = 0x103428u;
label_103428:
    // 0x103428: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x103428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_10342c:
    // 0x10342c: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x10342cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x103430: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x103430u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x103434: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x103434u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x103438: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x103438u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x10343c: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x10343cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x103440: 0xdfbf0128  ld          $ra, 0x128($sp)
    ctx->pc = 0x103440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x103444: 0x3e00008  jr          $ra
    ctx->pc = 0x103444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103444u;
        // 0x103448: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10344Cu;
    // 0x10344c: 0x0  nop
    ctx->pc = 0x10344cu;
    // NOP
    ctx->pc = 0x103450u;
}
