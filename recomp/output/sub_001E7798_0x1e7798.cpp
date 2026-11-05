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

// Function: sub_001E7798
// Address: 0x1e7798 - 0x1e7820
void sub_001E7798_0x1e7798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7798_0x1e7798");
#endif

    switch (ctx->pc) {
        case 0x1e77c0u: goto label_1e77c0;
        default: break;
    }

    ctx->pc = 0x1e7798u;

    // 0x1e7798: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x1e7798u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x1e779c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e779cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e77a0: 0x8cc291f0  lw          $v0, -0x6E10($a2)
    ctx->pc = 0x1e77a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F91F0u));
    // 0x1e77a4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1E77A4u;
    {
        const bool branch_taken_0x1e77a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E77A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E77A4u;
        // 0x1e77a8: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e77a4) {
            ctx->pc = 0x1E7818u;
            goto label_1e7818;
        }
    }
    ctx->pc = 0x1E77ACu;
    // 0x1e77ac: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1e77acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1e77b0: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x1e77b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x1e77b4: 0xc440d96c  lwc1        $f0, -0x2694($v0)
    ctx->pc = 0x1e77b4u;
    { uint32_t bits = FAST_READ32(0x45D96Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e77b8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1e77b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e77bc: 0x8d0491ec  lw          $a0, -0x6E14($t0)
    ctx->pc = 0x1e77bcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3F91ECu));
label_1e77c0:
    // 0x1e77c0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1e77c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e77c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e77c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e77c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e77c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e77cc: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x1e77ccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x1e77d0: 0x7c600010  sq          $zero, 0x10($v1)
    ctx->pc = 0x1e77d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 0));
    // 0x1e77d4: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x1e77d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
    // 0x1e77d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1e77d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1e77dc: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1e77dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x1e77e0: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x1e77e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x1e77e4: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x1e77e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x1e77e8: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x1e77e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x1e77ec: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x1e77ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x1e77f0: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x1e77f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x1e77f4: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1e77f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1e77f8: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x1e77f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x1e77fc: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x1e77fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x1e7800: 0xac670044  sw          $a3, 0x44($v1)
    ctx->pc = 0x1e7800u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 7));
    // 0x1e7804: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x1e7804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
    // 0x1e7808: 0x8cc291f0  lw          $v0, -0x6E10($a2)
    ctx->pc = 0x1e7808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294939120)));
    // 0x1e780c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1e780cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e7810: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1E7810u;
    {
        const bool branch_taken_0x1e7810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7810u;
        // 0x1e7814: 0x8d0491ec  lw          $a0, -0x6E14($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294939116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7810) {
            ctx->pc = 0x1E77C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e77c0;
        }
    }
    ctx->pc = 0x1E7818u;
label_1e7818:
    // 0x1e7818: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7818u;
        // 0x1e781c: 0xad2091f0  sw          $zero, -0x6E10($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4294939120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7820u;
}
