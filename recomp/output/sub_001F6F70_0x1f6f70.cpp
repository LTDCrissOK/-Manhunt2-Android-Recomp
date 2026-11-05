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

// Function: sub_001F6F70
// Address: 0x1f6f70 - 0x1f7168
void sub_001F6F70_0x1f6f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6F70_0x1f6f70");
#endif

    switch (ctx->pc) {
        case 0x1f6ff8u: goto label_1f6ff8;
        case 0x1f7008u: goto label_1f7008;
        case 0x1f7038u: goto label_1f7038;
        case 0x1f7064u: goto label_1f7064;
        case 0x1f7078u: goto label_1f7078;
        case 0x1f7088u: goto label_1f7088;
        case 0x1f70b4u: goto label_1f70b4;
        case 0x1f70ccu: goto label_1f70cc;
        case 0x1f70d4u: goto label_1f70d4;
        case 0x1f70dcu: goto label_1f70dc;
        case 0x1f70e4u: goto label_1f70e4;
        case 0x1f70ecu: goto label_1f70ec;
        case 0x1f70f4u: goto label_1f70f4;
        case 0x1f70fcu: goto label_1f70fc;
        case 0x1f7104u: goto label_1f7104;
        case 0x1f710cu: goto label_1f710c;
        case 0x1f7114u: goto label_1f7114;
        case 0x1f711cu: goto label_1f711c;
        case 0x1f7124u: goto label_1f7124;
        case 0x1f7130u: goto label_1f7130;
        default: break;
    }

    ctx->pc = 0x1f6f70u;

    // 0x1f6f70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f6f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f6f74: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1f6f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f6f78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f6f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f6f7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f6f7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6f80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f6f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f6f84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f6f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f6f88: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1f6f88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f6f8c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f6f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f6f90: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1f6f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1f6f94: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f6f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f6f98: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1f6f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1f6f9c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F6F9Cu;
    {
        const bool branch_taken_0x1f6f9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6f9c) {
            ctx->pc = 0x1F6FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6F9Cu;
            // 0x1f6fa0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6FA4u;
            goto label_1f6fa4;
        }
    }
    ctx->pc = 0x1F6FA4u;
label_1f6fa4:
    // 0x1f6fa4: 0x8c8215f0  lw          $v0, 0x15F0($a0)
    ctx->pc = 0x1f6fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5616)));
    // 0x1f6fa8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1f6fa8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1f6fac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f6facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f6fb0: 0x2810  mfhi        $a1
    ctx->pc = 0x1f6fb0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1f6fb4: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6FB4u;
    {
        const bool branch_taken_0x1f6fb4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6FB4u;
        // 0x1f6fb8: 0xac8215f0  sw          $v0, 0x15F0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6fb4) {
            ctx->pc = 0x1F6FC8u;
            goto label_1f6fc8;
        }
    }
    ctx->pc = 0x1F6FBCu;
    // 0x1f6fbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f6fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6fc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F6FC0u;
    {
        const bool branch_taken_0x1f6fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6FC0u;
        // 0x1f6fc4: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6fc0) {
            ctx->pc = 0x1F6FCCu;
            goto label_1f6fcc;
        }
    }
    ctx->pc = 0x1F6FC8u;
