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

// Function: sub_0036CF98
// Address: 0x36cf98 - 0x36d048
void sub_0036CF98_0x36cf98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036CF98_0x36cf98");
#endif

    switch (ctx->pc) {
        case 0x36cfc4u: goto label_36cfc4;
        default: break;
    }

    ctx->pc = 0x36cf98u;

    // 0x36cf98: 0x84820008  lh          $v0, 0x8($a0)
    ctx->pc = 0x36cf98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x36cf9c: 0x3c01c4d7  lui         $at, 0xC4D7
    ctx->pc = 0x36cf9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50391 << 16));
    // 0x36cfa0: 0x3421c000  ori         $at, $at, 0xC000
    ctx->pc = 0x36cfa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49152);
    // 0x36cfa4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x36cfa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36cfa8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x36cfa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36cfac: 0x0  nop
    ctx->pc = 0x36cfacu;
    // NOP
    // 0x36cfb0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x36cfb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x36cfb4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x36cfb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36cfb8: 0x0  nop
    ctx->pc = 0x36cfb8u;
    // NOP
    // 0x36cfbc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x36CFBCu;
    {
        const bool branch_taken_0x36cfbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x36CFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CFBCu;
        // 0x36cfc0: 0x8483000a  lh          $v1, 0xA($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cfbc) {
            ctx->pc = 0x36CFCCu;
            goto label_36cfcc;
        }
    }
    ctx->pc = 0x36CFC4u;
label_36cfc4:
    // 0x36cfc4: 0x3e00008  jr          $ra
    ctx->pc = 0x36CFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CFC4u;
        // 0x36cfc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CFCCu;
label_36cfcc:
    // 0x36cfcc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x36cfccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x36cfd0: 0x0  nop
    ctx->pc = 0x36cfd0u;
    // NOP
    // 0x36cfd4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x36cfd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x36cfd8: 0x3c01c4df  lui         $at, 0xC4DF
    ctx->pc = 0x36cfd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50399 << 16));
    // 0x36cfdc: 0x3421c000  ori         $at, $at, 0xC000
    ctx->pc = 0x36cfdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49152);
    // 0x36cfe0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x36cfe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36cfe4: 0x0  nop
    ctx->pc = 0x36cfe4u;
    // NOP
    // 0x36cfe8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x36cfe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36cfec: 0x0  nop
    ctx->pc = 0x36cfecu;
    // NOP
    // 0x36cff0: 0x4501fff4  bc1t        . + 4 + (-0xC << 2)
    ctx->pc = 0x36CFF0u;
    {
        const bool branch_taken_0x36cff0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x36cff0) {
            ctx->pc = 0x36CFC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36cfc4;
        }
    }
    ctx->pc = 0x36CFF8u;
    // 0x36cff8: 0x3c014513  lui         $at, 0x4513
    ctx->pc = 0x36cff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17683 << 16));
    // 0x36cffc: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x36cffcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
    // 0x36d000: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x36d000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d004: 0x0  nop
    ctx->pc = 0x36d004u;
    // NOP
    // 0x36d008: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x36d008u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36d00c: 0x0  nop
    ctx->pc = 0x36d00cu;
    // NOP
    // 0x36d010: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x36D010u;
    {
        const bool branch_taken_0x36d010 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x36D014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D010u;
        // 0x36d014: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d010) {
            ctx->pc = 0x36D040u;
            goto label_36d040;
        }
    }
    ctx->pc = 0x36D018u;
    // 0x36d018: 0x3c01450f  lui         $at, 0x450F
    ctx->pc = 0x36d018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17679 << 16));
    // 0x36d01c: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x36d01cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
    // 0x36d020: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x36d020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d024: 0x0  nop
    ctx->pc = 0x36d024u;
    // NOP
    // 0x36d028: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x36d028u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36d02c: 0x0  nop
    ctx->pc = 0x36d02cu;
    // NOP
    // 0x36d030: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x36D030u;
    {
        const bool branch_taken_0x36d030 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x36d030) {
            ctx->pc = 0x36D040u;
            goto label_36d040;
        }
    }
    ctx->pc = 0x36D038u;
    // 0x36d038: 0x3e00008  jr          $ra
    ctx->pc = 0x36D038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D038u;
        // 0x36d03c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D040u;
label_36d040:
    // 0x36d040: 0x3e00008  jr          $ra
    ctx->pc = 0x36D040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D048u;
}
