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

// Function: sub_0038FF50
// Address: 0x38ff50 - 0x38ffd8
void sub_0038FF50_0x38ff50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038FF50_0x38ff50");
#endif

    switch (ctx->pc) {
        case 0x38ffacu: goto label_38ffac;
        case 0x38ffccu: goto label_38ffcc;
        default: break;
    }

    ctx->pc = 0x38ff50u;

    // 0x38ff50: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x38ff50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x38ff54: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38ff54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38ff58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38ff58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ff5c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x38ff5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x38ff60: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x38ff60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x38ff64: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x38ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x38ff68: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x38ff68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x38ff6c: 0x34420fda  ori         $v0, $v0, 0xFDA
    ctx->pc = 0x38ff6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4058);
    // 0x38ff70: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x38ff70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x38ff74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38FF74u;
    {
        const bool branch_taken_0x38ff74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FF74u;
        // 0x38ff78: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ff74) {
            ctx->pc = 0x38FF88u;
            goto label_38ff88;
        }
    }
    ctx->pc = 0x38FF7Cu;
    // 0x38ff7c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x38ff7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x38ff80: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x38FF80u;
    {
        const bool branch_taken_0x38ff80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FF80u;
        // 0x38ff84: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ff80) {
            ctx->pc = 0x38FFC4u;
            goto label_38ffc4;
        }
    }
    ctx->pc = 0x38FF88u;
label_38ff88:
    // 0x38ff88: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x38ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x38ff8c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x38ff8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x38ff90: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x38ff90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x38ff94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38FF94u;
    {
        const bool branch_taken_0x38ff94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ff94) {
            ctx->pc = 0x38FFA4u;
            goto label_38ffa4;
        }
    }
    ctx->pc = 0x38FF9Cu;
    // 0x38ff9c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x38FF9Cu;
    {
        const bool branch_taken_0x38ff9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FF9Cu;
        // 0x38ffa0: 0x460c6001  sub.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ff9c) {
            ctx->pc = 0x38FFCCu;
            goto label_38ffcc;
        }
    }
    ctx->pc = 0x38FFA4u;
label_38ffa4:
    // 0x38ffa4: 0xc0e4966  jal         func_392598
    ctx->pc = 0x38FFA4u;
    SET_GPR_U32(ctx, 31, 0x38FFACu);
    ctx->pc = 0x38FFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FFA4u;
    // 0x38ffa8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392598u, 0x38FFA4u, 0x38FFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FFACu;
label_38ffac:
    // 0x38ffac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x38ffacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x38ffb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x38ffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38ffb4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x38ffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x38ffb8: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x38ffb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x38ffbc: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x38ffbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x38ffc0: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x38ffc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_38ffc4:
    // 0x38ffc4: 0xc0e4d9c  jal         func_393670
    ctx->pc = 0x38FFC4u;
    SET_GPR_U32(ctx, 31, 0x38FFCCu);
    ctx->pc = 0x393670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393670u, 0x38FFC4u, 0x38FFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FFCCu;
label_38ffcc:
    // 0x38ffcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38ffccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38ffd0: 0x3e00008  jr          $ra
    ctx->pc = 0x38FFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FFD0u;
        // 0x38ffd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38FFD8u;
}
