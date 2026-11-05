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

// Function: sub_003E7020
// Address: 0x3e7020 - 0x3e71e0
void sub_003E7020_0x3e7020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7020_0x3e7020");
#endif

    switch (ctx->pc) {
        case 0x3e706cu: goto label_3e706c;
        case 0x3e7080u: goto label_3e7080;
        case 0x3e7098u: goto label_3e7098;
        case 0x3e70a4u: goto label_3e70a4;
        case 0x3e70e8u: goto label_3e70e8;
        case 0x3e7160u: goto label_3e7160;
        case 0x3e7170u: goto label_3e7170;
        case 0x3e7180u: goto label_3e7180;
        case 0x3e718cu: goto label_3e718c;
        default: break;
    }

    ctx->pc = 0x3e7020u;

    // 0x3e7020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e7020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e7024: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e7024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e7028: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3e7028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3e702c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e702cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7030: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e7030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e7034: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e7034u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7038: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e7038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3e703c: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x3e703cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3e7040: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3e7040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3e7044: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3e7044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3e7048: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3e7048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3e704c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3e704cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3e7050: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x3e7050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x3e7054: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e7054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e7058: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3E7058u;
    {
        const bool branch_taken_0x3e7058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7058u;
        // 0x3e705c: 0xae620048  sw          $v0, 0x48($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7058) {
            ctx->pc = 0x3E70D0u;
            goto label_3e70d0;
        }
    }
    ctx->pc = 0x3E7060u;
    // 0x3e7060: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e7060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e7064: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E7064u;
    SET_GPR_U32(ctx, 31, 0x3E706Cu);
    ctx->pc = 0x3E7068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7064u;
    // 0x3e7068: 0x2632ffff  addiu       $s2, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E7064u, 0x3E706Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E706Cu;
label_3e706c:
    // 0x3e706c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e706cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e7070: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e7070u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7074: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x3e7074u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3e7078: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E7078u;
    SET_GPR_U32(ctx, 31, 0x3E7080u);
    ctx->pc = 0x3E707Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7078u;
    // 0x3e707c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E7078u, 0x3E7080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7080u;
label_3e7080:
    // 0x3e7080: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x3e7080u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e7084: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3e7084u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x3e7088: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E7088u;
    {
        const bool branch_taken_0x3e7088 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7088u;
        // 0x3e708c: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7088) {
            ctx->pc = 0x3E70B0u;
            goto label_3e70b0;
        }
    }
    ctx->pc = 0x3E7090u;
    // 0x3e7090: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e7090u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e7094: 0x0  nop
    ctx->pc = 0x3e7094u;
    // NOP
label_3e7098:
    // 0x3e7098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e7098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e709c: 0xc0afede  jal         func_2BFB78
    ctx->pc = 0x3E709Cu;
    SET_GPR_U32(ctx, 31, 0x3E70A4u);
    ctx->pc = 0x3E70A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E709Cu;
    // 0x3e70a0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BFB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFB78u, 0x3E709Cu, 0x3E70A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E70A4u;
label_3e70a4:
    // 0x3e70a4: 0x0  nop
    ctx->pc = 0x3e70a4u;
    // NOP
    // 0x3e70a8: 0x1656fffb  bne         $s2, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E70A8u;
    {
        const bool branch_taken_0x3e70a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E70ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E70A8u;
        // 0x3e70ac: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e70a8) {
            ctx->pc = 0x3E7098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e7098;
        }
    }
    ctx->pc = 0x3E70B0u;
label_3e70b0:
    // 0x3e70b0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3e70b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e70b4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3e70b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e70b8: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x3e70b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x3e70bc: 0xa6910004  sh          $s1, 0x4($s4)
    ctx->pc = 0x3e70bcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e70c0: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x3e70c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x3e70c4: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x3e70c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    // 0x3e70c8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3E70C8u;
    {
        const bool branch_taken_0x3e70c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E70CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E70C8u;
        // 0x3e70cc: 0xa6910006  sh          $s1, 0x6($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e70c8) {
            ctx->pc = 0x3E71B8u;
            goto label_3e71b8;
        }
    }
    ctx->pc = 0x3E70D0u;
label_3e70d0:
    // 0x3e70d0: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x3e70d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e70d4: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x3E70D4u;
    {
        const bool branch_taken_0x3e70d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E70D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E70D4u;
        // 0x3e70d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e70d4) {
            ctx->pc = 0x3E7154u;
            goto label_3e7154;
        }
    }
    ctx->pc = 0x3E70DCu;
    // 0x3e70dc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e70dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e70e0: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x3e70e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x3e70e4: 0x0  nop
    ctx->pc = 0x3e70e4u;
    // NOP
