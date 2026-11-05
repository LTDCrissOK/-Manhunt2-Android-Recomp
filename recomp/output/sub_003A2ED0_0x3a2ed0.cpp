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

// Function: sub_003A2ED0
// Address: 0x3a2ed0 - 0x3a30b8
void sub_003A2ED0_0x3a2ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2ED0_0x3a2ed0");
#endif

    switch (ctx->pc) {
        case 0x3a2f28u: goto label_3a2f28;
        case 0x3a2f30u: goto label_3a2f30;
        case 0x3a2f3cu: goto label_3a2f3c;
        case 0x3a2f58u: goto label_3a2f58;
        case 0x3a2f60u: goto label_3a2f60;
        case 0x3a2f68u: goto label_3a2f68;
        case 0x3a2f70u: goto label_3a2f70;
        case 0x3a2fc0u: goto label_3a2fc0;
        case 0x3a2ff0u: goto label_3a2ff0;
        case 0x3a2ffcu: goto label_3a2ffc;
        case 0x3a3054u: goto label_3a3054;
        case 0x3a305cu: goto label_3a305c;
        case 0x3a3068u: goto label_3a3068;
        case 0x3a3070u: goto label_3a3070;
        default: break;
    }

    ctx->pc = 0x3a2ed0u;

    // 0x3a2ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a2ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a2ed4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a2ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a2ed8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a2ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a2edc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a2edcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2ee0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a2ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a2ee4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a2ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a2ee8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3a2ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3a2eec: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3a2eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3a2ef0: 0x1443002c  bne         $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x3A2EF0u;
    {
        const bool branch_taken_0x3a2ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A2EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2EF0u;
        // 0x3a2ef4: 0x92250002  lbu         $a1, 0x2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2ef0) {
            ctx->pc = 0x3A2FA4u;
            goto label_3a2fa4;
        }
    }
    ctx->pc = 0x3A2EF8u;
    // 0x3a2ef8: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x3a2ef8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3a2efc: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x3a2efcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3a2f00: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x3A2F00u;
    {
        const bool branch_taken_0x3a2f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2f00) {
            ctx->pc = 0x3A2F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2F00u;
            // 0x3a2f04: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A2FA4u;
            goto label_3a2fa4;
        }
    }
    ctx->pc = 0x3A2F08u;
    // 0x3a2f08: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3a2f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a2f0c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3a2f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3a2f10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a2f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a2f14: 0x8c63d3b0  lw          $v1, -0x2C50($v1)
    ctx->pc = 0x3a2f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955952)));
    // 0x3a2f18: 0x600008  jr          $v1
    ctx->pc = 0x3A2F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A2F20u: goto label_3a2f20;
            case 0x3A2F98u: goto label_3a2f98;
            case 0x3A2FA0u: goto label_3a2fa0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2F18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3A2F20u;
label_3a2f20:
    // 0x3a2f20: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A2F20u;
    SET_GPR_U32(ctx, 31, 0x3A2F28u);
    ctx->pc = 0x3A2F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2F20u;
    // 0x3a2f24: 0x24041600  addiu       $a0, $zero, 0x1600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A2F20u, 0x3A2F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2F28u;
label_3a2f28:
    // 0x3a2f28: 0xc0ee3a8  jal         func_3B8EA0
    ctx->pc = 0x3A2F28u;
    SET_GPR_U32(ctx, 31, 0x3A2F30u);
    ctx->pc = 0x3B8EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8EA0u, 0x3A2F28u, 0x3A2F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2F30u;
label_3a2f30:
    // 0x3a2f30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a2f30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2f34: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A2F34u;
    SET_GPR_U32(ctx, 31, 0x3A2F3Cu);
    ctx->pc = 0x3A2F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2F34u;
    // 0x3a2f38: 0x24041601  addiu       $a0, $zero, 0x1601 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5633));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A2F34u, 0x3A2F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2F3Cu;
label_3a2f3c:
    // 0x3a2f3c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A2F3Cu;
    {
        const bool branch_taken_0x3a2f3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2F3Cu;
        // 0x3a2f40: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2f3c) {
            ctx->pc = 0x3A2F58u;
            goto label_3a2f58;
        }
    }
    ctx->pc = 0x3A2F44u;
    // 0x3a2f44: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a2f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a2f48: 0x24421e1c  addiu       $v0, $v0, 0x1E1C
    ctx->pc = 0x3a2f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7708));
    // 0x3a2f4c: 0x2484d388  addiu       $a0, $a0, -0x2C78
    ctx->pc = 0x3a2f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955912));
    // 0x3a2f50: 0xc0f3050  jal         func_3CC140
    ctx->pc = 0x3A2F50u;
    SET_GPR_U32(ctx, 31, 0x3A2F58u);
    ctx->pc = 0x3A2F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2F50u;
    // 0x3a2f54: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC140u, 0x3A2F50u, 0x3A2F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2F58u;
