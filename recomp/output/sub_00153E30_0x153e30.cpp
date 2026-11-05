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

// Function: sub_00153E30
// Address: 0x153e30 - 0x154258
void sub_00153E30_0x153e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153E30_0x153e30");
#endif

    switch (ctx->pc) {
        case 0x153e6cu: goto label_153e6c;
        case 0x153e84u: goto label_153e84;
        case 0x153e98u: goto label_153e98;
        case 0x153eb0u: goto label_153eb0;
        case 0x153ec4u: goto label_153ec4;
        case 0x153ed4u: goto label_153ed4;
        case 0x153ee0u: goto label_153ee0;
        case 0x153ef0u: goto label_153ef0;
        case 0x153f34u: goto label_153f34;
        case 0x15404cu: goto label_15404c;
        case 0x154078u: goto label_154078;
        case 0x1540b8u: goto label_1540b8;
        case 0x1540d8u: goto label_1540d8;
        case 0x154104u: goto label_154104;
        case 0x154168u: goto label_154168;
        case 0x154170u: goto label_154170;
        case 0x154180u: goto label_154180;
        case 0x1541bcu: goto label_1541bc;
        case 0x1541d4u: goto label_1541d4;
        case 0x1541ecu: goto label_1541ec;
        case 0x1541fcu: goto label_1541fc;
        case 0x15420cu: goto label_15420c;
        case 0x15421cu: goto label_15421c;
        default: break;
    }

    ctx->pc = 0x153e30u;

    // 0x153e30: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x153e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x153e34: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x153e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x153e38: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x153e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x153e3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x153e3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153e40: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x153e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x153e44: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x153e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x153e48: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x153e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x153e4c: 0xffb500c8  sd          $s5, 0xC8($sp)
    ctx->pc = 0x153e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 21));
    // 0x153e50: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x153e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x153e54: 0xffb700d8  sd          $s7, 0xD8($sp)
    ctx->pc = 0x153e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 23));
    // 0x153e58: 0xffbe00e0  sd          $fp, 0xE0($sp)
    ctx->pc = 0x153e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
    // 0x153e5c: 0xffbf00e8  sd          $ra, 0xE8($sp)
    ctx->pc = 0x153e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 31));
    // 0x153e60: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x153e60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x153e64: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x153E64u;
    SET_GPR_U32(ctx, 31, 0x153E6Cu);
    ctx->pc = 0x153E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153E64u;
    // 0x153e68: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x153E64u, 0x153E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153E6Cu;
label_153e6c:
    // 0x153e6c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x153e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x153e70: 0x144300eb  bne         $v0, $v1, . + 4 + (0xEB << 2)
    ctx->pc = 0x153E70u;
    {
        const bool branch_taken_0x153e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x153E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153E70u;
        // 0x153e74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153e70) {
            ctx->pc = 0x154220u;
            goto label_154220;
        }
    }
    ctx->pc = 0x153E78u;
    // 0x153e78: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x153e78u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x153e7c: 0xc0551ea  jal         func_1547A8
    ctx->pc = 0x153E7Cu;
    SET_GPR_U32(ctx, 31, 0x153E84u);
    ctx->pc = 0x153E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153E7Cu;
    // 0x153e80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1547A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1547A8u, 0x153E7Cu, 0x153E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153E84u;
label_153e84:
    // 0x153e84: 0x38500002  xori        $s0, $v0, 0x2
    ctx->pc = 0x153e84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x153e88: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x153e88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x153e8c: 0x2e100001  sltiu       $s0, $s0, 0x1
    ctx->pc = 0x153e8cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x153e90: 0xc0551ea  jal         func_1547A8
    ctx->pc = 0x153E90u;
    SET_GPR_U32(ctx, 31, 0x153E98u);
    ctx->pc = 0x153E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153E90u;
    // 0x153e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1547A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1547A8u, 0x153E90u, 0x153E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153E98u;
label_153e98:
    // 0x153e98: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x153e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x153e9c: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x153e9cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x153ea0: 0x2c520001  sltiu       $s2, $v0, 0x1
    ctx->pc = 0x153ea0u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x153ea4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x153ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153ea8: 0xc0551e4  jal         func_154790
    ctx->pc = 0x153EA8u;
    SET_GPR_U32(ctx, 31, 0x153EB0u);
    ctx->pc = 0x153EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153EA8u;
    // 0x153eac: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154790u, 0x153EA8u, 0x153EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153EB0u;
