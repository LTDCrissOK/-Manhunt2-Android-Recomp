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

// Function: sub_0027D2B0
// Address: 0x27d2b0 - 0x27d338
void sub_0027D2B0_0x27d2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D2B0_0x27d2b0");
#endif

    switch (ctx->pc) {
        case 0x27d30cu: goto label_27d30c;
        case 0x27d320u: goto label_27d320;
        default: break;
    }

    ctx->pc = 0x27d2b0u;

    // 0x27d2b0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x27d2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x27d2b4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27d2b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27d2b8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x27d2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x27d2bc: 0x2442cb28  addiu       $v0, $v0, -0x34D8
    ctx->pc = 0x27d2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953768));
    // 0x27d2c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27d2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27d2c4: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x27d2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x27d2c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27d2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27d2cc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x27d2ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d2d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27d2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27d2d4: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x27d2d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d2d8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x27d2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x27d2dc: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x27d2dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d2e0: 0xac6902a0  sw          $t1, 0x2A0($v1)
    ctx->pc = 0x27d2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 672), GPR_U32(ctx, 9));
    // 0x27d2e4: 0x244203d8  addiu       $v0, $v0, 0x3D8
    ctx->pc = 0x27d2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 984));
    // 0x27d2e8: 0xad470308  sw          $a3, 0x308($t2)
    ctx->pc = 0x27d2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 776), GPR_U32(ctx, 7));
    // 0x27d2ec: 0xc28021  addu        $s0, $a2, $v0
    ctx->pc = 0x27d2ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x27d2f0: 0xad680370  sw          $t0, 0x370($t3)
    ctx->pc = 0x27d2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 880), GPR_U32(ctx, 8));
    // 0x27d2f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27d2f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d2f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x27d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27d2fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27D2FCu;
    {
        const bool branch_taken_0x27d2fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D2FCu;
        // 0x27d300: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d2fc) {
            ctx->pc = 0x27D310u;
            goto label_27d310;
        }
    }
    ctx->pc = 0x27D304u;
    // 0x27d304: 0xc0b241a  jal         func_2C9068
    ctx->pc = 0x27D304u;
    SET_GPR_U32(ctx, 31, 0x27D30Cu);
    ctx->pc = 0x27D308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D304u;
    // 0x27d308: 0x24040200  addiu       $a0, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9068u, 0x27D304u, 0x27D30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D30Cu;
label_27d30c:
    // 0x27d30c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x27d30cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_27d310:
    // 0x27d310: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x27d310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27d314: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27d314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d318: 0xc0f0242  jal         func_3C0908
    ctx->pc = 0x27D318u;
    SET_GPR_U32(ctx, 31, 0x27D320u);
    ctx->pc = 0x27D31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D318u;
    // 0x27d31c: 0x8e460000  lw          $a2, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0908u, 0x27D318u, 0x27D320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D320u;
label_27d320:
    // 0x27d320: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27d320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d324: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27d324u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27d328: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27d328u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d32c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x27d32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27d330: 0x3e00008  jr          $ra
    ctx->pc = 0x27D330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D330u;
        // 0x27d334: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D338u;
}
