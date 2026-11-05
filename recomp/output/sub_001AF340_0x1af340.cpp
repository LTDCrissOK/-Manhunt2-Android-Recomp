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

// Function: sub_001AF340
// Address: 0x1af340 - 0x1af3b8
void sub_001AF340_0x1af340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF340_0x1af340");
#endif

    switch (ctx->pc) {
        case 0x1af354u: goto label_1af354;
        case 0x1af368u: goto label_1af368;
        case 0x1af380u: goto label_1af380;
        case 0x1af398u: goto label_1af398;
        case 0x1af3a8u: goto label_1af3a8;
        default: break;
    }

    ctx->pc = 0x1af340u;

    // 0x1af340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af344: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af348: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1af348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1af34c: 0xc06c11c  jal         func_1B0470
    ctx->pc = 0x1AF34Cu;
    SET_GPR_U32(ctx, 31, 0x1AF354u);
    ctx->pc = 0x1AF350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF34Cu;
    // 0x1af350: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0470u, 0x1AF34Cu, 0x1AF354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF354u;
label_1af354:
    // 0x1af354: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1af354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af358: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AF358u;
    {
        const bool branch_taken_0x1af358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1af358) {
            ctx->pc = 0x1AF3A0u;
            goto label_1af3a0;
        }
    }
    ctx->pc = 0x1AF360u;
    // 0x1af360: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x1AF360u;
    SET_GPR_U32(ctx, 31, 0x1AF368u);
    ctx->pc = 0x1AF364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF360u;
    // 0x1af364: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x1AF360u, 0x1AF368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF368u;
label_1af368:
    // 0x1af368: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AF368u;
    {
        const bool branch_taken_0x1af368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF368u;
        // 0x1af36c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af368) {
            ctx->pc = 0x1AF388u;
            goto label_1af388;
        }
    }
    ctx->pc = 0x1AF370u;
    // 0x1af370: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1af370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1af374: 0x24060116  addiu       $a2, $zero, 0x116
    ctx->pc = 0x1af374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x1af378: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AF378u;
    SET_GPR_U32(ctx, 31, 0x1AF380u);
    ctx->pc = 0x1AF37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF378u;
    // 0x1af37c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AF378u, 0x1AF380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF380u;
label_1af380:
    // 0x1af380: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1AF380u;
    {
        const bool branch_taken_0x1af380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF380u;
        // 0x1af384: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af380) {
            ctx->pc = 0x1AF3ACu;
            goto label_1af3ac;
        }
    }
    ctx->pc = 0x1AF388u;
label_1af388:
    // 0x1af388: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1af388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1af38c: 0x24060118  addiu       $a2, $zero, 0x118
    ctx->pc = 0x1af38cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x1af390: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AF390u;
    SET_GPR_U32(ctx, 31, 0x1AF398u);
    ctx->pc = 0x1AF394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF390u;
    // 0x1af394: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AF390u, 0x1AF398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF398u;
label_1af398:
    // 0x1af398: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF398u;
    {
        const bool branch_taken_0x1af398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF398u;
        // 0x1af39c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af398) {
            ctx->pc = 0x1AF3ACu;
            goto label_1af3ac;
        }
    }
    ctx->pc = 0x1AF3A0u;
label_1af3a0:
    // 0x1af3a0: 0xc06bd02  jal         func_1AF408
    ctx->pc = 0x1AF3A0u;
    SET_GPR_U32(ctx, 31, 0x1AF3A8u);
    ctx->pc = 0x1AF3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF3A0u;
    // 0x1af3a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF408u, 0x1AF3A0u, 0x1AF3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF3A8u;
label_1af3a8:
    // 0x1af3a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af3a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af3ac:
    // 0x1af3ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1af3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF3B0u;
        // 0x1af3b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF3B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF3B8u;
}
