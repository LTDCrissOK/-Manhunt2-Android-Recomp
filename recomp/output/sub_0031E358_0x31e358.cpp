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

// Function: sub_0031E358
// Address: 0x31e358 - 0x31e3e8
void sub_0031E358_0x31e358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E358_0x31e358");
#endif

    switch (ctx->pc) {
        case 0x31e3a0u: goto label_31e3a0;
        case 0x31e3b0u: goto label_31e3b0;
        default: break;
    }

    ctx->pc = 0x31e358u;

    // 0x31e358: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31e358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31e35c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31e35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31e360: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31e360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31e364: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x31e364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31e368: 0x8c51bda8  lw          $s1, -0x4258($v0)
    ctx->pc = 0x31e368u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3FBDA8u));
    // 0x31e36c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x31e36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x31e370: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31e370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31e374: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31e374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e378: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x31e378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x31e37c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x31e37cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x31e380: 0x12230011  beq         $s1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x31E380u;
    {
        const bool branch_taken_0x31e380 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x31E384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E380u;
        // 0x31e384: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e380) {
            ctx->pc = 0x31E3C8u;
            goto label_31e3c8;
        }
    }
    ctx->pc = 0x31E388u;
    // 0x31e388: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x31e388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x31e38c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x31e38cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x31e390: 0x2442d5d8  addiu       $v0, $v0, -0x2A28
    ctx->pc = 0x31e390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956504));
    // 0x31e394: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x31e394u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31e398: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x31e398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31e39c: 0x0  nop
    ctx->pc = 0x31e39cu;
    // NOP
label_31e3a0:
    // 0x31e3a0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x31e3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31e3a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31e3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e3a8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x31E3A8u;
    SET_GPR_U32(ctx, 31, 0x31E3B0u);
    ctx->pc = 0x31E3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E3A8u;
    // 0x31e3ac: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x31E3A8u, 0x31E3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E3B0u;
label_31e3b0:
    // 0x31e3b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E3B0u;
    {
        const bool branch_taken_0x31e3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E3B0u;
        // 0x31e3b4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e3b0) {
            ctx->pc = 0x31E3C0u;
            goto label_31e3c0;
        }
    }
    ctx->pc = 0x31E3B8u;
    // 0x31e3b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31E3B8u;
    {
        const bool branch_taken_0x31e3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E3B8u;
        // 0x31e3bc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e3b8) {
            ctx->pc = 0x31E3CCu;
            goto label_31e3cc;
        }
    }
    ctx->pc = 0x31E3C0u;
label_31e3c0:
    // 0x31e3c0: 0x1633fff7  bne         $s1, $s3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x31E3C0u;
    {
        const bool branch_taken_0x31e3c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x31E3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E3C0u;
        // 0x31e3c4: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e3c0) {
            ctx->pc = 0x31E3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e3a0;
        }
    }
    ctx->pc = 0x31E3C8u;
label_31e3c8:
    // 0x31e3c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31e3c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e3cc:
    // 0x31e3cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31e3ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e3d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31e3d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31e3d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x31e3d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e3d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x31e3d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31e3dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31e3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31e3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x31E3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E3E0u;
        // 0x31e3e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E3E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E3E8u;
}
