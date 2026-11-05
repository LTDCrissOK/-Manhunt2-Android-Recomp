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

// Function: sub_001FF110
// Address: 0x1ff110 - 0x1ff1b0
void sub_001FF110_0x1ff110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF110_0x1ff110");
#endif

    switch (ctx->pc) {
        case 0x1ff168u: goto label_1ff168;
        case 0x1ff170u: goto label_1ff170;
        case 0x1ff190u: goto label_1ff190;
        default: break;
    }

    ctx->pc = 0x1ff110u;

    // 0x1ff110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff114: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ff114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ff118: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ff118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ff11c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ff11cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff120: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ff120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ff124: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FF124u;
    {
        const bool branch_taken_0x1ff124 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF124u;
        // 0x1ff128: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff124) {
            ctx->pc = 0x1FF140u;
            goto label_1ff140;
        }
    }
    ctx->pc = 0x1FF12Cu;
    // 0x1ff12c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ff12cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ff130: 0xc62d00f0  lwc1        $f13, 0xF0($s1)
    ctx->pc = 0x1ff130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ff134: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x1ff134u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x1ff138: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF138u;
    {
        const bool branch_taken_0x1ff138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF138u;
        // 0x1ff13c: 0x8e24002c  lw          $a0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff138) {
            ctx->pc = 0x1FF150u;
            goto label_1ff150;
        }
    }
    ctx->pc = 0x1FF140u;
label_1ff140:
    // 0x1ff140: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1ff140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1ff144: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1ff144u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ff148: 0xc44c001c  lwc1        $f12, 0x1C($v0)
    ctx->pc = 0x1ff148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ff14c: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x1ff14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1ff150:
    // 0x1ff150: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x1ff150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1ff154: 0xc62e00f4  lwc1        $f14, 0xF4($s1)
    ctx->pc = 0x1ff154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1ff158: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ff158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ff15c: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1ff15cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1ff160: 0xc08246e  jal         func_2091B8
    ctx->pc = 0x1FF160u;
    SET_GPR_U32(ctx, 31, 0x1FF168u);
    ctx->pc = 0x1FF164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF160u;
    // 0x1ff164: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2091B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2091B8u, 0x1FF160u, 0x1FF168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF168u;
label_1ff168:
    // 0x1ff168: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ff168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ff16c: 0x0  nop
    ctx->pc = 0x1ff16cu;
    // NOP
label_1ff170:
    // 0x1ff170: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1ff170u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1ff174: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1ff174u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ff178: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1ff178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1ff17c: 0xc62e00f4  lwc1        $f14, 0xF4($s1)
    ctx->pc = 0x1ff17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1ff180: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ff180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ff184: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1ff184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1ff188: 0xc08246e  jal         func_2091B8
    ctx->pc = 0x1FF188u;
    SET_GPR_U32(ctx, 31, 0x1FF190u);
    ctx->pc = 0x1FF18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF188u;
    // 0x1ff18c: 0xc48c001c  lwc1        $f12, 0x1C($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2091B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2091B8u, 0x1FF188u, 0x1FF190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF190u;
label_1ff190:
    // 0x1ff190: 0x643fff7  bgezl       $s2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1FF190u;
    {
        const bool branch_taken_0x1ff190 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1ff190) {
            ctx->pc = 0x1FF194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF190u;
            // 0x1ff194: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff170;
        }
    }
    ctx->pc = 0x1FF198u;
    // 0x1ff198: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ff198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff19c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ff19cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ff1a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ff1a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff1a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ff1a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ff1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF1A8u;
        // 0x1ff1ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF1B0u;
}
