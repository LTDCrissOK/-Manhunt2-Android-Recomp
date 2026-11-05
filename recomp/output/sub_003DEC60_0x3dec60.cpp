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

// Function: sub_003DEC60
// Address: 0x3dec60 - 0x3dedb8
void sub_003DEC60_0x3dec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DEC60_0x3dec60");
#endif

    switch (ctx->pc) {
        case 0x3dec8cu: goto label_3dec8c;
        case 0x3dec98u: goto label_3dec98;
        case 0x3deca4u: goto label_3deca4;
        case 0x3decb0u: goto label_3decb0;
        case 0x3decbcu: goto label_3decbc;
        case 0x3decc8u: goto label_3decc8;
        case 0x3decd4u: goto label_3decd4;
        case 0x3dece0u: goto label_3dece0;
        case 0x3dececu: goto label_3decec;
        case 0x3ded08u: goto label_3ded08;
        case 0x3ded14u: goto label_3ded14;
        case 0x3ded2cu: goto label_3ded2c;
        default: break;
    }

    ctx->pc = 0x3dec60u;

    // 0x3dec60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3dec60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3dec64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3dec64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3dec68: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3dec68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3dec6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dec6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dec70: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3dec70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dec74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3dec74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3dec78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3dec78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3dec7c: 0x26240314  addiu       $a0, $s1, 0x314
    ctx->pc = 0x3dec7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 788));
    // 0x3dec80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3dec80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3dec84: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEC84u;
    SET_GPR_U32(ctx, 31, 0x3DEC8Cu);
    ctx->pc = 0x3DEC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEC84u;
    // 0x3dec88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEC84u, 0x3DEC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEC8Cu;
label_3dec8c:
    // 0x3dec8c: 0x262402e4  addiu       $a0, $s1, 0x2E4
    ctx->pc = 0x3dec8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 740));
    // 0x3dec90: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEC90u;
    SET_GPR_U32(ctx, 31, 0x3DEC98u);
    ctx->pc = 0x3DEC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEC90u;
    // 0x3dec94: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEC90u, 0x3DEC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEC98u;
label_3dec98:
    // 0x3dec98: 0x26240254  addiu       $a0, $s1, 0x254
    ctx->pc = 0x3dec98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 596));
    // 0x3dec9c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEC9Cu;
    SET_GPR_U32(ctx, 31, 0x3DECA4u);
    ctx->pc = 0x3DECA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEC9Cu;
    // 0x3deca0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEC9Cu, 0x3DECA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DECA4u;
label_3deca4:
    // 0x3deca4: 0x2624023c  addiu       $a0, $s1, 0x23C
    ctx->pc = 0x3deca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 572));
    // 0x3deca8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DECA8u;
    SET_GPR_U32(ctx, 31, 0x3DECB0u);
    ctx->pc = 0x3DECACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DECA8u;
    // 0x3decac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DECA8u, 0x3DECB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DECB0u;
label_3decb0:
    // 0x3decb0: 0x26240234  addiu       $a0, $s1, 0x234
    ctx->pc = 0x3decb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 564));
    // 0x3decb4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DECB4u;
    SET_GPR_U32(ctx, 31, 0x3DECBCu);
    ctx->pc = 0x3DECB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DECB4u;
    // 0x3decb8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DECB4u, 0x3DECBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DECBCu;
label_3decbc:
    // 0x3decbc: 0x26240228  addiu       $a0, $s1, 0x228
    ctx->pc = 0x3decbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 552));
    // 0x3decc0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DECC0u;
    SET_GPR_U32(ctx, 31, 0x3DECC8u);
    ctx->pc = 0x3DECC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DECC0u;
    // 0x3decc4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DECC0u, 0x3DECC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DECC8u;
label_3decc8:
    // 0x3decc8: 0x262401e8  addiu       $a0, $s1, 0x1E8
    ctx->pc = 0x3decc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 488));
    // 0x3deccc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DECCCu;
    SET_GPR_U32(ctx, 31, 0x3DECD4u);
    ctx->pc = 0x3DECD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DECCCu;
    // 0x3decd0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DECCCu, 0x3DECD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DECD4u;
label_3decd4:
    // 0x3decd4: 0x262401e0  addiu       $a0, $s1, 0x1E0
    ctx->pc = 0x3decd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
    // 0x3decd8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DECD8u;
    SET_GPR_U32(ctx, 31, 0x3DECE0u);
    ctx->pc = 0x3DECDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DECD8u;
    // 0x3decdc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DECD8u, 0x3DECE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DECE0u;
