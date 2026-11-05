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

// Function: sub_00106EF0
// Address: 0x106ef0 - 0x107058
void sub_00106EF0_0x106ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106EF0_0x106ef0");
#endif

    switch (ctx->pc) {
        case 0x106f1cu: goto label_106f1c;
        case 0x106fb4u: goto label_106fb4;
        case 0x106fdcu: goto label_106fdc;
        case 0x106ff8u: goto label_106ff8;
        case 0x107024u: goto label_107024;
        default: break;
    }

    ctx->pc = 0x106ef0u;

    // 0x106ef0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x106ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x106ef4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x106ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x106ef8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x106ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106efc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x106efcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106f00: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x106f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x106f04: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x106f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x106f08: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x106f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x106f0c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x106f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x106f10: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x106f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x106f14: 0xc041b8a  jal         func_106E28
    ctx->pc = 0x106F14u;
    SET_GPR_U32(ctx, 31, 0x106F1Cu);
    ctx->pc = 0x106F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106F14u;
    // 0x106f18: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x106E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E28u, 0x106F14u, 0x106F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106F1Cu;
label_106f1c:
    // 0x106f1c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x106f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x106f20: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x106f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x106f24: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x106f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106f28: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x106f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x106f2c: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x106f2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x106f30: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x106f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x106f34: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x106f34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x106f38: 0x24422dd0  addiu       $v0, $v0, 0x2DD0
    ctx->pc = 0x106f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11728));
    // 0x106f3c: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x106f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x106f40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x106f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x106f44: 0x1240003b  beqz        $s2, . + 4 + (0x3B << 2)
    ctx->pc = 0x106F44u;
    {
        const bool branch_taken_0x106f44 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x106F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F44u;
        // 0x106f48: 0x838821  addu        $s1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f44) {
            ctx->pc = 0x107034u;
            goto label_107034;
        }
    }
    ctx->pc = 0x106F4Cu;
    // 0x106f4c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x106f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x106f50: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x106f50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x106f54: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x106F54u;
    {
        const bool branch_taken_0x106f54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x106F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F54u;
        // 0x106f58: 0x27b40008  addiu       $s4, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f54) {
            ctx->pc = 0x106F74u;
            goto label_106f74;
        }
    }
    ctx->pc = 0x106F5Cu;
    // 0x106f5c: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x106F5Cu;
    {
        const bool branch_taken_0x106f5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x106f5c) {
            ctx->pc = 0x106F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106F5Cu;
            // 0x106f60: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106F64u;
            goto label_106f64;
        }
    }
    ctx->pc = 0x106F64u;
label_106f64:
    // 0x106f64: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x106f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x106f68: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x106f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x106f6c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x106F6Cu;
    {
        const bool branch_taken_0x106f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F6Cu;
        // 0x106f70: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f6c) {
            ctx->pc = 0x107034u;
            goto label_107034;
        }
    }
    ctx->pc = 0x106F74u;
label_106f74:
    // 0x106f74: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x106f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x106f78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x106f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106f7c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x106f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x106f80: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x106f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x106f84: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x106f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x106f88: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x106f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x106f8c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x106f8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x106f90: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x106f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x106f94: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x106f94u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x106f98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x106f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x106f9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x106f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x106fa0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x106FA0u;
    {
        const bool branch_taken_0x106fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FA0u;
        // 0x106fa4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106fa0) {
            ctx->pc = 0x106FBCu;
            goto label_106fbc;
        }
    }
    ctx->pc = 0x106FA8u;
    // 0x106fa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x106fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106fac: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x106FACu;
    SET_GPR_U32(ctx, 31, 0x106FB4u);
    ctx->pc = 0x106FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106FACu;
    // 0x106fb0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x106FACu, 0x106FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106FB4u;
label_106fb4:
    // 0x106fb4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x106FB4u;
    {
        const bool branch_taken_0x106fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FB4u;
        // 0x106fb8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106fb4) {
            ctx->pc = 0x106FC4u;
            goto label_106fc4;
        }
    }
    ctx->pc = 0x106FBCu;
label_106fbc:
    // 0x106fbc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x106fbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106fc0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x106fc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_106fc4:
    // 0x106fc4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x106fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x106fc8: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x106FC8u;
    {
        const bool branch_taken_0x106fc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x106FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FC8u;
        // 0x106fcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106fc8) {
            ctx->pc = 0x106FE4u;
            goto label_106fe4;
        }
    }
    ctx->pc = 0x106FD0u;
    // 0x106fd0: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x106fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x106fd4: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x106FD4u;
    SET_GPR_U32(ctx, 31, 0x106FDCu);
    ctx->pc = 0x106FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106FD4u;
    // 0x106fd8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x106FD4u, 0x106FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106FDCu;
label_106fdc:
    // 0x106fdc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x106FDCu;
    {
        const bool branch_taken_0x106fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FDCu;
        // 0x106fe0: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106fdc) {
            ctx->pc = 0x106FE8u;
            goto label_106fe8;
        }
    }
    ctx->pc = 0x106FE4u;
label_106fe4:
    // 0x106fe4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x106fe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_106fe8:
    // 0x106fe8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x106fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106fec: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x106FECu;
    {
        const bool branch_taken_0x106fec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x106FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FECu;
        // 0x106ff0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106fec) {
            ctx->pc = 0x107010u;
            goto label_107010;
        }
    }
    ctx->pc = 0x106FF4u;
    // 0x106ff4: 0x0  nop
    ctx->pc = 0x106ff4u;
    // NOP
label_106ff8:
    // 0x106ff8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x106ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x106ffc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x106ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x107000: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x107000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x107004: 0x0  nop
    ctx->pc = 0x107004u;
    // NOP
    // 0x107008: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x107008u;
    {
        const bool branch_taken_0x107008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107008u;
        // 0x10700c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107008) {
            ctx->pc = 0x106FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106ff8;
        }
    }
    ctx->pc = 0x107010u;
label_107010:
    // 0x107010: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x107010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x107014: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x107014u;
    {
        const bool branch_taken_0x107014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107014u;
        // 0x107018: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107014) {
            ctx->pc = 0x107028u;
            goto label_107028;
        }
    }
    ctx->pc = 0x10701Cu;
    // 0x10701c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x10701Cu;
    SET_GPR_U32(ctx, 31, 0x107024u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x10701Cu, 0x107024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107024u;
label_107024:
    // 0x107024: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x107024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_107028:
    // 0x107028: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x107028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x10702c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x10702cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x107030: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x107030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_107034:
    // 0x107034: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x107034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107038: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x107038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10703c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x10703cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107040: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x107040u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x107044: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x107044u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107048: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x107048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x10704c: 0x3e00008  jr          $ra
    ctx->pc = 0x10704Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10704Cu;
        // 0x107050: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10704Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107054u;
    // 0x107054: 0x0  nop
    ctx->pc = 0x107054u;
    // NOP
    ctx->pc = 0x107058u;
}
