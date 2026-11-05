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

// Function: sub_00171BA0
// Address: 0x171ba0 - 0x171c80
void sub_00171BA0_0x171ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171BA0_0x171ba0");
#endif

    switch (ctx->pc) {
        case 0x171bc8u: goto label_171bc8;
        case 0x171bd8u: goto label_171bd8;
        case 0x171be4u: goto label_171be4;
        case 0x171bf4u: goto label_171bf4;
        case 0x171c0cu: goto label_171c0c;
        case 0x171c1cu: goto label_171c1c;
        case 0x171c28u: goto label_171c28;
        case 0x171c40u: goto label_171c40;
        case 0x171c50u: goto label_171c50;
        case 0x171c5cu: goto label_171c5c;
        case 0x171c6cu: goto label_171c6c;
        default: break;
    }

    ctx->pc = 0x171ba0u;

    // 0x171ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x171ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x171ba4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x171ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171ba8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x171ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171bac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x171bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x171bb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x171bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171bb4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x171bb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171bb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x171bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x171bbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171bc0: 0xc05ca20  jal         func_172880
    ctx->pc = 0x171BC0u;
    SET_GPR_U32(ctx, 31, 0x171BC8u);
    ctx->pc = 0x171BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171BC0u;
    // 0x171bc4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172880u, 0x171BC0u, 0x171BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171BC8u;
label_171bc8:
    // 0x171bc8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x171BC8u;
    {
        const bool branch_taken_0x171bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171BC8u;
        // 0x171bcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171bc8) {
            ctx->pc = 0x171BFCu;
            goto label_171bfc;
        }
    }
    ctx->pc = 0x171BD0u;
    // 0x171bd0: 0xc05c874  jal         func_1721D0
    ctx->pc = 0x171BD0u;
    SET_GPR_U32(ctx, 31, 0x171BD8u);
    ctx->pc = 0x171BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171BD0u;
    // 0x171bd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1721D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1721D0u, 0x171BD0u, 0x171BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171BD8u;
label_171bd8:
    // 0x171bd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x171bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171bdc: 0xc05d0de  jal         func_174378
    ctx->pc = 0x171BDCu;
    SET_GPR_U32(ctx, 31, 0x171BE4u);
    ctx->pc = 0x171BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171BDCu;
    // 0x171be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174378u, 0x171BDCu, 0x171BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171BE4u;
label_171be4:
    // 0x171be4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171be8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171bec: 0xc05c720  jal         func_171C80
    ctx->pc = 0x171BECu;
    SET_GPR_U32(ctx, 31, 0x171BF4u);
    ctx->pc = 0x171BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171BECu;
    // 0x171bf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171C80u, 0x171BECu, 0x171BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171BF4u;
label_171bf4:
    // 0x171bf4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x171BF4u;
    {
        const bool branch_taken_0x171bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171BF4u;
        // 0x171bf8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171bf4) {
            ctx->pc = 0x171C70u;
            goto label_171c70;
        }
    }
    ctx->pc = 0x171BFCu;
label_171bfc:
    // 0x171bfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171c00: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x171c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x171c04: 0xc05ca20  jal         func_172880
    ctx->pc = 0x171C04u;
    SET_GPR_U32(ctx, 31, 0x171C0Cu);
    ctx->pc = 0x171C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171C04u;
    // 0x171c08: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172880u, 0x171C04u, 0x171C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171C0Cu;
label_171c0c:
    // 0x171c0c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x171C0Cu;
    {
        const bool branch_taken_0x171c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171c0c) {
            ctx->pc = 0x171C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171C0Cu;
            // 0x171c10: 0x8e0202b0  lw          $v0, 0x2B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171C30u;
            goto label_171c30;
        }
    }
    ctx->pc = 0x171C14u;
    // 0x171c14: 0xc05c874  jal         func_1721D0
    ctx->pc = 0x171C14u;
    SET_GPR_U32(ctx, 31, 0x171C1Cu);
    ctx->pc = 0x171C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171C14u;
    // 0x171c18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1721D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1721D0u, 0x171C14u, 0x171C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171C1Cu;
label_171c1c:
    // 0x171c1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171c20: 0xc05c766  jal         func_171D98
    ctx->pc = 0x171C20u;
    SET_GPR_U32(ctx, 31, 0x171C28u);
    ctx->pc = 0x171C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171C20u;
    // 0x171c24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171D98u, 0x171C20u, 0x171C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171C28u;
label_171c28:
    // 0x171c28: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x171C28u;
    {
        const bool branch_taken_0x171c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171C28u;
        // 0x171c2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171c28) {
            ctx->pc = 0x171C70u;
            goto label_171c70;
        }
    }
    ctx->pc = 0x171C30u;
label_171c30:
    // 0x171c30: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x171C30u;
    {
        const bool branch_taken_0x171c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171c30) {
            ctx->pc = 0x171C64u;
            goto label_171c64;
        }
    }
    ctx->pc = 0x171C38u;
    // 0x171c38: 0xc05c940  jal         func_172500
    ctx->pc = 0x171C38u;
    SET_GPR_U32(ctx, 31, 0x171C40u);
    ctx->pc = 0x171C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171C38u;
    // 0x171c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172500u, 0x171C38u, 0x171C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171C40u;
label_171c40:
    // 0x171c40: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x171C40u;
    {
        const bool branch_taken_0x171c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171c40) {
            ctx->pc = 0x171C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171C40u;
            // 0x171c44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171C70u;
            goto label_171c70;
        }
    }
    ctx->pc = 0x171C48u;
    // 0x171c48: 0xc05c874  jal         func_1721D0
    ctx->pc = 0x171C48u;
    SET_GPR_U32(ctx, 31, 0x171C50u);
    ctx->pc = 0x171C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171C48u;
    // 0x171c4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1721D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1721D0u, 0x171C48u, 0x171C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171C50u;
label_171c50:
    // 0x171c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171c54: 0xc05c7f2  jal         func_171FC8
    ctx->pc = 0x171C54u;
    SET_GPR_U32(ctx, 31, 0x171C5Cu);
    ctx->pc = 0x171C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171C54u;
    // 0x171c58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171FC8u, 0x171C54u, 0x171C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171C5Cu;
label_171c5c:
    // 0x171c5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x171C5Cu;
    {
        const bool branch_taken_0x171c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171C5Cu;
        // 0x171c60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171c5c) {
            ctx->pc = 0x171C70u;
            goto label_171c70;
        }
    }
    ctx->pc = 0x171C64u;
label_171c64:
    // 0x171c64: 0xc05c874  jal         func_1721D0
    ctx->pc = 0x171C64u;
    SET_GPR_U32(ctx, 31, 0x171C6Cu);
    ctx->pc = 0x171C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171C64u;
    // 0x171c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1721D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1721D0u, 0x171C64u, 0x171C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171C6Cu;
label_171c6c:
    // 0x171c6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171c6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_171c70:
    // 0x171c70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x171c70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171c74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x171c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171c78: 0x3e00008  jr          $ra
    ctx->pc = 0x171C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171C78u;
        // 0x171c7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171C80u;
}