label_153eb0:
    // 0x153eb0: 0x120000ca  beqz        $s0, . + 4 + (0xCA << 2)
    ctx->pc = 0x153EB0u;
    {
        const bool branch_taken_0x153eb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x153eb0) {
            ctx->pc = 0x1541DCu;
            goto label_1541dc;
        }
    }
    ctx->pc = 0x153EB8u;
    // 0x153eb8: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x153eb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x153ebc: 0xc04d930  jal         func_1364C0
    ctx->pc = 0x153EBCu;
    SET_GPR_U32(ctx, 31, 0x153EC4u);
    ctx->pc = 0x153EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153EBCu;
    // 0x153ec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1364C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1364C0u, 0x153EBCu, 0x153EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153EC4u;
label_153ec4:
    // 0x153ec4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x153EC4u;
    {
        const bool branch_taken_0x153ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153EC4u;
        // 0x153ec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153ec4) {
            ctx->pc = 0x153EE8u;
            goto label_153ee8;
        }
    }
    ctx->pc = 0x153ECCu;
    // 0x153ecc: 0xc05533e  jal         func_154CF8
    ctx->pc = 0x153ECCu;
    SET_GPR_U32(ctx, 31, 0x153ED4u);
    ctx->pc = 0x153ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153ECCu;
    // 0x153ed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154CF8u, 0x153ECCu, 0x153ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153ED4u;
label_153ed4:
    // 0x153ed4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x153ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153ed8: 0xc0551f0  jal         func_1547C0
    ctx->pc = 0x153ED8u;
    SET_GPR_U32(ctx, 31, 0x153EE0u);
    ctx->pc = 0x153EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153ED8u;
    // 0x153edc: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1547C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1547C0u, 0x153ED8u, 0x153EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153EE0u;
label_153ee0:
    // 0x153ee0: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x153EE0u;
    {
        const bool branch_taken_0x153ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153EE0u;
        // 0x153ee4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153ee0) {
            ctx->pc = 0x154220u;
            goto label_154220;
        }
    }
    ctx->pc = 0x153EE8u;
label_153ee8:
    // 0x153ee8: 0xc0554e0  jal         func_155380
    ctx->pc = 0x153EE8u;
    SET_GPR_U32(ctx, 31, 0x153EF0u);
    ctx->pc = 0x153EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153EE8u;
    // 0x153eec: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155380u, 0x153EE8u, 0x153EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153EF0u;
label_153ef0:
    // 0x153ef0: 0x9224046c  lbu         $a0, 0x46C($s1)
    ctx->pc = 0x153ef0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x153ef4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x153ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x153ef8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x153ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x153efc: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x153efcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0x153f00: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x153f00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x153f04: 0x24a59a08  addiu       $a1, $a1, -0x65F8
    ctx->pc = 0x153f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941192));
    // 0x153f08: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x153f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x153f0c: 0x9066b820  lbu         $a2, -0x47E0($v1)
    ctx->pc = 0x153f0cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294948896)));
    // 0x153f10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x153f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x153f14: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x153f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x153f18: 0x8c75bd50  lw          $s5, -0x42B0($v1)
    ctx->pc = 0x153f18u;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x153f1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x153f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x153f20: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x153f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x153f24: 0x14c00027  bnez        $a2, . + 4 + (0x27 << 2)
    ctx->pc = 0x153F24u;
    {
        const bool branch_taken_0x153f24 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x153F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F24u;
        // 0x153f28: 0x8cb40108  lw          $s4, 0x108($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153f24) {
            ctx->pc = 0x153FC4u;
            goto label_153fc4;
        }
    }
    ctx->pc = 0x153F2Cu;
    // 0x153f2c: 0xc08f68a  jal         func_23DA28
    ctx->pc = 0x153F2Cu;
    SET_GPR_U32(ctx, 31, 0x153F34u);
    ctx->pc = 0x153F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153F2Cu;
    // 0x153f30: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA28u, 0x153F2Cu, 0x153F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153F34u;