label_3e70e8:
    // 0x3e70e8: 0x94c70004  lhu         $a3, 0x4($a2)
    ctx->pc = 0x3e70e8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3e70ec: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3e70ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3e70f0: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x3e70f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e70f4: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E70F4u;
    {
        const bool branch_taken_0x3e70f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e70f4) {
            ctx->pc = 0x3E70F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E70F4u;
            // 0x3e70f8: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7148u;
            goto label_3e7148;
        }
    }
    ctx->pc = 0x3E70FCu;
    // 0x3e70fc: 0x5467000a  bnel        $v1, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x3E70FCu;
    {
        const bool branch_taken_0x3e70fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x3e70fc) {
            ctx->pc = 0x3E7100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E70FCu;
            // 0x3e7100: 0x94c20006  lhu         $v0, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7128u;
            goto label_3e7128;
        }
    }
    ctx->pc = 0x3E7104u;
    // 0x3e7104: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E7104u;
    {
        const bool branch_taken_0x3e7104 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7104u;
        // 0x3e7108: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7104) {
            ctx->pc = 0x3E7114u;
            goto label_3e7114;
        }
    }
    ctx->pc = 0x3E710Cu;
    // 0x3e710c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E710Cu;
    {
        const bool branch_taken_0x3e710c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E710Cu;
        // 0x3e7110: 0xad020008  sw          $v0, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e710c) {
            ctx->pc = 0x3E7118u;
            goto label_3e7118;
        }
    }
    ctx->pc = 0x3E7114u;
label_3e7114:
    // 0x3e7114: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3e7114u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_3e7118:
    // 0x3e7118: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3e7118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e711c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3e711cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x3e7120: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x3e7120u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x3e7124: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x3e7124u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_3e7128:
    // 0x3e7128: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3e7128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e712c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e712cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e7130: 0xa4c20006  sh          $v0, 0x6($a2)
    ctx->pc = 0x3e7130u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e7134: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e7134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e7138: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3e7138u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e713c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x3e713cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e7140: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3E7140u;
    {
        const bool branch_taken_0x3e7140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7140u;
        // 0x3e7144: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7140) {
            ctx->pc = 0x3E71B8u;
            goto label_3e71b8;
        }
    }
    ctx->pc = 0x3E7148u;
label_3e7148:
    // 0x3e7148: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x3e7148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3e714c: 0x54c0ffe6  bnel        $a2, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3E714Cu;
    {
        const bool branch_taken_0x3e714c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e714c) {
            ctx->pc = 0x3E7150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E714Cu;
            // 0x3e7150: 0x94c30006  lhu         $v1, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E70E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e70e8;
        }
    }
    ctx->pc = 0x3E7154u;
label_3e7154:
    // 0x3e7154: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e7154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e7158: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E7158u;
    SET_GPR_U32(ctx, 31, 0x3E7160u);
    ctx->pc = 0x3E715Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7158u;
    // 0x3e715c: 0x2415000f  addiu       $s5, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E7158u, 0x3E7160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7160u;
label_3e7160:
    // 0x3e7160: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e7160u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e7164: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e7164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7168: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E7168u;
    SET_GPR_U32(ctx, 31, 0x3E7170u);
    ctx->pc = 0x3E716Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7168u;
    // 0x3e716c: 0x240401d0  addiu       $a0, $zero, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E7168u, 0x3E7170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7170u;
label_3e7170:
    // 0x3e7170: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e7170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e7174: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x3e7174u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e7178: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3e7178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3e717c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3e717cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e7180:
    // 0x3e7180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e7180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7184: 0xc0afede  jal         func_2BFB78
    ctx->pc = 0x3E7184u;
    SET_GPR_U32(ctx, 31, 0x3E718Cu);
    ctx->pc = 0x3E7188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7184u;
    // 0x3e7188: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BFB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFB78u, 0x3E7184u, 0x3E718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E718Cu;
label_3e718c:
    // 0x3e718c: 0x0  nop
    ctx->pc = 0x3e718cu;
    // NOP
    // 0x3e7190: 0x16b6fffb  bne         $s5, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E7190u;
    {
        const bool branch_taken_0x3e7190 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E7194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7190u;
        // 0x3e7194: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7190) {
            ctx->pc = 0x3E7180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e7180;
        }
    }
    ctx->pc = 0x3E7198u;
    // 0x3e7198: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3e7198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e719c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e719cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e71a0: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x3e71a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x3e71a4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3e71a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e71a8: 0xa6510006  sh          $s1, 0x6($s2)
    ctx->pc = 0x3e71a8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e71ac: 0xa6430004  sh          $v1, 0x4($s2)
    ctx->pc = 0x3e71acu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e71b0: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x3e71b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x3e71b4: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x3e71b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
label_3e71b8:
    // 0x3e71b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e71b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e71bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e71bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e71c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e71c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e71c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3e71c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e71c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3e71c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e71cc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3e71ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3e71d0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3e71d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e71d4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3e71d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3e71d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E71D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E71DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E71D8u;
        // 0x3e71dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E71D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E71E0u;
}