label_1f6fc8:
    // 0x1f6fc8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1f6fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1f6fcc:
    // 0x1f6fcc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f6fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f6fd0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f6fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f6fd4: 0x8c4315e8  lw          $v1, 0x15E8($v0)
    ctx->pc = 0x1f6fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5608)));
    // 0x1f6fd8: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F6FD8u;
    {
        const bool branch_taken_0x1f6fd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6FD8u;
        // 0x1f6fdc: 0x3c13004a  lui         $s3, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6fd8) {
            ctx->pc = 0x1F7020u;
            goto label_1f7020;
        }
    }
    ctx->pc = 0x1F6FE0u;
    // 0x1f6fe0: 0x8c4215ec  lw          $v0, 0x15EC($v0)
    ctx->pc = 0x1f6fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5612)));
    // 0x1f6fe4: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x1f6fe4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x1f6fe8: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1F6FE8u;
    {
        const bool branch_taken_0x1f6fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6FE8u;
        // 0x1f6fec: 0x26327ab4  addiu       $s2, $s1, 0x7AB4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 31412));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6fe8) {
            ctx->pc = 0x1F7098u;
            goto label_1f7098;
        }
    }
    ctx->pc = 0x1F6FF0u;
    // 0x1f6ff0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f6ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ff4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f6ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f6ff8:
    // 0x1f6ff8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6FF8u;
    {
        const bool branch_taken_0x1f6ff8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6FF8u;
        // 0x1f6ffc: 0x26649c38  addiu       $a0, $s3, -0x63C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6ff8) {
            ctx->pc = 0x1F7008u;
            goto label_1f7008;
        }
    }
    ctx->pc = 0x1F7000u;
    // 0x1f7000: 0xc08070c  jal         func_201C30
    ctx->pc = 0x1F7000u;
    SET_GPR_U32(ctx, 31, 0x1F7008u);
    ctx->pc = 0x201C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C30u, 0x1F7000u, 0x1F7008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7008u;
label_1f7008:
    // 0x1f7008: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f7008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f700c: 0x2a02002e  slti        $v0, $s0, 0x2E
    ctx->pc = 0x1f700cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x1f7010: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F7010u;
    {
        const bool branch_taken_0x1f7010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7010u;
        // 0x1f7014: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7010) {
            ctx->pc = 0x1F6FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6ff8;
        }
    }
    ctx->pc = 0x1F7018u;
    // 0x1f7018: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1F7018u;
    {
        const bool branch_taken_0x1f7018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7018u;
        // 0x1f701c: 0x92220180  lbu         $v0, 0x180($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7018) {
            ctx->pc = 0x1F709Cu;
            goto label_1f709c;
        }
    }
    ctx->pc = 0x1F7020u;
label_1f7020:
    // 0x1f7020: 0x8c4215ec  lw          $v0, 0x15EC($v0)
    ctx->pc = 0x1f7020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5612)));
    // 0x1f7024: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x1f7024u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x1f7028: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1F7028u;
    {
        const bool branch_taken_0x1f7028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7028u;
        // 0x1f702c: 0x26327ab4  addiu       $s2, $s1, 0x7AB4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 31412));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7028) {
            ctx->pc = 0x1F7098u;
            goto label_1f7098;
        }
    }
    ctx->pc = 0x1F7030u;
    // 0x1f7030: 0xc0a0340  jal         func_280D00
    ctx->pc = 0x1F7030u;
    SET_GPR_U32(ctx, 31, 0x1F7038u);
    ctx->pc = 0x280D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D00u, 0x1F7030u, 0x1F7038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7038u;
label_1f7038:
    // 0x1f7038: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f7038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f703c: 0x54430017  bnel        $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F703Cu;
    {
        const bool branch_taken_0x1f703c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f703c) {
            ctx->pc = 0x1F7040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F703Cu;
            // 0x1f7040: 0x92220180  lbu         $v0, 0x180($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F709Cu;
            goto label_1f709c;
        }
    }
    ctx->pc = 0x1F7044u;
    // 0x1f7044: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1f7044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1f7048: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1f7048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f704c: 0x8c43bd6c  lw          $v1, -0x4294($v0)
    ctx->pc = 0x1f704cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD6Cu));
    // 0x1f7050: 0x54640012  bnel        $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F7050u;
    {
        const bool branch_taken_0x1f7050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1f7050) {
            ctx->pc = 0x1F7054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7050u;
            // 0x1f7054: 0x92220180  lbu         $v0, 0x180($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F709Cu;
            goto label_1f709c;
        }
    }
    ctx->pc = 0x1F7058u;
    // 0x1f7058: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1f7058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1f705c: 0xc07fb34  jal         func_1FECD0
    ctx->pc = 0x1F705Cu;
    SET_GPR_U32(ctx, 31, 0x1F7064u);
    ctx->pc = 0x1F7060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F705Cu;
    // 0x1f7060: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECD0u, 0x1F705Cu, 0x1F7064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7064u;
