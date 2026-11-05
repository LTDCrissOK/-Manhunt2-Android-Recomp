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

// Function: sub_00100010
// Address: 0x100010 - 0x100070
void sub_00100010_0x100010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100010_0x100010");
#endif

    switch (ctx->pc) {
        case 0x100038u: goto label_100038;
        case 0x100054u: goto label_100054;
        default: break;
    }

    ctx->pc = 0x100010u;

    // 0x100010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x100010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x100014: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x100014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x100018: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x100018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10001c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10001cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100020: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x100024: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x100024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x100028: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x100028u;
    {
        const bool branch_taken_0x100028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100028u;
        // 0x10002c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100028) {
            ctx->pc = 0x100040u;
            goto label_100040;
        }
    }
    ctx->pc = 0x100030u;
    // 0x100030: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x100030u;
    SET_GPR_U32(ctx, 31, 0x100038u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x100030u, 0x100038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100038u;
label_100038:
    // 0x100038: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x100038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x10003c: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x10003cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_100040:
    // 0x100040: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x100040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x100044: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x100044u;
    {
        const bool branch_taken_0x100044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100044) {
            ctx->pc = 0x100048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100044u;
            // 0x100048: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100058u;
            goto label_100058;
        }
    }
    ctx->pc = 0x10004Cu;
    // 0x10004c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x10004Cu;
    SET_GPR_U32(ctx, 31, 0x100054u);
    ctx->pc = 0x100050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10004Cu;
    // 0x100050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x10004Cu, 0x100054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100054u;
label_100054:
    // 0x100054: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x100054u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_100058:
    // 0x100058: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x100058u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10005c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10005cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100060: 0x3e00008  jr          $ra
    ctx->pc = 0x100060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100060u;
        // 0x100064: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100068u;
    // 0x100068: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x100068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10006c: 0x0  nop
    ctx->pc = 0x10006cu;
    // NOP
    ctx->pc = 0x100070u;
}
