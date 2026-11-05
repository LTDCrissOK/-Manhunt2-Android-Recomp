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

// Function: sub_002F59C8
// Address: 0x2f59c8 - 0x2f5a38
void sub_002F59C8_0x2f59c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F59C8_0x2f59c8");
#endif

    ctx->pc = 0x2f59c8u;

    // 0x2f59c8: 0x8c821004  lw          $v0, 0x1004($a0)
    ctx->pc = 0x2f59c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4100)));
    // 0x2f59cc: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2F59CCu;
    {
        const bool branch_taken_0x2f59cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f59cc) {
            ctx->pc = 0x2F59D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F59CCu;
            // 0x2f59d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5A2Cu;
            goto label_2f5a2c;
        }
    }
    ctx->pc = 0x2F59D4u;
    // 0x2f59d4: 0x8c431060  lw          $v1, 0x1060($v0)
    ctx->pc = 0x2f59d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4192)));
    // 0x2f59d8: 0x38620010  xori        $v0, $v1, 0x10
    ctx->pc = 0x2f59d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x2f59dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F59DCu;
    {
        const bool branch_taken_0x2f59dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F59DCu;
        // 0x2f59e0: 0x3862000f  xori        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f59dc) {
            ctx->pc = 0x2F59ECu;
            goto label_2f59ec;
        }
    }
    ctx->pc = 0x2F59E4u;
    // 0x2f59e4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F59E4u;
    {
        const bool branch_taken_0x2f59e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F59E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F59E4u;
        // 0x2f59e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f59e4) {
            ctx->pc = 0x2F5A2Cu;
            goto label_2f5a2c;
        }
    }
    ctx->pc = 0x2F59ECu;
label_2f59ec:
    // 0x2f59ec: 0x8c820ff8  lw          $v0, 0xFF8($a0)
    ctx->pc = 0x2f59ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4088)));
    // 0x2f59f0: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2f59f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2f59f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f59f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f59f8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2f59f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f59fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2f59fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f5a00: 0x0  nop
    ctx->pc = 0x2f5a00u;
    // NOP
    // 0x2f5a04: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2F5A04u;
    {
        const bool branch_taken_0x2f5a04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F5A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A04u;
        // 0x2f5a08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5a04) {
            ctx->pc = 0x2F5A10u;
            goto label_2f5a10;
        }
    }
    ctx->pc = 0x2F5A0Cu;
    // 0x2f5a0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f5a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5a10:
    // 0x2f5a10: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f5a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f5a14: 0x52023  negu        $a0, $a1
    ctx->pc = 0x2f5a14u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x2f5a18: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x2f5a18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2f5a1c: 0xa3200b  movn        $a0, $a1, $v1
    ctx->pc = 0x2f5a1cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x2f5a20: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F5A20u;
    {
        const bool branch_taken_0x2f5a20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A20u;
        // 0x2f5a24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5a20) {
            ctx->pc = 0x2F5A2Cu;
            goto label_2f5a2c;
        }
    }
    ctx->pc = 0x2F5A28u;
    // 0x2f5a28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f5a28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5a2c:
    // 0x2f5a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5A34u;
    // 0x2f5a34: 0x0  nop
    ctx->pc = 0x2f5a34u;
    // NOP
    ctx->pc = 0x2f5a38u;
}
