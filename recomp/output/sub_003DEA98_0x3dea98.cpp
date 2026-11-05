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

// Function: sub_003DEA98
// Address: 0x3dea98 - 0x3deba0
void sub_003DEA98_0x3dea98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DEA98_0x3dea98");
#endif

    switch (ctx->pc) {
        case 0x3dead0u: goto label_3dead0;
        case 0x3deae8u: goto label_3deae8;
        case 0x3deaf4u: goto label_3deaf4;
        case 0x3deb28u: goto label_3deb28;
        case 0x3deb34u: goto label_3deb34;
        case 0x3deb4cu: goto label_3deb4c;
        case 0x3deb58u: goto label_3deb58;
        case 0x3deb64u: goto label_3deb64;
        case 0x3deb70u: goto label_3deb70;
        default: break;
    }

    ctx->pc = 0x3dea98u;

    // 0x3dea98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3dea98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3dea9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3dea9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3deaa0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3deaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3deaa4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3deaa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3deaa8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3deaa8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3deaac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3deaacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3deab0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3deab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3deab4: 0x26441410  addiu       $a0, $s2, 0x1410
    ctx->pc = 0x3deab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5136));
    // 0x3deab8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3deab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3deabc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3deabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3deac0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3deac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3deac4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3deac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3deac8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEAC8u;
    SET_GPR_U32(ctx, 31, 0x3DEAD0u);
    ctx->pc = 0x3DEACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEAC8u;
    // 0x3deacc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEAC8u, 0x3DEAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEAD0u;
label_3dead0:
    // 0x3dead0: 0x264213d0  addiu       $v0, $s2, 0x13D0
    ctx->pc = 0x3dead0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 5072));
    // 0x3dead4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3DEAD4u;
    {
        const bool branch_taken_0x3dead4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEAD4u;
        // 0x3dead8: 0x265013e8  addiu       $s0, $s2, 0x13E8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dead4) {
            ctx->pc = 0x3DEB00u;
            goto label_3deb00;
        }
    }
    ctx->pc = 0x3DEADCu;
    // 0x3deadc: 0x10500008  beq         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DEADCu;
    {
        const bool branch_taken_0x3deadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x3DEAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEADCu;
        // 0x3deae0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3deadc) {
            ctx->pc = 0x3DEB00u;
            goto label_3deb00;
        }
    }
    ctx->pc = 0x3DEAE4u;
    // 0x3deae4: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x3deae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_3deae8:
    // 0x3deae8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3deae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3deaec: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEAECu;
    SET_GPR_U32(ctx, 31, 0x3DEAF4u);
    ctx->pc = 0x3DEAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEAECu;
    // 0x3deaf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEAECu, 0x3DEAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEAF4u;
label_3deaf4:
    // 0x3deaf4: 0x0  nop
    ctx->pc = 0x3deaf4u;
    // NOP
    // 0x3deaf8: 0x1630fffb  bne         $s1, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3DEAF8u;
    {
        const bool branch_taken_0x3deaf8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x3DEAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEAF8u;
        // 0x3deafc: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3deaf8) {
            ctx->pc = 0x3DEAE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3deae8;
        }
    }
    ctx->pc = 0x3DEB00u;
label_3deb00:
    // 0x3deb00: 0x265101d8  addiu       $s1, $s2, 0x1D8
    ctx->pc = 0x3deb00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 472));
    // 0x3deb04: 0x265301cc  addiu       $s3, $s2, 0x1CC
    ctx->pc = 0x3deb04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 460));
    // 0x3deb08: 0x265401c0  addiu       $s4, $s2, 0x1C0
    ctx->pc = 0x3deb08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
    // 0x3deb0c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x3DEB0Cu;
    {
        const bool branch_taken_0x3deb0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEB0Cu;
        // 0x3deb10: 0x265501a4  addiu       $s5, $s2, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 420));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3deb0c) {
            ctx->pc = 0x3DEB40u;
            goto label_3deb40;
        }
    }
    ctx->pc = 0x3DEB14u;
    // 0x3deb14: 0x26501398  addiu       $s0, $s2, 0x1398
    ctx->pc = 0x3deb14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5016));
    // 0x3deb18: 0x1230000a  beq         $s1, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x3DEB18u;
    {
        const bool branch_taken_0x3deb18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x3DEB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEB18u;
        // 0x3deb1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3deb18) {
            ctx->pc = 0x3DEB44u;
            goto label_3deb44;
        }
    }
    ctx->pc = 0x3DEB20u;
    // 0x3deb20: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x3deb20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x3deb24: 0x0  nop
    ctx->pc = 0x3deb24u;
    // NOP
label_3deb28:
    // 0x3deb28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3deb28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3deb2c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEB2Cu;
    SET_GPR_U32(ctx, 31, 0x3DEB34u);
    ctx->pc = 0x3DEB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEB2Cu;
    // 0x3deb30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEB2Cu, 0x3DEB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEB34u;
label_3deb34:
    // 0x3deb34: 0x0  nop
    ctx->pc = 0x3deb34u;
    // NOP
    // 0x3deb38: 0x1630fffb  bne         $s1, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3DEB38u;
    {
        const bool branch_taken_0x3deb38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x3DEB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEB38u;
        // 0x3deb3c: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3deb38) {
            ctx->pc = 0x3DEB28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3deb28;
        }
    }
    ctx->pc = 0x3DEB40u;
label_3deb40:
    // 0x3deb40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3deb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3deb44:
    // 0x3deb44: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEB44u;
    SET_GPR_U32(ctx, 31, 0x3DEB4Cu);
    ctx->pc = 0x3DEB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEB44u;
    // 0x3deb48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEB44u, 0x3DEB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEB4Cu;
label_3deb4c:
    // 0x3deb4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3deb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3deb50: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEB50u;
    SET_GPR_U32(ctx, 31, 0x3DEB58u);
    ctx->pc = 0x3DEB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEB50u;
    // 0x3deb54: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEB50u, 0x3DEB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEB58u;
label_3deb58:
    // 0x3deb58: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3deb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3deb5c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DEB5Cu;
    SET_GPR_U32(ctx, 31, 0x3DEB64u);
    ctx->pc = 0x3DEB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEB5Cu;
    // 0x3deb60: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DEB5Cu, 0x3DEB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEB64u;
label_3deb64:
    // 0x3deb64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3deb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3deb68: 0xc0874f4  jal         func_21D3D0
    ctx->pc = 0x3DEB68u;
    SET_GPR_U32(ctx, 31, 0x3DEB70u);
    ctx->pc = 0x3DEB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEB68u;
    // 0x3deb6c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3D0u, 0x3DEB68u, 0x3DEB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEB70u;
label_3deb70:
    // 0x3deb70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3deb70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3deb74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3deb74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3deb78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3deb78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3deb7c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3deb7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3deb80: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3deb80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3deb84: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3deb84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3deb88: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3deb88u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3deb8c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3deb8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3deb90: 0x3e00008  jr          $ra
    ctx->pc = 0x3DEB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DEB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEB90u;
        // 0x3deb94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DEB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DEB98u;
    // 0x3deb98: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3deb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3deb9c: 0x0  nop
    ctx->pc = 0x3deb9cu;
    // NOP
    ctx->pc = 0x3deba0u;
}