label_1f7064:
    // 0x1f7064: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f7064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7068: 0x5443000d  bnel        $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1F7068u;
    {
        const bool branch_taken_0x1f7068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f7068) {
            ctx->pc = 0x1F706Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7068u;
            // 0x1f706c: 0x92220180  lbu         $v0, 0x180($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F70A0u;
            goto label_1f70a0;
        }
    }
    ctx->pc = 0x1F7070u;
    // 0x1f7070: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f7070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7074: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f7074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f7078:
    // 0x1f7078: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7078u;
    {
        const bool branch_taken_0x1f7078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7078u;
        // 0x1f707c: 0x26649c38  addiu       $a0, $s3, -0x63C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7078) {
            ctx->pc = 0x1F7088u;
            goto label_1f7088;
        }
    }
    ctx->pc = 0x1F7080u;
    // 0x1f7080: 0xc080718  jal         func_201C60
    ctx->pc = 0x1F7080u;
    SET_GPR_U32(ctx, 31, 0x1F7088u);
    ctx->pc = 0x201C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C60u, 0x1F7080u, 0x1F7088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7088u;
label_1f7088:
    // 0x1f7088: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f7088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f708c: 0x2a02002e  slti        $v0, $s0, 0x2E
    ctx->pc = 0x1f708cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x1f7090: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F7090u;
    {
        const bool branch_taken_0x1f7090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7090u;
        // 0x1f7094: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7090) {
            ctx->pc = 0x1F7078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7078;
        }
    }
    ctx->pc = 0x1F7098u;
label_1f7098:
    // 0x1f7098: 0x92220180  lbu         $v0, 0x180($s1)
    ctx->pc = 0x1f7098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 384)));
label_1f709c:
    // 0x1f709c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f709cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f70a0:
    // 0x1f70a0: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F70A0u;
    {
        const bool branch_taken_0x1f70a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f70a0) {
            ctx->pc = 0x1F70A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F70A0u;
            // 0x1f70a4: 0xa2230180  sb          $v1, 0x180($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 384), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F70ACu;
            goto label_1f70ac;
        }
    }
    ctx->pc = 0x1F70A8u;
    // 0x1f70a8: 0xa2200180  sb          $zero, 0x180($s1)
    ctx->pc = 0x1f70a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 384), (uint8_t)GPR_U32(ctx, 0));
label_1f70ac:
    // 0x1f70ac: 0xc07e584  jal         func_1F9610
    ctx->pc = 0x1F70ACu;
    SET_GPR_U32(ctx, 31, 0x1F70B4u);
    ctx->pc = 0x1F70B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F70ACu;
    // 0x1f70b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9610u, 0x1F70ACu, 0x1F70B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F70B4u;
label_1f70b4:
    // 0x1f70b4: 0x8e82bd70  lw          $v0, -0x4290($s4)
    ctx->pc = 0x1f70b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950256)));
    // 0x1f70b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1f70b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1f70bc: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F70BCu;
    {
        const bool branch_taken_0x1f70bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f70bc) {
            ctx->pc = 0x1F70FCu;
            goto label_1f70fc;
        }
    }
    ctx->pc = 0x1F70C4u;
    // 0x1f70c4: 0xc07ddf6  jal         func_1F77D8
    ctx->pc = 0x1F70C4u;
    SET_GPR_U32(ctx, 31, 0x1F70CCu);
    ctx->pc = 0x1F70C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F70C4u;
    // 0x1f70c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F77D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F77D8u, 0x1F70C4u, 0x1F70CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F70CCu;
label_1f70cc:
    // 0x1f70cc: 0xc07b23a  jal         func_1EC8E8
    ctx->pc = 0x1F70CCu;
    SET_GPR_U32(ctx, 31, 0x1F70D4u);
    ctx->pc = 0x1F70D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F70CCu;
    // 0x1f70d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC8E8u, 0x1F70CCu, 0x1F70D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F70D4u;
label_1f70d4:
    // 0x1f70d4: 0xc07ee20  jal         func_1FB880
    ctx->pc = 0x1F70D4u;
    SET_GPR_U32(ctx, 31, 0x1F70DCu);
    ctx->pc = 0x1F70D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F70D4u;
    // 0x1f70d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB880u, 0x1F70D4u, 0x1F70DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F70DCu;
