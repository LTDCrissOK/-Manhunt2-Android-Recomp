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

// Function: sub_001344D8
// Address: 0x1344d8 - 0x134550
void sub_001344D8_0x1344d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001344D8_0x1344d8");
#endif

    switch (ctx->pc) {
        case 0x1344fcu: goto label_1344fc;
        case 0x134528u: goto label_134528;
        case 0x13453cu: goto label_13453c;
        default: break;
    }

    ctx->pc = 0x1344d8u;

    // 0x1344d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1344d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1344dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1344dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1344e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1344e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1344e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1344e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1344e8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1344e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1344ec: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1344ECu;
    {
        const bool branch_taken_0x1344ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1344ec) {
            ctx->pc = 0x1344F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1344ECu;
            // 0x1344f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134540u;
            goto label_134540;
        }
    }
    ctx->pc = 0x1344F4u;
    // 0x1344f4: 0xc04d51c  jal         func_135470
    ctx->pc = 0x1344F4u;
    SET_GPR_U32(ctx, 31, 0x1344FCu);
    ctx->pc = 0x135470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135470u, 0x1344F4u, 0x1344FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1344FCu;
label_1344fc:
    // 0x1344fc: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1344fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x134500: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x134500u;
    {
        const bool branch_taken_0x134500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134500) {
            ctx->pc = 0x134504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134500u;
            // 0x134504: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134540u;
            goto label_134540;
        }
    }
    ctx->pc = 0x134508u;
    // 0x134508: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x134508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x13450c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x13450Cu;
    {
        const bool branch_taken_0x13450c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13450c) {
            ctx->pc = 0x134510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13450Cu;
            // 0x134510: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134540u;
            goto label_134540;
        }
    }
    ctx->pc = 0x134514u;
    // 0x134514: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x134514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x134518: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x134518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x13451c: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x13451cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x134520: 0xc07e666  jal         func_1F9998
    ctx->pc = 0x134520u;
    SET_GPR_U32(ctx, 31, 0x134528u);
    ctx->pc = 0x134524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134520u;
    // 0x134524: 0x8c4502d8  lw          $a1, 0x2D8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 728)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9998u, 0x134520u, 0x134528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134528u;
label_134528:
    // 0x134528: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x134528u;
    {
        const bool branch_taken_0x134528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134528) {
            ctx->pc = 0x13452Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134528u;
            // 0x13452c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134540u;
            goto label_134540;
        }
    }
    ctx->pc = 0x134530u;
    // 0x134530: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x134530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x134534: 0xc095514  jal         func_255450
    ctx->pc = 0x134534u;
    SET_GPR_U32(ctx, 31, 0x13453Cu);
    ctx->pc = 0x134538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134534u;
    // 0x134538: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255450u, 0x134534u, 0x13453Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13453Cu;
label_13453c:
    // 0x13453c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13453cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_134540:
    // 0x134540: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x134540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x134544: 0x3e00008  jr          $ra
    ctx->pc = 0x134544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134544u;
        // 0x134548: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13454Cu;
    // 0x13454c: 0x0  nop
    ctx->pc = 0x13454cu;
    // NOP
    ctx->pc = 0x134550u;
}
