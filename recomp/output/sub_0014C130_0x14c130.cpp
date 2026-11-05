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

// Function: sub_0014C130
// Address: 0x14c130 - 0x14c188
void sub_0014C130_0x14c130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C130_0x14c130");
#endif

    switch (ctx->pc) {
        case 0x14c17cu: goto label_14c17c;
        default: break;
    }

    ctx->pc = 0x14c130u;

    // 0x14c130: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14c130u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14c134: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x14c134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x14c138: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x14c138u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14c13c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x14c13cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14c140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14c144: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x14c144u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14c148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14c148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14c14c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x14c14cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14c150: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x14c150u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14c154: 0xacc904e0  sw          $t1, 0x4E0($a2)
    ctx->pc = 0x14c154u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1248), GPR_U32(ctx, 9));
    // 0x14c158: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x14c158u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c15c: 0xace004e4  sw          $zero, 0x4E4($a3)
    ctx->pc = 0x14c15cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1252), GPR_U32(ctx, 0));
    // 0x14c160: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x14c160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c164: 0xad0004e8  sw          $zero, 0x4E8($t0)
    ctx->pc = 0x14c164u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1256), GPR_U32(ctx, 0));
    // 0x14c168: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x14c168u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c16c: 0xacc004ec  sw          $zero, 0x4EC($a2)
    ctx->pc = 0x14c16cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1260), GPR_U32(ctx, 0));
    // 0x14c170: 0xa0e004f0  sb          $zero, 0x4F0($a3)
    ctx->pc = 0x14c170u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1264), (uint8_t)GPR_U32(ctx, 0));
    // 0x14c174: 0xc04d8b4  jal         func_1362D0
    ctx->pc = 0x14C174u;
    SET_GPR_U32(ctx, 31, 0x14C17Cu);
    ctx->pc = 0x14C178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C174u;
    // 0x14c178: 0xac4004f4  sw          $zero, 0x4F4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1268), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1362D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362D0u, 0x14C174u, 0x14C17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C17Cu;
label_14c17c:
    // 0x14c17c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14c17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c180: 0x3e00008  jr          $ra
    ctx->pc = 0x14C180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C180u;
        // 0x14c184: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C188u;
}
