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

// Function: sub_001479E8
// Address: 0x1479e8 - 0x147aa0
void sub_001479E8_0x1479e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001479E8_0x1479e8");
#endif

    switch (ctx->pc) {
        case 0x147a5cu: goto label_147a5c;
        default: break;
    }

    ctx->pc = 0x1479e8u;

    // 0x1479e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1479e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1479ec: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1479ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1479f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1479f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1479f4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1479f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1479f8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1479f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1479fc: 0x3c060049  lui         $a2, 0x49
    ctx->pc = 0x1479fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)73 << 16));
    // 0x147a00: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x147a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x147a04: 0x24c69a08  addiu       $a2, $a2, -0x65F8
    ctx->pc = 0x147a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941192));
    // 0x147a08: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x147a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x147a0c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x147a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x147a10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x147a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x147a14: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x147a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x147a18: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x147a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x147a1c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x147a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x147a20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x147a20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x147a24: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x147a24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x147a28: 0x8cc20108  lw          $v0, 0x108($a2)
    ctx->pc = 0x147a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 264)));
    // 0x147a2c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x147A2Cu;
    {
        const bool branch_taken_0x147a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x147a2c) {
            ctx->pc = 0x147A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147A2Cu;
            // 0x147a30: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147A3Cu;
            goto label_147a3c;
        }
    }
    ctx->pc = 0x147A34u;
    // 0x147a34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x147A34u;
    {
        const bool branch_taken_0x147a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147A34u;
        // 0x147a38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147a34) {
            ctx->pc = 0x147A44u;
            goto label_147a44;
        }
    }
    ctx->pc = 0x147A3Cu;
label_147a3c:
    // 0x147a3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x147a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x147a40: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x147a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_147a44:
    // 0x147a44: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x147A44u;
    {
        const bool branch_taken_0x147a44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x147a44) {
            ctx->pc = 0x147A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147A44u;
            // 0x147a48: 0x8ce60564  lw          $a2, 0x564($a3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147A54u;
            goto label_147a54;
        }
    }
    ctx->pc = 0x147A4Cu;
    // 0x147a4c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x147A4Cu;
    {
        const bool branch_taken_0x147a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147A4Cu;
        // 0x147a50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147a4c) {
            ctx->pc = 0x147A94u;
            goto label_147a94;
        }
    }
    ctx->pc = 0x147A54u;
label_147a54:
    // 0x147a54: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x147A54u;
    SET_GPR_U32(ctx, 31, 0x147A5Cu);
    ctx->pc = 0x147A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147A54u;
    // 0x147a58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x147A54u, 0x147A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147A5Cu;
label_147a5c:
    // 0x147a5c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x147a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x147a60: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x147a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x147a64: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x147a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x147a68: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x147a68u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x147a6c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x147a6cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x147a70: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x147a70u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x147a74: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x147a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x147a78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x147a78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147a7c: 0x0  nop
    ctx->pc = 0x147a7cu;
    // NOP
    // 0x147a80: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x147a80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147a84: 0x0  nop
    ctx->pc = 0x147a84u;
    // NOP
    // 0x147a88: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x147A88u;
    {
        const bool branch_taken_0x147a88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x147A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147A88u;
        // 0x147a8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147a88) {
            ctx->pc = 0x147A94u;
            goto label_147a94;
        }
    }
    ctx->pc = 0x147A90u;
    // 0x147a90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x147a90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_147a94:
    // 0x147a94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x147a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147a98: 0x3e00008  jr          $ra
    ctx->pc = 0x147A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147A98u;
        // 0x147a9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147AA0u;
}