label_3a2f58:
    // 0x3a2f58: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A2F58u;
    SET_GPR_U32(ctx, 31, 0x3A2F60u);
    ctx->pc = 0x3A2F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2F58u;
    // 0x3a2f5c: 0x24041700  addiu       $a0, $zero, 0x1700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A2F58u, 0x3A2F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2F60u;
label_3a2f60:
    // 0x3a2f60: 0xc0ee156  jal         func_3B8558
    ctx->pc = 0x3A2F60u;
    SET_GPR_U32(ctx, 31, 0x3A2F68u);
    ctx->pc = 0x3A2F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2F60u;
    // 0x3a2f64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8558u, 0x3A2F60u, 0x3A2F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2F68u;
label_3a2f68:
    // 0x3a2f68: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A2F68u;
    SET_GPR_U32(ctx, 31, 0x3A2F70u);
    ctx->pc = 0x3A2F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2F68u;
    // 0x3a2f6c: 0x24041701  addiu       $a0, $zero, 0x1701 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5889));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A2F68u, 0x3A2F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2F70u;
label_3a2f70:
    // 0x3a2f70: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x3a2f70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a2f74: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a2f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3a2f78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a2f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2f7c: 0x24631e24  addiu       $v1, $v1, 0x1E24
    ctx->pc = 0x3a2f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7716));
    // 0x3a2f80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3a2f80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x411E24u));
    // 0x3a2f84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a2f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a2f88: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3a2f88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x411E24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411E24u, _value); } while (0);
    // 0x3a2f8c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A2F8Cu;
    {
        const bool branch_taken_0x3a2f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2F8Cu;
        // 0x3a2f90: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2f8c) {
            ctx->pc = 0x3A2FA4u;
            goto label_3a2fa4;
        }
    }
    ctx->pc = 0x3A2F94u;
    // 0x3a2f94: 0x0  nop
    ctx->pc = 0x3a2f94u;
    // NOP
label_3a2f98:
    // 0x3a2f98: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x3a2f98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a2f9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a2f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2fa0:
    // 0x3a2fa0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3a2fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3a2fa4:
    // 0x3a2fa4: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x3a2fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x3a2fa8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a2fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a2fac: 0x29603  sra         $s2, $v0, 24
    ctx->pc = 0x3a2facu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3a2fb0: 0x56430023  bnel        $s2, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x3A2FB0u;
    {
        const bool branch_taken_0x3a2fb0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a2fb0) {
            ctx->pc = 0x3A2FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2FB0u;
            // 0x3a2fb4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3040u;
            goto label_3a3040;
        }
    }
    ctx->pc = 0x3A2FB8u;
    // 0x3a2fb8: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A2FB8u;
    SET_GPR_U32(ctx, 31, 0x3A2FC0u);
    ctx->pc = 0x3A2FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2FB8u;
    // 0x3a2fbc: 0x24041800  addiu       $a0, $zero, 0x1800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A2FB8u, 0x3A2FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2FC0u;
label_3a2fc0:
    // 0x3a2fc0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a2fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a2fc4: 0x8c431e50  lw          $v1, 0x1E50($v0)
    ctx->pc = 0x3a2fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411E50u));
    // 0x3a2fc8: 0x54720005  bnel        $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A2FC8u;
    {
        const bool branch_taken_0x3a2fc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x3a2fc8) {
            ctx->pc = 0x3A2FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2FC8u;
            // 0x3a2fcc: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A2FE0u;
            goto label_3a2fe0;
        }
    }
    ctx->pc = 0x3A2FD0u;
    // 0x3a2fd0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a2fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a2fd4: 0x90431e54  lbu         $v1, 0x1E54($v0)
    ctx->pc = 0x3a2fd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x411E54u));
    // 0x3a2fd8: 0xa2230015  sb          $v1, 0x15($s1)
    ctx->pc = 0x3a2fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 21), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a2fdc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3a2fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3a2fe0:
    // 0x3a2fe0: 0x26270014  addiu       $a3, $s1, 0x14
    ctx->pc = 0x3a2fe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x3a2fe4: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x3a2fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3a2fe8: 0xc0ee2aa  jal         func_3B8AA8
    ctx->pc = 0x3A2FE8u;
    SET_GPR_U32(ctx, 31, 0x3A2FF0u);
    ctx->pc = 0x3A2FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2FE8u;
    // 0x3a2fec: 0x8e260010  lw          $a2, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8AA8u, 0x3A2FE8u, 0x3A2FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2FF0u;
