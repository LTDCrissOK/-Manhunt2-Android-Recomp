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

// Function: sub_003A4F18
// Address: 0x3a4f18 - 0x3a50a0
void sub_003A4F18_0x3a4f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4F18_0x3a4f18");
#endif

    switch (ctx->pc) {
        case 0x3a4f68u: goto label_3a4f68;
        case 0x3a4f7cu: goto label_3a4f7c;
        case 0x3a4f9cu: goto label_3a4f9c;
        case 0x3a4facu: goto label_3a4fac;
        case 0x3a4fb4u: goto label_3a4fb4;
        case 0x3a4fb8u: goto label_3a4fb8;
        case 0x3a4fc0u: goto label_3a4fc0;
        case 0x3a4fd0u: goto label_3a4fd0;
        case 0x3a4fd8u: goto label_3a4fd8;
        case 0x3a4fe4u: goto label_3a4fe4;
        case 0x3a5000u: goto label_3a5000;
        case 0x3a501cu: goto label_3a501c;
        case 0x3a5030u: goto label_3a5030;
        case 0x3a5044u: goto label_3a5044;
        case 0x3a5058u: goto label_3a5058;
        case 0x3a5060u: goto label_3a5060;
        case 0x3a5068u: goto label_3a5068;
        case 0x3a5070u: goto label_3a5070;
        case 0x3a5080u: goto label_3a5080;
        default: break;
    }

    ctx->pc = 0x3a4f18u;

    // 0x3a4f18: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3a4f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3a4f1c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3a4f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3a4f20: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x3a4f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x3a4f24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a4f24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4f28: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x3a4f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x3a4f2c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3a4f2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4f30: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x3a4f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x3a4f34: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x3a4f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3a4f38: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x3a4f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x3a4f3c: 0x2465d960  addiu       $a1, $v1, -0x26A0
    ctx->pc = 0x3a4f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957408));
    // 0x3a4f40: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3a4f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3a4f44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a4f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4f48: 0x8a230003  lwl         $v1, 0x3($s1)
    ctx->pc = 0x3a4f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x3a4f4c: 0x9a230000  lwr         $v1, 0x0($s1)
    ctx->pc = 0x3a4f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x3a4f50: 0x82260004  lb          $a2, 0x4($s1)
    ctx->pc = 0x3a4f50u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3a4f54: 0xa8430003  swl         $v1, 0x3($v0)
    ctx->pc = 0x3a4f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3a4f58: 0xb8430000  swr         $v1, 0x0($v0)
    ctx->pc = 0x3a4f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3a4f5c: 0xa0460004  sb          $a2, 0x4($v0)
    ctx->pc = 0x3a4f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 6));
    // 0x3a4f60: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x3A4F60u;
    SET_GPR_U32(ctx, 31, 0x3A4F68u);
    ctx->pc = 0x3A4F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4F60u;
    // 0x3a4f64: 0xa3a00044  sb          $zero, 0x44($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x3A4F60u, 0x3A4F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4F68u;
label_3a4f68:
    // 0x3a4f68: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A4F68u;
    {
        const bool branch_taken_0x3a4f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4f68) {
            ctx->pc = 0x3A4F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4F68u;
            // 0x3a4f6c: 0x3c130041  lui         $s3, 0x41 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4F88u;
            goto label_3a4f88;
        }
    }
    ctx->pc = 0x3A4F70u;
    // 0x3a4f70: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x3a4f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3a4f74: 0xc0e9a08  jal         func_3A6820
    ctx->pc = 0x3A4F74u;
    SET_GPR_U32(ctx, 31, 0x3A4F7Cu);
    ctx->pc = 0x3A4F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4F74u;
    // 0x3a4f78: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6820u, 0x3A4F74u, 0x3A4F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4F7Cu;
label_3a4f7c:
    // 0x3a4f7c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x3A4F7Cu;
    {
        const bool branch_taken_0x3a4f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4F7Cu;
        // 0x3a4f80: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4f7c) {
            ctx->pc = 0x3A5088u;
            goto label_3a5088;
        }
    }
    ctx->pc = 0x3A4F84u;
    // 0x3a4f84: 0x0  nop
    ctx->pc = 0x3a4f84u;
    // NOP