label_1f70dc:
    // 0x1f70dc: 0xc07ad68  jal         func_1EB5A0
    ctx->pc = 0x1F70DCu;
    SET_GPR_U32(ctx, 31, 0x1F70E4u);
    ctx->pc = 0x1F70E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F70DCu;
    // 0x1f70e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB5A0u, 0x1F70DCu, 0x1F70E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F70E4u;
label_1f70e4:
    // 0x1f70e4: 0xc07e99a  jal         func_1FA668
    ctx->pc = 0x1F70E4u;
    SET_GPR_U32(ctx, 31, 0x1F70ECu);
    ctx->pc = 0x1F70E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F70E4u;
    // 0x1f70e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA668u, 0x1F70E4u, 0x1F70ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F70ECu;
label_1f70ec:
    // 0x1f70ec: 0xc07bc96  jal         func_1EF258
    ctx->pc = 0x1F70ECu;
    SET_GPR_U32(ctx, 31, 0x1F70F4u);
    ctx->pc = 0x1F70F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F70ECu;
    // 0x1f70f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF258u, 0x1F70ECu, 0x1F70F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F70F4u;
label_1f70f4:
    // 0x1f70f4: 0xc07d5a8  jal         func_1F56A0
    ctx->pc = 0x1F70F4u;
    SET_GPR_U32(ctx, 31, 0x1F70FCu);
    ctx->pc = 0x1F70F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F70F4u;
    // 0x1f70f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F56A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F56A0u, 0x1F70F4u, 0x1F70FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F70FCu;
label_1f70fc:
    // 0x1f70fc: 0xc07e1a4  jal         func_1F8690
    ctx->pc = 0x1F70FCu;
    SET_GPR_U32(ctx, 31, 0x1F7104u);
    ctx->pc = 0x1F7100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F70FCu;
    // 0x1f7100: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8690u, 0x1F70FCu, 0x1F7104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7104u;
label_1f7104:
    // 0x1f7104: 0xc07e4e0  jal         func_1F9380
    ctx->pc = 0x1F7104u;
    SET_GPR_U32(ctx, 31, 0x1F710Cu);
    ctx->pc = 0x1F7108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7104u;
    // 0x1f7108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9380u, 0x1F7104u, 0x1F710Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F710Cu;
label_1f710c:
    // 0x1f710c: 0xc07bbd4  jal         func_1EEF50
    ctx->pc = 0x1F710Cu;
    SET_GPR_U32(ctx, 31, 0x1F7114u);
    ctx->pc = 0x1F7110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F710Cu;
    // 0x1f7110: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEF50u, 0x1F710Cu, 0x1F7114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7114u;
label_1f7114:
    // 0x1f7114: 0xc080ac0  jal         func_202B00
    ctx->pc = 0x1F7114u;
    SET_GPR_U32(ctx, 31, 0x1F711Cu);
    ctx->pc = 0x1F7118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7114u;
    // 0x1f7118: 0x26649c38  addiu       $a0, $s3, -0x63C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B00u, 0x1F7114u, 0x1F711Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F711Cu;
label_1f711c:
    // 0x1f711c: 0xc082662  jal         func_209988
    ctx->pc = 0x1F711Cu;
    SET_GPR_U32(ctx, 31, 0x1F7124u);
    ctx->pc = 0x209988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209988u, 0x1F711Cu, 0x1F7124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7124u;
label_1f7124:
    // 0x1f7124: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f7124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7128: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f7128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f712c: 0x0  nop
    ctx->pc = 0x1f712cu;
    // NOP
label_1f7130:
    // 0x1f7130: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1f7130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f7134: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x1f7134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1f7138: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1f7138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f713c: 0x2c8200e6  sltiu       $v0, $a0, 0xE6
    ctx->pc = 0x1f713cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)230) ? 1 : 0);
    // 0x1f7140: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F7140u;
    {
        const bool branch_taken_0x1f7140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7140u;
        // 0x1f7144: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7140) {
            ctx->pc = 0x1F7130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7130;
        }
    }
    ctx->pc = 0x1F7148u;
    // 0x1f7148: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f7148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f714c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f714cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f7150: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f7150u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7154: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f7154u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f7158: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f7158u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f715c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1f715cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f7160: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7160u;
        // 0x1f7164: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7168u;
}
