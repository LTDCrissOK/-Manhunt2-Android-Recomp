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

// Function: sub_002420E8
// Address: 0x2420e8 - 0x2421a0
void sub_002420E8_0x2420e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002420E8_0x2420e8");
#endif

    switch (ctx->pc) {
        case 0x242110u: goto label_242110;
        case 0x242138u: goto label_242138;
        case 0x24218cu: goto label_24218c;
        default: break;
    }

    ctx->pc = 0x2420e8u;

    // 0x2420e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2420e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2420ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2420ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2420f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2420f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2420f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2420f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2420f8: 0x8e070334  lw          $a3, 0x334($s0)
    ctx->pc = 0x2420f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2420fc: 0x8ce401e4  lw          $a0, 0x1E4($a3)
    ctx->pc = 0x2420fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
    // 0x242100: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x242100u;
    {
        const bool branch_taken_0x242100 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x242104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242100u;
        // 0x242104: 0x3c050024  lui         $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242100) {
            ctx->pc = 0x24212Cu;
            goto label_24212c;
        }
    }
    ctx->pc = 0x242108u;
    // 0x242108: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x242108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24210c: 0x24e301ec  addiu       $v1, $a3, 0x1EC
    ctx->pc = 0x24210cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 492));
label_242110:
    // 0x242110: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x242110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x242114: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x242114u;
    {
        const bool branch_taken_0x242114 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x242118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242114u;
        // 0x242118: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242114) {
            ctx->pc = 0x24212Cu;
            goto label_24212c;
        }
    }
    ctx->pc = 0x24211Cu;
    // 0x24211c: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x24211cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x242120: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x242120u;
    {
        const bool branch_taken_0x242120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242120u;
        // 0x242124: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242120) {
            ctx->pc = 0x242110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242110;
        }
    }
    ctx->pc = 0x242128u;
    // 0x242128: 0x8ce401e8  lw          $a0, 0x1E8($a3)
    ctx->pc = 0x242128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_24212c:
    // 0x24212c: 0x24a56540  addiu       $a1, $a1, 0x6540
    ctx->pc = 0x24212cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25920));
    // 0x242130: 0xc073fde  jal         func_1CFF78
    ctx->pc = 0x242130u;
    SET_GPR_U32(ctx, 31, 0x242138u);
    ctx->pc = 0x242134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242130u;
    // 0x242134: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x242130u, 0x242138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242138u;
label_242138:
    // 0x242138: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x242138u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24213c: 0xc600037c  lwc1        $f0, 0x37C($s0)
    ctx->pc = 0x24213cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242140: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x242140u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242144: 0x0  nop
    ctx->pc = 0x242144u;
    // NOP
    // 0x242148: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x242148u;
    {
        const bool branch_taken_0x242148 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x242148) {
            ctx->pc = 0x24214Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242148u;
            // 0x24214c: 0x8e03010c  lw          $v1, 0x10C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242164u;
            goto label_242164;
        }
    }
    ctx->pc = 0x242150u;
    // 0x242150: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x242150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x242154: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x242154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x242158: 0x0  nop
    ctx->pc = 0x242158u;
    // NOP
    // 0x24215c: 0xe600037c  swc1        $f0, 0x37C($s0)
    ctx->pc = 0x24215cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 892), bits); }
    // 0x242160: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x242160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_242164:
    // 0x242164: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x242164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24216c: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x24216cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x242170: 0xac6200d4  sw          $v0, 0xD4($v1)
    ctx->pc = 0x242170u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 2));
    // 0x242174: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x242174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242178: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x242178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x24217c: 0xe4410030  swc1        $f1, 0x30($v0)
    ctx->pc = 0x24217cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x242180: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x242180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x242184: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x242184u;
    SET_GPR_U32(ctx, 31, 0x24218Cu);
    ctx->pc = 0x242188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242184u;
    // 0x242188: 0xe4610038  swc1        $f1, 0x38($v1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x242184u, 0x24218Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24218Cu;
label_24218c:
    // 0x24218c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24218cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242190: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x242190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x242194: 0x3e00008  jr          $ra
    ctx->pc = 0x242194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242194u;
        // 0x242198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24219Cu;
    // 0x24219c: 0x0  nop
    ctx->pc = 0x24219cu;
    // NOP
    ctx->pc = 0x2421a0u;
}
