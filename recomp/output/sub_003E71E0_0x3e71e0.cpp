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

// Function: sub_003E71E0
// Address: 0x3e71e0 - 0x3e73a0
void sub_003E71E0_0x3e71e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E71E0_0x3e71e0");
#endif

    switch (ctx->pc) {
        case 0x3e722cu: goto label_3e722c;
        case 0x3e7240u: goto label_3e7240;
        case 0x3e7258u: goto label_3e7258;
        case 0x3e7264u: goto label_3e7264;
        case 0x3e72a8u: goto label_3e72a8;
        case 0x3e7320u: goto label_3e7320;
        case 0x3e7330u: goto label_3e7330;
        case 0x3e7340u: goto label_3e7340;
        case 0x3e734cu: goto label_3e734c;
        default: break;
    }

    ctx->pc = 0x3e71e0u;

    // 0x3e71e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e71e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e71e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e71e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e71e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3e71e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3e71ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e71ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e71f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e71f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e71f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e71f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e71f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e71f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3e71fc: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x3e71fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3e7200: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3e7200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3e7204: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3e7204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3e7208: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3e7208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3e720c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3e720cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3e7210: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x3e7210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x3e7214: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e7214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e7218: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3E7218u;
    {
        const bool branch_taken_0x3e7218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7218u;
        // 0x3e721c: 0xae620048  sw          $v0, 0x48($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7218) {
            ctx->pc = 0x3E7290u;
            goto label_3e7290;
        }
    }
    ctx->pc = 0x3E7220u;
    // 0x3e7220: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e7220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e7224: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E7224u;
    SET_GPR_U32(ctx, 31, 0x3E722Cu);
    ctx->pc = 0x3E7228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7224u;
    // 0x3e7228: 0x2632ffff  addiu       $s2, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E7224u, 0x3E722Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E722Cu;
label_3e722c:
    // 0x3e722c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e722cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e7230: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e7230u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7234: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x3e7234u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3e7238: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E7238u;
    SET_GPR_U32(ctx, 31, 0x3E7240u);
    ctx->pc = 0x3E723Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7238u;
    // 0x3e723c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E7238u, 0x3E7240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7240u;
label_3e7240:
    // 0x3e7240: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x3e7240u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e7244: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3e7244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x3e7248: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E7248u;
    {
        const bool branch_taken_0x3e7248 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7248u;
        // 0x3e724c: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7248) {
            ctx->pc = 0x3E7270u;
            goto label_3e7270;
        }
    }
    ctx->pc = 0x3E7250u;
    // 0x3e7250: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e7250u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e7254: 0x0  nop
    ctx->pc = 0x3e7254u;
    // NOP
label_3e7258:
    // 0x3e7258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e7258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e725c: 0xc0aff08  jal         func_2BFC20
    ctx->pc = 0x3E725Cu;
    SET_GPR_U32(ctx, 31, 0x3E7264u);
    ctx->pc = 0x3E7260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E725Cu;
    // 0x3e7260: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFC20u, 0x3E725Cu, 0x3E7264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7264u;
label_3e7264:
    // 0x3e7264: 0x0  nop
    ctx->pc = 0x3e7264u;
    // NOP
    // 0x3e7268: 0x1656fffb  bne         $s2, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E7268u;
    {
        const bool branch_taken_0x3e7268 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7268u;
        // 0x3e726c: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7268) {
            ctx->pc = 0x3E7258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e7258;
        }
    }
    ctx->pc = 0x3E7270u;
label_3e7270:
    // 0x3e7270: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3e7270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e7274: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3e7274u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7278: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x3e7278u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x3e727c: 0xa6910004  sh          $s1, 0x4($s4)
    ctx->pc = 0x3e727cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e7280: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x3e7280u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x3e7284: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x3e7284u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    // 0x3e7288: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3E7288u;
    {
        const bool branch_taken_0x3e7288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7288u;
        // 0x3e728c: 0xa6910006  sh          $s1, 0x6($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7288) {
            ctx->pc = 0x3E7378u;
            goto label_3e7378;
        }
    }
    ctx->pc = 0x3E7290u;
label_3e7290:
    // 0x3e7290: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x3e7290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e7294: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x3E7294u;
    {
        const bool branch_taken_0x3e7294 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7294u;
        // 0x3e7298: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7294) {
            ctx->pc = 0x3E7314u;
            goto label_3e7314;
        }
    }
    ctx->pc = 0x3E729Cu;
    // 0x3e729c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e729cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e72a0: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x3e72a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x3e72a4: 0x0  nop
    ctx->pc = 0x3e72a4u;
    // NOP