label_3a4f88:
    // 0x3a4f88: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x3a4f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3a4f8c: 0x267038a8  addiu       $s0, $s3, 0x38A8
    ctx->pc = 0x3a4f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 14504));
    // 0x3a4f90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a4f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4f94: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3A4F94u;
    SET_GPR_U32(ctx, 31, 0x3A4F9Cu);
    ctx->pc = 0x3A4F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4F94u;
    // 0x3a4f98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3A4F94u, 0x3A4F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4F9Cu;
label_3a4f9c:
    // 0x3a4f9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a4f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4fa0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a4fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4fa4: 0xc0e92ec  jal         func_3A4BB0
    ctx->pc = 0x3A4FA4u;
    SET_GPR_U32(ctx, 31, 0x3A4FACu);
    ctx->pc = 0x3A4FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4FA4u;
    // 0x3a4fa8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4BB0u, 0x3A4FA4u, 0x3A4FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4FACu;
label_3a4fac:
    // 0x3a4fac: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A4FACu;
    SET_GPR_U32(ctx, 31, 0x3A4FB4u);
    ctx->pc = 0x3A4FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4FACu;
    // 0x3a4fb0: 0x34049000  ori         $a0, $zero, 0x9000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A4FACu, 0x3A4FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4FB4u;
label_3a4fb4:
    // 0x3a4fb4: 0x0  nop
    ctx->pc = 0x3a4fb4u;
    // NOP
label_3a4fb8:
    // 0x3a4fb8: 0xc0ee156  jal         func_3B8558
    ctx->pc = 0x3A4FB8u;
    SET_GPR_U32(ctx, 31, 0x3A4FC0u);
    ctx->pc = 0x3A4FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4FB8u;
    // 0x3a4fbc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8558u, 0x3A4FB8u, 0x3A4FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4FC0u;
label_3a4fc0:
    // 0x3a4fc0: 0x1050fffd  beq         $v0, $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x3A4FC0u;
    {
        const bool branch_taken_0x3a4fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x3a4fc0) {
            ctx->pc = 0x3A4FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a4fb8;
        }
    }
    ctx->pc = 0x3A4FC8u;
    // 0x3a4fc8: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A4FC8u;
    SET_GPR_U32(ctx, 31, 0x3A4FD0u);
    ctx->pc = 0x3A4FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4FC8u;
    // 0x3a4fcc: 0x34049001  ori         $a0, $zero, 0x9001 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36865);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A4FC8u, 0x3A4FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4FD0u;
label_3a4fd0:
    // 0x3a4fd0: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A4FD0u;
    SET_GPR_U32(ctx, 31, 0x3A4FD8u);
    ctx->pc = 0x3A4FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4FD0u;
    // 0x3a4fd4: 0x34049100  ori         $a0, $zero, 0x9100 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37120);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A4FD0u, 0x3A4FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4FD8u;
label_3a4fd8:
    // 0x3a4fd8: 0x266538a8  addiu       $a1, $s3, 0x38A8
    ctx->pc = 0x3a4fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 14504));
    // 0x3a4fdc: 0xc0e8ffc  jal         func_3A3FF0
    ctx->pc = 0x3A4FDCu;
    SET_GPR_U32(ctx, 31, 0x3A4FE4u);
    ctx->pc = 0x3A4FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4FDCu;
    // 0x3a4fe0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3FF0u, 0x3A4FDCu, 0x3A4FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4FE4u;
label_3a4fe4:
    // 0x3a4fe4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A4FE4u;
    {
        const bool branch_taken_0x3a4fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4fe4) {
            ctx->pc = 0x3A4FF8u;
            goto label_3a4ff8;
        }
    }
    ctx->pc = 0x3A4FECu;
    // 0x3a4fec: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3A4FECu;
    {
        const bool branch_taken_0x3a4fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4FECu;
        // 0x3a4ff0: 0x34049101  ori         $a0, $zero, 0x9101 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37121);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4fec) {
            ctx->pc = 0x3A503Cu;
            goto label_3a503c;
        }
    }
    ctx->pc = 0x3A4FF4u;
    // 0x3a4ff4: 0x0  nop
    ctx->pc = 0x3a4ff4u;
    // NOP
label_3a4ff8:
    // 0x3a4ff8: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A4FF8u;
    SET_GPR_U32(ctx, 31, 0x3A5000u);
    ctx->pc = 0x3A4FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4FF8u;
    // 0x3a4ffc: 0x34049102  ori         $a0, $zero, 0x9102 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37122);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A4FF8u, 0x3A5000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5000u;