label_3dece0:
    // 0x3dece0: 0x262401d8  addiu       $a0, $s1, 0x1D8
    ctx->pc = 0x3dece0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 472));
    // 0x3dece4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DECE4u;
    SET_GPR_U32(ctx, 31, 0x3DECECu);
    ctx->pc = 0x3DECE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DECE4u;
    // 0x3dece8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DECE4u, 0x3DECECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DECECu;
label_3decec:
    // 0x3decec: 0x262201bc  addiu       $v0, $s1, 0x1BC
    ctx->pc = 0x3dececu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x3decf0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3DECF0u;
    {
        const bool branch_taken_0x3decf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DECF0u;
        // 0x3decf4: 0x263001d4  addiu       $s0, $s1, 0x1D4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 468));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3decf0) {
            ctx->pc = 0x3DED20u;
            goto label_3ded20;
        }
    }
    ctx->pc = 0x3DECF8u;
    // 0x3decf8: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3DECF8u;
    {
        const bool branch_taken_0x3decf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x3DECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DECF8u;
        // 0x3decfc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3decf8) {
            ctx->pc = 0x3DED20u;
            goto label_3ded20;
        }
    }
    ctx->pc = 0x3DED00u;
    // 0x3ded00: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x3ded00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x3ded04: 0x0  nop
    ctx->pc = 0x3ded04u;
    // NOP
label_3ded08:
    // 0x3ded08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ded08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ded0c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DED0Cu;
    SET_GPR_U32(ctx, 31, 0x3DED14u);
    ctx->pc = 0x3DED10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DED0Cu;
    // 0x3ded10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DED0Cu, 0x3DED14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DED14u;
label_3ded14:
    // 0x3ded14: 0x0  nop
    ctx->pc = 0x3ded14u;
    // NOP
    // 0x3ded18: 0x1650fffb  bne         $s2, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3DED18u;
    {
        const bool branch_taken_0x3ded18 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x3DED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DED18u;
        // 0x3ded1c: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ded18) {
            ctx->pc = 0x3DED08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ded08;
        }
    }
    ctx->pc = 0x3DED20u;
label_3ded20:
    // 0x3ded20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ded20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ded24: 0xc0874f4  jal         func_21D3D0
    ctx->pc = 0x3DED24u;
    SET_GPR_U32(ctx, 31, 0x3DED2Cu);
    ctx->pc = 0x3DED28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DED24u;
    // 0x3ded28: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3D0u, 0x3DED24u, 0x3DED2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DED2Cu;
label_3ded2c:
    // 0x3ded2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ded2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ded30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ded30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ded34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ded34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ded38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3ded38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ded3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ded3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ded40: 0x3e00008  jr          $ra
    ctx->pc = 0x3DED40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DED40u;
        // 0x3ded44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DED40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DED48u;
    // 0x3ded48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ded48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ded4c: 0x0  nop
    ctx->pc = 0x3ded4cu;
    // NOP
    // 0x3ded50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ded50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ded54: 0x0  nop
    ctx->pc = 0x3ded54u;
    // NOP
    // 0x3ded58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ded58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ded5c: 0x0  nop
    ctx->pc = 0x3ded5cu;
    // NOP
    // 0x3ded60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ded60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ded64: 0x0  nop
    ctx->pc = 0x3ded64u;
    // NOP
    // 0x3ded68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ded68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ded6c: 0x0  nop
    ctx->pc = 0x3ded6cu;
    // NOP
    // 0x3ded70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ded70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ded74: 0x0  nop
    ctx->pc = 0x3ded74u;
    // NOP
    // 0x3ded78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ded78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ded7c: 0x0  nop
    ctx->pc = 0x3ded7cu;
    // NOP
    // 0x3ded80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ded80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ded84: 0x0  nop
    ctx->pc = 0x3ded84u;
    // NOP
    // 0x3ded88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ded88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ded8c: 0x0  nop
    ctx->pc = 0x3ded8cu;
    // NOP
    // 0x3ded90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ded90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ded94: 0x0  nop
    ctx->pc = 0x3ded94u;
    // NOP
    // 0x3ded98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ded98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ded9c: 0x0  nop
    ctx->pc = 0x3ded9cu;
    // NOP
    // 0x3deda0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3deda0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3deda4: 0x0  nop
    ctx->pc = 0x3deda4u;
    // NOP
    // 0x3deda8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3deda8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dedac: 0x0  nop
    ctx->pc = 0x3dedacu;
    // NOP
    // 0x3dedb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3dedb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dedb4: 0x0  nop
    ctx->pc = 0x3dedb4u;
    // NOP
    ctx->pc = 0x3dedb8u;
}
