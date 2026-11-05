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

// Function: sub_00115FF0
// Address: 0x115ff0 - 0x116098
void sub_00115FF0_0x115ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115FF0_0x115ff0");
#endif

    switch (ctx->pc) {
        case 0x116000u: goto label_116000;
        case 0x116038u: goto label_116038;
        default: break;
    }

    ctx->pc = 0x115ff0u;

    // 0x115ff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x115ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x115ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115ff8: 0xc089490  jal         func_225240
    ctx->pc = 0x115FF8u;
    SET_GPR_U32(ctx, 31, 0x116000u);
    ctx->pc = 0x115FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115FF8u;
    // 0x115ffc: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225240u, 0x115FF8u, 0x116000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116000u;
label_116000:
    // 0x116000: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x116000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116004: 0x3e00008  jr          $ra
    ctx->pc = 0x116004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116004u;
        // 0x116008: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11600Cu;
    // 0x11600c: 0x0  nop
    ctx->pc = 0x11600cu;
    // NOP
    // 0x116010: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x116010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x116014: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x116014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116018: 0x8c660224  lw          $a2, 0x224($v1)
    ctx->pc = 0x116018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x11601c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x11601cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x116020: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x116020u;
    {
        const bool branch_taken_0x116020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116020u;
        // 0x116024: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116020) {
            ctx->pc = 0x11606Cu;
            goto label_11606c;
        }
    }
    ctx->pc = 0x116028u;
    // 0x116028: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x116028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x11602c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11602Cu;
    {
        const bool branch_taken_0x11602c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11602Cu;
        // 0x116030: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11602c) {
            ctx->pc = 0x11604Cu;
            goto label_11604c;
        }
    }
    ctx->pc = 0x116034u;
    // 0x116034: 0x0  nop
    ctx->pc = 0x116034u;
    // NOP
label_116038:
    // 0x116038: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x116038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11603c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x11603cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x116040: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x116040u;
    {
        const bool branch_taken_0x116040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116040u;
        // 0x116044: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116040) {
            ctx->pc = 0x11606Cu;
            goto label_11606c;
        }
    }
    ctx->pc = 0x116048u;
    // 0x116048: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x116048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_11604c:
    // 0x11604c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11604cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116050: 0x5040fff9  beql        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x116050u;
    {
        const bool branch_taken_0x116050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116050) {
            ctx->pc = 0x116054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116050u;
            // 0x116054: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116038;
        }
    }
    ctx->pc = 0x116058u;
    // 0x116058: 0x8c4200b8  lw          $v0, 0xB8($v0)
    ctx->pc = 0x116058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x11605c: 0x8c4302e0  lw          $v1, 0x2E0($v0)
    ctx->pc = 0x11605cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 736)));
    // 0x116060: 0x5060fff5  beql        $v1, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x116060u;
    {
        const bool branch_taken_0x116060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x116060) {
            ctx->pc = 0x116064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116060u;
            // 0x116064: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116038;
        }
    }
    ctx->pc = 0x116068u;
    // 0x116068: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x116068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11606c:
    // 0x11606c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x11606cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116070: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x116070u;
    {
        const bool branch_taken_0x116070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116070u;
        // 0x116074: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116070) {
            ctx->pc = 0x116084u;
            goto label_116084;
        }
    }
    ctx->pc = 0x116078u;
    // 0x116078: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x116078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x11607c: 0x3e00008  jr          $ra
    ctx->pc = 0x11607Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11607Cu;
        // 0x116080: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11607Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116084u;
label_116084:
    // 0x116084: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x116084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x116088: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x116088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x11608c: 0x3e00008  jr          $ra
    ctx->pc = 0x11608Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11608Cu;
        // 0x116090: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11608Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116094u;
    // 0x116094: 0x0  nop
    ctx->pc = 0x116094u;
    // NOP
    ctx->pc = 0x116098u;
}