label_3a5000:
    // 0x3a5000: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a5000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a5004: 0x34049200  ori         $a0, $zero, 0x9200
    ctx->pc = 0x3a5004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37376);
    // 0x3a5008: 0xa3a20031  sb          $v0, 0x31($sp)
    ctx->pc = 0x3a5008u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a500c: 0xa3a00030  sb          $zero, 0x30($sp)
    ctx->pc = 0x3a500cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5010: 0xa3a00032  sb          $zero, 0x32($sp)
    ctx->pc = 0x3a5010u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5014: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A5014u;
    SET_GPR_U32(ctx, 31, 0x3A501Cu);
    ctx->pc = 0x3A5018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5014u;
    // 0x3a5018: 0xa3a00033  sb          $zero, 0x33($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 51), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A5014u, 0x3A501Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A501Cu;
label_3a501c:
    // 0x3a501c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3a501cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a5020: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x3a5020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3a5024: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3a5024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5028: 0xc0ee2aa  jal         func_3B8AA8
    ctx->pc = 0x3A5028u;
    SET_GPR_U32(ctx, 31, 0x3A5030u);
    ctx->pc = 0x3A502Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5028u;
    // 0x3a502c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8AA8u, 0x3A5028u, 0x3A5030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5030u;
label_3a5030:
    // 0x3a5030: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A5030u;
    {
        const bool branch_taken_0x3a5030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5030) {
            ctx->pc = 0x3A5050u;
            goto label_3a5050;
        }
    }
    ctx->pc = 0x3A5038u;
    // 0x3a5038: 0x34049201  ori         $a0, $zero, 0x9201
    ctx->pc = 0x3a5038u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37377);
label_3a503c:
    // 0x3a503c: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A503Cu;
    SET_GPR_U32(ctx, 31, 0x3A5044u);
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A503Cu, 0x3A5044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5044u;
label_3a5044:
    // 0x3a5044: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3A5044u;
    {
        const bool branch_taken_0x3a5044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5044u;
        // 0x3a5048: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5044) {
            ctx->pc = 0x3A5084u;
            goto label_3a5084;
        }
    }
    ctx->pc = 0x3A504Cu;
    // 0x3a504c: 0x0  nop
    ctx->pc = 0x3a504cu;
    // NOP
label_3a5050:
    // 0x3a5050: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A5050u;
    SET_GPR_U32(ctx, 31, 0x3A5058u);
    ctx->pc = 0x3A5054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5050u;
    // 0x3a5054: 0x34049202  ori         $a0, $zero, 0x9202 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37378);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A5050u, 0x3A5058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5058u;
label_3a5058:
    // 0x3a5058: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A5058u;
    SET_GPR_U32(ctx, 31, 0x3A5060u);
    ctx->pc = 0x3A505Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5058u;
    // 0x3a505c: 0x34049300  ori         $a0, $zero, 0x9300 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37632);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A5058u, 0x3A5060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5060u;
label_3a5060:
    // 0x3a5060: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3a5060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a5064: 0x0  nop
    ctx->pc = 0x3a5064u;
    // NOP
label_3a5068:
    // 0x3a5068: 0xc0ee156  jal         func_3B8558
    ctx->pc = 0x3A5068u;
    SET_GPR_U32(ctx, 31, 0x3A5070u);
    ctx->pc = 0x3A506Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5068u;
    // 0x3a506c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8558u, 0x3A5068u, 0x3A5070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5070u;
label_3a5070:
    // 0x3a5070: 0x1050fffd  beq         $v0, $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x3A5070u;
    {
        const bool branch_taken_0x3a5070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x3a5070) {
            ctx->pc = 0x3A5068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5068;
        }
    }
    ctx->pc = 0x3A5078u;
    // 0x3a5078: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A5078u;
    SET_GPR_U32(ctx, 31, 0x3A5080u);
    ctx->pc = 0x3A507Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5078u;
    // 0x3a507c: 0x34049301  ori         $a0, $zero, 0x9301 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37633);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A5078u, 0x3A5080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5080u;
label_3a5080:
    // 0x3a5080: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a5080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a5084:
    // 0x3a5084: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x3a5084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3a5088:
    // 0x3a5088: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x3a5088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3a508c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x3a508cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a5090: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x3a5090u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3a5094: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3a5094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a5098: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5098u;
        // 0x3a509c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A50A0u;
}
