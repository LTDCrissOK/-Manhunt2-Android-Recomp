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

// Function: sub_0029D888
// Address: 0x29d888 - 0x29d9e0
void sub_0029D888_0x29d888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D888_0x29d888");
#endif

    switch (ctx->pc) {
        case 0x29d888u: goto label_29d888;
        case 0x29d88cu: goto label_29d88c;
        case 0x29d890u: goto label_29d890;
        case 0x29d894u: goto label_29d894;
        case 0x29d898u: goto label_29d898;
        case 0x29d89cu: goto label_29d89c;
        case 0x29d8a0u: goto label_29d8a0;
        case 0x29d8a4u: goto label_29d8a4;
        case 0x29d8a8u: goto label_29d8a8;
        case 0x29d8acu: goto label_29d8ac;
        case 0x29d8b0u: goto label_29d8b0;
        case 0x29d8b4u: goto label_29d8b4;
        case 0x29d8b8u: goto label_29d8b8;
        case 0x29d8bcu: goto label_29d8bc;
        case 0x29d8c0u: goto label_29d8c0;
        case 0x29d8c4u: goto label_29d8c4;
        case 0x29d8c8u: goto label_29d8c8;
        case 0x29d8ccu: goto label_29d8cc;
        case 0x29d8d0u: goto label_29d8d0;
        case 0x29d8d4u: goto label_29d8d4;
        case 0x29d8d8u: goto label_29d8d8;
        case 0x29d8dcu: goto label_29d8dc;
        case 0x29d8e0u: goto label_29d8e0;
        case 0x29d8e4u: goto label_29d8e4;
        case 0x29d8e8u: goto label_29d8e8;
        case 0x29d8ecu: goto label_29d8ec;
        case 0x29d8f0u: goto label_29d8f0;
        case 0x29d8f4u: goto label_29d8f4;
        case 0x29d8f8u: goto label_29d8f8;
        case 0x29d8fcu: goto label_29d8fc;
        case 0x29d900u: goto label_29d900;
        case 0x29d904u: goto label_29d904;
        case 0x29d908u: goto label_29d908;
        case 0x29d90cu: goto label_29d90c;
        case 0x29d910u: goto label_29d910;
        case 0x29d914u: goto label_29d914;
        case 0x29d918u: goto label_29d918;
        case 0x29d91cu: goto label_29d91c;
        case 0x29d920u: goto label_29d920;
        case 0x29d924u: goto label_29d924;
        case 0x29d928u: goto label_29d928;
        case 0x29d92cu: goto label_29d92c;
        case 0x29d930u: goto label_29d930;
        case 0x29d934u: goto label_29d934;
        case 0x29d938u: goto label_29d938;
        case 0x29d93cu: goto label_29d93c;
        case 0x29d940u: goto label_29d940;
        case 0x29d944u: goto label_29d944;
        case 0x29d948u: goto label_29d948;
        case 0x29d94cu: goto label_29d94c;
        case 0x29d950u: goto label_29d950;
        case 0x29d954u: goto label_29d954;
        case 0x29d958u: goto label_29d958;
        case 0x29d95cu: goto label_29d95c;
        case 0x29d960u: goto label_29d960;
        case 0x29d964u: goto label_29d964;
        case 0x29d968u: goto label_29d968;
        case 0x29d96cu: goto label_29d96c;
        case 0x29d970u: goto label_29d970;
        case 0x29d974u: goto label_29d974;
        case 0x29d978u: goto label_29d978;
        case 0x29d97cu: goto label_29d97c;
        case 0x29d980u: goto label_29d980;
        case 0x29d984u: goto label_29d984;
        case 0x29d988u: goto label_29d988;
        case 0x29d98cu: goto label_29d98c;
        case 0x29d990u: goto label_29d990;
        case 0x29d994u: goto label_29d994;
        case 0x29d998u: goto label_29d998;
        case 0x29d99cu: goto label_29d99c;
        case 0x29d9a0u: goto label_29d9a0;
        case 0x29d9a4u: goto label_29d9a4;
        case 0x29d9a8u: goto label_29d9a8;
        case 0x29d9acu: goto label_29d9ac;
        case 0x29d9b0u: goto label_29d9b0;
        case 0x29d9b4u: goto label_29d9b4;
        case 0x29d9b8u: goto label_29d9b8;
        case 0x29d9bcu: goto label_29d9bc;
        case 0x29d9c0u: goto label_29d9c0;
        case 0x29d9c4u: goto label_29d9c4;
        case 0x29d9c8u: goto label_29d9c8;
        case 0x29d9ccu: goto label_29d9cc;
        case 0x29d9d0u: goto label_29d9d0;
        case 0x29d9d4u: goto label_29d9d4;
        case 0x29d9d8u: goto label_29d9d8;
        case 0x29d9dcu: goto label_29d9dc;
        default: break;
    }

    ctx->pc = 0x29d888u;

