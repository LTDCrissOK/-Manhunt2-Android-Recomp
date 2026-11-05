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

// Function: sub_001D8400
// Address: 0x1d8400 - 0x1d8468
void sub_001D8400_0x1d8400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8400_0x1d8400");
#endif

    switch (ctx->pc) {
        case 0x1d8400u: goto label_1d8400;
        case 0x1d8404u: goto label_1d8404;
        case 0x1d8408u: goto label_1d8408;
        case 0x1d840cu: goto label_1d840c;
        case 0x1d8410u: goto label_1d8410;
        case 0x1d8414u: goto label_1d8414;
        case 0x1d8418u: goto label_1d8418;
        case 0x1d841cu: goto label_1d841c;
        case 0x1d8420u: goto label_1d8420;
        case 0x1d8424u: goto label_1d8424;
        case 0x1d8428u: goto label_1d8428;
        case 0x1d842cu: goto label_1d842c;
        case 0x1d8430u: goto label_1d8430;
        case 0x1d8434u: goto label_1d8434;
        case 0x1d8438u: goto label_1d8438;
        case 0x1d843cu: goto label_1d843c;
        case 0x1d8440u: goto label_1d8440;
        case 0x1d8444u: goto label_1d8444;
        case 0x1d8448u: goto label_1d8448;
        case 0x1d844cu: goto label_1d844c;
        case 0x1d8450u: goto label_1d8450;
        case 0x1d8454u: goto label_1d8454;
        case 0x1d8458u: goto label_1d8458;
        case 0x1d845cu: goto label_1d845c;
        case 0x1d8460u: goto label_1d8460;
        case 0x1d8464u: goto label_1d8464;
        default: break;
    }

    ctx->pc = 0x1d8400u;

label_1d8400:
    // 0x1d8400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d8404:
    // 0x1d8404: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d8404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1d8408:
    // 0x1d8408: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d840c:
    // 0x1d840c: 0x8c43cba8  lw          $v1, -0x3458($v0)
    ctx->pc = 0x1d840cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953896)));
label_1d8410:
    // 0x1d8410: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x1d8410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1d8414:
    // 0x1d8414: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1d8414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d8418:
    // 0x1d8418: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1d8418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1d841c:
    // 0x1d841c: 0x40f809  jalr        $v0
label_1d8420:
    if (ctx->pc == 0x1D8420u) {
        ctx->pc = 0x1D8424u;
        goto label_1d8424;
    }
    ctx->pc = 0x1D841Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D8424u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D841Cu, 0x1D8424u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D8424u;
label_1d8424:
    // 0x1d8424: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1d8424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_1d8428:
    // 0x1d8428: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d8428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d842c:
    // 0x1d842c: 0x8c632b54  lw          $v1, 0x2B54($v1)
    ctx->pc = 0x1d842cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11092)));
label_1d8430:
    // 0x1d8430: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x1d8430u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1d8434:
    // 0x1d8434: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d8438:
    if (ctx->pc == 0x1D8438u) {
        ctx->pc = 0x1D8438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8434u;
        // 0x1d8438: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D843Cu;
        goto label_1d843c;
    }
    ctx->pc = 0x1D8434u;
    {
        const bool branch_taken_0x1d8434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8434u;
        // 0x1d8438: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8434) {
            ctx->pc = 0x1D8444u;
            goto label_1d8444;
        }
    }
    ctx->pc = 0x1D843Cu;
label_1d843c:
    // 0x1d843c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d8440:
    if (ctx->pc == 0x1D8440u) {
        ctx->pc = 0x1D8440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D843Cu;
        // 0x1d8440: 0x432023  subu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8444u;
        goto label_1d8444;
    }
    ctx->pc = 0x1D843Cu;
    {
        const bool branch_taken_0x1d843c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D843Cu;
        // 0x1d8440: 0x432023  subu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d843c) {
            ctx->pc = 0x1D8448u;
            goto label_1d8448;
        }
    }
    ctx->pc = 0x1D8444u;
label_1d8444:
    // 0x1d8444: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1d8444u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1d8448:
    // 0x1d8448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d844c:
    // 0x1d844c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d844cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d8450:
    // 0x1d8450: 0x3e00008  jr          $ra
label_1d8454:
    if (ctx->pc == 0x1D8454u) {
        ctx->pc = 0x1D8454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8450u;
        // 0x1d8454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8458u;
        goto label_1d8458;
    }
    ctx->pc = 0x1D8450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8450u;
        // 0x1d8454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8458u;
label_1d8458:
    // 0x1d8458: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d8458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1d845c:
    // 0x1d845c: 0x0  nop
    ctx->pc = 0x1d845cu;
    // NOP
label_1d8460:
    // 0x1d8460: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1d8460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d8464:
    // 0x1d8464: 0x0  nop
    ctx->pc = 0x1d8464u;
    // NOP
    ctx->pc = 0x1d8468u;
}
