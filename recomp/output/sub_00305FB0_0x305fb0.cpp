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

// Function: sub_00305FB0
// Address: 0x305fb0 - 0x306048
void sub_00305FB0_0x305fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305FB0_0x305fb0");
#endif

    switch (ctx->pc) {
        case 0x305fc8u: goto label_305fc8;
        case 0x305fd0u: goto label_305fd0;
        case 0x306010u: goto label_306010;
        default: break;
    }

    ctx->pc = 0x305fb0u;

    // 0x305fb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x305fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x305fb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x305fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x305fb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x305fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x305fbc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x305fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x305fc0: 0xc09073a  jal         func_241CE8
    ctx->pc = 0x305FC0u;
    SET_GPR_U32(ctx, 31, 0x305FC8u);
    ctx->pc = 0x305FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305FC0u;
    // 0x305fc4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241CE8u, 0x305FC0u, 0x305FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305FC8u;
label_305fc8:
    // 0x305fc8: 0xc092f8a  jal         func_24BE28
    ctx->pc = 0x305FC8u;
    SET_GPR_U32(ctx, 31, 0x305FD0u);
    ctx->pc = 0x305FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305FC8u;
    // 0x305fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BE28u, 0x305FC8u, 0x305FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305FD0u;
label_305fd0:
    // 0x305fd0: 0xc6000378  lwc1        $f0, 0x378($s0)
    ctx->pc = 0x305fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x305fd4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x305fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x305fd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x305fd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x305fdc: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x305fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x305fe0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x305fe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x305fe4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x305fe4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x305fe8: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x305fe8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x305fec: 0x0  nop
    ctx->pc = 0x305fecu;
    // NOP
    // 0x305ff0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x305FF0u;
    {
        const bool branch_taken_0x305ff0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x305FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305FF0u;
        // 0x305ff4: 0x3c110080  lui         $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305ff0) {
            ctx->pc = 0x306020u;
            goto label_306020;
        }
    }
    ctx->pc = 0x305FF8u;
    // 0x305ff8: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x305ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x305ffc: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x305ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x306000: 0x5051000d  beql        $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x306000u;
    {
        const bool branch_taken_0x306000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x306000) {
            ctx->pc = 0x306004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306000u;
            // 0x306004: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306038u;
            goto label_306038;
        }
    }
    ctx->pc = 0x306008u;
    // 0x306008: 0xc0c56f4  jal         func_315BD0
    ctx->pc = 0x306008u;
    SET_GPR_U32(ctx, 31, 0x306010u);
    ctx->pc = 0x30600Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306008u;
    // 0x30600c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315BD0u, 0x306008u, 0x306010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306010u;
label_306010:
    // 0x306010: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x306010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x306014: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x306014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x306018: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x306018u;
    {
        const bool branch_taken_0x306018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306018u;
        // 0x30601c: 0xae0211c0  sw          $v0, 0x11C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306018) {
            ctx->pc = 0x306034u;
            goto label_306034;
        }
    }
    ctx->pc = 0x306020u;
label_306020:
    // 0x306020: 0x8e0311c0  lw          $v1, 0x11C0($s0)
    ctx->pc = 0x306020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x306024: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x306024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x306028: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x306028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30602c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x30602cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x306030: 0xae0311c0  sw          $v1, 0x11C0($s0)
    ctx->pc = 0x306030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 3));
label_306034:
    // 0x306034: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x306034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_306038:
    // 0x306038: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x306038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30603c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30603cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306040: 0x3e00008  jr          $ra
    ctx->pc = 0x306040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306040u;
        // 0x306044: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306048u;
}