label_153f34:
    // 0x153f34: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x153F34u;
    {
        const bool branch_taken_0x153f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x153f34) {
            ctx->pc = 0x153F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153F34u;
            // 0x153f38: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153FC8u;
            goto label_153fc8;
        }
    }
    ctx->pc = 0x153F3Cu;
    // 0x153f3c: 0x92a213f4  lbu         $v0, 0x13F4($s5)
    ctx->pc = 0x153f3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 5108)));
    // 0x153f40: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x153F40u;
    {
        const bool branch_taken_0x153f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F40u;
        // 0x153f44: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153f40) {
            ctx->pc = 0x153F64u;
            goto label_153f64;
        }
    }
    ctx->pc = 0x153F48u;
    // 0x153f48: 0xc6a113f8  lwc1        $f1, 0x13F8($s5)
    ctx->pc = 0x153f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 5112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153f4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x153f4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153f50: 0x0  nop
    ctx->pc = 0x153f50u;
    // NOP
    // 0x153f54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x153f54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153f58: 0x0  nop
    ctx->pc = 0x153f58u;
    // NOP
    // 0x153f5c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x153F5Cu;
    {
        const bool branch_taken_0x153f5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x153f5c) {
            ctx->pc = 0x153F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153F5Cu;
            // 0x153f60: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153F64u;
            goto label_153f64;
        }
    }
    ctx->pc = 0x153F64u;
label_153f64:
    // 0x153f64: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x153f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x153f68: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x153F68u;
    {
        const bool branch_taken_0x153f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x153f68) {
            ctx->pc = 0x153F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153F68u;
            // 0x153f6c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153FC8u;
            goto label_153fc8;
        }
    }
    ctx->pc = 0x153F70u;
    // 0x153f70: 0xc68100d0  lwc1        $f1, 0xD0($s4)
    ctx->pc = 0x153f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153f74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x153f74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153f78: 0x0  nop
    ctx->pc = 0x153f78u;
    // NOP
    // 0x153f7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x153f7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153f80: 0x0  nop
    ctx->pc = 0x153f80u;
    // NOP
    // 0x153f84: 0x45030010  bc1tl       . + 4 + (0x10 << 2)
    ctx->pc = 0x153F84u;
    {
        const bool branch_taken_0x153f84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x153f84) {
            ctx->pc = 0x153F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153F84u;
            // 0x153f88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153FC8u;
            goto label_153fc8;
        }
    }
    ctx->pc = 0x153F8Cu;
    // 0x153f8c: 0x8e82036c  lw          $v0, 0x36C($s4)
    ctx->pc = 0x153f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 876)));
    // 0x153f90: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x153f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x153f94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x153f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x153f98: 0x5043000b  beql        $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x153F98u;
    {
        const bool branch_taken_0x153f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x153f98) {
            ctx->pc = 0x153F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153F98u;
            // 0x153f9c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153FC8u;
            goto label_153fc8;
        }
    }
    ctx->pc = 0x153FA0u;
    // 0x153fa0: 0x9282047d  lbu         $v0, 0x47D($s4)
    ctx->pc = 0x153fa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1149)));
    // 0x153fa4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x153FA4u;
    {
        const bool branch_taken_0x153fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x153fa4) {
            ctx->pc = 0x153FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153FA4u;
            // 0x153fa8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153FC8u;
            goto label_153fc8;
        }
    }
    ctx->pc = 0x153FACu;
    // 0x153fac: 0x8e830334  lw          $v1, 0x334($s4)
    ctx->pc = 0x153facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 820)));
    // 0x153fb0: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x153fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x153fb4: 0x2442ffd9  addiu       $v0, $v0, -0x27
    ctx->pc = 0x153fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967257));
    // 0x153fb8: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x153fb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x153fbc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x153FBCu;
    {
        const bool branch_taken_0x153fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153fbc) {
            ctx->pc = 0x153FC8u;
            goto label_153fc8;
        }
    }
    ctx->pc = 0x153FC4u;
