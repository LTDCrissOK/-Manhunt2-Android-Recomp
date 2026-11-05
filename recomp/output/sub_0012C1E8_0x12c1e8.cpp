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

// Function: sub_0012C1E8
// Address: 0x12c1e8 - 0x12c368
void sub_0012C1E8_0x12c1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C1E8_0x12c1e8");
#endif

    switch (ctx->pc) {
        case 0x12c20cu: goto label_12c20c;
        case 0x12c228u: goto label_12c228;
        case 0x12c234u: goto label_12c234;
        case 0x12c240u: goto label_12c240;
        case 0x12c270u: goto label_12c270;
        case 0x12c2a0u: goto label_12c2a0;
        case 0x12c2acu: goto label_12c2ac;
        case 0x12c2b8u: goto label_12c2b8;
        case 0x12c2f0u: goto label_12c2f0;
        case 0x12c304u: goto label_12c304;
        default: break;
    }

    ctx->pc = 0x12c1e8u;

    // 0x12c1e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12c1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12c1ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12c1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12c1f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c1f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12c1f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c1f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12c1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12c1fc: 0x30d000ff  andi        $s0, $a2, 0xFF
    ctx->pc = 0x12c1fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x12c200: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12c200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12c204: 0xc04afa0  jal         func_12BE80
    ctx->pc = 0x12C204u;
    SET_GPR_U32(ctx, 31, 0x12C20Cu);
    ctx->pc = 0x12C208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C204u;
    // 0x12c208: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BE80u, 0x12C204u, 0x12C20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C20Cu;
label_12c20c:
    // 0x12c20c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x12c20cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x12c210: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x12c210u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x12c214: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x12c214u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12c218: 0x1200004c  beqz        $s0, . + 4 + (0x4C << 2)
    ctx->pc = 0x12C218u;
    {
        const bool branch_taken_0x12c218 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C218u;
        // 0x12c21c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c218) {
            ctx->pc = 0x12C34Cu;
            goto label_12c34c;
        }
    }
    ctx->pc = 0x12C220u;
    // 0x12c220: 0xc05f53e  jal         func_17D4F8
    ctx->pc = 0x12C220u;
    SET_GPR_U32(ctx, 31, 0x12C228u);
    ctx->pc = 0x12C224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C220u;
    // 0x12c224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D4F8u, 0x12C220u, 0x12C228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C228u;
label_12c228:
    // 0x12c228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c22c: 0xc05f54a  jal         func_17D528
    ctx->pc = 0x12C22Cu;
    SET_GPR_U32(ctx, 31, 0x12C234u);
    ctx->pc = 0x12C230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C22Cu;
    // 0x12c230: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D528u, 0x12C22Cu, 0x12C234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C234u;
label_12c234:
    // 0x12c234: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x12c234u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x12c238: 0xc05f556  jal         func_17D558
    ctx->pc = 0x12C238u;
    SET_GPR_U32(ctx, 31, 0x12C240u);
    ctx->pc = 0x12C23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C238u;
    // 0x12c23c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D558u, 0x12C238u, 0x12C240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C240u;
label_12c240:
    // 0x12c240: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C240u;
    {
        const bool branch_taken_0x12c240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c240) {
            ctx->pc = 0x12C244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C240u;
            // 0x12c244: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C258u;
            goto label_12c258;
        }
    }
    ctx->pc = 0x12C248u;
    // 0x12c248: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12c248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12c24c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x12c24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x12c250: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12C250u;
    {
        const bool branch_taken_0x12c250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C250u;
        // 0x12c254: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c250) {
            ctx->pc = 0x12C268u;
            goto label_12c268;
        }
    }
    ctx->pc = 0x12C258u;
label_12c258:
    // 0x12c258: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x12c258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x12c25c: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x12c25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x12c260: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x12c260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12c264: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x12c264u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_12c268:
    // 0x12c268: 0xc05f558  jal         func_17D560
    ctx->pc = 0x12C268u;
    SET_GPR_U32(ctx, 31, 0x12C270u);
    ctx->pc = 0x12C26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C268u;
    // 0x12c26c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D560u, 0x12C268u, 0x12C270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C270u;
label_12c270:
    // 0x12c270: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C270u;
    {
        const bool branch_taken_0x12c270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c270) {
            ctx->pc = 0x12C274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C270u;
            // 0x12c274: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C288u;
            goto label_12c288;
        }
    }
    ctx->pc = 0x12C278u;
    // 0x12c278: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12c278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12c27c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x12c27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x12c280: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12C280u;
    {
        const bool branch_taken_0x12c280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C280u;
        // 0x12c284: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c280) {
            ctx->pc = 0x12C298u;
            goto label_12c298;
        }
    }
    ctx->pc = 0x12C288u;
label_12c288:
    // 0x12c288: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x12c288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x12c28c: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x12c28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x12c290: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x12c290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12c294: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x12c294u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_12c298:
    // 0x12c298: 0xc05f56a  jal         func_17D5A8
    ctx->pc = 0x12C298u;
    SET_GPR_U32(ctx, 31, 0x12C2A0u);
    ctx->pc = 0x12C29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C298u;
    // 0x12c29c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D5A8u, 0x12C298u, 0x12C2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C2A0u;
