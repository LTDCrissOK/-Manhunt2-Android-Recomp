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

// Function: sub_001362D0
// Address: 0x1362d0 - 0x136358
void sub_001362D0_0x1362d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001362D0_0x1362d0");
#endif

    ctx->pc = 0x1362d0u;

    // 0x1362d0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1362d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1362d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1362d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1362d8: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x1362d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1362dc: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1362dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1362e0: 0xa43821  addu        $a3, $a1, $a0
    ctx->pc = 0x1362e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1362e4: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x1362e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x1362e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1362e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1362ec: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x1362ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x1362f0: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1362f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1362f4: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x1362f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x1362f8: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1362f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1362fc: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1362fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x136300: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x136300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136304: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x136304u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x136308: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x136308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13630c: 0xacc00024  sw          $zero, 0x24($a2)
    ctx->pc = 0x13630cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 0));
    // 0x136310: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x136310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136314: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x136314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x136318: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x136318u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x13631c: 0xacc00030  sw          $zero, 0x30($a2)
    ctx->pc = 0x13631cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 0));
    // 0x136320: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x136320u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x136324: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x136324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136328: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x136328u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x13632c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x13632cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x136330: 0xacc2003c  sw          $v0, 0x3C($a2)
    ctx->pc = 0x136330u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 2));
    // 0x136334: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x136334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x136338: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x136338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13633c: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x13633cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x136340: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x136340u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136344: 0xacc00044  sw          $zero, 0x44($a2)
    ctx->pc = 0x136344u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 0));
    // 0x136348: 0xace00048  sw          $zero, 0x48($a3)
    ctx->pc = 0x136348u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 0));
    // 0x13634c: 0x3e00008  jr          $ra
    ctx->pc = 0x13634Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13634Cu;
        // 0x136350: 0xac80004c  sw          $zero, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13634Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136354u;
    // 0x136354: 0x0  nop
    ctx->pc = 0x136354u;
    // NOP
    ctx->pc = 0x136358u;
}
