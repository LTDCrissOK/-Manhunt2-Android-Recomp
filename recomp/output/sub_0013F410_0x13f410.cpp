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

// Function: sub_0013F410
// Address: 0x13f410 - 0x13f478
void sub_0013F410_0x13f410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F410_0x13f410");
#endif

    switch (ctx->pc) {
        case 0x13f428u: goto label_13f428;
        case 0x13f438u: goto label_13f438;
        case 0x13f448u: goto label_13f448;
        case 0x13f458u: goto label_13f458;
        case 0x13f468u: goto label_13f468;
        default: break;
    }

    ctx->pc = 0x13f410u;

    // 0x13f410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13f410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13f414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13f414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13f418: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x13f418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13f41c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13f41cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f420: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x13F420u;
    SET_GPR_U32(ctx, 31, 0x13F428u);
    ctx->pc = 0x13F424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F420u;
    // 0x13f424: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x13F420u, 0x13F428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F428u;
label_13f428:
    // 0x13f428: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x13F428u;
    {
        const bool branch_taken_0x13f428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f428) {
            ctx->pc = 0x13F42Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F428u;
            // 0x13f42c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F46Cu;
            goto label_13f46c;
        }
    }
    ctx->pc = 0x13F430u;
    // 0x13f430: 0xc04fd1e  jal         func_13F478
    ctx->pc = 0x13F430u;
    SET_GPR_U32(ctx, 31, 0x13F438u);
    ctx->pc = 0x13F434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F430u;
    // 0x13f434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F478u, 0x13F430u, 0x13F438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F438u;
label_13f438:
    // 0x13f438: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x13F438u;
    {
        const bool branch_taken_0x13f438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f438) {
            ctx->pc = 0x13F43Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F438u;
            // 0x13f43c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F46Cu;
            goto label_13f46c;
        }
    }
    ctx->pc = 0x13F440u;
    // 0x13f440: 0xc04fd2e  jal         func_13F4B8
    ctx->pc = 0x13F440u;
    SET_GPR_U32(ctx, 31, 0x13F448u);
    ctx->pc = 0x13F444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F440u;
    // 0x13f444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F4B8u, 0x13F440u, 0x13F448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F448u;
label_13f448:
    // 0x13f448: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x13F448u;
    {
        const bool branch_taken_0x13f448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f448) {
            ctx->pc = 0x13F44Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F448u;
            // 0x13f44c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F46Cu;
            goto label_13f46c;
        }
    }
    ctx->pc = 0x13F450u;
    // 0x13f450: 0xc04fd40  jal         func_13F500
    ctx->pc = 0x13F450u;
    SET_GPR_U32(ctx, 31, 0x13F458u);
    ctx->pc = 0x13F454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F450u;
    // 0x13f454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F500u, 0x13F450u, 0x13F458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F458u;
label_13f458:
    // 0x13f458: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F458u;
    {
        const bool branch_taken_0x13f458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f458) {
            ctx->pc = 0x13F45Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F458u;
            // 0x13f45c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F46Cu;
            goto label_13f46c;
        }
    }
    ctx->pc = 0x13F460u;
    // 0x13f460: 0xc04fd52  jal         func_13F548
    ctx->pc = 0x13F460u;
    SET_GPR_U32(ctx, 31, 0x13F468u);
    ctx->pc = 0x13F464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F460u;
    // 0x13f464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F548u, 0x13F460u, 0x13F468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F468u;
label_13f468:
    // 0x13f468: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13f468u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13f46c:
    // 0x13f46c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x13f46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13f470: 0x3e00008  jr          $ra
    ctx->pc = 0x13F470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F470u;
        // 0x13f474: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F478u;
}
