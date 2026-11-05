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

// Function: sub_00384E78
// Address: 0x384e78 - 0x384f70
void sub_00384E78_0x384e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384E78_0x384e78");
#endif

    switch (ctx->pc) {
        case 0x384ec8u: goto label_384ec8;
        case 0x384f10u: goto label_384f10;
        case 0x384f2cu: goto label_384f2c;
        case 0x384f40u: goto label_384f40;
        case 0x384f48u: goto label_384f48;
        default: break;
    }

    ctx->pc = 0x384e78u;

    // 0x384e78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x384e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x384e7c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x384e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x384e80: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x384e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x384e84: 0x2473dfe4  addiu       $s3, $v1, -0x201C
    ctx->pc = 0x384e84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959076));
    // 0x384e88: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x384e88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FDFE4u));
    // 0x384e8c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x384e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x384e90: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x384e90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x384e94: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x384e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x384e98: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x384e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x384e9c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x384e9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384ea0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x384ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x384ea4: 0x30d400ff  andi        $s4, $a2, 0xFF
    ctx->pc = 0x384ea4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x384ea8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x384ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x384eac: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x384eacu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x384eb0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x384eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x384eb4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x384eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384eb8: 0x10670024  beq         $v1, $a3, . + 4 + (0x24 << 2)
    ctx->pc = 0x384EB8u;
    {
        const bool branch_taken_0x384eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x384EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384EB8u;
        // 0x384ebc: 0x3442000a  ori         $v0, $v0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
        ctx->in_delay_slot = false;
        if (branch_taken_0x384eb8) {
            ctx->pc = 0x384F4Cu;
            goto label_384f4c;
        }
    }
    ctx->pc = 0x384EC0u;
    // 0x384ec0: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x384EC0u;
    SET_GPR_U32(ctx, 31, 0x384EC8u);
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x384EC0u, 0x384EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384EC8u;
label_384ec8:
    // 0x384ec8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x384ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x384ecc: 0x2470dfdc  addiu       $s0, $v1, -0x2024
    ctx->pc = 0x384eccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959068));
    // 0x384ed0: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x384ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x384ed4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x384ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FDFDCu));
    // 0x384ed8: 0x24846080  addiu       $a0, $a0, 0x6080
    ctx->pc = 0x384ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24704));
    // 0x384edc: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x384edcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x384ee0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x384ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x384ee4: 0xa0510010  sb          $s1, 0x10($v0)
    ctx->pc = 0x384ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 17));
    // 0x384ee8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x384ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384eec: 0xac52000c  sw          $s2, 0xC($v0)
    ctx->pc = 0x384eecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 18));
    // 0x384ef0: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x384ef0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x384ef4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x384ef4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384ef8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x384ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FDFDCu));
    // 0x384efc: 0xa0540011  sb          $s4, 0x11($v0)
    ctx->pc = 0x384efcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17), (uint8_t)GPR_U32(ctx, 20));
    // 0x384f00: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x384f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x384f04: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x384f04u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3FDFDCu));
    // 0x384f08: 0xc0f347c  jal         func_3CD1F0
    ctx->pc = 0x384F08u;
    SET_GPR_U32(ctx, 31, 0x384F10u);
    ctx->pc = 0x384F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384F08u;
    // 0x384f0c: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD1F0u, 0x384F08u, 0x384F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384F10u;
label_384f10:
    // 0x384f10: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x384f10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x384f14: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x384F14u;
    {
        const bool branch_taken_0x384f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F14u;
        // 0x384f18: 0x24848e60  addiu       $a0, $a0, -0x71A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384f14) {
            ctx->pc = 0x384F38u;
            goto label_384f38;
        }
    }
    ctx->pc = 0x384F1Cu;
    // 0x384f1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x384f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x384f20: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x384f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x384f24: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x384F24u;
    SET_GPR_U32(ctx, 31, 0x384F2Cu);
    ctx->pc = 0x384F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384F24u;
    // 0x384f28: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x384F24u, 0x384F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384F2Cu;
label_384f2c:
    // 0x384f2c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x384F2Cu;
    {
        const bool branch_taken_0x384f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F2Cu;
        // 0x384f30: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384f2c) {
            ctx->pc = 0x384F4Cu;
            goto label_384f4c;
        }
    }
    ctx->pc = 0x384F34u;
    // 0x384f34: 0x0  nop
    ctx->pc = 0x384f34u;
    // NOP
label_384f38:
    // 0x384f38: 0xc0efe28  jal         func_3BF8A0
    ctx->pc = 0x384F38u;
    SET_GPR_U32(ctx, 31, 0x384F40u);
    ctx->pc = 0x3BF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF8A0u, 0x384F38u, 0x384F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384F40u;
label_384f40:
    // 0x384f40: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x384F40u;
    SET_GPR_U32(ctx, 31, 0x384F48u);
    ctx->pc = 0x384F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384F40u;
    // 0x384f44: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x384F40u, 0x384F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384F48u;
label_384f48:
    // 0x384f48: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x384f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_384f4c:
    // 0x384f4c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x384f4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x384f50: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x384f50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x384f54: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x384f54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x384f58: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x384f58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x384f5c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x384f5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x384f60: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x384f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x384f64: 0x3e00008  jr          $ra
    ctx->pc = 0x384F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F64u;
        // 0x384f68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384F6Cu;
    // 0x384f6c: 0x0  nop
    ctx->pc = 0x384f6cu;
    // NOP
    ctx->pc = 0x384f70u;
}
