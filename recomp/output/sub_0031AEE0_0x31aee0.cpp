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

// Function: sub_0031AEE0
// Address: 0x31aee0 - 0x31b038
void sub_0031AEE0_0x31aee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031AEE0_0x31aee0");
#endif

    switch (ctx->pc) {
        case 0x31af30u: goto label_31af30;
        case 0x31afa8u: goto label_31afa8;
        case 0x31afd4u: goto label_31afd4;
        case 0x31afecu: goto label_31afec;
        case 0x31aff4u: goto label_31aff4;
        case 0x31affcu: goto label_31affc;
        case 0x31b004u: goto label_31b004;
        case 0x31b00cu: goto label_31b00c;
        default: break;
    }

    ctx->pc = 0x31aee0u;

    // 0x31aee0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x31aee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x31aee4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x31aee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x31aee8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31aee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aeec: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x31aeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x31aef0: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x31aef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x31aef4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31aef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aef8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x31aef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x31aefc: 0x37b20008  ori         $s2, $sp, 0x8
    ctx->pc = 0x31aefcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x31af00: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x31af00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x31af04: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x31af04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31af08: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x31af08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x31af0c: 0x26150054  addiu       $s5, $s0, 0x54
    ctx->pc = 0x31af0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x31af10: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x31af10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x31af14: 0x26160060  addiu       $s6, $s0, 0x60
    ctx->pc = 0x31af14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x31af18: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x31af18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x31af1c: 0x2617006c  addiu       $s7, $s0, 0x6C
    ctx->pc = 0x31af1cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x31af20: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x31af20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x31af24: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x31af24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31af28: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x31af28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x31af2c: 0x0  nop
    ctx->pc = 0x31af2cu;
    // NOP
label_31af30:
    // 0x31af30: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x31af30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x31af34: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x31af34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x31af38: 0x24910001  addiu       $s1, $a0, 0x1
    ctx->pc = 0x31af38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x31af3c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x31af3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x31af40: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x31af40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x31af44: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x31af44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31af48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31af48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31af4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x31af4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31af50: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x31af50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x31af54: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x31af54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x31af58: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31af58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x31af5c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x31af5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x31af60: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x31af60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x31af64: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x31af64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x31af68: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x31af68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x31af6c: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x31af6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x31af70: 0x6862000f  ldl         $v0, 0xF($v1)
    ctx->pc = 0x31af70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x31af74: 0x6c620008  ldr         $v0, 0x8($v1)
    ctx->pc = 0x31af74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x31af78: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x31af78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31af7c: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x31af7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31af80: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x31af80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x31af84: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x31af84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x31af88: 0xb062000f  sdl         $v0, 0xF($v1)
    ctx->pc = 0x31af88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31af8c: 0xb4620008  sdr         $v0, 0x8($v1)
    ctx->pc = 0x31af8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31af90: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x31af90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x31af94: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x31af94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31af98: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x31AF98u;
    {
        const bool branch_taken_0x31af98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x31af98) {
            ctx->pc = 0x31AF9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AF98u;
            // 0x31af9c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AFC4u;
            goto label_31afc4;
        }
    }
    ctx->pc = 0x31AFA0u;
    // 0x31afa0: 0x24420054  addiu       $v0, $v0, 0x54
    ctx->pc = 0x31afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x31afa4: 0x0  nop
    ctx->pc = 0x31afa4u;
    // NOP
label_31afa8:
    // 0x31afa8: 0x0  nop
    ctx->pc = 0x31afa8u;
    // NOP
    // 0x31afac: 0x0  nop
    ctx->pc = 0x31afacu;
    // NOP
    // 0x31afb0: 0x0  nop
    ctx->pc = 0x31afb0u;
    // NOP
    // 0x31afb4: 0x0  nop
    ctx->pc = 0x31afb4u;
    // NOP
    // 0x31afb8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31AFB8u;
    {
        const bool branch_taken_0x31afb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x31AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AFB8u;
        // 0x31afbc: 0x24420054  addiu       $v0, $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31afb8) {
            ctx->pc = 0x31AFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31afa8;
        }
    }
    ctx->pc = 0x31AFC0u;
    // 0x31afc0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x31afc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_31afc4:
    // 0x31afc4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31AFC4u;
    {
        const bool branch_taken_0x31afc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31afc4) {
            ctx->pc = 0x31AFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AFC4u;
            // 0x31afc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AFD8u;
            goto label_31afd8;
        }
    }
    ctx->pc = 0x31AFCCu;
    // 0x31afcc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x31AFCCu;
    SET_GPR_U32(ctx, 31, 0x31AFD4u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x31AFCCu, 0x31AFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AFD4u;
label_31afd4:
    // 0x31afd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31afd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31afd8:
    // 0x31afd8: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x31afd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x31afdc: 0x5440ffd4  bnel        $v0, $zero, . + 4 + (-0x2C << 2)
    ctx->pc = 0x31AFDCu;
    {
        const bool branch_taken_0x31afdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31afdc) {
            ctx->pc = 0x31AFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AFDCu;
            // 0x31afe0: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31af30;
        }
    }
    ctx->pc = 0x31AFE4u;
    // 0x31afe4: 0xc0d584a  jal         func_356128
    ctx->pc = 0x31AFE4u;
    SET_GPR_U32(ctx, 31, 0x31AFECu);
    ctx->pc = 0x356128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356128u, 0x31AFE4u, 0x31AFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AFECu;
label_31afec:
    // 0x31afec: 0xc0d588c  jal         func_356230
    ctx->pc = 0x31AFECu;
    SET_GPR_U32(ctx, 31, 0x31AFF4u);
    ctx->pc = 0x31AFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AFECu;
    // 0x31aff0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356230u, 0x31AFECu, 0x31AFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AFF4u;
label_31aff4:
    // 0x31aff4: 0xc0d73fc  jal         func_35CFF0
    ctx->pc = 0x31AFF4u;
    SET_GPR_U32(ctx, 31, 0x31AFFCu);
    ctx->pc = 0x31AFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AFF4u;
    // 0x31aff8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFF0u, 0x31AFF4u, 0x31AFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AFFCu;
label_31affc:
    // 0x31affc: 0xc0d73fc  jal         func_35CFF0
    ctx->pc = 0x31AFFCu;
    SET_GPR_U32(ctx, 31, 0x31B004u);
    ctx->pc = 0x31B000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AFFCu;
    // 0x31b000: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFF0u, 0x31AFFCu, 0x31B004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B004u;
label_31b004:
    // 0x31b004: 0xc0d73fc  jal         func_35CFF0
    ctx->pc = 0x31B004u;
    SET_GPR_U32(ctx, 31, 0x31B00Cu);
    ctx->pc = 0x31B008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B004u;
    // 0x31b008: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFF0u, 0x31B004u, 0x31B00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B00Cu;
label_31b00c:
    // 0x31b00c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x31b00cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31b010: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x31b010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31b014: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x31b014u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31b018: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x31b018u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31b01c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x31b01cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31b020: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x31b020u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31b024: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x31b024u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31b028: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x31b028u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x31b02c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x31b02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31b030: 0x3e00008  jr          $ra
    ctx->pc = 0x31B030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B030u;
        // 0x31b034: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B038u;
}
