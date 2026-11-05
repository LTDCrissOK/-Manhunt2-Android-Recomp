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

// Function: sub_002CA230
// Address: 0x2ca230 - 0x2ca270
void sub_002CA230_0x2ca230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA230_0x2ca230");
#endif

    switch (ctx->pc) {
        case 0x2ca254u: goto label_2ca254;
        case 0x2ca260u: goto label_2ca260;
        default: break;
    }

    ctx->pc = 0x2ca230u;

    // 0x2ca230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ca230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ca234: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ca234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ca238: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ca238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ca23c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ca23cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca240: 0x3c053fff  lui         $a1, 0x3FFF
    ctx->pc = 0x2ca240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16383 << 16));
    // 0x2ca244: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ca244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ca248: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2ca248u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2ca24c: 0xc0b287a  jal         func_2CA1E8
    ctx->pc = 0x2CA24Cu;
    SET_GPR_U32(ctx, 31, 0x2CA254u);
    ctx->pc = 0x2CA250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA24Cu;
    // 0x2ca250: 0x452824  and         $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA1E8u, 0x2CA24Cu, 0x2CA254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA254u;
label_2ca254:
    // 0x2ca254: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2ca254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2ca258: 0xc0b2872  jal         func_2CA1C8
    ctx->pc = 0x2CA258u;
    SET_GPR_U32(ctx, 31, 0x2CA260u);
    ctx->pc = 0x2CA25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA258u;
    // 0x2ca25c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA1C8u, 0x2CA258u, 0x2CA260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA260u;
label_2ca260:
    // 0x2ca260: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ca260u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca264: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ca264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ca268: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA268u;
        // 0x2ca26c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA270u;
}
