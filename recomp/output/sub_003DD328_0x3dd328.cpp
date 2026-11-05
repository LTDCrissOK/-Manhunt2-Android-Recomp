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

// Function: sub_003DD328
// Address: 0x3dd328 - 0x3dd420
void sub_003DD328_0x3dd328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD328_0x3dd328");
#endif

    switch (ctx->pc) {
        case 0x3dd350u: goto label_3dd350;
        case 0x3dd394u: goto label_3dd394;
        default: break;
    }

    ctx->pc = 0x3dd328u;

    // 0x3dd328: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3dd328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3dd32c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3dd32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3dd330: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dd330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd334: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3dd334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3dd338: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x3dd338u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3dd33c: 0x26110260  addiu       $s1, $s0, 0x260
    ctx->pc = 0x3dd33cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x3dd340: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3dd340u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3dd344: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3dd344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3dd348: 0xc06fc34  jal         func_1BF0D0
    ctx->pc = 0x3DD348u;
    SET_GPR_U32(ctx, 31, 0x3DD350u);
    ctx->pc = 0x3DD34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD348u;
    // 0x3dd34c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0D0u, 0x3DD348u, 0x3DD350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD350u;
label_3dd350:
    // 0x3dd350: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x3dd350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x3dd354: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3dd354u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x3dd358: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3dd358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dd35c: 0xc601033c  lwc1        $f1, 0x33C($s0)
    ctx->pc = 0x3dd35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3dd360: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3dd360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3dd364: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x3dd364u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x3dd368: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3dd368u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3dd36c: 0x0  nop
    ctx->pc = 0x3dd36cu;
    // NOP
    // 0x3dd370: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3DD370u;
    {
        const bool branch_taken_0x3dd370 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DD374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD370u;
        // 0x3dd374: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd370) {
            ctx->pc = 0x3DD388u;
            goto label_3dd388;
        }
    }
    ctx->pc = 0x3DD378u;
    // 0x3dd378: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x3dd378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x3dd37c: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x3dd37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x3dd380: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DD380u;
    {
        const bool branch_taken_0x3dd380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DD384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD380u;
        // 0x3dd384: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd380) {
            ctx->pc = 0x3DD39Cu;
            goto label_3dd39c;
        }
    }
    ctx->pc = 0x3DD388u;
label_3dd388:
    // 0x3dd388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dd388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd38c: 0xc06fcb6  jal         func_1BF2D8
    ctx->pc = 0x3DD38Cu;
    SET_GPR_U32(ctx, 31, 0x3DD394u);
    ctx->pc = 0x3DD390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD38Cu;
    // 0x3dd390: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF2D8u, 0x3DD38Cu, 0x3DD394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD394u;
label_3dd394:
    // 0x3dd394: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x3dd394u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3dd398: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3dd398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3dd39c:
    // 0x3dd39c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3dd39cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd3a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3dd3a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3dd3a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3dd3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dd3a8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x3dd3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3dd3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD3ACu;
        // 0x3dd3b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD3B4u;
    // 0x3dd3b4: 0x0  nop
    ctx->pc = 0x3dd3b4u;
    // NOP
    // 0x3dd3b8: 0xfc8204c0  sd          $v0, 0x4C0($a0)
    ctx->pc = 0x3dd3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1216), GPR_U64(ctx, 2));
    // 0x3dd3bc: 0x0  nop
    ctx->pc = 0x3dd3bcu;
    // NOP
    // 0x3dd3c0: 0xfc8204c0  sd          $v0, 0x4C0($a0)
    ctx->pc = 0x3dd3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1216), GPR_U64(ctx, 2));
    // 0x3dd3c4: 0x0  nop
    ctx->pc = 0x3dd3c4u;
    // NOP
    // 0x3dd3c8: 0x0  nop
    ctx->pc = 0x3dd3c8u;
    // NOP
    // 0x3dd3cc: 0x0  nop
    ctx->pc = 0x3dd3ccu;
    // NOP
    // 0x3dd3d0: 0x0  nop
    ctx->pc = 0x3dd3d0u;
    // NOP
    // 0x3dd3d4: 0x0  nop
    ctx->pc = 0x3dd3d4u;
    // NOP
    // 0x3dd3d8: 0xfc8204c0  sd          $v0, 0x4C0($a0)
    ctx->pc = 0x3dd3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1216), GPR_U64(ctx, 2));
    // 0x3dd3dc: 0x0  nop
    ctx->pc = 0x3dd3dcu;
    // NOP
    // 0x3dd3e0: 0xfc8204c0  sd          $v0, 0x4C0($a0)
    ctx->pc = 0x3dd3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1216), GPR_U64(ctx, 2));
    // 0x3dd3e4: 0x0  nop
    ctx->pc = 0x3dd3e4u;
    // NOP
    // 0x3dd3e8: 0x0  nop
    ctx->pc = 0x3dd3e8u;
    // NOP
    // 0x3dd3ec: 0x0  nop
    ctx->pc = 0x3dd3ecu;
    // NOP
    // 0x3dd3f0: 0x0  nop
    ctx->pc = 0x3dd3f0u;
    // NOP
    // 0x3dd3f4: 0x0  nop
    ctx->pc = 0x3dd3f4u;
    // NOP
    // 0x3dd3f8: 0xac850474  sw          $a1, 0x474($a0)
    ctx->pc = 0x3dd3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1140), GPR_U32(ctx, 5));
    // 0x3dd3fc: 0x0  nop
    ctx->pc = 0x3dd3fcu;
    // NOP
    // 0x3dd400: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3dd400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3dd404: 0x0  nop
    ctx->pc = 0x3dd404u;
    // NOP
    // 0x3dd408: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3dd408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3dd40c: 0x0  nop
    ctx->pc = 0x3dd40cu;
    // NOP
    // 0x3dd410: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3dd410u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3dd414: 0x0  nop
    ctx->pc = 0x3dd414u;
    // NOP
    // 0x3dd418: 0x8c6204c0  lw          $v0, 0x4C0($v1)
    ctx->pc = 0x3dd418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1216)));
    // 0x3dd41c: 0x0  nop
    ctx->pc = 0x3dd41cu;
    // NOP
    ctx->pc = 0x3dd420u;
}
