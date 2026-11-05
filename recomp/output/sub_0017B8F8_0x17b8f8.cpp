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

// Function: sub_0017B8F8
// Address: 0x17b8f8 - 0x17b9a0
void sub_0017B8F8_0x17b8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B8F8_0x17b8f8");
#endif

    switch (ctx->pc) {
        case 0x17b8f8u: goto label_17b8f8;
        case 0x17b8fcu: goto label_17b8fc;
        case 0x17b900u: goto label_17b900;
        case 0x17b904u: goto label_17b904;
        case 0x17b908u: goto label_17b908;
        case 0x17b90cu: goto label_17b90c;
        case 0x17b910u: goto label_17b910;
        case 0x17b914u: goto label_17b914;
        case 0x17b918u: goto label_17b918;
        case 0x17b91cu: goto label_17b91c;
        case 0x17b920u: goto label_17b920;
        case 0x17b924u: goto label_17b924;
        case 0x17b928u: goto label_17b928;
        case 0x17b92cu: goto label_17b92c;
        case 0x17b930u: goto label_17b930;
        case 0x17b934u: goto label_17b934;
        case 0x17b938u: goto label_17b938;
        case 0x17b93cu: goto label_17b93c;
        case 0x17b940u: goto label_17b940;
        case 0x17b944u: goto label_17b944;
        case 0x17b948u: goto label_17b948;
        case 0x17b94cu: goto label_17b94c;
        case 0x17b950u: goto label_17b950;
        case 0x17b954u: goto label_17b954;
        case 0x17b958u: goto label_17b958;
        case 0x17b95cu: goto label_17b95c;
        case 0x17b960u: goto label_17b960;
        case 0x17b964u: goto label_17b964;
        case 0x17b968u: goto label_17b968;
        case 0x17b96cu: goto label_17b96c;
        case 0x17b970u: goto label_17b970;
        case 0x17b974u: goto label_17b974;
        case 0x17b978u: goto label_17b978;
        case 0x17b97cu: goto label_17b97c;
        case 0x17b980u: goto label_17b980;
        case 0x17b984u: goto label_17b984;
        case 0x17b988u: goto label_17b988;
        case 0x17b98cu: goto label_17b98c;
        case 0x17b990u: goto label_17b990;
        case 0x17b994u: goto label_17b994;
        case 0x17b998u: goto label_17b998;
        case 0x17b99cu: goto label_17b99c;
        default: break;
    }

    ctx->pc = 0x17b8f8u;

label_17b8f8:
    // 0x17b8f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17b8fc:
    // 0x17b8fc: 0x2ca20012  sltiu       $v0, $a1, 0x12
    ctx->pc = 0x17b8fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_17b900:
    // 0x17b900: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17b904:
    // 0x17b904: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17b904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_17b908:
    // 0x17b908: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17b908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b90c:
    // 0x17b90c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17b910:
    // 0x17b910: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_17b914:
    if (ctx->pc == 0x17B914u) {
        ctx->pc = 0x17B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B910u;
        // 0x17b914: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B918u;
        goto label_17b918;
    }
    ctx->pc = 0x17B910u;
    {
        const bool branch_taken_0x17b910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B910u;
        // 0x17b914: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b910) {
            ctx->pc = 0x17B970u;
            goto label_17b970;
        }
    }
    ctx->pc = 0x17B918u;
label_17b918:
    // 0x17b918: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x17b918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_17b91c:
    // 0x17b91c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x17b91cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_17b920:
    // 0x17b920: 0x2442f6c0  addiu       $v0, $v0, -0x940
    ctx->pc = 0x17b920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964928));
label_17b924:
    // 0x17b924: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17b924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_17b928:
    // 0x17b928: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17b928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17b92c:
    // 0x17b92c: 0x800008  jr          $a0
label_17b930:
    if (ctx->pc == 0x17B930u) {
        ctx->pc = 0x17B934u;
        goto label_17b934;
    }
    ctx->pc = 0x17B92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B934u: goto label_17b934;
            case 0x17B944u: goto label_17b944;
            case 0x17B954u: goto label_17b954;
            case 0x17B964u: goto label_17b964;
            case 0x17B970u: goto label_17b970;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B92Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x17B934u;
label_17b934:
    // 0x17b934: 0xc05ee68  jal         func_17B9A0
label_17b938:
    if (ctx->pc == 0x17B938u) {
        ctx->pc = 0x17B938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B934u;
        // 0x17b938: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B93Cu;
        goto label_17b93c;
    }
    ctx->pc = 0x17B934u;
    SET_GPR_U32(ctx, 31, 0x17B93Cu);
    ctx->pc = 0x17B938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B934u;
    // 0x17b938: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B9A0u, 0x17B934u, 0x17B93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B93Cu;