label_12c2a0:
    // 0x12c2a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c2a4: 0xc05f56e  jal         func_17D5B8
    ctx->pc = 0x12C2A4u;
    SET_GPR_U32(ctx, 31, 0x12C2ACu);
    ctx->pc = 0x12C2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C2A4u;
    // 0x12c2a8: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D5B8u, 0x12C2A4u, 0x12C2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C2ACu;
label_12c2ac:
    // 0x12c2ac: 0xa242001c  sb          $v0, 0x1C($s2)
    ctx->pc = 0x12c2acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x12c2b0: 0xc05f56c  jal         func_17D5B0
    ctx->pc = 0x12C2B0u;
    SET_GPR_U32(ctx, 31, 0x12C2B8u);
    ctx->pc = 0x12C2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C2B0u;
    // 0x12c2b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D5B0u, 0x12C2B0u, 0x12C2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C2B8u;
label_12c2b8:
    // 0x12c2b8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C2B8u;
    {
        const bool branch_taken_0x12c2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c2b8) {
            ctx->pc = 0x12C2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C2B8u;
            // 0x12c2bc: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C2D0u;
            goto label_12c2d0;
        }
    }
    ctx->pc = 0x12C2C0u;
    // 0x12c2c0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12c2c4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x12c2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x12c2c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12C2C8u;
    {
        const bool branch_taken_0x12c2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C2C8u;
        // 0x12c2cc: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c2c8) {
            ctx->pc = 0x12C2E0u;
            goto label_12c2e0;
        }
    }
    ctx->pc = 0x12C2D0u;
label_12c2d0:
    // 0x12c2d0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x12c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x12c2d4: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x12c2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x12c2d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x12c2d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12c2dc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x12c2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_12c2e0:
    // 0x12c2e0: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x12c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x12c2e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c2e8: 0xc05f55a  jal         func_17D568
    ctx->pc = 0x12C2E8u;
    SET_GPR_U32(ctx, 31, 0x12C2F0u);
    ctx->pc = 0x12C2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C2E8u;
    // 0x12c2ec: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D568u, 0x12C2E8u, 0x12C2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C2F0u;
label_12c2f0:
    // 0x12c2f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12c2f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c2f4: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x12C2F4u;
    {
        const bool branch_taken_0x12c2f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C2F4u;
        // 0x12c2f8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c2f4) {
            ctx->pc = 0x12C34Cu;
            goto label_12c34c;
        }
    }
    ctx->pc = 0x12C2FCu;
    // 0x12c2fc: 0xc05f562  jal         func_17D588
    ctx->pc = 0x12C2FCu;
    SET_GPR_U32(ctx, 31, 0x12C304u);
    ctx->pc = 0x12C300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C2FCu;
    // 0x12c300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D588u, 0x12C2FCu, 0x12C304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C304u;
label_12c304:
    // 0x12c304: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c308: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C308u;
    {
        const bool branch_taken_0x12c308 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c308) {
            ctx->pc = 0x12C30Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C308u;
            // 0x12c30c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C318u;
            goto label_12c318;
        }
    }
    ctx->pc = 0x12C310u;
    // 0x12c310: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x12C310u;
    {
        const bool branch_taken_0x12c310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C310u;
        // 0x12c314: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c310) {
            ctx->pc = 0x12C34Cu;
            goto label_12c34c;
        }
    }
    ctx->pc = 0x12C318u;
label_12c318:
    // 0x12c318: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C318u;
    {
        const bool branch_taken_0x12c318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c318) {
            ctx->pc = 0x12C31Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C318u;
            // 0x12c31c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C330u;
            goto label_12c330;
        }
    }
    ctx->pc = 0x12C320u;
    // 0x12c320: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12c320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12c324: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x12c324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x12c328: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12C328u;
    {
        const bool branch_taken_0x12c328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C328u;
        // 0x12c32c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c328) {
            ctx->pc = 0x12C340u;
            goto label_12c340;
        }
    }
    ctx->pc = 0x12C330u;
label_12c330:
    // 0x12c330: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x12c330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x12c334: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x12c334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x12c338: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x12c338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12c33c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x12c33cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_12c340:
    // 0x12c340: 0xae51000c  sw          $s1, 0xC($s2)
    ctx->pc = 0x12c340u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
    // 0x12c344: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x12c344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c348: 0xae440010  sw          $a0, 0x10($s2)
    ctx->pc = 0x12c348u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 4));
label_12c34c:
    // 0x12c34c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c34cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c350: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12c350u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c354: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12c354u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c358: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12c358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12c35c: 0x3e00008  jr          $ra
    ctx->pc = 0x12C35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C35Cu;
        // 0x12c360: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C364u;
    // 0x12c364: 0x0  nop
    ctx->pc = 0x12c364u;
    // NOP
    ctx->pc = 0x12c368u;
}
