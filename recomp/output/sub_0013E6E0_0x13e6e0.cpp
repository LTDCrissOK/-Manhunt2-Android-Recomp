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

// Function: sub_0013E6E0
// Address: 0x13e6e0 - 0x13e730
void sub_0013E6E0_0x13e6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E6E0_0x13e6e0");
#endif

    switch (ctx->pc) {
        case 0x13e6e0u: goto label_13e6e0;
        case 0x13e6e4u: goto label_13e6e4;
        case 0x13e6e8u: goto label_13e6e8;
        case 0x13e6ecu: goto label_13e6ec;
        case 0x13e6f0u: goto label_13e6f0;
        case 0x13e6f4u: goto label_13e6f4;
        case 0x13e6f8u: goto label_13e6f8;
        case 0x13e6fcu: goto label_13e6fc;
        case 0x13e700u: goto label_13e700;
        case 0x13e704u: goto label_13e704;
        case 0x13e708u: goto label_13e708;
        case 0x13e70cu: goto label_13e70c;
        case 0x13e710u: goto label_13e710;
        case 0x13e714u: goto label_13e714;
        case 0x13e718u: goto label_13e718;
        case 0x13e71cu: goto label_13e71c;
        case 0x13e720u: goto label_13e720;
        case 0x13e724u: goto label_13e724;
        case 0x13e728u: goto label_13e728;
        case 0x13e72cu: goto label_13e72c;
        default: break;
    }

    ctx->pc = 0x13e6e0u;

label_13e6e0:
    // 0x13e6e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13e6e4:
    // 0x13e6e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13e6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13e6e8:
    // 0x13e6e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13e6e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13e6ec:
    // 0x13e6ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13e6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13e6f0:
    // 0x13e6f0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13e6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13e6f4:
    // 0x13e6f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13e6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13e6f8:
    // 0x13e6f8: 0xc041dc4  jal         func_107710
label_13e6fc:
    if (ctx->pc == 0x13E6FCu) {
        ctx->pc = 0x13E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E6F8u;
        // 0x13e6fc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E700u;
        goto label_13e700;
    }
    ctx->pc = 0x13E6F8u;
    SET_GPR_U32(ctx, 31, 0x13E700u);
    ctx->pc = 0x13E6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E6F8u;
    // 0x13e6fc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107710u, 0x13E6F8u, 0x13E700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E700u;
label_13e700:
    // 0x13e700: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13e700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13e704:
    // 0x13e704: 0x8e250054  lw          $a1, 0x54($s1)
    ctx->pc = 0x13e704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_13e708:
    // 0x13e708: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13e708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13e70c:
    // 0x13e70c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x13e70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_13e710:
    // 0x13e710: 0x40f809  jalr        $v0
label_13e714:
    if (ctx->pc == 0x13E714u) {
        ctx->pc = 0x13E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E710u;
        // 0x13e714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E718u;
        goto label_13e718;
    }
    ctx->pc = 0x13E710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13E718u);
        ctx->pc = 0x13E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E710u;
        // 0x13e714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E710u, 0x13E718u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E718u;
label_13e718:
    // 0x13e718: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13e718u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13e71c:
    // 0x13e71c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13e71cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13e720:
    // 0x13e720: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13e720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13e724:
    // 0x13e724: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13e724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13e728:
    // 0x13e728: 0x3e00008  jr          $ra
label_13e72c:
    if (ctx->pc == 0x13E72Cu) {
        ctx->pc = 0x13E72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E728u;
        // 0x13e72c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E730u;
        goto label_fallthrough_0x13e728;
    }
    ctx->pc = 0x13E728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E728u;
        // 0x13e72c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13e728:
    ctx->pc = 0x13E730u;
}
