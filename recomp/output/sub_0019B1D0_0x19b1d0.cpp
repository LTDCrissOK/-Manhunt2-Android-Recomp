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

// Function: sub_0019B1D0
// Address: 0x19b1d0 - 0x19b268
void sub_0019B1D0_0x19b1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B1D0_0x19b1d0");
#endif

    switch (ctx->pc) {
        case 0x19b1e8u: goto label_19b1e8;
        case 0x19b230u: goto label_19b230;
        case 0x19b23cu: goto label_19b23c;
        case 0x19b24cu: goto label_19b24c;
        default: break;
    }

    ctx->pc = 0x19b1d0u;

    // 0x19b1d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19b1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19b1d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19b1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19b1d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19b1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19b1dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19b1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19b1e0: 0xc061a26  jal         func_186898
    ctx->pc = 0x19B1E0u;
    SET_GPR_U32(ctx, 31, 0x19B1E8u);
    ctx->pc = 0x19B1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B1E0u;
    // 0x19b1e4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x19B1E0u, 0x19B1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B1E8u;
label_19b1e8:
    // 0x19b1e8: 0x24420110  addiu       $v0, $v0, 0x110
    ctx->pc = 0x19b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x19b1ec: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x19b1ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x19b1f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19b1f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19b1f4: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x19b1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b1f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19b1f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19b1fc: 0x0  nop
    ctx->pc = 0x19b1fcu;
    // NOP
    // 0x19b200: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x19B200u;
    {
        const bool branch_taken_0x19b200 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19b200) {
            ctx->pc = 0x19B244u;
            goto label_19b244;
        }
    }
    ctx->pc = 0x19B208u;
    // 0x19b208: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x19b208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b20c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x19b20cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x19b210: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19b210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19b214: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x19b214u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x19b218: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19b218u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19b21c: 0x0  nop
    ctx->pc = 0x19b21cu;
    // NOP
    // 0x19b220: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x19B220u;
    {
        const bool branch_taken_0x19b220 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19B224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B220u;
        // 0x19b224: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b220) {
            ctx->pc = 0x19B244u;
            goto label_19b244;
        }
    }
    ctx->pc = 0x19B228u;
    // 0x19b228: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19B228u;
    SET_GPR_U32(ctx, 31, 0x19B230u);
    ctx->pc = 0x19B22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B228u;
    // 0x19b22c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19B228u, 0x19B230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B230u;
label_19b230:
    // 0x19b230: 0xac500158  sw          $s0, 0x158($v0)
    ctx->pc = 0x19b230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 16));
    // 0x19b234: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19B234u;
    SET_GPR_U32(ctx, 31, 0x19B23Cu);
    ctx->pc = 0x19B238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B234u;
    // 0x19b238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19B234u, 0x19B23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B23Cu;
label_19b23c:
    // 0x19b23c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19B23Cu;
    {
        const bool branch_taken_0x19b23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B23Cu;
        // 0x19b240: 0xac50015c  sw          $s0, 0x15C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 348), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b23c) {
            ctx->pc = 0x19B250u;
            goto label_19b250;
        }
    }
    ctx->pc = 0x19B244u;
label_19b244:
    // 0x19b244: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19B244u;
    SET_GPR_U32(ctx, 31, 0x19B24Cu);
    ctx->pc = 0x19B248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B244u;
    // 0x19b248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19B244u, 0x19B24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B24Cu;
label_19b24c:
    // 0x19b24c: 0xac40015c  sw          $zero, 0x15C($v0)
    ctx->pc = 0x19b24cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 348), GPR_U32(ctx, 0));
label_19b250:
    // 0x19b250: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19b250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b254: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19b254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19b258: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19b258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b25c: 0x3e00008  jr          $ra
    ctx->pc = 0x19B25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B25Cu;
        // 0x19b260: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B25Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B264u;
    // 0x19b264: 0x0  nop
    ctx->pc = 0x19b264u;
    // NOP
    ctx->pc = 0x19b268u;
}