label_153fc4:
    // 0x153fc4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x153fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_153fc8:
    // 0x153fc8: 0x12000095  beqz        $s0, . + 4 + (0x95 << 2)
    ctx->pc = 0x153FC8u;
    {
        const bool branch_taken_0x153fc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x153FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153FC8u;
        // 0x153fcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153fc8) {
            ctx->pc = 0x154220u;
            goto label_154220;
        }
    }
    ctx->pc = 0x153FD0u;
    // 0x153fd0: 0x8ea30104  lw          $v1, 0x104($s5)
    ctx->pc = 0x153fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
    // 0x153fd4: 0x8e240660  lw          $a0, 0x660($s1)
    ctx->pc = 0x153fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1632)));
    // 0x153fd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x153fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x153fdc: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x153fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x153fe0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x153fe0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153fe4: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x153fe4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x153fe8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x153fe8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x153fec: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x153fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x153ff0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x153ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153ff4: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x153ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153ff8: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x153ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x153ffc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x153ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x154000: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x154000u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x154004: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x154004u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x154008: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x154008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x15400c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x15400cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x154010: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x154010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x154014: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x154014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x154018: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x154018u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x15401c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x15401cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x154020: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x154020u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x154024: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x154024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x154028: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x154028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15402c: 0x0  nop
    ctx->pc = 0x15402cu;
    // NOP
    // 0x154030: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x154030u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154034: 0x0  nop
    ctx->pc = 0x154034u;
    // NOP
    // 0x154038: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x154038u;
    {
        const bool branch_taken_0x154038 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154038u;
        // 0x15403c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154038) {
            ctx->pc = 0x154050u;
            goto label_154050;
        }
    }
    ctx->pc = 0x154040u;
    // 0x154040: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x154040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154044: 0xc054e12  jal         func_153848
    ctx->pc = 0x154044u;
    SET_GPR_U32(ctx, 31, 0x15404Cu);
    ctx->pc = 0x154048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154044u;
    // 0x154048: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153848u, 0x154044u, 0x15404Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15404Cu;
label_15404c:
    // 0x15404c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15404cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154050:
    // 0x154050: 0x12000072  beqz        $s0, . + 4 + (0x72 << 2)
    ctx->pc = 0x154050u;
    {
        const bool branch_taken_0x154050 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x154054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154050u;
        // 0x154054: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154050) {
            ctx->pc = 0x15421Cu;
            goto label_15421c;
        }
    }
    ctx->pc = 0x154058u;
    // 0x154058: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x154058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15405c: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x15405cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x154060: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x154060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154064: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x154068: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x154068u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15406c: 0xc44c1660  lwc1        $f12, 0x1660($v0)
    ctx->pc = 0x15406cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x154070: 0xc0ba550  jal         func_2E9540
    ctx->pc = 0x154070u;
    SET_GPR_U32(ctx, 31, 0x154078u);
    ctx->pc = 0x154074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154070u;
    // 0x154074: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9540u, 0x154070u, 0x154078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154078u;
label_154078:
    // 0x154078: 0x8e830104  lw          $v1, 0x104($s4)
    ctx->pc = 0x154078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
    // 0x15407c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x15407cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x154080: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x154080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x154084: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x154084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154088: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x154088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15408c: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x15408cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    // 0x154090: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x154090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x154094: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x154094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x154098: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x154098u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15409c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x15409cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1540a0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1540a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1540a4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1540a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1540a8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1540a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1540ac: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1540acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1540b0: 0xc049498  jal         func_125260
    ctx->pc = 0x1540B0u;
    SET_GPR_U32(ctx, 31, 0x1540B8u);
    ctx->pc = 0x1540B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1540B0u;
    // 0x1540b4: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x125260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125260u, 0x1540B0u, 0x1540B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1540B8u;
label_1540b8:
    // 0x1540b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1540b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1540bc: 0x1240001f  beqz        $s2, . + 4 + (0x1F << 2)
    ctx->pc = 0x1540BCu;
    {
        const bool branch_taken_0x1540bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1540C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1540BCu;
        // 0x1540c0: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1540bc) {
            ctx->pc = 0x15413Cu;
            goto label_15413c;
        }
    }
    ctx->pc = 0x1540C4u;
    // 0x1540c4: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x1540c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
    // 0x1540c8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1540c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1540cc: 0x245e9b10  addiu       $fp, $v0, -0x64F0
    ctx->pc = 0x1540ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
    // 0x1540d0: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x1540d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1540d4: 0x0  nop
    ctx->pc = 0x1540d4u;
    // NOP
label_1540d8:
    // 0x1540d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1540d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1540dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1540dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1540e0: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1540e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1540e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1540e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1540e8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1540E8u;
    {
        const bool branch_taken_0x1540e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1540ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1540E8u;
        // 0x1540ec: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1540e8) {
            ctx->pc = 0x15412Cu;
            goto label_15412c;
        }
    }
    ctx->pc = 0x1540F0u;
    // 0x1540f0: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x1540f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1540f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1540f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1540f8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1540f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1540fc: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x1540FCu;
    SET_GPR_U32(ctx, 31, 0x154104u);
    ctx->pc = 0x154100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1540FCu;
    // 0x154100: 0x24c60070  addiu       $a2, $a2, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1540FCu, 0x154104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154104u;
