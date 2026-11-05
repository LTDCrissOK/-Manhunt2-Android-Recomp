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

// Function: sub_002CF5F8
// Address: 0x2cf5f8 - 0x2cf650
void sub_002CF5F8_0x2cf5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF5F8_0x2cf5f8");
#endif

    switch (ctx->pc) {
        case 0x2cf610u: goto label_2cf610;
        case 0x2cf63cu: goto label_2cf63c;
        default: break;
    }

    ctx->pc = 0x2cf5f8u;

    // 0x2cf5f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cf5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cf5fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cf5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cf600: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cf600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf604: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2cf604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2cf608: 0xc0b3afe  jal         func_2CEBF8
    ctx->pc = 0x2CF608u;
    SET_GPR_U32(ctx, 31, 0x2CF610u);
    ctx->pc = 0x2CF60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF608u;
    // 0x2cf60c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CEBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEBF8u, 0x2CF608u, 0x2CF610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF610u;
label_2cf610:
    // 0x2cf610: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2cf610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2cf614: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2cf614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2cf618: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x2cf618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x2cf61c: 0x3484b410  ori         $a0, $a0, 0xB410
    ctx->pc = 0x2cf61cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46096);
    // 0x2cf620: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2cf620u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0)); // MMIO: 0x1000b420
    // 0x2cf624: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2cf624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2cf628: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2cf628u;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 0)); // MMIO: 0x1000b410
    // 0x2cf62c: 0x3442b430  ori         $v0, $v0, 0xB430
    ctx->pc = 0x2cf62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46128);
    // 0x2cf630: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2cf630u;
    runtime->Store32(rdram, ctx, 0x1000B430u, GPR_U32(ctx, 0)); // MMIO: 0x1000b430
    // 0x2cf634: 0xc0f266c  jal         func_3C99B0
    ctx->pc = 0x2CF634u;
    SET_GPR_U32(ctx, 31, 0x2CF63Cu);
    ctx->pc = 0x2CF638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF634u;
    // 0x2cf638: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99B0u, 0x2CF634u, 0x2CF63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF63Cu;
label_2cf63c:
    // 0x2cf63c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cf63cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf640: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cf640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf644: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2cf644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cf648: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF648u;
        // 0x2cf64c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF650u;
}
