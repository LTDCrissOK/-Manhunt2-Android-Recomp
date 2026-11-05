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

// Function: sub_002D78B0
// Address: 0x2d78b0 - 0x2d7988
void sub_002D78B0_0x2d78b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D78B0_0x2d78b0");
#endif

    switch (ctx->pc) {
        case 0x2d78d0u: goto label_2d78d0;
        case 0x2d78f0u: goto label_2d78f0;
        case 0x2d796cu: goto label_2d796c;
        default: break;
    }

    ctx->pc = 0x2d78b0u;

    // 0x2d78b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d78b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d78b4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2d78b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2d78b8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2d78b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2d78bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d78bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d78c0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d78c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d78c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d78c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d78c8: 0xc0b6750  jal         func_2D9D40
    ctx->pc = 0x2D78C8u;
    SET_GPR_U32(ctx, 31, 0x2D78D0u);
    ctx->pc = 0x2D78CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D78C8u;
    // 0x2d78cc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9D40u, 0x2D78C8u, 0x2D78D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D78D0u;
label_2d78d0:
    // 0x2d78d0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2d78d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2d78d4: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x2d78d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2d78d8: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x2d78d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2d78dc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2d78dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d78e0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2D78E0u;
    {
        const bool branch_taken_0x2d78e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D78E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D78E0u;
        // 0x2d78e4: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d78e0) {
            ctx->pc = 0x2D790Cu;
            goto label_2d790c;
        }
    }
    ctx->pc = 0x2D78E8u;
    // 0x2d78e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d78e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d78ec: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2d78ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2d78f0:
    // 0x2d78f0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2d78f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2d78f4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D78F4u;
    {
        const bool branch_taken_0x2d78f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d78f4) {
            ctx->pc = 0x2D78F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D78F4u;
            // 0x2d78f8: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7904u;
            goto label_2d7904;
        }
    }
    ctx->pc = 0x2D78FCu;
    // 0x2d78fc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2d78fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7900: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2d7900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2d7904:
    // 0x2d7904: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D7904u;
    {
        const bool branch_taken_0x2d7904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7904) {
            ctx->pc = 0x2D7908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7904u;
            // 0x2d7908: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D78F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d78f0;
        }
    }
    ctx->pc = 0x2D790Cu;
label_2d790c:
    // 0x2d790c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2d790cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2d7910: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D7910u;
    {
        const bool branch_taken_0x2d7910 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7910u;
        // 0x2d7914: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7910) {
            ctx->pc = 0x2D792Cu;
            goto label_2d792c;
        }
    }
    ctx->pc = 0x2D7918u;
    // 0x2d7918: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2d7918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2d791c: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2d791cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2d7920: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2d7920u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d7924: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7924u;
    {
        const bool branch_taken_0x2d7924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7924) {
            ctx->pc = 0x2D7928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7924u;
            // 0x2d7928: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7934u;
            goto label_2d7934;
        }
    }
    ctx->pc = 0x2D792Cu;
label_2d792c:
    // 0x2d792c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d792cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7930: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2d7930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2d7934:
    // 0x2d7934: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2d7934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2d7938: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7938u;
    {
        const bool branch_taken_0x2d7938 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7938u;
        // 0x2d793c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7938) {
            ctx->pc = 0x2D7948u;
            goto label_2d7948;
        }
    }
    ctx->pc = 0x2D7940u;
    // 0x2d7940: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D7940u;
    {
        const bool branch_taken_0x2d7940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7940u;
        // 0x2d7944: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7940) {
            ctx->pc = 0x2D7970u;
            goto label_2d7970;
        }
    }
    ctx->pc = 0x2D7948u;
label_2d7948:
    // 0x2d7948: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x2d7948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2d794c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D794Cu;
    {
        const bool branch_taken_0x2d794c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D794Cu;
        // 0x2d7950: 0x24a50014  addiu       $a1, $a1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d794c) {
            ctx->pc = 0x2D795Cu;
            goto label_2d795c;
        }
    }
    ctx->pc = 0x2D7954u;
    // 0x2d7954: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7954u;
    {
        const bool branch_taken_0x2d7954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7954u;
        // 0x2d7958: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7954) {
            ctx->pc = 0x2D7964u;
            goto label_2d7964;
        }
    }
    ctx->pc = 0x2D795Cu;
label_2d795c:
    // 0x2d795c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2d795cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2d7960: 0x24451018  addiu       $a1, $v0, 0x1018
    ctx->pc = 0x2d7960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4120));
label_2d7964:
    // 0x2d7964: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x2D7964u;
    SET_GPR_U32(ctx, 31, 0x2D796Cu);
    ctx->pc = 0x2D7968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7964u;
    // 0x2d7968: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x2D7964u, 0x2D796Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D796Cu;
label_2d796c:
    // 0x2d796c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d796cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d7970:
    // 0x2d7970: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2d7970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d7974: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2d7974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7978: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d7978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d797c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D797Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D797Cu;
        // 0x2d7980: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D797Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7984u;
    // 0x2d7984: 0x0  nop
    ctx->pc = 0x2d7984u;
    // NOP
    ctx->pc = 0x2d7988u;
}
