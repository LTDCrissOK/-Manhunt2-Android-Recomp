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

// Function: sub_0013E4B0
// Address: 0x13e4b0 - 0x13e500
void sub_0013E4B0_0x13e4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E4B0_0x13e4b0");
#endif

    switch (ctx->pc) {
        case 0x13e4b0u: goto label_13e4b0;
        case 0x13e4b4u: goto label_13e4b4;
        case 0x13e4b8u: goto label_13e4b8;
        case 0x13e4bcu: goto label_13e4bc;
        case 0x13e4c0u: goto label_13e4c0;
        case 0x13e4c4u: goto label_13e4c4;
        case 0x13e4c8u: goto label_13e4c8;
        case 0x13e4ccu: goto label_13e4cc;
        case 0x13e4d0u: goto label_13e4d0;
        case 0x13e4d4u: goto label_13e4d4;
        case 0x13e4d8u: goto label_13e4d8;
        case 0x13e4dcu: goto label_13e4dc;
        case 0x13e4e0u: goto label_13e4e0;
        case 0x13e4e4u: goto label_13e4e4;
        case 0x13e4e8u: goto label_13e4e8;
        case 0x13e4ecu: goto label_13e4ec;
        case 0x13e4f0u: goto label_13e4f0;
        case 0x13e4f4u: goto label_13e4f4;
        case 0x13e4f8u: goto label_13e4f8;
        case 0x13e4fcu: goto label_13e4fc;
        default: break;
    }

    ctx->pc = 0x13e4b0u;

label_13e4b0:
    // 0x13e4b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13e4b4:
    // 0x13e4b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13e4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13e4b8:
    // 0x13e4b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13e4b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13e4bc:
    // 0x13e4bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13e4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13e4c0:
    // 0x13e4c0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13e4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13e4c4:
    // 0x13e4c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13e4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13e4c8:
    // 0x13e4c8: 0xc041dd4  jal         func_107750
label_13e4cc:
    if (ctx->pc == 0x13E4CCu) {
        ctx->pc = 0x13E4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E4C8u;
        // 0x13e4cc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E4D0u;
        goto label_13e4d0;
    }
    ctx->pc = 0x13E4C8u;
    SET_GPR_U32(ctx, 31, 0x13E4D0u);
    ctx->pc = 0x13E4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E4C8u;
    // 0x13e4cc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107750u, 0x13E4C8u, 0x13E4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E4D0u;
label_13e4d0:
    // 0x13e4d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13e4d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13e4d4:
    // 0x13e4d4: 0x8e250054  lw          $a1, 0x54($s1)
    ctx->pc = 0x13e4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_13e4d8:
    // 0x13e4d8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13e4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13e4dc:
    // 0x13e4dc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x13e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_13e4e0:
    // 0x13e4e0: 0x40f809  jalr        $v0
label_13e4e4:
    if (ctx->pc == 0x13E4E4u) {
        ctx->pc = 0x13E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E4E0u;
        // 0x13e4e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E4E8u;
        goto label_13e4e8;
    }
    ctx->pc = 0x13E4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13E4E8u);
        ctx->pc = 0x13E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E4E0u;
        // 0x13e4e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E4E0u, 0x13E4E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E4E8u;
label_13e4e8:
    // 0x13e4e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13e4e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13e4ec:
    // 0x13e4ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13e4ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13e4f0:
    // 0x13e4f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13e4f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13e4f4:
    // 0x13e4f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13e4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13e4f8:
    // 0x13e4f8: 0x3e00008  jr          $ra
label_13e4fc:
    if (ctx->pc == 0x13E4FCu) {
        ctx->pc = 0x13E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E4F8u;
        // 0x13e4fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E500u;
        goto label_fallthrough_0x13e4f8;
    }
    ctx->pc = 0x13E4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E4F8u;
        // 0x13e4fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13e4f8:
    ctx->pc = 0x13E500u;
}