label_17b93c:
    // 0x17b93c: 0x1000000c  b           . + 4 + (0xC << 2)
label_17b940:
    if (ctx->pc == 0x17B940u) {
        ctx->pc = 0x17B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B93Cu;
        // 0x17b940: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B944u;
        goto label_17b944;
    }
    ctx->pc = 0x17B93Cu;
    {
        const bool branch_taken_0x17b93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B93Cu;
        // 0x17b940: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b93c) {
            ctx->pc = 0x17B970u;
            goto label_17b970;
        }
    }
    ctx->pc = 0x17B944u;
label_17b944:
    // 0x17b944: 0xc05ee80  jal         func_17BA00
label_17b948:
    if (ctx->pc == 0x17B948u) {
        ctx->pc = 0x17B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B944u;
        // 0x17b948: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B94Cu;
        goto label_17b94c;
    }
    ctx->pc = 0x17B944u;
    SET_GPR_U32(ctx, 31, 0x17B94Cu);
    ctx->pc = 0x17B948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B944u;
    // 0x17b948: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BA00u, 0x17B944u, 0x17B94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B94Cu;
label_17b94c:
    // 0x17b94c: 0x10000008  b           . + 4 + (0x8 << 2)
label_17b950:
    if (ctx->pc == 0x17B950u) {
        ctx->pc = 0x17B950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B94Cu;
        // 0x17b950: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B954u;
        goto label_17b954;
    }
    ctx->pc = 0x17B94Cu;
    {
        const bool branch_taken_0x17b94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B94Cu;
        // 0x17b950: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b94c) {
            ctx->pc = 0x17B970u;
            goto label_17b970;
        }
    }
    ctx->pc = 0x17B954u;
label_17b954:
    // 0x17b954: 0xc05ee70  jal         func_17B9C0
label_17b958:
    if (ctx->pc == 0x17B958u) {
        ctx->pc = 0x17B958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B954u;
        // 0x17b958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B95Cu;
        goto label_17b95c;
    }
    ctx->pc = 0x17B954u;
    SET_GPR_U32(ctx, 31, 0x17B95Cu);
    ctx->pc = 0x17B958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B954u;
    // 0x17b958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B9C0u, 0x17B954u, 0x17B95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B95Cu;
label_17b95c:
    // 0x17b95c: 0x10000004  b           . + 4 + (0x4 << 2)
label_17b960:
    if (ctx->pc == 0x17B960u) {
        ctx->pc = 0x17B960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B95Cu;
        // 0x17b960: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B964u;
        goto label_17b964;
    }
    ctx->pc = 0x17B95Cu;
    {
        const bool branch_taken_0x17b95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B95Cu;
        // 0x17b960: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b95c) {
            ctx->pc = 0x17B970u;
            goto label_17b970;
        }
    }
    ctx->pc = 0x17B964u;
label_17b964:
    // 0x17b964: 0xc05ee78  jal         func_17B9E0
label_17b968:
    if (ctx->pc == 0x17B968u) {
        ctx->pc = 0x17B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B964u;
        // 0x17b968: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B96Cu;
        goto label_17b96c;
    }
    ctx->pc = 0x17B964u;
    SET_GPR_U32(ctx, 31, 0x17B96Cu);
    ctx->pc = 0x17B968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B964u;
    // 0x17b968: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B9E0u, 0x17B964u, 0x17B96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B96Cu;
label_17b96c:
    // 0x17b96c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17b96cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17b970:
    // 0x17b970: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x17b970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_17b974:
    // 0x17b974: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17b974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17b978:
    // 0x17b978: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x17b978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_17b97c:
    // 0x17b97c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x17b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_17b980:
    // 0x17b980: 0x40f809  jalr        $v0
label_17b984:
    if (ctx->pc == 0x17B984u) {
        ctx->pc = 0x17B984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B980u;
        // 0x17b984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B988u;
        goto label_17b988;
    }
    ctx->pc = 0x17B980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17B988u);
        ctx->pc = 0x17B984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B980u;
        // 0x17b984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B980u, 0x17B988u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17B988u;
label_17b988:
    // 0x17b988: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17b988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17b98c:
    // 0x17b98c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17b98cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17b990:
    // 0x17b990: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17b990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17b994:
    // 0x17b994: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17b998:
    // 0x17b998: 0x3e00008  jr          $ra
label_17b99c:
    if (ctx->pc == 0x17B99Cu) {
        ctx->pc = 0x17B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B998u;
        // 0x17b99c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B9A0u;
        goto label_fallthrough_0x17b998;
    }
    ctx->pc = 0x17B998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B998u;
        // 0x17b99c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17b998:
    ctx->pc = 0x17B9A0u;
}
