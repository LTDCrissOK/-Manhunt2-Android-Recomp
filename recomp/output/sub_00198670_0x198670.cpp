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

// Function: sub_00198670
// Address: 0x198670 - 0x1986b8
void sub_00198670_0x198670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198670_0x198670");
#endif

    ctx->pc = 0x198670u;

    // 0x198670: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x198670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x198674: 0x14a2000e  bne         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x198674u;
    {
        const bool branch_taken_0x198674 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x198674) {
            ctx->pc = 0x1986B0u;
            goto label_1986b0;
        }
    }
    ctx->pc = 0x19867Cu;
    // 0x19867c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x19867Cu;
    {
        const bool branch_taken_0x19867c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x198680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19867Cu;
        // 0x198680: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19867c) {
            ctx->pc = 0x1986B0u;
            goto label_1986b0;
        }
    }
    ctx->pc = 0x198684u;
    // 0x198684: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x198684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0x198688: 0x2482efc8  addiu       $v0, $a0, -0x1038
    ctx->pc = 0x198688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963144));
    // 0x19868c: 0xac80efc8  sw          $zero, -0x1038($a0)
    ctx->pc = 0x19868cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294963144), GPR_U32(ctx, 0));
    // 0x198690: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x198690u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x198694: 0x24a3efd8  addiu       $v1, $a1, -0x1028
    ctx->pc = 0x198694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963160));
    // 0x198698: 0xaca0efd8  sw          $zero, -0x1028($a1)
    ctx->pc = 0x198698u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48EFD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48EFD8u, _value); } while (0);
    // 0x19869c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x19869cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48EFE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48EFE4u, _value); } while (0);
    // 0x1986a0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1986a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1986a4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1986a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1986a8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1986a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48EFDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48EFDCu, _value); } while (0);
    // 0x1986ac: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1986acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48EFE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48EFE0u, _value); } while (0);
label_1986b0:
    // 0x1986b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1986B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1986B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1986B8u;
}
