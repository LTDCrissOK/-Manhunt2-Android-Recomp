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

// Function: sub_00286EF8
// Address: 0x286ef8 - 0x287068
void sub_00286EF8_0x286ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286EF8_0x286ef8");
#endif

    switch (ctx->pc) {
        case 0x286f28u: goto label_286f28;
        case 0x286f50u: goto label_286f50;
        case 0x286f9cu: goto label_286f9c;
        case 0x286fa4u: goto label_286fa4;
        case 0x28700cu: goto label_28700c;
        case 0x28704cu: goto label_28704c;
        default: break;
    }

    ctx->pc = 0x286ef8u;

    // 0x286ef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x286ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x286efc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x286efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x286f00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x286f04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x286f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x286f08: 0x2450a320  addiu       $s0, $v0, -0x5CE0
    ctx->pc = 0x286f08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943520));
    // 0x286f0c: 0x8c43a320  lw          $v1, -0x5CE0($v0)
    ctx->pc = 0x286f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x66A320u));
    // 0x286f10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x286f10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286f14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x286f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x286f18: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x286F18u;
    {
        const bool branch_taken_0x286f18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x286F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F18u;
        // 0x286f1c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f18) {
            ctx->pc = 0x28704Cu;
            goto label_28704c;
        }
    }
    ctx->pc = 0x286F20u;
    // 0x286f20: 0xc0a1e6e  jal         func_2879B8
    ctx->pc = 0x286F20u;
    SET_GPR_U32(ctx, 31, 0x286F28u);
    ctx->pc = 0x286F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286F20u;
    // 0x286f24: 0x8e11002c  lw          $s1, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2879B8u, 0x286F20u, 0x286F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286F28u;
label_286f28:
    // 0x286f28: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x286F28u;
    {
        const bool branch_taken_0x286f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286f28) {
            ctx->pc = 0x286F48u;
            goto label_286f48;
        }
    }
    ctx->pc = 0x286F30u;
    // 0x286f30: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x286f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x286f34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x286f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x286f38: 0x441000f  bgez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x286F38u;
    {
        const bool branch_taken_0x286f38 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x286F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F38u;
        // 0x286f3c: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f38) {
            ctx->pc = 0x286F78u;
            goto label_286f78;
        }
    }
    ctx->pc = 0x286F40u;
    // 0x286f40: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x286F40u;
    {
        const bool branch_taken_0x286f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F40u;
        // 0x286f44: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f40) {
            ctx->pc = 0x286F78u;
            goto label_286f78;
        }
    }
    ctx->pc = 0x286F48u;
label_286f48:
    // 0x286f48: 0xc0a1ebe  jal         func_287AF8
    ctx->pc = 0x286F48u;
    SET_GPR_U32(ctx, 31, 0x286F50u);
    ctx->pc = 0x287AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287AF8u, 0x286F48u, 0x286F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286F50u;
label_286f50:
    // 0x286f50: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x286F50u;
    {
        const bool branch_taken_0x286f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286f50) {
            ctx->pc = 0x286F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286F50u;
            // 0x286f54: 0x2650a320  addiu       $s0, $s2, -0x5CE0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294943520));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286F7Cu;
            goto label_286f7c;
        }
    }
    ctx->pc = 0x286F58u;
    // 0x286f58: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x286f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x286f5c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x286f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x286f60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x286f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x286f64: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x286f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x286f68: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x286f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x286f6c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x286f6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x286f70: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x286F70u;
    {
        const bool branch_taken_0x286f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286f70) {
            ctx->pc = 0x286F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286F70u;
            // 0x286f74: 0xae03002c  sw          $v1, 0x2C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286F78u;
            goto label_286f78;
        }
    }
    ctx->pc = 0x286F78u;
label_286f78:
    // 0x286f78: 0x2650a320  addiu       $s0, $s2, -0x5CE0
    ctx->pc = 0x286f78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294943520));
label_286f7c:
    // 0x286f7c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x286f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x286f80: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x286F80u;
    {
        const bool branch_taken_0x286f80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x286F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F80u;
        // 0x286f84: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f80) {
            ctx->pc = 0x286F9Cu;
            goto label_286f9c;
        }
    }
    ctx->pc = 0x286F88u;
    // 0x286f88: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x286f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x286f8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x286f8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x286f90: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x286f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x286f94: 0xc07f540  jal         func_1FD500
    ctx->pc = 0x286F94u;
    SET_GPR_U32(ctx, 31, 0x286F9Cu);
    ctx->pc = 0x286F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286F94u;
    // 0x286f98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x286F94u, 0x286F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286F9Cu;
