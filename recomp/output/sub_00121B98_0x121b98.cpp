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

// Function: sub_00121B98
// Address: 0x121b98 - 0x121c78
void sub_00121B98_0x121b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121B98_0x121b98");
#endif

    switch (ctx->pc) {
        case 0x121bccu: goto label_121bcc;
        case 0x121bdcu: goto label_121bdc;
        case 0x121c00u: goto label_121c00;
        case 0x121c10u: goto label_121c10;
        case 0x121c1cu: goto label_121c1c;
        case 0x121c28u: goto label_121c28;
        case 0x121c34u: goto label_121c34;
        case 0x121c40u: goto label_121c40;
        case 0x121c4cu: goto label_121c4c;
        default: break;
    }

    ctx->pc = 0x121b98u;

    // 0x121b98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x121b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x121b9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x121b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x121ba0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x121ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x121ba4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x121ba4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ba8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x121ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x121bac: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x121bacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121bb0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x121bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x121bb4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x121bb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121bb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x121bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x121bbc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x121bbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121bc0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x121bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x121bc4: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x121BC4u;
    SET_GPR_U32(ctx, 31, 0x121BCCu);
    ctx->pc = 0x121BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121BC4u;
    // 0x121bc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x121BC4u, 0x121BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121BCCu;
label_121bcc:
    // 0x121bcc: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x121BCCu;
    {
        const bool branch_taken_0x121bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BCCu;
        // 0x121bd0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121bcc) {
            ctx->pc = 0x121C58u;
            goto label_121c58;
        }
    }
    ctx->pc = 0x121BD4u;
    // 0x121bd4: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x121BD4u;
    SET_GPR_U32(ctx, 31, 0x121BDCu);
    ctx->pc = 0x121BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121BD4u;
    // 0x121bd8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x121BD4u, 0x121BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121BDCu;
label_121bdc:
    // 0x121bdc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x121BDCu;
    {
        const bool branch_taken_0x121bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BDCu;
        // 0x121be0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121bdc) {
            ctx->pc = 0x121C58u;
            goto label_121c58;
        }
    }
    ctx->pc = 0x121BE4u;
    // 0x121be4: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x121BE4u;
    {
        const bool branch_taken_0x121be4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x121BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BE4u;
        // 0x121be8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121be4) {
            ctx->pc = 0x121C5Cu;
            goto label_121c5c;
        }
    }
    ctx->pc = 0x121BECu;
    // 0x121bec: 0x2e220011  sltiu       $v0, $s1, 0x11
    ctx->pc = 0x121becu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x121bf0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x121BF0u;
    {
        const bool branch_taken_0x121bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BF0u;
        // 0x121bf4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121bf0) {
            ctx->pc = 0x121C54u;
            goto label_121c54;
        }
    }
    ctx->pc = 0x121BF8u;
    // 0x121bf8: 0xc04a2e0  jal         func_128B80
    ctx->pc = 0x121BF8u;
    SET_GPR_U32(ctx, 31, 0x121C00u);
    ctx->pc = 0x121BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121BF8u;
    // 0x121bfc: 0x24050653  addiu       $a1, $zero, 0x653 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1619));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128B80u, 0x121BF8u, 0x121C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C00u;
label_121c00:
    // 0x121c00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x121c00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121c04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x121c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121c08: 0xc05a6b0  jal         func_169AC0
    ctx->pc = 0x121C08u;
    SET_GPR_U32(ctx, 31, 0x121C10u);
    ctx->pc = 0x121C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C08u;
    // 0x121c0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169AC0u, 0x121C08u, 0x121C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C10u;
label_121c10:
    // 0x121c10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121c14: 0xc05a6ba  jal         func_169AE8
    ctx->pc = 0x121C14u;
    SET_GPR_U32(ctx, 31, 0x121C1Cu);
    ctx->pc = 0x121C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C14u;
    // 0x121c18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169AE8u, 0x121C14u, 0x121C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C1Cu;
label_121c1c:
    // 0x121c1c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x121c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121c20: 0xc05a6be  jal         func_169AF8
    ctx->pc = 0x121C20u;
    SET_GPR_U32(ctx, 31, 0x121C28u);
    ctx->pc = 0x121C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C20u;
    // 0x121c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169AF8u, 0x121C20u, 0x121C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C28u;
label_121c28:
    // 0x121c28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121c2c: 0xc05a772  jal         func_169DC8
    ctx->pc = 0x121C2Cu;
    SET_GPR_U32(ctx, 31, 0x121C34u);
    ctx->pc = 0x121C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C2Cu;
    // 0x121c30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169DC8u, 0x121C2Cu, 0x121C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C34u;
label_121c34:
    // 0x121c34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x121c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121c38: 0xc05a736  jal         func_169CD8
    ctx->pc = 0x121C38u;
    SET_GPR_U32(ctx, 31, 0x121C40u);
    ctx->pc = 0x121C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C38u;
    // 0x121c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169CD8u, 0x121C38u, 0x121C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C40u;
label_121c40:
    // 0x121c40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x121c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121c44: 0xc049944  jal         func_126510
    ctx->pc = 0x121C44u;
    SET_GPR_U32(ctx, 31, 0x121C4Cu);
    ctx->pc = 0x121C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C44u;
    // 0x121c48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126510u, 0x121C44u, 0x121C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C4Cu;
label_121c4c:
    // 0x121c4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x121C4Cu;
    {
        const bool branch_taken_0x121c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C4Cu;
        // 0x121c50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121c4c) {
            ctx->pc = 0x121C58u;
            goto label_121c58;
        }
    }
    ctx->pc = 0x121C54u;
label_121c54:
    // 0x121c54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x121c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_121c58:
    // 0x121c58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x121c58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_121c5c:
    // 0x121c5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x121c5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x121c60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x121c60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121c64: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x121c64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x121c68: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x121c68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x121c6c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x121c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x121c70: 0x3e00008  jr          $ra
    ctx->pc = 0x121C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C70u;
        // 0x121c74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121C78u;
}
