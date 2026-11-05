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

// Function: sub_00159F08
// Address: 0x159f08 - 0x159fc8
void sub_00159F08_0x159f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159F08_0x159f08");
#endif

    switch (ctx->pc) {
        case 0x159f2cu: goto label_159f2c;
        case 0x159f34u: goto label_159f34;
        case 0x159f3cu: goto label_159f3c;
        case 0x159f44u: goto label_159f44;
        case 0x159f4cu: goto label_159f4c;
        case 0x159f54u: goto label_159f54;
        case 0x159f90u: goto label_159f90;
        default: break;
    }

    ctx->pc = 0x159f08u;

    // 0x159f08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x159f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x159f0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x159f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x159f10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x159f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x159f14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x159f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159f18: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x159f18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x159f1c: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x159F1Cu;
    {
        const bool branch_taken_0x159f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x159f1c) {
            ctx->pc = 0x159F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159F1Cu;
            // 0x159f20: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159FBCu;
            goto label_159fbc;
        }
    }
    ctx->pc = 0x159F24u;
    // 0x159f24: 0xc056888  jal         func_15A220
    ctx->pc = 0x159F24u;
    SET_GPR_U32(ctx, 31, 0x159F2Cu);
    ctx->pc = 0x15A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A220u, 0x159F24u, 0x159F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159F2Cu;
label_159f2c:
    // 0x159f2c: 0xc0568be  jal         func_15A2F8
    ctx->pc = 0x159F2Cu;
    SET_GPR_U32(ctx, 31, 0x159F34u);
    ctx->pc = 0x159F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159F2Cu;
    // 0x159f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A2F8u, 0x159F2Cu, 0x159F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159F34u;
label_159f34:
    // 0x159f34: 0xc04f04c  jal         func_13C130
    ctx->pc = 0x159F34u;
    SET_GPR_U32(ctx, 31, 0x159F3Cu);
    ctx->pc = 0x159F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159F34u;
    // 0x159f38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C130u, 0x159F34u, 0x159F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159F3Cu;
label_159f3c:
    // 0x159f3c: 0xc04f06e  jal         func_13C1B8
    ctx->pc = 0x159F3Cu;
    SET_GPR_U32(ctx, 31, 0x159F44u);
    ctx->pc = 0x159F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159F3Cu;
    // 0x159f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C1B8u, 0x159F3Cu, 0x159F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159F44u;
label_159f44:
    // 0x159f44: 0xc0569b8  jal         func_15A6E0
    ctx->pc = 0x159F44u;
    SET_GPR_U32(ctx, 31, 0x159F4Cu);
    ctx->pc = 0x159F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159F44u;
    // 0x159f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A6E0u, 0x159F44u, 0x159F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159F4Cu;
label_159f4c:
    // 0x159f4c: 0xc05810c  jal         func_160430
    ctx->pc = 0x159F4Cu;
    SET_GPR_U32(ctx, 31, 0x159F54u);
    ctx->pc = 0x159F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159F4Cu;
    // 0x159f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160430u, 0x159F4Cu, 0x159F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159F54u;
label_159f54:
    // 0x159f54: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x159f54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x159f58: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x159F58u;
    {
        const bool branch_taken_0x159f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x159f58) {
            ctx->pc = 0x159F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159F58u;
            // 0x159f5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159FBCu;
            goto label_159fbc;
        }
    }
    ctx->pc = 0x159F60u;
    // 0x159f60: 0x92020a20  lbu         $v0, 0xA20($s0)
    ctx->pc = 0x159f60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2592)));
    // 0x159f64: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x159f64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159f68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x159f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x159f6c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x159F6Cu;
    {
        const bool branch_taken_0x159f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x159f6c) {
            ctx->pc = 0x159F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159F6Cu;
            // 0x159f70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159FBCu;
            goto label_159fbc;
        }
    }
    ctx->pc = 0x159F74u;
    // 0x159f74: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x159F74u;
    {
        const bool branch_taken_0x159f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F74u;
        // 0x159f78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159f74) {
            ctx->pc = 0x159FB8u;
            goto label_159fb8;
        }
    }
    ctx->pc = 0x159F7Cu;
    // 0x159f7c: 0x8e030320  lw          $v1, 0x320($s0)
    ctx->pc = 0x159f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x159f80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x159f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x159f84: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x159F84u;
    {
        const bool branch_taken_0x159f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x159f84) {
            ctx->pc = 0x159F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159F84u;
            // 0x159f88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159FBCu;
            goto label_159fbc;
        }
    }
    ctx->pc = 0x159F8Cu;
    // 0x159f8c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x159f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_159f90:
    // 0x159f90: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x159f90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x159f94: 0xa7182b  sltu        $v1, $a1, $a3
    ctx->pc = 0x159f94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x159f98: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x159F98u;
    {
        const bool branch_taken_0x159f98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x159F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F98u;
        // 0x159f9c: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159f98) {
            ctx->pc = 0x159FB8u;
            goto label_159fb8;
        }
    }
    ctx->pc = 0x159FA0u;
    // 0x159fa0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x159fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x159fa4: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x159fa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x159fa8: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x159fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x159fac: 0x8c430320  lw          $v1, 0x320($v0)
    ctx->pc = 0x159facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x159fb0: 0x1464fff7  bne         $v1, $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x159FB0u;
    {
        const bool branch_taken_0x159fb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x159FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159FB0u;
        // 0x159fb4: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159fb0) {
            ctx->pc = 0x159F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159f90;
        }
    }
    ctx->pc = 0x159FB8u;
label_159fb8:
    // 0x159fb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x159fb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_159fbc:
    // 0x159fbc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x159fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x159fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x159FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159FC0u;
        // 0x159fc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159FC8u;
}
