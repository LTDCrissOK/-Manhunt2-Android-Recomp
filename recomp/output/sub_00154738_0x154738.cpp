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

// Function: sub_00154738
// Address: 0x154738 - 0x154790
void sub_00154738_0x154738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154738_0x154738");
#endif

    switch (ctx->pc) {
        case 0x154780u: goto label_154780;
        default: break;
    }

    ctx->pc = 0x154738u;

    // 0x154738: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x154738u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15473c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x15473cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x154740: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x154740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x154744: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x154744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154748: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x154748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15474c: 0x24090009  addiu       $t1, $zero, 0x9
    ctx->pc = 0x15474cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x154750: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x154754: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x154754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x154758: 0xacc904e0  sw          $t1, 0x4E0($a2)
    ctx->pc = 0x154758u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1248), GPR_U32(ctx, 9));
    // 0x15475c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x15475cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154760: 0xace004e4  sw          $zero, 0x4E4($a3)
    ctx->pc = 0x154760u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1252), GPR_U32(ctx, 0));
    // 0x154764: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x154764u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154768: 0xad0004e8  sw          $zero, 0x4E8($t0)
    ctx->pc = 0x154768u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1256), GPR_U32(ctx, 0));
    // 0x15476c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x15476cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154770: 0xacc004ec  sw          $zero, 0x4EC($a2)
    ctx->pc = 0x154770u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1260), GPR_U32(ctx, 0));
    // 0x154774: 0xace004f0  sw          $zero, 0x4F0($a3)
    ctx->pc = 0x154774u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1264), GPR_U32(ctx, 0));
    // 0x154778: 0xc04d8b4  jal         func_1362D0
    ctx->pc = 0x154778u;
    SET_GPR_U32(ctx, 31, 0x154780u);
    ctx->pc = 0x15477Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154778u;
    // 0x15477c: 0xac4004f4  sw          $zero, 0x4F4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1268), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1362D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362D0u, 0x154778u, 0x154780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154780u;
label_154780:
    // 0x154780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154784: 0x3e00008  jr          $ra
    ctx->pc = 0x154784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154784u;
        // 0x154788: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15478Cu;
    // 0x15478c: 0x0  nop
    ctx->pc = 0x15478cu;
    // NOP
    ctx->pc = 0x154790u;
}
