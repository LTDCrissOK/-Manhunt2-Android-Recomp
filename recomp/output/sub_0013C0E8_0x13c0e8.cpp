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

// Function: sub_0013C0E8
// Address: 0x13c0e8 - 0x13c130
void sub_0013C0E8_0x13c0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C0E8_0x13c0e8");
#endif

    switch (ctx->pc) {
        case 0x13c10cu: goto label_13c10c;
        default: break;
    }

    ctx->pc = 0x13c0e8u;

    // 0x13c0e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13c0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13c0ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13c0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13c0f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x13c0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13c0f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13c0f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c0f8: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x13c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x13c0fc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x13C0FCu;
    {
        const bool branch_taken_0x13c0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c0fc) {
            ctx->pc = 0x13C100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C0FCu;
            // 0x13c100: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C124u;
            goto label_13c124;
        }
    }
    ctx->pc = 0x13C104u;
    // 0x13c104: 0xc04f740  jal         func_13DD00
    ctx->pc = 0x13C104u;
    SET_GPR_U32(ctx, 31, 0x13C10Cu);
    ctx->pc = 0x13DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD00u, 0x13C104u, 0x13C10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C10Cu;
label_13c10c:
    // 0x13c10c: 0xae000224  sw          $zero, 0x224($s0)
    ctx->pc = 0x13c10cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
    // 0x13c110: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x13c110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
    // 0x13c114: 0xae000218  sw          $zero, 0x218($s0)
    ctx->pc = 0x13c114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 0));
    // 0x13c118: 0xae00021c  sw          $zero, 0x21C($s0)
    ctx->pc = 0x13c118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 0));
    // 0x13c11c: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x13c11cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x13c120: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13c120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13c124:
    // 0x13c124: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x13c124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13c128: 0x3e00008  jr          $ra
    ctx->pc = 0x13C128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C128u;
        // 0x13c12c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C130u;
}
