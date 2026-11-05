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

// Function: sub_00394F68
// Address: 0x394f68 - 0x395030
void sub_00394F68_0x394f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00394F68_0x394f68");
#endif

    switch (ctx->pc) {
        case 0x394f94u: goto label_394f94;
        case 0x394fa4u: goto label_394fa4;
        case 0x394fbcu: goto label_394fbc;
        case 0x394fd4u: goto label_394fd4;
        case 0x394fdcu: goto label_394fdc;
        case 0x394fecu: goto label_394fec;
        default: break;
    }

    ctx->pc = 0x394f68u;

    // 0x394f68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x394f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x394f6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x394f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394f70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x394f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x394f74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x394f74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394f78: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x394f78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394f7c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x394f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x394f80: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x394f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x394f84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x394f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x394f88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x394f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x394f8c: 0xc0e4fb8  jal         func_393EE0
    ctx->pc = 0x394F8Cu;
    SET_GPR_U32(ctx, 31, 0x394F94u);
    ctx->pc = 0x394F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394F8Cu;
    // 0x394f90: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393EE0u, 0x394F8Cu, 0x394F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394F94u;
label_394f94:
    // 0x394f94: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x394F94u;
    {
        const bool branch_taken_0x394f94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x394F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F94u;
        // 0x394f98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394f94) {
            ctx->pc = 0x395018u;
            goto label_395018;
        }
    }
    ctx->pc = 0x394F9Cu;
    // 0x394f9c: 0xc0e568a  jal         func_395A28
    ctx->pc = 0x394F9Cu;
    SET_GPR_U32(ctx, 31, 0x394FA4u);
    ctx->pc = 0x395A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395A28u, 0x394F9Cu, 0x394FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394FA4u;
label_394fa4:
    // 0x394fa4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x394fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x394fa8: 0x82220001  lb          $v0, 0x1($s1)
    ctx->pc = 0x394fa8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x394fac: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x394FACu;
    {
        const bool branch_taken_0x394fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x394FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FACu;
        // 0x394fb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394fac) {
            ctx->pc = 0x394FBCu;
            goto label_394fbc;
        }
    }
    ctx->pc = 0x394FB4u;
    // 0x394fb4: 0xc0e551a  jal         func_395468
    ctx->pc = 0x394FB4u;
    SET_GPR_U32(ctx, 31, 0x394FBCu);
    ctx->pc = 0x395468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395468u, 0x394FB4u, 0x394FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394FBCu;
label_394fbc:
    // 0x394fbc: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x394fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x394fc0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x394FC0u;
    {
        const bool branch_taken_0x394fc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x394FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FC0u;
        // 0x394fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394fc0) {
            ctx->pc = 0x394FDCu;
            goto label_394fdc;
        }
    }
    ctx->pc = 0x394FC8u;
    // 0x394fc8: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x394fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x394fcc: 0xc0e667c  jal         func_3999F0
    ctx->pc = 0x394FCCu;
    SET_GPR_U32(ctx, 31, 0x394FD4u);
    ctx->pc = 0x394FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394FCCu;
    // 0x394fd0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3999F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3999F0u, 0x394FCCu, 0x394FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394FD4u;
label_394fd4:
    // 0x394fd4: 0xc0e65d6  jal         func_399758
    ctx->pc = 0x394FD4u;
    SET_GPR_U32(ctx, 31, 0x394FDCu);
    ctx->pc = 0x394FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394FD4u;
    // 0x394fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399758u, 0x394FD4u, 0x394FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394FDCu;
label_394fdc:
    // 0x394fdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x394fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394fe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x394fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394fe4: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x394FE4u;
    SET_GPR_U32(ctx, 31, 0x394FECu);
    ctx->pc = 0x394FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394FE4u;
    // 0x394fe8: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x394FE4u, 0x394FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394FECu;
label_394fec:
    // 0x394fec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x394fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x394ff0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x394ff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394ff4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x394ff4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x394ff8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x394ff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x394ffc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x394ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x395000: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x395000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x395004: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x395004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x395008: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x395008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39500c: 0x80e4fb8  j           func_393EE0
    ctx->pc = 0x39500Cu;
    ctx->pc = 0x395010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39500Cu;
    // 0x395010: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393EE0u;
    sub_00393EE0_0x393ee0(rdram, ctx, runtime); return;
    ctx->pc = 0x395014u;
    // 0x395014: 0x0  nop
    ctx->pc = 0x395014u;
    // NOP
label_395018:
    // 0x395018: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x395018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39501c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39501cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x395020: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x395020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x395024: 0x3e00008  jr          $ra
    ctx->pc = 0x395024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395024u;
        // 0x395028: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39502Cu;
    // 0x39502c: 0x0  nop
    ctx->pc = 0x39502cu;
    // NOP
    ctx->pc = 0x395030u;
}
