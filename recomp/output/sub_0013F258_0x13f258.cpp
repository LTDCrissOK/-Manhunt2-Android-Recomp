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

// Function: sub_0013F258
// Address: 0x13f258 - 0x13f2a0
void sub_0013F258_0x13f258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F258_0x13f258");
#endif

    switch (ctx->pc) {
        case 0x13f27cu: goto label_13f27c;
        case 0x13f28cu: goto label_13f28c;
        default: break;
    }

    ctx->pc = 0x13f258u;

    // 0x13f258: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13f258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13f25c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x13f25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x13f260: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13f260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13f264: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13f264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13f268: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13f268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f26c: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x13f26cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13f270: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13f270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13f274: 0xc04fe52  jal         func_13F948
    ctx->pc = 0x13F274u;
    SET_GPR_U32(ctx, 31, 0x13F27Cu);
    ctx->pc = 0x13F278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F274u;
    // 0x13f278: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F948u, 0x13F274u, 0x13F27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F27Cu;
label_13f27c:
    // 0x13f27c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13f27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f280: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13f280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f284: 0xc04d88a  jal         func_136228
    ctx->pc = 0x13F284u;
    SET_GPR_U32(ctx, 31, 0x13F28Cu);
    ctx->pc = 0x13F288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F284u;
    // 0x13f288: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136228u, 0x13F284u, 0x13F28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F28Cu;
label_13f28c:
    // 0x13f28c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13f28cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f290: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13f290u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13f294: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13f294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f298: 0x3e00008  jr          $ra
    ctx->pc = 0x13F298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F298u;
        // 0x13f29c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F2A0u;
}
