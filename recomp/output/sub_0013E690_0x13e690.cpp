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

// Function: sub_0013E690
// Address: 0x13e690 - 0x13e6e0
void sub_0013E690_0x13e690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E690_0x13e690");
#endif

    switch (ctx->pc) {
        case 0x13e690u: goto label_13e690;
        case 0x13e694u: goto label_13e694;
        case 0x13e698u: goto label_13e698;
        case 0x13e69cu: goto label_13e69c;
        case 0x13e6a0u: goto label_13e6a0;
        case 0x13e6a4u: goto label_13e6a4;
        case 0x13e6a8u: goto label_13e6a8;
        case 0x13e6acu: goto label_13e6ac;
        case 0x13e6b0u: goto label_13e6b0;
        case 0x13e6b4u: goto label_13e6b4;
        case 0x13e6b8u: goto label_13e6b8;
        case 0x13e6bcu: goto label_13e6bc;
        case 0x13e6c0u: goto label_13e6c0;
        case 0x13e6c4u: goto label_13e6c4;
        case 0x13e6c8u: goto label_13e6c8;
        case 0x13e6ccu: goto label_13e6cc;
        case 0x13e6d0u: goto label_13e6d0;
        case 0x13e6d4u: goto label_13e6d4;
        case 0x13e6d8u: goto label_13e6d8;
        case 0x13e6dcu: goto label_13e6dc;
        default: break;
    }

    ctx->pc = 0x13e690u;

label_13e690:
    // 0x13e690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13e694:
    // 0x13e694: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13e694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13e698:
    // 0x13e698: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13e698u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13e69c:
    // 0x13e69c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13e69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13e6a0:
    // 0x13e6a0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13e6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13e6a4:
    // 0x13e6a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13e6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13e6a8:
    // 0x13e6a8: 0xc041dbc  jal         func_1076F0
label_13e6ac:
    if (ctx->pc == 0x13E6ACu) {
        ctx->pc = 0x13E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E6A8u;
        // 0x13e6ac: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E6B0u;
        goto label_13e6b0;
    }
    ctx->pc = 0x13E6A8u;
    SET_GPR_U32(ctx, 31, 0x13E6B0u);
    ctx->pc = 0x13E6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E6A8u;
    // 0x13e6ac: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1076F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1076F0u, 0x13E6A8u, 0x13E6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E6B0u;
label_13e6b0:
    // 0x13e6b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13e6b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13e6b4:
    // 0x13e6b4: 0x8e250054  lw          $a1, 0x54($s1)
    ctx->pc = 0x13e6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_13e6b8:
    // 0x13e6b8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13e6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13e6bc:
    // 0x13e6bc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x13e6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_13e6c0:
    // 0x13e6c0: 0x40f809  jalr        $v0
label_13e6c4:
    if (ctx->pc == 0x13E6C4u) {
        ctx->pc = 0x13E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E6C0u;
        // 0x13e6c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E6C8u;
        goto label_13e6c8;
    }
    ctx->pc = 0x13E6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13E6C8u);
        ctx->pc = 0x13E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E6C0u;
        // 0x13e6c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E6C0u, 0x13E6C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E6C8u;
label_13e6c8:
    // 0x13e6c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13e6c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13e6cc:
    // 0x13e6cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13e6ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13e6d0:
    // 0x13e6d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13e6d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13e6d4:
    // 0x13e6d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13e6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13e6d8:
    // 0x13e6d8: 0x3e00008  jr          $ra
label_13e6dc:
    if (ctx->pc == 0x13E6DCu) {
        ctx->pc = 0x13E6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E6D8u;
        // 0x13e6dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E6E0u;
        goto label_fallthrough_0x13e6d8;
    }
    ctx->pc = 0x13E6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E6D8u;
        // 0x13e6dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13e6d8:
    ctx->pc = 0x13E6E0u;
}
