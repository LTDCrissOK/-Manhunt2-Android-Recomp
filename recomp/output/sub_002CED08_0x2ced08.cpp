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

// Function: sub_002CED08
// Address: 0x2ced08 - 0x2cee68
void sub_002CED08_0x2ced08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CED08_0x2ced08");
#endif

    switch (ctx->pc) {
        case 0x2ced50u: goto label_2ced50;
        case 0x2cedb0u: goto label_2cedb0;
        case 0x2cedd8u: goto label_2cedd8;
        case 0x2cee0cu: goto label_2cee0c;
        case 0x2cee4cu: goto label_2cee4c;
        default: break;
    }

    ctx->pc = 0x2ced08u;

    // 0x2ced08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ced08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ced0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ced0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ced10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ced10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ced14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ced14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ced18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ced18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ced1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ced1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ced20: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ced20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ced24: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2ced24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2ced28: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x2ced28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x2ced2c: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x2ced2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2ced30: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x2ced30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x2ced34: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2ced34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2ced38: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x2ced38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x2ced3c: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x2ced3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x2ced40: 0x18600014  blez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2CED40u;
    {
        const bool branch_taken_0x2ced40 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2CED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CED40u;
        // 0x2ced44: 0xae20005c  sw          $zero, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ced40) {
            ctx->pc = 0x2CED94u;
            goto label_2ced94;
        }
    }
    ctx->pc = 0x2CED48u;
    // 0x2ced48: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2ced48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ced4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ced4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ced50:
    // 0x2ced50: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x2ced50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2ced54: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ced54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2ced58: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2ced58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ced5c: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x2ced5cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x2ced60: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2ced60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2ced64: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2ced64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ced68: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x2ced68u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x2ced6c: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x2ced6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2ced70: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2ced70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ced74: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x2ced74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x2ced78: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2ced78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2ced7c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2ced7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ced80: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2ced80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x2ced84: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x2ced84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2ced88: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2ced88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ced8c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2CED8Cu;
    {
        const bool branch_taken_0x2ced8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CED8Cu;
        // 0x2ced90: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ced8c) {
            ctx->pc = 0x2CED50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ced50;
        }
    }
    ctx->pc = 0x2CED94u;
label_2ced94:
    // 0x2ced94: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2ced94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2ced98: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CED98u;
    {
        const bool branch_taken_0x2ced98 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2CED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CED98u;
        // 0x2ced9c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ced98) {
            ctx->pc = 0x2CEDE8u;
            goto label_2cede8;
        }
    }
    ctx->pc = 0x2CEDA0u;
    // 0x2ceda0: 0x3c100fff  lui         $s0, 0xFFF
    ctx->pc = 0x2ceda0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
    // 0x2ceda4: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x2ceda4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x2ceda8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ceda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2cedac: 0x0  nop
    ctx->pc = 0x2cedacu;
    // NOP
label_2cedb0:
    // 0x2cedb0: 0x122ac0  sll         $a1, $s2, 11
    ctx->pc = 0x2cedb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 11));
    // 0x2cedb4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2cedb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2cedb8: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x2cedb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2cedbc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2cedbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2cedc0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2cedc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cedc4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2cedc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cedc8: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x2cedc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x2cedcc: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2cedccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2cedd0: 0xc0b3b1a  jal         func_2CEC68
    ctx->pc = 0x2CEDD0u;
    SET_GPR_U32(ctx, 31, 0x2CEDD8u);
    ctx->pc = 0x2CEDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEDD0u;
    // 0x2cedd4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CEC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEC68u, 0x2CEDD0u, 0x2CEDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEDD8u;
label_2cedd8:
    // 0x2cedd8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2cedd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2ceddc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2ceddcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cede0: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x2CEDE0u;
    {
        const bool branch_taken_0x2cede0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cede0) {
            ctx->pc = 0x2CEDE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEDE0u;
            // 0x2cede4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEDB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cedb0;
        }
    }
    ctx->pc = 0x2CEDE8u;
label_2cede8:
    // 0x2cede8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2cede8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2cedec: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x2cedecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2cedf0: 0x3c100fff  lui         $s0, 0xFFF
    ctx->pc = 0x2cedf0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
    // 0x2cedf4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2cedf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cedf8: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x2cedf8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x2cedfc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2cedfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2cee00: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x2cee00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x2cee04: 0xc0b3b1a  jal         func_2CEC68
    ctx->pc = 0x2CEE04u;
    SET_GPR_U32(ctx, 31, 0x2CEE0Cu);
    ctx->pc = 0x2CEE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEE04u;
    // 0x2cee08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CEC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEC68u, 0x2CEE04u, 0x2CEE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEE0Cu;
label_2cee0c:
    // 0x2cee0c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2cee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2cee10: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x2cee10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x2cee14: 0x3442b420  ori         $v0, $v0, 0xB420
    ctx->pc = 0x2cee14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46112);
    // 0x2cee18: 0x34c6b410  ori         $a2, $a2, 0xB410
    ctx->pc = 0x2cee18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46096);
    // 0x2cee1c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2cee1cu;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0)); // MMIO: 0x1000b420
    // 0x2cee20: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2cee20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x2cee24: 0x34a5b430  ori         $a1, $a1, 0xB430
    ctx->pc = 0x2cee24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46128);
    // 0x2cee28: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2cee28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2cee2c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2cee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2cee30: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x2cee30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x2cee34: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2cee34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2cee38: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2cee38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2cee3c: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x2cee3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x2cee40: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2cee40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2cee44: 0xc0b3afe  jal         func_2CEBF8
    ctx->pc = 0x2CEE44u;
    SET_GPR_U32(ctx, 31, 0x2CEE4Cu);
    ctx->pc = 0x2CEBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEBF8u, 0x2CEE44u, 0x2CEE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEE4Cu;
label_2cee4c:
    // 0x2cee4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cee4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cee50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cee50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cee54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cee54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cee58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cee58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cee5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2cee5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cee60: 0x3e00008  jr          $ra
    ctx->pc = 0x2CEE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEE60u;
        // 0x2cee64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CEE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CEE68u;
}
