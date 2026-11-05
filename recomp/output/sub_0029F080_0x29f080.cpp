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

// Function: sub_0029F080
// Address: 0x29f080 - 0x29f168
void sub_0029F080_0x29f080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F080_0x29f080");
#endif

    switch (ctx->pc) {
        case 0x29f080u: goto label_29f080;
        case 0x29f084u: goto label_29f084;
        case 0x29f088u: goto label_29f088;
        case 0x29f08cu: goto label_29f08c;
        case 0x29f090u: goto label_29f090;
        case 0x29f094u: goto label_29f094;
        case 0x29f098u: goto label_29f098;
        case 0x29f09cu: goto label_29f09c;
        case 0x29f0a0u: goto label_29f0a0;
        case 0x29f0a4u: goto label_29f0a4;
        case 0x29f0a8u: goto label_29f0a8;
        case 0x29f0acu: goto label_29f0ac;
        case 0x29f0b0u: goto label_29f0b0;
        case 0x29f0b4u: goto label_29f0b4;
        case 0x29f0b8u: goto label_29f0b8;
        case 0x29f0bcu: goto label_29f0bc;
        case 0x29f0c0u: goto label_29f0c0;
        case 0x29f0c4u: goto label_29f0c4;
        case 0x29f0c8u: goto label_29f0c8;
        case 0x29f0ccu: goto label_29f0cc;
        case 0x29f0d0u: goto label_29f0d0;
        case 0x29f0d4u: goto label_29f0d4;
        case 0x29f0d8u: goto label_29f0d8;
        case 0x29f0dcu: goto label_29f0dc;
        case 0x29f0e0u: goto label_29f0e0;
        case 0x29f0e4u: goto label_29f0e4;
        case 0x29f0e8u: goto label_29f0e8;
        case 0x29f0ecu: goto label_29f0ec;
        case 0x29f0f0u: goto label_29f0f0;
        case 0x29f0f4u: goto label_29f0f4;
        case 0x29f0f8u: goto label_29f0f8;
        case 0x29f0fcu: goto label_29f0fc;
        case 0x29f100u: goto label_29f100;
        case 0x29f104u: goto label_29f104;
        case 0x29f108u: goto label_29f108;
        case 0x29f10cu: goto label_29f10c;
        case 0x29f110u: goto label_29f110;
        case 0x29f114u: goto label_29f114;
        case 0x29f118u: goto label_29f118;
        case 0x29f11cu: goto label_29f11c;
        case 0x29f120u: goto label_29f120;
        case 0x29f124u: goto label_29f124;
        case 0x29f128u: goto label_29f128;
        case 0x29f12cu: goto label_29f12c;
        case 0x29f130u: goto label_29f130;
        case 0x29f134u: goto label_29f134;
        case 0x29f138u: goto label_29f138;
        case 0x29f13cu: goto label_29f13c;
        case 0x29f140u: goto label_29f140;
        case 0x29f144u: goto label_29f144;
        case 0x29f148u: goto label_29f148;
        case 0x29f14cu: goto label_29f14c;
        case 0x29f150u: goto label_29f150;
        case 0x29f154u: goto label_29f154;
        case 0x29f158u: goto label_29f158;
        case 0x29f15cu: goto label_29f15c;
        case 0x29f160u: goto label_29f160;
        case 0x29f164u: goto label_29f164;
        default: break;
    }

    ctx->pc = 0x29f080u;

label_29f080:
    // 0x29f080: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29f080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29f084:
    // 0x29f084: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x29f084u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f088:
    // 0x29f088: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29f088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_29f08c:
    // 0x29f08c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29f08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_29f090:
    // 0x29f090: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29f090u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29f094:
    // 0x29f094: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29f094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_29f098:
    // 0x29f098: 0x26740014  addiu       $s4, $s3, 0x14
    ctx->pc = 0x29f098u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
label_29f09c:
    // 0x29f09c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29f09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29f0a0:
    // 0x29f0a0: 0x24150014  addiu       $s5, $zero, 0x14
    ctx->pc = 0x29f0a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_29f0a4:
    // 0x29f0a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29f0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_29f0a8:
    // 0x29f0a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29f0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_29f0ac:
    // 0x29f0ac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29f0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_29f0b0:
    // 0x29f0b0: 0xae650208  sw          $a1, 0x208($s3)
    ctx->pc = 0x29f0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 520), GPR_U32(ctx, 5));
label_29f0b4:
    // 0x29f0b4: 0xae66020c  sw          $a2, 0x20C($s3)
    ctx->pc = 0x29f0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 524), GPR_U32(ctx, 6));
label_29f0b8:
    // 0x29f0b8: 0x751018  mult        $v0, $v1, $s5
    ctx->pc = 0x29f0b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_29f0bc:
    // 0x29f0bc: 0x0  nop
    ctx->pc = 0x29f0bcu;
    // NOP
label_29f0c0:
    // 0x29f0c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29f0c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f0c4:
    // 0x29f0c4: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x29f0c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_29f0c8:
    // 0x29f0c8: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x29f0c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_29f0cc:
    // 0x29f0cc: 0x0  nop
    ctx->pc = 0x29f0ccu;
    // NOP
