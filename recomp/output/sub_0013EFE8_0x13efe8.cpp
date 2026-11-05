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

// Function: sub_0013EFE8
// Address: 0x13efe8 - 0x13f0c0
void sub_0013EFE8_0x13efe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013EFE8_0x13efe8");
#endif

    switch (ctx->pc) {
        case 0x13f01cu: goto label_13f01c;
        case 0x13f048u: goto label_13f048;
        case 0x13f080u: goto label_13f080;
        case 0x13f0acu: goto label_13f0ac;
        default: break;
    }

    ctx->pc = 0x13efe8u;

    // 0x13efe8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13efe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13efec: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x13efecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x13eff0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13eff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13eff4: 0x24420730  addiu       $v0, $v0, 0x730
    ctx->pc = 0x13eff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1840));
    // 0x13eff8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13eff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13effc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13effcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f000: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13f000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13f004: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x13f004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x13f008: 0x8e030460  lw          $v1, 0x460($s0)
    ctx->pc = 0x13f008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x13f00c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13F00Cu;
    {
        const bool branch_taken_0x13f00c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F00Cu;
        // 0x13f010: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f00c) {
            ctx->pc = 0x13F01Cu;
            goto label_13f01c;
        }
    }
    ctx->pc = 0x13F014u;
    // 0x13f014: 0xc04fc48  jal         func_13F120
    ctx->pc = 0x13F014u;
    SET_GPR_U32(ctx, 31, 0x13F01Cu);
    ctx->pc = 0x13F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F120u, 0x13F014u, 0x13F01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F01Cu;
label_13f01c:
    // 0x13f01c: 0x32250001  andi        $a1, $s1, 0x1
    ctx->pc = 0x13f01cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x13f020: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x13f020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x13f024: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x13f024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x13f028: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x13f028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x13f02c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x13F02Cu;
    {
        const bool branch_taken_0x13f02c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F02Cu;
        // 0x13f030: 0x3c070043  lui         $a3, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f02c) {
            ctx->pc = 0x13F060u;
            goto label_13f060;
        }
    }
    ctx->pc = 0x13F034u;
    // 0x13f034: 0x26030620  addiu       $v1, $s0, 0x620
    ctx->pc = 0x13f034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x13f038: 0x5083000a  beql        $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x13F038u;
    {
        const bool branch_taken_0x13f038 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13f038) {
            ctx->pc = 0x13F03Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F038u;
            // 0x13f03c: 0x244205f0  addiu       $v0, $v0, 0x5F0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1520));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F064u;
            goto label_13f064;
        }
    }
    ctx->pc = 0x13F040u;
    // 0x13f040: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x13f040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x13f044: 0x0  nop
    ctx->pc = 0x13f044u;
    // NOP
label_13f048:
    // 0x13f048: 0x0  nop
    ctx->pc = 0x13f048u;
    // NOP
    // 0x13f04c: 0x0  nop
    ctx->pc = 0x13f04cu;
    // NOP
    // 0x13f050: 0x0  nop
    ctx->pc = 0x13f050u;
    // NOP
    // 0x13f054: 0x0  nop
    ctx->pc = 0x13f054u;
    // NOP
    // 0x13f058: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x13F058u;
    {
        const bool branch_taken_0x13f058 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x13f058) {
            ctx->pc = 0x13F05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F058u;
            // 0x13f05c: 0x2463ffec  addiu       $v1, $v1, -0x14 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13f048;
        }
    }
    ctx->pc = 0x13F060u;
label_13f060:
    // 0x13f060: 0x244205f0  addiu       $v0, $v0, 0x5F0
    ctx->pc = 0x13f060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1520));
label_13f064:
    // 0x13f064: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x13F064u;
    {
        const bool branch_taken_0x13f064 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F064u;
        // 0x13f068: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f064) {
            ctx->pc = 0x13F098u;
            goto label_13f098;
        }
    }
    ctx->pc = 0x13F06Cu;
    // 0x13f06c: 0x26020410  addiu       $v0, $s0, 0x410
    ctx->pc = 0x13f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1040));
    // 0x13f070: 0x50c2000a  beql        $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13F070u;
    {
        const bool branch_taken_0x13f070 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x13f070) {
            ctx->pc = 0x13F074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F070u;
            // 0x13f074: 0x24e20638  addiu       $v0, $a3, 0x638 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1592));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F09Cu;
            goto label_13f09c;
        }
    }
    ctx->pc = 0x13F078u;
    // 0x13f078: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x13f078u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f07c: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x13f07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_13f080:
    // 0x13f080: 0x0  nop
    ctx->pc = 0x13f080u;
    // NOP
    // 0x13f084: 0x0  nop
    ctx->pc = 0x13f084u;
    // NOP
    // 0x13f088: 0x0  nop
    ctx->pc = 0x13f088u;
    // NOP
    // 0x13f08c: 0x0  nop
    ctx->pc = 0x13f08cu;
    // NOP
    // 0x13f090: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x13F090u;
    {
        const bool branch_taken_0x13f090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F090u;
        // 0x13f094: 0x2442ffc0  addiu       $v0, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f090) {
            ctx->pc = 0x13F080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13f080;
        }
    }
    ctx->pc = 0x13F098u;
label_13f098:
    // 0x13f098: 0x24e20638  addiu       $v0, $a3, 0x638
    ctx->pc = 0x13f098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1592));
label_13f09c:
    // 0x13f09c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13F09Cu;
    {
        const bool branch_taken_0x13f09c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F09Cu;
        // 0x13f0a0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f09c) {
            ctx->pc = 0x13F0ACu;
            goto label_13f0ac;
        }
    }
    ctx->pc = 0x13F0A4u;
    // 0x13f0a4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x13F0A4u;
    SET_GPR_U32(ctx, 31, 0x13F0ACu);
    ctx->pc = 0x13F0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F0A4u;
    // 0x13f0a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x13F0A4u, 0x13F0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F0ACu;
label_13f0ac:
    // 0x13f0ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13f0acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f0b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13f0b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13f0b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13f0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f0b8: 0x3e00008  jr          $ra
    ctx->pc = 0x13F0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0B8u;
        // 0x13f0bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F0B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F0C0u;
}