label_29d888:
    // 0x29d888: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29d888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_29d88c:
    // 0x29d88c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x29d88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_29d890:
    // 0x29d890: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29d890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_29d894:
    // 0x29d894: 0x24423490  addiu       $v0, $v0, 0x3490
    ctx->pc = 0x29d894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13456));
label_29d898:
    // 0x29d898: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29d898u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29d89c:
    // 0x29d89c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x29d89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_29d8a0:
    // 0x29d8a0: 0x26430214  addiu       $v1, $s2, 0x214
    ctx->pc = 0x29d8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 532));
label_29d8a4:
    // 0x29d8a4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x29d8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_29d8a8:
    // 0x29d8a8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x29d8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_29d8ac:
    // 0x29d8ac: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x29d8acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_29d8b0:
    // 0x29d8b0: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x29d8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_29d8b4:
    // 0x29d8b4: 0x26550014  addiu       $s5, $s2, 0x14
    ctx->pc = 0x29d8b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_29d8b8:
    // 0x29d8b8: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x29d8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_29d8bc:
    // 0x29d8bc: 0x26540240  addiu       $s4, $s2, 0x240
    ctx->pc = 0x29d8bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
label_29d8c0:
    // 0x29d8c0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x29d8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_29d8c4:
    // 0x29d8c4: 0x26570238  addiu       $s7, $s2, 0x238
    ctx->pc = 0x29d8c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 568));
label_29d8c8:
    // 0x29d8c8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29d8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_29d8cc:
    // 0x29d8cc: 0x265e0230  addiu       $fp, $s2, 0x230
    ctx->pc = 0x29d8ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 560));
label_29d8d0:
    // 0x29d8d0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x29d8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_29d8d4:
    // 0x29d8d4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x29d8d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d8d8:
    // 0x29d8d8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x29d8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_29d8dc:
    // 0x29d8dc: 0x24160014  addiu       $s6, $zero, 0x14
    ctx->pc = 0x29d8dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_29d8e0:
    // 0x29d8e0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x29d8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_29d8e4:
    // 0x29d8e4: 0xae420278  sw          $v0, 0x278($s2)
    ctx->pc = 0x29d8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 632), GPR_U32(ctx, 2));
label_29d8e8:
    // 0x29d8e8: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x29d8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_29d8ec:
    // 0x29d8ec: 0x761018  mult        $v0, $v1, $s6
    ctx->pc = 0x29d8ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_29d8f0:
    // 0x29d8f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29d8f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d8f4:
    // 0x29d8f4: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x29d8f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_29d8f8:
    // 0x29d8f8: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x29d8f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_29d8fc:
    // 0x29d8fc: 0x0  nop
    ctx->pc = 0x29d8fcu;
    // NOP
label_29d900:
    // 0x29d900: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29d900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29d904:
    // 0x29d904: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_29d908:
    if (ctx->pc == 0x29D908u) {
        ctx->pc = 0x29D908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D904u;
        // 0x29d908: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D90Cu;
        goto label_29d90c;
    }
    ctx->pc = 0x29D904u;
    {
        const bool branch_taken_0x29d904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d904) {
            ctx->pc = 0x29D908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D904u;
            // 0x29d908: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D920u;
            goto label_29d920;
        }
    }
    ctx->pc = 0x29D90Cu;
label_29d90c:
    // 0x29d90c: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x29d90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_29d910:
    // 0x29d910: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x29d910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_29d914:
    // 0x29d914: 0x40f809  jalr        $v0