label_154104:
    // 0x154104: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x154104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x154108: 0xc6e30004  lwc1        $f3, 0x4($s7)
    ctx->pc = 0x154108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15410c: 0xc6e40008  lwc1        $f4, 0x8($s7)
    ctx->pc = 0x15410cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x154110: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x154110u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x154114: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x154114u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x154118: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x154118u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x15411c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x15411cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154120: 0x0  nop
    ctx->pc = 0x154120u;
    // NOP
    // 0x154124: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x154124u;
    {
        const bool branch_taken_0x154124 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x154124) {
            ctx->pc = 0x154128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154124u;
            // 0x154128: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15412Cu;
            goto label_15412c;
        }
    }
    ctx->pc = 0x15412Cu;
label_15412c:
    // 0x15412c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x15412cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x154130: 0x2d2102b  sltu        $v0, $s6, $s2
    ctx->pc = 0x154130u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x154134: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x154134u;
    {
        const bool branch_taken_0x154134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154134u;
        // 0x154138: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154134) {
            ctx->pc = 0x1540D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1540d8;
        }
    }
    ctx->pc = 0x15413Cu;
label_15413c:
    // 0x15413c: 0xc6210674  lwc1        $f1, 0x674($s1)
    ctx->pc = 0x15413cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x154140: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x154140u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154144: 0x0  nop
    ctx->pc = 0x154144u;
    // NOP
    // 0x154148: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x154148u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15414c: 0x0  nop
    ctx->pc = 0x15414cu;
    // NOP
    // 0x154150: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x154150u;
    {
        const bool branch_taken_0x154150 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x154154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154150u;
        // 0x154154: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154150) {
            ctx->pc = 0x15415Cu;
            goto label_15415c;
        }
    }
    ctx->pc = 0x154158u;
    // 0x154158: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x154158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15415c:
    // 0x15415c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15415cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154160: 0xc0bf8ea  jal         func_2FE3A8
    ctx->pc = 0x154160u;
    SET_GPR_U32(ctx, 31, 0x154168u);
    ctx->pc = 0x154164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154160u;
    // 0x154164: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE3A8u, 0x154160u, 0x154168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154168u;
label_154168:
    // 0x154168: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x154168u;
    SET_GPR_U32(ctx, 31, 0x154170u);
    ctx->pc = 0x15416Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154168u;
    // 0x15416c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x154168u, 0x154170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154170u;
label_154170:
    // 0x154170: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x154170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x154174: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x154174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x154178: 0xc0f4b84  jal         func_3D2E10
    ctx->pc = 0x154178u;
    SET_GPR_U32(ctx, 31, 0x154180u);
    ctx->pc = 0x15417Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154178u;
    // 0x15417c: 0x2203e  dsrl32      $a0, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2E10u, 0x154178u, 0x154180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154180u;
label_154180:
    // 0x154180: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x154180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x154184: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x154184u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x154188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x154188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15418c: 0x0  nop
    ctx->pc = 0x15418cu;
    // NOP
    // 0x154190: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x154190u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x154194: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x154194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154198: 0x0  nop
    ctx->pc = 0x154198u;
    // NOP
    // 0x15419c: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x15419Cu;
    {
        const bool branch_taken_0x15419c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1541A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15419Cu;
        // 0x1541a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15419c) {
            ctx->pc = 0x154220u;
            goto label_154220;
        }
    }
    ctx->pc = 0x1541A4u;
    // 0x1541a4: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1541A4u;
    {
        const bool branch_taken_0x1541a4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1541A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1541A4u;
        // 0x1541a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1541a4) {
            ctx->pc = 0x1541BCu;
            goto label_1541bc;
        }
    }
    ctx->pc = 0x1541ACu;
    // 0x1541ac: 0x8e270660  lw          $a3, 0x660($s1)
    ctx->pc = 0x1541acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1632)));
    // 0x1541b0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1541b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1541b4: 0xc0bf892  jal         func_2FE248
    ctx->pc = 0x1541B4u;
    SET_GPR_U32(ctx, 31, 0x1541BCu);
    ctx->pc = 0x1541B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1541B4u;
    // 0x1541b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE248u, 0x1541B4u, 0x1541BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1541BCu;