label_286f9c:
    // 0x286f9c: 0xc0a1f58  jal         func_287D60
    ctx->pc = 0x286F9Cu;
    SET_GPR_U32(ctx, 31, 0x286FA4u);
    ctx->pc = 0x287D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287D60u, 0x286F9Cu, 0x286FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286FA4u;
label_286fa4:
    // 0x286fa4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x286FA4u;
    {
        const bool branch_taken_0x286fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286FA4u;
        // 0x286fa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286fa4) {
            ctx->pc = 0x286FB4u;
            goto label_286fb4;
        }
    }
    ctx->pc = 0x286FACu;
    // 0x286fac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x286FACu;
    {
        const bool branch_taken_0x286fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286FACu;
        // 0x286fb0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286fac) {
            ctx->pc = 0x286FB8u;
            goto label_286fb8;
        }
    }
    ctx->pc = 0x286FB4u;
label_286fb4:
    // 0x286fb4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x286fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_286fb8:
    // 0x286fb8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x286fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x286fbc: 0x8c43aa88  lw          $v1, -0x5578($v0)
    ctx->pc = 0x286fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FAA88u));
    // 0x286fc0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x286FC0u;
    {
        const bool branch_taken_0x286fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x286FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286FC0u;
        // 0x286fc4: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286fc0) {
            ctx->pc = 0x286FDCu;
            goto label_286fdc;
        }
    }
    ctx->pc = 0x286FC8u;
    // 0x286fc8: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x286fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x286fcc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x286fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x286fd0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x286fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x286fd4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x286FD4u;
    {
        const bool branch_taken_0x286fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286fd4) {
            ctx->pc = 0x286FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286FD4u;
            // 0x286fd8: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286FE4u;
            goto label_286fe4;
        }
    }
    ctx->pc = 0x286FDCu;
label_286fdc:
    // 0x286fdc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x286FDCu;
    {
        const bool branch_taken_0x286fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286FDCu;
        // 0x286fe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286fdc) {
            ctx->pc = 0x286FE8u;
            goto label_286fe8;
        }
    }
    ctx->pc = 0x286FE4u;
label_286fe4:
    // 0x286fe4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x286fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_286fe8:
    // 0x286fe8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x286FE8u;
    {
        const bool branch_taken_0x286fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286FE8u;
        // 0x286fec: 0x2650a320  addiu       $s0, $s2, -0x5CE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294943520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286fe8) {
            ctx->pc = 0x286FF8u;
            goto label_286ff8;
        }
    }
    ctx->pc = 0x286FF0u;
    // 0x286ff0: 0x2642a320  addiu       $v0, $s2, -0x5CE0
    ctx->pc = 0x286ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294943520));
    // 0x286ff4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x286ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_286ff8:
    // 0x286ff8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x286ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x286ffc: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x286FFCu;
    {
        const bool branch_taken_0x286ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286ffc) {
            ctx->pc = 0x287000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286FFCu;
            // 0x287000: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287050u;
            goto label_287050;
        }
    }
    ctx->pc = 0x287004u;
    // 0x287004: 0xc0a1f92  jal         func_287E48
    ctx->pc = 0x287004u;
    SET_GPR_U32(ctx, 31, 0x28700Cu);
    ctx->pc = 0x287008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287004u;
    // 0x287008: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287E48u, 0x287004u, 0x28700Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28700Cu;
label_28700c:
    // 0x28700c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28700Cu;
    {
        const bool branch_taken_0x28700c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28700c) {
            ctx->pc = 0x28701Cu;
            goto label_28701c;
        }
    }
    ctx->pc = 0x287014u;
    // 0x287014: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x287014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x287018: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x287018u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_28701c:
    // 0x28701c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x28701Cu;
    {
        const bool branch_taken_0x28701c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x287020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28701Cu;
        // 0x287020: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28701c) {
            ctx->pc = 0x28704Cu;
            goto label_28704c;
        }
    }
    ctx->pc = 0x287024u;
    // 0x287024: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x287024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x287028: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x287028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x28702c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x28702cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x287030: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x287030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287034: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x287034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x287038: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x287038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x28703c: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x28703cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x287040: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x287040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x287044: 0xc07f540  jal         func_1FD500
    ctx->pc = 0x287044u;
    SET_GPR_U32(ctx, 31, 0x28704Cu);
    ctx->pc = 0x287048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287044u;
    // 0x287048: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x287044u, 0x28704Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28704Cu;
label_28704c:
    // 0x28704c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28704cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_287050:
    // 0x287050: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x287050u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x287054: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x287054u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x287058: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x287058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28705c: 0x3e00008  jr          $ra
    ctx->pc = 0x28705Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28705Cu;
        // 0x287060: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28705Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287064u;
    // 0x287064: 0x0  nop
    ctx->pc = 0x287064u;
    // NOP
    ctx->pc = 0x287068u;
}
