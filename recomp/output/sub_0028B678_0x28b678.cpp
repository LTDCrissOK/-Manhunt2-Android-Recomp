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

// Function: sub_0028B678
// Address: 0x28b678 - 0x28b6d8
void sub_0028B678_0x28b678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B678_0x28b678");
#endif

    switch (ctx->pc) {
        case 0x28b6a8u: goto label_28b6a8;
        case 0x28b6b4u: goto label_28b6b4;
        case 0x28b6c4u: goto label_28b6c4;
        default: break;
    }

    ctx->pc = 0x28b678u;

    // 0x28b678: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28b678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28b67c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28b67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28b680: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28b680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28b684: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28b684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b688: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x28B688u;
    {
        const bool branch_taken_0x28b688 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B688u;
        // 0x28b68c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b688) {
            ctx->pc = 0x28B6B4u;
            goto label_28b6b4;
        }
    }
    ctx->pc = 0x28B690u;
    // 0x28b690: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x28b690u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x28b694: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28b694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b698: 0x2610ac88  addiu       $s0, $s0, -0x5378
    ctx->pc = 0x28b698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945928));
    // 0x28b69c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x28b69cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BACA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BACA8u, _value); } while (0);
    // 0x28b6a0: 0xc0976cc  jal         func_25DB30
    ctx->pc = 0x28B6A0u;
    SET_GPR_U32(ctx, 31, 0x28B6A8u);
    ctx->pc = 0x28B6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B6A0u;
    // 0x28b6a4: 0xae000128  sw          $zero, 0x128($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DB30u, 0x28B6A0u, 0x28B6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B6A8u;
label_28b6a8:
    // 0x28b6a8: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x28b6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x28b6ac: 0xc0a0c96  jal         func_283258
    ctx->pc = 0x28B6ACu;
    SET_GPR_U32(ctx, 31, 0x28B6B4u);
    ctx->pc = 0x28B6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B6ACu;
    // 0x28b6b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283258u, 0x28B6ACu, 0x28B6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B6B4u;
label_28b6b4:
    // 0x28b6b4: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x28b6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x28b6b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28b6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b6bc: 0xc0a8d56  jal         func_2A3558
    ctx->pc = 0x28B6BCu;
    SET_GPR_U32(ctx, 31, 0x28B6C4u);
    ctx->pc = 0x28B6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B6BCu;
    // 0x28b6c0: 0x2484f250  addiu       $a0, $a0, -0xDB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3558u, 0x28B6BCu, 0x28B6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B6C4u;
label_28b6c4:
    // 0x28b6c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28b6c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b6c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28b6c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28b6cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28b6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x28B6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B6D0u;
        // 0x28b6d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B6D8u;
}
