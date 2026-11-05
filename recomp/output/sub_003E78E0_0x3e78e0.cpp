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

// Function: sub_003E78E0
// Address: 0x3e78e0 - 0x3e7aa0
void sub_003E78E0_0x3e78e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E78E0_0x3e78e0");
#endif

    switch (ctx->pc) {
        case 0x3e792cu: goto label_3e792c;
        case 0x3e7940u: goto label_3e7940;
        case 0x3e7958u: goto label_3e7958;
        case 0x3e7964u: goto label_3e7964;
        case 0x3e79a8u: goto label_3e79a8;
        case 0x3e7a20u: goto label_3e7a20;
        case 0x3e7a30u: goto label_3e7a30;
        case 0x3e7a40u: goto label_3e7a40;
        case 0x3e7a4cu: goto label_3e7a4c;
        default: break;
    }

    ctx->pc = 0x3e78e0u;

    // 0x3e78e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e78e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e78e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e78e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e78e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3e78e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3e78ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e78ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e78f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e78f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e78f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e78f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e78f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e78f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3e78fc: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x3e78fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3e7900: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3e7900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3e7904: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3e7904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3e7908: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3e7908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3e790c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3e790cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3e7910: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x3e7910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x3e7914: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e7914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e7918: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3E7918u;
    {
        const bool branch_taken_0x3e7918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7918u;
        // 0x3e791c: 0xae620048  sw          $v0, 0x48($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7918) {
            ctx->pc = 0x3E7990u;
            goto label_3e7990;
        }
    }
    ctx->pc = 0x3E7920u;
    // 0x3e7920: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e7920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e7924: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E7924u;
    SET_GPR_U32(ctx, 31, 0x3E792Cu);
    ctx->pc = 0x3E7928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7924u;
    // 0x3e7928: 0x2632ffff  addiu       $s2, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E7924u, 0x3E792Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E792Cu;
label_3e792c:
    // 0x3e792c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e792cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e7930: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e7930u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7934: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x3e7934u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3e7938: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E7938u;
    SET_GPR_U32(ctx, 31, 0x3E7940u);
    ctx->pc = 0x3E793Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7938u;
    // 0x3e793c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E7938u, 0x3E7940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7940u;
label_3e7940:
    // 0x3e7940: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x3e7940u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e7944: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3e7944u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x3e7948: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E7948u;
    {
        const bool branch_taken_0x3e7948 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7948u;
        // 0x3e794c: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7948) {
            ctx->pc = 0x3E7970u;
            goto label_3e7970;
        }
    }
    ctx->pc = 0x3E7950u;
    // 0x3e7950: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e7950u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e7954: 0x0  nop
    ctx->pc = 0x3e7954u;
    // NOP
label_3e7958:
    // 0x3e7958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e7958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e795c: 0xc0affde  jal         func_2BFF78
    ctx->pc = 0x3E795Cu;
    SET_GPR_U32(ctx, 31, 0x3E7964u);
    ctx->pc = 0x3E7960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E795Cu;
    // 0x3e7960: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFF78u, 0x3E795Cu, 0x3E7964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7964u;
label_3e7964:
    // 0x3e7964: 0x0  nop
    ctx->pc = 0x3e7964u;
    // NOP
    // 0x3e7968: 0x1656fffb  bne         $s2, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E7968u;
    {
        const bool branch_taken_0x3e7968 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7968u;
        // 0x3e796c: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7968) {
            ctx->pc = 0x3E7958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e7958;
        }
    }
    ctx->pc = 0x3E7970u;
label_3e7970:
    // 0x3e7970: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3e7970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e7974: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3e7974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7978: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x3e7978u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x3e797c: 0xa6910004  sh          $s1, 0x4($s4)
    ctx->pc = 0x3e797cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e7980: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x3e7980u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x3e7984: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x3e7984u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    // 0x3e7988: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3E7988u;
    {
        const bool branch_taken_0x3e7988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7988u;
        // 0x3e798c: 0xa6910006  sh          $s1, 0x6($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7988) {
            ctx->pc = 0x3E7A78u;
            goto label_3e7a78;
        }
    }
    ctx->pc = 0x3E7990u;
label_3e7990:
    // 0x3e7990: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x3e7990u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e7994: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x3E7994u;
    {
        const bool branch_taken_0x3e7994 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7994u;
        // 0x3e7998: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7994) {
            ctx->pc = 0x3E7A14u;
            goto label_3e7a14;
        }
    }
    ctx->pc = 0x3E799Cu;
    // 0x3e799c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e799cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e79a0: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x3e79a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x3e79a4: 0x0  nop
    ctx->pc = 0x3e79a4u;
    // NOP
