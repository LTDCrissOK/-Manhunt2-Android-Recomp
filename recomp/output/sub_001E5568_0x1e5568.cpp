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

// Function: sub_001E5568
// Address: 0x1e5568 - 0x1e55f0
void sub_001E5568_0x1e5568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5568_0x1e5568");
#endif

    switch (ctx->pc) {
        case 0x1e5590u: goto label_1e5590;
        default: break;
    }

    ctx->pc = 0x1e5568u;

    // 0x1e5568: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x1e5568u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x1e556c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e556cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5570: 0x8cc291d8  lw          $v0, -0x6E28($a2)
    ctx->pc = 0x1e5570u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F91D8u));
    // 0x1e5574: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1E5574u;
    {
        const bool branch_taken_0x1e5574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5574u;
        // 0x1e5578: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5574) {
            ctx->pc = 0x1E55E8u;
            goto label_1e55e8;
        }
    }
    ctx->pc = 0x1E557Cu;
    // 0x1e557c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1e557cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1e5580: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x1e5580u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x1e5584: 0xc440d914  lwc1        $f0, -0x26EC($v0)
    ctx->pc = 0x1e5584u;
    { uint32_t bits = FAST_READ32(0x45D914u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5588: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1e5588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e558c: 0x8d0491d4  lw          $a0, -0x6E2C($t0)
    ctx->pc = 0x1e558cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3F91D4u));
label_1e5590:
    // 0x1e5590: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1e5590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e5594: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e5594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e5598: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e5598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e559c: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x1e559cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x1e55a0: 0x7c600010  sq          $zero, 0x10($v1)
    ctx->pc = 0x1e55a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 0));
    // 0x1e55a4: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x1e55a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
    // 0x1e55a8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1e55a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1e55ac: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1e55acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x1e55b0: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x1e55b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x1e55b4: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x1e55b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x1e55b8: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x1e55b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x1e55bc: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x1e55bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x1e55c0: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x1e55c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x1e55c4: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1e55c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1e55c8: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x1e55c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x1e55cc: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x1e55ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x1e55d0: 0xac670044  sw          $a3, 0x44($v1)
    ctx->pc = 0x1e55d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 7));
    // 0x1e55d4: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x1e55d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
    // 0x1e55d8: 0x8cc291d8  lw          $v0, -0x6E28($a2)
    ctx->pc = 0x1e55d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294939096)));
    // 0x1e55dc: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1e55dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e55e0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1E55E0u;
    {
        const bool branch_taken_0x1e55e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E55E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E55E0u;
        // 0x1e55e4: 0x8d0491d4  lw          $a0, -0x6E2C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294939092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e55e0) {
            ctx->pc = 0x1E5590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5590;
        }
    }
    ctx->pc = 0x1E55E8u;
label_1e55e8:
    // 0x1e55e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E55E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E55ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E55E8u;
        // 0x1e55ec: 0xad2091d8  sw          $zero, -0x6E28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4294939096), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E55E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E55F0u;
}
