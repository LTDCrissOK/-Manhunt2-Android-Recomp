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

// Function: sub_0026B270
// Address: 0x26b270 - 0x26b388
void sub_0026B270_0x26b270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B270_0x26b270");
#endif

    switch (ctx->pc) {
        case 0x26b2e8u: goto label_26b2e8;
        case 0x26b334u: goto label_26b334;
        case 0x26b364u: goto label_26b364;
        case 0x26b370u: goto label_26b370;
        default: break;
    }

    ctx->pc = 0x26b270u;

    // 0x26b270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26b270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26b274: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26b274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26b278: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26b278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26b27c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26b27cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b280: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26b280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26b284: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x26b284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x26b288: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26B288u;
    {
        const bool branch_taken_0x26b288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B288u;
        // 0x26b28c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b288) {
            ctx->pc = 0x26B29Cu;
            goto label_26b29c;
        }
    }
    ctx->pc = 0x26B290u;
    // 0x26b290: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b294: 0x12220037  beq         $s1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x26B294u;
    {
        const bool branch_taken_0x26b294 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B294u;
        // 0x26b298: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b294) {
            ctx->pc = 0x26B374u;
            goto label_26b374;
        }
    }
    ctx->pc = 0x26B29Cu;
label_26b29c:
    // 0x26b29c: 0x8e030254  lw          $v1, 0x254($s0)
    ctx->pc = 0x26b29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x26b2a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26b2a4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26B2A4u;
    {
        const bool branch_taken_0x26b2a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26B2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B2A4u;
        // 0x26b2a8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b2a4) {
            ctx->pc = 0x26B2C4u;
            goto label_26b2c4;
        }
    }
    ctx->pc = 0x26B2ACu;
    // 0x26b2ac: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26B2ACu;
    {
        const bool branch_taken_0x26b2ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x26B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B2ACu;
        // 0x26b2b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b2ac) {
            ctx->pc = 0x26B2BCu;
            goto label_26b2bc;
        }
    }
    ctx->pc = 0x26B2B4u;
    // 0x26b2b4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x26B2B4u;
    {
        const bool branch_taken_0x26b2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B2B4u;
        // 0x26b2b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b2b4) {
            ctx->pc = 0x26B374u;
            goto label_26b374;
        }
    }
    ctx->pc = 0x26B2BCu;
label_26b2bc:
    // 0x26b2bc: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26B2BCu;
    {
        const bool branch_taken_0x26b2bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B2BCu;
        // 0x26b2c0: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b2bc) {
            ctx->pc = 0x26B2D4u;
            goto label_26b2d4;
        }
    }
    ctx->pc = 0x26B2C4u;
label_26b2c4:
    // 0x26b2c4: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x26B2C4u;
    {
        const bool branch_taken_0x26b2c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B2C4u;
        // 0x26b2c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b2c4) {
            ctx->pc = 0x26B308u;
            goto label_26b308;
        }
    }
    ctx->pc = 0x26B2CCu;
    // 0x26b2cc: 0x1622000e  bne         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x26B2CCu;
    {
        const bool branch_taken_0x26b2cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x26B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B2CCu;
        // 0x26b2d0: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b2cc) {
            ctx->pc = 0x26B308u;
            goto label_26b308;
        }
    }
    ctx->pc = 0x26B2D4u;
label_26b2d4:
    // 0x26b2d4: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x26b2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x26b2d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26b2d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26b2dc: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x26b2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x26b2e0: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x26B2E0u;
    SET_GPR_U32(ctx, 31, 0x26B2E8u);
    ctx->pc = 0x26B2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B2E0u;
    // 0x26b2e4: 0x24060023  addiu       $a2, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x26B2E0u, 0x26B2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B2E8u;
label_26b2e8:
    // 0x26b2e8: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x26b2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x26b2ec: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x26b2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x26b2f0: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x26b2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x26b2f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26b2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26b2f8: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x26B2F8u;
    {
        const bool branch_taken_0x26b2f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B2F8u;
        // 0x26b2fc: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b2f8) {
            ctx->pc = 0x26B364u;
            goto label_26b364;
        }
    }
    ctx->pc = 0x26B300u;
    // 0x26b300: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26B300u;
    {
        const bool branch_taken_0x26b300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B300u;
        // 0x26b304: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b300) {
            ctx->pc = 0x26B364u;
            goto label_26b364;
        }
    }
    ctx->pc = 0x26B308u;
label_26b308:
    // 0x26b308: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26B308u;
    {
        const bool branch_taken_0x26b308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B308u;
        // 0x26b30c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b308) {
            ctx->pc = 0x26B33Cu;
            goto label_26b33c;
        }
    }
    ctx->pc = 0x26B310u;
    // 0x26b310: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26b310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26b314: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26B314u;
    {
        const bool branch_taken_0x26b314 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x26B318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B314u;
        // 0x26b318: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b314) {
            ctx->pc = 0x26B33Cu;
            goto label_26b33c;
        }
    }
    ctx->pc = 0x26B31Cu;
    // 0x26b31c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x26b31cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x26b320: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x26b320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x26b324: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26b324u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26b328: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x26b328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x26b32c: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x26B32Cu;
    SET_GPR_U32(ctx, 31, 0x26B334u);
    ctx->pc = 0x26B330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B32Cu;
    // 0x26b330: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x26B32Cu, 0x26B334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B334u;
label_26b334:
    // 0x26b334: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26B334u;
    {
        const bool branch_taken_0x26b334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B334u;
        // 0x26b338: 0xae110254  sw          $s1, 0x254($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b334) {
            ctx->pc = 0x26B368u;
            goto label_26b368;
        }
    }
    ctx->pc = 0x26B33Cu;
label_26b33c:
    // 0x26b33c: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26B33Cu;
    {
        const bool branch_taken_0x26b33c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26b33c) {
            ctx->pc = 0x26B340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B33Cu;
            // 0x26b340: 0xae110254  sw          $s1, 0x254($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B368u;
            goto label_26b368;
        }
    }
    ctx->pc = 0x26B344u;
    // 0x26b344: 0x56200008  bnel        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x26B344u;
    {
        const bool branch_taken_0x26b344 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b344) {
            ctx->pc = 0x26B348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B344u;
            // 0x26b348: 0xae110254  sw          $s1, 0x254($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B368u;
            goto label_26b368;
        }
    }
    ctx->pc = 0x26B34Cu;
    // 0x26b34c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x26b34cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x26b350: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x26b350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x26b354: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26b354u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26b358: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x26b358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x26b35c: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x26B35Cu;
    SET_GPR_U32(ctx, 31, 0x26B364u);
    ctx->pc = 0x26B360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B35Cu;
    // 0x26b360: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x26B35Cu, 0x26B364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B364u;
label_26b364:
    // 0x26b364: 0xae110254  sw          $s1, 0x254($s0)
    ctx->pc = 0x26b364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 17));
label_26b368:
    // 0x26b368: 0xc083bc0  jal         func_20EF00
    ctx->pc = 0x26B368u;
    SET_GPR_U32(ctx, 31, 0x26B370u);
    ctx->pc = 0x26B36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B368u;
    // 0x26b36c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x26B368u, 0x26B370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B370u;
label_26b370:
    // 0x26b370: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b374:
    // 0x26b374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26b374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b378: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26b378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26b37c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26b37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b380: 0x3e00008  jr          $ra
    ctx->pc = 0x26B380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B380u;
        // 0x26b384: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B388u;
}
