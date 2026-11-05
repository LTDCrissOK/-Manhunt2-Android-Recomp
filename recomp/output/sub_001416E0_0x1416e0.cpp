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

// Function: sub_001416E0
// Address: 0x1416e0 - 0x141778
void sub_001416E0_0x1416e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001416E0_0x1416e0");
#endif

    switch (ctx->pc) {
        case 0x141708u: goto label_141708;
        case 0x141728u: goto label_141728;
        case 0x14175cu: goto label_14175c;
        default: break;
    }

    ctx->pc = 0x1416e0u;

    // 0x1416e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1416e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1416e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1416e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1416e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1416e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1416ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1416ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1416f0: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x1416f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1416f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1416f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1416f8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1416f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1416fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1416fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x141700: 0xc04e866  jal         func_13A198
    ctx->pc = 0x141700u;
    SET_GPR_U32(ctx, 31, 0x141708u);
    ctx->pc = 0x141704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141700u;
    // 0x141704: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x141700u, 0x141708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141708u;
label_141708:
    // 0x141708: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x141708u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14170c: 0x3a620004  xori        $v0, $s3, 0x4
    ctx->pc = 0x14170cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)4);
    // 0x141710: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x141710u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x141714: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x141714u;
    {
        const bool branch_taken_0x141714 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x141718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141714u;
        // 0x141718: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141714) {
            ctx->pc = 0x14173Cu;
            goto label_14173c;
        }
    }
    ctx->pc = 0x14171Cu;
    // 0x14171c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14171cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141720: 0xc04deee  jal         func_137BB8
    ctx->pc = 0x141720u;
    SET_GPR_U32(ctx, 31, 0x141728u);
    ctx->pc = 0x141724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141720u;
    // 0x141724: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137BB8u, 0x141720u, 0x141728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141728u;
label_141728:
    // 0x141728: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x141728u;
    {
        const bool branch_taken_0x141728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141728u;
        // 0x14172c: 0x3a620001  xori        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x141728) {
            ctx->pc = 0x141734u;
            goto label_141734;
        }
    }
    ctx->pc = 0x141730u;
    // 0x141730: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x141730u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_141734:
    // 0x141734: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x141734u;
    {
        const bool branch_taken_0x141734 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x141738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141734u;
        // 0x141738: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141734) {
            ctx->pc = 0x14174Cu;
            goto label_14174c;
        }
    }
    ctx->pc = 0x14173Cu;
label_14173c:
    // 0x14173c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14173cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141740: 0x2422018  mult        $a0, $s2, $v0
    ctx->pc = 0x141740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x141744: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x141744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x141748: 0xac430b10  sw          $v1, 0xB10($v0)
    ctx->pc = 0x141748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2832), GPR_U32(ctx, 3));
label_14174c:
    // 0x14174c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14174cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141750: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x141750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141754: 0xc04e820  jal         func_13A080
    ctx->pc = 0x141754u;
    SET_GPR_U32(ctx, 31, 0x14175Cu);
    ctx->pc = 0x141758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141754u;
    // 0x141758: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A080u, 0x141754u, 0x14175Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14175Cu;
label_14175c:
    // 0x14175c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14175cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141760: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x141760u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x141764: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x141764u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141768: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x141768u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14176c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14176cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141770: 0x3e00008  jr          $ra
    ctx->pc = 0x141770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141770u;
        // 0x141774: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141778u;
}