label_29d918:
    if (ctx->pc == 0x29D918u) {
        ctx->pc = 0x29D918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D914u;
        // 0x29d918: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D91Cu;
        goto label_29d91c;
    }
    ctx->pc = 0x29D914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29D91Cu);
        ctx->pc = 0x29D918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D914u;
        // 0x29d918: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D914u, 0x29D91Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D91Cu;
label_29d91c:
    // 0x29d91c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x29d91cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_29d920:
    // 0x29d920: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29d920u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_29d924:
    // 0x29d924: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x29d924u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_29d928:
    // 0x29d928: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_29d92c:
    if (ctx->pc == 0x29D92Cu) {
        ctx->pc = 0x29D92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D928u;
        // 0x29d92c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D930u;
        goto label_29d930;
    }
    ctx->pc = 0x29D928u;
    {
        const bool branch_taken_0x29d928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D928u;
        // 0x29d92c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d928) {
            ctx->pc = 0x29D900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d900;
        }
    }
    ctx->pc = 0x29D930u;
label_29d930:
    // 0x29d930: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x29d930u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29d934:
    // 0x29d934: 0x2c620019  sltiu       $v0, $v1, 0x19
    ctx->pc = 0x29d934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
label_29d938:
    // 0x29d938: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
label_29d93c:
    if (ctx->pc == 0x29D93Cu) {
        ctx->pc = 0x29D93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D938u;
        // 0x29d93c: 0x761018  mult        $v0, $v1, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D940u;
        goto label_29d940;
    }
    ctx->pc = 0x29D938u;
    {
        const bool branch_taken_0x29d938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d938) {
            ctx->pc = 0x29D93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D938u;
            // 0x29d93c: 0x761018  mult        $v0, $v1, $s6 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D8F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d8f0;
        }
    }
    ctx->pc = 0x29D940u;
label_29d940:
    // 0x29d940: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
label_29d944:
    if (ctx->pc == 0x29D944u) {
        ctx->pc = 0x29D944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D940u;
        // 0x29d944: 0x26500260  addiu       $s0, $s2, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D948u;
        goto label_29d948;
    }
    ctx->pc = 0x29D940u;
    {
        const bool branch_taken_0x29d940 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D940u;
        // 0x29d944: 0x26500260  addiu       $s0, $s2, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d940) {
            ctx->pc = 0x29D970u;
            goto label_29d970;
        }
    }
    ctx->pc = 0x29D948u;
label_29d948:
    // 0x29d948: 0x1290000a  beq         $s4, $s0, . + 4 + (0xA << 2)
label_29d94c:
    if (ctx->pc == 0x29D94Cu) {
        ctx->pc = 0x29D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D948u;
        // 0x29d94c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D950u;
        goto label_29d950;
    }
    ctx->pc = 0x29D948u;
    {
        const bool branch_taken_0x29d948 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 16));
        ctx->pc = 0x29D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D948u;
        // 0x29d94c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d948) {
            ctx->pc = 0x29D974u;
            goto label_29d974;
        }
    }
    ctx->pc = 0x29D950u;
label_29d950:
    // 0x29d950: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x29d950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_29d954:
    // 0x29d954: 0x0  nop
    ctx->pc = 0x29d954u;
    // NOP
label_29d958:
    // 0x29d958: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29d958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d95c:
    // 0x29d95c: 0xc0d7412  jal         func_35D048
label_29d960:
    if (ctx->pc == 0x29D960u) {
        ctx->pc = 0x29D960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D95Cu;
        // 0x29d960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D964u;
        goto label_29d964;
    }
    ctx->pc = 0x29D95Cu;
    SET_GPR_U32(ctx, 31, 0x29D964u);
    ctx->pc = 0x29D960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D95Cu;
    // 0x29d960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29D95Cu, 0x29D964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D964u;
label_29d964:
    // 0x29d964: 0x0  nop
    ctx->pc = 0x29d964u;
    // NOP
label_29d968:
    // 0x29d968: 0x1690fffb  bne         $s4, $s0, . + 4 + (-0x5 << 2)
label_29d96c:
    if (ctx->pc == 0x29D96Cu) {
        ctx->pc = 0x29D96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D968u;
        // 0x29d96c: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D970u;
        goto label_29d970;
    }
    ctx->pc = 0x29D968u;
    {
        const bool branch_taken_0x29d968 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 16));
        ctx->pc = 0x29D96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D968u;
        // 0x29d96c: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d968) {
            ctx->pc = 0x29D958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d958;
        }
    }
    ctx->pc = 0x29D970u;
