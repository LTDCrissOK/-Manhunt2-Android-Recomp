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

// Function: sub_002AC558
// Address: 0x2ac558 - 0x2ac5a8
void sub_002AC558_0x2ac558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC558_0x2ac558");
#endif

    switch (ctx->pc) {
        case 0x2ac598u: goto label_2ac598;
        default: break;
    }

    ctx->pc = 0x2ac558u;

    // 0x2ac558: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2ac558u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2ac55c: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2ac55cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x2ac560: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2ac560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2ac564: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x2ac564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
    // 0x2ac568: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ac568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ac56c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2ac56cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2ac570: 0x24422508  addiu       $v0, $v0, 0x2508
    ctx->pc = 0x2ac570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9480));
    // 0x2ac574: 0x34842dc0  ori         $a0, $a0, 0x2DC0
    ctx->pc = 0x2ac574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)11712);
    // 0x2ac578: 0xaca02c14  sw          $zero, 0x2C14($a1)
    ctx->pc = 0x2ac578u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482C14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482C14u, _value); } while (0);
    // 0x2ac57c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2ac57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ac580: 0xa0c02c0c  sb          $zero, 0x2C0C($a2)
    ctx->pc = 0x2ac580u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482C0Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x482C0Cu, _value); } while (0);
    // 0x2ac584: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ac584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac588: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ac58c: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x2ac58cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2ac590: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x2AC590u;
    SET_GPR_U32(ctx, 31, 0x2AC598u);
    ctx->pc = 0x2AC594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC590u;
    // 0x2ac594: 0xac602c18  sw          $zero, 0x2C18($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 11288), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x2AC590u, 0x2AC598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC598u;
label_2ac598:
    // 0x2ac598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac59c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC59Cu;
        // 0x2ac5a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC5A4u;
    // 0x2ac5a4: 0x0  nop
    ctx->pc = 0x2ac5a4u;
    // NOP
    ctx->pc = 0x2ac5a8u;
}
