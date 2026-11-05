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

// Function: sub_002C35F8
// Address: 0x2c35f8 - 0x2c36a0
void sub_002C35F8_0x2c35f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C35F8_0x2c35f8");
#endif

    switch (ctx->pc) {
        case 0x2c361cu: goto label_2c361c;
        case 0x2c362cu: goto label_2c362c;
        case 0x2c3640u: goto label_2c3640;
        case 0x2c365cu: goto label_2c365c;
        default: break;
    }

    ctx->pc = 0x2c35f8u;

    // 0x2c35f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c35f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c35fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c35fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c3600: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c3600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2c3604: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c3604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3608: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c3608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c360c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c360cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2c3610: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c3610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c3614: 0xc0b0d50  jal         func_2C3540
    ctx->pc = 0x2C3614u;
    SET_GPR_U32(ctx, 31, 0x2C361Cu);
    ctx->pc = 0x2C3618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3614u;
    // 0x2c3618: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3540u, 0x2C3614u, 0x2C361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C361Cu;
label_2c361c:
    // 0x2c361c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C361Cu;
    {
        const bool branch_taken_0x2c361c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C361Cu;
        // 0x2c3620: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c361c) {
            ctx->pc = 0x2C3638u;
            goto label_2c3638;
        }
    }
    ctx->pc = 0x2C3624u;
    // 0x2c3624: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2C3624u;
    {
        const bool branch_taken_0x2c3624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3624u;
        // 0x2c3628: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3624) {
            ctx->pc = 0x2C3680u;
            goto label_2c3680;
        }
    }
    ctx->pc = 0x2C362Cu;
label_2c362c:
    // 0x2c362c: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x2c362cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
    // 0x2c3630: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2C3630u;
    {
        const bool branch_taken_0x2c3630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3630u;
        // 0x2c3634: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3630) {
            ctx->pc = 0x2C3680u;
            goto label_2c3680;
        }
    }
    ctx->pc = 0x2C3638u;
label_2c3638:
    // 0x2c3638: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2c3638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2c363c: 0x0  nop
    ctx->pc = 0x2c363cu;
    // NOP
label_2c3640:
    // 0x2c3640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3644: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2c3644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2c3648: 0x30510003  andi        $s1, $v0, 0x3
    ctx->pc = 0x2c3648u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2c364c: 0x112940  sll         $a1, $s1, 5
    ctx->pc = 0x2c364cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x2c3650: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2c3650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2c3654: 0xc0b0d72  jal         func_2C35C8
    ctx->pc = 0x2C3654u;
    SET_GPR_U32(ctx, 31, 0x2C365Cu);
    ctx->pc = 0x2C3658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3654u;
    // 0x2c3658: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C35C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C35C8u, 0x2C3654u, 0x2C365Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C365Cu;
label_2c365c:
    // 0x2c365c: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2c365cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3660: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c3660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3664: 0x0  nop
    ctx->pc = 0x2c3664u;
    // NOP
    // 0x2c3668: 0x4501fff0  bc1t        . + 4 + (-0x10 << 2)
    ctx->pc = 0x2C3668u;
    {
        const bool branch_taken_0x2c3668 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3668u;
        // 0x2c366c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3668) {
            ctx->pc = 0x2C362Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c362c;
        }
    }
    ctx->pc = 0x2C3670u;
    // 0x2c3670: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x2c3670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c3674: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x2C3674u;
    {
        const bool branch_taken_0x2c3674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3674) {
            ctx->pc = 0x2C3678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3674u;
            // 0x2c3678: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3640;
        }
    }
    ctx->pc = 0x2C367Cu;
    // 0x2c367c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c367cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c3680:
    // 0x2c3680: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c3680u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3684: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c3684u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c3688: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c3688u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c368c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c368cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3690: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c3690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c3694: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3694u;
        // 0x2c3698: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C369Cu;
    // 0x2c369c: 0x0  nop
    ctx->pc = 0x2c369cu;
    // NOP
    ctx->pc = 0x2c36a0u;
}
