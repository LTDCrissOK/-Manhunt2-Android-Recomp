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

// Function: sub_00136228
// Address: 0x136228 - 0x136268
void sub_00136228_0x136228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136228_0x136228");
#endif

    switch (ctx->pc) {
        case 0x136248u: goto label_136248;
        case 0x136254u: goto label_136254;
        default: break;
    }

    ctx->pc = 0x136228u;

    // 0x136228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x136228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13622c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13622cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x136230: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x136230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x136234: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x136234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136238: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x136238u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13623c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13623cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x136240: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x136240u;
    SET_GPR_U32(ctx, 31, 0x136248u);
    ctx->pc = 0x136244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136240u;
    // 0x136244: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x136240u, 0x136248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136248u;
label_136248:
    // 0x136248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13624c: 0xc04d8f2  jal         func_1363C8
    ctx->pc = 0x13624Cu;
    SET_GPR_U32(ctx, 31, 0x136254u);
    ctx->pc = 0x136250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13624Cu;
    // 0x136250: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363C8u, 0x13624Cu, 0x136254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136254u;
label_136254:
    // 0x136254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x136254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136258: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x136258u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13625c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13625cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136260: 0x3e00008  jr          $ra
    ctx->pc = 0x136260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136260u;
        // 0x136264: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136268u;
}
