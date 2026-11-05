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

// Function: sub_001878E0
// Address: 0x1878e0 - 0x187978
void sub_001878E0_0x1878e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001878E0_0x1878e0");
#endif

    switch (ctx->pc) {
        case 0x1878e0u: goto label_1878e0;
        case 0x1878e4u: goto label_1878e4;
        case 0x1878e8u: goto label_1878e8;
        case 0x1878ecu: goto label_1878ec;
        case 0x1878f0u: goto label_1878f0;
        case 0x1878f4u: goto label_1878f4;
        case 0x1878f8u: goto label_1878f8;
        case 0x1878fcu: goto label_1878fc;
        case 0x187900u: goto label_187900;
        case 0x187904u: goto label_187904;
        case 0x187908u: goto label_187908;
        case 0x18790cu: goto label_18790c;
        case 0x187910u: goto label_187910;
        case 0x187914u: goto label_187914;
        case 0x187918u: goto label_187918;
        case 0x18791cu: goto label_18791c;
        case 0x187920u: goto label_187920;
        case 0x187924u: goto label_187924;
        case 0x187928u: goto label_187928;
        case 0x18792cu: goto label_18792c;
        case 0x187930u: goto label_187930;
        case 0x187934u: goto label_187934;
        case 0x187938u: goto label_187938;
        case 0x18793cu: goto label_18793c;
        case 0x187940u: goto label_187940;
        case 0x187944u: goto label_187944;
        case 0x187948u: goto label_187948;
        case 0x18794cu: goto label_18794c;
        case 0x187950u: goto label_187950;
        case 0x187954u: goto label_187954;
        case 0x187958u: goto label_187958;
        case 0x18795cu: goto label_18795c;
        case 0x187960u: goto label_187960;
        case 0x187964u: goto label_187964;
        case 0x187968u: goto label_187968;
        case 0x18796cu: goto label_18796c;
        case 0x187970u: goto label_187970;
        case 0x187974u: goto label_187974;
        default: break;
    }

    ctx->pc = 0x1878e0u;

label_1878e0:
    // 0x1878e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1878e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1878e4:
    // 0x1878e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1878e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1878e8:
    // 0x1878e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1878e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1878ec:
    // 0x1878ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1878ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1878f0:
    // 0x1878f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1878f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1878f4:
    // 0x1878f4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1878f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1878f8:
    // 0x1878f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1878f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1878fc:
    // 0x1878fc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1878fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_187900:
    // 0x187900: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_187904:
    if (ctx->pc == 0x187904u) {
        ctx->pc = 0x187904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187900u;
        // 0x187904: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187908u;
        goto label_187908;
    }
    ctx->pc = 0x187900u;
    {
        const bool branch_taken_0x187900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x187904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187900u;
        // 0x187904: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187900) {
            ctx->pc = 0x187918u;
            goto label_187918;
        }
    }
    ctx->pc = 0x187908u;
label_187908:
    // 0x187908: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x187908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18790c:
    // 0x18790c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x18790cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_187910:
    // 0x187910: 0x40f809  jalr        $v0
label_187914:
    if (ctx->pc == 0x187914u) {
        ctx->pc = 0x187918u;
        goto label_187918;
    }
    ctx->pc = 0x187910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187918u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187910u, 0x187918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187918u;
label_187918:
    // 0x187918: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x187918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_18791c:
    // 0x18791c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_187920:
    if (ctx->pc == 0x187920u) {
        ctx->pc = 0x187920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18791Cu;
        // 0x187920: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187924u;
        goto label_187924;
    }
    ctx->pc = 0x18791Cu;
    {
        const bool branch_taken_0x18791c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18791Cu;
        // 0x187920: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18791c) {
            ctx->pc = 0x187944u;
            goto label_187944;
        }
    }
    ctx->pc = 0x187924u;
label_187924:
    // 0x187924: 0xc0f5240  jal         func_3D4900
label_187928:
    if (ctx->pc == 0x187928u) {
        ctx->pc = 0x187928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187924u;
        // 0x187928: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18792Cu;
        goto label_18792c;
    }
    ctx->pc = 0x187924u;
    SET_GPR_U32(ctx, 31, 0x18792Cu);
    ctx->pc = 0x187928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187924u;
    // 0x187928: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x187924u, 0x18792Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18792Cu;
label_18792c:
    // 0x18792c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x18792cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_187930:
    // 0x187930: 0xc0635bc  jal         func_18D6F0
label_187934:
    if (ctx->pc == 0x187934u) {
        ctx->pc = 0x187934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187930u;
        // 0x187934: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187938u;
        goto label_187938;
    }
    ctx->pc = 0x187930u;
    SET_GPR_U32(ctx, 31, 0x187938u);
    ctx->pc = 0x187934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187930u;
    // 0x187934: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D6F0u, 0x187930u, 0x187938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187938u;
label_187938:
    // 0x187938: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x187938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_18793c:
    // 0x18793c: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x18793cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_187940:
    // 0x187940: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x187940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_187944:
    // 0x187944: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x187944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_187948:
    // 0x187948: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x187948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_18794c:
    // 0x18794c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x18794cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_187950:
    // 0x187950: 0x8c670020  lw          $a3, 0x20($v1)
    ctx->pc = 0x187950u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_187954:
    // 0x187954: 0xe0f809  jalr        $a3
label_187958:
    if (ctx->pc == 0x187958u) {
        ctx->pc = 0x187958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187954u;
        // 0x187958: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18795Cu;
        goto label_18795c;
    }
    ctx->pc = 0x187954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x18795Cu);
        ctx->pc = 0x187958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187954u;
        // 0x187958: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187954u, 0x18795Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18795Cu;
label_18795c:
    // 0x18795c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18795cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_187960:
    // 0x187960: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x187960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_187964:
    // 0x187964: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x187964u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_187968:
    // 0x187968: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x187968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_18796c:
    // 0x18796c: 0x3e00008  jr          $ra
label_187970:
    if (ctx->pc == 0x187970u) {
        ctx->pc = 0x187970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18796Cu;
        // 0x187970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187974u;
        goto label_187974;
    }
    ctx->pc = 0x18796Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18796Cu;
        // 0x187970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18796Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187974u;
label_187974:
    // 0x187974: 0x0  nop
    ctx->pc = 0x187974u;
    // NOP
    ctx->pc = 0x187978u;
}
