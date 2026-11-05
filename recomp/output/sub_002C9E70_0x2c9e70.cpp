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

// Function: sub_002C9E70
// Address: 0x2c9e70 - 0x2c9f10
void sub_002C9E70_0x2c9e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9E70_0x2c9e70");
#endif

    switch (ctx->pc) {
        case 0x2c9e94u: goto label_2c9e94;
        case 0x2c9ef8u: goto label_2c9ef8;
        default: break;
    }

    ctx->pc = 0x2c9e70u;

    // 0x2c9e70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c9e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c9e74: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2c9e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2c9e78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c9e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c9e7c: 0x8c62b420  lw          $v0, -0x4BE0($v1)
    ctx->pc = 0x2c9e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FB420u));
    // 0x2c9e80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c9e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9e84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9E84u;
    {
        const bool branch_taken_0x2c9e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9E84u;
        // 0x2c9e88: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9e84) {
            ctx->pc = 0x2C9E94u;
            goto label_2c9e94;
        }
    }
    ctx->pc = 0x2C9E8Cu;
    // 0x2c9e8c: 0xc0b277a  jal         func_2C9DE8
    ctx->pc = 0x2C9E8Cu;
    SET_GPR_U32(ctx, 31, 0x2C9E94u);
    ctx->pc = 0x2C9DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9DE8u, 0x2C9E8Cu, 0x2C9E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9E94u;
label_2c9e94:
    // 0x2c9e94: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9E94u;
    {
        const bool branch_taken_0x2c9e94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9E94u;
        // 0x2c9e98: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9e94) {
            ctx->pc = 0x2C9EA4u;
            goto label_2c9ea4;
        }
    }
    ctx->pc = 0x2C9E9Cu;
    // 0x2c9e9c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2C9E9Cu;
    {
        const bool branch_taken_0x2c9e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9E9Cu;
        // 0x2c9ea0: 0x8c50b41c  lw          $s0, -0x4BE4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947868)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9e9c) {
            ctx->pc = 0x2C9EF0u;
            goto label_2c9ef0;
        }
    }
    ctx->pc = 0x2C9EA4u;
label_2c9ea4:
    // 0x2c9ea4: 0x6010007  bgez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C9EA4u;
    {
        const bool branch_taken_0x2c9ea4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2C9EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9EA4u;
        // 0x2c9ea8: 0x3c060040  lui         $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ea4) {
            ctx->pc = 0x2C9EC4u;
            goto label_2c9ec4;
        }
    }
    ctx->pc = 0x2C9EACu;
    // 0x2c9eac: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2c9eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2c9eb0: 0x8c62b41c  lw          $v0, -0x4BE4($v1)
    ctx->pc = 0x2c9eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FB41Cu));
    // 0x2c9eb4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2c9eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c9eb8: 0xac62b41c  sw          $v0, -0x4BE4($v1)
    ctx->pc = 0x2c9eb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FB41Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FB41Cu, _value); } while (0);
    // 0x2c9ebc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2C9EBCu;
    {
        const bool branch_taken_0x2c9ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9EBCu;
        // 0x2c9ec0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ebc) {
            ctx->pc = 0x2C9EF0u;
            goto label_2c9ef0;
        }
    }
    ctx->pc = 0x2C9EC4u;
label_2c9ec4:
    // 0x2c9ec4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2c9ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2c9ec8: 0x8cc5b41c  lw          $a1, -0x4BE4($a2)
    ctx->pc = 0x2c9ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294947868)));
    // 0x2c9ecc: 0x8c62b434  lw          $v0, -0x4BCC($v1)
    ctx->pc = 0x2c9eccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FB434u));
    // 0x2c9ed0: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x2c9ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2c9ed4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2c9ed4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2c9ed8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9ED8u;
    {
        const bool branch_taken_0x2c9ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9ed8) {
            ctx->pc = 0x2C9EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9ED8u;
            // 0x2c9edc: 0xacc4b41c  sw          $a0, -0x4BE4($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 4294947868), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9EECu;
            goto label_2c9eec;
        }
    }
    ctx->pc = 0x2C9EE0u;
    // 0x2c9ee0: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x2c9ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x2c9ee4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C9EE4u;
    {
        const bool branch_taken_0x2c9ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9EE4u;
        // 0x2c9ee8: 0x3610ffff  ori         $s0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ee4) {
            ctx->pc = 0x2C9EF0u;
            goto label_2c9ef0;
        }
    }
    ctx->pc = 0x2C9EECu;
label_2c9eec:
    // 0x2c9eec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c9eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c9ef0:
    // 0x2c9ef0: 0xc0b2858  jal         func_2CA160
    ctx->pc = 0x2C9EF0u;
    SET_GPR_U32(ctx, 31, 0x2C9EF8u);
    ctx->pc = 0x2C9EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9EF0u;
    // 0x2c9ef4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA160u, 0x2C9EF0u, 0x2C9EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9EF8u;
label_2c9ef8:
    // 0x2c9ef8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c9ef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9efc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2c9efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c9f00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c9f00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9f04: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9F04u;
        // 0x2c9f08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9F0Cu;
    // 0x2c9f0c: 0x0  nop
    ctx->pc = 0x2c9f0cu;
    // NOP
    ctx->pc = 0x2c9f10u;
}
