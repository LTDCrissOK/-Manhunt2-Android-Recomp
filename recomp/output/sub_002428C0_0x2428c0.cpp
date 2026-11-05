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

// Function: sub_002428C0
// Address: 0x2428c0 - 0x242960
void sub_002428C0_0x2428c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002428C0_0x2428c0");
#endif

    switch (ctx->pc) {
        case 0x2428e8u: goto label_2428e8;
        case 0x242910u: goto label_242910;
        case 0x24291cu: goto label_24291c;
        case 0x24294cu: goto label_24294c;
        default: break;
    }

    ctx->pc = 0x2428c0u;

    // 0x2428c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2428c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2428c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2428c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2428c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2428c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2428cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2428ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2428d0: 0x8e070334  lw          $a3, 0x334($s0)
    ctx->pc = 0x2428d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2428d4: 0x8ce401e4  lw          $a0, 0x1E4($a3)
    ctx->pc = 0x2428d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
    // 0x2428d8: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2428D8u;
    {
        const bool branch_taken_0x2428d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2428DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2428D8u;
        // 0x2428dc: 0x3c050024  lui         $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2428d8) {
            ctx->pc = 0x242904u;
            goto label_242904;
        }
    }
    ctx->pc = 0x2428E0u;
    // 0x2428e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2428e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2428e4: 0x24e301ec  addiu       $v1, $a3, 0x1EC
    ctx->pc = 0x2428e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 492));
label_2428e8:
    // 0x2428e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2428e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2428ec: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2428ECu;
    {
        const bool branch_taken_0x2428ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2428F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2428ECu;
        // 0x2428f0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2428ec) {
            ctx->pc = 0x242904u;
            goto label_242904;
        }
    }
    ctx->pc = 0x2428F4u;
    // 0x2428f4: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x2428f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2428f8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2428F8u;
    {
        const bool branch_taken_0x2428f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2428FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2428F8u;
        // 0x2428fc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2428f8) {
            ctx->pc = 0x2428E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2428e8;
        }
    }
    ctx->pc = 0x242900u;
    // 0x242900: 0x8ce401e8  lw          $a0, 0x1E8($a3)
    ctx->pc = 0x242900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_242904:
    // 0x242904: 0x24a566f0  addiu       $a1, $a1, 0x66F0
    ctx->pc = 0x242904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26352));
    // 0x242908: 0xc073fde  jal         func_1CFF78
    ctx->pc = 0x242908u;
    SET_GPR_U32(ctx, 31, 0x242910u);
    ctx->pc = 0x24290Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242908u;
    // 0x24290c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x242908u, 0x242910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242910u;
label_242910:
    // 0x242910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242914: 0xc08dc16  jal         func_237058
    ctx->pc = 0x242914u;
    SET_GPR_U32(ctx, 31, 0x24291Cu);
    ctx->pc = 0x242918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242914u;
    // 0x242918: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237058u, 0x242914u, 0x24291Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24291Cu;
label_24291c:
    // 0x24291c: 0xc6010500  lwc1        $f1, 0x500($s0)
    ctx->pc = 0x24291cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x242920: 0x3c01bf66  lui         $at, 0xBF66
    ctx->pc = 0x242920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48998 << 16));
    // 0x242924: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x242924u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x242928: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x242928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24292c: 0x0  nop
    ctx->pc = 0x24292cu;
    // NOP
    // 0x242930: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x242930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242934: 0x0  nop
    ctx->pc = 0x242934u;
    // NOP
    // 0x242938: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x242938u;
    {
        const bool branch_taken_0x242938 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242938u;
        // 0x24293c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242938) {
            ctx->pc = 0x24294Cu;
            goto label_24294c;
        }
    }
    ctx->pc = 0x242940u;
    // 0x242940: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x242940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242944: 0xc08bf70  jal         func_22FDC0
    ctx->pc = 0x242944u;
    SET_GPR_U32(ctx, 31, 0x24294Cu);
    ctx->pc = 0x242948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242944u;
    // 0x242948: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FDC0u, 0x242944u, 0x24294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24294Cu;
label_24294c:
    // 0x24294c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24294cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242950: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x242950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x242954: 0x3e00008  jr          $ra
    ctx->pc = 0x242954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242954u;
        // 0x242958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24295Cu;
    // 0x24295c: 0x0  nop
    ctx->pc = 0x24295cu;
    // NOP
    ctx->pc = 0x242960u;
}
