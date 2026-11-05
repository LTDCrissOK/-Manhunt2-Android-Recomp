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

// Function: sub_003714D8
// Address: 0x3714d8 - 0x371528
void sub_003714D8_0x3714d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003714D8_0x3714d8");
#endif

    switch (ctx->pc) {
        case 0x371500u: goto label_371500;
        default: break;
    }

    ctx->pc = 0x3714d8u;

    // 0x3714d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3714d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3714dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3714dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3714e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3714e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3714e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3714e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3714e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3714e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3714ec: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x3714ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3714f0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x3714f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3714f4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x3714f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x3714f8: 0xc0dc346  jal         func_370D18
    ctx->pc = 0x3714F8u;
    SET_GPR_U32(ctx, 31, 0x371500u);
    ctx->pc = 0x3714FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3714F8u;
    // 0x3714fc: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370D18u, 0x3714F8u, 0x371500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371500u;
label_371500:
    // 0x371500: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x371500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371504: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x371504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x371508: 0x2483ffc0  addiu       $v1, $a0, -0x40
    ctx->pc = 0x371508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
    // 0x37150c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x37150cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371510: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x371510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x371514: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x371514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x371518: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x371518u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37151c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x37151cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x371520: 0x3e00008  jr          $ra
    ctx->pc = 0x371520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371520u;
        // 0x371524: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371528u;
}
