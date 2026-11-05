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

// Function: sub_002792A8
// Address: 0x2792a8 - 0x279340
void sub_002792A8_0x2792a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002792A8_0x2792a8");
#endif

    switch (ctx->pc) {
        case 0x2792d4u: goto label_2792d4;
        case 0x2792dcu: goto label_2792dc;
        case 0x2792ecu: goto label_2792ec;
        case 0x279308u: goto label_279308;
        case 0x279320u: goto label_279320;
        default: break;
    }

    ctx->pc = 0x2792a8u;

    // 0x2792a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2792a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2792ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2792acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2792b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2792b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2792b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2792b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2792b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2792b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2792bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2792bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2792c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2792c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2792c4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2792c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2792c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2792c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2792cc: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x2792CCu;
    SET_GPR_U32(ctx, 31, 0x2792D4u);
    ctx->pc = 0x2792D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2792CCu;
    // 0x2792d0: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x2792CCu, 0x2792D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2792D4u;
label_2792d4:
    // 0x2792d4: 0xc09e834  jal         func_27A0D0
    ctx->pc = 0x2792D4u;
    SET_GPR_U32(ctx, 31, 0x2792DCu);
    ctx->pc = 0x2792D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2792D4u;
    // 0x2792d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A0D0u, 0x2792D4u, 0x2792DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2792DCu;
label_2792dc:
    // 0x2792dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2792dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2792e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2792e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2792e4: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x2792E4u;
    SET_GPR_U32(ctx, 31, 0x2792ECu);
    ctx->pc = 0x2792E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2792E4u;
    // 0x2792e8: 0x24a60004  addiu       $a2, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x2792E4u, 0x2792ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2792ECu;
label_2792ec:
    // 0x2792ec: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x2792ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x2792f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2792f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2792f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2792f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2792f8: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x2792f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2792fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2792fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x279300: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x279300u;
    SET_GPR_U32(ctx, 31, 0x279308u);
    ctx->pc = 0x279304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279300u;
    // 0x279304: 0xae030114  sw          $v1, 0x114($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x279300u, 0x279308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279308u;
label_279308:
    // 0x279308: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x279308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x27930c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27930cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279310: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x279310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279314: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x279314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x279318: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x279318u;
    SET_GPR_U32(ctx, 31, 0x279320u);
    ctx->pc = 0x27931Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279318u;
    // 0x27931c: 0xae030114  sw          $v1, 0x114($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x279318u, 0x279320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279320u;
label_279320:
    // 0x279320: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x279320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279324: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x279324u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x279328: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x279328u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27932c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x27932cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x279330: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x279330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279334: 0x3e00008  jr          $ra
    ctx->pc = 0x279334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279334u;
        // 0x279338: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27933Cu;
    // 0x27933c: 0x0  nop
    ctx->pc = 0x27933cu;
    // NOP
    ctx->pc = 0x279340u;
}
