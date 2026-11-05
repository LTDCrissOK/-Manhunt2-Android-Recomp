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

// Function: sub_00384D80
// Address: 0x384d80 - 0x384e78
void sub_00384D80_0x384d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384D80_0x384d80");
#endif

    switch (ctx->pc) {
        case 0x384dd0u: goto label_384dd0;
        case 0x384e18u: goto label_384e18;
        case 0x384e34u: goto label_384e34;
        case 0x384e48u: goto label_384e48;
        case 0x384e50u: goto label_384e50;
        default: break;
    }

    ctx->pc = 0x384d80u;

    // 0x384d80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x384d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x384d84: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x384d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x384d88: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x384d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x384d8c: 0x2473dfe4  addiu       $s3, $v1, -0x201C
    ctx->pc = 0x384d8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959076));
    // 0x384d90: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x384d90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FDFE4u));
    // 0x384d94: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x384d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x384d98: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x384d98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x384d9c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x384d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x384da0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x384da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x384da4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x384da4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384da8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x384da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x384dac: 0x30d400ff  andi        $s4, $a2, 0xFF
    ctx->pc = 0x384dacu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x384db0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x384db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x384db4: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x384db4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x384db8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x384db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x384dbc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x384dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384dc0: 0x10670024  beq         $v1, $a3, . + 4 + (0x24 << 2)
    ctx->pc = 0x384DC0u;
    {
        const bool branch_taken_0x384dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x384DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384DC0u;
        // 0x384dc4: 0x3442000a  ori         $v0, $v0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
        ctx->in_delay_slot = false;
        if (branch_taken_0x384dc0) {
            ctx->pc = 0x384E54u;
            goto label_384e54;
        }
    }
    ctx->pc = 0x384DC8u;
    // 0x384dc8: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x384DC8u;
    SET_GPR_U32(ctx, 31, 0x384DD0u);
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x384DC8u, 0x384DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384DD0u;
label_384dd0:
    // 0x384dd0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x384dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x384dd4: 0x2470dfdc  addiu       $s0, $v1, -0x2024
    ctx->pc = 0x384dd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959068));
    // 0x384dd8: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x384dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x384ddc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x384ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FDFDCu));
    // 0x384de0: 0x24846080  addiu       $a0, $a0, 0x6080
    ctx->pc = 0x384de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24704));
    // 0x384de4: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x384de4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x384de8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x384de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x384dec: 0xa0510010  sb          $s1, 0x10($v0)
    ctx->pc = 0x384decu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 17));
    // 0x384df0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x384df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384df4: 0xac52000c  sw          $s2, 0xC($v0)
    ctx->pc = 0x384df4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 18));
    // 0x384df8: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x384df8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x384dfc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x384dfcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384e00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x384e00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FDFDCu));
    // 0x384e04: 0xa0540011  sb          $s4, 0x11($v0)
    ctx->pc = 0x384e04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17), (uint8_t)GPR_U32(ctx, 20));
    // 0x384e08: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x384e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x384e0c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x384e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3FDFDCu));
    // 0x384e10: 0xc0f347c  jal         func_3CD1F0
    ctx->pc = 0x384E10u;
    SET_GPR_U32(ctx, 31, 0x384E18u);
    ctx->pc = 0x384E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384E10u;
    // 0x384e14: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD1F0u, 0x384E10u, 0x384E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384E18u;
label_384e18:
    // 0x384e18: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x384e18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x384e1c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x384E1Cu;
    {
        const bool branch_taken_0x384e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384E1Cu;
        // 0x384e20: 0x24848e60  addiu       $a0, $a0, -0x71A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384e1c) {
            ctx->pc = 0x384E40u;
            goto label_384e40;
        }
    }
    ctx->pc = 0x384E24u;
    // 0x384e24: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x384e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x384e28: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x384e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x384e2c: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x384E2Cu;
    SET_GPR_U32(ctx, 31, 0x384E34u);
    ctx->pc = 0x384E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384E2Cu;
    // 0x384e30: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x384E2Cu, 0x384E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384E34u;
label_384e34:
    // 0x384e34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x384E34u;
    {
        const bool branch_taken_0x384e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384E34u;
        // 0x384e38: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384e34) {
            ctx->pc = 0x384E54u;
            goto label_384e54;
        }
    }
    ctx->pc = 0x384E3Cu;
    // 0x384e3c: 0x0  nop
    ctx->pc = 0x384e3cu;
    // NOP
label_384e40:
    // 0x384e40: 0xc0efe28  jal         func_3BF8A0
    ctx->pc = 0x384E40u;
    SET_GPR_U32(ctx, 31, 0x384E48u);
    ctx->pc = 0x3BF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF8A0u, 0x384E40u, 0x384E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384E48u;
label_384e48:
    // 0x384e48: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x384E48u;
    SET_GPR_U32(ctx, 31, 0x384E50u);
    ctx->pc = 0x384E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384E48u;
    // 0x384e4c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x384E48u, 0x384E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384E50u;
label_384e50:
    // 0x384e50: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x384e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_384e54:
    // 0x384e54: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x384e54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x384e58: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x384e58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x384e5c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x384e5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x384e60: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x384e60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x384e64: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x384e64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x384e68: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x384e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x384e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x384E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384E6Cu;
        // 0x384e70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384E74u;
    // 0x384e74: 0x0  nop
    ctx->pc = 0x384e74u;
    // NOP
    ctx->pc = 0x384e78u;
}
