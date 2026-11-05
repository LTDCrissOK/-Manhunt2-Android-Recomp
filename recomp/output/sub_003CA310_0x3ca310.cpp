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

// Function: sub_003CA310
// Address: 0x3ca310 - 0x3ca398
void sub_003CA310_0x3ca310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA310_0x3ca310");
#endif

    switch (ctx->pc) {
        case 0x3ca348u: goto label_3ca348;
        case 0x3ca35cu: goto label_3ca35c;
        default: break;
    }

    ctx->pc = 0x3ca310u;

    // 0x3ca310: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3ca310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3ca314: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3ca314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3ca318: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3ca318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3ca31c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3ca31cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca320: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3ca320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3ca324: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ca324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca328: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ca328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ca32c: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x3ca32cu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x3ca330: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3ca330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3ca334: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x3ca334u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3ca338: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CA338u;
    {
        const bool branch_taken_0x3ca338 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca338) {
            ctx->pc = 0x3CA348u;
            goto label_3ca348;
        }
    }
    ctx->pc = 0x3CA340u;
    // 0x3ca340: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x3CA340u;
    SET_GPR_U32(ctx, 31, 0x3CA348u);
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x3CA340u, 0x3CA348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA348u;
label_3ca348:
    // 0x3ca348: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3ca348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3ca34c: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x3ca34cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x3ca350: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x3ca350u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x3ca354: 0xc0f289a  jal         func_3CA268
    ctx->pc = 0x3CA354u;
    SET_GPR_U32(ctx, 31, 0x3CA35Cu);
    ctx->pc = 0x3CA358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA354u;
    // 0x3ca358: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA268u, 0x3CA354u, 0x3CA35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA35Cu;
label_3ca35c:
    // 0x3ca35c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3CA35Cu;
    {
        const bool branch_taken_0x3ca35c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA35Cu;
        // 0x3ca360: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca35c) {
            ctx->pc = 0x3CA378u;
            goto label_3ca378;
        }
    }
    ctx->pc = 0x3CA364u;
    // 0x3ca364: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3ca364u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ca368: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3ca368u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ca36c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ca36cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ca370: 0x80f401a  j           func_3D0068
    ctx->pc = 0x3CA370u;
    ctx->pc = 0x3CA374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA370u;
    // 0x3ca374: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0068u;
    sub_003D0068_0x3d0068(rdram, ctx, runtime); return;
    ctx->pc = 0x3CA378u;
label_3ca378:
    // 0x3ca378: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3ca378u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ca37c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3ca37cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ca380: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ca380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ca384: 0x3e00008  jr          $ra
    ctx->pc = 0x3CA384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA384u;
        // 0x3ca388: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CA38Cu;
    // 0x3ca38c: 0x0  nop
    ctx->pc = 0x3ca38cu;
    // NOP
    // 0x3ca390: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3ca390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3ca394: 0x0  nop
    ctx->pc = 0x3ca394u;
    // NOP
    ctx->pc = 0x3ca398u;
}
