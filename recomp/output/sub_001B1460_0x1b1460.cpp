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

// Function: sub_001B1460
// Address: 0x1b1460 - 0x1b1518
void sub_001B1460_0x1b1460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1460_0x1b1460");
#endif

    switch (ctx->pc) {
        case 0x1b1474u: goto label_1b1474;
        case 0x1b1504u: goto label_1b1504;
        default: break;
    }

    ctx->pc = 0x1b1460u;

    // 0x1b1460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1464: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b1464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1468: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b1468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b146c: 0xc06c61a  jal         func_1B1868
    ctx->pc = 0x1B146Cu;
    SET_GPR_U32(ctx, 31, 0x1B1474u);
    ctx->pc = 0x1B1470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B146Cu;
    // 0x1b1470: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1868u, 0x1B146Cu, 0x1B1474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1474u;
label_1b1474:
    // 0x1b1474: 0xc60100a8  lwc1        $f1, 0xA8($s0)
    ctx->pc = 0x1b1474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1478: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1b1478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b147c: 0x0  nop
    ctx->pc = 0x1b147cu;
    // NOP
    // 0x1b1480: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1b1480u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1484: 0x0  nop
    ctx->pc = 0x1b1484u;
    // NOP
    // 0x1b1488: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1B1488u;
    {
        const bool branch_taken_0x1b1488 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1488u;
        // 0x1b148c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1488) {
            ctx->pc = 0x1B14ACu;
            goto label_1b14ac;
        }
    }
    ctx->pc = 0x1B1490u;
    // 0x1b1490: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x1b1490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1494: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b1494u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b1498: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1b1498u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b149c: 0x0  nop
    ctx->pc = 0x1b149cu;
    // NOP
    // 0x1b14a0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B14A0u;
    {
        const bool branch_taken_0x1b14a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B14A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14A0u;
        // 0x1b14a4: 0xe60000a8  swc1        $f0, 0xA8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b14a0) {
            ctx->pc = 0x1B14ACu;
            goto label_1b14ac;
        }
    }
    ctx->pc = 0x1B14A8u;
    // 0x1b14a8: 0xe60200a8  swc1        $f2, 0xA8($s0)
    ctx->pc = 0x1b14a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
label_1b14ac:
    // 0x1b14ac: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1b14acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b14b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b14b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b14b4: 0x0  nop
    ctx->pc = 0x1b14b4u;
    // NOP
    // 0x1b14b8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1b14b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b14bc: 0x0  nop
    ctx->pc = 0x1b14bcu;
    // NOP
    // 0x1b14c0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1B14C0u;
    {
        const bool branch_taken_0x1b14c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B14C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14C0u;
        // 0x1b14c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b14c0) {
            ctx->pc = 0x1B14FCu;
            goto label_1b14fc;
        }
    }
    ctx->pc = 0x1B14C8u;
    // 0x1b14c8: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x1b14c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1b14cc: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x1b14ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x1b14d0: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1b14d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b14d4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B14D4u;
    {
        const bool branch_taken_0x1b14d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B14D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14D4u;
        // 0x1b14d8: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b14d4) {
            ctx->pc = 0x1B14FCu;
            goto label_1b14fc;
        }
    }
    ctx->pc = 0x1B14DCu;
    // 0x1b14dc: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x1b14dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b14e0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1b14e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1b14e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b14e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b14e8: 0x0  nop
    ctx->pc = 0x1b14e8u;
    // NOP
    // 0x1b14ec: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B14ECu;
    {
        const bool branch_taken_0x1b14ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B14F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14ECu;
        // 0x1b14f0: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b14ec) {
            ctx->pc = 0x1B14FCu;
            goto label_1b14fc;
        }
    }
    ctx->pc = 0x1B14F4u;
    // 0x1b14f4: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x1b14f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1b14f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b14f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b14fc:
    // 0x1b14fc: 0xc06c546  jal         func_1B1518
    ctx->pc = 0x1B14FCu;
    SET_GPR_U32(ctx, 31, 0x1B1504u);
    ctx->pc = 0x1B1500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B14FCu;
    // 0x1b1500: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x1B14FCu, 0x1B1504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1504u;
label_1b1504:
    // 0x1b1504: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1508: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b1508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b150c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B150Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B150Cu;
        // 0x1b1510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B150Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1514u;
    // 0x1b1514: 0x0  nop
    ctx->pc = 0x1b1514u;
    // NOP
    ctx->pc = 0x1b1518u;
}
