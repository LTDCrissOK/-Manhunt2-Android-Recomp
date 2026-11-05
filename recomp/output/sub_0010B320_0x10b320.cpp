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

// Function: sub_0010B320
// Address: 0x10b320 - 0x10b368
void sub_0010B320_0x10b320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B320_0x10b320");
#endif

    switch (ctx->pc) {
        case 0x10b33cu: goto label_10b33c;
        case 0x10b354u: goto label_10b354;
        default: break;
    }

    ctx->pc = 0x10b320u;

    // 0x10b320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b324: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b328: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10b328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10b32c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b32cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b330: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10b330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10b334: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10B334u;
    SET_GPR_U32(ctx, 31, 0x10B33Cu);
    ctx->pc = 0x10B338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B334u;
    // 0x10b338: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10B334u, 0x10B33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B33Cu;
label_10b33c:
    // 0x10b33c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10b340: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10b340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b344: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x10b344u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10b348: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10b348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10b34c: 0xc0442f2  jal         func_110BC8
    ctx->pc = 0x10B34Cu;
    SET_GPR_U32(ctx, 31, 0x10B354u);
    ctx->pc = 0x10B350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B34Cu;
    // 0x10b350: 0x8c44001c  lw          $a0, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110BC8u, 0x10B34Cu, 0x10B354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B354u;
label_10b354:
    // 0x10b354: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b354u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b358: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10b358u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b35c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10b35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b360: 0x3e00008  jr          $ra
    ctx->pc = 0x10B360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B360u;
        // 0x10b364: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B368u;
}
