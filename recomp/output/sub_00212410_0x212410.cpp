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

// Function: sub_00212410
// Address: 0x212410 - 0x2124a0
void sub_00212410_0x212410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212410_0x212410");
#endif

    switch (ctx->pc) {
        case 0x212468u: goto label_212468;
        case 0x212474u: goto label_212474;
        case 0x212480u: goto label_212480;
        default: break;
    }

    ctx->pc = 0x212410u;

    // 0x212410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x212410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x212414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x212414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212418: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x212418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21241c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21241cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212420: 0x920200c1  lbu         $v0, 0xC1($s0)
    ctx->pc = 0x212420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 193)));
    // 0x212424: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x212424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x212428: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x212428u;
    {
        const bool branch_taken_0x212428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212428u;
        // 0x21242c: 0x46006046  mov.s       $f1, $f12 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212428) {
            ctx->pc = 0x212488u;
            goto label_212488;
        }
    }
    ctx->pc = 0x212430u;
    // 0x212430: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x212430u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212434: 0x0  nop
    ctx->pc = 0x212434u;
    // NOP
    // 0x212438: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x212438u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21243c: 0x0  nop
    ctx->pc = 0x21243cu;
    // NOP
    // 0x212440: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x212440u;
    {
        const bool branch_taken_0x212440 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x212444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212440u;
        // 0x212444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212440) {
            ctx->pc = 0x21248Cu;
            goto label_21248c;
        }
    }
    ctx->pc = 0x212448u;
    // 0x212448: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x212448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x21244c: 0x8c6200a8  lw          $v0, 0xA8($v1)
    ctx->pc = 0x21244cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x212450: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x212450u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x212454: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x212454u;
    {
        const bool branch_taken_0x212454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212454u;
        // 0x212458: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212454) {
            ctx->pc = 0x21248Cu;
            goto label_21248c;
        }
    }
    ctx->pc = 0x21245Cu;
    // 0x21245c: 0xc60c00d0  lwc1        $f12, 0xD0($s0)
    ctx->pc = 0x21245cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x212460: 0xc083976  jal         func_20E5D8
    ctx->pc = 0x212460u;
    SET_GPR_U32(ctx, 31, 0x212468u);
    ctx->pc = 0x212464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212460u;
    // 0x212464: 0x46016301  sub.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E5D8u, 0x212460u, 0x212468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212468u;
label_212468:
    // 0x212468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21246c: 0xc084288  jal         func_210A20
    ctx->pc = 0x21246Cu;
    SET_GPR_U32(ctx, 31, 0x212474u);
    ctx->pc = 0x212470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21246Cu;
    // 0x212470: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210A20u, 0x21246Cu, 0x212474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212474u;
label_212474:
    // 0x212474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212478: 0xc0cda26  jal         func_336898
    ctx->pc = 0x212478u;
    SET_GPR_U32(ctx, 31, 0x212480u);
    ctx->pc = 0x21247Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212478u;
    // 0x21247c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x212478u, 0x212480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212480u;
label_212480:
    // 0x212480: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x212480u;
    {
        const bool branch_taken_0x212480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212480u;
        // 0x212484: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212480) {
            ctx->pc = 0x21248Cu;
            goto label_21248c;
        }
    }
    ctx->pc = 0x212488u;
label_212488:
    // 0x212488: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x212488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21248c:
    // 0x21248c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21248cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212490: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x212490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x212494: 0x3e00008  jr          $ra
    ctx->pc = 0x212494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212494u;
        // 0x212498: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21249Cu;
    // 0x21249c: 0x0  nop
    ctx->pc = 0x21249cu;
    // NOP
    ctx->pc = 0x2124a0u;
}