label_3e79a8:
    // 0x3e79a8: 0x94c70004  lhu         $a3, 0x4($a2)
    ctx->pc = 0x3e79a8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3e79ac: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3e79acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3e79b0: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x3e79b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e79b4: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E79B4u;
    {
        const bool branch_taken_0x3e79b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e79b4) {
            ctx->pc = 0x3E79B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E79B4u;
            // 0x3e79b8: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7A08u;
            goto label_3e7a08;
        }
    }
    ctx->pc = 0x3E79BCu;
    // 0x3e79bc: 0x5467000a  bnel        $v1, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x3E79BCu;
    {
        const bool branch_taken_0x3e79bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x3e79bc) {
            ctx->pc = 0x3E79C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E79BCu;
            // 0x3e79c0: 0x94c20006  lhu         $v0, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E79E8u;
            goto label_3e79e8;
        }
    }
    ctx->pc = 0x3E79C4u;
    // 0x3e79c4: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E79C4u;
    {
        const bool branch_taken_0x3e79c4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E79C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E79C4u;
        // 0x3e79c8: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e79c4) {
            ctx->pc = 0x3E79D4u;
            goto label_3e79d4;
        }
    }
    ctx->pc = 0x3E79CCu;
    // 0x3e79cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E79CCu;
    {
        const bool branch_taken_0x3e79cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E79D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E79CCu;
        // 0x3e79d0: 0xad020008  sw          $v0, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e79cc) {
            ctx->pc = 0x3E79D8u;
            goto label_3e79d8;
        }
    }
    ctx->pc = 0x3E79D4u;
label_3e79d4:
    // 0x3e79d4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3e79d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_3e79d8:
    // 0x3e79d8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3e79d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e79dc: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3e79dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x3e79e0: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x3e79e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x3e79e4: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x3e79e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_3e79e8:
    // 0x3e79e8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3e79e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e79ec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e79ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e79f0: 0xa4c20006  sh          $v0, 0x6($a2)
    ctx->pc = 0x3e79f0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e79f4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e79f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e79f8: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3e79f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e79fc: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x3e79fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e7a00: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3E7A00u;
    {
        const bool branch_taken_0x3e7a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7A00u;
        // 0x3e7a04: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7a00) {
            ctx->pc = 0x3E7A78u;
            goto label_3e7a78;
        }
    }
    ctx->pc = 0x3E7A08u;
label_3e7a08:
    // 0x3e7a08: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x3e7a08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3e7a0c: 0x54c0ffe6  bnel        $a2, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3E7A0Cu;
    {
        const bool branch_taken_0x3e7a0c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e7a0c) {
            ctx->pc = 0x3E7A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7A0Cu;
            // 0x3e7a10: 0x94c30006  lhu         $v1, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E79A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e79a8;
        }
    }
    ctx->pc = 0x3E7A14u;
label_3e7a14:
    // 0x3e7a14: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e7a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e7a18: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E7A18u;
    SET_GPR_U32(ctx, 31, 0x3E7A20u);
    ctx->pc = 0x3E7A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7A18u;
    // 0x3e7a1c: 0x2415000f  addiu       $s5, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E7A18u, 0x3E7A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7A20u;
label_3e7a20:
    // 0x3e7a20: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e7a20u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e7a24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e7a24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7a28: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E7A28u;
    SET_GPR_U32(ctx, 31, 0x3E7A30u);
    ctx->pc = 0x3E7A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7A28u;
    // 0x3e7a2c: 0x240401d0  addiu       $a0, $zero, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E7A28u, 0x3E7A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7A30u;
label_3e7a30:
    // 0x3e7a30: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e7a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e7a34: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x3e7a34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e7a38: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3e7a38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3e7a3c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3e7a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e7a40:
    // 0x3e7a40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e7a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7a44: 0xc0affde  jal         func_2BFF78
    ctx->pc = 0x3E7A44u;
    SET_GPR_U32(ctx, 31, 0x3E7A4Cu);
    ctx->pc = 0x3E7A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7A44u;
    // 0x3e7a48: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFF78u, 0x3E7A44u, 0x3E7A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7A4Cu;
label_3e7a4c:
    // 0x3e7a4c: 0x0  nop
    ctx->pc = 0x3e7a4cu;
    // NOP
    // 0x3e7a50: 0x16b6fffb  bne         $s5, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E7A50u;
    {
        const bool branch_taken_0x3e7a50 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E7A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7A50u;
        // 0x3e7a54: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7a50) {
            ctx->pc = 0x3E7A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e7a40;
        }
    }
    ctx->pc = 0x3E7A58u;
    // 0x3e7a58: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3e7a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e7a5c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e7a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e7a60: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x3e7a60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x3e7a64: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3e7a64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7a68: 0xa6510006  sh          $s1, 0x6($s2)
    ctx->pc = 0x3e7a68u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e7a6c: 0xa6430004  sh          $v1, 0x4($s2)
    ctx->pc = 0x3e7a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e7a70: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x3e7a70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x3e7a74: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x3e7a74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
label_3e7a78:
    // 0x3e7a78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e7a78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e7a7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e7a7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e7a80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e7a80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e7a84: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3e7a84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e7a88: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3e7a88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e7a8c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3e7a8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3e7a90: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3e7a90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e7a94: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3e7a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3e7a98: 0x3e00008  jr          $ra
    ctx->pc = 0x3E7A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E7A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7A98u;
        // 0x3e7a9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E7AA0u;
}