label_3e72a8:
    // 0x3e72a8: 0x94c70004  lhu         $a3, 0x4($a2)
    ctx->pc = 0x3e72a8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3e72ac: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3e72acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3e72b0: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x3e72b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e72b4: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E72B4u;
    {
        const bool branch_taken_0x3e72b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e72b4) {
            ctx->pc = 0x3E72B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E72B4u;
            // 0x3e72b8: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7308u;
            goto label_3e7308;
        }
    }
    ctx->pc = 0x3E72BCu;
    // 0x3e72bc: 0x5467000a  bnel        $v1, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x3E72BCu;
    {
        const bool branch_taken_0x3e72bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x3e72bc) {
            ctx->pc = 0x3E72C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E72BCu;
            // 0x3e72c0: 0x94c20006  lhu         $v0, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E72E8u;
            goto label_3e72e8;
        }
    }
    ctx->pc = 0x3E72C4u;
    // 0x3e72c4: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E72C4u;
    {
        const bool branch_taken_0x3e72c4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E72C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E72C4u;
        // 0x3e72c8: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e72c4) {
            ctx->pc = 0x3E72D4u;
            goto label_3e72d4;
        }
    }
    ctx->pc = 0x3E72CCu;
    // 0x3e72cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E72CCu;
    {
        const bool branch_taken_0x3e72cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E72D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E72CCu;
        // 0x3e72d0: 0xad020008  sw          $v0, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e72cc) {
            ctx->pc = 0x3E72D8u;
            goto label_3e72d8;
        }
    }
    ctx->pc = 0x3E72D4u;
label_3e72d4:
    // 0x3e72d4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3e72d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_3e72d8:
    // 0x3e72d8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3e72d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e72dc: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3e72dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x3e72e0: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x3e72e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x3e72e4: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x3e72e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_3e72e8:
    // 0x3e72e8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3e72e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e72ec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e72ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e72f0: 0xa4c20006  sh          $v0, 0x6($a2)
    ctx->pc = 0x3e72f0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e72f4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e72f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e72f8: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3e72f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e72fc: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x3e72fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e7300: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3E7300u;
    {
        const bool branch_taken_0x3e7300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7300u;
        // 0x3e7304: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7300) {
            ctx->pc = 0x3E7378u;
            goto label_3e7378;
        }
    }
    ctx->pc = 0x3E7308u;
label_3e7308:
    // 0x3e7308: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x3e7308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3e730c: 0x54c0ffe6  bnel        $a2, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3E730Cu;
    {
        const bool branch_taken_0x3e730c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e730c) {
            ctx->pc = 0x3E7310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E730Cu;
            // 0x3e7310: 0x94c30006  lhu         $v1, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E72A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e72a8;
        }
    }
    ctx->pc = 0x3E7314u;
label_3e7314:
    // 0x3e7314: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e7314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e7318: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E7318u;
    SET_GPR_U32(ctx, 31, 0x3E7320u);
    ctx->pc = 0x3E731Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7318u;
    // 0x3e731c: 0x2415000f  addiu       $s5, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E7318u, 0x3E7320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7320u;
label_3e7320:
    // 0x3e7320: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e7320u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e7324: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e7324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7328: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E7328u;
    SET_GPR_U32(ctx, 31, 0x3E7330u);
    ctx->pc = 0x3E732Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7328u;
    // 0x3e732c: 0x240401d0  addiu       $a0, $zero, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E7328u, 0x3E7330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7330u;
label_3e7330:
    // 0x3e7330: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e7330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e7334: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x3e7334u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e7338: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3e7338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3e733c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3e733cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e7340:
    // 0x3e7340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e7340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7344: 0xc0aff08  jal         func_2BFC20
    ctx->pc = 0x3E7344u;
    SET_GPR_U32(ctx, 31, 0x3E734Cu);
    ctx->pc = 0x3E7348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7344u;
    // 0x3e7348: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFC20u, 0x3E7344u, 0x3E734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E734Cu;
label_3e734c:
    // 0x3e734c: 0x0  nop
    ctx->pc = 0x3e734cu;
    // NOP
    // 0x3e7350: 0x16b6fffb  bne         $s5, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E7350u;
    {
        const bool branch_taken_0x3e7350 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E7354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7350u;
        // 0x3e7354: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7350) {
            ctx->pc = 0x3E7340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e7340;
        }
    }
    ctx->pc = 0x3E7358u;
    // 0x3e7358: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3e7358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e735c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e735cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e7360: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x3e7360u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x3e7364: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3e7364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7368: 0xa6510006  sh          $s1, 0x6($s2)
    ctx->pc = 0x3e7368u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e736c: 0xa6430004  sh          $v1, 0x4($s2)
    ctx->pc = 0x3e736cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e7370: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x3e7370u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x3e7374: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x3e7374u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
label_3e7378:
    // 0x3e7378: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e7378u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e737c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e737cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e7380: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e7380u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e7384: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3e7384u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e7388: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3e7388u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e738c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3e738cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3e7390: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3e7390u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e7394: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3e7394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3e7398: 0x3e00008  jr          $ra
    ctx->pc = 0x3E7398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7398u;
        // 0x3e739c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E73A0u;
}
