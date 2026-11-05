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

// Function: sub_003A25F8
// Address: 0x3a25f8 - 0x3a2648
void sub_003A25F8_0x3a25f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A25F8_0x3a25f8");
#endif

    switch (ctx->pc) {
        case 0x3a25f8u: goto label_3a25f8;
        case 0x3a25fcu: goto label_3a25fc;
        case 0x3a2600u: goto label_3a2600;
        case 0x3a2604u: goto label_3a2604;
        case 0x3a2608u: goto label_3a2608;
        case 0x3a260cu: goto label_3a260c;
        case 0x3a2610u: goto label_3a2610;
        case 0x3a2614u: goto label_3a2614;
        case 0x3a2618u: goto label_3a2618;
        case 0x3a261cu: goto label_3a261c;
        case 0x3a2620u: goto label_3a2620;
        case 0x3a2624u: goto label_3a2624;
        case 0x3a2628u: goto label_3a2628;
        case 0x3a262cu: goto label_3a262c;
        case 0x3a2630u: goto label_3a2630;
        case 0x3a2634u: goto label_3a2634;
        case 0x3a2638u: goto label_3a2638;
        case 0x3a263cu: goto label_3a263c;
        case 0x3a2640u: goto label_3a2640;
        case 0x3a2644u: goto label_3a2644;
        default: break;
    }

    ctx->pc = 0x3a25f8u;

label_3a25f8:
    // 0x3a25f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a25f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3a25fc:
    // 0x3a25fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a25fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a2600:
    // 0x3a2600: 0xc0e86ee  jal         func_3A1BB8
label_3a2604:
    if (ctx->pc == 0x3A2604u) {
        ctx->pc = 0x3A2608u;
        goto label_3a2608;
    }
    ctx->pc = 0x3A2600u;
    SET_GPR_U32(ctx, 31, 0x3A2608u);
    ctx->pc = 0x3A1BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1BB8u, 0x3A2600u, 0x3A2608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2608u;
label_3a2608:
    // 0x3a2608: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3a2608u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a260c:
    // 0x3a260c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_3a2610:
    if (ctx->pc == 0x3A2610u) {
        ctx->pc = 0x3A2610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A260Cu;
        // 0x3a2610: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2614u;
        goto label_3a2614;
    }
    ctx->pc = 0x3A260Cu;
    {
        const bool branch_taken_0x3a260c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A260Cu;
        // 0x3a2610: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a260c) {
            ctx->pc = 0x3A2640u;
            goto label_3a2640;
        }
    }
    ctx->pc = 0x3A2614u;
label_3a2614:
    // 0x3a2614: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x3a2614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_3a2618:
    // 0x3a2618: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3a261c:
    if (ctx->pc == 0x3A261Cu) {
        ctx->pc = 0x3A261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2618u;
        // 0x3a261c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2620u;
        goto label_3a2620;
    }
    ctx->pc = 0x3A2618u;
    {
        const bool branch_taken_0x3a2618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2618u;
        // 0x3a261c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2618) {
            ctx->pc = 0x3A2638u;
            goto label_3a2638;
        }
    }
    ctx->pc = 0x3A2620u;
label_3a2620:
    // 0x3a2620: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3a2620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_3a2624:
    // 0x3a2624: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a2624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2628:
    // 0x3a2628: 0x40f809  jalr        $v0
label_3a262c:
    if (ctx->pc == 0x3A262Cu) {
        ctx->pc = 0x3A262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2628u;
        // 0x3a262c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2630u;
        goto label_3a2630;
    }
    ctx->pc = 0x3A2628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A2630u);
        ctx->pc = 0x3A262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2628u;
        // 0x3a262c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2628u, 0x3A2630u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A2630u;
label_3a2630:
    // 0x3a2630: 0x10000003  b           . + 4 + (0x3 << 2)
label_3a2634:
    if (ctx->pc == 0x3A2634u) {
        ctx->pc = 0x3A2634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2630u;
        // 0x3a2634: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2638u;
        goto label_3a2638;
    }
    ctx->pc = 0x3A2630u;
    {
        const bool branch_taken_0x3a2630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2630u;
        // 0x3a2634: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2630) {
            ctx->pc = 0x3A2640u;
            goto label_3a2640;
        }
    }
    ctx->pc = 0x3A2638u;
label_3a2638:
    // 0x3a2638: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a2638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a263c:
    // 0x3a263c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a263cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a2640:
    // 0x3a2640: 0x3e00008  jr          $ra
label_3a2644:
    if (ctx->pc == 0x3A2644u) {
        ctx->pc = 0x3A2644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2640u;
        // 0x3a2644: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2648u;
        goto label_fallthrough_0x3a2640;
    }
    ctx->pc = 0x3A2640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2640u;
        // 0x3a2644: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a2640:
    ctx->pc = 0x3A2648u;
}
