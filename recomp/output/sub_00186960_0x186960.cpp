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

// Function: sub_00186960
// Address: 0x186960 - 0x1869e8
void sub_00186960_0x186960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186960_0x186960");
#endif

    switch (ctx->pc) {
        case 0x186974u: goto label_186974;
        default: break;
    }

    ctx->pc = 0x186960u;

    // 0x186960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x186964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x186964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x186968: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x186968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x18696c: 0xc061a32  jal         func_1868C8
    ctx->pc = 0x18696Cu;
    SET_GPR_U32(ctx, 31, 0x186974u);
    ctx->pc = 0x186970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18696Cu;
    // 0x186970: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868C8u, 0x18696Cu, 0x186974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186974u;
label_186974:
    // 0x186974: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x186974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x186978: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x186978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x18697c: 0x24630fa0  addiu       $v1, $v1, 0xFA0
    ctx->pc = 0x18697cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4000));
    // 0x186980: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x186980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x186984: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x186984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x186988: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x186988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18698c: 0xae050050  sw          $a1, 0x50($s0)
    ctx->pc = 0x18698cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 5));
    // 0x186990: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x186990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x186994: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x186994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x186998: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x186998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x18699c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x18699cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1869a0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1869a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1869a4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1869a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1869a8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1869a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1869ac: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1869acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1869b0: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1869b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1869b4: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1869b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1869b8: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1869b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1869bc: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1869bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1869c0: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1869c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1869c4: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1869c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1869c8: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x1869c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x1869cc: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1869ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1869d0: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x1869d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x1869d4: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x1869d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x1869d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1869d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1869dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1869dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1869e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1869E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1869E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1869E0u;
        // 0x1869e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1869E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1869E8u;
}
