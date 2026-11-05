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

// Function: sub_00124430
// Address: 0x124430 - 0x1244e8
void sub_00124430_0x124430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124430_0x124430");
#endif

    switch (ctx->pc) {
        case 0x124458u: goto label_124458;
        case 0x1244b0u: goto label_1244b0;
        case 0x1244c4u: goto label_1244c4;
        default: break;
    }

    ctx->pc = 0x124430u;

    // 0x124430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x124430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x124434: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x124434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x124438: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x124438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12443c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12443cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124440: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x124440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124444: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x124444u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124448: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x124448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12444c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x12444cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124450: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x124450u;
    SET_GPR_U32(ctx, 31, 0x124458u);
    ctx->pc = 0x124454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124450u;
    // 0x124454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x124450u, 0x124458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124458u;
label_124458:
    // 0x124458: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x124458u;
    {
        const bool branch_taken_0x124458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124458) {
            ctx->pc = 0x12445Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124458u;
            // 0x12445c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1244D0u;
            goto label_1244d0;
        }
    }
    ctx->pc = 0x124460u;
    // 0x124460: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x124460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x124464: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x124464u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x124468: 0x0  nop
    ctx->pc = 0x124468u;
    // NOP
    // 0x12446c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x12446cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x124470: 0x0  nop
    ctx->pc = 0x124470u;
    // NOP
    // 0x124474: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x124474u;
    {
        const bool branch_taken_0x124474 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x124474) {
            ctx->pc = 0x124478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124474u;
            // 0x124478: 0x8e440078  lw          $a0, 0x78($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1244A8u;
            goto label_1244a8;
        }
    }
    ctx->pc = 0x12447Cu;
    // 0x12447c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x12447cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x124480: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x124480u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x124484: 0x0  nop
    ctx->pc = 0x124484u;
    // NOP
    // 0x124488: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x124488u;
    {
        const bool branch_taken_0x124488 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x124488) {
            ctx->pc = 0x12448Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124488u;
            // 0x12448c: 0x8e440078  lw          $a0, 0x78($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1244A8u;
            goto label_1244a8;
        }
    }
    ctx->pc = 0x124490u;
    // 0x124490: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x124490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x124494: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x124494u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x124498: 0x0  nop
    ctx->pc = 0x124498u;
    // NOP
    // 0x12449c: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x12449Cu;
    {
        const bool branch_taken_0x12449c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1244A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12449Cu;
        // 0x1244a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12449c) {
            ctx->pc = 0x1244D0u;
            goto label_1244d0;
        }
    }
    ctx->pc = 0x1244A4u;
    // 0x1244a4: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x1244a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_1244a8:
    // 0x1244a8: 0xc042b18  jal         func_10AC60
    ctx->pc = 0x1244A8u;
    SET_GPR_U32(ctx, 31, 0x1244B0u);
    ctx->pc = 0x1244ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1244A8u;
    // 0x1244ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AC60u, 0x1244A8u, 0x1244B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1244B0u;
label_1244b0:
    // 0x1244b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1244B0u;
    {
        const bool branch_taken_0x1244b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1244B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244B0u;
        // 0x1244b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1244b0) {
            ctx->pc = 0x1244CCu;
            goto label_1244cc;
        }
    }
    ctx->pc = 0x1244B8u;
    // 0x1244b8: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x1244b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x1244bc: 0xc042cda  jal         func_10B368
    ctx->pc = 0x1244BCu;
    SET_GPR_U32(ctx, 31, 0x1244C4u);
    ctx->pc = 0x1244C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1244BCu;
    // 0x1244c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B368u, 0x1244BCu, 0x1244C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1244C4u;
label_1244c4:
    // 0x1244c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1244C4u;
    {
        const bool branch_taken_0x1244c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1244C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244C4u;
        // 0x1244c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1244c4) {
            ctx->pc = 0x1244D0u;
            goto label_1244d0;
        }
    }
    ctx->pc = 0x1244CCu;
label_1244cc:
    // 0x1244cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1244ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1244d0:
    // 0x1244d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1244d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1244d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1244d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1244d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1244d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1244dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1244dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1244e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1244E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1244E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244E0u;
        // 0x1244e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1244E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1244E8u;
}
