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

// Function: sub_0013E5F0
// Address: 0x13e5f0 - 0x13e640
void sub_0013E5F0_0x13e5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E5F0_0x13e5f0");
#endif

    switch (ctx->pc) {
        case 0x13e5f0u: goto label_13e5f0;
        case 0x13e5f4u: goto label_13e5f4;
        case 0x13e5f8u: goto label_13e5f8;
        case 0x13e5fcu: goto label_13e5fc;
        case 0x13e600u: goto label_13e600;
        case 0x13e604u: goto label_13e604;
        case 0x13e608u: goto label_13e608;
        case 0x13e60cu: goto label_13e60c;
        case 0x13e610u: goto label_13e610;
        case 0x13e614u: goto label_13e614;
        case 0x13e618u: goto label_13e618;
        case 0x13e61cu: goto label_13e61c;
        case 0x13e620u: goto label_13e620;
        case 0x13e624u: goto label_13e624;
        case 0x13e628u: goto label_13e628;
        case 0x13e62cu: goto label_13e62c;
        case 0x13e630u: goto label_13e630;
        case 0x13e634u: goto label_13e634;
        case 0x13e638u: goto label_13e638;
        case 0x13e63cu: goto label_13e63c;
        default: break;
    }

    ctx->pc = 0x13e5f0u;

label_13e5f0:
    // 0x13e5f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13e5f4:
    // 0x13e5f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13e5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13e5f8:
    // 0x13e5f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13e5f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13e5fc:
    // 0x13e5fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13e5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13e600:
    // 0x13e600: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13e600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13e604:
    // 0x13e604: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13e604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13e608:
    // 0x13e608: 0xc041dcc  jal         func_107730
label_13e60c:
    if (ctx->pc == 0x13E60Cu) {
        ctx->pc = 0x13E60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E608u;
        // 0x13e60c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E610u;
        goto label_13e610;
    }
    ctx->pc = 0x13E608u;
    SET_GPR_U32(ctx, 31, 0x13E610u);
    ctx->pc = 0x13E60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E608u;
    // 0x13e60c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107730u, 0x13E608u, 0x13E610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E610u;
label_13e610:
    // 0x13e610: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13e610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13e614:
    // 0x13e614: 0x8e250054  lw          $a1, 0x54($s1)
    ctx->pc = 0x13e614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_13e618:
    // 0x13e618: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13e618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13e61c:
    // 0x13e61c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x13e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_13e620:
    // 0x13e620: 0x40f809  jalr        $v0
label_13e624:
    if (ctx->pc == 0x13E624u) {
        ctx->pc = 0x13E624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E620u;
        // 0x13e624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E628u;
        goto label_13e628;
    }
    ctx->pc = 0x13E620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13E628u);
        ctx->pc = 0x13E624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E620u;
        // 0x13e624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E620u, 0x13E628u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E628u;
label_13e628:
    // 0x13e628: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13e628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13e62c:
    // 0x13e62c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13e62cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13e630:
    // 0x13e630: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13e630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13e634:
    // 0x13e634: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13e634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13e638:
    // 0x13e638: 0x3e00008  jr          $ra
label_13e63c:
    if (ctx->pc == 0x13E63Cu) {
        ctx->pc = 0x13E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E638u;
        // 0x13e63c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E640u;
        goto label_fallthrough_0x13e638;
    }
    ctx->pc = 0x13E638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E638u;
        // 0x13e63c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13e638:
    ctx->pc = 0x13E640u;
}
