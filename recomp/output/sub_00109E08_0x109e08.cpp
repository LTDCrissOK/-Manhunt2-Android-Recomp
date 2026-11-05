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

// Function: sub_00109E08
// Address: 0x109e08 - 0x109eb8
void sub_00109E08_0x109e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109E08_0x109e08");
#endif

    switch (ctx->pc) {
        case 0x109e40u: goto label_109e40;
        case 0x109e54u: goto label_109e54;
        case 0x109e60u: goto label_109e60;
        case 0x109e74u: goto label_109e74;
        case 0x109e84u: goto label_109e84;
        case 0x109e94u: goto label_109e94;
        default: break;
    }

    ctx->pc = 0x109e08u;

    // 0x109e08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x109e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x109e0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x109e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x109e10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x109e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x109e14: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x109e14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e18: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x109e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x109e1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x109e1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e20: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x109e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x109e24: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x109e24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e28: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x109e28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x109e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x109e30: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x109e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x109e34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x109e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e38: 0xc04344a  jal         func_10D128
    ctx->pc = 0x109E38u;
    SET_GPR_U32(ctx, 31, 0x109E40u);
    ctx->pc = 0x109E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E38u;
    // 0x109e3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D128u, 0x109E38u, 0x109E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E40u;
label_109e40:
    // 0x109e40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x109e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e44: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x109E44u;
    {
        const bool branch_taken_0x109e44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x109E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E44u;
        // 0x109e48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109e44) {
            ctx->pc = 0x109E98u;
            goto label_109e98;
        }
    }
    ctx->pc = 0x109E4Cu;
    // 0x109e4c: 0xc05a6b8  jal         func_169AE0
    ctx->pc = 0x109E4Cu;
    SET_GPR_U32(ctx, 31, 0x109E54u);
    ctx->pc = 0x109E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E4Cu;
    // 0x109e50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169AE0u, 0x109E4Cu, 0x109E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E54u;
label_109e54:
    // 0x109e54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x109e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e58: 0xc05a604  jal         func_169810
    ctx->pc = 0x109E58u;
    SET_GPR_U32(ctx, 31, 0x109E60u);
    ctx->pc = 0x109E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E58u;
    // 0x109e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169810u, 0x109E58u, 0x109E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E60u;
label_109e60:
    // 0x109e60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x109e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e64: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x109e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e68: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x109e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e6c: 0xc0435d4  jal         func_10D750
    ctx->pc = 0x109E6Cu;
    SET_GPR_U32(ctx, 31, 0x109E74u);
    ctx->pc = 0x109E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E6Cu;
    // 0x109e70: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D750u, 0x109E6Cu, 0x109E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E74u;
label_109e74:
    // 0x109e74: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x109E74u;
    {
        const bool branch_taken_0x109e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E74u;
        // 0x109e78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109e74) {
            ctx->pc = 0x109E98u;
            goto label_109e98;
        }
    }
    ctx->pc = 0x109E7Cu;
    // 0x109e7c: 0xc05a5ee  jal         func_1697B8
    ctx->pc = 0x109E7Cu;
    SET_GPR_U32(ctx, 31, 0x109E84u);
    ctx->pc = 0x109E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E7Cu;
    // 0x109e80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697B8u, 0x109E7Cu, 0x109E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E84u;
label_109e84:
    // 0x109e84: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x109e84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x109e88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x109e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e8c: 0xc042058  jal         func_108160
    ctx->pc = 0x109E8Cu;
    SET_GPR_U32(ctx, 31, 0x109E94u);
    ctx->pc = 0x109E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E8Cu;
    // 0x109e90: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108160u, 0x109E8Cu, 0x109E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E94u;
label_109e94:
    // 0x109e94: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x109e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_109e98:
    // 0x109e98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109e98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109e9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x109e9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x109ea0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x109ea0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109ea4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x109ea4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x109ea8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x109ea8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109eac: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x109eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x109eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x109EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109EB0u;
        // 0x109eb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109EB8u;
}
