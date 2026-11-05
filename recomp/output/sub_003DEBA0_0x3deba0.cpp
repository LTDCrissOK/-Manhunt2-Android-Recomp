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

// Function: sub_003DEBA0
// Address: 0x3deba0 - 0x3dec60
void sub_003DEBA0_0x3deba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DEBA0_0x3deba0");
#endif

    switch (ctx->pc) {
        case 0x3debccu: goto label_3debcc;
        case 0x3debd8u: goto label_3debd8;
        case 0x3debe4u: goto label_3debe4;
        case 0x3dec00u: goto label_3dec00;
        case 0x3dec0cu: goto label_3dec0c;
        case 0x3dec24u: goto label_3dec24;
        default: break;
    }

    ctx->pc = 0x3deba0u;

    // 0x3deba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3deba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3deba4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3deba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3deba8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3deba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3debac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3debacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3debb0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3debb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3debb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3debb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3debb8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3debb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3debbc: 0x262401e8  addiu       $a0, $s1, 0x1E8
    ctx->pc = 0x3debbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 488));
    // 0x3debc0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3debc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3debc4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEBC4u;
    SET_GPR_U32(ctx, 31, 0x3DEBCCu);
    ctx->pc = 0x3DEBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEBC4u;
    // 0x3debc8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEBC4u, 0x3DEBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEBCCu;
label_3debcc:
    // 0x3debcc: 0x262401e0  addiu       $a0, $s1, 0x1E0
    ctx->pc = 0x3debccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
    // 0x3debd0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEBD0u;
    SET_GPR_U32(ctx, 31, 0x3DEBD8u);
    ctx->pc = 0x3DEBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEBD0u;
    // 0x3debd4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEBD0u, 0x3DEBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEBD8u;
label_3debd8:
    // 0x3debd8: 0x262401d8  addiu       $a0, $s1, 0x1D8
    ctx->pc = 0x3debd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 472));
    // 0x3debdc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEBDCu;
    SET_GPR_U32(ctx, 31, 0x3DEBE4u);
    ctx->pc = 0x3DEBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEBDCu;
    // 0x3debe0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEBDCu, 0x3DEBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEBE4u;
label_3debe4:
    // 0x3debe4: 0x262201bc  addiu       $v0, $s1, 0x1BC
    ctx->pc = 0x3debe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x3debe8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3DEBE8u;
    {
        const bool branch_taken_0x3debe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEBE8u;
        // 0x3debec: 0x263001d4  addiu       $s0, $s1, 0x1D4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 468));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3debe8) {
            ctx->pc = 0x3DEC18u;
            goto label_3dec18;
        }
    }
    ctx->pc = 0x3DEBF0u;
    // 0x3debf0: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3DEBF0u;
    {
        const bool branch_taken_0x3debf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x3DEBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEBF0u;
        // 0x3debf4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3debf0) {
            ctx->pc = 0x3DEC18u;
            goto label_3dec18;
        }
    }
    ctx->pc = 0x3DEBF8u;
    // 0x3debf8: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x3debf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x3debfc: 0x0  nop
    ctx->pc = 0x3debfcu;
    // NOP
label_3dec00:
    // 0x3dec00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3dec00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dec04: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEC04u;
    SET_GPR_U32(ctx, 31, 0x3DEC0Cu);
    ctx->pc = 0x3DEC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEC04u;
    // 0x3dec08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEC04u, 0x3DEC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEC0Cu;
label_3dec0c:
    // 0x3dec0c: 0x0  nop
    ctx->pc = 0x3dec0cu;
    // NOP
    // 0x3dec10: 0x1650fffb  bne         $s2, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3DEC10u;
    {
        const bool branch_taken_0x3dec10 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x3DEC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEC10u;
        // 0x3dec14: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dec10) {
            ctx->pc = 0x3DEC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dec00;
        }
    }
    ctx->pc = 0x3DEC18u;
label_3dec18:
    // 0x3dec18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dec18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dec1c: 0xc0874f4  jal         func_21D3D0
    ctx->pc = 0x3DEC1Cu;
    SET_GPR_U32(ctx, 31, 0x3DEC24u);
    ctx->pc = 0x3DEC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEC1Cu;
    // 0x3dec20: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3D0u, 0x3DEC1Cu, 0x3DEC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEC24u;
label_3dec24:
    // 0x3dec24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3dec24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dec28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3dec28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3dec2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3dec2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dec30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3dec30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3dec34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3dec34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dec38: 0x3e00008  jr          $ra
    ctx->pc = 0x3DEC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DEC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEC38u;
        // 0x3dec3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DEC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DEC40u;
    // 0x3dec40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3dec40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dec44: 0x0  nop
    ctx->pc = 0x3dec44u;
    // NOP
    // 0x3dec48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3dec48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dec4c: 0x0  nop
    ctx->pc = 0x3dec4cu;
    // NOP
    // 0x3dec50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3dec50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dec54: 0x0  nop
    ctx->pc = 0x3dec54u;
    // NOP
    // 0x3dec58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3dec58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dec5c: 0x0  nop
    ctx->pc = 0x3dec5cu;
    // NOP
    ctx->pc = 0x3dec60u;
}