label_1541bc:
    // 0x1541bc: 0x8e240464  lw          $a0, 0x464($s1)
    ctx->pc = 0x1541bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1124)));
    // 0x1541c0: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1541C0u;
    {
        const bool branch_taken_0x1541c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1541C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1541C0u;
        // 0x1541c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1541c0) {
            ctx->pc = 0x154220u;
            goto label_154220;
        }
    }
    ctx->pc = 0x1541C8u;
    // 0x1541c8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1541c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1541cc: 0xc043fee  jal         func_10FFB8
    ctx->pc = 0x1541CCu;
    SET_GPR_U32(ctx, 31, 0x1541D4u);
    ctx->pc = 0x1541D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1541CCu;
    // 0x1541d0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FFB8u, 0x1541CCu, 0x1541D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1541D4u;
label_1541d4:
    // 0x1541d4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1541D4u;
    {
        const bool branch_taken_0x1541d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1541D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1541D4u;
        // 0x1541d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1541d4) {
            ctx->pc = 0x154220u;
            goto label_154220;
        }
    }
    ctx->pc = 0x1541DCu;
label_1541dc:
    // 0x1541dc: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x1541DCu;
    {
        const bool branch_taken_0x1541dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1541E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1541DCu;
        // 0x1541e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1541dc) {
            ctx->pc = 0x154214u;
            goto label_154214;
        }
    }
    ctx->pc = 0x1541E4u;
    // 0x1541e4: 0xc04e3ec  jal         func_138FB0
    ctx->pc = 0x1541E4u;
    SET_GPR_U32(ctx, 31, 0x1541ECu);
    ctx->pc = 0x1541E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1541E4u;
    // 0x1541e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138FB0u, 0x1541E4u, 0x1541ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1541ECu;
label_1541ec:
    // 0x1541ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1541ECu;
    {
        const bool branch_taken_0x1541ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1541F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1541ECu;
        // 0x1541f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1541ec) {
            ctx->pc = 0x154200u;
            goto label_154200;
        }
    }
    ctx->pc = 0x1541F4u;
    // 0x1541f4: 0xc0556ac  jal         func_155AB0
    ctx->pc = 0x1541F4u;
    SET_GPR_U32(ctx, 31, 0x1541FCu);
    ctx->pc = 0x1541F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1541F4u;
    // 0x1541f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155AB0u, 0x1541F4u, 0x1541FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1541FCu;
label_1541fc:
    // 0x1541fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1541fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_154200:
    // 0x154200: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x154200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154204: 0xc055586  jal         func_155618
    ctx->pc = 0x154204u;
    SET_GPR_U32(ctx, 31, 0x15420Cu);
    ctx->pc = 0x154208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154204u;
    // 0x154208: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155618u, 0x154204u, 0x15420Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15420Cu;
label_15420c:
    // 0x15420c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15420Cu;
    {
        const bool branch_taken_0x15420c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15420Cu;
        // 0x154210: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15420c) {
            ctx->pc = 0x154220u;
            goto label_154220;
        }
    }
    ctx->pc = 0x154214u;
label_154214:
    // 0x154214: 0xc04da5c  jal         func_136970
    ctx->pc = 0x154214u;
    SET_GPR_U32(ctx, 31, 0x15421Cu);
    ctx->pc = 0x154218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154214u;
    // 0x154218: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136970u, 0x154214u, 0x15421Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15421Cu;
label_15421c:
    // 0x15421c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15421cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_154220:
    // 0x154220: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x154220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x154224: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x154224u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x154228: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x154228u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15422c: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x15422cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x154230: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x154230u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x154234: 0xdfb500c8  ld          $s5, 0xC8($sp)
    ctx->pc = 0x154234u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x154238: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x154238u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15423c: 0xdfb700d8  ld          $s7, 0xD8($sp)
    ctx->pc = 0x15423cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x154240: 0xdfbe00e0  ld          $fp, 0xE0($sp)
    ctx->pc = 0x154240u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x154244: 0xdfbf00e8  ld          $ra, 0xE8($sp)
    ctx->pc = 0x154244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x154248: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x154248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15424c: 0x3e00008  jr          $ra
    ctx->pc = 0x15424Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15424Cu;
        // 0x154250: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15424Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154254u;
    // 0x154254: 0x0  nop
    ctx->pc = 0x154254u;
    // NOP
    ctx->pc = 0x154258u;
}
