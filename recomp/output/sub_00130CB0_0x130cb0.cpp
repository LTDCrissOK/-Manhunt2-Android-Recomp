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

// Function: sub_00130CB0
// Address: 0x130cb0 - 0x130d40
void sub_00130CB0_0x130cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130CB0_0x130cb0");
#endif

    switch (ctx->pc) {
        case 0x130ce4u: goto label_130ce4;
        case 0x130cf0u: goto label_130cf0;
        case 0x130cfcu: goto label_130cfc;
        case 0x130d10u: goto label_130d10;
        case 0x130d20u: goto label_130d20;
        default: break;
    }

    ctx->pc = 0x130cb0u;

    // 0x130cb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x130cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x130cb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130cb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x130cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x130cbc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x130cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x130cc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x130cc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130cc4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x130cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x130cc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x130cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x130ccc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x130cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x130cd0: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x130cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
    // 0x130cd4: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x130CD4u;
    {
        const bool branch_taken_0x130cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130CD4u;
        // 0x130cd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130cd4) {
            ctx->pc = 0x130D20u;
            goto label_130d20;
        }
    }
    ctx->pc = 0x130CDCu;
    // 0x130cdc: 0xc046002  jal         func_118008
    ctx->pc = 0x130CDCu;
    SET_GPR_U32(ctx, 31, 0x130CE4u);
    ctx->pc = 0x130CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130CDCu;
    // 0x130ce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x130CDCu, 0x130CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130CE4u;
label_130ce4:
    // 0x130ce4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ce8: 0xc046086  jal         func_118218
    ctx->pc = 0x130CE8u;
    SET_GPR_U32(ctx, 31, 0x130CF0u);
    ctx->pc = 0x130CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130CE8u;
    // 0x130cec: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118218u, 0x130CE8u, 0x130CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130CF0u;
label_130cf0:
    // 0x130cf0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x130cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x130cf4: 0xc043920  jal         func_10E480
    ctx->pc = 0x130CF4u;
    SET_GPR_U32(ctx, 31, 0x130CFCu);
    ctx->pc = 0x130CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130CF4u;
    // 0x130cf8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E480u, 0x130CF4u, 0x130CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130CFCu;
label_130cfc:
    // 0x130cfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x130cfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d00: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x130D00u;
    {
        const bool branch_taken_0x130d00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x130D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D00u;
        // 0x130d04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d00) {
            ctx->pc = 0x130D20u;
            goto label_130d20;
        }
    }
    ctx->pc = 0x130D08u;
    // 0x130d08: 0xc04c5ca  jal         func_131728
    ctx->pc = 0x130D08u;
    SET_GPR_U32(ctx, 31, 0x130D10u);
    ctx->pc = 0x130D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130D08u;
    // 0x130d0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131728u, 0x130D08u, 0x130D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D10u;
label_130d10:
    // 0x130d10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d14: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x130d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d18: 0xc095078  jal         func_2541E0
    ctx->pc = 0x130D18u;
    SET_GPR_U32(ctx, 31, 0x130D20u);
    ctx->pc = 0x130D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130D18u;
    // 0x130d1c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2541E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2541E0u, 0x130D18u, 0x130D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D20u;
label_130d20:
    // 0x130d20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x130d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130d24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130d24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130d28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x130d28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130d2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x130d2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130d30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x130d30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x130d34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x130d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130d38: 0x3e00008  jr          $ra
    ctx->pc = 0x130D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D38u;
        // 0x130d3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130D40u;
}
