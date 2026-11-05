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

// Function: sub_00259028
// Address: 0x259028 - 0x259148
void sub_00259028_0x259028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259028_0x259028");
#endif

    switch (ctx->pc) {
        case 0x259050u: goto label_259050;
        case 0x259060u: goto label_259060;
        case 0x259080u: goto label_259080;
        case 0x2590c0u: goto label_2590c0;
        case 0x2590e0u: goto label_2590e0;
        default: break;
    }

    ctx->pc = 0x259028u;

    // 0x259028: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x259028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25902c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x25902cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x259030: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x259030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x259034: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x259034u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x259038: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x259038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25903c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x25903cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x259040: 0x8e04bd50  lw          $a0, -0x42B0($s0)
    ctx->pc = 0x259040u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x259044: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x259044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x259048: 0xc0b9400  jal         func_2E5000
    ctx->pc = 0x259048u;
    SET_GPR_U32(ctx, 31, 0x259050u);
    ctx->pc = 0x2E5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5000u, 0x259048u, 0x259050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259050u;
label_259050:
    // 0x259050: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x259050u;
    {
        const bool branch_taken_0x259050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259050) {
            ctx->pc = 0x259054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259050u;
            // 0x259054: 0x8e221100  lw          $v0, 0x1100($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25906Cu;
            goto label_25906c;
        }
    }
    ctx->pc = 0x259058u;
    // 0x259058: 0xc0b93fe  jal         func_2E4FF8
    ctx->pc = 0x259058u;
    SET_GPR_U32(ctx, 31, 0x259060u);
    ctx->pc = 0x25905Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259058u;
    // 0x25905c: 0x8e04bd50  lw          $a0, -0x42B0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4FF8u, 0x259058u, 0x259060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259060u;
label_259060:
    // 0x259060: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x259060u;
    {
        const bool branch_taken_0x259060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259060) {
            ctx->pc = 0x259064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259060u;
            // 0x259064: 0xae201100  sw          $zero, 0x1100($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4352), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259078u;
            goto label_259078;
        }
    }
    ctx->pc = 0x259068u;
    // 0x259068: 0x8e221100  lw          $v0, 0x1100($s1)
    ctx->pc = 0x259068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4352)));
label_25906c:
    // 0x25906c: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x25906Cu;
    {
        const bool branch_taken_0x25906c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25906c) {
            ctx->pc = 0x259070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25906Cu;
            // 0x259070: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259134u;
            goto label_259134;
        }
    }
    ctx->pc = 0x259074u;
    // 0x259074: 0xae201100  sw          $zero, 0x1100($s1)
    ctx->pc = 0x259074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4352), GPR_U32(ctx, 0));
label_259078:
    // 0x259078: 0xc0963e4  jal         func_258F90
    ctx->pc = 0x259078u;
    SET_GPR_U32(ctx, 31, 0x259080u);
    ctx->pc = 0x25907Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259078u;
    // 0x25907c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258F90u, 0x259078u, 0x259080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259080u;
label_259080:
    // 0x259080: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x259080u;
    {
        const bool branch_taken_0x259080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259080u;
        // 0x259084: 0x3c02004b  lui         $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259080) {
            ctx->pc = 0x259130u;
            goto label_259130;
        }
    }
    ctx->pc = 0x259088u;
    // 0x259088: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x259088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x25908c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x25908cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x259090: 0x24424778  addiu       $v0, $v0, 0x4778
    ctx->pc = 0x259090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18296));
    // 0x259094: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x259094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x259098: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x259098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x25909c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x25909cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2590a0: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2590a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2590a4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2590a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2590a8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2590a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2590ac: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2590ACu;
    {
        const bool branch_taken_0x2590ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2590B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2590ACu;
        // 0x2590b0: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2590ac) {
            ctx->pc = 0x259130u;
            goto label_259130;
        }
    }
    ctx->pc = 0x2590B4u;
    // 0x2590b4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2590b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2590b8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2590b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2590bc: 0x0  nop
    ctx->pc = 0x2590bcu;
    // NOP
label_2590c0:
    // 0x2590c0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2590c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2590c4: 0x920302d5  lbu         $v1, 0x2D5($s0)
    ctx->pc = 0x2590c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 725)));
    // 0x2590c8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2590C8u;
    {
        const bool branch_taken_0x2590c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2590CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2590C8u;
        // 0x2590cc: 0x26040230  addiu       $a0, $s0, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2590c8) {
            ctx->pc = 0x2590F8u;
            goto label_2590f8;
        }
    }
    ctx->pc = 0x2590D0u;
    // 0x2590d0: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x2590d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2590d4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2590d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2590d8: 0xc0b4bc6  jal         func_2D2F18
    ctx->pc = 0x2590D8u;
    SET_GPR_U32(ctx, 31, 0x2590E0u);
    ctx->pc = 0x2590DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2590D8u;
    // 0x2590dc: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2F18u, 0x2590D8u, 0x2590E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2590E0u;
label_2590e0:
    // 0x2590e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2590e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2590e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2590E4u;
    {
        const bool branch_taken_0x2590e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2590E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2590E4u;
        // 0x2590e8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2590e4) {
            ctx->pc = 0x2590FCu;
            goto label_2590fc;
        }
    }
    ctx->pc = 0x2590ECu;
    // 0x2590ec: 0xae301100  sw          $s0, 0x1100($s1)
    ctx->pc = 0x2590ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4352), GPR_U32(ctx, 16));
    // 0x2590f0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2590F0u;
    {
        const bool branch_taken_0x2590f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2590F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2590F0u;
        // 0x2590f4: 0xa21202d4  sb          $s2, 0x2D4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 724), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2590f0) {
            ctx->pc = 0x259130u;
            goto label_259130;
        }
    }
    ctx->pc = 0x2590F8u;
label_2590f8:
    // 0x2590f8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2590f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2590fc:
    // 0x2590fc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2590FCu;
    {
        const bool branch_taken_0x2590fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2590fc) {
            ctx->pc = 0x259100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2590FCu;
            // 0x259100: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259110u;
            goto label_259110;
        }
    }
    ctx->pc = 0x259104u;
    // 0x259104: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x259104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x259108: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x259108u;
    {
        const bool branch_taken_0x259108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25910Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259108u;
        // 0x25910c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259108) {
            ctx->pc = 0x259120u;
            goto label_259120;
        }
    }
    ctx->pc = 0x259110u;
label_259110:
    // 0x259110: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259110u;
    {
        const bool branch_taken_0x259110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259110u;
        // 0x259114: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259110) {
            ctx->pc = 0x259124u;
            goto label_259124;
        }
    }
    ctx->pc = 0x259118u;
    // 0x259118: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x259118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x25911c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x25911cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_259120:
    // 0x259120: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x259120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_259124:
    // 0x259124: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x259124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x259128: 0x1462ffe5  bne         $v1, $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x259128u;
    {
        const bool branch_taken_0x259128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259128u;
        // 0x25912c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259128) {
            ctx->pc = 0x2590C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2590c0;
        }
    }
    ctx->pc = 0x259130u;
label_259130:
    // 0x259130: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x259130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_259134:
    // 0x259134: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x259134u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x259138: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x259138u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25913c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x25913cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x259140: 0x3e00008  jr          $ra
    ctx->pc = 0x259140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259140u;
        // 0x259144: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259148u;
}
