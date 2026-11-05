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

// Function: sub_0013E550
// Address: 0x13e550 - 0x13e5a0
void sub_0013E550_0x13e550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E550_0x13e550");
#endif

    switch (ctx->pc) {
        case 0x13e550u: goto label_13e550;
        case 0x13e554u: goto label_13e554;
        case 0x13e558u: goto label_13e558;
        case 0x13e55cu: goto label_13e55c;
        case 0x13e560u: goto label_13e560;
        case 0x13e564u: goto label_13e564;
        case 0x13e568u: goto label_13e568;
        case 0x13e56cu: goto label_13e56c;
        case 0x13e570u: goto label_13e570;
        case 0x13e574u: goto label_13e574;
        case 0x13e578u: goto label_13e578;
        case 0x13e57cu: goto label_13e57c;
        case 0x13e580u: goto label_13e580;
        case 0x13e584u: goto label_13e584;
        case 0x13e588u: goto label_13e588;
        case 0x13e58cu: goto label_13e58c;
        case 0x13e590u: goto label_13e590;
        case 0x13e594u: goto label_13e594;
        case 0x13e598u: goto label_13e598;
        case 0x13e59cu: goto label_13e59c;
        default: break;
    }

    ctx->pc = 0x13e550u;

label_13e550:
    // 0x13e550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13e554:
    // 0x13e554: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13e554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13e558:
    // 0x13e558: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13e558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13e55c:
    // 0x13e55c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13e55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13e560:
    // 0x13e560: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13e560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13e564:
    // 0x13e564: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13e564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13e568:
    // 0x13e568: 0xc041dec  jal         func_1077B0
label_13e56c:
    if (ctx->pc == 0x13E56Cu) {
        ctx->pc = 0x13E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E568u;
        // 0x13e56c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E570u;
        goto label_13e570;
    }
    ctx->pc = 0x13E568u;
    SET_GPR_U32(ctx, 31, 0x13E570u);
    ctx->pc = 0x13E56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E568u;
    // 0x13e56c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1077B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1077B0u, 0x13E568u, 0x13E570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E570u;
label_13e570:
    // 0x13e570: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13e570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13e574:
    // 0x13e574: 0x8e250054  lw          $a1, 0x54($s1)
    ctx->pc = 0x13e574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_13e578:
    // 0x13e578: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13e578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13e57c:
    // 0x13e57c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x13e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_13e580:
    // 0x13e580: 0x40f809  jalr        $v0
label_13e584:
    if (ctx->pc == 0x13E584u) {
        ctx->pc = 0x13E584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E580u;
        // 0x13e584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E588u;
        goto label_13e588;
    }
    ctx->pc = 0x13E580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13E588u);
        ctx->pc = 0x13E584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E580u;
        // 0x13e584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E580u, 0x13E588u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E588u;
label_13e588:
    // 0x13e588: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13e588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13e58c:
    // 0x13e58c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13e58cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13e590:
    // 0x13e590: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13e590u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13e594:
    // 0x13e594: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13e594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13e598:
    // 0x13e598: 0x3e00008  jr          $ra
label_13e59c:
    if (ctx->pc == 0x13E59Cu) {
        ctx->pc = 0x13E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E598u;
        // 0x13e59c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E5A0u;
        goto label_fallthrough_0x13e598;
    }
    ctx->pc = 0x13E598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E598u;
        // 0x13e59c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13e598:
    ctx->pc = 0x13E5A0u;
}
