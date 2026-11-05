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

// Function: sub_003D10E0
// Address: 0x3d10e0 - 0x3d1160
void sub_003D10E0_0x3d10e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D10E0_0x3d10e0");
#endif

    switch (ctx->pc) {
        case 0x3d1110u: goto label_3d1110;
        case 0x3d1128u: goto label_3d1128;
        case 0x3d1138u: goto label_3d1138;
        default: break;
    }

    ctx->pc = 0x3d10e0u;

    // 0x3d10e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d10e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3d10e4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3d10e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3d10e8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3d10e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3d10ec: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3d10ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d10f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3d10f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3d10f4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3d10f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d10f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d10f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d10fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d10fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1100: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3d1100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3d1104: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3d1104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3d1108: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x3D1108u;
    SET_GPR_U32(ctx, 31, 0x3D1110u);
    ctx->pc = 0x3D110Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1108u;
    // 0x3d110c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x3D1108u, 0x3D1110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1110u;
label_3d1110:
    // 0x3d1110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d1110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1114: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3d1114u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1118: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d1118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d111c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d111cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1120: 0xc0f43fa  jal         func_3D0FE8
    ctx->pc = 0x3D1120u;
    SET_GPR_U32(ctx, 31, 0x3D1128u);
    ctx->pc = 0x3D1124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1120u;
    // 0x3d1124: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0FE8u, 0x3D1120u, 0x3D1128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1128u;
label_3d1128:
    // 0x3d1128: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D1128u;
    {
        const bool branch_taken_0x3d1128 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1128u;
        // 0x3d112c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1128) {
            ctx->pc = 0x3D1138u;
            goto label_3d1138;
        }
    }
    ctx->pc = 0x3D1130u;
    // 0x3d1130: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x3D1130u;
    SET_GPR_U32(ctx, 31, 0x3D1138u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x3D1130u, 0x3D1138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1138u;
label_3d1138:
    // 0x3d1138: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d1138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d113c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3d113cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d1140: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3d1140u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d1144: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3d1144u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d1148: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3d1148u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d114c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3d114cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d1150: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d1150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d1154: 0x3e00008  jr          $ra
    ctx->pc = 0x3D1154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D1158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1154u;
        // 0x3d1158: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D115Cu;
    // 0x3d115c: 0x0  nop
    ctx->pc = 0x3d115cu;
    // NOP
    ctx->pc = 0x3d1160u;
}