label_29f0d0:
    // 0x29f0d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29f0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29f0d4:
    // 0x29f0d4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_29f0d8:
    if (ctx->pc == 0x29F0D8u) {
        ctx->pc = 0x29F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F0D4u;
        // 0x29f0d8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F0DCu;
        goto label_29f0dc;
    }
    ctx->pc = 0x29F0D4u;
    {
        const bool branch_taken_0x29f0d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f0d4) {
            ctx->pc = 0x29F0D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F0D4u;
            // 0x29f0d8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F0F0u;
            goto label_29f0f0;
        }
    }
    ctx->pc = 0x29F0DCu;
label_29f0dc:
    // 0x29f0dc: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x29f0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_29f0e0:
    // 0x29f0e0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x29f0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_29f0e4:
    // 0x29f0e4: 0x40f809  jalr        $v0
label_29f0e8:
    if (ctx->pc == 0x29F0E8u) {
        ctx->pc = 0x29F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F0E4u;
        // 0x29f0e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F0ECu;
        goto label_29f0ec;
    }
    ctx->pc = 0x29F0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29F0ECu);
        ctx->pc = 0x29F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F0E4u;
        // 0x29f0e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F0E4u, 0x29F0ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29F0ECu;
label_29f0ec:
    // 0x29f0ec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29f0ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_29f0f0:
    // 0x29f0f0: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x29f0f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_29f0f4:
    // 0x29f0f4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_29f0f8:
    if (ctx->pc == 0x29F0F8u) {
        ctx->pc = 0x29F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F0F4u;
        // 0x29f0f8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F0FCu;
        goto label_29f0fc;
    }
    ctx->pc = 0x29F0F4u;
    {
        const bool branch_taken_0x29f0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F0F4u;
        // 0x29f0f8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f0f4) {
            ctx->pc = 0x29F0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f0d0;
        }
    }
    ctx->pc = 0x29F0FCu;
label_29f0fc:
    // 0x29f0fc: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x29f0fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29f100:
    // 0x29f100: 0x2c620019  sltiu       $v0, $v1, 0x19
    ctx->pc = 0x29f100u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
label_29f104:
    // 0x29f104: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_29f108:
    if (ctx->pc == 0x29F108u) {
        ctx->pc = 0x29F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F104u;
        // 0x29f108: 0x751018  mult        $v0, $v1, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F10Cu;
        goto label_29f10c;
    }
    ctx->pc = 0x29F104u;
    {
        const bool branch_taken_0x29f104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F104u;
        // 0x29f108: 0x751018  mult        $v0, $v1, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f104) {
            ctx->pc = 0x29F0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f0c0;
        }
    }
    ctx->pc = 0x29F10Cu;
label_29f10c:
    // 0x29f10c: 0x8e630208  lw          $v1, 0x208($s3)
    ctx->pc = 0x29f10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 520)));
label_29f110:
    // 0x29f110: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x29f110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_29f114:
    // 0x29f114: 0x8e62020c  lw          $v0, 0x20C($s3)
    ctx->pc = 0x29f114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 524)));
label_29f118:
    // 0x29f118: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x29f118u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_29f11c:
    // 0x29f11c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29f11cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_29f120:
    // 0x29f120: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29f120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29f124:
    // 0x29f124: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x29f124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_29f128:
    // 0x29f128: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x29f128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29f12c:
    // 0x29f12c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_29f130:
    if (ctx->pc == 0x29F130u) {
        ctx->pc = 0x29F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F12Cu;
        // 0x29f130: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F134u;
        goto label_29f134;
    }
    ctx->pc = 0x29F12Cu;
    {
        const bool branch_taken_0x29f12c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F12Cu;
        // 0x29f130: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f12c) {
            ctx->pc = 0x29F148u;
            goto label_29f148;
        }
    }
    ctx->pc = 0x29F134u;
label_29f134:
    // 0x29f134: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x29f134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_29f138:
    // 0x29f138: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x29f138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_29f13c:
    // 0x29f13c: 0x40f809  jalr        $v0
label_29f140:
    if (ctx->pc == 0x29F140u) {
        ctx->pc = 0x29F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F13Cu;
        // 0x29f140: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F144u;
        goto label_29f144;
    }
    ctx->pc = 0x29F13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29F144u);
        ctx->pc = 0x29F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F13Cu;
        // 0x29f140: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F13Cu, 0x29F144u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29F144u;
label_29f144:
    // 0x29f144: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29f144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29f148:
    // 0x29f148: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29f148u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_29f14c:
    // 0x29f14c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29f14cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29f150:
    // 0x29f150: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29f150u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_29f154:
    // 0x29f154: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29f154u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29f158:
    // 0x29f158: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29f158u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_29f15c:
    // 0x29f15c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29f15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29f160:
    // 0x29f160: 0x3e00008  jr          $ra
label_29f164:
    if (ctx->pc == 0x29F164u) {
        ctx->pc = 0x29F164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F160u;
        // 0x29f164: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F168u;
        goto label_fallthrough_0x29f160;
    }
    ctx->pc = 0x29F160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F160u;
        // 0x29f164: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29f160:
    ctx->pc = 0x29F168u;
}
