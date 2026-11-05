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

// Function: sub_0037B668
// Address: 0x37b668 - 0x37b6b8
void sub_0037B668_0x37b668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B668_0x37b668");
#endif

    switch (ctx->pc) {
        case 0x37b690u: goto label_37b690;
        case 0x37b6a4u: goto label_37b6a4;
        default: break;
    }

    ctx->pc = 0x37b668u;

    // 0x37b668: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37b668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37b66c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37b66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x37b670: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x37b670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x37b674: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37b674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b678: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37b678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37b67c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x37b67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37b680: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37B680u;
    {
        const bool branch_taken_0x37b680 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B680u;
        // 0x37b684: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b680) {
            ctx->pc = 0x37B690u;
            goto label_37b690;
        }
    }
    ctx->pc = 0x37B688u;
    // 0x37b688: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x37B688u;
    SET_GPR_U32(ctx, 31, 0x37B690u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x37B688u, 0x37B690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B690u;
label_37b690:
    // 0x37b690: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x37b690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x37b694: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x37B694u;
    {
        const bool branch_taken_0x37b694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b694) {
            ctx->pc = 0x37B698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37B694u;
            // 0x37b698: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37B6A8u;
            goto label_37b6a8;
        }
    }
    ctx->pc = 0x37B69Cu;
    // 0x37b69c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x37B69Cu;
    SET_GPR_U32(ctx, 31, 0x37B6A4u);
    ctx->pc = 0x37B6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B69Cu;
    // 0x37b6a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x37B69Cu, 0x37B6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B6A4u;
label_37b6a4:
    // 0x37b6a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37b6a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_37b6a8:
    // 0x37b6a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x37b6a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37b6ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37b6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x37B6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B6B0u;
        // 0x37b6b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B6B8u;
}
