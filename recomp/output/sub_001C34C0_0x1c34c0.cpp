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

// Function: sub_001C34C0
// Address: 0x1c34c0 - 0x1c35b8
void sub_001C34C0_0x1c34c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C34C0_0x1c34c0");
#endif

    switch (ctx->pc) {
        case 0x1c3510u: goto label_1c3510;
        case 0x1c352cu: goto label_1c352c;
        default: break;
    }

    ctx->pc = 0x1c34c0u;

    // 0x1c34c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c34c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c34c4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1c34c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1c34c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c34c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c34cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c34ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c34d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c34d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c34d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c34d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c34d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c34d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c34dc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c34dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c34e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c34e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c34e4: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x1c34e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1c34e8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1c34e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c34ec: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1c34ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1c34f0: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1c34f0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1c34f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c34f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c34f8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1c34f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1c34fc: 0xc454c6ec  lwc1        $f20, -0x3914($v0)
    ctx->pc = 0x1c34fcu;
    { uint32_t bits = FAST_READ32(0x45C6ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c3500: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1c3500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c3504: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C3504u;
    {
        const bool branch_taken_0x1c3504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3504u;
        // 0x1c3508: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3504) {
            ctx->pc = 0x1C3554u;
            goto label_1c3554;
        }
    }
    ctx->pc = 0x1C350Cu;
    // 0x1c350c: 0x0  nop
    ctx->pc = 0x1c350cu;
    // NOP
label_1c3510:
    // 0x1c3510: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C3510u;
    {
        const bool branch_taken_0x1c3510 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3510u;
        // 0x1c3514: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3510) {
            ctx->pc = 0x1C3554u;
            goto label_1c3554;
        }
    }
    ctx->pc = 0x1C3518u;
    // 0x1c3518: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c3518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c351c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c351cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3520: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1c3520u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1c3524: 0xc070c24  jal         func_1C3090
    ctx->pc = 0x1C3524u;
    SET_GPR_U32(ctx, 31, 0x1C352Cu);
    ctx->pc = 0x1C3528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3524u;
    // 0x1c3528: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3090u, 0x1C3524u, 0x1C352Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C352Cu;
label_1c352c:
    // 0x1c352c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1C352Cu;
    {
        const bool branch_taken_0x1c352c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c352c) {
            ctx->pc = 0x1C3530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C352Cu;
            // 0x1c3530: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3558u;
            goto label_1c3558;
        }
    }
    ctx->pc = 0x1C3534u;
    // 0x1c3534: 0x8e020fe8  lw          $v0, 0xFE8($s0)
    ctx->pc = 0x1c3534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    // 0x1c3538: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x1c3538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c353c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1c353cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3540: 0x0  nop
    ctx->pc = 0x1c3540u;
    // NOP
    // 0x1c3544: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3544u;
    {
        const bool branch_taken_0x1c3544 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c3544) {
            ctx->pc = 0x1C3548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3544u;
            // 0x1c3548: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3558u;
            goto label_1c3558;
        }
    }
    ctx->pc = 0x1C354Cu;
    // 0x1c354c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1c354cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3550: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1c3550u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1c3554:
    // 0x1c3554: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1c3554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1c3558:
    // 0x1c3558: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c3558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c355c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C355Cu;
    {
        const bool branch_taken_0x1c355c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C355Cu;
        // 0x1c3560: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c355c) {
            ctx->pc = 0x1C3568u;
            goto label_1c3568;
        }
    }
    ctx->pc = 0x1C3564u;
    // 0x1c3564: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1c3564u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c3568:
    // 0x1c3568: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3568u;
    {
        const bool branch_taken_0x1c3568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3568) {
            ctx->pc = 0x1C3578u;
            goto label_1c3578;
        }
    }
    ctx->pc = 0x1C3570u;
    // 0x1c3570: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1c3570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c3574: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1c3574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_1c3578:
    // 0x1c3578: 0x5600ffe5  bnel        $s0, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1C3578u;
    {
        const bool branch_taken_0x1c3578 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3578) {
            ctx->pc = 0x1C357Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3578u;
            // 0x1c357c: 0x8e4204bc  lw          $v0, 0x4BC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3510;
        }
    }
    ctx->pc = 0x1C3580u;
    // 0x1c3580: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1c3580u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3584: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c3584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3588: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c3588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c358c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c358cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3590: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c3590u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c3594: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c3594u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3598: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c3598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c359c: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x1c359cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c35a0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1c35a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c35a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C35A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C35A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35A4u;
        // 0x1c35a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C35A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C35ACu;
    // 0x1c35ac: 0x0  nop
    ctx->pc = 0x1c35acu;
    // NOP
    // 0x1c35b0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c35b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c35b4: 0x0  nop
    ctx->pc = 0x1c35b4u;
    // NOP
    ctx->pc = 0x1c35b8u;
}
