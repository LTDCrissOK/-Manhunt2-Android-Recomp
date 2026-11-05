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

// Function: sub_003DE998
// Address: 0x3de998 - 0x3dea98
void sub_003DE998_0x3de998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DE998_0x3de998");
#endif

    switch (ctx->pc) {
        case 0x3de9d0u: goto label_3de9d0;
        case 0x3de9e8u: goto label_3de9e8;
        case 0x3de9f4u: goto label_3de9f4;
        case 0x3dea28u: goto label_3dea28;
        case 0x3dea34u: goto label_3dea34;
        case 0x3dea4cu: goto label_3dea4c;
        case 0x3dea58u: goto label_3dea58;
        case 0x3dea64u: goto label_3dea64;
        case 0x3dea70u: goto label_3dea70;
        default: break;
    }

    ctx->pc = 0x3de998u;

    // 0x3de998: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3de998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3de99c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3de99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3de9a0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3de9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3de9a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3de9a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de9a8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3de9a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de9ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3de9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3de9b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3de9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3de9b4: 0x26441410  addiu       $a0, $s2, 0x1410
    ctx->pc = 0x3de9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5136));
    // 0x3de9b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3de9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3de9bc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3de9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3de9c0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3de9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3de9c4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3de9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3de9c8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DE9C8u;
    SET_GPR_U32(ctx, 31, 0x3DE9D0u);
    ctx->pc = 0x3DE9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE9C8u;
    // 0x3de9cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DE9C8u, 0x3DE9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE9D0u;
label_3de9d0:
    // 0x3de9d0: 0x264213d0  addiu       $v0, $s2, 0x13D0
    ctx->pc = 0x3de9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 5072));
    // 0x3de9d4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3DE9D4u;
    {
        const bool branch_taken_0x3de9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE9D4u;
        // 0x3de9d8: 0x265013e8  addiu       $s0, $s2, 0x13E8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de9d4) {
            ctx->pc = 0x3DEA00u;
            goto label_3dea00;
        }
    }
    ctx->pc = 0x3DE9DCu;
    // 0x3de9dc: 0x10500008  beq         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DE9DCu;
    {
        const bool branch_taken_0x3de9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x3DE9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE9DCu;
        // 0x3de9e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de9dc) {
            ctx->pc = 0x3DEA00u;
            goto label_3dea00;
        }
    }
    ctx->pc = 0x3DE9E4u;
    // 0x3de9e4: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x3de9e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_3de9e8:
    // 0x3de9e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3de9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de9ec: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DE9ECu;
    SET_GPR_U32(ctx, 31, 0x3DE9F4u);
    ctx->pc = 0x3DE9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE9ECu;
    // 0x3de9f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DE9ECu, 0x3DE9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE9F4u;
label_3de9f4:
    // 0x3de9f4: 0x0  nop
    ctx->pc = 0x3de9f4u;
    // NOP
    // 0x3de9f8: 0x1630fffb  bne         $s1, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3DE9F8u;
    {
        const bool branch_taken_0x3de9f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x3DE9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE9F8u;
        // 0x3de9fc: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de9f8) {
            ctx->pc = 0x3DE9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3de9e8;
        }
    }
    ctx->pc = 0x3DEA00u;
label_3dea00:
    // 0x3dea00: 0x265101d8  addiu       $s1, $s2, 0x1D8
    ctx->pc = 0x3dea00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 472));
    // 0x3dea04: 0x265301cc  addiu       $s3, $s2, 0x1CC
    ctx->pc = 0x3dea04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 460));
    // 0x3dea08: 0x265401c0  addiu       $s4, $s2, 0x1C0
    ctx->pc = 0x3dea08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
    // 0x3dea0c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x3DEA0Cu;
    {
        const bool branch_taken_0x3dea0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEA0Cu;
        // 0x3dea10: 0x265501a4  addiu       $s5, $s2, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 420));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dea0c) {
            ctx->pc = 0x3DEA40u;
            goto label_3dea40;
        }
    }
    ctx->pc = 0x3DEA14u;
    // 0x3dea14: 0x26501398  addiu       $s0, $s2, 0x1398
    ctx->pc = 0x3dea14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5016));
    // 0x3dea18: 0x1230000a  beq         $s1, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x3DEA18u;
    {
        const bool branch_taken_0x3dea18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x3DEA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEA18u;
        // 0x3dea1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dea18) {
            ctx->pc = 0x3DEA44u;
            goto label_3dea44;
        }
    }
    ctx->pc = 0x3DEA20u;
    // 0x3dea20: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x3dea20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x3dea24: 0x0  nop
    ctx->pc = 0x3dea24u;
    // NOP
label_3dea28:
    // 0x3dea28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3dea28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dea2c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEA2Cu;
    SET_GPR_U32(ctx, 31, 0x3DEA34u);
    ctx->pc = 0x3DEA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEA2Cu;
    // 0x3dea30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEA2Cu, 0x3DEA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEA34u;
label_3dea34:
    // 0x3dea34: 0x0  nop
    ctx->pc = 0x3dea34u;
    // NOP
    // 0x3dea38: 0x1630fffb  bne         $s1, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3DEA38u;
    {
        const bool branch_taken_0x3dea38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x3DEA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEA38u;
        // 0x3dea3c: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dea38) {
            ctx->pc = 0x3DEA28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dea28;
        }
    }
    ctx->pc = 0x3DEA40u;
label_3dea40:
    // 0x3dea40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3dea40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3dea44:
    // 0x3dea44: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEA44u;
    SET_GPR_U32(ctx, 31, 0x3DEA4Cu);
    ctx->pc = 0x3DEA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEA44u;
    // 0x3dea48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEA44u, 0x3DEA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEA4Cu;
label_3dea4c:
    // 0x3dea4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3dea4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dea50: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEA50u;
    SET_GPR_U32(ctx, 31, 0x3DEA58u);
    ctx->pc = 0x3DEA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEA50u;
    // 0x3dea54: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEA50u, 0x3DEA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEA58u;
label_3dea58:
    // 0x3dea58: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3dea58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dea5c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEA5Cu;
    SET_GPR_U32(ctx, 31, 0x3DEA64u);
    ctx->pc = 0x3DEA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEA5Cu;
    // 0x3dea60: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEA5Cu, 0x3DEA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEA64u;
label_3dea64:
    // 0x3dea64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3dea64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dea68: 0xc0874f4  jal         func_21D3D0
    ctx->pc = 0x3DEA68u;
    SET_GPR_U32(ctx, 31, 0x3DEA70u);
    ctx->pc = 0x3DEA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEA68u;
    // 0x3dea6c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3D0u, 0x3DEA68u, 0x3DEA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEA70u;
label_3dea70:
    // 0x3dea70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3dea70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dea74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3dea74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3dea78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3dea78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dea7c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3dea7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3dea80: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3dea80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dea84: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3dea84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3dea88: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3dea88u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3dea8c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3dea8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3dea90: 0x3e00008  jr          $ra
    ctx->pc = 0x3DEA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DEA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEA90u;
        // 0x3dea94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DEA90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DEA98u;
}
