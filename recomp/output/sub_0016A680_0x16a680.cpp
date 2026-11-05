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

// Function: sub_0016A680
// Address: 0x16a680 - 0x16a6f8
void sub_0016A680_0x16a680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A680_0x16a680");
#endif

    switch (ctx->pc) {
        case 0x16a698u: goto label_16a698;
        case 0x16a6d0u: goto label_16a6d0;
        case 0x16a6e0u: goto label_16a6e0;
        default: break;
    }

    ctx->pc = 0x16a680u;

    // 0x16a680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a684: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16a684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16a688: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a68c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16a68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16a690: 0xc05a964  jal         func_16A590
    ctx->pc = 0x16A690u;
    SET_GPR_U32(ctx, 31, 0x16A698u);
    ctx->pc = 0x16A694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A690u;
    // 0x16a694: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A590u, 0x16A690u, 0x16A698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A698u;
label_16a698:
    // 0x16a698: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x16A698u;
    {
        const bool branch_taken_0x16a698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A698u;
        // 0x16a69c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a698) {
            ctx->pc = 0x16A6E8u;
            goto label_16a6e8;
        }
    }
    ctx->pc = 0x16A6A0u;
    // 0x16a6a0: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x16a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x16a6a4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16A6A4u;
    {
        const bool branch_taken_0x16a6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A6A4u;
        // 0x16a6a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a6a4) {
            ctx->pc = 0x16A6E8u;
            goto label_16a6e8;
        }
    }
    ctx->pc = 0x16A6ACu;
    // 0x16a6ac: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x16a6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16a6b0: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x16a6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
    // 0x16a6b4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x16A6B4u;
    {
        const bool branch_taken_0x16a6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A6B4u;
        // 0x16a6b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a6b4) {
            ctx->pc = 0x16A6E8u;
            goto label_16a6e8;
        }
    }
    ctx->pc = 0x16A6BCu;
    // 0x16a6bc: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x16a6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
    // 0x16a6c0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16A6C0u;
    {
        const bool branch_taken_0x16a6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A6C0u;
        // 0x16a6c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a6c0) {
            ctx->pc = 0x16A6E8u;
            goto label_16a6e8;
        }
    }
    ctx->pc = 0x16A6C8u;
    // 0x16a6c8: 0xc05abe0  jal         func_16AF80
    ctx->pc = 0x16A6C8u;
    SET_GPR_U32(ctx, 31, 0x16A6D0u);
    ctx->pc = 0x16A6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A6C8u;
    // 0x16a6cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AF80u, 0x16A6C8u, 0x16A6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A6D0u;
label_16a6d0:
    // 0x16a6d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16a6d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a6d4: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x16a6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x16a6d8: 0xc046304  jal         func_118C10
    ctx->pc = 0x16A6D8u;
    SET_GPR_U32(ctx, 31, 0x16A6E0u);
    ctx->pc = 0x16A6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A6D8u;
    // 0x16a6dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118C10u, 0x16A6D8u, 0x16A6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A6E0u;
label_16a6e0:
    // 0x16a6e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16a6e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a6e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a6e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16a6e8:
    // 0x16a6e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16a6e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a6ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16a6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a6f0: 0x3e00008  jr          $ra
    ctx->pc = 0x16A6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A6F0u;
        // 0x16a6f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A6F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A6F8u;
}
