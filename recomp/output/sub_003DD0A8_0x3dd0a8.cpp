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

// Function: sub_003DD0A8
// Address: 0x3dd0a8 - 0x3dd138
void sub_003DD0A8_0x3dd0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD0A8_0x3dd0a8");
#endif

    switch (ctx->pc) {
        case 0x3dd0d0u: goto label_3dd0d0;
        case 0x3dd114u: goto label_3dd114;
        default: break;
    }

    ctx->pc = 0x3dd0a8u;

    // 0x3dd0a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3dd0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3dd0ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3dd0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3dd0b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dd0b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd0b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3dd0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3dd0b8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x3dd0b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3dd0bc: 0x26110260  addiu       $s1, $s0, 0x260
    ctx->pc = 0x3dd0bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x3dd0c0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3dd0c0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3dd0c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3dd0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3dd0c8: 0xc06fc34  jal         func_1BF0D0
    ctx->pc = 0x3DD0C8u;
    SET_GPR_U32(ctx, 31, 0x3DD0D0u);
    ctx->pc = 0x3DD0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD0C8u;
    // 0x3dd0cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0D0u, 0x3DD0C8u, 0x3DD0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD0D0u;
label_3dd0d0:
    // 0x3dd0d0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x3dd0d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x3dd0d4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3dd0d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x3dd0d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3dd0d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dd0dc: 0xc601033c  lwc1        $f1, 0x33C($s0)
    ctx->pc = 0x3dd0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3dd0e0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3dd0e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3dd0e4: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x3dd0e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x3dd0e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3dd0e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3dd0ec: 0x0  nop
    ctx->pc = 0x3dd0ecu;
    // NOP
    // 0x3dd0f0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3DD0F0u;
    {
        const bool branch_taken_0x3dd0f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DD0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD0F0u;
        // 0x3dd0f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd0f0) {
            ctx->pc = 0x3DD108u;
            goto label_3dd108;
        }
    }
    ctx->pc = 0x3DD0F8u;
    // 0x3dd0f8: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x3dd0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x3dd0fc: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x3dd0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x3dd100: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DD100u;
    {
        const bool branch_taken_0x3dd100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DD104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD100u;
        // 0x3dd104: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd100) {
            ctx->pc = 0x3DD11Cu;
            goto label_3dd11c;
        }
    }
    ctx->pc = 0x3DD108u;
label_3dd108:
    // 0x3dd108: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dd108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd10c: 0xc06fcb6  jal         func_1BF2D8
    ctx->pc = 0x3DD10Cu;
    SET_GPR_U32(ctx, 31, 0x3DD114u);
    ctx->pc = 0x3DD110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD10Cu;
    // 0x3dd110: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF2D8u, 0x3DD10Cu, 0x3DD114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD114u;
label_3dd114:
    // 0x3dd114: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x3dd114u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3dd118: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3dd118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3dd11c:
    // 0x3dd11c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3dd11cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd120: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3dd120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3dd124: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3dd124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dd128: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x3dd128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3dd12c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD12Cu;
        // 0x3dd130: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD134u;
    // 0x3dd134: 0x0  nop
    ctx->pc = 0x3dd134u;
    // NOP
    ctx->pc = 0x3dd138u;
}
