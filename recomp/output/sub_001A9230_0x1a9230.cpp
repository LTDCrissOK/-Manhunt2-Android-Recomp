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

// Function: sub_001A9230
// Address: 0x1a9230 - 0x1a9300
void sub_001A9230_0x1a9230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9230_0x1a9230");
#endif

    switch (ctx->pc) {
        case 0x1a9290u: goto label_1a9290;
        case 0x1a92a4u: goto label_1a92a4;
        case 0x1a92b8u: goto label_1a92b8;
        case 0x1a92e0u: goto label_1a92e0;
        default: break;
    }

    ctx->pc = 0x1a9230u;

    // 0x1a9230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a9230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a9234: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a9234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9238: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x1a9238u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1a923c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1a923cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a9240: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a9240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a9244: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1a9244u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1a9248: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a9248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a924c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a924cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a9250: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a9250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a9254: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1a9254u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a9258: 0x8ca20148  lw          $v0, 0x148($a1)
    ctx->pc = 0x1a9258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 328)));
    // 0x1a925c: 0x8ca30158  lw          $v1, 0x158($a1)
    ctx->pc = 0x1a925cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 344)));
    // 0x1a9260: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9260u;
    {
        const bool branch_taken_0x1a9260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1A9264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9260u;
        // 0x1a9264: 0x8c520110  lw          $s2, 0x110($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9260) {
            ctx->pc = 0x1A9274u;
            goto label_1a9274;
        }
    }
    ctx->pc = 0x1A9268u;
    // 0x1a9268: 0x90a201dc  lbu         $v0, 0x1DC($a1)
    ctx->pc = 0x1a9268u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 476)));
    // 0x1a926c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A926Cu;
    {
        const bool branch_taken_0x1a926c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A926Cu;
        // 0x1a9270: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a926c) {
            ctx->pc = 0x1A927Cu;
            goto label_1a927c;
        }
    }
    ctx->pc = 0x1A9274u;
label_1a9274:
    // 0x1a9274: 0x8ca201e8  lw          $v0, 0x1E8($a1)
    ctx->pc = 0x1a9274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
    // 0x1a9278: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1a9278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1a927c:
    // 0x1a927c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A927Cu;
    {
        const bool branch_taken_0x1a927c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A927Cu;
        // 0x1a9280: 0x24b001ec  addiu       $s0, $a1, 0x1EC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 492));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a927c) {
            ctx->pc = 0x1A92CCu;
            goto label_1a92cc;
        }
    }
    ctx->pc = 0x1A9284u;
    // 0x1a9284: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a9284u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a9288: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x1a9288u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a928c: 0x0  nop
    ctx->pc = 0x1a928cu;
    // NOP
label_1a9290:
    // 0x1a9290: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a9290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a9294: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A9294u;
    {
        const bool branch_taken_0x1a9294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9294u;
        // 0x1a9298: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9294) {
            ctx->pc = 0x1A92B8u;
            goto label_1a92b8;
        }
    }
    ctx->pc = 0x1A929Cu;
    // 0x1a929c: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x1A929Cu;
    SET_GPR_U32(ctx, 31, 0x1A92A4u);
    ctx->pc = 0x1A92A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A929Cu;
    // 0x1a92a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x1A929Cu, 0x1A92A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A92A4u;
label_1a92a4:
    // 0x1a92a4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1a92a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a92a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a92a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a92ac: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1a92acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1a92b0: 0xc07575a  jal         func_1D5D68
    ctx->pc = 0x1A92B0u;
    SET_GPR_U32(ctx, 31, 0x1A92B8u);
    ctx->pc = 0x1A92B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A92B0u;
    // 0x1a92b4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D68u, 0x1A92B0u, 0x1A92B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A92B8u;
label_1a92b8:
    // 0x1a92b8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1a92b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1a92bc: 0x621fff4  bgez        $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1A92BCu;
    {
        const bool branch_taken_0x1a92bc = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1A92C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A92BCu;
        // 0x1a92c0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a92bc) {
            ctx->pc = 0x1A9290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9290;
        }
    }
    ctx->pc = 0x1A92C4u;
    // 0x1a92c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A92C4u;
    {
        const bool branch_taken_0x1a92c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A92C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A92C4u;
        // 0x1a92c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a92c4) {
            ctx->pc = 0x1A92E4u;
            goto label_1a92e4;
        }
    }
    ctx->pc = 0x1A92CCu;
label_1a92cc:
    // 0x1a92cc: 0x8ca501e8  lw          $a1, 0x1E8($a1)
    ctx->pc = 0x1a92ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
    // 0x1a92d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a92d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a92d4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1a92d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a92d8: 0xc07575a  jal         func_1D5D68
    ctx->pc = 0x1A92D8u;
    SET_GPR_U32(ctx, 31, 0x1A92E0u);
    ctx->pc = 0x1A92DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A92D8u;
    // 0x1a92dc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D68u, 0x1A92D8u, 0x1A92E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A92E0u;
label_1a92e0:
    // 0x1a92e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a92e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a92e4:
    // 0x1a92e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a92e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a92e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a92e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a92ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a92ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a92f0: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x1a92f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a92f4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1a92f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a92f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A92F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A92FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A92F8u;
        // 0x1a92fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A92F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9300u;
}