label_29d970:
    // 0x29d970: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x29d970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_29d974:
    // 0x29d974: 0xc0d7412  jal         func_35D048
label_29d978:
    if (ctx->pc == 0x29D978u) {
        ctx->pc = 0x29D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D974u;
        // 0x29d978: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D97Cu;
        goto label_29d97c;
    }
    ctx->pc = 0x29D974u;
    SET_GPR_U32(ctx, 31, 0x29D97Cu);
    ctx->pc = 0x29D978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D974u;
    // 0x29d978: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29D974u, 0x29D97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D97Cu;
label_29d97c:
    // 0x29d97c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x29d97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_29d980:
    // 0x29d980: 0xc0d7412  jal         func_35D048
label_29d984:
    if (ctx->pc == 0x29D984u) {
        ctx->pc = 0x29D984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D980u;
        // 0x29d984: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D988u;
        goto label_29d988;
    }
    ctx->pc = 0x29D980u;
    SET_GPR_U32(ctx, 31, 0x29D988u);
    ctx->pc = 0x29D984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D980u;
    // 0x29d984: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29D980u, 0x29D988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D988u;
label_29d988:
    // 0x29d988: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x29d988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_29d98c:
    // 0x29d98c: 0xc0d7412  jal         func_35D048
label_29d990:
    if (ctx->pc == 0x29D990u) {
        ctx->pc = 0x29D990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D98Cu;
        // 0x29d990: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D994u;
        goto label_29d994;
    }
    ctx->pc = 0x29D98Cu;
    SET_GPR_U32(ctx, 31, 0x29D994u);
    ctx->pc = 0x29D990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D98Cu;
    // 0x29d990: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29D98Cu, 0x29D994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D994u;
label_29d994:
    // 0x29d994: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x29d994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_29d998:
    // 0x29d998: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_29d99c:
    if (ctx->pc == 0x29D99Cu) {
        ctx->pc = 0x29D99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D998u;
        // 0x29d99c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D9A0u;
        goto label_29d9a0;
    }
    ctx->pc = 0x29D998u;
    {
        const bool branch_taken_0x29d998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D998u;
        // 0x29d99c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d998) {
            ctx->pc = 0x29D9ACu;
            goto label_29d9ac;
        }
    }
    ctx->pc = 0x29D9A0u;
label_29d9a0:
    // 0x29d9a0: 0xc0f5222  jal         func_3D4888
label_29d9a4:
    if (ctx->pc == 0x29D9A4u) {
        ctx->pc = 0x29D9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D9A0u;
        // 0x29d9a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D9A8u;
        goto label_29d9a8;
    }
    ctx->pc = 0x29D9A0u;
    SET_GPR_U32(ctx, 31, 0x29D9A8u);
    ctx->pc = 0x29D9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D9A0u;
    // 0x29d9a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x29D9A0u, 0x29D9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D9A8u;
label_29d9a8:
    // 0x29d9a8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29d9a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29d9ac:
    // 0x29d9ac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x29d9acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_29d9b0:
    // 0x29d9b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29d9b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29d9b4:
    // 0x29d9b4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x29d9b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_29d9b8:
    // 0x29d9b8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x29d9b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29d9bc:
    // 0x29d9bc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x29d9bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_29d9c0:
    // 0x29d9c0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x29d9c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29d9c4:
    // 0x29d9c4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x29d9c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_29d9c8:
    // 0x29d9c8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x29d9c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_29d9cc:
    // 0x29d9cc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x29d9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_29d9d0:
    // 0x29d9d0: 0x3e00008  jr          $ra
label_29d9d4:
    if (ctx->pc == 0x29D9D4u) {
        ctx->pc = 0x29D9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D9D0u;
        // 0x29d9d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D9D8u;
        goto label_29d9d8;
    }
    ctx->pc = 0x29D9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D9D0u;
        // 0x29d9d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D9D8u;
label_29d9d8:
    // 0x29d9d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29d9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_29d9dc:
    // 0x29d9dc: 0x0  nop
    ctx->pc = 0x29d9dcu;
    // NOP
    ctx->pc = 0x29d9e0u;
}
