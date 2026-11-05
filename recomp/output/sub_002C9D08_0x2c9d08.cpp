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

// Function: sub_002C9D08
// Address: 0x2c9d08 - 0x2c9db0
void sub_002C9D08_0x2c9d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9D08_0x2c9d08");
#endif

    switch (ctx->pc) {
        case 0x2c9d5cu: goto label_2c9d5c;
        case 0x2c9d74u: goto label_2c9d74;
        default: break;
    }

    ctx->pc = 0x2c9d08u;

    // 0x2c9d08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c9d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c9d0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c9d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c9d10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c9d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c9d14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c9d14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d18: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C9D18u;
    {
        const bool branch_taken_0x2c9d18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9D18u;
        // 0x2c9d1c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9d18) {
            ctx->pc = 0x2C9D54u;
            goto label_2c9d54;
        }
    }
    ctx->pc = 0x2C9D20u;
    // 0x2c9d20: 0x851025  or          $v0, $a0, $a1
    ctx->pc = 0x2c9d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2c9d24: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2c9d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2c9d28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c9d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c9d2c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C9D2Cu;
    {
        const bool branch_taken_0x2c9d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9D2Cu;
        // 0x2c9d30: 0x858818  mult        $s1, $a0, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9d2c) {
            ctx->pc = 0x2C9D54u;
            goto label_2c9d54;
        }
    }
    ctx->pc = 0x2C9D34u;
    // 0x2c9d34: 0x224001b  divu        $zero, $s1, $a0
    ctx->pc = 0x2c9d34u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x2c9d38: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c9d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c9d3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c9d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c9d40: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C9D40u;
    {
        const bool branch_taken_0x2c9d40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9d40) {
            ctx->pc = 0x2C9D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9D40u;
            // 0x2c9d44: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9D48u;
            goto label_2c9d48;
        }
    }
    ctx->pc = 0x2C9D48u;
label_2c9d48:
    // 0x2c9d48: 0x1812  mflo        $v1
    ctx->pc = 0x2c9d48u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2c9d4c: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x2c9d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x2c9d50: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x2c9d50u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_2c9d54:
    // 0x2c9d54: 0xc0b241a  jal         func_2C9068
    ctx->pc = 0x2C9D54u;
    SET_GPR_U32(ctx, 31, 0x2C9D5Cu);
    ctx->pc = 0x2C9D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9D54u;
    // 0x2c9d58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9068u, 0x2C9D54u, 0x2C9D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9D5Cu;
label_2c9d5c:
    // 0x2c9d5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c9d5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d60: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9D60u;
    {
        const bool branch_taken_0x2c9d60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9D60u;
        // 0x2c9d64: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9d60) {
            ctx->pc = 0x2C9D74u;
            goto label_2c9d74;
        }
    }
    ctx->pc = 0x2C9D68u;
    // 0x2c9d68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c9d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d6c: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x2C9D6Cu;
    SET_GPR_U32(ctx, 31, 0x2C9D74u);
    ctx->pc = 0x2C9D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9D6Cu;
    // 0x2c9d70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x2C9D6Cu, 0x2C9D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9D74u;
label_2c9d74:
    // 0x2c9d74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c9d74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c9d78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c9d7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c9d7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9d80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c9d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9d84: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9D84u;
        // 0x2c9d88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9D8Cu;
    // 0x2c9d8c: 0x0  nop
    ctx->pc = 0x2c9d8cu;
    // NOP
    // 0x2c9d90: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c9d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c9d94: 0x0  nop
    ctx->pc = 0x2c9d94u;
    // NOP
    // 0x2c9d98: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c9d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c9d9c: 0x0  nop
    ctx->pc = 0x2c9d9cu;
    // NOP
    // 0x2c9da0: 0x8c6201ac  lw          $v0, 0x1AC($v1)
    ctx->pc = 0x2c9da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 428)));
    // 0x2c9da4: 0x0  nop
    ctx->pc = 0x2c9da4u;
    // NOP
    // 0x2c9da8: 0x8c6201b0  lw          $v0, 0x1B0($v1)
    ctx->pc = 0x2c9da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x2c9dac: 0x0  nop
    ctx->pc = 0x2c9dacu;
    // NOP
    ctx->pc = 0x2c9db0u;
}
