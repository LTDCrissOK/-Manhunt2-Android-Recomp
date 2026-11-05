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

// Function: sub_0013E640
// Address: 0x13e640 - 0x13e690
void sub_0013E640_0x13e640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E640_0x13e640");
#endif

    switch (ctx->pc) {
        case 0x13e640u: goto label_13e640;
        case 0x13e644u: goto label_13e644;
        case 0x13e648u: goto label_13e648;
        case 0x13e64cu: goto label_13e64c;
        case 0x13e650u: goto label_13e650;
        case 0x13e654u: goto label_13e654;
        case 0x13e658u: goto label_13e658;
        case 0x13e65cu: goto label_13e65c;
        case 0x13e660u: goto label_13e660;
        case 0x13e664u: goto label_13e664;
        case 0x13e668u: goto label_13e668;
        case 0x13e66cu: goto label_13e66c;
        case 0x13e670u: goto label_13e670;
        case 0x13e674u: goto label_13e674;
        case 0x13e678u: goto label_13e678;
        case 0x13e67cu: goto label_13e67c;
        case 0x13e680u: goto label_13e680;
        case 0x13e684u: goto label_13e684;
        case 0x13e688u: goto label_13e688;
        case 0x13e68cu: goto label_13e68c;
        default: break;
    }

    ctx->pc = 0x13e640u;

label_13e640:
    // 0x13e640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13e644:
    // 0x13e644: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13e644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13e648:
    // 0x13e648: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13e648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13e64c:
    // 0x13e64c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13e64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13e650:
    // 0x13e650: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13e650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13e654:
    // 0x13e654: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13e654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13e658:
    // 0x13e658: 0xc041db4  jal         func_1076D0
label_13e65c:
    if (ctx->pc == 0x13E65Cu) {
        ctx->pc = 0x13E65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E658u;
        // 0x13e65c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E660u;
        goto label_13e660;
    }
    ctx->pc = 0x13E658u;
    SET_GPR_U32(ctx, 31, 0x13E660u);
    ctx->pc = 0x13E65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E658u;
    // 0x13e65c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1076D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1076D0u, 0x13E658u, 0x13E660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E660u;
label_13e660:
    // 0x13e660: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13e660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13e664:
    // 0x13e664: 0x8e250054  lw          $a1, 0x54($s1)
    ctx->pc = 0x13e664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_13e668:
    // 0x13e668: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13e668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13e66c:
    // 0x13e66c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x13e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_13e670:
    // 0x13e670: 0x40f809  jalr        $v0
label_13e674:
    if (ctx->pc == 0x13E674u) {
        ctx->pc = 0x13E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E670u;
        // 0x13e674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E678u;
        goto label_13e678;
    }
    ctx->pc = 0x13E670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13E678u);
        ctx->pc = 0x13E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E670u;
        // 0x13e674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E670u, 0x13E678u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E678u;
label_13e678:
    // 0x13e678: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13e678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13e67c:
    // 0x13e67c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13e67cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13e680:
    // 0x13e680: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13e680u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13e684:
    // 0x13e684: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13e684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13e688:
    // 0x13e688: 0x3e00008  jr          $ra
label_13e68c:
    if (ctx->pc == 0x13E68Cu) {
        ctx->pc = 0x13E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E688u;
        // 0x13e68c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E690u;
        goto label_fallthrough_0x13e688;
    }
    ctx->pc = 0x13E688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E688u;
        // 0x13e68c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13e688:
    ctx->pc = 0x13E690u;
}