label_3a2ff0:
    // 0x3a2ff0: 0x24041801  addiu       $a0, $zero, 0x1801
    ctx->pc = 0x3a2ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6145));
    // 0x3a2ff4: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A2FF4u;
    SET_GPR_U32(ctx, 31, 0x3A2FFCu);
    ctx->pc = 0x3A2FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2FF4u;
    // 0x3a2ff8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A2FF4u, 0x3A2FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2FFCu;
label_3a2ffc:
    // 0x3a2ffc: 0x1612000a  bne         $s0, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x3A2FFCu;
    {
        const bool branch_taken_0x3a2ffc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x3A3000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2FFCu;
        // 0x3a3000: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2ffc) {
            ctx->pc = 0x3A3028u;
            goto label_3a3028;
        }
    }
    ctx->pc = 0x3A3004u;
    // 0x3a3004: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a3004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a3008: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3a3008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a300c: 0x24421e20  addiu       $v0, $v0, 0x1E20
    ctx->pc = 0x3a300cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7712));
    // 0x3a3010: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3a3010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a3014: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3a3014u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411E20u));
    // 0x3a3018: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a3018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a301c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3a301cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x411E20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411E20u, _value); } while (0);
    // 0x3a3020: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A3020u;
    {
        const bool branch_taken_0x3a3020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3020u;
        // 0x3a3024: 0xa2240002  sb          $a0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3020) {
            ctx->pc = 0x3A3038u;
            goto label_3a3038;
        }
    }
    ctx->pc = 0x3A3028u;
label_3a3028:
    // 0x3a3028: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a3028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a302c: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x3a302cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a3030: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3a3030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3a3034: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x3a3034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
label_3a3038:
    // 0x3a3038: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x3a3038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x3a303c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a303cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a3040:
    // 0x3a3040: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3a3040u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3a3044: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3A3044u;
    {
        const bool branch_taken_0x3a3044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A3048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3044u;
        // 0x3a3048: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3044) {
            ctx->pc = 0x3A30A4u;
            goto label_3a30a4;
        }
    }
    ctx->pc = 0x3A304Cu;
    // 0x3a304c: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A304Cu;
    SET_GPR_U32(ctx, 31, 0x3A3054u);
    ctx->pc = 0x3A3050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A304Cu;
    // 0x3a3050: 0x24041900  addiu       $a0, $zero, 0x1900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A304Cu, 0x3A3054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3054u;
label_3a3054:
    // 0x3a3054: 0xc0ee156  jal         func_3B8558
    ctx->pc = 0x3A3054u;
    SET_GPR_U32(ctx, 31, 0x3A305Cu);
    ctx->pc = 0x3A3058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3054u;
    // 0x3a3058: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8558u, 0x3A3054u, 0x3A305Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A305Cu;
label_3a305c:
    // 0x3a305c: 0x24041901  addiu       $a0, $zero, 0x1901
    ctx->pc = 0x3a305cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6401));
    // 0x3a3060: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A3060u;
    SET_GPR_U32(ctx, 31, 0x3A3068u);
    ctx->pc = 0x3A3064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3060u;
    // 0x3a3064: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A3060u, 0x3A3068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3068u;
label_3a3068:
    // 0x3a3068: 0xc0e8b64  jal         func_3A2D90
    ctx->pc = 0x3A3068u;
    SET_GPR_U32(ctx, 31, 0x3A3070u);
    ctx->pc = 0x3A306Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3068u;
    // 0x3a306c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D90u, 0x3A3068u, 0x3A3070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3070u;
label_3a3070:
    // 0x3a3070: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A3070u;
    {
        const bool branch_taken_0x3a3070 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3070u;
        // 0x3a3074: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3070) {
            ctx->pc = 0x3A30A0u;
            goto label_3a30a0;
        }
    }
    ctx->pc = 0x3A3078u;
    // 0x3a3078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a3078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a307c: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A307Cu;
    {
        const bool branch_taken_0x3a307c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a307c) {
            ctx->pc = 0x3A3080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A307Cu;
            // 0x3a3080: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3088u;
            goto label_3a3088;
        }
    }
    ctx->pc = 0x3A3084u;
    // 0x3a3084: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3a3084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3a3088:
    // 0x3a3088: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x3a3088u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a308c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a308cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3a3090: 0x24631e24  addiu       $v1, $v1, 0x1E24
    ctx->pc = 0x3a3090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7716));
    // 0x3a3094: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3a3094u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x411E24u));
    // 0x3a3098: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a3098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a309c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3a309cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x411E24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411E24u, _value); } while (0);
label_3a30a0:
    // 0x3a30a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a30a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a30a4:
    // 0x3a30a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a30a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a30a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a30a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a30ac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3a30acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a30b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A30B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A30B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A30B0u;
        // 0x3a30b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A30B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A30B8u;
}
